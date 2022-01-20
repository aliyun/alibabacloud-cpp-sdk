// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYVMSAPI20170525_H_
#define ALIBABACLOUD_DYVMSAPI20170525_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dyvmsapi20170525 {
class AddRtcAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AddRtcAccountRequest() {}

  explicit AddRtcAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
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
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
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


  virtual ~AddRtcAccountRequest() = default;
};
class AddRtcAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  AddRtcAccountResponseBody() {}

  explicit AddRtcAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddRtcAccountResponseBody() = default;
};
class AddRtcAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddRtcAccountResponseBody> body{};

  AddRtcAccountResponse() {}

  explicit AddRtcAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddRtcAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddRtcAccountResponseBody>(model1);
      }
    }
  }


  virtual ~AddRtcAccountResponse() = default;
};
class AddVirtualNumberRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> corpNameList{};
  shared_ptr<string> numberList{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNum{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> routeType{};

  AddVirtualNumberRelationRequest() {}

  explicit AddVirtualNumberRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (corpNameList) {
      res["CorpNameList"] = boost::any(*corpNameList);
    }
    if (numberList) {
      res["NumberList"] = boost::any(*numberList);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CorpNameList") != m.end() && !m["CorpNameList"].empty()) {
      corpNameList = make_shared<string>(boost::any_cast<string>(m["CorpNameList"]));
    }
    if (m.find("NumberList") != m.end() && !m["NumberList"].empty()) {
      numberList = make_shared<string>(boost::any_cast<string>(m["NumberList"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<long>(boost::any_cast<long>(m["RouteType"]));
    }
  }


  virtual ~AddVirtualNumberRelationRequest() = default;
};
class AddVirtualNumberRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddVirtualNumberRelationResponseBody() {}

  explicit AddVirtualNumberRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddVirtualNumberRelationResponseBody() = default;
};
class AddVirtualNumberRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddVirtualNumberRelationResponseBody> body{};

  AddVirtualNumberRelationResponse() {}

  explicit AddVirtualNumberRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddVirtualNumberRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddVirtualNumberRelationResponseBody>(model1);
      }
    }
  }


  virtual ~AddVirtualNumberRelationResponse() = default;
};
class BatchRobotSmartCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> corpName{};
  shared_ptr<string> dialogId{};
  shared_ptr<bool> earlyMediaAsr{};
  shared_ptr<bool> isSelfLine{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> scheduleCall{};
  shared_ptr<long> scheduleTime{};
  shared_ptr<string> taskName{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> ttsParamHead{};

  BatchRobotSmartCallRequest() {}

  explicit BatchRobotSmartCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (corpName) {
      res["CorpName"] = boost::any(*corpName);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (earlyMediaAsr) {
      res["EarlyMediaAsr"] = boost::any(*earlyMediaAsr);
    }
    if (isSelfLine) {
      res["IsSelfLine"] = boost::any(*isSelfLine);
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
    if (scheduleCall) {
      res["ScheduleCall"] = boost::any(*scheduleCall);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
    }
    if (ttsParamHead) {
      res["TtsParamHead"] = boost::any(*ttsParamHead);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CorpName") != m.end() && !m["CorpName"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["CorpName"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<string>(boost::any_cast<string>(m["DialogId"]));
    }
    if (m.find("EarlyMediaAsr") != m.end() && !m["EarlyMediaAsr"].empty()) {
      earlyMediaAsr = make_shared<bool>(boost::any_cast<bool>(m["EarlyMediaAsr"]));
    }
    if (m.find("IsSelfLine") != m.end() && !m["IsSelfLine"].empty()) {
      isSelfLine = make_shared<bool>(boost::any_cast<bool>(m["IsSelfLine"]));
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
    if (m.find("ScheduleCall") != m.end() && !m["ScheduleCall"].empty()) {
      scheduleCall = make_shared<bool>(boost::any_cast<bool>(m["ScheduleCall"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<long>(boost::any_cast<long>(m["ScheduleTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("TtsParamHead") != m.end() && !m["TtsParamHead"].empty()) {
      ttsParamHead = make_shared<string>(boost::any_cast<string>(m["TtsParamHead"]));
    }
  }


  virtual ~BatchRobotSmartCallRequest() = default;
};
class BatchRobotSmartCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  BatchRobotSmartCallResponseBody() {}

  explicit BatchRobotSmartCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~BatchRobotSmartCallResponseBody() = default;
};
class BatchRobotSmartCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchRobotSmartCallResponseBody> body{};

  BatchRobotSmartCallResponse() {}

  explicit BatchRobotSmartCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchRobotSmartCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchRobotSmartCallResponseBody>(model1);
      }
    }
  }


  virtual ~BatchRobotSmartCallResponse() = default;
};
class CancelCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CancelCallRequest() {}

  explicit CancelCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~CancelCallRequest() = default;
};
class CancelCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  CancelCallResponseBody() {}

  explicit CancelCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~CancelCallResponseBody() = default;
};
class CancelCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelCallResponseBody> body{};

  CancelCallResponse() {}

  explicit CancelCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelCallResponseBody>(model1);
      }
    }
  }


  virtual ~CancelCallResponse() = default;
};
class CancelOrderRobotTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  CancelOrderRobotTaskRequest() {}

  explicit CancelOrderRobotTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelOrderRobotTaskRequest() = default;
};
class CancelOrderRobotTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CancelOrderRobotTaskResponseBody() {}

  explicit CancelOrderRobotTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelOrderRobotTaskResponseBody() = default;
};
class CancelOrderRobotTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelOrderRobotTaskResponseBody> body{};

  CancelOrderRobotTaskResponse() {}

  explicit CancelOrderRobotTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelOrderRobotTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelOrderRobotTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelOrderRobotTaskResponse() = default;
};
class CancelRobotTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  CancelRobotTaskRequest() {}

  explicit CancelRobotTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelRobotTaskRequest() = default;
};
class CancelRobotTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CancelRobotTaskResponseBody() {}

  explicit CancelRobotTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelRobotTaskResponseBody() = default;
};
class CancelRobotTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelRobotTaskResponseBody> body{};

  CancelRobotTaskResponse() {}

  explicit CancelRobotTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelRobotTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelRobotTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelRobotTaskResponse() = default;
};
class ClickToDialRequest : public Darabonba::Model {
public:
  shared_ptr<bool> asrFlag{};
  shared_ptr<string> asrModelId{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> callerNumber{};
  shared_ptr<string> callerShowNumber{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<bool> recordFlag{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sessionTimeout{};

  ClickToDialRequest() {}

  explicit ClickToDialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrFlag) {
      res["AsrFlag"] = boost::any(*asrFlag);
    }
    if (asrModelId) {
      res["AsrModelId"] = boost::any(*asrModelId);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (callerNumber) {
      res["CallerNumber"] = boost::any(*callerNumber);
    }
    if (callerShowNumber) {
      res["CallerShowNumber"] = boost::any(*callerShowNumber);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (recordFlag) {
      res["RecordFlag"] = boost::any(*recordFlag);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrFlag") != m.end() && !m["AsrFlag"].empty()) {
      asrFlag = make_shared<bool>(boost::any_cast<bool>(m["AsrFlag"]));
    }
    if (m.find("AsrModelId") != m.end() && !m["AsrModelId"].empty()) {
      asrModelId = make_shared<string>(boost::any_cast<string>(m["AsrModelId"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CallerNumber") != m.end() && !m["CallerNumber"].empty()) {
      callerNumber = make_shared<string>(boost::any_cast<string>(m["CallerNumber"]));
    }
    if (m.find("CallerShowNumber") != m.end() && !m["CallerShowNumber"].empty()) {
      callerShowNumber = make_shared<string>(boost::any_cast<string>(m["CallerShowNumber"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RecordFlag") != m.end() && !m["RecordFlag"].empty()) {
      recordFlag = make_shared<bool>(boost::any_cast<bool>(m["RecordFlag"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
  }


  virtual ~ClickToDialRequest() = default;
};
class ClickToDialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ClickToDialResponseBody() {}

  explicit ClickToDialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ClickToDialResponseBody() = default;
};
class ClickToDialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ClickToDialResponseBody> body{};

  ClickToDialResponse() {}

  explicit ClickToDialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ClickToDialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClickToDialResponseBody>(model1);
      }
    }
  }


  virtual ~ClickToDialResponse() = default;
};
class CreateCallTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> fireTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> stopTime{};
  shared_ptr<string> taskName{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};

  CreateCallTaskRequest() {}

  explicit CreateCallTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (fireTime) {
      res["FireTime"] = boost::any(*fireTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("FireTime") != m.end() && !m["FireTime"].empty()) {
      fireTime = make_shared<string>(boost::any_cast<string>(m["FireTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~CreateCallTaskRequest() = default;
};
class CreateCallTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  CreateCallTaskResponseBody() {}

  explicit CreateCallTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCallTaskResponseBody() = default;
};
class CreateCallTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCallTaskResponseBody> body{};

  CreateCallTaskResponse() {}

  explicit CreateCallTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateCallTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCallTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCallTaskResponse() = default;
};
class CreateRobotTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> caller{};
  shared_ptr<string> corpName{};
  shared_ptr<long> dialogId{};
  shared_ptr<bool> isSelfLine{};
  shared_ptr<bool> numberStatusIdent{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> recallInterval{};
  shared_ptr<string> recallStateCodes{};
  shared_ptr<long> recallTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> retryType{};
  shared_ptr<string> taskName{};

  CreateRobotTaskRequest() {}

  explicit CreateRobotTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (corpName) {
      res["CorpName"] = boost::any(*corpName);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (isSelfLine) {
      res["IsSelfLine"] = boost::any(*isSelfLine);
    }
    if (numberStatusIdent) {
      res["NumberStatusIdent"] = boost::any(*numberStatusIdent);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (recallInterval) {
      res["RecallInterval"] = boost::any(*recallInterval);
    }
    if (recallStateCodes) {
      res["RecallStateCodes"] = boost::any(*recallStateCodes);
    }
    if (recallTimes) {
      res["RecallTimes"] = boost::any(*recallTimes);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (retryType) {
      res["RetryType"] = boost::any(*retryType);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("CorpName") != m.end() && !m["CorpName"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["CorpName"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("IsSelfLine") != m.end() && !m["IsSelfLine"].empty()) {
      isSelfLine = make_shared<bool>(boost::any_cast<bool>(m["IsSelfLine"]));
    }
    if (m.find("NumberStatusIdent") != m.end() && !m["NumberStatusIdent"].empty()) {
      numberStatusIdent = make_shared<bool>(boost::any_cast<bool>(m["NumberStatusIdent"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RecallInterval") != m.end() && !m["RecallInterval"].empty()) {
      recallInterval = make_shared<long>(boost::any_cast<long>(m["RecallInterval"]));
    }
    if (m.find("RecallStateCodes") != m.end() && !m["RecallStateCodes"].empty()) {
      recallStateCodes = make_shared<string>(boost::any_cast<string>(m["RecallStateCodes"]));
    }
    if (m.find("RecallTimes") != m.end() && !m["RecallTimes"].empty()) {
      recallTimes = make_shared<long>(boost::any_cast<long>(m["RecallTimes"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RetryType") != m.end() && !m["RetryType"].empty()) {
      retryType = make_shared<long>(boost::any_cast<long>(m["RetryType"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~CreateRobotTaskRequest() = default;
};
class CreateRobotTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateRobotTaskResponseBody() {}

  explicit CreateRobotTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRobotTaskResponseBody() = default;
};
class CreateRobotTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRobotTaskResponseBody> body{};

  CreateRobotTaskResponse() {}

  explicit CreateRobotTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRobotTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRobotTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRobotTaskResponse() = default;
};
class DeleteRobotTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  DeleteRobotTaskRequest() {}

  explicit DeleteRobotTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRobotTaskRequest() = default;
};
class DeleteRobotTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteRobotTaskResponseBody() {}

  explicit DeleteRobotTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRobotTaskResponseBody() = default;
};
class DeleteRobotTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteRobotTaskResponseBody> body{};

  DeleteRobotTaskResponse() {}

  explicit DeleteRobotTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRobotTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRobotTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRobotTaskResponse() = default;
};
class ExecuteCallTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> fireTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};
  shared_ptr<long> taskId{};

  ExecuteCallTaskRequest() {}

  explicit ExecuteCallTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fireTime) {
      res["FireTime"] = boost::any(*fireTime);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FireTime") != m.end() && !m["FireTime"].empty()) {
      fireTime = make_shared<string>(boost::any_cast<string>(m["FireTime"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~ExecuteCallTaskRequest() = default;
};
class ExecuteCallTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  ExecuteCallTaskResponseBody() {}

  explicit ExecuteCallTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExecuteCallTaskResponseBody() = default;
};
class ExecuteCallTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteCallTaskResponseBody> body{};

  ExecuteCallTaskResponse() {}

  explicit ExecuteCallTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExecuteCallTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteCallTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteCallTaskResponse() = default;
};
class GetCallInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> rtcId{};

  GetCallInfoRequest() {}

  explicit GetCallInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (rtcId) {
      res["RtcId"] = boost::any(*rtcId);
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
    if (m.find("RtcId") != m.end() && !m["RtcId"].empty()) {
      rtcId = make_shared<string>(boost::any_cast<string>(m["RtcId"]));
    }
  }


  virtual ~GetCallInfoRequest() = default;
};
class GetCallInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> status{};

  GetCallInfoResponseBodyData() {}

  explicit GetCallInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetCallInfoResponseBodyData() = default;
};
class GetCallInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCallInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetCallInfoResponseBody() {}

  explicit GetCallInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCallInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCallInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCallInfoResponseBody() = default;
};
class GetCallInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCallInfoResponseBody> body{};

  GetCallInfoResponse() {}

  explicit GetCallInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCallInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCallInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetCallInfoResponse() = default;
};
class GetHotlineQualificationByOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetHotlineQualificationByOrderRequest() {}

  explicit GetHotlineQualificationByOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
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


  virtual ~GetHotlineQualificationByOrderRequest() = default;
};
class GetHotlineQualificationByOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> status{};

  GetHotlineQualificationByOrderResponseBodyData() {}

  explicit GetHotlineQualificationByOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetHotlineQualificationByOrderResponseBodyData() = default;
};
class GetHotlineQualificationByOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetHotlineQualificationByOrderResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetHotlineQualificationByOrderResponseBody() {}

  explicit GetHotlineQualificationByOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineQualificationByOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineQualificationByOrderResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetHotlineQualificationByOrderResponseBody() = default;
};
class GetHotlineQualificationByOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotlineQualificationByOrderResponseBody> body{};

  GetHotlineQualificationByOrderResponse() {}

  explicit GetHotlineQualificationByOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotlineQualificationByOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotlineQualificationByOrderResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotlineQualificationByOrderResponse() = default;
};
class GetMqttTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetMqttTokenRequest() {}

  explicit GetMqttTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~GetMqttTokenRequest() = default;
};
class GetMqttTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> p2pTopic{};
  shared_ptr<string> serverId{};
  shared_ptr<string> token{};
  shared_ptr<string> username{};

  GetMqttTokenResponseBodyData() {}

  explicit GetMqttTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (p2pTopic) {
      res["P2pTopic"] = boost::any(*p2pTopic);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("P2pTopic") != m.end() && !m["P2pTopic"].empty()) {
      p2pTopic = make_shared<string>(boost::any_cast<string>(m["P2pTopic"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetMqttTokenResponseBodyData() = default;
};
class GetMqttTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetMqttTokenResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetMqttTokenResponseBody() {}

  explicit GetMqttTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMqttTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMqttTokenResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMqttTokenResponseBody() = default;
};
class GetMqttTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMqttTokenResponseBody> body{};

  GetMqttTokenResponse() {}

  explicit GetMqttTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMqttTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMqttTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetMqttTokenResponse() = default;
};
class GetRtcTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<bool> isCustomAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> userId{};

  GetRtcTokenRequest() {}

  explicit GetRtcTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (isCustomAccount) {
      res["IsCustomAccount"] = boost::any(*isCustomAccount);
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("IsCustomAccount") != m.end() && !m["IsCustomAccount"].empty()) {
      isCustomAccount = make_shared<bool>(boost::any_cast<bool>(m["IsCustomAccount"]));
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
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetRtcTokenRequest() = default;
};
class GetRtcTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  GetRtcTokenResponseBody() {}

  explicit GetRtcTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRtcTokenResponseBody() = default;
};
class GetRtcTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRtcTokenResponseBody> body{};

  GetRtcTokenResponse() {}

  explicit GetRtcTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRtcTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRtcTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetRtcTokenResponse() = default;
};
class GetTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tokenType{};

  GetTokenRequest() {}

  explicit GetTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tokenType) {
      res["TokenType"] = boost::any(*tokenType);
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
    if (m.find("TokenType") != m.end() && !m["TokenType"].empty()) {
      tokenType = make_shared<string>(boost::any_cast<string>(m["TokenType"]));
    }
  }


  virtual ~GetTokenRequest() = default;
};
class GetTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> token{};

  GetTokenResponseBody() {}

  explicit GetTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (token) {
      res["Token"] = boost::any(*token);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetTokenResponseBody() = default;
};
class GetTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTokenResponseBody> body{};

  GetTokenResponse() {}

  explicit GetTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetTokenResponse() = default;
};
class IvrCallRequestMenuKeyMap : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> key{};
  shared_ptr<string> ttsParams{};

  IvrCallRequestMenuKeyMap() {}

  explicit IvrCallRequestMenuKeyMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (ttsParams) {
      res["TtsParams"] = boost::any(*ttsParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("TtsParams") != m.end() && !m["TtsParams"].empty()) {
      ttsParams = make_shared<string>(boost::any_cast<string>(m["TtsParams"]));
    }
  }


  virtual ~IvrCallRequestMenuKeyMap() = default;
};
class IvrCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> byeCode{};
  shared_ptr<string> byeTtsParams{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<vector<IvrCallRequestMenuKeyMap>> menuKeyMap{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startCode{};
  shared_ptr<string> startTtsParams{};
  shared_ptr<long> timeout{};

  IvrCallRequest() {}

  explicit IvrCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byeCode) {
      res["ByeCode"] = boost::any(*byeCode);
    }
    if (byeTtsParams) {
      res["ByeTtsParams"] = boost::any(*byeTtsParams);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (menuKeyMap) {
      vector<boost::any> temp1;
      for(auto item1:*menuKeyMap){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MenuKeyMap"] = boost::any(temp1);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startCode) {
      res["StartCode"] = boost::any(*startCode);
    }
    if (startTtsParams) {
      res["StartTtsParams"] = boost::any(*startTtsParams);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ByeCode") != m.end() && !m["ByeCode"].empty()) {
      byeCode = make_shared<string>(boost::any_cast<string>(m["ByeCode"]));
    }
    if (m.find("ByeTtsParams") != m.end() && !m["ByeTtsParams"].empty()) {
      byeTtsParams = make_shared<string>(boost::any_cast<string>(m["ByeTtsParams"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("MenuKeyMap") != m.end() && !m["MenuKeyMap"].empty()) {
      if (typeid(vector<boost::any>) == m["MenuKeyMap"].type()) {
        vector<IvrCallRequestMenuKeyMap> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MenuKeyMap"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IvrCallRequestMenuKeyMap model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        menuKeyMap = make_shared<vector<IvrCallRequestMenuKeyMap>>(expect1);
      }
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartCode") != m.end() && !m["StartCode"].empty()) {
      startCode = make_shared<string>(boost::any_cast<string>(m["StartCode"]));
    }
    if (m.find("StartTtsParams") != m.end() && !m["StartTtsParams"].empty()) {
      startTtsParams = make_shared<string>(boost::any_cast<string>(m["StartTtsParams"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~IvrCallRequest() = default;
};
class IvrCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  IvrCallResponseBody() {}

  explicit IvrCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~IvrCallResponseBody() = default;
};
class IvrCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IvrCallResponseBody> body{};

  IvrCallResponse() {}

  explicit IvrCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        IvrCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IvrCallResponseBody>(model1);
      }
    }
  }


  virtual ~IvrCallResponse() = default;
};
class ListCallTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> templateName{};

  ListCallTaskRequest() {}

  explicit ListCallTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListCallTaskRequest() = default;
};
class ListCallTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> completeTime{};
  shared_ptr<long> completedCount{};
  shared_ptr<long> completedRate{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> fireTime{};
  shared_ptr<long> id{};
  shared_ptr<string> resource{};
  shared_ptr<string> status{};
  shared_ptr<string> stopTime{};
  shared_ptr<string> taskName{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<long> totalCount{};

  ListCallTaskResponseBodyData() {}

  explicit ListCallTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (completedCount) {
      res["CompletedCount"] = boost::any(*completedCount);
    }
    if (completedRate) {
      res["CompletedRate"] = boost::any(*completedRate);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (fireTime) {
      res["FireTime"] = boost::any(*fireTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<string>(boost::any_cast<string>(m["CompleteTime"]));
    }
    if (m.find("CompletedCount") != m.end() && !m["CompletedCount"].empty()) {
      completedCount = make_shared<long>(boost::any_cast<long>(m["CompletedCount"]));
    }
    if (m.find("CompletedRate") != m.end() && !m["CompletedRate"].empty()) {
      completedRate = make_shared<long>(boost::any_cast<long>(m["CompletedRate"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("FireTime") != m.end() && !m["FireTime"].empty()) {
      fireTime = make_shared<string>(boost::any_cast<string>(m["FireTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCallTaskResponseBodyData() = default;
};
class ListCallTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListCallTaskResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListCallTaskResponseBody() {}

  explicit ListCallTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCallTaskResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCallTaskResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCallTaskResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListCallTaskResponseBody() = default;
};
class ListCallTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCallTaskResponseBody> body{};

  ListCallTaskResponse() {}

  explicit ListCallTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCallTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCallTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListCallTaskResponse() = default;
};
class ListCallTaskDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNum{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};
  shared_ptr<long> taskId{};

  ListCallTaskDetailRequest() {}

  explicit ListCallTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNum) {
      res["CalledNum"] = boost::any(*calledNum);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNum") != m.end() && !m["CalledNum"].empty()) {
      calledNum = make_shared<string>(boost::any_cast<string>(m["CalledNum"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~ListCallTaskDetailRequest() = default;
};
class ListCallTaskDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> calledNum{};
  shared_ptr<string> caller{};
  shared_ptr<long> duration{};
  shared_ptr<long> id{};
  shared_ptr<string> status{};

  ListCallTaskDetailResponseBodyData() {}

  explicit ListCallTaskDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNum) {
      res["CalledNum"] = boost::any(*calledNum);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNum") != m.end() && !m["CalledNum"].empty()) {
      calledNum = make_shared<string>(boost::any_cast<string>(m["CalledNum"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListCallTaskDetailResponseBodyData() = default;
};
class ListCallTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListCallTaskDetailResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<long> totalPage{};

  ListCallTaskDetailResponseBody() {}

  explicit ListCallTaskDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCallTaskDetailResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCallTaskDetailResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCallTaskDetailResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~ListCallTaskDetailResponseBody() = default;
};
class ListCallTaskDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCallTaskDetailResponseBody> body{};

  ListCallTaskDetailResponse() {}

  explicit ListCallTaskDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCallTaskDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCallTaskDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListCallTaskDetailResponse() = default;
};
class ListHotlineTransferNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> hotlineNumber{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListHotlineTransferNumberRequest() {}

  explicit ListHotlineTransferNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
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
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
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
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
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
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListHotlineTransferNumberRequest() = default;
};
class ListHotlineTransferNumberResponseBodyDataValues : public Darabonba::Model {
public:
  shared_ptr<string> hotlineNumber{};
  shared_ptr<string> identityCard{};
  shared_ptr<string> numberOwnerName{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resUniqueCode{};

  ListHotlineTransferNumberResponseBodyDataValues() {}

  explicit ListHotlineTransferNumberResponseBodyDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
    }
    if (identityCard) {
      res["IdentityCard"] = boost::any(*identityCard);
    }
    if (numberOwnerName) {
      res["NumberOwnerName"] = boost::any(*numberOwnerName);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resUniqueCode) {
      res["ResUniqueCode"] = boost::any(*resUniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
    }
    if (m.find("IdentityCard") != m.end() && !m["IdentityCard"].empty()) {
      identityCard = make_shared<string>(boost::any_cast<string>(m["IdentityCard"]));
    }
    if (m.find("NumberOwnerName") != m.end() && !m["NumberOwnerName"].empty()) {
      numberOwnerName = make_shared<string>(boost::any_cast<string>(m["NumberOwnerName"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResUniqueCode") != m.end() && !m["ResUniqueCode"].empty()) {
      resUniqueCode = make_shared<string>(boost::any_cast<string>(m["ResUniqueCode"]));
    }
  }


  virtual ~ListHotlineTransferNumberResponseBodyDataValues() = default;
};
class ListHotlineTransferNumberResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<ListHotlineTransferNumberResponseBodyDataValues>> values{};

  ListHotlineTransferNumberResponseBodyData() {}

  explicit ListHotlineTransferNumberResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<ListHotlineTransferNumberResponseBodyDataValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotlineTransferNumberResponseBodyDataValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<ListHotlineTransferNumberResponseBodyDataValues>>(expect1);
      }
    }
  }


  virtual ~ListHotlineTransferNumberResponseBodyData() = default;
};
class ListHotlineTransferNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListHotlineTransferNumberResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListHotlineTransferNumberResponseBody() {}

  explicit ListHotlineTransferNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListHotlineTransferNumberResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListHotlineTransferNumberResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListHotlineTransferNumberResponseBody() = default;
};
class ListHotlineTransferNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHotlineTransferNumberResponseBody> body{};

  ListHotlineTransferNumberResponse() {}

  explicit ListHotlineTransferNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHotlineTransferNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotlineTransferNumberResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotlineTransferNumberResponse() = default;
};
class ListHotlineTransferRegisterFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> hotlineNumber{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListHotlineTransferRegisterFileRequest() {}

  explicit ListHotlineTransferRegisterFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
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
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
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
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
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
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListHotlineTransferRegisterFileRequest() = default;
};
class ListHotlineTransferRegisterFileResponseBodyDataValues : public Darabonba::Model {
public:
  shared_ptr<string> agree{};
  shared_ptr<string> corpName{};
  shared_ptr<string> hotlineNumber{};
  shared_ptr<string> mngOpIdentityCard{};
  shared_ptr<string> mngOpMail{};
  shared_ptr<string> mngOpMobile{};
  shared_ptr<string> mngOpName{};
  shared_ptr<string> qualificationId{};
  shared_ptr<long> resUniqueCode{};

  ListHotlineTransferRegisterFileResponseBodyDataValues() {}

  explicit ListHotlineTransferRegisterFileResponseBodyDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agree) {
      res["Agree"] = boost::any(*agree);
    }
    if (corpName) {
      res["CorpName"] = boost::any(*corpName);
    }
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
    }
    if (mngOpIdentityCard) {
      res["MngOpIdentityCard"] = boost::any(*mngOpIdentityCard);
    }
    if (mngOpMail) {
      res["MngOpMail"] = boost::any(*mngOpMail);
    }
    if (mngOpMobile) {
      res["MngOpMobile"] = boost::any(*mngOpMobile);
    }
    if (mngOpName) {
      res["MngOpName"] = boost::any(*mngOpName);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resUniqueCode) {
      res["ResUniqueCode"] = boost::any(*resUniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agree") != m.end() && !m["Agree"].empty()) {
      agree = make_shared<string>(boost::any_cast<string>(m["Agree"]));
    }
    if (m.find("CorpName") != m.end() && !m["CorpName"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["CorpName"]));
    }
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
    }
    if (m.find("MngOpIdentityCard") != m.end() && !m["MngOpIdentityCard"].empty()) {
      mngOpIdentityCard = make_shared<string>(boost::any_cast<string>(m["MngOpIdentityCard"]));
    }
    if (m.find("MngOpMail") != m.end() && !m["MngOpMail"].empty()) {
      mngOpMail = make_shared<string>(boost::any_cast<string>(m["MngOpMail"]));
    }
    if (m.find("MngOpMobile") != m.end() && !m["MngOpMobile"].empty()) {
      mngOpMobile = make_shared<string>(boost::any_cast<string>(m["MngOpMobile"]));
    }
    if (m.find("MngOpName") != m.end() && !m["MngOpName"].empty()) {
      mngOpName = make_shared<string>(boost::any_cast<string>(m["MngOpName"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResUniqueCode") != m.end() && !m["ResUniqueCode"].empty()) {
      resUniqueCode = make_shared<long>(boost::any_cast<long>(m["ResUniqueCode"]));
    }
  }


  virtual ~ListHotlineTransferRegisterFileResponseBodyDataValues() = default;
};
class ListHotlineTransferRegisterFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<ListHotlineTransferRegisterFileResponseBodyDataValues>> values{};

  ListHotlineTransferRegisterFileResponseBodyData() {}

  explicit ListHotlineTransferRegisterFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<ListHotlineTransferRegisterFileResponseBodyDataValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotlineTransferRegisterFileResponseBodyDataValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<ListHotlineTransferRegisterFileResponseBodyDataValues>>(expect1);
      }
    }
  }


  virtual ~ListHotlineTransferRegisterFileResponseBodyData() = default;
};
class ListHotlineTransferRegisterFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListHotlineTransferRegisterFileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListHotlineTransferRegisterFileResponseBody() {}

  explicit ListHotlineTransferRegisterFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListHotlineTransferRegisterFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListHotlineTransferRegisterFileResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListHotlineTransferRegisterFileResponseBody() = default;
};
class ListHotlineTransferRegisterFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHotlineTransferRegisterFileResponseBody> body{};

  ListHotlineTransferRegisterFileResponse() {}

  explicit ListHotlineTransferRegisterFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListHotlineTransferRegisterFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotlineTransferRegisterFileResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotlineTransferRegisterFileResponse() = default;
};
class QueryCallDetailByCallIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> prodId{};
  shared_ptr<long> queryDate{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryCallDetailByCallIdRequest() {}

  explicit QueryCallDetailByCallIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodId) {
      res["ProdId"] = boost::any(*prodId);
    }
    if (queryDate) {
      res["QueryDate"] = boost::any(*queryDate);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdId") != m.end() && !m["ProdId"].empty()) {
      prodId = make_shared<long>(boost::any_cast<long>(m["ProdId"]));
    }
    if (m.find("QueryDate") != m.end() && !m["QueryDate"].empty()) {
      queryDate = make_shared<long>(boost::any_cast<long>(m["QueryDate"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryCallDetailByCallIdRequest() = default;
};
class QueryCallDetailByCallIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryCallDetailByCallIdResponseBody() {}

  explicit QueryCallDetailByCallIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryCallDetailByCallIdResponseBody() = default;
};
class QueryCallDetailByCallIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryCallDetailByCallIdResponseBody> body{};

  QueryCallDetailByCallIdResponse() {}

  explicit QueryCallDetailByCallIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryCallDetailByCallIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCallDetailByCallIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCallDetailByCallIdResponse() = default;
};
class QueryCallDetailByTaskIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> callee{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> queryDate{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};

  QueryCallDetailByTaskIdRequest() {}

  explicit QueryCallDetailByTaskIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (queryDate) {
      res["QueryDate"] = boost::any(*queryDate);
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
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QueryDate") != m.end() && !m["QueryDate"].empty()) {
      queryDate = make_shared<long>(boost::any_cast<long>(m["QueryDate"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~QueryCallDetailByTaskIdRequest() = default;
};
class QueryCallDetailByTaskIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryCallDetailByTaskIdResponseBody() {}

  explicit QueryCallDetailByTaskIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryCallDetailByTaskIdResponseBody() = default;
};
class QueryCallDetailByTaskIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryCallDetailByTaskIdResponseBody> body{};

  QueryCallDetailByTaskIdResponse() {}

  explicit QueryCallDetailByTaskIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryCallDetailByTaskIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCallDetailByTaskIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCallDetailByTaskIdResponse() = default;
};
class QueryCallInPoolTransferConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryCallInPoolTransferConfigRequest() {}

  explicit QueryCallInPoolTransferConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryCallInPoolTransferConfigRequest() = default;
};
class QueryCallInPoolTransferConfigResponseBodyDataDetails : public Darabonba::Model {
public:
  shared_ptr<string> called{};

  QueryCallInPoolTransferConfigResponseBodyDataDetails() {}

  explicit QueryCallInPoolTransferConfigResponseBodyDataDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (called) {
      res["Called"] = boost::any(*called);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Called") != m.end() && !m["Called"].empty()) {
      called = make_shared<string>(boost::any_cast<string>(m["Called"]));
    }
  }


  virtual ~QueryCallInPoolTransferConfigResponseBodyDataDetails() = default;
};
class QueryCallInPoolTransferConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> calledRouteMode{};
  shared_ptr<vector<QueryCallInPoolTransferConfigResponseBodyDataDetails>> details{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> transferTimeout{};

  QueryCallInPoolTransferConfigResponseBodyData() {}

  explicit QueryCallInPoolTransferConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledRouteMode) {
      res["CalledRouteMode"] = boost::any(*calledRouteMode);
    }
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Details"] = boost::any(temp1);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (transferTimeout) {
      res["TransferTimeout"] = boost::any(*transferTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledRouteMode") != m.end() && !m["CalledRouteMode"].empty()) {
      calledRouteMode = make_shared<string>(boost::any_cast<string>(m["CalledRouteMode"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(vector<boost::any>) == m["Details"].type()) {
        vector<QueryCallInPoolTransferConfigResponseBodyDataDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCallInPoolTransferConfigResponseBodyDataDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<QueryCallInPoolTransferConfigResponseBodyDataDetails>>(expect1);
      }
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("TransferTimeout") != m.end() && !m["TransferTimeout"].empty()) {
      transferTimeout = make_shared<string>(boost::any_cast<string>(m["TransferTimeout"]));
    }
  }


  virtual ~QueryCallInPoolTransferConfigResponseBodyData() = default;
};
class QueryCallInPoolTransferConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryCallInPoolTransferConfigResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryCallInPoolTransferConfigResponseBody() {}

  explicit QueryCallInPoolTransferConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCallInPoolTransferConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCallInPoolTransferConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryCallInPoolTransferConfigResponseBody() = default;
};
class QueryCallInPoolTransferConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryCallInPoolTransferConfigResponseBody> body{};

  QueryCallInPoolTransferConfigResponse() {}

  explicit QueryCallInPoolTransferConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryCallInPoolTransferConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCallInPoolTransferConfigResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCallInPoolTransferConfigResponse() = default;
};
class QueryCallInTransferRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> callInCaller{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> queryDate{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryCallInTransferRecordRequest() {}

  explicit QueryCallInTransferRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callInCaller) {
      res["CallInCaller"] = boost::any(*callInCaller);
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (queryDate) {
      res["QueryDate"] = boost::any(*queryDate);
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
    if (m.find("CallInCaller") != m.end() && !m["CallInCaller"].empty()) {
      callInCaller = make_shared<string>(boost::any_cast<string>(m["CallInCaller"]));
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QueryDate") != m.end() && !m["QueryDate"].empty()) {
      queryDate = make_shared<string>(boost::any_cast<string>(m["QueryDate"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryCallInTransferRecordRequest() = default;
};
class QueryCallInTransferRecordResponseBodyDataValues : public Darabonba::Model {
public:
  shared_ptr<string> callInCalled{};
  shared_ptr<string> callInCaller{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> recordUrl{};
  shared_ptr<string> transferCalled{};
  shared_ptr<string> transferCaller{};

  QueryCallInTransferRecordResponseBodyDataValues() {}

  explicit QueryCallInTransferRecordResponseBodyDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callInCalled) {
      res["CallInCalled"] = boost::any(*callInCalled);
    }
    if (callInCaller) {
      res["CallInCaller"] = boost::any(*callInCaller);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (recordUrl) {
      res["RecordUrl"] = boost::any(*recordUrl);
    }
    if (transferCalled) {
      res["TransferCalled"] = boost::any(*transferCalled);
    }
    if (transferCaller) {
      res["TransferCaller"] = boost::any(*transferCaller);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallInCalled") != m.end() && !m["CallInCalled"].empty()) {
      callInCalled = make_shared<string>(boost::any_cast<string>(m["CallInCalled"]));
    }
    if (m.find("CallInCaller") != m.end() && !m["CallInCaller"].empty()) {
      callInCaller = make_shared<string>(boost::any_cast<string>(m["CallInCaller"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("RecordUrl") != m.end() && !m["RecordUrl"].empty()) {
      recordUrl = make_shared<string>(boost::any_cast<string>(m["RecordUrl"]));
    }
    if (m.find("TransferCalled") != m.end() && !m["TransferCalled"].empty()) {
      transferCalled = make_shared<string>(boost::any_cast<string>(m["TransferCalled"]));
    }
    if (m.find("TransferCaller") != m.end() && !m["TransferCaller"].empty()) {
      transferCaller = make_shared<string>(boost::any_cast<string>(m["TransferCaller"]));
    }
  }


  virtual ~QueryCallInTransferRecordResponseBodyDataValues() = default;
};
class QueryCallInTransferRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<QueryCallInTransferRecordResponseBodyDataValues>> values{};

  QueryCallInTransferRecordResponseBodyData() {}

  explicit QueryCallInTransferRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<QueryCallInTransferRecordResponseBodyDataValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCallInTransferRecordResponseBodyDataValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<QueryCallInTransferRecordResponseBodyDataValues>>(expect1);
      }
    }
  }


  virtual ~QueryCallInTransferRecordResponseBodyData() = default;
};
class QueryCallInTransferRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryCallInTransferRecordResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryCallInTransferRecordResponseBody() {}

  explicit QueryCallInTransferRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCallInTransferRecordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCallInTransferRecordResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryCallInTransferRecordResponseBody() = default;
};
class QueryCallInTransferRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryCallInTransferRecordResponseBody> body{};

  QueryCallInTransferRecordResponse() {}

  explicit QueryCallInTransferRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryCallInTransferRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCallInTransferRecordResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCallInTransferRecordResponse() = default;
};
class QueryRobotInfoListRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryRobotInfoListRequest() {}

  explicit QueryRobotInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
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
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
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


  virtual ~QueryRobotInfoListRequest() = default;
};
class QueryRobotInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryRobotInfoListResponseBody() {}

  explicit QueryRobotInfoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryRobotInfoListResponseBody() = default;
};
class QueryRobotInfoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRobotInfoListResponseBody> body{};

  QueryRobotInfoListResponse() {}

  explicit QueryRobotInfoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRobotInfoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRobotInfoListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRobotInfoListResponse() = default;
};
class QueryRobotTaskCallDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> callee{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> queryDate{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  QueryRobotTaskCallDetailRequest() {}

  explicit QueryRobotTaskCallDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (queryDate) {
      res["QueryDate"] = boost::any(*queryDate);
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
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QueryDate") != m.end() && !m["QueryDate"].empty()) {
      queryDate = make_shared<long>(boost::any_cast<long>(m["QueryDate"]));
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


  virtual ~QueryRobotTaskCallDetailRequest() = default;
};
class QueryRobotTaskCallDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryRobotTaskCallDetailResponseBody() {}

  explicit QueryRobotTaskCallDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryRobotTaskCallDetailResponseBody() = default;
};
class QueryRobotTaskCallDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRobotTaskCallDetailResponseBody> body{};

  QueryRobotTaskCallDetailResponse() {}

  explicit QueryRobotTaskCallDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRobotTaskCallDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRobotTaskCallDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRobotTaskCallDetailResponse() = default;
};
class QueryRobotTaskCallListRequest : public Darabonba::Model {
public:
  shared_ptr<string> callResult{};
  shared_ptr<string> called{};
  shared_ptr<string> dialogCountFrom{};
  shared_ptr<string> dialogCountTo{};
  shared_ptr<string> durationFrom{};
  shared_ptr<string> durationTo{};
  shared_ptr<string> hangupDirection{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};

  QueryRobotTaskCallListRequest() {}

  explicit QueryRobotTaskCallListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callResult) {
      res["CallResult"] = boost::any(*callResult);
    }
    if (called) {
      res["Called"] = boost::any(*called);
    }
    if (dialogCountFrom) {
      res["DialogCountFrom"] = boost::any(*dialogCountFrom);
    }
    if (dialogCountTo) {
      res["DialogCountTo"] = boost::any(*dialogCountTo);
    }
    if (durationFrom) {
      res["DurationFrom"] = boost::any(*durationFrom);
    }
    if (durationTo) {
      res["DurationTo"] = boost::any(*durationTo);
    }
    if (hangupDirection) {
      res["HangupDirection"] = boost::any(*hangupDirection);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallResult") != m.end() && !m["CallResult"].empty()) {
      callResult = make_shared<string>(boost::any_cast<string>(m["CallResult"]));
    }
    if (m.find("Called") != m.end() && !m["Called"].empty()) {
      called = make_shared<string>(boost::any_cast<string>(m["Called"]));
    }
    if (m.find("DialogCountFrom") != m.end() && !m["DialogCountFrom"].empty()) {
      dialogCountFrom = make_shared<string>(boost::any_cast<string>(m["DialogCountFrom"]));
    }
    if (m.find("DialogCountTo") != m.end() && !m["DialogCountTo"].empty()) {
      dialogCountTo = make_shared<string>(boost::any_cast<string>(m["DialogCountTo"]));
    }
    if (m.find("DurationFrom") != m.end() && !m["DurationFrom"].empty()) {
      durationFrom = make_shared<string>(boost::any_cast<string>(m["DurationFrom"]));
    }
    if (m.find("DurationTo") != m.end() && !m["DurationTo"].empty()) {
      durationTo = make_shared<string>(boost::any_cast<string>(m["DurationTo"]));
    }
    if (m.find("HangupDirection") != m.end() && !m["HangupDirection"].empty()) {
      hangupDirection = make_shared<string>(boost::any_cast<string>(m["HangupDirection"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~QueryRobotTaskCallListRequest() = default;
};
class QueryRobotTaskCallListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryRobotTaskCallListResponseBody() {}

  explicit QueryRobotTaskCallListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryRobotTaskCallListResponseBody() = default;
};
class QueryRobotTaskCallListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRobotTaskCallListResponseBody> body{};

  QueryRobotTaskCallListResponse() {}

  explicit QueryRobotTaskCallListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRobotTaskCallListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRobotTaskCallListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRobotTaskCallListResponse() = default;
};
class QueryRobotTaskDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryRobotTaskDetailRequest() {}

  explicit QueryRobotTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
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


  virtual ~QueryRobotTaskDetailRequest() = default;
};
class QueryRobotTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryRobotTaskDetailResponseBody() {}

  explicit QueryRobotTaskDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryRobotTaskDetailResponseBody() = default;
};
class QueryRobotTaskDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRobotTaskDetailResponseBody> body{};

  QueryRobotTaskDetailResponse() {}

  explicit QueryRobotTaskDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRobotTaskDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRobotTaskDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRobotTaskDetailResponse() = default;
};
class QueryRobotTaskListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskName{};
  shared_ptr<string> time{};

  QueryRobotTaskListRequest() {}

  explicit QueryRobotTaskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (time) {
      res["Time"] = boost::any(*time);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QueryRobotTaskListRequest() = default;
};
class QueryRobotTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  QueryRobotTaskListResponseBody() {}

  explicit QueryRobotTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~QueryRobotTaskListResponseBody() = default;
};
class QueryRobotTaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRobotTaskListResponseBody> body{};

  QueryRobotTaskListResponse() {}

  explicit QueryRobotTaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRobotTaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRobotTaskListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRobotTaskListResponse() = default;
};
class QueryRobotv2AllListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryRobotv2AllListRequest() {}

  explicit QueryRobotv2AllListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~QueryRobotv2AllListRequest() = default;
};
class QueryRobotv2AllListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryRobotv2AllListResponseBody() {}

  explicit QueryRobotv2AllListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryRobotv2AllListResponseBody() = default;
};
class QueryRobotv2AllListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRobotv2AllListResponseBody> body{};

