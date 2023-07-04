// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AICCS20230516_H_
#define ALIBABACLOUD_AICCS20230516_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Aiccs20230516 {
class AddBlacklistRequest : public Darabonba::Model {
public:
  shared_ptr<string> expiredDay{};
  shared_ptr<vector<string>> numbers{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AddBlacklistRequest() {}

  explicit AddBlacklistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~AddBlacklistRequest() = default;
};
class AddBlacklistShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> expiredDay{};
  shared_ptr<string> numbersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AddBlacklistShrinkRequest() {}

  explicit AddBlacklistShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    if (numbersShrink) {
      res["Numbers"] = boost::any(*numbersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbersShrink = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~AddBlacklistShrinkRequest() = default;
};
class AddBlacklistResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<string>> unHandleNumbers{};

  AddBlacklistResponseBodyModel() {}

  explicit AddBlacklistResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unHandleNumbers) {
      res["UnHandleNumbers"] = boost::any(*unHandleNumbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnHandleNumbers") != m.end() && !m["UnHandleNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnHandleNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnHandleNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unHandleNumbers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddBlacklistResponseBodyModel() = default;
};
class AddBlacklistResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<AddBlacklistResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  AddBlacklistResponseBody() {}

  explicit AddBlacklistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        AddBlacklistResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<AddBlacklistResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~AddBlacklistResponseBody() = default;
};
class AddBlacklistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddBlacklistResponseBody> body{};

  AddBlacklistResponse() {}

  explicit AddBlacklistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        AddBlacklistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddBlacklistResponseBody>(model1);
      }
    }
  }


  virtual ~AddBlacklistResponse() = default;
};
class AddTaskRequestCallTimeList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> callTime{};

  AddTaskRequestCallTimeList() {}

  explicit AddTaskRequestCallTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callTime = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddTaskRequestCallTimeList() = default;
};
class AddTaskRequestSendSmsPlan : public Darabonba::Model {
public:
  shared_ptr<vector<string>> intentTags{};
  shared_ptr<long> smsTemplateId{};

  AddTaskRequestSendSmsPlan() {}

  explicit AddTaskRequestSendSmsPlan(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentTags) {
      res["IntentTags"] = boost::any(*intentTags);
    }
    if (smsTemplateId) {
      res["SmsTemplateId"] = boost::any(*smsTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentTags") != m.end() && !m["IntentTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IntentTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IntentTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      intentTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SmsTemplateId") != m.end() && !m["SmsTemplateId"].empty()) {
      smsTemplateId = make_shared<long>(boost::any_cast<long>(m["SmsTemplateId"]));
    }
  }


  virtual ~AddTaskRequestSendSmsPlan() = default;
};
class AddTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AddTaskRequestCallTimeList>> callTimeList{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playSleepVal{};
  shared_ptr<long> playTimes{};
  shared_ptr<long> recallType{};
  shared_ptr<string> recordPath{};
  shared_ptr<long> repeatCount{};
  shared_ptr<long> repeatInterval{};
  shared_ptr<vector<string>> repeatReason{};
  shared_ptr<vector<string>> repeatTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<AddTaskRequestSendSmsPlan>> sendSmsPlan{};
  shared_ptr<string> startTime{};
  shared_ptr<long> taskType{};
  shared_ptr<long> templateId{};
  shared_ptr<long> templateType{};

  AddTaskRequest() {}

