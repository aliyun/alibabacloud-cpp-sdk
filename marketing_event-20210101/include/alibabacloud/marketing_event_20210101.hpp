// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MARKETINGEVENT20210101_H_
#define ALIBABACLOUD_MARKETINGEVENT20210101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_MarketingEvent20210101 {
class FindGuestCredentialsRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> activityId{};
  shared_ptr<string> dateTimeString{};
  shared_ptr<string> endDateTime{};
  shared_ptr<string> startDateTime{};

  FindGuestCredentialsRecordRequest() {}

  explicit FindGuestCredentialsRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (dateTimeString) {
      res["DateTimeString"] = boost::any(*dateTimeString);
    }
    if (endDateTime) {
      res["EndDateTime"] = boost::any(*endDateTime);
    }
    if (startDateTime) {
      res["StartDateTime"] = boost::any(*startDateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<string>(boost::any_cast<string>(m["ActivityId"]));
    }
    if (m.find("DateTimeString") != m.end() && !m["DateTimeString"].empty()) {
      dateTimeString = make_shared<string>(boost::any_cast<string>(m["DateTimeString"]));
    }
    if (m.find("EndDateTime") != m.end() && !m["EndDateTime"].empty()) {
      endDateTime = make_shared<string>(boost::any_cast<string>(m["EndDateTime"]));
    }
    if (m.find("StartDateTime") != m.end() && !m["StartDateTime"].empty()) {
      startDateTime = make_shared<string>(boost::any_cast<string>(m["StartDateTime"]));
    }
  }


  virtual ~FindGuestCredentialsRecordRequest() = default;
};
class FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelOneOwner : public Darabonba::Model {
public:
  shared_ptr<string> ownerEmpIdOrTelephone{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerNickName{};

  FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelOneOwner() {}

  explicit FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelOneOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerEmpIdOrTelephone) {
      res["OwnerEmpIdOrTelephone"] = boost::any(*ownerEmpIdOrTelephone);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerNickName) {
      res["OwnerNickName"] = boost::any(*ownerNickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerEmpIdOrTelephone") != m.end() && !m["OwnerEmpIdOrTelephone"].empty()) {
      ownerEmpIdOrTelephone = make_shared<string>(boost::any_cast<string>(m["OwnerEmpIdOrTelephone"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerNickName") != m.end() && !m["OwnerNickName"].empty()) {
      ownerNickName = make_shared<string>(boost::any_cast<string>(m["OwnerNickName"]));
    }
  }


  virtual ~FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelOneOwner() = default;
};
class FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelThreeOwner : public Darabonba::Model {
public:
  shared_ptr<string> ownerEmpIdOrTelephone{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerNickName{};

  FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelThreeOwner() {}

  explicit FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelThreeOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerEmpIdOrTelephone) {
      res["OwnerEmpIdOrTelephone"] = boost::any(*ownerEmpIdOrTelephone);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerNickName) {
      res["OwnerNickName"] = boost::any(*ownerNickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerEmpIdOrTelephone") != m.end() && !m["OwnerEmpIdOrTelephone"].empty()) {
      ownerEmpIdOrTelephone = make_shared<string>(boost::any_cast<string>(m["OwnerEmpIdOrTelephone"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerNickName") != m.end() && !m["OwnerNickName"].empty()) {
      ownerNickName = make_shared<string>(boost::any_cast<string>(m["OwnerNickName"]));
    }
  }


  virtual ~FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelThreeOwner() = default;
};
class FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelTwoOwner : public Darabonba::Model {
public:
  shared_ptr<string> ownerEmpIdOrTelephone{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerNickName{};

  FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelTwoOwner() {}

  explicit FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelTwoOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerEmpIdOrTelephone) {
      res["OwnerEmpIdOrTelephone"] = boost::any(*ownerEmpIdOrTelephone);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerNickName) {
      res["OwnerNickName"] = boost::any(*ownerNickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerEmpIdOrTelephone") != m.end() && !m["OwnerEmpIdOrTelephone"].empty()) {
      ownerEmpIdOrTelephone = make_shared<string>(boost::any_cast<string>(m["OwnerEmpIdOrTelephone"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerNickName") != m.end() && !m["OwnerNickName"].empty()) {
      ownerNickName = make_shared<string>(boost::any_cast<string>(m["OwnerNickName"]));
    }
  }


  virtual ~FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelTwoOwner() = default;
};
class FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo : public Darabonba::Model {
public:
  shared_ptr<long> channelId{};
  shared_ptr<string> channelName{};
  shared_ptr<string> levelOneChannelName{};
  shared_ptr<vector<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelOneOwner>> levelOneOwner{};
  shared_ptr<string> levelThreeChannelName{};
  shared_ptr<vector<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelThreeOwner>> levelThreeOwner{};
  shared_ptr<string> levelTwoChannelName{};
  shared_ptr<vector<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelTwoOwner>> levelTwoOwner{};

  FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo() {}

  explicit FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (channelName) {
      res["ChannelName"] = boost::any(*channelName);
    }
    if (levelOneChannelName) {
      res["LevelOneChannelName"] = boost::any(*levelOneChannelName);
    }
    if (levelOneOwner) {
      vector<boost::any> temp1;
      for(auto item1:*levelOneOwner){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LevelOneOwner"] = boost::any(temp1);
    }
    if (levelThreeChannelName) {
      res["LevelThreeChannelName"] = boost::any(*levelThreeChannelName);
    }
    if (levelThreeOwner) {
      vector<boost::any> temp1;
      for(auto item1:*levelThreeOwner){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LevelThreeOwner"] = boost::any(temp1);
    }
    if (levelTwoChannelName) {
      res["LevelTwoChannelName"] = boost::any(*levelTwoChannelName);
    }
    if (levelTwoOwner) {
      vector<boost::any> temp1;
      for(auto item1:*levelTwoOwner){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LevelTwoOwner"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("ChannelName") != m.end() && !m["ChannelName"].empty()) {
      channelName = make_shared<string>(boost::any_cast<string>(m["ChannelName"]));
    }
    if (m.find("LevelOneChannelName") != m.end() && !m["LevelOneChannelName"].empty()) {
      levelOneChannelName = make_shared<string>(boost::any_cast<string>(m["LevelOneChannelName"]));
    }
    if (m.find("LevelOneOwner") != m.end() && !m["LevelOneOwner"].empty()) {
      if (typeid(vector<boost::any>) == m["LevelOneOwner"].type()) {
        vector<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelOneOwner> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LevelOneOwner"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelOneOwner model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        levelOneOwner = make_shared<vector<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelOneOwner>>(expect1);
      }
    }
    if (m.find("LevelThreeChannelName") != m.end() && !m["LevelThreeChannelName"].empty()) {
      levelThreeChannelName = make_shared<string>(boost::any_cast<string>(m["LevelThreeChannelName"]));
    }
    if (m.find("LevelThreeOwner") != m.end() && !m["LevelThreeOwner"].empty()) {
      if (typeid(vector<boost::any>) == m["LevelThreeOwner"].type()) {
        vector<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelThreeOwner> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LevelThreeOwner"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelThreeOwner model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        levelThreeOwner = make_shared<vector<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelThreeOwner>>(expect1);
      }
    }
    if (m.find("LevelTwoChannelName") != m.end() && !m["LevelTwoChannelName"].empty()) {
      levelTwoChannelName = make_shared<string>(boost::any_cast<string>(m["LevelTwoChannelName"]));
    }
    if (m.find("LevelTwoOwner") != m.end() && !m["LevelTwoOwner"].empty()) {
      if (typeid(vector<boost::any>) == m["LevelTwoOwner"].type()) {
        vector<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelTwoOwner> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LevelTwoOwner"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelTwoOwner model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        levelTwoOwner = make_shared<vector<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfoLevelTwoOwner>>(expect1);
      }
    }
  }


  virtual ~FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo() = default;
};
class FindGuestCredentialsRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> admin{};
  shared_ptr<long> channelId{};
  shared_ptr<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo> channelLevelInfo{};
  shared_ptr<string> companyName{};
  shared_ptr<string> credentialsCode{};
  shared_ptr<string> credentialsName{};
  shared_ptr<string> idNumber{};
  shared_ptr<string> idType{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};

  FindGuestCredentialsRecordResponseBodyData() {}

  explicit FindGuestCredentialsRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (admin) {
      res["Admin"] = boost::any(*admin);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (channelLevelInfo) {
      res["ChannelLevelInfo"] = channelLevelInfo ? boost::any(channelLevelInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (credentialsCode) {
      res["CredentialsCode"] = boost::any(*credentialsCode);
    }
    if (credentialsName) {
      res["CredentialsName"] = boost::any(*credentialsName);
    }
    if (idNumber) {
      res["IdNumber"] = boost::any(*idNumber);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Admin") != m.end() && !m["Admin"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Admin"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      admin = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("ChannelLevelInfo") != m.end() && !m["ChannelLevelInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelLevelInfo"].type()) {
        FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelLevelInfo"]));
        channelLevelInfo = make_shared<FindGuestCredentialsRecordResponseBodyDataChannelLevelInfo>(model1);
      }
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("CredentialsCode") != m.end() && !m["CredentialsCode"].empty()) {
      credentialsCode = make_shared<string>(boost::any_cast<string>(m["CredentialsCode"]));
    }
    if (m.find("CredentialsName") != m.end() && !m["CredentialsName"].empty()) {
      credentialsName = make_shared<string>(boost::any_cast<string>(m["CredentialsName"]));
    }
    if (m.find("IdNumber") != m.end() && !m["IdNumber"].empty()) {
      idNumber = make_shared<string>(boost::any_cast<string>(m["IdNumber"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~FindGuestCredentialsRecordResponseBodyData() = default;
};
class FindGuestCredentialsRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<FindGuestCredentialsRecordResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FindGuestCredentialsRecordResponseBody() {}

  explicit FindGuestCredentialsRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<FindGuestCredentialsRecordResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindGuestCredentialsRecordResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<FindGuestCredentialsRecordResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FindGuestCredentialsRecordResponseBody() = default;
};
class FindGuestCredentialsRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FindGuestCredentialsRecordResponseBody> body{};

  FindGuestCredentialsRecordResponse() {}

  explicit FindGuestCredentialsRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FindGuestCredentialsRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FindGuestCredentialsRecordResponseBody>(model1);
      }
    }
  }


  virtual ~FindGuestCredentialsRecordResponse() = default;
};
class FindGuestTicketRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> activityId{};
  shared_ptr<string> dateTimeString{};
  shared_ptr<string> endDateTime{};
  shared_ptr<string> startDateTime{};

  FindGuestTicketRecordRequest() {}

  explicit FindGuestTicketRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (dateTimeString) {
      res["DateTimeString"] = boost::any(*dateTimeString);
    }
    if (endDateTime) {
      res["EndDateTime"] = boost::any(*endDateTime);
    }
    if (startDateTime) {
      res["StartDateTime"] = boost::any(*startDateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<string>(boost::any_cast<string>(m["ActivityId"]));
    }
    if (m.find("DateTimeString") != m.end() && !m["DateTimeString"].empty()) {
      dateTimeString = make_shared<string>(boost::any_cast<string>(m["DateTimeString"]));
    }
    if (m.find("EndDateTime") != m.end() && !m["EndDateTime"].empty()) {
      endDateTime = make_shared<string>(boost::any_cast<string>(m["EndDateTime"]));
    }
    if (m.find("StartDateTime") != m.end() && !m["StartDateTime"].empty()) {
      startDateTime = make_shared<string>(boost::any_cast<string>(m["StartDateTime"]));
    }
  }


  virtual ~FindGuestTicketRecordRequest() = default;
};
class FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner : public Darabonba::Model {
public:
  shared_ptr<string> ownerEmpIdOrTelephone{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerNickName{};

  FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner() {}

  explicit FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerEmpIdOrTelephone) {
      res["OwnerEmpIdOrTelephone"] = boost::any(*ownerEmpIdOrTelephone);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerNickName) {
      res["OwnerNickName"] = boost::any(*ownerNickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerEmpIdOrTelephone") != m.end() && !m["OwnerEmpIdOrTelephone"].empty()) {
      ownerEmpIdOrTelephone = make_shared<string>(boost::any_cast<string>(m["OwnerEmpIdOrTelephone"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerNickName") != m.end() && !m["OwnerNickName"].empty()) {
      ownerNickName = make_shared<string>(boost::any_cast<string>(m["OwnerNickName"]));
    }
  }


  virtual ~FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner() = default;
};
class FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner : public Darabonba::Model {
public:
  shared_ptr<string> ownerEmpIdOrTelephone{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerNickName{};

  FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner() {}

  explicit FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerEmpIdOrTelephone) {
      res["OwnerEmpIdOrTelephone"] = boost::any(*ownerEmpIdOrTelephone);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerNickName) {
      res["OwnerNickName"] = boost::any(*ownerNickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerEmpIdOrTelephone") != m.end() && !m["OwnerEmpIdOrTelephone"].empty()) {
      ownerEmpIdOrTelephone = make_shared<string>(boost::any_cast<string>(m["OwnerEmpIdOrTelephone"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerNickName") != m.end() && !m["OwnerNickName"].empty()) {
      ownerNickName = make_shared<string>(boost::any_cast<string>(m["OwnerNickName"]));
    }
  }


  virtual ~FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner() = default;
};
class FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner : public Darabonba::Model {
public:
  shared_ptr<string> ownerEmpIdOrTelephone{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerNickName{};

  FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner() {}

  explicit FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerEmpIdOrTelephone) {
      res["OwnerEmpIdOrTelephone"] = boost::any(*ownerEmpIdOrTelephone);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerNickName) {
      res["OwnerNickName"] = boost::any(*ownerNickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerEmpIdOrTelephone") != m.end() && !m["OwnerEmpIdOrTelephone"].empty()) {
      ownerEmpIdOrTelephone = make_shared<string>(boost::any_cast<string>(m["OwnerEmpIdOrTelephone"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerNickName") != m.end() && !m["OwnerNickName"].empty()) {
      ownerNickName = make_shared<string>(boost::any_cast<string>(m["OwnerNickName"]));
    }
  }


  virtual ~FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner() = default;
};
class FindGuestTicketRecordResponseBodyDataChannelLevelInfo : public Darabonba::Model {
public:
  shared_ptr<long> channelId{};
  shared_ptr<string> channelName{};
  shared_ptr<string> levelOneChannelName{};
  shared_ptr<vector<FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner>> levelOneOwner{};
  shared_ptr<string> levelThreeChannelName{};
  shared_ptr<vector<FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner>> levelThreeOwner{};
  shared_ptr<string> levelTwoChannelName{};
  shared_ptr<vector<FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner>> levelTwoOwner{};

  FindGuestTicketRecordResponseBodyDataChannelLevelInfo() {}

  explicit FindGuestTicketRecordResponseBodyDataChannelLevelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (channelName) {
      res["ChannelName"] = boost::any(*channelName);
    }
    if (levelOneChannelName) {
      res["LevelOneChannelName"] = boost::any(*levelOneChannelName);
    }
    if (levelOneOwner) {
      vector<boost::any> temp1;
      for(auto item1:*levelOneOwner){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LevelOneOwner"] = boost::any(temp1);
    }
    if (levelThreeChannelName) {
      res["LevelThreeChannelName"] = boost::any(*levelThreeChannelName);
    }
    if (levelThreeOwner) {
      vector<boost::any> temp1;
      for(auto item1:*levelThreeOwner){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LevelThreeOwner"] = boost::any(temp1);
    }
    if (levelTwoChannelName) {
      res["LevelTwoChannelName"] = boost::any(*levelTwoChannelName);
    }
    if (levelTwoOwner) {
      vector<boost::any> temp1;
      for(auto item1:*levelTwoOwner){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LevelTwoOwner"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("ChannelName") != m.end() && !m["ChannelName"].empty()) {
      channelName = make_shared<string>(boost::any_cast<string>(m["ChannelName"]));
    }
    if (m.find("LevelOneChannelName") != m.end() && !m["LevelOneChannelName"].empty()) {
      levelOneChannelName = make_shared<string>(boost::any_cast<string>(m["LevelOneChannelName"]));
    }
    if (m.find("LevelOneOwner") != m.end() && !m["LevelOneOwner"].empty()) {
      if (typeid(vector<boost::any>) == m["LevelOneOwner"].type()) {
        vector<FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LevelOneOwner"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        levelOneOwner = make_shared<vector<FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelOneOwner>>(expect1);
      }
    }
    if (m.find("LevelThreeChannelName") != m.end() && !m["LevelThreeChannelName"].empty()) {
      levelThreeChannelName = make_shared<string>(boost::any_cast<string>(m["LevelThreeChannelName"]));
    }
    if (m.find("LevelThreeOwner") != m.end() && !m["LevelThreeOwner"].empty()) {
      if (typeid(vector<boost::any>) == m["LevelThreeOwner"].type()) {
        vector<FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LevelThreeOwner"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        levelThreeOwner = make_shared<vector<FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelThreeOwner>>(expect1);
      }
    }
    if (m.find("LevelTwoChannelName") != m.end() && !m["LevelTwoChannelName"].empty()) {
      levelTwoChannelName = make_shared<string>(boost::any_cast<string>(m["LevelTwoChannelName"]));
    }
    if (m.find("LevelTwoOwner") != m.end() && !m["LevelTwoOwner"].empty()) {
      if (typeid(vector<boost::any>) == m["LevelTwoOwner"].type()) {
        vector<FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LevelTwoOwner"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        levelTwoOwner = make_shared<vector<FindGuestTicketRecordResponseBodyDataChannelLevelInfoLevelTwoOwner>>(expect1);
      }
    }
  }


  virtual ~FindGuestTicketRecordResponseBodyDataChannelLevelInfo() = default;
};
class FindGuestTicketRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<FindGuestTicketRecordResponseBodyDataChannelLevelInfo> channelLevelInfo{};
  shared_ptr<string> companyName{};
  shared_ptr<string> equityDates{};
  shared_ptr<long> healthCommitmentStatus{};
  shared_ptr<string> idNumber{};
  shared_ptr<string> idType{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<string> ticketCode{};
  shared_ptr<string> ticketName{};
  shared_ptr<string> ticketType{};

  FindGuestTicketRecordResponseBodyData() {}

  explicit FindGuestTicketRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelLevelInfo) {
      res["ChannelLevelInfo"] = channelLevelInfo ? boost::any(channelLevelInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (equityDates) {
      res["EquityDates"] = boost::any(*equityDates);
    }
    if (healthCommitmentStatus) {
      res["HealthCommitmentStatus"] = boost::any(*healthCommitmentStatus);
    }
    if (idNumber) {
      res["IdNumber"] = boost::any(*idNumber);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (ticketCode) {
      res["TicketCode"] = boost::any(*ticketCode);
    }
    if (ticketName) {
      res["TicketName"] = boost::any(*ticketName);
    }
    if (ticketType) {
      res["TicketType"] = boost::any(*ticketType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelLevelInfo") != m.end() && !m["ChannelLevelInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelLevelInfo"].type()) {
        FindGuestTicketRecordResponseBodyDataChannelLevelInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelLevelInfo"]));
        channelLevelInfo = make_shared<FindGuestTicketRecordResponseBodyDataChannelLevelInfo>(model1);
      }
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("EquityDates") != m.end() && !m["EquityDates"].empty()) {
      equityDates = make_shared<string>(boost::any_cast<string>(m["EquityDates"]));
    }
    if (m.find("HealthCommitmentStatus") != m.end() && !m["HealthCommitmentStatus"].empty()) {
      healthCommitmentStatus = make_shared<long>(boost::any_cast<long>(m["HealthCommitmentStatus"]));
    }
    if (m.find("IdNumber") != m.end() && !m["IdNumber"].empty()) {
      idNumber = make_shared<string>(boost::any_cast<string>(m["IdNumber"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TicketCode") != m.end() && !m["TicketCode"].empty()) {
      ticketCode = make_shared<string>(boost::any_cast<string>(m["TicketCode"]));
    }
    if (m.find("TicketName") != m.end() && !m["TicketName"].empty()) {
      ticketName = make_shared<string>(boost::any_cast<string>(m["TicketName"]));
    }
    if (m.find("TicketType") != m.end() && !m["TicketType"].empty()) {
      ticketType = make_shared<string>(boost::any_cast<string>(m["TicketType"]));
    }
  }


  virtual ~FindGuestTicketRecordResponseBodyData() = default;
};
class FindGuestTicketRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<FindGuestTicketRecordResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FindGuestTicketRecordResponseBody() {}

  explicit FindGuestTicketRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<FindGuestTicketRecordResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindGuestTicketRecordResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<FindGuestTicketRecordResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FindGuestTicketRecordResponseBody() = default;
};
class FindGuestTicketRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FindGuestTicketRecordResponseBody> body{};

  FindGuestTicketRecordResponse() {}

  explicit FindGuestTicketRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FindGuestTicketRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FindGuestTicketRecordResponseBody>(model1);
      }
    }
  }


  virtual ~FindGuestTicketRecordResponse() = default;
};
class QueryAllActivityInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> activityId{};

  QueryAllActivityInfoRequest() {}

  explicit QueryAllActivityInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<string>(boost::any_cast<string>(m["ActivityId"]));
    }
  }


  virtual ~QueryAllActivityInfoRequest() = default;
};
class QueryAllActivityInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> activityId{};
  shared_ptr<string> channelName{};
  shared_ptr<string> companyName{};
  shared_ptr<string> customerName{};
  shared_ptr<string> email{};
  shared_ptr<long> id{};
  shared_ptr<string> isVipCustomer{};
  shared_ptr<string> mobile{};
  shared_ptr<string> QRCode{};
  shared_ptr<string> reportFields{};

  QueryAllActivityInfoResponseBodyData() {}

  explicit QueryAllActivityInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (channelName) {
      res["ChannelName"] = boost::any(*channelName);
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (customerName) {
      res["CustomerName"] = boost::any(*customerName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isVipCustomer) {
      res["IsVipCustomer"] = boost::any(*isVipCustomer);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (QRCode) {
      res["QRCode"] = boost::any(*QRCode);
    }
    if (reportFields) {
      res["ReportFields"] = boost::any(*reportFields);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<long>(boost::any_cast<long>(m["ActivityId"]));
    }
    if (m.find("ChannelName") != m.end() && !m["ChannelName"].empty()) {
      channelName = make_shared<string>(boost::any_cast<string>(m["ChannelName"]));
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("CustomerName") != m.end() && !m["CustomerName"].empty()) {
      customerName = make_shared<string>(boost::any_cast<string>(m["CustomerName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsVipCustomer") != m.end() && !m["IsVipCustomer"].empty()) {
      isVipCustomer = make_shared<string>(boost::any_cast<string>(m["IsVipCustomer"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("QRCode") != m.end() && !m["QRCode"].empty()) {
      QRCode = make_shared<string>(boost::any_cast<string>(m["QRCode"]));
    }
    if (m.find("ReportFields") != m.end() && !m["ReportFields"].empty()) {
      reportFields = make_shared<string>(boost::any_cast<string>(m["ReportFields"]));
    }
  }


  virtual ~QueryAllActivityInfoResponseBodyData() = default;
};
class QueryAllActivityInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryAllActivityInfoResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryAllActivityInfoResponseBody() {}

  explicit QueryAllActivityInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryAllActivityInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAllActivityInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryAllActivityInfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryAllActivityInfoResponseBody() = default;
};
class QueryAllActivityInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAllActivityInfoResponseBody> body{};

  QueryAllActivityInfoResponse() {}

  explicit QueryAllActivityInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryAllActivityInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAllActivityInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAllActivityInfoResponse() = default;
};
class QuerySingleActivityInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> activityId{};
  shared_ptr<string> companyName{};
  shared_ptr<string> customerName{};
  shared_ptr<string> mobile{};
  shared_ptr<string> QRCode{};

  QuerySingleActivityInfoRequest() {}

  explicit QuerySingleActivityInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (customerName) {
      res["CustomerName"] = boost::any(*customerName);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (QRCode) {
      res["QRCode"] = boost::any(*QRCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<string>(boost::any_cast<string>(m["ActivityId"]));
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("CustomerName") != m.end() && !m["CustomerName"].empty()) {
      customerName = make_shared<string>(boost::any_cast<string>(m["CustomerName"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("QRCode") != m.end() && !m["QRCode"].empty()) {
      QRCode = make_shared<string>(boost::any_cast<string>(m["QRCode"]));
    }
  }


  virtual ~QuerySingleActivityInfoRequest() = default;
};
class QuerySingleActivityInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> activityId{};
  shared_ptr<string> channelName{};
  shared_ptr<string> companyName{};
  shared_ptr<string> customerName{};
  shared_ptr<string> email{};
  shared_ptr<long> id{};
  shared_ptr<string> isVipCustomer{};
  shared_ptr<string> mobile{};
  shared_ptr<string> QRCode{};
  shared_ptr<string> reportFields{};

  QuerySingleActivityInfoResponseBodyData() {}

  explicit QuerySingleActivityInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (channelName) {
      res["ChannelName"] = boost::any(*channelName);
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (customerName) {
      res["CustomerName"] = boost::any(*customerName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isVipCustomer) {
      res["IsVipCustomer"] = boost::any(*isVipCustomer);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (QRCode) {
      res["QRCode"] = boost::any(*QRCode);
    }
    if (reportFields) {
      res["ReportFields"] = boost::any(*reportFields);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<long>(boost::any_cast<long>(m["ActivityId"]));
    }
    if (m.find("ChannelName") != m.end() && !m["ChannelName"].empty()) {
      channelName = make_shared<string>(boost::any_cast<string>(m["ChannelName"]));
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("CustomerName") != m.end() && !m["CustomerName"].empty()) {
      customerName = make_shared<string>(boost::any_cast<string>(m["CustomerName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsVipCustomer") != m.end() && !m["IsVipCustomer"].empty()) {
      isVipCustomer = make_shared<string>(boost::any_cast<string>(m["IsVipCustomer"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("QRCode") != m.end() && !m["QRCode"].empty()) {
      QRCode = make_shared<string>(boost::any_cast<string>(m["QRCode"]));
    }
    if (m.find("ReportFields") != m.end() && !m["ReportFields"].empty()) {
      reportFields = make_shared<string>(boost::any_cast<string>(m["ReportFields"]));
    }
  }


  virtual ~QuerySingleActivityInfoResponseBodyData() = default;
};
class QuerySingleActivityInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QuerySingleActivityInfoResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QuerySingleActivityInfoResponseBody() {}

  explicit QuerySingleActivityInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QuerySingleActivityInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySingleActivityInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QuerySingleActivityInfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QuerySingleActivityInfoResponseBody() = default;
};
class QuerySingleActivityInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySingleActivityInfoResponseBody> body{};

  QuerySingleActivityInfoResponse() {}

  explicit QuerySingleActivityInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QuerySingleActivityInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySingleActivityInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySingleActivityInfoResponse() = default;
};
class SyncSignInInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> activityId{};
  shared_ptr<string> QRCode{};

  SyncSignInInfoRequest() {}

  explicit SyncSignInInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (QRCode) {
      res["QRCode"] = boost::any(*QRCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<string>(boost::any_cast<string>(m["ActivityId"]));
    }
    if (m.find("QRCode") != m.end() && !m["QRCode"].empty()) {
      QRCode = make_shared<string>(boost::any_cast<string>(m["QRCode"]));
    }
  }


  virtual ~SyncSignInInfoRequest() = default;
};
class SyncSignInInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncSignInInfoResponseBody() {}

  explicit SyncSignInInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SyncSignInInfoResponseBody() = default;
};
class SyncSignInInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncSignInInfoResponseBody> body{};

  SyncSignInInfoResponse() {}

  explicit SyncSignInInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SyncSignInInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncSignInInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SyncSignInInfoResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  FindGuestCredentialsRecordResponse findGuestCredentialsRecordWithOptions(shared_ptr<FindGuestCredentialsRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FindGuestCredentialsRecordResponse findGuestCredentialsRecord(shared_ptr<FindGuestCredentialsRecordRequest> request);
  FindGuestTicketRecordResponse findGuestTicketRecordWithOptions(shared_ptr<FindGuestTicketRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FindGuestTicketRecordResponse findGuestTicketRecord(shared_ptr<FindGuestTicketRecordRequest> request);
  QueryAllActivityInfoResponse queryAllActivityInfoWithOptions(shared_ptr<QueryAllActivityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAllActivityInfoResponse queryAllActivityInfo(shared_ptr<QueryAllActivityInfoRequest> request);
  QuerySingleActivityInfoResponse querySingleActivityInfoWithOptions(shared_ptr<QuerySingleActivityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySingleActivityInfoResponse querySingleActivityInfo(shared_ptr<QuerySingleActivityInfoRequest> request);
  SyncSignInInfoResponse syncSignInInfoWithOptions(shared_ptr<SyncSignInInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncSignInInfoResponse syncSignInInfo(shared_ptr<SyncSignInInfoRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_MarketingEvent20210101

#endif