  QueryRobotv2AllListResponse() {}

  explicit QueryRobotv2AllListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRobotv2AllListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRobotv2AllListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRobotv2AllListResponse() = default;
};
class QueryVirtualNumberRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> routeType{};

  QueryVirtualNumberRequest() {}

  explicit QueryVirtualNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
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
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<long>(boost::any_cast<long>(m["RouteType"]));
    }
  }


  virtual ~QueryVirtualNumberRequest() = default;
};
class QueryVirtualNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  QueryVirtualNumberResponseBody() {}

  explicit QueryVirtualNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryVirtualNumberResponseBody() = default;
};
class QueryVirtualNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryVirtualNumberResponseBody> body{};

  QueryVirtualNumberResponse() {}

  explicit QueryVirtualNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryVirtualNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryVirtualNumberResponseBody>(model1);
      }
    }
  }


  virtual ~QueryVirtualNumberResponse() = default;
};
class QueryVirtualNumberRelationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNum{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> qualificationId{};
  shared_ptr<string> regionNameCity{};
  shared_ptr<string> relatedNum{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> routeType{};
  shared_ptr<long> specId{};

  QueryVirtualNumberRelationRequest() {}

  explicit QueryVirtualNumberRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (regionNameCity) {
      res["RegionNameCity"] = boost::any(*regionNameCity);
    }
    if (relatedNum) {
      res["RelatedNum"] = boost::any(*relatedNum);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
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
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<long>(boost::any_cast<long>(m["QualificationId"]));
    }
    if (m.find("RegionNameCity") != m.end() && !m["RegionNameCity"].empty()) {
      regionNameCity = make_shared<string>(boost::any_cast<string>(m["RegionNameCity"]));
    }
    if (m.find("RelatedNum") != m.end() && !m["RelatedNum"].empty()) {
      relatedNum = make_shared<string>(boost::any_cast<string>(m["RelatedNum"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<long>(boost::any_cast<long>(m["RouteType"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<long>(boost::any_cast<long>(m["SpecId"]));
    }
  }


  virtual ~QueryVirtualNumberRelationRequest() = default;
};
class QueryVirtualNumberRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  QueryVirtualNumberRelationResponseBody() {}

  explicit QueryVirtualNumberRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryVirtualNumberRelationResponseBody() = default;
};
class QueryVirtualNumberRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryVirtualNumberRelationResponseBody> body{};

  QueryVirtualNumberRelationResponse() {}

  explicit QueryVirtualNumberRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryVirtualNumberRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryVirtualNumberRelationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryVirtualNumberRelationResponse() = default;
};
class QueryVoiceFileAuditInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> businessType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> voiceCodes{};

  QueryVoiceFileAuditInfoRequest() {}

  explicit QueryVoiceFileAuditInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
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
    if (voiceCodes) {
      res["VoiceCodes"] = boost::any(*voiceCodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
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
    if (m.find("VoiceCodes") != m.end() && !m["VoiceCodes"].empty()) {
      voiceCodes = make_shared<string>(boost::any_cast<string>(m["VoiceCodes"]));
    }
  }


  virtual ~QueryVoiceFileAuditInfoRequest() = default;
};
class QueryVoiceFileAuditInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> auditState{};
  shared_ptr<string> rejectInfo{};
  shared_ptr<string> voiceCode{};

  QueryVoiceFileAuditInfoResponseBodyData() {}

  explicit QueryVoiceFileAuditInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditState) {
      res["AuditState"] = boost::any(*auditState);
    }
    if (rejectInfo) {
      res["RejectInfo"] = boost::any(*rejectInfo);
    }
    if (voiceCode) {
      res["VoiceCode"] = boost::any(*voiceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditState") != m.end() && !m["AuditState"].empty()) {
      auditState = make_shared<string>(boost::any_cast<string>(m["AuditState"]));
    }
    if (m.find("RejectInfo") != m.end() && !m["RejectInfo"].empty()) {
      rejectInfo = make_shared<string>(boost::any_cast<string>(m["RejectInfo"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
  }


  virtual ~QueryVoiceFileAuditInfoResponseBodyData() = default;
};
class QueryVoiceFileAuditInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryVoiceFileAuditInfoResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryVoiceFileAuditInfoResponseBody() {}

  explicit QueryVoiceFileAuditInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryVoiceFileAuditInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryVoiceFileAuditInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryVoiceFileAuditInfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryVoiceFileAuditInfoResponseBody() = default;
};
class QueryVoiceFileAuditInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryVoiceFileAuditInfoResponseBody> body{};

  QueryVoiceFileAuditInfoResponse() {}

  explicit QueryVoiceFileAuditInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryVoiceFileAuditInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryVoiceFileAuditInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryVoiceFileAuditInfoResponse() = default;
};
class RefreshMqttTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RefreshMqttTokenRequest() {}

  explicit RefreshMqttTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
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
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
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


  virtual ~RefreshMqttTokenRequest() = default;
};
class RefreshMqttTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> p2pTopic{};
  shared_ptr<string> serverId{};
  shared_ptr<string> token{};
  shared_ptr<string> username{};

  RefreshMqttTokenResponseBodyData() {}

  explicit RefreshMqttTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (p2pTopic) {
      res["P2pTopic"] = boost::any(*p2pTopic);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("P2pTopic") != m.end() && !m["P2pTopic"].empty()) {
      p2pTopic = make_shared<string>(boost::any_cast<string>(m["P2pTopic"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~RefreshMqttTokenResponseBodyData() = default;
};
class RefreshMqttTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RefreshMqttTokenResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RefreshMqttTokenResponseBody() {}

  explicit RefreshMqttTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RefreshMqttTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RefreshMqttTokenResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefreshMqttTokenResponseBody() = default;
};
class RefreshMqttTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefreshMqttTokenResponseBody> body{};

  RefreshMqttTokenResponse() {}

  explicit RefreshMqttTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RefreshMqttTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshMqttTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshMqttTokenResponse() = default;
};
class SendVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> target{};
  shared_ptr<string> verifyType{};

  SendVerificationRequest() {}

  explicit SendVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
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
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (verifyType) {
      res["VerifyType"] = boost::any(*verifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
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
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("VerifyType") != m.end() && !m["VerifyType"].empty()) {
      verifyType = make_shared<string>(boost::any_cast<string>(m["VerifyType"]));
    }
  }


  virtual ~SendVerificationRequest() = default;
};
class SendVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SendVerificationResponseBody() {}

  explicit SendVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendVerificationResponseBody() = default;
};
class SendVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SendVerificationResponseBody> body{};

  SendVerificationResponse() {}

  explicit SendVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~SendVerificationResponse() = default;
};
class SetTransferCalleePoolConfigRequestDetails : public Darabonba::Model {
public:
  shared_ptr<string> called{};
  shared_ptr<string> caller{};