  explicit AddTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callTimeList) {
      vector<boost::any> temp1;
      for(auto item1:*callTimeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CallTimeList"] = boost::any(temp1);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playSleepVal) {
      res["PlaySleepVal"] = boost::any(*playSleepVal);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (recallType) {
      res["RecallType"] = boost::any(*recallType);
    }
    if (recordPath) {
      res["RecordPath"] = boost::any(*recordPath);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatInterval) {
      res["RepeatInterval"] = boost::any(*repeatInterval);
    }
    if (repeatReason) {
      res["RepeatReason"] = boost::any(*repeatReason);
    }
    if (repeatTimes) {
      res["RepeatTimes"] = boost::any(*repeatTimes);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendSmsPlan) {
      vector<boost::any> temp1;
      for(auto item1:*sendSmsPlan){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SendSmsPlan"] = boost::any(temp1);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallTimeList") != m.end() && !m["CallTimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["CallTimeList"].type()) {
        vector<AddTaskRequestCallTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CallTimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddTaskRequestCallTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callTimeList = make_shared<vector<AddTaskRequestCallTimeList>>(expect1);
      }
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlaySleepVal") != m.end() && !m["PlaySleepVal"].empty()) {
      playSleepVal = make_shared<long>(boost::any_cast<long>(m["PlaySleepVal"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("RecallType") != m.end() && !m["RecallType"].empty()) {
      recallType = make_shared<long>(boost::any_cast<long>(m["RecallType"]));
    }
    if (m.find("RecordPath") != m.end() && !m["RecordPath"].empty()) {
      recordPath = make_shared<string>(boost::any_cast<string>(m["RecordPath"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatInterval") != m.end() && !m["RepeatInterval"].empty()) {
      repeatInterval = make_shared<long>(boost::any_cast<long>(m["RepeatInterval"]));
    }
    if (m.find("RepeatReason") != m.end() && !m["RepeatReason"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatReason"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatReason"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatReason = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RepeatTimes") != m.end() && !m["RepeatTimes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatTimes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatTimes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatTimes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SendSmsPlan") != m.end() && !m["SendSmsPlan"].empty()) {
      if (typeid(vector<boost::any>) == m["SendSmsPlan"].type()) {
        vector<AddTaskRequestSendSmsPlan> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SendSmsPlan"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddTaskRequestSendSmsPlan model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sendSmsPlan = make_shared<vector<AddTaskRequestSendSmsPlan>>(expect1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~AddTaskRequest() = default;
};
class AddTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> callTimeListShrink{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playSleepVal{};
  shared_ptr<long> playTimes{};
  shared_ptr<long> recallType{};
  shared_ptr<string> recordPath{};
  shared_ptr<long> repeatCount{};
  shared_ptr<long> repeatInterval{};
  shared_ptr<string> repeatReasonShrink{};
  shared_ptr<string> repeatTimesShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sendSmsPlanShrink{};
  shared_ptr<string> startTime{};
  shared_ptr<long> taskType{};
  shared_ptr<long> templateId{};
  shared_ptr<long> templateType{};

  AddTaskShrinkRequest() {}

  explicit AddTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callTimeListShrink) {
      res["CallTimeList"] = boost::any(*callTimeListShrink);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playSleepVal) {
      res["PlaySleepVal"] = boost::any(*playSleepVal);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (recallType) {
      res["RecallType"] = boost::any(*recallType);
    }
    if (recordPath) {
      res["RecordPath"] = boost::any(*recordPath);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatInterval) {
      res["RepeatInterval"] = boost::any(*repeatInterval);
    }
    if (repeatReasonShrink) {
      res["RepeatReason"] = boost::any(*repeatReasonShrink);
    }
    if (repeatTimesShrink) {
      res["RepeatTimes"] = boost::any(*repeatTimesShrink);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendSmsPlanShrink) {
      res["SendSmsPlan"] = boost::any(*sendSmsPlanShrink);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallTimeList") != m.end() && !m["CallTimeList"].empty()) {
      callTimeListShrink = make_shared<string>(boost::any_cast<string>(m["CallTimeList"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlaySleepVal") != m.end() && !m["PlaySleepVal"].empty()) {
      playSleepVal = make_shared<long>(boost::any_cast<long>(m["PlaySleepVal"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("RecallType") != m.end() && !m["RecallType"].empty()) {
      recallType = make_shared<long>(boost::any_cast<long>(m["RecallType"]));
    }
    if (m.find("RecordPath") != m.end() && !m["RecordPath"].empty()) {
      recordPath = make_shared<string>(boost::any_cast<string>(m["RecordPath"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatInterval") != m.end() && !m["RepeatInterval"].empty()) {
      repeatInterval = make_shared<long>(boost::any_cast<long>(m["RepeatInterval"]));
    }
    if (m.find("RepeatReason") != m.end() && !m["RepeatReason"].empty()) {
      repeatReasonShrink = make_shared<string>(boost::any_cast<string>(m["RepeatReason"]));
    }
    if (m.find("RepeatTimes") != m.end() && !m["RepeatTimes"].empty()) {
      repeatTimesShrink = make_shared<string>(boost::any_cast<string>(m["RepeatTimes"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SendSmsPlan") != m.end() && !m["SendSmsPlan"].empty()) {
      sendSmsPlanShrink = make_shared<string>(boost::any_cast<string>(m["SendSmsPlan"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~AddTaskShrinkRequest() = default;
};
class AddTaskResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  AddTaskResponseBodyModel() {}

  explicit AddTaskResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~AddTaskResponseBodyModel() = default;
};
class AddTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<AddTaskResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timestamp{};

  AddTaskResponseBody() {}

  explicit AddTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        AddTaskResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<AddTaskResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~AddTaskResponseBody() = default;
};
class AddTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddTaskResponseBody> body{};

  AddTaskResponse() {}

  explicit AddTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        AddTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTaskResponseBody>(model1);
      }
    }
  }


  virtual ~AddTaskResponse() = default;
};
class AgentCancelCallRequest : public Darabonba::Model {
public:
  shared_ptr<long> agentId{};
  shared_ptr<string> agentTag{};
  shared_ptr<vector<string>> numbers{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<string>> tags{};

  AgentCancelCallRequest() {}

  explicit AgentCancelCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentTag) {
      res["AgentTag"] = boost::any(*agentTag);
    }
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AgentTag") != m.end() && !m["AgentTag"].empty()) {
      agentTag = make_shared<string>(boost::any_cast<string>(m["AgentTag"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AgentCancelCallRequest() = default;
};
class AgentCancelCallShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> agentId{};
  shared_ptr<string> agentTag{};
  shared_ptr<string> numbersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tagsShrink{};

  AgentCancelCallShrinkRequest() {}

  explicit AgentCancelCallShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentTag) {
      res["AgentTag"] = boost::any(*agentTag);
    }
    if (numbersShrink) {
      res["Numbers"] = boost::any(*numbersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AgentTag") != m.end() && !m["AgentTag"].empty()) {
      agentTag = make_shared<string>(boost::any_cast<string>(m["AgentTag"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbersShrink = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~AgentCancelCallShrinkRequest() = default;
};
class AgentCancelCallResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<string>> unHandleNumbers{};

  AgentCancelCallResponseBodyModel() {}

  explicit AgentCancelCallResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unHandleNumbers) {
      res["UnHandleNumbers"] = boost::any(*unHandleNumbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnHandleNumbers") != m.end() && !m["UnHandleNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnHandleNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnHandleNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unHandleNumbers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AgentCancelCallResponseBodyModel() = default;
};
class AgentCancelCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<AgentCancelCallResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  AgentCancelCallResponseBody() {}

  explicit AgentCancelCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        AgentCancelCallResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<AgentCancelCallResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~AgentCancelCallResponseBody() = default;
};
class AgentCancelCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AgentCancelCallResponseBody> body{};

  AgentCancelCallResponse() {}

  explicit AgentCancelCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        AgentCancelCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AgentCancelCallResponseBody>(model1);
      }
    }
  }


  virtual ~AgentCancelCallResponse() = default;
};
class AgentRecoverCallRequest : public Darabonba::Model {
public:
  shared_ptr<long> agentId{};
  shared_ptr<string> agentTag{};
  shared_ptr<string> beginImportTime{};
  shared_ptr<string> endImportTime{};
  shared_ptr<vector<string>> numbers{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<string>> tags{};

  AgentRecoverCallRequest() {}

  explicit AgentRecoverCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentTag) {
      res["AgentTag"] = boost::any(*agentTag);
    }
    if (beginImportTime) {
      res["BeginImportTime"] = boost::any(*beginImportTime);
    }
    if (endImportTime) {
      res["EndImportTime"] = boost::any(*endImportTime);
    }
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AgentTag") != m.end() && !m["AgentTag"].empty()) {
      agentTag = make_shared<string>(boost::any_cast<string>(m["AgentTag"]));
    }
    if (m.find("BeginImportTime") != m.end() && !m["BeginImportTime"].empty()) {
      beginImportTime = make_shared<string>(boost::any_cast<string>(m["BeginImportTime"]));
    }
    if (m.find("EndImportTime") != m.end() && !m["EndImportTime"].empty()) {
      endImportTime = make_shared<string>(boost::any_cast<string>(m["EndImportTime"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AgentRecoverCallRequest() = default;
};
class AgentRecoverCallShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> agentId{};
  shared_ptr<string> agentTag{};
  shared_ptr<string> beginImportTime{};
  shared_ptr<string> endImportTime{};
  shared_ptr<string> numbersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tagsShrink{};

  AgentRecoverCallShrinkRequest() {}

  explicit AgentRecoverCallShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentTag) {
      res["AgentTag"] = boost::any(*agentTag);
    }
    if (beginImportTime) {
      res["BeginImportTime"] = boost::any(*beginImportTime);
    }
    if (endImportTime) {
      res["EndImportTime"] = boost::any(*endImportTime);
    }
    if (numbersShrink) {
      res["Numbers"] = boost::any(*numbersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AgentTag") != m.end() && !m["AgentTag"].empty()) {
      agentTag = make_shared<string>(boost::any_cast<string>(m["AgentTag"]));
    }
    if (m.find("BeginImportTime") != m.end() && !m["BeginImportTime"].empty()) {
      beginImportTime = make_shared<string>(boost::any_cast<string>(m["BeginImportTime"]));
    }
    if (m.find("EndImportTime") != m.end() && !m["EndImportTime"].empty()) {
      endImportTime = make_shared<string>(boost::any_cast<string>(m["EndImportTime"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbersShrink = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~AgentRecoverCallShrinkRequest() = default;
};
class AgentRecoverCallResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<string>> unHandleNumbers{};

  AgentRecoverCallResponseBodyModel() {}

  explicit AgentRecoverCallResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unHandleNumbers) {
      res["UnHandleNumbers"] = boost::any(*unHandleNumbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnHandleNumbers") != m.end() && !m["UnHandleNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnHandleNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnHandleNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unHandleNumbers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AgentRecoverCallResponseBodyModel() = default;
};
class AgentRecoverCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<AgentRecoverCallResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  AgentRecoverCallResponseBody() {}

  explicit AgentRecoverCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        AgentRecoverCallResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<AgentRecoverCallResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~AgentRecoverCallResponseBody() = default;
};
class AgentRecoverCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AgentRecoverCallResponseBody> body{};

  AgentRecoverCallResponse() {}

  explicit AgentRecoverCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        AgentRecoverCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AgentRecoverCallResponseBody>(model1);
      }
    }
  }


  virtual ~AgentRecoverCallResponse() = default;
};
class DetailsRequest : public Darabonba::Model {
public:
  shared_ptr<long> batchId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> numberStatus{};
  shared_ptr<vector<string>> numbers{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<long> taskId{};

  DetailsRequest() {}

  explicit DetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (numberStatus) {
      res["NumberStatus"] = boost::any(*numberStatus);
    }
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<long>(boost::any_cast<long>(m["BatchId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("NumberStatus") != m.end() && !m["NumberStatus"].empty()) {
      numberStatus = make_shared<long>(boost::any_cast<long>(m["NumberStatus"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DetailsRequest() = default;
};
class DetailsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> batchId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> numberStatus{};
  shared_ptr<string> numbersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<long> taskId{};

  DetailsShrinkRequest() {}

  explicit DetailsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (numberStatus) {
      res["NumberStatus"] = boost::any(*numberStatus);
    }
    if (numbersShrink) {
      res["Numbers"] = boost::any(*numbersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<long>(boost::any_cast<long>(m["BatchId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("NumberStatus") != m.end() && !m["NumberStatus"].empty()) {
      numberStatus = make_shared<long>(boost::any_cast<long>(m["NumberStatus"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbersShrink = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DetailsShrinkRequest() = default;
};
class DetailsResponseBodyModelList : public Darabonba::Model {
public:
  shared_ptr<long> batchId{};
  shared_ptr<string> callDesc{};
  shared_ptr<string> callId{};
  shared_ptr<long> callStatus{};
  shared_ptr<long> callType{};
  shared_ptr<string> importTime{};
  shared_ptr<string> interceptReason{};
  shared_ptr<string> number{};
  shared_ptr<string> numberDesc{};
  shared_ptr<string> numberMD5{};
  shared_ptr<long> numberStatus{};
  shared_ptr<string> tag{};
  shared_ptr<long> taskId{};

  DetailsResponseBodyModelList() {}

  explicit DetailsResponseBodyModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (callDesc) {
      res["CallDesc"] = boost::any(*callDesc);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (importTime) {
      res["ImportTime"] = boost::any(*importTime);
    }
    if (interceptReason) {
      res["InterceptReason"] = boost::any(*interceptReason);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (numberDesc) {
      res["NumberDesc"] = boost::any(*numberDesc);
    }
    if (numberMD5) {
      res["NumberMD5"] = boost::any(*numberMD5);
    }
    if (numberStatus) {
      res["NumberStatus"] = boost::any(*numberStatus);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<long>(boost::any_cast<long>(m["BatchId"]));
    }
    if (m.find("CallDesc") != m.end() && !m["CallDesc"].empty()) {
      callDesc = make_shared<string>(boost::any_cast<string>(m["CallDesc"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<long>(boost::any_cast<long>(m["CallStatus"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("ImportTime") != m.end() && !m["ImportTime"].empty()) {
      importTime = make_shared<string>(boost::any_cast<string>(m["ImportTime"]));
    }
    if (m.find("InterceptReason") != m.end() && !m["InterceptReason"].empty()) {
      interceptReason = make_shared<string>(boost::any_cast<string>(m["InterceptReason"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("NumberDesc") != m.end() && !m["NumberDesc"].empty()) {
      numberDesc = make_shared<string>(boost::any_cast<string>(m["NumberDesc"]));
    }
    if (m.find("NumberMD5") != m.end() && !m["NumberMD5"].empty()) {
      numberMD5 = make_shared<string>(boost::any_cast<string>(m["NumberMD5"]));
    }
    if (m.find("NumberStatus") != m.end() && !m["NumberStatus"].empty()) {
      numberStatus = make_shared<long>(boost::any_cast<long>(m["NumberStatus"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DetailsResponseBodyModelList() = default;
};
class DetailsResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<DetailsResponseBodyModelList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<double> totalPage{};

  DetailsResponseBodyModel() {}

  explicit DetailsResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DetailsResponseBodyModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetailsResponseBodyModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DetailsResponseBodyModelList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<double>(boost::any_cast<double>(m["TotalPage"]));
    }
  }


  virtual ~DetailsResponseBodyModel() = default;
};
class DetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<DetailsResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timestamp{};

  DetailsResponseBody() {}

  explicit DetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        DetailsResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<DetailsResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DetailsResponseBody() = default;
};
class DetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetailsResponseBody> body{};

  DetailsResponse() {}

  explicit DetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        DetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetailsResponseBody>(model1);
      }
    }
  }


  virtual ~DetailsResponse() = default;
};
class EditTaskRequestCallTimeList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> callTime{};

  EditTaskRequestCallTimeList() {}

  explicit EditTaskRequestCallTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallTime"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallTime"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callTime = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EditTaskRequestCallTimeList() = default;
};
class EditTaskRequestSendSmsPlan : public Darabonba::Model {
public:
  shared_ptr<vector<string>> intentTags{};
  shared_ptr<long> smsTemplateId{};

  EditTaskRequestSendSmsPlan() {}

  explicit EditTaskRequestSendSmsPlan(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentTags) {
      res["IntentTags"] = boost::any(*intentTags);
    }
    if (smsTemplateId) {
      res["SmsTemplateId"] = boost::any(*smsTemplateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentTags") != m.end() && !m["IntentTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IntentTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IntentTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      intentTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SmsTemplateId") != m.end() && !m["SmsTemplateId"].empty()) {
      smsTemplateId = make_shared<long>(boost::any_cast<long>(m["SmsTemplateId"]));
    }
  }


  virtual ~EditTaskRequestSendSmsPlan() = default;
};
class EditTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<EditTaskRequestCallTimeList>> callTimeList{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playSleepVal{};
  shared_ptr<long> playTimes{};
  shared_ptr<long> recallType{};
  shared_ptr<string> recordPath{};
  shared_ptr<long> repeatCount{};
  shared_ptr<long> repeatInterval{};
  shared_ptr<vector<long>> repeatReason{};
  shared_ptr<vector<string>> repeatTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<EditTaskRequestSendSmsPlan>> sendSmsPlan{};
  shared_ptr<long> status{};
  shared_ptr<long> taskId{};
  shared_ptr<long> templateId{};
  shared_ptr<long> templateType{};

  EditTaskRequest() {}

  explicit EditTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callTimeList) {
      vector<boost::any> temp1;
      for(auto item1:*callTimeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CallTimeList"] = boost::any(temp1);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playSleepVal) {
      res["PlaySleepVal"] = boost::any(*playSleepVal);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (recallType) {
      res["RecallType"] = boost::any(*recallType);
    }
    if (recordPath) {
      res["RecordPath"] = boost::any(*recordPath);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatInterval) {
      res["RepeatInterval"] = boost::any(*repeatInterval);
    }
    if (repeatReason) {
      res["RepeatReason"] = boost::any(*repeatReason);
    }
    if (repeatTimes) {
      res["RepeatTimes"] = boost::any(*repeatTimes);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendSmsPlan) {
      vector<boost::any> temp1;
      for(auto item1:*sendSmsPlan){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SendSmsPlan"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallTimeList") != m.end() && !m["CallTimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["CallTimeList"].type()) {
        vector<EditTaskRequestCallTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CallTimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EditTaskRequestCallTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callTimeList = make_shared<vector<EditTaskRequestCallTimeList>>(expect1);
      }
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlaySleepVal") != m.end() && !m["PlaySleepVal"].empty()) {
      playSleepVal = make_shared<long>(boost::any_cast<long>(m["PlaySleepVal"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("RecallType") != m.end() && !m["RecallType"].empty()) {
      recallType = make_shared<long>(boost::any_cast<long>(m["RecallType"]));
    }
    if (m.find("RecordPath") != m.end() && !m["RecordPath"].empty()) {
      recordPath = make_shared<string>(boost::any_cast<string>(m["RecordPath"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatInterval") != m.end() && !m["RepeatInterval"].empty()) {
      repeatInterval = make_shared<long>(boost::any_cast<long>(m["RepeatInterval"]));
    }
    if (m.find("RepeatReason") != m.end() && !m["RepeatReason"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatReason"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatReason"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      repeatReason = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RepeatTimes") != m.end() && !m["RepeatTimes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RepeatTimes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RepeatTimes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      repeatTimes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SendSmsPlan") != m.end() && !m["SendSmsPlan"].empty()) {
      if (typeid(vector<boost::any>) == m["SendSmsPlan"].type()) {
        vector<EditTaskRequestSendSmsPlan> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SendSmsPlan"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EditTaskRequestSendSmsPlan model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sendSmsPlan = make_shared<vector<EditTaskRequestSendSmsPlan>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~EditTaskRequest() = default;
};
class EditTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> callTimeListShrink{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playSleepVal{};
  shared_ptr<long> playTimes{};
  shared_ptr<long> recallType{};
  shared_ptr<string> recordPath{};
  shared_ptr<long> repeatCount{};
  shared_ptr<long> repeatInterval{};
  shared_ptr<string> repeatReasonShrink{};
  shared_ptr<string> repeatTimesShrink{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sendSmsPlanShrink{};
  shared_ptr<long> status{};
  shared_ptr<long> taskId{};
  shared_ptr<long> templateId{};
  shared_ptr<long> templateType{};

  EditTaskShrinkRequest() {}

  explicit EditTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callTimeListShrink) {
      res["CallTimeList"] = boost::any(*callTimeListShrink);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playSleepVal) {
      res["PlaySleepVal"] = boost::any(*playSleepVal);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (recallType) {
      res["RecallType"] = boost::any(*recallType);
    }
    if (recordPath) {
      res["RecordPath"] = boost::any(*recordPath);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (repeatInterval) {
      res["RepeatInterval"] = boost::any(*repeatInterval);
    }
    if (repeatReasonShrink) {
      res["RepeatReason"] = boost::any(*repeatReasonShrink);
    }
    if (repeatTimesShrink) {
      res["RepeatTimes"] = boost::any(*repeatTimesShrink);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendSmsPlanShrink) {
      res["SendSmsPlan"] = boost::any(*sendSmsPlanShrink);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallTimeList") != m.end() && !m["CallTimeList"].empty()) {
      callTimeListShrink = make_shared<string>(boost::any_cast<string>(m["CallTimeList"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlaySleepVal") != m.end() && !m["PlaySleepVal"].empty()) {
      playSleepVal = make_shared<long>(boost::any_cast<long>(m["PlaySleepVal"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("RecallType") != m.end() && !m["RecallType"].empty()) {
      recallType = make_shared<long>(boost::any_cast<long>(m["RecallType"]));
    }
    if (m.find("RecordPath") != m.end() && !m["RecordPath"].empty()) {
      recordPath = make_shared<string>(boost::any_cast<string>(m["RecordPath"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("RepeatInterval") != m.end() && !m["RepeatInterval"].empty()) {
      repeatInterval = make_shared<long>(boost::any_cast<long>(m["RepeatInterval"]));
    }
    if (m.find("RepeatReason") != m.end() && !m["RepeatReason"].empty()) {
      repeatReasonShrink = make_shared<string>(boost::any_cast<string>(m["RepeatReason"]));
    }
    if (m.find("RepeatTimes") != m.end() && !m["RepeatTimes"].empty()) {
      repeatTimesShrink = make_shared<string>(boost::any_cast<string>(m["RepeatTimes"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SendSmsPlan") != m.end() && !m["SendSmsPlan"].empty()) {
      sendSmsPlanShrink = make_shared<string>(boost::any_cast<string>(m["SendSmsPlan"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~EditTaskShrinkRequest() = default;
};
class EditTaskResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  EditTaskResponseBodyModel() {}

  explicit EditTaskResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~EditTaskResponseBodyModel() = default;
};
class EditTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<EditTaskResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timestamp{};

  EditTaskResponseBody() {}

  explicit EditTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        EditTaskResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<EditTaskResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~EditTaskResponseBody() = default;
};
class EditTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EditTaskResponseBody> body{};

  EditTaskResponse() {}

  explicit EditTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        EditTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditTaskResponseBody>(model1);
      }
    }
  }


  virtual ~EditTaskResponse() = default;
};
class ImportNumberRequestCustomers : public Darabonba::Model {
public:
  shared_ptr<string> clientUrl{};
  shared_ptr<string> number{};
  shared_ptr<string> numberMD5{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<string> tag{};

  ImportNumberRequestCustomers() {}

  explicit ImportNumberRequestCustomers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUrl) {
      res["ClientUrl"] = boost::any(*clientUrl);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (numberMD5) {
      res["NumberMD5"] = boost::any(*numberMD5);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUrl") != m.end() && !m["ClientUrl"].empty()) {
      clientUrl = make_shared<string>(boost::any_cast<string>(m["ClientUrl"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("NumberMD5") != m.end() && !m["NumberMD5"].empty()) {
      numberMD5 = make_shared<string>(boost::any_cast<string>(m["NumberMD5"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ImportNumberRequestCustomers() = default;
};
class ImportNumberRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ImportNumberRequestCustomers>> customers{};
  shared_ptr<long> failReturn{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  ImportNumberRequest() {}

  explicit ImportNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customers) {
      vector<boost::any> temp1;
      for(auto item1:*customers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Customers"] = boost::any(temp1);
    }
    if (failReturn) {
      res["FailReturn"] = boost::any(*failReturn);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Customers") != m.end() && !m["Customers"].empty()) {
      if (typeid(vector<boost::any>) == m["Customers"].type()) {
        vector<ImportNumberRequestCustomers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Customers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportNumberRequestCustomers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customers = make_shared<vector<ImportNumberRequestCustomers>>(expect1);
      }
    }
    if (m.find("FailReturn") != m.end() && !m["FailReturn"].empty()) {
      failReturn = make_shared<long>(boost::any_cast<long>(m["FailReturn"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~ImportNumberRequest() = default;
};
class ImportNumberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customersShrink{};
  shared_ptr<long> failReturn{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  ImportNumberShrinkRequest() {}

  explicit ImportNumberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customersShrink) {
      res["Customers"] = boost::any(*customersShrink);
    }
    if (failReturn) {
      res["FailReturn"] = boost::any(*failReturn);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Customers") != m.end() && !m["Customers"].empty()) {
      customersShrink = make_shared<string>(boost::any_cast<string>(m["Customers"]));
    }
    if (m.find("FailReturn") != m.end() && !m["FailReturn"].empty()) {
      failReturn = make_shared<long>(boost::any_cast<long>(m["FailReturn"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~ImportNumberShrinkRequest() = default;
};
class ImportNumberResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> batchId{};
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<long> importNum{};
  shared_ptr<string> message{};

  ImportNumberResponseBodyModel() {}

  explicit ImportNumberResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (importNum) {
      res["ImportNum"] = boost::any(*importNum);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<long>(boost::any_cast<long>(m["BatchId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ImportNum") != m.end() && !m["ImportNum"].empty()) {
      importNum = make_shared<long>(boost::any_cast<long>(m["ImportNum"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~ImportNumberResponseBodyModel() = default;
};
class ImportNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<ImportNumberResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  ImportNumberResponseBody() {}

  explicit ImportNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        ImportNumberResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<ImportNumberResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~ImportNumberResponseBody() = default;
};
class ImportNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportNumberResponseBody> body{};

  ImportNumberResponse() {}

  explicit ImportNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        ImportNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportNumberResponseBody>(model1);
      }
    }
  }


  virtual ~ImportNumberResponse() = default;
};
class PageRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> numbers{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PageRequest() {}

  explicit PageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PageRequest() = default;
};
class PageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> numbersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PageShrinkRequest() {}

  explicit PageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numbersShrink) {
      res["Numbers"] = boost::any(*numbersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbersShrink = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PageShrinkRequest() = default;
};
class PageResponseBodyModelList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expirationTime{};
  shared_ptr<string> number{};
  shared_ptr<string> numberMD5{};
  shared_ptr<string> remark{};

  PageResponseBodyModelList() {}

  explicit PageResponseBodyModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expirationTime) {
      res["ExpirationTime"] = boost::any(*expirationTime);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (numberMD5) {
      res["NumberMD5"] = boost::any(*numberMD5);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpirationTime") != m.end() && !m["ExpirationTime"].empty()) {
      expirationTime = make_shared<string>(boost::any_cast<string>(m["ExpirationTime"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("NumberMD5") != m.end() && !m["NumberMD5"].empty()) {
      numberMD5 = make_shared<string>(boost::any_cast<string>(m["NumberMD5"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~PageResponseBodyModelList() = default;
};
class PageResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<PageResponseBodyModelList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  PageResponseBodyModel() {}

  explicit PageResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<PageResponseBodyModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PageResponseBodyModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<PageResponseBodyModelList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~PageResponseBodyModel() = default;
};
class PageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<PageResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  PageResponseBody() {}

  explicit PageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        PageResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<PageResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~PageResponseBody() = default;
};
class PageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PageResponseBody> body{};

  PageResponse() {}

  explicit PageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        PageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PageResponseBody>(model1);
      }
    }
  }


  virtual ~PageResponse() = default;
};
class SmsTemplateCreateRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sign{};
  shared_ptr<long> smsType{};
  shared_ptr<string> templateName{};
  shared_ptr<long> templateType{};

  SmsTemplateCreateRequest() {}

  explicit SmsTemplateCreateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (smsType) {
      res["SmsType"] = boost::any(*smsType);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SmsType") != m.end() && !m["SmsType"].empty()) {
      smsType = make_shared<long>(boost::any_cast<long>(m["SmsType"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~SmsTemplateCreateRequest() = default;
};
class SmsTemplateCreateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timestamp{};

  SmsTemplateCreateResponseBody() {}

  explicit SmsTemplateCreateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~SmsTemplateCreateResponseBody() = default;
};
class SmsTemplateCreateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SmsTemplateCreateResponseBody> body{};

  SmsTemplateCreateResponse() {}

  explicit SmsTemplateCreateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        SmsTemplateCreateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmsTemplateCreateResponseBody>(model1);
      }
    }
  }


  virtual ~SmsTemplateCreateResponse() = default;
};
class SmsTemplatePageListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sign{};
  shared_ptr<long> smsType{};
  shared_ptr<long> status{};
  shared_ptr<long> templateId{};
  shared_ptr<long> templateType{};

  SmsTemplatePageListRequest() {}

  explicit SmsTemplatePageListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (smsType) {
      res["SmsType"] = boost::any(*smsType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SmsType") != m.end() && !m["SmsType"].empty()) {
      smsType = make_shared<long>(boost::any_cast<long>(m["SmsType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~SmsTemplatePageListRequest() = default;
};
class SmsTemplatePageListResponseBodyModelList : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> properties{};
  shared_ptr<long> shortUrlTaskId{};
  shared_ptr<string> sign{};
  shared_ptr<string> smsType{};
  shared_ptr<long> status{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<long> templateType{};

  SmsTemplatePageListResponseBodyModelList() {}

  explicit SmsTemplatePageListResponseBodyModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (shortUrlTaskId) {
      res["ShortUrlTaskId"] = boost::any(*shortUrlTaskId);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    if (smsType) {
      res["SmsType"] = boost::any(*smsType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("ShortUrlTaskId") != m.end() && !m["ShortUrlTaskId"].empty()) {
      shortUrlTaskId = make_shared<long>(boost::any_cast<long>(m["ShortUrlTaskId"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
    if (m.find("SmsType") != m.end() && !m["SmsType"].empty()) {
      smsType = make_shared<string>(boost::any_cast<string>(m["SmsType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~SmsTemplatePageListResponseBodyModelList() = default;
};
class SmsTemplatePageListResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<SmsTemplatePageListResponseBodyModelList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  SmsTemplatePageListResponseBodyModel() {}

  explicit SmsTemplatePageListResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<SmsTemplatePageListResponseBodyModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SmsTemplatePageListResponseBodyModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<SmsTemplatePageListResponseBodyModelList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~SmsTemplatePageListResponseBodyModel() = default;
};
class SmsTemplatePageListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<SmsTemplatePageListResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timestamp{};

  SmsTemplatePageListResponseBody() {}

  explicit SmsTemplatePageListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        SmsTemplatePageListResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<SmsTemplatePageListResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~SmsTemplatePageListResponseBody() = default;
};
class SmsTemplatePageListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SmsTemplatePageListResponseBody> body{};

  SmsTemplatePageListResponse() {}

  explicit SmsTemplatePageListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        SmsTemplatePageListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmsTemplatePageListResponseBody>(model1);
      }
    }
  }


  virtual ~SmsTemplatePageListResponse() = default;
};
class TaskCallChatsRequest : public Darabonba::Model {
public:
  shared_ptr<long> agentId{};
  shared_ptr<string> agentTag{};
  shared_ptr<string> callId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  TaskCallChatsRequest() {}

  explicit TaskCallChatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentTag) {
      res["AgentTag"] = boost::any(*agentTag);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AgentTag") != m.end() && !m["AgentTag"].empty()) {
      agentTag = make_shared<string>(boost::any_cast<string>(m["AgentTag"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~TaskCallChatsRequest() = default;
};
class TaskCallChatsResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> fromNumber{};

  TaskCallChatsResponseBodyModel() {}

  explicit TaskCallChatsResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fromNumber) {
      res["FromNumber"] = boost::any(*fromNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FromNumber") != m.end() && !m["FromNumber"].empty()) {
      fromNumber = make_shared<string>(boost::any_cast<string>(m["FromNumber"]));
    }
  }


  virtual ~TaskCallChatsResponseBodyModel() = default;
};
class TaskCallChatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<TaskCallChatsResponseBodyModel>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timestamp{};

  TaskCallChatsResponseBody() {}

  explicit TaskCallChatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<TaskCallChatsResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskCallChatsResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<TaskCallChatsResponseBodyModel>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~TaskCallChatsResponseBody() = default;
};
class TaskCallChatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TaskCallChatsResponseBody> body{};

  TaskCallChatsResponse() {}

  explicit TaskCallChatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        TaskCallChatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskCallChatsResponseBody>(model1);
      }
    }
  }


  virtual ~TaskCallChatsResponse() = default;
};
class TaskCallInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  TaskCallInfoRequest() {}

  explicit TaskCallInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~TaskCallInfoRequest() = default;
};
class TaskCallInfoResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> finishTotal{};
  shared_ptr<long> total{};
  shared_ptr<long> unCallTotal{};

  TaskCallInfoResponseBodyModel() {}

  explicit TaskCallInfoResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishTotal) {
      res["FinishTotal"] = boost::any(*finishTotal);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (unCallTotal) {
      res["UnCallTotal"] = boost::any(*unCallTotal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinishTotal") != m.end() && !m["FinishTotal"].empty()) {
      finishTotal = make_shared<long>(boost::any_cast<long>(m["FinishTotal"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("UnCallTotal") != m.end() && !m["UnCallTotal"].empty()) {
      unCallTotal = make_shared<long>(boost::any_cast<long>(m["UnCallTotal"]));
    }
  }


  virtual ~TaskCallInfoResponseBodyModel() = default;
};
class TaskCallInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<TaskCallInfoResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timestamp{};

  TaskCallInfoResponseBody() {}

  explicit TaskCallInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        TaskCallInfoResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<TaskCallInfoResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~TaskCallInfoResponseBody() = default;
};
class TaskCallInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TaskCallInfoResponseBody> body{};

  TaskCallInfoResponse() {}

  explicit TaskCallInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        TaskCallInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskCallInfoResponseBody>(model1);
      }
    }
  }


  virtual ~TaskCallInfoResponse() = default;
};
class TaskCallListRequest : public Darabonba::Model {
public:
  shared_ptr<string> batchId{};
  shared_ptr<string> callDate{};
  shared_ptr<string> endCallDate{};
  shared_ptr<vector<string>> intentTags{};
  shared_ptr<vector<string>> numbers{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  TaskCallListRequest() {}

  explicit TaskCallListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (callDate) {
      res["CallDate"] = boost::any(*callDate);
    }
    if (endCallDate) {
      res["EndCallDate"] = boost::any(*endCallDate);
    }
    if (intentTags) {
      res["IntentTags"] = boost::any(*intentTags);
    }
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["BatchId"]));
    }
    if (m.find("CallDate") != m.end() && !m["CallDate"].empty()) {
      callDate = make_shared<string>(boost::any_cast<string>(m["CallDate"]));
    }
    if (m.find("EndCallDate") != m.end() && !m["EndCallDate"].empty()) {
      endCallDate = make_shared<string>(boost::any_cast<string>(m["EndCallDate"]));
    }
    if (m.find("IntentTags") != m.end() && !m["IntentTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IntentTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IntentTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      intentTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~TaskCallListRequest() = default;
};
class TaskCallListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> batchId{};
  shared_ptr<string> callDate{};
  shared_ptr<string> endCallDate{};
  shared_ptr<string> intentTagsShrink{};
  shared_ptr<string> numbersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  TaskCallListShrinkRequest() {}

  explicit TaskCallListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (callDate) {
      res["CallDate"] = boost::any(*callDate);
    }
    if (endCallDate) {
      res["EndCallDate"] = boost::any(*endCallDate);
    }
    if (intentTagsShrink) {
      res["IntentTags"] = boost::any(*intentTagsShrink);
    }
    if (numbersShrink) {
      res["Numbers"] = boost::any(*numbersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["BatchId"]));
    }
    if (m.find("CallDate") != m.end() && !m["CallDate"].empty()) {
      callDate = make_shared<string>(boost::any_cast<string>(m["CallDate"]));
    }
    if (m.find("EndCallDate") != m.end() && !m["EndCallDate"].empty()) {
      endCallDate = make_shared<string>(boost::any_cast<string>(m["EndCallDate"]));
    }
    if (m.find("IntentTags") != m.end() && !m["IntentTags"].empty()) {
      intentTagsShrink = make_shared<string>(boost::any_cast<string>(m["IntentTags"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbersShrink = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~TaskCallListShrinkRequest() = default;
};
class TaskCallListResponseBodyModelList : public Darabonba::Model {
public:
  shared_ptr<long> addWx{};
  shared_ptr<string> addWxStatus{};
  shared_ptr<string> agentExtension{};
  shared_ptr<long> agentId{};
  shared_ptr<long> agentSpeakingDuration{};
  shared_ptr<string> agentSpeakingTime{};
  shared_ptr<string> agentTag{};
  shared_ptr<long> answerRecall{};
  shared_ptr<string> answerTime{};
  shared_ptr<string> batchId{};
  shared_ptr<string> callBeginTime{};
  shared_ptr<string> callId{};
  shared_ptr<string> callTimes{};
  shared_ptr<long> callType{};
  shared_ptr<string> chatRecord{};
  shared_ptr<string> gateway{};
  shared_ptr<string> hangupTime{};
  shared_ptr<long> hangupType{};
  shared_ptr<string> importTime{};
  shared_ptr<string> individualTag{};
  shared_ptr<string> intentDescription{};
  shared_ptr<string> intentTag{};
  shared_ptr<string> interceptReason{};
  shared_ptr<string> keywords{};
  shared_ptr<string> number{};
  shared_ptr<string> numberMD5{};
  shared_ptr<string> properties{};
  shared_ptr<string> remark{};
  shared_ptr<long> ringTime{};
  shared_ptr<string> sms{};
  shared_ptr<long> speakingDuration{};
  shared_ptr<string> speakingTime{};
  shared_ptr<string> speakingTurns{};
  shared_ptr<string> status{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> statusDescription{};
  shared_ptr<string> tag{};
  shared_ptr<long> taskId{};
  shared_ptr<long> templateId{};
  shared_ptr<string> transferStatus{};
  shared_ptr<long> transferStatusCode{};

  TaskCallListResponseBodyModelList() {}

  explicit TaskCallListResponseBodyModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addWx) {
      res["AddWx"] = boost::any(*addWx);
    }
    if (addWxStatus) {
      res["AddWxStatus"] = boost::any(*addWxStatus);
    }
    if (agentExtension) {
      res["AgentExtension"] = boost::any(*agentExtension);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentSpeakingDuration) {
      res["AgentSpeakingDuration"] = boost::any(*agentSpeakingDuration);
    }
    if (agentSpeakingTime) {
      res["AgentSpeakingTime"] = boost::any(*agentSpeakingTime);
    }
    if (agentTag) {
      res["AgentTag"] = boost::any(*agentTag);
    }
    if (answerRecall) {
      res["AnswerRecall"] = boost::any(*answerRecall);
    }
    if (answerTime) {
      res["AnswerTime"] = boost::any(*answerTime);
    }
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (callBeginTime) {
      res["CallBeginTime"] = boost::any(*callBeginTime);
    }
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (callTimes) {
      res["CallTimes"] = boost::any(*callTimes);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (chatRecord) {
      res["ChatRecord"] = boost::any(*chatRecord);
    }
    if (gateway) {
      res["Gateway"] = boost::any(*gateway);
    }
    if (hangupTime) {
      res["HangupTime"] = boost::any(*hangupTime);
    }
    if (hangupType) {
      res["HangupType"] = boost::any(*hangupType);
    }
    if (importTime) {
      res["ImportTime"] = boost::any(*importTime);
    }
    if (individualTag) {
      res["IndividualTag"] = boost::any(*individualTag);
    }
    if (intentDescription) {
      res["IntentDescription"] = boost::any(*intentDescription);
    }
    if (intentTag) {
      res["IntentTag"] = boost::any(*intentTag);
    }
    if (interceptReason) {
      res["InterceptReason"] = boost::any(*interceptReason);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (numberMD5) {
      res["NumberMD5"] = boost::any(*numberMD5);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (ringTime) {
      res["RingTime"] = boost::any(*ringTime);
    }
    if (sms) {
      res["Sms"] = boost::any(*sms);
    }
    if (speakingDuration) {
      res["SpeakingDuration"] = boost::any(*speakingDuration);
    }
    if (speakingTime) {
      res["SpeakingTime"] = boost::any(*speakingTime);
    }
    if (speakingTurns) {
      res["SpeakingTurns"] = boost::any(*speakingTurns);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (statusDescription) {
      res["StatusDescription"] = boost::any(*statusDescription);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (transferStatus) {
      res["TransferStatus"] = boost::any(*transferStatus);
    }
    if (transferStatusCode) {
      res["TransferStatusCode"] = boost::any(*transferStatusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddWx") != m.end() && !m["AddWx"].empty()) {
      addWx = make_shared<long>(boost::any_cast<long>(m["AddWx"]));
    }
    if (m.find("AddWxStatus") != m.end() && !m["AddWxStatus"].empty()) {
      addWxStatus = make_shared<string>(boost::any_cast<string>(m["AddWxStatus"]));
    }
    if (m.find("AgentExtension") != m.end() && !m["AgentExtension"].empty()) {
      agentExtension = make_shared<string>(boost::any_cast<string>(m["AgentExtension"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AgentSpeakingDuration") != m.end() && !m["AgentSpeakingDuration"].empty()) {
      agentSpeakingDuration = make_shared<long>(boost::any_cast<long>(m["AgentSpeakingDuration"]));
    }
    if (m.find("AgentSpeakingTime") != m.end() && !m["AgentSpeakingTime"].empty()) {
      agentSpeakingTime = make_shared<string>(boost::any_cast<string>(m["AgentSpeakingTime"]));
    }
    if (m.find("AgentTag") != m.end() && !m["AgentTag"].empty()) {
      agentTag = make_shared<string>(boost::any_cast<string>(m["AgentTag"]));
    }
    if (m.find("AnswerRecall") != m.end() && !m["AnswerRecall"].empty()) {
      answerRecall = make_shared<long>(boost::any_cast<long>(m["AnswerRecall"]));
    }
    if (m.find("AnswerTime") != m.end() && !m["AnswerTime"].empty()) {
      answerTime = make_shared<string>(boost::any_cast<string>(m["AnswerTime"]));
    }
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["BatchId"]));
    }
    if (m.find("CallBeginTime") != m.end() && !m["CallBeginTime"].empty()) {
      callBeginTime = make_shared<string>(boost::any_cast<string>(m["CallBeginTime"]));
    }
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("CallTimes") != m.end() && !m["CallTimes"].empty()) {
      callTimes = make_shared<string>(boost::any_cast<string>(m["CallTimes"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("ChatRecord") != m.end() && !m["ChatRecord"].empty()) {
      chatRecord = make_shared<string>(boost::any_cast<string>(m["ChatRecord"]));
    }
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      gateway = make_shared<string>(boost::any_cast<string>(m["Gateway"]));
    }
    if (m.find("HangupTime") != m.end() && !m["HangupTime"].empty()) {
      hangupTime = make_shared<string>(boost::any_cast<string>(m["HangupTime"]));
    }
    if (m.find("HangupType") != m.end() && !m["HangupType"].empty()) {
      hangupType = make_shared<long>(boost::any_cast<long>(m["HangupType"]));
    }
    if (m.find("ImportTime") != m.end() && !m["ImportTime"].empty()) {
      importTime = make_shared<string>(boost::any_cast<string>(m["ImportTime"]));
    }
    if (m.find("IndividualTag") != m.end() && !m["IndividualTag"].empty()) {
      individualTag = make_shared<string>(boost::any_cast<string>(m["IndividualTag"]));
    }
    if (m.find("IntentDescription") != m.end() && !m["IntentDescription"].empty()) {
      intentDescription = make_shared<string>(boost::any_cast<string>(m["IntentDescription"]));
    }
    if (m.find("IntentTag") != m.end() && !m["IntentTag"].empty()) {
      intentTag = make_shared<string>(boost::any_cast<string>(m["IntentTag"]));
    }
    if (m.find("InterceptReason") != m.end() && !m["InterceptReason"].empty()) {
      interceptReason = make_shared<string>(boost::any_cast<string>(m["InterceptReason"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("NumberMD5") != m.end() && !m["NumberMD5"].empty()) {
      numberMD5 = make_shared<string>(boost::any_cast<string>(m["NumberMD5"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RingTime") != m.end() && !m["RingTime"].empty()) {
      ringTime = make_shared<long>(boost::any_cast<long>(m["RingTime"]));
    }
    if (m.find("Sms") != m.end() && !m["Sms"].empty()) {
      sms = make_shared<string>(boost::any_cast<string>(m["Sms"]));
    }
    if (m.find("SpeakingDuration") != m.end() && !m["SpeakingDuration"].empty()) {
      speakingDuration = make_shared<long>(boost::any_cast<long>(m["SpeakingDuration"]));
    }
    if (m.find("SpeakingTime") != m.end() && !m["SpeakingTime"].empty()) {
      speakingTime = make_shared<string>(boost::any_cast<string>(m["SpeakingTime"]));
    }
    if (m.find("SpeakingTurns") != m.end() && !m["SpeakingTurns"].empty()) {
      speakingTurns = make_shared<string>(boost::any_cast<string>(m["SpeakingTurns"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["StatusCode"]));
    }
    if (m.find("StatusDescription") != m.end() && !m["StatusDescription"].empty()) {
      statusDescription = make_shared<string>(boost::any_cast<string>(m["StatusDescription"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TransferStatus") != m.end() && !m["TransferStatus"].empty()) {
      transferStatus = make_shared<string>(boost::any_cast<string>(m["TransferStatus"]));
    }
    if (m.find("TransferStatusCode") != m.end() && !m["TransferStatusCode"].empty()) {
      transferStatusCode = make_shared<long>(boost::any_cast<long>(m["TransferStatusCode"]));
    }
  }


  virtual ~TaskCallListResponseBodyModelList() = default;
};
class TaskCallListResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<TaskCallListResponseBodyModelList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  TaskCallListResponseBodyModel() {}

  explicit TaskCallListResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<TaskCallListResponseBodyModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskCallListResponseBodyModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<TaskCallListResponseBodyModelList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~TaskCallListResponseBodyModel() = default;
};
class TaskCallListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<TaskCallListResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  TaskCallListResponseBody() {}

  explicit TaskCallListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        TaskCallListResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<TaskCallListResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~TaskCallListResponseBody() = default;
};
class TaskCallListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TaskCallListResponseBody> body{};

  TaskCallListResponse() {}

  explicit TaskCallListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        TaskCallListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskCallListResponseBody>(model1);
      }
    }
  }


  virtual ~TaskCallListResponse() = default;
};
class TaskCancelCallRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> numbers{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<long> taskId{};

  TaskCancelCallRequest() {}

  explicit TaskCancelCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~TaskCancelCallRequest() = default;
};
class TaskCancelCallShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> numbersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<long> taskId{};

  TaskCancelCallShrinkRequest() {}

  explicit TaskCancelCallShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numbersShrink) {
      res["Numbers"] = boost::any(*numbersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbersShrink = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~TaskCancelCallShrinkRequest() = default;
};
class TaskCancelCallResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<string>> unHandleNumbers{};

  TaskCancelCallResponseBodyModel() {}

  explicit TaskCancelCallResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unHandleNumbers) {
      res["UnHandleNumbers"] = boost::any(*unHandleNumbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnHandleNumbers") != m.end() && !m["UnHandleNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnHandleNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnHandleNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unHandleNumbers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~TaskCancelCallResponseBodyModel() = default;
};
class TaskCancelCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<TaskCancelCallResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  TaskCancelCallResponseBody() {}

  explicit TaskCancelCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        TaskCancelCallResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<TaskCancelCallResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~TaskCancelCallResponseBody() = default;
};
class TaskCancelCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TaskCancelCallResponseBody> body{};

  TaskCancelCallResponse() {}

  explicit TaskCancelCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        TaskCancelCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskCancelCallResponseBody>(model1);
      }
    }
  }


  virtual ~TaskCancelCallResponse() = default;
};
class TaskListRequest : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> lastCallTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  TaskListRequest() {}

  explicit TaskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastCallTime) {
      res["LastCallTime"] = boost::any(*lastCallTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LastCallTime") != m.end() && !m["LastCallTime"].empty()) {
      lastCallTime = make_shared<string>(boost::any_cast<string>(m["LastCallTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~TaskListRequest() = default;
};
class TaskListResponseBodyModelIntentTags : public Darabonba::Model {
public:
  shared_ptr<string> intentDescription{};
  shared_ptr<string> intentTag{};

  TaskListResponseBodyModelIntentTags() {}

  explicit TaskListResponseBodyModelIntentTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentDescription) {
      res["IntentDescription"] = boost::any(*intentDescription);
    }
    if (intentTag) {
      res["IntentTag"] = boost::any(*intentTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentDescription") != m.end() && !m["IntentDescription"].empty()) {
      intentDescription = make_shared<string>(boost::any_cast<string>(m["IntentDescription"]));
    }
    if (m.find("IntentTag") != m.end() && !m["IntentTag"].empty()) {
      intentTag = make_shared<string>(boost::any_cast<string>(m["IntentTag"]));
    }
  }


  virtual ~TaskListResponseBodyModelIntentTags() = default;
};
class TaskListResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> allowCallTime{};
  shared_ptr<string> allowCallTimeFormat{};
  shared_ptr<string> allowDayOfWeek{};
  shared_ptr<long> callType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> importTime{};
  shared_ptr<vector<TaskListResponseBodyModelIntentTags>> intentTags{};
  shared_ptr<long> invalidReCall{};
  shared_ptr<string> lastCallTime{};
  shared_ptr<long> maxConcurrency{};
  shared_ptr<vector<string>> personalityTags{};
  shared_ptr<long> priority{};
  shared_ptr<string> properties{};
  shared_ptr<long> recallType{};
  shared_ptr<long> sendSms{};
  shared_ptr<string> smsName{};
  shared_ptr<long> status{};
  shared_ptr<long> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> templateName{};

  TaskListResponseBodyModel() {}

  explicit TaskListResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCallTime) {
      res["AllowCallTime"] = boost::any(*allowCallTime);
    }
    if (allowCallTimeFormat) {
      res["AllowCallTimeFormat"] = boost::any(*allowCallTimeFormat);
    }
    if (allowDayOfWeek) {
      res["AllowDayOfWeek"] = boost::any(*allowDayOfWeek);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (importTime) {
      res["ImportTime"] = boost::any(*importTime);
    }
    if (intentTags) {
      vector<boost::any> temp1;
      for(auto item1:*intentTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IntentTags"] = boost::any(temp1);
    }
    if (invalidReCall) {
      res["InvalidReCall"] = boost::any(*invalidReCall);
    }
    if (lastCallTime) {
      res["LastCallTime"] = boost::any(*lastCallTime);
    }
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (personalityTags) {
      res["PersonalityTags"] = boost::any(*personalityTags);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (recallType) {
      res["RecallType"] = boost::any(*recallType);
    }
    if (sendSms) {
      res["SendSms"] = boost::any(*sendSms);
    }
    if (smsName) {
      res["SmsName"] = boost::any(*smsName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowCallTime") != m.end() && !m["AllowCallTime"].empty()) {
      allowCallTime = make_shared<string>(boost::any_cast<string>(m["AllowCallTime"]));
    }
    if (m.find("AllowCallTimeFormat") != m.end() && !m["AllowCallTimeFormat"].empty()) {
      allowCallTimeFormat = make_shared<string>(boost::any_cast<string>(m["AllowCallTimeFormat"]));
    }
    if (m.find("AllowDayOfWeek") != m.end() && !m["AllowDayOfWeek"].empty()) {
      allowDayOfWeek = make_shared<string>(boost::any_cast<string>(m["AllowDayOfWeek"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<long>(boost::any_cast<long>(m["CallType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ImportTime") != m.end() && !m["ImportTime"].empty()) {
      importTime = make_shared<string>(boost::any_cast<string>(m["ImportTime"]));
    }
    if (m.find("IntentTags") != m.end() && !m["IntentTags"].empty()) {
      if (typeid(vector<boost::any>) == m["IntentTags"].type()) {
        vector<TaskListResponseBodyModelIntentTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IntentTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskListResponseBodyModelIntentTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        intentTags = make_shared<vector<TaskListResponseBodyModelIntentTags>>(expect1);
      }
    }
    if (m.find("InvalidReCall") != m.end() && !m["InvalidReCall"].empty()) {
      invalidReCall = make_shared<long>(boost::any_cast<long>(m["InvalidReCall"]));
    }
    if (m.find("LastCallTime") != m.end() && !m["LastCallTime"].empty()) {
      lastCallTime = make_shared<string>(boost::any_cast<string>(m["LastCallTime"]));
    }
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("PersonalityTags") != m.end() && !m["PersonalityTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PersonalityTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PersonalityTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      personalityTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("RecallType") != m.end() && !m["RecallType"].empty()) {
      recallType = make_shared<long>(boost::any_cast<long>(m["RecallType"]));
    }
    if (m.find("SendSms") != m.end() && !m["SendSms"].empty()) {
      sendSms = make_shared<long>(boost::any_cast<long>(m["SendSms"]));
    }
    if (m.find("SmsName") != m.end() && !m["SmsName"].empty()) {
      smsName = make_shared<string>(boost::any_cast<string>(m["SmsName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~TaskListResponseBodyModel() = default;
};
class TaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<TaskListResponseBodyModel>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timestamp{};

  TaskListResponseBody() {}

  explicit TaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<TaskListResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskListResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<TaskListResponseBodyModel>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~TaskListResponseBody() = default;
};
class TaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TaskListResponseBody> body{};

  TaskListResponse() {}

  explicit TaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        TaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskListResponseBody>(model1);
      }
    }
  }


  virtual ~TaskListResponse() = default;
};
class TaskRecoverCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> beginImportTime{};
  shared_ptr<string> endImportTime{};
  shared_ptr<vector<string>> numbers{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<long> taskId{};

  TaskRecoverCallRequest() {}

  explicit TaskRecoverCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginImportTime) {
      res["BeginImportTime"] = boost::any(*beginImportTime);
    }
    if (endImportTime) {
      res["EndImportTime"] = boost::any(*endImportTime);
    }
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginImportTime") != m.end() && !m["BeginImportTime"].empty()) {
      beginImportTime = make_shared<string>(boost::any_cast<string>(m["BeginImportTime"]));
    }
    if (m.find("EndImportTime") != m.end() && !m["EndImportTime"].empty()) {
      endImportTime = make_shared<string>(boost::any_cast<string>(m["EndImportTime"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~TaskRecoverCallRequest() = default;
};
class TaskRecoverCallShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> beginImportTime{};
  shared_ptr<string> endImportTime{};
  shared_ptr<string> numbersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<long> taskId{};

  TaskRecoverCallShrinkRequest() {}

  explicit TaskRecoverCallShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginImportTime) {
      res["BeginImportTime"] = boost::any(*beginImportTime);
    }
    if (endImportTime) {
      res["EndImportTime"] = boost::any(*endImportTime);
    }
    if (numbersShrink) {
      res["Numbers"] = boost::any(*numbersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginImportTime") != m.end() && !m["BeginImportTime"].empty()) {
      beginImportTime = make_shared<string>(boost::any_cast<string>(m["BeginImportTime"]));
    }
    if (m.find("EndImportTime") != m.end() && !m["EndImportTime"].empty()) {
      endImportTime = make_shared<string>(boost::any_cast<string>(m["EndImportTime"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbersShrink = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~TaskRecoverCallShrinkRequest() = default;
};
class TaskRecoverCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<map<string, boost::any>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  TaskRecoverCallResponseBody() {}

  explicit TaskRecoverCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Model"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      model = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~TaskRecoverCallResponseBody() = default;
};
class TaskRecoverCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TaskRecoverCallResponseBody> body{};

  TaskRecoverCallResponse() {}

  explicit TaskRecoverCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        TaskRecoverCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TaskRecoverCallResponseBody>(model1);
      }
    }
  }


  virtual ~TaskRecoverCallResponse() = default;
};
class TemplateListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> templateId{};

  TemplateListRequest() {}

  explicit TemplateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~TemplateListRequest() = default;
};
class TemplateListResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> intentTags{};
  shared_ptr<vector<string>> personalityTags{};
  shared_ptr<string> properties{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<long> templateType{};

  TemplateListResponseBodyModel() {}

  explicit TemplateListResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentTags) {
      res["IntentTags"] = boost::any(*intentTags);
    }
    if (personalityTags) {
      res["PersonalityTags"] = boost::any(*personalityTags);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentTags") != m.end() && !m["IntentTags"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["IntentTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IntentTags"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      intentTags = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("PersonalityTags") != m.end() && !m["PersonalityTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PersonalityTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PersonalityTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      personalityTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~TemplateListResponseBodyModel() = default;
};
class TemplateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<TemplateListResponseBodyModel>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> timestamp{};

  TemplateListResponseBody() {}

  explicit TemplateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<TemplateListResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TemplateListResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<TemplateListResponseBodyModel>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~TemplateListResponseBody() = default;
};
class TemplateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TemplateListResponseBody> body{};

  TemplateListResponse() {}

  explicit TemplateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        TemplateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TemplateListResponseBody>(model1);
      }
    }
  }


  virtual ~TemplateListResponse() = default;
};
class UpdateAgentStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> agentId{};
  shared_ptr<long> agentStatus{};
  shared_ptr<string> agentTag{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateAgentStatusRequest() {}

  explicit UpdateAgentStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentStatus) {
      res["AgentStatus"] = boost::any(*agentStatus);
    }
    if (agentTag) {
      res["AgentTag"] = boost::any(*agentTag);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AgentStatus") != m.end() && !m["AgentStatus"].empty()) {
      agentStatus = make_shared<long>(boost::any_cast<long>(m["AgentStatus"]));
    }
    if (m.find("AgentTag") != m.end() && !m["AgentTag"].empty()) {
      agentTag = make_shared<string>(boost::any_cast<string>(m["AgentTag"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateAgentStatusRequest() = default;
};
class UpdateAgentStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<map<string, boost::any>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  UpdateAgentStatusResponseBody() {}

  explicit UpdateAgentStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Model"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      model = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~UpdateAgentStatusResponseBody() = default;
};
class UpdateAgentStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAgentStatusResponseBody> body{};

  UpdateAgentStatusResponse() {}

  explicit UpdateAgentStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        UpdateAgentStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAgentStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAgentStatusResponse() = default;
};
class UpdateTaskCustomerRequestCustomers : public Darabonba::Model {
public:
  shared_ptr<long> cancel{};
  shared_ptr<string> number{};
  shared_ptr<map<string, boost::any>> properties{};
  shared_ptr<string> tag{};

  UpdateTaskCustomerRequestCustomers() {}

  explicit UpdateTaskCustomerRequestCustomers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cancel) {
      res["Cancel"] = boost::any(*cancel);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cancel") != m.end() && !m["Cancel"].empty()) {
      cancel = make_shared<long>(boost::any_cast<long>(m["Cancel"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Properties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~UpdateTaskCustomerRequestCustomers() = default;
};
class UpdateTaskCustomerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateTaskCustomerRequestCustomers>> customers{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  UpdateTaskCustomerRequest() {}

  explicit UpdateTaskCustomerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customers) {
      vector<boost::any> temp1;
      for(auto item1:*customers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Customers"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Customers") != m.end() && !m["Customers"].empty()) {
      if (typeid(vector<boost::any>) == m["Customers"].type()) {
        vector<UpdateTaskCustomerRequestCustomers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Customers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTaskCustomerRequestCustomers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customers = make_shared<vector<UpdateTaskCustomerRequestCustomers>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~UpdateTaskCustomerRequest() = default;
};
class UpdateTaskCustomerShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customersShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  UpdateTaskCustomerShrinkRequest() {}

  explicit UpdateTaskCustomerShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customersShrink) {
      res["Customers"] = boost::any(*customersShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Customers") != m.end() && !m["Customers"].empty()) {
      customersShrink = make_shared<string>(boost::any_cast<string>(m["Customers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~UpdateTaskCustomerShrinkRequest() = default;
};
class UpdateTaskCustomerResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<string>> unHandleNumbers{};

  UpdateTaskCustomerResponseBodyModel() {}

  explicit UpdateTaskCustomerResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unHandleNumbers) {
      res["UnHandleNumbers"] = boost::any(*unHandleNumbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnHandleNumbers") != m.end() && !m["UnHandleNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnHandleNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnHandleNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unHandleNumbers = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateTaskCustomerResponseBodyModel() = default;
};
class UpdateTaskCustomerResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<UpdateTaskCustomerResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> timestamp{};

  UpdateTaskCustomerResponseBody() {}

  explicit UpdateTaskCustomerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        UpdateTaskCustomerResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<UpdateTaskCustomerResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~UpdateTaskCustomerResponseBody() = default;
};
class UpdateTaskCustomerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTaskCustomerResponseBody> body{};

  UpdateTaskCustomerResponse() {}

  explicit UpdateTaskCustomerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

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
        UpdateTaskCustomerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTaskCustomerResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTaskCustomerResponse() = default;
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
  AddBlacklistResponse addBlacklistWithOptions(shared_ptr<AddBlacklistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddBlacklistResponse addBlacklist(shared_ptr<AddBlacklistRequest> request);
  AddTaskResponse addTaskWithOptions(shared_ptr<AddTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTaskResponse addTask(shared_ptr<AddTaskRequest> request);
  AgentCancelCallResponse agentCancelCallWithOptions(shared_ptr<AgentCancelCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AgentCancelCallResponse agentCancelCall(shared_ptr<AgentCancelCallRequest> request);
  AgentRecoverCallResponse agentRecoverCallWithOptions(shared_ptr<AgentRecoverCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AgentRecoverCallResponse agentRecoverCall(shared_ptr<AgentRecoverCallRequest> request);
  DetailsResponse detailsWithOptions(shared_ptr<DetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetailsResponse details(shared_ptr<DetailsRequest> request);
  EditTaskResponse editTaskWithOptions(shared_ptr<EditTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditTaskResponse editTask(shared_ptr<EditTaskRequest> request);
  ImportNumberResponse importNumberWithOptions(shared_ptr<ImportNumberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportNumberResponse importNumber(shared_ptr<ImportNumberRequest> request);
  PageResponse pageWithOptions(shared_ptr<PageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PageResponse page(shared_ptr<PageRequest> request);
  SmsTemplateCreateResponse smsTemplateCreateWithOptions(shared_ptr<SmsTemplateCreateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmsTemplateCreateResponse smsTemplateCreate(shared_ptr<SmsTemplateCreateRequest> request);
  SmsTemplatePageListResponse smsTemplatePageListWithOptions(shared_ptr<SmsTemplatePageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmsTemplatePageListResponse smsTemplatePageList(shared_ptr<SmsTemplatePageListRequest> request);
  TaskCallChatsResponse taskCallChatsWithOptions(shared_ptr<TaskCallChatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TaskCallChatsResponse taskCallChats(shared_ptr<TaskCallChatsRequest> request);
  TaskCallInfoResponse taskCallInfoWithOptions(shared_ptr<TaskCallInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TaskCallInfoResponse taskCallInfo(shared_ptr<TaskCallInfoRequest> request);
  TaskCallListResponse taskCallListWithOptions(shared_ptr<TaskCallListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TaskCallListResponse taskCallList(shared_ptr<TaskCallListRequest> request);
  TaskCancelCallResponse taskCancelCallWithOptions(shared_ptr<TaskCancelCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TaskCancelCallResponse taskCancelCall(shared_ptr<TaskCancelCallRequest> request);
  TaskListResponse taskListWithOptions(shared_ptr<TaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TaskListResponse taskList(shared_ptr<TaskListRequest> request);
  TaskRecoverCallResponse taskRecoverCallWithOptions(shared_ptr<TaskRecoverCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TaskRecoverCallResponse taskRecoverCall(shared_ptr<TaskRecoverCallRequest> request);
  TemplateListResponse templateListWithOptions(shared_ptr<TemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TemplateListResponse templateList(shared_ptr<TemplateListRequest> request);
  UpdateAgentStatusResponse updateAgentStatusWithOptions(shared_ptr<UpdateAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAgentStatusResponse updateAgentStatus(shared_ptr<UpdateAgentStatusRequest> request);
  UpdateTaskCustomerResponse updateTaskCustomerWithOptions(shared_ptr<UpdateTaskCustomerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTaskCustomerResponse updateTaskCustomer(shared_ptr<UpdateTaskCustomerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aiccs20230516

#endif
