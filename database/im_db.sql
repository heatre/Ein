create database im_db;
use im_db;
create table users 
(
  user_id int unsigned not null auto_increment,
  login_name varchar(45) not null,
  nickname varchar(45) not null,
  password varchar(1) not null,
  create_time datetime not null,
  login_status tinyint(1) unsigned not null,
  update_time timestamp not null,
  primary key (user_id)
)
COMMENT = '用户基本信息表。';

create table groups
(
   group_id int unsigned not null auto_increment,
   user_id  int unsigned not null ,
   group_name int unsigned not null,
   create_time datetime not null,
   primary key(group_id),
   foreign key(user_id) references users(user_id)
   
)
comment = '用户好友列表分组';

create table relations
(
   relation_id int unsigned not null auto_increment,
   user_id     int unsigned not null ,
   friend_id   int unsigned not null ,
   friend_name varchar(45)  not null ,
   friend_group int unsigned not null,
   create_time datetime     not null ,
   primary key (relation_id),
   foreign key(friend_id) references users(user_id),
   foreign key(user_id) references users(user_id)
)
comment = '用户关系链' ;

create table chatmessage
(
  msg_id int unsigned not null auto_increment,
  msg_sender int unsigned not null,
  msg_receiver int unsigned not null,
  msg_content text not null,
  send_time datetime not null,
  receive_status tinyint(1) not null,
  primary key(msg_id),
  foreign key(msg_sender) references users(user_id),
  foreign key(msg_receiver) references users(user_id)
)
comment ='聊天记录';