  SetTransferCalleePoolConfigRequestDetails() {}

  explicit SetTransferCalleePoolConfigRequestDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (called) {
      res["Called"] = boost::any(*called);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Called") != m.end() && !m["Called"].empty()) {
      called = make_shared<string>(boost::any_cast<string>(m["Called"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
  }


  virtual ~SetTransferCalleePoolConfigRequestDetails() = default;
};
class SetTransferCalleePoolConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledRouteMode{};
  shared_ptr<vector<SetTransferCalleePoolConfigRequestDetails>> details{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  SetTransferCalleePoolConfigRequest() {}

  explicit SetTransferCalleePoolConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledRouteMode) {
      res["CalledRouteMode"] = boost::any(*calledRouteMode);
    }
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Details"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
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
    if (m.find("CalledRouteMode") != m.end() && !m["CalledRouteMode"].empty()) {
      calledRouteMode = make_shared<string>(boost::any_cast<string>(m["CalledRouteMode"]));
    }
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(vector<boost::any>) == m["Details"].type()) {
        vector<SetTransferCalleePoolConfigRequestDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetTransferCalleePoolConfigRequestDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<SetTransferCalleePoolConfigRequestDetails>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~SetTransferCalleePoolConfigRequest() = default;
};
class SetTransferCalleePoolConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetTransferCalleePoolConfigResponseBody() {}

  explicit SetTransferCalleePoolConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetTransferCalleePoolConfigResponseBody() = default;
};
class SetTransferCalleePoolConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetTransferCalleePoolConfigResponseBody> body{};

  SetTransferCalleePoolConfigResponse() {}

  explicit SetTransferCalleePoolConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetTransferCalleePoolConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetTransferCalleePoolConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SetTransferCalleePoolConfigResponse() = default;
};
class SingleCallByTtsRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> speed{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> ttsParam{};
  shared_ptr<long> volume{};

  SingleCallByTtsRequest() {}

  explicit SingleCallByTtsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (ttsCode) {
      res["TtsCode"] = boost::any(*ttsCode);
    }
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("TtsCode") != m.end() && !m["TtsCode"].empty()) {
      ttsCode = make_shared<string>(boost::any_cast<string>(m["TtsCode"]));
    }
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~SingleCallByTtsRequest() = default;
};
class SingleCallByTtsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SingleCallByTtsResponseBody() {}

  explicit SingleCallByTtsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SingleCallByTtsResponseBody() = default;
};
class SingleCallByTtsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SingleCallByTtsResponseBody> body{};

  SingleCallByTtsResponse() {}

  explicit SingleCallByTtsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SingleCallByTtsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SingleCallByTtsResponseBody>(model1);
      }
    }
  }


  virtual ~SingleCallByTtsResponse() = default;
};
class SingleCallByVoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> speed{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> volume{};

  SingleCallByVoiceRequest() {}

  explicit SingleCallByVoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (voiceCode) {
      res["VoiceCode"] = boost::any(*voiceCode);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~SingleCallByVoiceRequest() = default;
};
class SingleCallByVoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SingleCallByVoiceResponseBody() {}

  explicit SingleCallByVoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SingleCallByVoiceResponseBody() = default;
};
class SingleCallByVoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SingleCallByVoiceResponseBody> body{};

  SingleCallByVoiceResponse() {}

  explicit SingleCallByVoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SingleCallByVoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SingleCallByVoiceResponseBody>(model1);
      }
    }
  }


  virtual ~SingleCallByVoiceResponse() = default;
};
class SmartCallRequest : public Darabonba::Model {
public:
  shared_ptr<bool> actionCodeBreak{};
  shared_ptr<long> actionCodeTimeBreak{};
  shared_ptr<string> asrBaseId{};
  shared_ptr<string> asrModelId{};
  shared_ptr<string> backgroundFileCode{};
  shared_ptr<long> backgroundSpeed{};
  shared_ptr<long> backgroundVolume{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> dynamicId{};
  shared_ptr<bool> earlyMediaAsr{};
  shared_ptr<bool> enableITN{};
  shared_ptr<long> muteTime{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pauseTime{};
  shared_ptr<bool> recordFlag{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<long> speed{};
  shared_ptr<long> streamAsr{};
  shared_ptr<bool> ttsConf{};
  shared_ptr<long> ttsSpeed{};
  shared_ptr<string> ttsStyle{};
  shared_ptr<long> ttsVolume{};
  shared_ptr<string> voiceCode{};
  shared_ptr<string> voiceCodeParam{};
  shared_ptr<long> volume{};

  SmartCallRequest() {}

  explicit SmartCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionCodeBreak) {
      res["ActionCodeBreak"] = boost::any(*actionCodeBreak);
    }
    if (actionCodeTimeBreak) {
      res["ActionCodeTimeBreak"] = boost::any(*actionCodeTimeBreak);
    }
    if (asrBaseId) {
      res["AsrBaseId"] = boost::any(*asrBaseId);
    }
    if (asrModelId) {
      res["AsrModelId"] = boost::any(*asrModelId);
    }
    if (backgroundFileCode) {
      res["BackgroundFileCode"] = boost::any(*backgroundFileCode);
    }
    if (backgroundSpeed) {
      res["BackgroundSpeed"] = boost::any(*backgroundSpeed);
    }
    if (backgroundVolume) {
      res["BackgroundVolume"] = boost::any(*backgroundVolume);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (dynamicId) {
      res["DynamicId"] = boost::any(*dynamicId);
    }
    if (earlyMediaAsr) {
      res["EarlyMediaAsr"] = boost::any(*earlyMediaAsr);
    }
    if (enableITN) {
      res["EnableITN"] = boost::any(*enableITN);
    }
    if (muteTime) {
      res["MuteTime"] = boost::any(*muteTime);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pauseTime) {
      res["PauseTime"] = boost::any(*pauseTime);
    }
    if (recordFlag) {
      res["RecordFlag"] = boost::any(*recordFlag);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (streamAsr) {
      res["StreamAsr"] = boost::any(*streamAsr);
    }
    if (ttsConf) {
      res["TtsConf"] = boost::any(*ttsConf);
    }
    if (ttsSpeed) {
      res["TtsSpeed"] = boost::any(*ttsSpeed);
    }
    if (ttsStyle) {
      res["TtsStyle"] = boost::any(*ttsStyle);
    }
    if (ttsVolume) {
      res["TtsVolume"] = boost::any(*ttsVolume);
    }
    if (voiceCode) {
      res["VoiceCode"] = boost::any(*voiceCode);
    }
    if (voiceCodeParam) {
      res["VoiceCodeParam"] = boost::any(*voiceCodeParam);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionCodeBreak") != m.end() && !m["ActionCodeBreak"].empty()) {
      actionCodeBreak = make_shared<bool>(boost::any_cast<bool>(m["ActionCodeBreak"]));
    }
    if (m.find("ActionCodeTimeBreak") != m.end() && !m["ActionCodeTimeBreak"].empty()) {
      actionCodeTimeBreak = make_shared<long>(boost::any_cast<long>(m["ActionCodeTimeBreak"]));
    }
    if (m.find("AsrBaseId") != m.end() && !m["AsrBaseId"].empty()) {
      asrBaseId = make_shared<string>(boost::any_cast<string>(m["AsrBaseId"]));
    }
    if (m.find("AsrModelId") != m.end() && !m["AsrModelId"].empty()) {
      asrModelId = make_shared<string>(boost::any_cast<string>(m["AsrModelId"]));
    }
    if (m.find("BackgroundFileCode") != m.end() && !m["BackgroundFileCode"].empty()) {
      backgroundFileCode = make_shared<string>(boost::any_cast<string>(m["BackgroundFileCode"]));
    }
    if (m.find("BackgroundSpeed") != m.end() && !m["BackgroundSpeed"].empty()) {
      backgroundSpeed = make_shared<long>(boost::any_cast<long>(m["BackgroundSpeed"]));
    }
    if (m.find("BackgroundVolume") != m.end() && !m["BackgroundVolume"].empty()) {
      backgroundVolume = make_shared<long>(boost::any_cast<long>(m["BackgroundVolume"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("DynamicId") != m.end() && !m["DynamicId"].empty()) {
      dynamicId = make_shared<string>(boost::any_cast<string>(m["DynamicId"]));
    }
    if (m.find("EarlyMediaAsr") != m.end() && !m["EarlyMediaAsr"].empty()) {
      earlyMediaAsr = make_shared<bool>(boost::any_cast<bool>(m["EarlyMediaAsr"]));
    }
    if (m.find("EnableITN") != m.end() && !m["EnableITN"].empty()) {
      enableITN = make_shared<bool>(boost::any_cast<bool>(m["EnableITN"]));
    }
    if (m.find("MuteTime") != m.end() && !m["MuteTime"].empty()) {
      muteTime = make_shared<long>(boost::any_cast<long>(m["MuteTime"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PauseTime") != m.end() && !m["PauseTime"].empty()) {
      pauseTime = make_shared<long>(boost::any_cast<long>(m["PauseTime"]));
    }
    if (m.find("RecordFlag") != m.end() && !m["RecordFlag"].empty()) {
      recordFlag = make_shared<bool>(boost::any_cast<bool>(m["RecordFlag"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("StreamAsr") != m.end() && !m["StreamAsr"].empty()) {
      streamAsr = make_shared<long>(boost::any_cast<long>(m["StreamAsr"]));
    }
    if (m.find("TtsConf") != m.end() && !m["TtsConf"].empty()) {
      ttsConf = make_shared<bool>(boost::any_cast<bool>(m["TtsConf"]));
    }
    if (m.find("TtsSpeed") != m.end() && !m["TtsSpeed"].empty()) {
      ttsSpeed = make_shared<long>(boost::any_cast<long>(m["TtsSpeed"]));
    }
    if (m.find("TtsStyle") != m.end() && !m["TtsStyle"].empty()) {
      ttsStyle = make_shared<string>(boost::any_cast<string>(m["TtsStyle"]));
    }
    if (m.find("TtsVolume") != m.end() && !m["TtsVolume"].empty()) {
      ttsVolume = make_shared<long>(boost::any_cast<long>(m["TtsVolume"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("VoiceCodeParam") != m.end() && !m["VoiceCodeParam"].empty()) {
      voiceCodeParam = make_shared<string>(boost::any_cast<string>(m["VoiceCodeParam"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~SmartCallRequest() = default;
};
class SmartCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SmartCallResponseBody() {}

  explicit SmartCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SmartCallResponseBody() = default;
};
class SmartCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SmartCallResponseBody> body{};

  SmartCallResponse() {}

  explicit SmartCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SmartCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmartCallResponseBody>(model1);
      }
    }
  }


  virtual ~SmartCallResponse() = default;
};
class SmartCallOperateRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> command{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> param{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  SmartCallOperateRequest() {}

  explicit SmartCallOperateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (param) {
      res["Param"] = boost::any(*param);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~SmartCallOperateRequest() = default;
};
class SmartCallOperateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  SmartCallOperateResponseBody() {}

  explicit SmartCallOperateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~SmartCallOperateResponseBody() = default;
};
class SmartCallOperateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SmartCallOperateResponseBody> body{};

  SmartCallOperateResponse() {}

  explicit SmartCallOperateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SmartCallOperateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmartCallOperateResponseBody>(model1);
      }
    }
  }


  virtual ~SmartCallOperateResponse() = default;
};
class StartRobotTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<long> taskId{};

  StartRobotTaskRequest() {}

  explicit StartRobotTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
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
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~StartRobotTaskRequest() = default;
};
class StartRobotTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StartRobotTaskResponseBody() {}

  explicit StartRobotTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartRobotTaskResponseBody() = default;
};
class StartRobotTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartRobotTaskResponseBody> body{};

  StartRobotTaskResponse() {}

  explicit StartRobotTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartRobotTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartRobotTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StartRobotTaskResponse() = default;
};
class StopRobotTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};

  StopRobotTaskRequest() {}

  explicit StopRobotTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopRobotTaskRequest() = default;
};
class StopRobotTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StopRobotTaskResponseBody() {}

  explicit StopRobotTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopRobotTaskResponseBody() = default;
};
class StopRobotTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopRobotTaskResponseBody> body{};

  StopRobotTaskResponse() {}

  explicit StopRobotTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopRobotTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopRobotTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopRobotTaskResponse() = default;
};
class SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos : public Darabonba::Model {
public:
  shared_ptr<string> identityCard{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> phoneNumberOwnerName{};

  SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos() {}

  explicit SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identityCard) {
      res["IdentityCard"] = boost::any(*identityCard);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberOwnerName) {
      res["PhoneNumberOwnerName"] = boost::any(*phoneNumberOwnerName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentityCard") != m.end() && !m["IdentityCard"].empty()) {
      identityCard = make_shared<string>(boost::any_cast<string>(m["IdentityCard"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneNumberOwnerName") != m.end() && !m["PhoneNumberOwnerName"].empty()) {
      phoneNumberOwnerName = make_shared<string>(boost::any_cast<string>(m["PhoneNumberOwnerName"]));
    }
  }


  virtual ~SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos() = default;
};
class SubmitHotlineTransferRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> agreement{};
  shared_ptr<string> hotlineNumber{};
  shared_ptr<string> operatorIdentityCard{};
  shared_ptr<string> operatorMail{};
  shared_ptr<string> operatorMailVerifyCode{};
  shared_ptr<string> operatorMobile{};
  shared_ptr<string> operatorMobileVerifyCode{};
  shared_ptr<string> operatorName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos>> transferPhoneNumberInfos{};

  SubmitHotlineTransferRegisterRequest() {}

  explicit SubmitHotlineTransferRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreement) {
      res["Agreement"] = boost::any(*agreement);
    }
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
    }
    if (operatorIdentityCard) {
      res["OperatorIdentityCard"] = boost::any(*operatorIdentityCard);
    }
    if (operatorMail) {
      res["OperatorMail"] = boost::any(*operatorMail);
    }
    if (operatorMailVerifyCode) {
      res["OperatorMailVerifyCode"] = boost::any(*operatorMailVerifyCode);
    }
    if (operatorMobile) {
      res["OperatorMobile"] = boost::any(*operatorMobile);
    }
    if (operatorMobileVerifyCode) {
      res["OperatorMobileVerifyCode"] = boost::any(*operatorMobileVerifyCode);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (transferPhoneNumberInfos) {
      vector<boost::any> temp1;
      for(auto item1:*transferPhoneNumberInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransferPhoneNumberInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agreement") != m.end() && !m["Agreement"].empty()) {
      agreement = make_shared<string>(boost::any_cast<string>(m["Agreement"]));
    }
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
    }
    if (m.find("OperatorIdentityCard") != m.end() && !m["OperatorIdentityCard"].empty()) {
      operatorIdentityCard = make_shared<string>(boost::any_cast<string>(m["OperatorIdentityCard"]));
    }
    if (m.find("OperatorMail") != m.end() && !m["OperatorMail"].empty()) {
      operatorMail = make_shared<string>(boost::any_cast<string>(m["OperatorMail"]));
    }
    if (m.find("OperatorMailVerifyCode") != m.end() && !m["OperatorMailVerifyCode"].empty()) {
      operatorMailVerifyCode = make_shared<string>(boost::any_cast<string>(m["OperatorMailVerifyCode"]));
    }
    if (m.find("OperatorMobile") != m.end() && !m["OperatorMobile"].empty()) {
      operatorMobile = make_shared<string>(boost::any_cast<string>(m["OperatorMobile"]));
    }
    if (m.find("OperatorMobileVerifyCode") != m.end() && !m["OperatorMobileVerifyCode"].empty()) {
      operatorMobileVerifyCode = make_shared<string>(boost::any_cast<string>(m["OperatorMobileVerifyCode"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TransferPhoneNumberInfos") != m.end() && !m["TransferPhoneNumberInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["TransferPhoneNumberInfos"].type()) {
        vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransferPhoneNumberInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transferPhoneNumberInfos = make_shared<vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos>>(expect1);
      }
    }
  }


  virtual ~SubmitHotlineTransferRegisterRequest() = default;
};
class SubmitHotlineTransferRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitHotlineTransferRegisterResponseBody() {}

  explicit SubmitHotlineTransferRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SubmitHotlineTransferRegisterResponseBody() = default;
};
class SubmitHotlineTransferRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitHotlineTransferRegisterResponseBody> body{};

  SubmitHotlineTransferRegisterResponse() {}

  explicit SubmitHotlineTransferRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitHotlineTransferRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitHotlineTransferRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitHotlineTransferRegisterResponse() = default;
};
class UploadRobotTaskCalledFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<long> id{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> ttsParamHead{};

  UploadRobotTaskCalledFileRequest() {}

  explicit UploadRobotTaskCalledFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
    }
    if (ttsParamHead) {
      res["TtsParamHead"] = boost::any(*ttsParamHead);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
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
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("TtsParamHead") != m.end() && !m["TtsParamHead"].empty()) {
      ttsParamHead = make_shared<string>(boost::any_cast<string>(m["TtsParamHead"]));
    }
  }


  virtual ~UploadRobotTaskCalledFileRequest() = default;
};
class UploadRobotTaskCalledFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UploadRobotTaskCalledFileResponseBody() {}

  explicit UploadRobotTaskCalledFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UploadRobotTaskCalledFileResponseBody() = default;
};
class UploadRobotTaskCalledFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadRobotTaskCalledFileResponseBody> body{};

  UploadRobotTaskCalledFileResponse() {}

  explicit UploadRobotTaskCalledFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UploadRobotTaskCalledFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadRobotTaskCalledFileResponseBody>(model1);
      }
    }
  }


  virtual ~UploadRobotTaskCalledFileResponse() = default;
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
  AddRtcAccountResponse addRtcAccountWithOptions(shared_ptr<AddRtcAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddRtcAccountResponse addRtcAccount(shared_ptr<AddRtcAccountRequest> request);
  AddVirtualNumberRelationResponse addVirtualNumberRelationWithOptions(shared_ptr<AddVirtualNumberRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddVirtualNumberRelationResponse addVirtualNumberRelation(shared_ptr<AddVirtualNumberRelationRequest> request);
  BatchRobotSmartCallResponse batchRobotSmartCallWithOptions(shared_ptr<BatchRobotSmartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchRobotSmartCallResponse batchRobotSmartCall(shared_ptr<BatchRobotSmartCallRequest> request);
  CancelCallResponse cancelCallWithOptions(shared_ptr<CancelCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelCallResponse cancelCall(shared_ptr<CancelCallRequest> request);
  CancelOrderRobotTaskResponse cancelOrderRobotTaskWithOptions(shared_ptr<CancelOrderRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOrderRobotTaskResponse cancelOrderRobotTask(shared_ptr<CancelOrderRobotTaskRequest> request);
  CancelRobotTaskResponse cancelRobotTaskWithOptions(shared_ptr<CancelRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRobotTaskResponse cancelRobotTask(shared_ptr<CancelRobotTaskRequest> request);
  ClickToDialResponse clickToDialWithOptions(shared_ptr<ClickToDialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClickToDialResponse clickToDial(shared_ptr<ClickToDialRequest> request);
  CreateCallTaskResponse createCallTaskWithOptions(shared_ptr<CreateCallTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCallTaskResponse createCallTask(shared_ptr<CreateCallTaskRequest> request);
  CreateRobotTaskResponse createRobotTaskWithOptions(shared_ptr<CreateRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRobotTaskResponse createRobotTask(shared_ptr<CreateRobotTaskRequest> request);
  DeleteRobotTaskResponse deleteRobotTaskWithOptions(shared_ptr<DeleteRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRobotTaskResponse deleteRobotTask(shared_ptr<DeleteRobotTaskRequest> request);
  ExecuteCallTaskResponse executeCallTaskWithOptions(shared_ptr<ExecuteCallTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteCallTaskResponse executeCallTask(shared_ptr<ExecuteCallTaskRequest> request);
  GetCallInfoResponse getCallInfoWithOptions(shared_ptr<GetCallInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCallInfoResponse getCallInfo(shared_ptr<GetCallInfoRequest> request);
  GetHotlineQualificationByOrderResponse getHotlineQualificationByOrderWithOptions(shared_ptr<GetHotlineQualificationByOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineQualificationByOrderResponse getHotlineQualificationByOrder(shared_ptr<GetHotlineQualificationByOrderRequest> request);
  GetMqttTokenResponse getMqttTokenWithOptions(shared_ptr<GetMqttTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMqttTokenResponse getMqttToken(shared_ptr<GetMqttTokenRequest> request);
  GetRtcTokenResponse getRtcTokenWithOptions(shared_ptr<GetRtcTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRtcTokenResponse getRtcToken(shared_ptr<GetRtcTokenRequest> request);
  GetTokenResponse getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTokenResponse getToken(shared_ptr<GetTokenRequest> request);
  IvrCallResponse ivrCallWithOptions(shared_ptr<IvrCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IvrCallResponse ivrCall(shared_ptr<IvrCallRequest> request);
  ListCallTaskResponse listCallTaskWithOptions(shared_ptr<ListCallTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCallTaskResponse listCallTask(shared_ptr<ListCallTaskRequest> request);
  ListCallTaskDetailResponse listCallTaskDetailWithOptions(shared_ptr<ListCallTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCallTaskDetailResponse listCallTaskDetail(shared_ptr<ListCallTaskDetailRequest> request);
  ListHotlineTransferNumberResponse listHotlineTransferNumberWithOptions(shared_ptr<ListHotlineTransferNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotlineTransferNumberResponse listHotlineTransferNumber(shared_ptr<ListHotlineTransferNumberRequest> request);
  ListHotlineTransferRegisterFileResponse listHotlineTransferRegisterFileWithOptions(shared_ptr<ListHotlineTransferRegisterFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotlineTransferRegisterFileResponse listHotlineTransferRegisterFile(shared_ptr<ListHotlineTransferRegisterFileRequest> request);
  QueryCallDetailByCallIdResponse queryCallDetailByCallIdWithOptions(shared_ptr<QueryCallDetailByCallIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCallDetailByCallIdResponse queryCallDetailByCallId(shared_ptr<QueryCallDetailByCallIdRequest> request);
  QueryCallDetailByTaskIdResponse queryCallDetailByTaskIdWithOptions(shared_ptr<QueryCallDetailByTaskIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCallDetailByTaskIdResponse queryCallDetailByTaskId(shared_ptr<QueryCallDetailByTaskIdRequest> request);
  QueryCallInPoolTransferConfigResponse queryCallInPoolTransferConfigWithOptions(shared_ptr<QueryCallInPoolTransferConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCallInPoolTransferConfigResponse queryCallInPoolTransferConfig(shared_ptr<QueryCallInPoolTransferConfigRequest> request);
  QueryCallInTransferRecordResponse queryCallInTransferRecordWithOptions(shared_ptr<QueryCallInTransferRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCallInTransferRecordResponse queryCallInTransferRecord(shared_ptr<QueryCallInTransferRecordRequest> request);
  QueryRobotInfoListResponse queryRobotInfoListWithOptions(shared_ptr<QueryRobotInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRobotInfoListResponse queryRobotInfoList(shared_ptr<QueryRobotInfoListRequest> request);
  QueryRobotTaskCallDetailResponse queryRobotTaskCallDetailWithOptions(shared_ptr<QueryRobotTaskCallDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRobotTaskCallDetailResponse queryRobotTaskCallDetail(shared_ptr<QueryRobotTaskCallDetailRequest> request);
  QueryRobotTaskCallListResponse queryRobotTaskCallListWithOptions(shared_ptr<QueryRobotTaskCallListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRobotTaskCallListResponse queryRobotTaskCallList(shared_ptr<QueryRobotTaskCallListRequest> request);
  QueryRobotTaskDetailResponse queryRobotTaskDetailWithOptions(shared_ptr<QueryRobotTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRobotTaskDetailResponse queryRobotTaskDetail(shared_ptr<QueryRobotTaskDetailRequest> request);
  QueryRobotTaskListResponse queryRobotTaskListWithOptions(shared_ptr<QueryRobotTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRobotTaskListResponse queryRobotTaskList(shared_ptr<QueryRobotTaskListRequest> request);
  QueryRobotv2AllListResponse queryRobotv2AllListWithOptions(shared_ptr<QueryRobotv2AllListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRobotv2AllListResponse queryRobotv2AllList(shared_ptr<QueryRobotv2AllListRequest> request);
  QueryVirtualNumberResponse queryVirtualNumberWithOptions(shared_ptr<QueryVirtualNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVirtualNumberResponse queryVirtualNumber(shared_ptr<QueryVirtualNumberRequest> request);
  QueryVirtualNumberRelationResponse queryVirtualNumberRelationWithOptions(shared_ptr<QueryVirtualNumberRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVirtualNumberRelationResponse queryVirtualNumberRelation(shared_ptr<QueryVirtualNumberRelationRequest> request);
  QueryVoiceFileAuditInfoResponse queryVoiceFileAuditInfoWithOptions(shared_ptr<QueryVoiceFileAuditInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVoiceFileAuditInfoResponse queryVoiceFileAuditInfo(shared_ptr<QueryVoiceFileAuditInfoRequest> request);
  RefreshMqttTokenResponse refreshMqttTokenWithOptions(shared_ptr<RefreshMqttTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshMqttTokenResponse refreshMqttToken(shared_ptr<RefreshMqttTokenRequest> request);
  SendVerificationResponse sendVerificationWithOptions(shared_ptr<SendVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVerificationResponse sendVerification(shared_ptr<SendVerificationRequest> request);
  SetTransferCalleePoolConfigResponse setTransferCalleePoolConfigWithOptions(shared_ptr<SetTransferCalleePoolConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetTransferCalleePoolConfigResponse setTransferCalleePoolConfig(shared_ptr<SetTransferCalleePoolConfigRequest> request);
  SingleCallByTtsResponse singleCallByTtsWithOptions(shared_ptr<SingleCallByTtsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SingleCallByTtsResponse singleCallByTts(shared_ptr<SingleCallByTtsRequest> request);
  SingleCallByVoiceResponse singleCallByVoiceWithOptions(shared_ptr<SingleCallByVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SingleCallByVoiceResponse singleCallByVoice(shared_ptr<SingleCallByVoiceRequest> request);
  SmartCallResponse smartCallWithOptions(shared_ptr<SmartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmartCallResponse smartCall(shared_ptr<SmartCallRequest> request);
  SmartCallOperateResponse smartCallOperateWithOptions(shared_ptr<SmartCallOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmartCallOperateResponse smartCallOperate(shared_ptr<SmartCallOperateRequest> request);
  StartRobotTaskResponse startRobotTaskWithOptions(shared_ptr<StartRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartRobotTaskResponse startRobotTask(shared_ptr<StartRobotTaskRequest> request);
  StopRobotTaskResponse stopRobotTaskWithOptions(shared_ptr<StopRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopRobotTaskResponse stopRobotTask(shared_ptr<StopRobotTaskRequest> request);
  SubmitHotlineTransferRegisterResponse submitHotlineTransferRegisterWithOptions(shared_ptr<SubmitHotlineTransferRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitHotlineTransferRegisterResponse submitHotlineTransferRegister(shared_ptr<SubmitHotlineTransferRegisterRequest> request);
  UploadRobotTaskCalledFileResponse uploadRobotTaskCalledFileWithOptions(shared_ptr<UploadRobotTaskCalledFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadRobotTaskCalledFileResponse uploadRobotTaskCalledFile(shared_ptr<UploadRobotTaskCalledFileRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dyvmsapi20170525

#endif
