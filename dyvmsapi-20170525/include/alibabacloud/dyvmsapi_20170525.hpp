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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> deviceId{};

  AddRtcAccountRequest() {}

  explicit AddRtcAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
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
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> corpNameList{};
  shared_ptr<string> numberList{};
  shared_ptr<long> routeType{};
  shared_ptr<string> phoneNum{};

  AddVirtualNumberRelationRequest() {}

  explicit AddVirtualNumberRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (corpNameList) {
      res["CorpNameList"] = boost::any(*corpNameList);
    }
    if (numberList) {
      res["NumberList"] = boost::any(*numberList);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
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
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("CorpNameList") != m.end() && !m["CorpNameList"].empty()) {
      corpNameList = make_shared<string>(boost::any_cast<string>(m["CorpNameList"]));
    }
    if (m.find("NumberList") != m.end() && !m["NumberList"].empty()) {
      numberList = make_shared<string>(boost::any_cast<string>(m["NumberList"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<long>(boost::any_cast<long>(m["RouteType"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
  }


  virtual ~AddVirtualNumberRelationRequest() = default;
};
class AddVirtualNumberRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> corpName{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> dialogId{};
  shared_ptr<bool> earlyMediaAsr{};
  shared_ptr<string> taskName{};
  shared_ptr<long> scheduleTime{};
  shared_ptr<bool> scheduleCall{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> ttsParamHead{};
  shared_ptr<bool> isSelfLine{};

  BatchRobotSmartCallRequest() {}

  explicit BatchRobotSmartCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (corpName) {
      res["CorpName"] = boost::any(*corpName);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (earlyMediaAsr) {
      res["EarlyMediaAsr"] = boost::any(*earlyMediaAsr);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (scheduleCall) {
      res["ScheduleCall"] = boost::any(*scheduleCall);
    }
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
    }
    if (ttsParamHead) {
      res["TtsParamHead"] = boost::any(*ttsParamHead);
    }
    if (isSelfLine) {
      res["IsSelfLine"] = boost::any(*isSelfLine);
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
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CorpName") != m.end() && !m["CorpName"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["CorpName"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<string>(boost::any_cast<string>(m["DialogId"]));
    }
    if (m.find("EarlyMediaAsr") != m.end() && !m["EarlyMediaAsr"].empty()) {
      earlyMediaAsr = make_shared<bool>(boost::any_cast<bool>(m["EarlyMediaAsr"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<long>(boost::any_cast<long>(m["ScheduleTime"]));
    }
    if (m.find("ScheduleCall") != m.end() && !m["ScheduleCall"].empty()) {
      scheduleCall = make_shared<bool>(boost::any_cast<bool>(m["ScheduleCall"]));
    }
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("TtsParamHead") != m.end() && !m["TtsParamHead"].empty()) {
      ttsParamHead = make_shared<string>(boost::any_cast<string>(m["TtsParamHead"]));
    }
    if (m.find("IsSelfLine") != m.end() && !m["IsSelfLine"].empty()) {
      isSelfLine = make_shared<bool>(boost::any_cast<bool>(m["IsSelfLine"]));
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
class BindNumberAndVoipIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> voipId{};

  BindNumberAndVoipIdRequest() {}

  explicit BindNumberAndVoipIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (voipId) {
      res["VoipId"] = boost::any(*voipId);
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("VoipId") != m.end() && !m["VoipId"].empty()) {
      voipId = make_shared<string>(boost::any_cast<string>(m["VoipId"]));
    }
  }


  virtual ~BindNumberAndVoipIdRequest() = default;
};
class BindNumberAndVoipIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  BindNumberAndVoipIdResponseBody() {}

  explicit BindNumberAndVoipIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindNumberAndVoipIdResponseBody() = default;
};
class BindNumberAndVoipIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BindNumberAndVoipIdResponseBody> body{};

  BindNumberAndVoipIdResponse() {}

  explicit BindNumberAndVoipIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindNumberAndVoipIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindNumberAndVoipIdResponseBody>(model1);
      }
    }
  }


  virtual ~BindNumberAndVoipIdResponse() = default;
};
class CancelCallRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> callId{};

  CancelCallRequest() {}

  explicit CancelCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
  }


  virtual ~CancelCallRequest() = default;
};
class CancelCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> status{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CancelCallResponseBody() {}

  explicit CancelCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> callerShowNumber{};
  shared_ptr<string> callerNumber{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<bool> recordFlag{};
  shared_ptr<bool> asrFlag{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<string> asrModelId{};
  shared_ptr<string> outId{};

  ClickToDialRequest() {}

  explicit ClickToDialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callerShowNumber) {
      res["CallerShowNumber"] = boost::any(*callerShowNumber);
    }
    if (callerNumber) {
      res["CallerNumber"] = boost::any(*callerNumber);
    }
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (recordFlag) {
      res["RecordFlag"] = boost::any(*recordFlag);
    }
    if (asrFlag) {
      res["AsrFlag"] = boost::any(*asrFlag);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (asrModelId) {
      res["AsrModelId"] = boost::any(*asrModelId);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (m.find("CallerShowNumber") != m.end() && !m["CallerShowNumber"].empty()) {
      callerShowNumber = make_shared<string>(boost::any_cast<string>(m["CallerShowNumber"]));
    }
    if (m.find("CallerNumber") != m.end() && !m["CallerNumber"].empty()) {
      callerNumber = make_shared<string>(boost::any_cast<string>(m["CallerNumber"]));
    }
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("RecordFlag") != m.end() && !m["RecordFlag"].empty()) {
      recordFlag = make_shared<bool>(boost::any_cast<bool>(m["RecordFlag"]));
    }
    if (m.find("AsrFlag") != m.end() && !m["AsrFlag"].empty()) {
      asrFlag = make_shared<bool>(boost::any_cast<bool>(m["AsrFlag"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("AsrModelId") != m.end() && !m["AsrModelId"].empty()) {
      asrModelId = make_shared<string>(boost::any_cast<string>(m["AsrModelId"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
  }


  virtual ~ClickToDialRequest() = default;
};
class ClickToDialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> callId{};

  ClickToDialResponseBody() {}

  explicit ClickToDialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
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
class CloseSipAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> partnerId{};
  shared_ptr<string> sipAccountID{};

  CloseSipAccountRequest() {}

  explicit CloseSipAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (partnerId) {
      res["PartnerId"] = boost::any(*partnerId);
    }
    if (sipAccountID) {
      res["SipAccountID"] = boost::any(*sipAccountID);
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
    if (m.find("PartnerId") != m.end() && !m["PartnerId"].empty()) {
      partnerId = make_shared<long>(boost::any_cast<long>(m["PartnerId"]));
    }
    if (m.find("SipAccountID") != m.end() && !m["SipAccountID"].empty()) {
      sipAccountID = make_shared<string>(boost::any_cast<string>(m["SipAccountID"]));
    }
  }


  virtual ~CloseSipAccountRequest() = default;
};
class CloseSipAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  CloseSipAccountResponseBody() {}

  explicit CloseSipAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloseSipAccountResponseBody() = default;
};
class CloseSipAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CloseSipAccountResponseBody> body{};

  CloseSipAccountResponse() {}

  explicit CloseSipAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseSipAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseSipAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CloseSipAccountResponse() = default;
};
class CreateCallTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> bizType{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resource{};
  shared_ptr<string> dataType{};
  shared_ptr<string> data{};
  shared_ptr<string> fireTime{};
  shared_ptr<string> stopTime{};
  shared_ptr<string> scheduleType{};

  CreateCallTaskRequest() {}

  explicit CreateCallTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (fireTime) {
      res["FireTime"] = boost::any(*fireTime);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
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
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("FireTime") != m.end() && !m["FireTime"].empty()) {
      fireTime = make_shared<string>(boost::any_cast<string>(m["FireTime"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskName{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> corpName{};
  shared_ptr<string> caller{};
  shared_ptr<bool> numberStatusIdent{};
  shared_ptr<long> retryType{};
  shared_ptr<string> recallStateCodes{};
  shared_ptr<long> recallTimes{};
  shared_ptr<long> recallInterval{};
  shared_ptr<bool> isSelfLine{};

  CreateRobotTaskRequest() {}

  explicit CreateRobotTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (corpName) {
      res["CorpName"] = boost::any(*corpName);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (numberStatusIdent) {
      res["NumberStatusIdent"] = boost::any(*numberStatusIdent);
    }
    if (retryType) {
      res["RetryType"] = boost::any(*retryType);
    }
    if (recallStateCodes) {
      res["RecallStateCodes"] = boost::any(*recallStateCodes);
    }
    if (recallTimes) {
      res["RecallTimes"] = boost::any(*recallTimes);
    }
    if (recallInterval) {
      res["RecallInterval"] = boost::any(*recallInterval);
    }
    if (isSelfLine) {
      res["IsSelfLine"] = boost::any(*isSelfLine);
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
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("CorpName") != m.end() && !m["CorpName"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["CorpName"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("NumberStatusIdent") != m.end() && !m["NumberStatusIdent"].empty()) {
      numberStatusIdent = make_shared<bool>(boost::any_cast<bool>(m["NumberStatusIdent"]));
    }
    if (m.find("RetryType") != m.end() && !m["RetryType"].empty()) {
      retryType = make_shared<long>(boost::any_cast<long>(m["RetryType"]));
    }
    if (m.find("RecallStateCodes") != m.end() && !m["RecallStateCodes"].empty()) {
      recallStateCodes = make_shared<string>(boost::any_cast<string>(m["RecallStateCodes"]));
    }
    if (m.find("RecallTimes") != m.end() && !m["RecallTimes"].empty()) {
      recallTimes = make_shared<long>(boost::any_cast<long>(m["RecallTimes"]));
    }
    if (m.find("RecallInterval") != m.end() && !m["RecallInterval"].empty()) {
      recallInterval = make_shared<long>(boost::any_cast<long>(m["RecallInterval"]));
    }
    if (m.find("IsSelfLine") != m.end() && !m["IsSelfLine"].empty()) {
      isSelfLine = make_shared<bool>(boost::any_cast<bool>(m["IsSelfLine"]));
    }
  }


  virtual ~CreateRobotTaskRequest() = default;
};
class CreateRobotTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class CreateSipAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> partnerId{};
  shared_ptr<string> businessKey{};

  CreateSipAccountRequest() {}

  explicit CreateSipAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (partnerId) {
      res["PartnerId"] = boost::any(*partnerId);
    }
    if (businessKey) {
      res["BusinessKey"] = boost::any(*businessKey);
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
    if (m.find("PartnerId") != m.end() && !m["PartnerId"].empty()) {
      partnerId = make_shared<long>(boost::any_cast<long>(m["PartnerId"]));
    }
    if (m.find("BusinessKey") != m.end() && !m["BusinessKey"].empty()) {
      businessKey = make_shared<string>(boost::any_cast<string>(m["BusinessKey"]));
    }
  }


  virtual ~CreateSipAccountRequest() = default;
};
class CreateSipAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sipAccountID{};
  shared_ptr<string> voipName{};
  shared_ptr<string> voipPassword{};

  CreateSipAccountResponseBodyData() {}

  explicit CreateSipAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sipAccountID) {
      res["SipAccountID"] = boost::any(*sipAccountID);
    }
    if (voipName) {
      res["VoipName"] = boost::any(*voipName);
    }
    if (voipPassword) {
      res["VoipPassword"] = boost::any(*voipPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SipAccountID") != m.end() && !m["SipAccountID"].empty()) {
      sipAccountID = make_shared<string>(boost::any_cast<string>(m["SipAccountID"]));
    }
    if (m.find("VoipName") != m.end() && !m["VoipName"].empty()) {
      voipName = make_shared<string>(boost::any_cast<string>(m["VoipName"]));
    }
    if (m.find("VoipPassword") != m.end() && !m["VoipPassword"].empty()) {
      voipPassword = make_shared<string>(boost::any_cast<string>(m["VoipPassword"]));
    }
  }


  virtual ~CreateSipAccountResponseBodyData() = default;
};
class CreateSipAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateSipAccountResponseBodyData> data{};

  CreateSipAccountResponseBody() {}

  explicit CreateSipAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateSipAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateSipAccountResponseBodyData>(model1);
      }
    }
  }


  virtual ~CreateSipAccountResponseBody() = default;
};
class CreateSipAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSipAccountResponseBody> body{};

  CreateSipAccountResponse() {}

  explicit CreateSipAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSipAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSipAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSipAccountResponse() = default;
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
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class DescribeRecordDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> accountType{};
  shared_ptr<string> accountId{};
  shared_ptr<string> acid{};
  shared_ptr<long> secLevel{};

  DescribeRecordDataRequest() {}

  explicit DescribeRecordDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (secLevel) {
      res["SecLevel"] = boost::any(*secLevel);
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
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("SecLevel") != m.end() && !m["SecLevel"].empty()) {
      secLevel = make_shared<long>(boost::any_cast<long>(m["SecLevel"]));
    }
  }


  virtual ~DescribeRecordDataRequest() = default;
};
class DescribeRecordDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ossLink{};
  shared_ptr<string> requestId{};
  shared_ptr<string> agentId{};
  shared_ptr<string> acid{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  DescribeRecordDataResponseBody() {}

  explicit DescribeRecordDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossLink) {
      res["OssLink"] = boost::any(*ossLink);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (acid) {
      res["Acid"] = boost::any(*acid);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssLink") != m.end() && !m["OssLink"].empty()) {
      ossLink = make_shared<string>(boost::any_cast<string>(m["OssLink"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("Acid") != m.end() && !m["Acid"].empty()) {
      acid = make_shared<string>(boost::any_cast<string>(m["Acid"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DescribeRecordDataResponseBody() = default;
};
class DescribeRecordDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRecordDataResponseBody> body{};

  DescribeRecordDataResponse() {}

  explicit DescribeRecordDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRecordDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecordDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecordDataResponse() = default;
};
class DoRtcNumberAuthRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};

  DoRtcNumberAuthRequest() {}

  explicit DoRtcNumberAuthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~DoRtcNumberAuthRequest() = default;
};
class DoRtcNumberAuthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  DoRtcNumberAuthResponseBody() {}

  explicit DoRtcNumberAuthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DoRtcNumberAuthResponseBody() = default;
};
class DoRtcNumberAuthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DoRtcNumberAuthResponseBody> body{};

  DoRtcNumberAuthResponse() {}

  explicit DoRtcNumberAuthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DoRtcNumberAuthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DoRtcNumberAuthResponseBody>(model1);
      }
    }
  }


  virtual ~DoRtcNumberAuthResponse() = default;
};
class DoubleCallSeatRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> callerShowNumber{};
  shared_ptr<string> callerNumber{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<bool> recordFlag{};
  shared_ptr<bool> asrFlag{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<string> asrModelId{};
  shared_ptr<string> outId{};
  shared_ptr<string> callType{};
  shared_ptr<long> recordPoint{};
  shared_ptr<string> voiceCode{};

  DoubleCallSeatRequest() {}

  explicit DoubleCallSeatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callerShowNumber) {
      res["CallerShowNumber"] = boost::any(*callerShowNumber);
    }
    if (callerNumber) {
      res["CallerNumber"] = boost::any(*callerNumber);
    }
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (recordFlag) {
      res["RecordFlag"] = boost::any(*recordFlag);
    }
    if (asrFlag) {
      res["AsrFlag"] = boost::any(*asrFlag);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (asrModelId) {
      res["AsrModelId"] = boost::any(*asrModelId);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (recordPoint) {
      res["RecordPoint"] = boost::any(*recordPoint);
    }
    if (voiceCode) {
      res["VoiceCode"] = boost::any(*voiceCode);
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
    if (m.find("CallerShowNumber") != m.end() && !m["CallerShowNumber"].empty()) {
      callerShowNumber = make_shared<string>(boost::any_cast<string>(m["CallerShowNumber"]));
    }
    if (m.find("CallerNumber") != m.end() && !m["CallerNumber"].empty()) {
      callerNumber = make_shared<string>(boost::any_cast<string>(m["CallerNumber"]));
    }
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("RecordFlag") != m.end() && !m["RecordFlag"].empty()) {
      recordFlag = make_shared<bool>(boost::any_cast<bool>(m["RecordFlag"]));
    }
    if (m.find("AsrFlag") != m.end() && !m["AsrFlag"].empty()) {
      asrFlag = make_shared<bool>(boost::any_cast<bool>(m["AsrFlag"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("AsrModelId") != m.end() && !m["AsrModelId"].empty()) {
      asrModelId = make_shared<string>(boost::any_cast<string>(m["AsrModelId"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<string>(boost::any_cast<string>(m["CallType"]));
    }
    if (m.find("RecordPoint") != m.end() && !m["RecordPoint"].empty()) {
      recordPoint = make_shared<long>(boost::any_cast<long>(m["RecordPoint"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
  }


  virtual ~DoubleCallSeatRequest() = default;
};
class DoubleCallSeatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> callId{};

  DoubleCallSeatResponseBody() {}

  explicit DoubleCallSeatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
  }


  virtual ~DoubleCallSeatResponseBody() = default;
};
class DoubleCallSeatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DoubleCallSeatResponseBody> body{};

  DoubleCallSeatResponse() {}

  explicit DoubleCallSeatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DoubleCallSeatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DoubleCallSeatResponseBody>(model1);
      }
    }
  }


  virtual ~DoubleCallSeatResponse() = default;
};
class ExecuteCallTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};
  shared_ptr<string> status{};
  shared_ptr<string> fireTime{};

  ExecuteCallTaskRequest() {}

  explicit ExecuteCallTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (fireTime) {
      res["FireTime"] = boost::any(*fireTime);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FireTime") != m.end() && !m["FireTime"].empty()) {
      fireTime = make_shared<string>(boost::any_cast<string>(m["FireTime"]));
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
class GetHotlineQualificationByOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> orderId{};

  GetHotlineQualificationByOrderRequest() {}

  explicit GetHotlineQualificationByOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~GetHotlineQualificationByOrderRequest() = default;
};
class GetHotlineQualificationByOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> orderId{};

  GetHotlineQualificationByOrderResponseBodyData() {}

  explicit GetHotlineQualificationByOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~GetHotlineQualificationByOrderResponseBodyData() = default;
};
class GetHotlineQualificationByOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotlineQualificationByOrderResponseBodyData> data{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHotlineQualificationByOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHotlineQualificationByOrderResponseBodyData>(model1);
      }
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
class GetRtcTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> userId{};
  shared_ptr<string> deviceId{};
  shared_ptr<bool> isCustomAccount{};

  GetRtcTokenRequest() {}

  explicit GetRtcTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (isCustomAccount) {
      res["IsCustomAccount"] = boost::any(*isCustomAccount);
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
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("IsCustomAccount") != m.end() && !m["IsCustomAccount"].empty()) {
      isCustomAccount = make_shared<bool>(boost::any_cast<bool>(m["IsCustomAccount"]));
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
  shared_ptr<string> token{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

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
    if (token) {
      res["Token"] = boost::any(*token);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
  shared_ptr<string> key{};
  shared_ptr<string> ttsParams{};
  shared_ptr<string> code{};

  IvrCallRequestMenuKeyMap() {}

  explicit IvrCallRequestMenuKeyMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (ttsParams) {
      res["TtsParams"] = boost::any(*ttsParams);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("TtsParams") != m.end() && !m["TtsParams"].empty()) {
      ttsParams = make_shared<string>(boost::any_cast<string>(m["TtsParams"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~IvrCallRequestMenuKeyMap() = default;
};
class IvrCallRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> startCode{};
  shared_ptr<string> startTtsParams{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> byeCode{};
  shared_ptr<string> byeTtsParams{};
  shared_ptr<long> timeout{};
  shared_ptr<string> outId{};
  shared_ptr<vector<IvrCallRequestMenuKeyMap>> menuKeyMap{};

  IvrCallRequest() {}

  explicit IvrCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (startCode) {
      res["StartCode"] = boost::any(*startCode);
    }
    if (startTtsParams) {
      res["StartTtsParams"] = boost::any(*startTtsParams);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (byeCode) {
      res["ByeCode"] = boost::any(*byeCode);
    }
    if (byeTtsParams) {
      res["ByeTtsParams"] = boost::any(*byeTtsParams);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (menuKeyMap) {
      vector<boost::any> temp1;
      for(auto item1:*menuKeyMap){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MenuKeyMap"] = boost::any(temp1);
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
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("StartCode") != m.end() && !m["StartCode"].empty()) {
      startCode = make_shared<string>(boost::any_cast<string>(m["StartCode"]));
    }
    if (m.find("StartTtsParams") != m.end() && !m["StartTtsParams"].empty()) {
      startTtsParams = make_shared<string>(boost::any_cast<string>(m["StartTtsParams"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("ByeCode") != m.end() && !m["ByeCode"].empty()) {
      byeCode = make_shared<string>(boost::any_cast<string>(m["ByeCode"]));
    }
    if (m.find("ByeTtsParams") != m.end() && !m["ByeTtsParams"].empty()) {
      byeTtsParams = make_shared<string>(boost::any_cast<string>(m["ByeTtsParams"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
  }


  virtual ~IvrCallRequest() = default;
};
class IvrCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> callId{};

  IvrCallResponseBody() {}

  explicit IvrCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> templateName{};
  shared_ptr<string> status{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskId{};
  shared_ptr<string> bizType{};

  ListCallTaskRequest() {}

  explicit ListCallTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~ListCallTaskRequest() = default;
};
class ListCallTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> taskName{};
  shared_ptr<long> completedCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> templateName{};
  shared_ptr<string> stopTime{};
  shared_ptr<string> bizType{};
  shared_ptr<string> resource{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> fireTime{};
  shared_ptr<string> completeTime{};
  shared_ptr<long> completedRate{};
  shared_ptr<long> id{};

  ListCallTaskResponseBodyData() {}

  explicit ListCallTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (completedCount) {
      res["CompletedCount"] = boost::any(*completedCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (fireTime) {
      res["FireTime"] = boost::any(*fireTime);
    }
    if (completeTime) {
      res["CompleteTime"] = boost::any(*completeTime);
    }
    if (completedRate) {
      res["CompletedRate"] = boost::any(*completedRate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("CompletedCount") != m.end() && !m["CompletedCount"].empty()) {
      completedCount = make_shared<long>(boost::any_cast<long>(m["CompletedCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("FireTime") != m.end() && !m["FireTime"].empty()) {
      fireTime = make_shared<string>(boost::any_cast<string>(m["FireTime"]));
    }
    if (m.find("CompleteTime") != m.end() && !m["CompleteTime"].empty()) {
      completeTime = make_shared<string>(boost::any_cast<string>(m["CompleteTime"]));
    }
    if (m.find("CompletedRate") != m.end() && !m["CompletedRate"].empty()) {
      completedRate = make_shared<long>(boost::any_cast<long>(m["CompletedRate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListCallTaskResponseBodyData() = default;
};
class ListCallTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<vector<ListCallTaskResponseBodyData>> data{};

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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};
  shared_ptr<string> calledNum{};
  shared_ptr<string> status{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListCallTaskDetailRequest() {}

  explicit ListCallTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (calledNum) {
      res["CalledNum"] = boost::any(*calledNum);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("CalledNum") != m.end() && !m["CalledNum"].empty()) {
      calledNum = make_shared<string>(boost::any_cast<string>(m["CalledNum"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCallTaskDetailRequest() = default;
};
class ListCallTaskDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> duration{};
  shared_ptr<string> calledNum{};
  shared_ptr<string> caller{};
  shared_ptr<long> id{};

  ListCallTaskDetailResponseBodyData() {}

  explicit ListCallTaskDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (calledNum) {
      res["CalledNum"] = boost::any(*calledNum);
    }
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("CalledNum") != m.end() && !m["CalledNum"].empty()) {
      calledNum = make_shared<string>(boost::any_cast<string>(m["CalledNum"]));
    }
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListCallTaskDetailResponseBodyData() = default;
};
class ListCallTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> total{};
  shared_ptr<vector<ListCallTaskDetailResponseBodyData>> data{};

  ListCallTaskDetailResponseBody() {}

  explicit ListCallTaskDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> hotlineNumber{};

  ListHotlineTransferNumberRequest() {}

  explicit ListHotlineTransferNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
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
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
    }
  }


  virtual ~ListHotlineTransferNumberRequest() = default;
};
class ListHotlineTransferNumberResponseBodyDataValues : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> numberOwnerName{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> hotlineNumber{};
  shared_ptr<string> identityCard{};
  shared_ptr<string> resUniqueCode{};

  ListHotlineTransferNumberResponseBodyDataValues() {}

  explicit ListHotlineTransferNumberResponseBodyDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (numberOwnerName) {
      res["NumberOwnerName"] = boost::any(*numberOwnerName);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
    }
    if (identityCard) {
      res["IdentityCard"] = boost::any(*identityCard);
    }
    if (resUniqueCode) {
      res["ResUniqueCode"] = boost::any(*resUniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("NumberOwnerName") != m.end() && !m["NumberOwnerName"].empty()) {
      numberOwnerName = make_shared<string>(boost::any_cast<string>(m["NumberOwnerName"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
    }
    if (m.find("IdentityCard") != m.end() && !m["IdentityCard"].empty()) {
      identityCard = make_shared<string>(boost::any_cast<string>(m["IdentityCard"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListHotlineTransferNumberResponseBodyData> data{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListHotlineTransferNumberResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListHotlineTransferNumberResponseBodyData>(model1);
      }
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> hotlineNumber{};

  ListHotlineTransferRegisterFileRequest() {}

  explicit ListHotlineTransferRegisterFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
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
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
    }
  }


  virtual ~ListHotlineTransferRegisterFileRequest() = default;
};
class ListHotlineTransferRegisterFileResponseBodyDataValues : public Darabonba::Model {
public:
  shared_ptr<string> mngOpMail{};
  shared_ptr<string> mngOpName{};
  shared_ptr<string> corpName{};
  shared_ptr<string> agree{};
  shared_ptr<string> mngOpMobile{};
  shared_ptr<string> mngOpIdentityCard{};
  shared_ptr<string> hotlineNumber{};
  shared_ptr<string> qualificationId{};
  shared_ptr<long> resUniqueCode{};

  ListHotlineTransferRegisterFileResponseBodyDataValues() {}

  explicit ListHotlineTransferRegisterFileResponseBodyDataValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mngOpMail) {
      res["MngOpMail"] = boost::any(*mngOpMail);
    }
    if (mngOpName) {
      res["MngOpName"] = boost::any(*mngOpName);
    }
    if (corpName) {
      res["CorpName"] = boost::any(*corpName);
    }
    if (agree) {
      res["Agree"] = boost::any(*agree);
    }
    if (mngOpMobile) {
      res["MngOpMobile"] = boost::any(*mngOpMobile);
    }
    if (mngOpIdentityCard) {
      res["MngOpIdentityCard"] = boost::any(*mngOpIdentityCard);
    }
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
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
    if (m.find("MngOpMail") != m.end() && !m["MngOpMail"].empty()) {
      mngOpMail = make_shared<string>(boost::any_cast<string>(m["MngOpMail"]));
    }
    if (m.find("MngOpName") != m.end() && !m["MngOpName"].empty()) {
      mngOpName = make_shared<string>(boost::any_cast<string>(m["MngOpName"]));
    }
    if (m.find("CorpName") != m.end() && !m["CorpName"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["CorpName"]));
    }
    if (m.find("Agree") != m.end() && !m["Agree"].empty()) {
      agree = make_shared<string>(boost::any_cast<string>(m["Agree"]));
    }
    if (m.find("MngOpMobile") != m.end() && !m["MngOpMobile"].empty()) {
      mngOpMobile = make_shared<string>(boost::any_cast<string>(m["MngOpMobile"]));
    }
    if (m.find("MngOpIdentityCard") != m.end() && !m["MngOpIdentityCard"].empty()) {
      mngOpIdentityCard = make_shared<string>(boost::any_cast<string>(m["MngOpIdentityCard"]));
    }
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListHotlineTransferRegisterFileResponseBodyData> data{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListHotlineTransferRegisterFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListHotlineTransferRegisterFileResponseBodyData>(model1);
      }
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
class ListOrderedNumbersRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};

  ListOrderedNumbersRequest() {}

  explicit ListOrderedNumbersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
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
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
  }


  virtual ~ListOrderedNumbersRequest() = default;
};
class ListOrderedNumbersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> numbers{};

  ListOrderedNumbersResponseBody() {}

  explicit ListOrderedNumbersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
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
  }


  virtual ~ListOrderedNumbersResponseBody() = default;
};
class ListOrderedNumbersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOrderedNumbersResponseBody> body{};

  ListOrderedNumbersResponse() {}

  explicit ListOrderedNumbersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrderedNumbersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrderedNumbersResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrderedNumbersResponse() = default;
};
class ListOutboundStrategiesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> buId{};
  shared_ptr<string> keyword{};

  ListOutboundStrategiesRequest() {}

  explicit ListOutboundStrategiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
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
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<long>(boost::any_cast<long>(m["BuId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
  }


  virtual ~ListOutboundStrategiesRequest() = default;
};
class ListOutboundStrategiesResponseBodyOutboundStrategies : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> successRate{};
  shared_ptr<long> process{};
  shared_ptr<string> gmtModifiedStr{};
  shared_ptr<string> outboundNum{};
  shared_ptr<long> modifierId{};
  shared_ptr<string> sceneName{};
  shared_ptr<long> creatorId{};
  shared_ptr<string> robotName{};
  shared_ptr<string> modifierName{};
  shared_ptr<long> resourceAllocation{};
  shared_ptr<string> extAttr{};
  shared_ptr<long> numType{};
  shared_ptr<long> buId{};
  shared_ptr<string> robotId{};
  shared_ptr<string> creatorName{};
  shared_ptr<long> departmentId{};
  shared_ptr<long> robotType{};
  shared_ptr<long> ruleCode{};
  shared_ptr<string> name{};
  shared_ptr<string> gmtCreateStr{};
  shared_ptr<long> id{};

  ListOutboundStrategiesResponseBodyOutboundStrategies() {}

  explicit ListOutboundStrategiesResponseBodyOutboundStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (successRate) {
      res["SuccessRate"] = boost::any(*successRate);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (gmtModifiedStr) {
      res["GmtModifiedStr"] = boost::any(*gmtModifiedStr);
    }
    if (outboundNum) {
      res["OutboundNum"] = boost::any(*outboundNum);
    }
    if (modifierId) {
      res["ModifierId"] = boost::any(*modifierId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (robotName) {
      res["RobotName"] = boost::any(*robotName);
    }
    if (modifierName) {
      res["ModifierName"] = boost::any(*modifierName);
    }
    if (resourceAllocation) {
      res["ResourceAllocation"] = boost::any(*resourceAllocation);
    }
    if (extAttr) {
      res["ExtAttr"] = boost::any(*extAttr);
    }
    if (numType) {
      res["NumType"] = boost::any(*numType);
    }
    if (buId) {
      res["BuId"] = boost::any(*buId);
    }
    if (robotId) {
      res["RobotId"] = boost::any(*robotId);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (departmentId) {
      res["DepartmentId"] = boost::any(*departmentId);
    }
    if (robotType) {
      res["RobotType"] = boost::any(*robotType);
    }
    if (ruleCode) {
      res["RuleCode"] = boost::any(*ruleCode);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (gmtCreateStr) {
      res["GmtCreateStr"] = boost::any(*gmtCreateStr);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SuccessRate") != m.end() && !m["SuccessRate"].empty()) {
      successRate = make_shared<long>(boost::any_cast<long>(m["SuccessRate"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<long>(boost::any_cast<long>(m["Process"]));
    }
    if (m.find("GmtModifiedStr") != m.end() && !m["GmtModifiedStr"].empty()) {
      gmtModifiedStr = make_shared<string>(boost::any_cast<string>(m["GmtModifiedStr"]));
    }
    if (m.find("OutboundNum") != m.end() && !m["OutboundNum"].empty()) {
      outboundNum = make_shared<string>(boost::any_cast<string>(m["OutboundNum"]));
    }
    if (m.find("ModifierId") != m.end() && !m["ModifierId"].empty()) {
      modifierId = make_shared<long>(boost::any_cast<long>(m["ModifierId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("RobotName") != m.end() && !m["RobotName"].empty()) {
      robotName = make_shared<string>(boost::any_cast<string>(m["RobotName"]));
    }
    if (m.find("ModifierName") != m.end() && !m["ModifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["ModifierName"]));
    }
    if (m.find("ResourceAllocation") != m.end() && !m["ResourceAllocation"].empty()) {
      resourceAllocation = make_shared<long>(boost::any_cast<long>(m["ResourceAllocation"]));
    }
    if (m.find("ExtAttr") != m.end() && !m["ExtAttr"].empty()) {
      extAttr = make_shared<string>(boost::any_cast<string>(m["ExtAttr"]));
    }
    if (m.find("NumType") != m.end() && !m["NumType"].empty()) {
      numType = make_shared<long>(boost::any_cast<long>(m["NumType"]));
    }
    if (m.find("BuId") != m.end() && !m["BuId"].empty()) {
      buId = make_shared<long>(boost::any_cast<long>(m["BuId"]));
    }
    if (m.find("RobotId") != m.end() && !m["RobotId"].empty()) {
      robotId = make_shared<string>(boost::any_cast<string>(m["RobotId"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("DepartmentId") != m.end() && !m["DepartmentId"].empty()) {
      departmentId = make_shared<long>(boost::any_cast<long>(m["DepartmentId"]));
    }
    if (m.find("RobotType") != m.end() && !m["RobotType"].empty()) {
      robotType = make_shared<long>(boost::any_cast<long>(m["RobotType"]));
    }
    if (m.find("RuleCode") != m.end() && !m["RuleCode"].empty()) {
      ruleCode = make_shared<long>(boost::any_cast<long>(m["RuleCode"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("GmtCreateStr") != m.end() && !m["GmtCreateStr"].empty()) {
      gmtCreateStr = make_shared<string>(boost::any_cast<string>(m["GmtCreateStr"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~ListOutboundStrategiesResponseBodyOutboundStrategies() = default;
};
class ListOutboundStrategiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOutboundStrategiesResponseBodyOutboundStrategies>> outboundStrategies{};

  ListOutboundStrategiesResponseBody() {}

  explicit ListOutboundStrategiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (outboundStrategies) {
      vector<boost::any> temp1;
      for(auto item1:*outboundStrategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutboundStrategies"] = boost::any(temp1);
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
    if (m.find("OutboundStrategies") != m.end() && !m["OutboundStrategies"].empty()) {
      if (typeid(vector<boost::any>) == m["OutboundStrategies"].type()) {
        vector<ListOutboundStrategiesResponseBodyOutboundStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutboundStrategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOutboundStrategiesResponseBodyOutboundStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outboundStrategies = make_shared<vector<ListOutboundStrategiesResponseBodyOutboundStrategies>>(expect1);
      }
    }
  }


  virtual ~ListOutboundStrategiesResponseBody() = default;
};
class ListOutboundStrategiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOutboundStrategiesResponseBody> body{};

  ListOutboundStrategiesResponse() {}

  explicit ListOutboundStrategiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOutboundStrategiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOutboundStrategiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListOutboundStrategiesResponse() = default;
};
class ListRobotTaskCallsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskId{};
  shared_ptr<string> durationFrom{};
  shared_ptr<string> durationTo{};
  shared_ptr<string> dialogCountFrom{};
  shared_ptr<string> dialogCountTo{};
  shared_ptr<string> hangupDirection{};
  shared_ptr<string> callResult{};
  shared_ptr<string> called{};

  ListRobotTaskCallsRequest() {}

  explicit ListRobotTaskCallsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (durationFrom) {
      res["DurationFrom"] = boost::any(*durationFrom);
    }
    if (durationTo) {
      res["DurationTo"] = boost::any(*durationTo);
    }
    if (dialogCountFrom) {
      res["DialogCountFrom"] = boost::any(*dialogCountFrom);
    }
    if (dialogCountTo) {
      res["DialogCountTo"] = boost::any(*dialogCountTo);
    }
    if (hangupDirection) {
      res["HangupDirection"] = boost::any(*hangupDirection);
    }
    if (callResult) {
      res["CallResult"] = boost::any(*callResult);
    }
    if (called) {
      res["Called"] = boost::any(*called);
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
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("DurationFrom") != m.end() && !m["DurationFrom"].empty()) {
      durationFrom = make_shared<string>(boost::any_cast<string>(m["DurationFrom"]));
    }
    if (m.find("DurationTo") != m.end() && !m["DurationTo"].empty()) {
      durationTo = make_shared<string>(boost::any_cast<string>(m["DurationTo"]));
    }
    if (m.find("DialogCountFrom") != m.end() && !m["DialogCountFrom"].empty()) {
      dialogCountFrom = make_shared<string>(boost::any_cast<string>(m["DialogCountFrom"]));
    }
    if (m.find("DialogCountTo") != m.end() && !m["DialogCountTo"].empty()) {
      dialogCountTo = make_shared<string>(boost::any_cast<string>(m["DialogCountTo"]));
    }
    if (m.find("HangupDirection") != m.end() && !m["HangupDirection"].empty()) {
      hangupDirection = make_shared<string>(boost::any_cast<string>(m["HangupDirection"]));
    }
    if (m.find("CallResult") != m.end() && !m["CallResult"].empty()) {
      callResult = make_shared<string>(boost::any_cast<string>(m["CallResult"]));
    }
    if (m.find("Called") != m.end() && !m["Called"].empty()) {
      called = make_shared<string>(boost::any_cast<string>(m["Called"]));
    }
  }


  virtual ~ListRobotTaskCallsRequest() = default;
};
class ListRobotTaskCallsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  ListRobotTaskCallsResponseBody() {}

  explicit ListRobotTaskCallsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListRobotTaskCallsResponseBody() = default;
};
class ListRobotTaskCallsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRobotTaskCallsResponseBody> body{};

  ListRobotTaskCallsResponse() {}

  explicit ListRobotTaskCallsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRobotTaskCallsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRobotTaskCallsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRobotTaskCallsResponse() = default;
};
class QueryCallDetailByCallIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> callId{};
  shared_ptr<long> prodId{};
  shared_ptr<long> queryDate{};

  QueryCallDetailByCallIdRequest() {}

  explicit QueryCallDetailByCallIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (prodId) {
      res["ProdId"] = boost::any(*prodId);
    }
    if (queryDate) {
      res["QueryDate"] = boost::any(*queryDate);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("ProdId") != m.end() && !m["ProdId"].empty()) {
      prodId = make_shared<long>(boost::any_cast<long>(m["ProdId"]));
    }
    if (m.find("QueryDate") != m.end() && !m["QueryDate"].empty()) {
      queryDate = make_shared<long>(boost::any_cast<long>(m["QueryDate"]));
    }
  }


  virtual ~QueryCallDetailByCallIdRequest() = default;
};
class QueryCallDetailByCallIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};
  shared_ptr<long> queryDate{};
  shared_ptr<string> callee{};

  QueryCallDetailByTaskIdRequest() {}

  explicit QueryCallDetailByTaskIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (queryDate) {
      res["QueryDate"] = boost::any(*queryDate);
    }
    if (callee) {
      res["Callee"] = boost::any(*callee);
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
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("QueryDate") != m.end() && !m["QueryDate"].empty()) {
      queryDate = make_shared<long>(boost::any_cast<long>(m["QueryDate"]));
    }
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
  }


  virtual ~QueryCallDetailByTaskIdRequest() = default;
};
class QueryCallDetailByTaskIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};

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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
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
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> calledRouteMode{};
  shared_ptr<string> transferTimeout{};
  shared_ptr<vector<QueryCallInPoolTransferConfigResponseBodyDataDetails>> details{};

  QueryCallInPoolTransferConfigResponseBodyData() {}

  explicit QueryCallInPoolTransferConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (calledRouteMode) {
      res["CalledRouteMode"] = boost::any(*calledRouteMode);
    }
    if (transferTimeout) {
      res["TransferTimeout"] = boost::any(*transferTimeout);
    }
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Details"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("CalledRouteMode") != m.end() && !m["CalledRouteMode"].empty()) {
      calledRouteMode = make_shared<string>(boost::any_cast<string>(m["CalledRouteMode"]));
    }
    if (m.find("TransferTimeout") != m.end() && !m["TransferTimeout"].empty()) {
      transferTimeout = make_shared<string>(boost::any_cast<string>(m["TransferTimeout"]));
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
  }


  virtual ~QueryCallInPoolTransferConfigResponseBodyData() = default;
};
class QueryCallInPoolTransferConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryCallInPoolTransferConfigResponseBodyData> data{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCallInPoolTransferConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCallInPoolTransferConfigResponseBodyData>(model1);
      }
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> callInCaller{};
  shared_ptr<string> queryDate{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  QueryCallInTransferRecordRequest() {}

  explicit QueryCallInTransferRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (callInCaller) {
      res["CallInCaller"] = boost::any(*callInCaller);
    }
    if (queryDate) {
      res["QueryDate"] = boost::any(*queryDate);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("CallInCaller") != m.end() && !m["CallInCaller"].empty()) {
      callInCaller = make_shared<string>(boost::any_cast<string>(m["CallInCaller"]));
    }
    if (m.find("QueryDate") != m.end() && !m["QueryDate"].empty()) {
      queryDate = make_shared<string>(boost::any_cast<string>(m["QueryDate"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryCallInTransferRecordRequest() = default;
};
class QueryCallInTransferRecordResponseBodyDataValues : public Darabonba::Model {
public:
  shared_ptr<string> callInCalled{};
  shared_ptr<string> transferCalled{};
  shared_ptr<string> recordUrl{};
  shared_ptr<string> transferCaller{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> callInCaller{};

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
    if (transferCalled) {
      res["TransferCalled"] = boost::any(*transferCalled);
    }
    if (recordUrl) {
      res["RecordUrl"] = boost::any(*recordUrl);
    }
    if (transferCaller) {
      res["TransferCaller"] = boost::any(*transferCaller);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (callInCaller) {
      res["CallInCaller"] = boost::any(*callInCaller);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallInCalled") != m.end() && !m["CallInCalled"].empty()) {
      callInCalled = make_shared<string>(boost::any_cast<string>(m["CallInCalled"]));
    }
    if (m.find("TransferCalled") != m.end() && !m["TransferCalled"].empty()) {
      transferCalled = make_shared<string>(boost::any_cast<string>(m["TransferCalled"]));
    }
    if (m.find("RecordUrl") != m.end() && !m["RecordUrl"].empty()) {
      recordUrl = make_shared<string>(boost::any_cast<string>(m["RecordUrl"]));
    }
    if (m.find("TransferCaller") != m.end() && !m["TransferCaller"].empty()) {
      transferCaller = make_shared<string>(boost::any_cast<string>(m["TransferCaller"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("CallInCaller") != m.end() && !m["CallInCaller"].empty()) {
      callInCaller = make_shared<string>(boost::any_cast<string>(m["CallInCaller"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryCallInTransferRecordResponseBodyData> data{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCallInTransferRecordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCallInTransferRecordResponseBodyData>(model1);
      }
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> auditStatus{};

  QueryRobotInfoListRequest() {}

  explicit QueryRobotInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
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
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
  }


  virtual ~QueryRobotInfoListRequest() = default;
};
class QueryRobotInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};
  shared_ptr<string> callee{};
  shared_ptr<long> queryDate{};

  QueryRobotTaskCallDetailRequest() {}

  explicit QueryRobotTaskCallDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callee) {
      res["Callee"] = boost::any(*callee);
    }
    if (queryDate) {
      res["QueryDate"] = boost::any(*queryDate);
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
    if (m.find("Callee") != m.end() && !m["Callee"].empty()) {
      callee = make_shared<string>(boost::any_cast<string>(m["Callee"]));
    }
    if (m.find("QueryDate") != m.end() && !m["QueryDate"].empty()) {
      queryDate = make_shared<long>(boost::any_cast<long>(m["QueryDate"]));
    }
  }


  virtual ~QueryRobotTaskCallDetailRequest() = default;
};
class QueryRobotTaskCallDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskId{};
  shared_ptr<string> durationFrom{};
  shared_ptr<string> durationTo{};
  shared_ptr<string> dialogCountFrom{};
  shared_ptr<string> dialogCountTo{};
  shared_ptr<string> hangupDirection{};
  shared_ptr<string> callResult{};
  shared_ptr<string> called{};

  QueryRobotTaskCallListRequest() {}

  explicit QueryRobotTaskCallListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (durationFrom) {
      res["DurationFrom"] = boost::any(*durationFrom);
    }
    if (durationTo) {
      res["DurationTo"] = boost::any(*durationTo);
    }
    if (dialogCountFrom) {
      res["DialogCountFrom"] = boost::any(*dialogCountFrom);
    }
    if (dialogCountTo) {
      res["DialogCountTo"] = boost::any(*dialogCountTo);
    }
    if (hangupDirection) {
      res["HangupDirection"] = boost::any(*hangupDirection);
    }
    if (callResult) {
      res["CallResult"] = boost::any(*callResult);
    }
    if (called) {
      res["Called"] = boost::any(*called);
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
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("DurationFrom") != m.end() && !m["DurationFrom"].empty()) {
      durationFrom = make_shared<string>(boost::any_cast<string>(m["DurationFrom"]));
    }
    if (m.find("DurationTo") != m.end() && !m["DurationTo"].empty()) {
      durationTo = make_shared<string>(boost::any_cast<string>(m["DurationTo"]));
    }
    if (m.find("DialogCountFrom") != m.end() && !m["DialogCountFrom"].empty()) {
      dialogCountFrom = make_shared<string>(boost::any_cast<string>(m["DialogCountFrom"]));
    }
    if (m.find("DialogCountTo") != m.end() && !m["DialogCountTo"].empty()) {
      dialogCountTo = make_shared<string>(boost::any_cast<string>(m["DialogCountTo"]));
    }
    if (m.find("HangupDirection") != m.end() && !m["HangupDirection"].empty()) {
      hangupDirection = make_shared<string>(boost::any_cast<string>(m["HangupDirection"]));
    }
    if (m.find("CallResult") != m.end() && !m["CallResult"].empty()) {
      callResult = make_shared<string>(boost::any_cast<string>(m["CallResult"]));
    }
    if (m.find("Called") != m.end() && !m["Called"].empty()) {
      called = make_shared<string>(boost::any_cast<string>(m["Called"]));
    }
  }


  virtual ~QueryRobotTaskCallListRequest() = default;
};
class QueryRobotTaskCallListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> id{};

  QueryRobotTaskDetailRequest() {}

  explicit QueryRobotTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~QueryRobotTaskDetailRequest() = default;
};
class QueryRobotTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> status{};
  shared_ptr<string> time{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNo{};

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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
  }


  virtual ~QueryRobotTaskListRequest() = default;
};
class QueryRobotTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  QueryRobotTaskListResponseBody() {}

  explicit QueryRobotTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class QueryRtcNumberAuthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};

  QueryRtcNumberAuthStatusRequest() {}

  explicit QueryRtcNumberAuthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~QueryRtcNumberAuthStatusRequest() = default;
};
class QueryRtcNumberAuthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  QueryRtcNumberAuthStatusResponseBody() {}

  explicit QueryRtcNumberAuthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryRtcNumberAuthStatusResponseBody() = default;
};
class QueryRtcNumberAuthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryRtcNumberAuthStatusResponseBody> body{};

  QueryRtcNumberAuthStatusResponse() {}

  explicit QueryRtcNumberAuthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRtcNumberAuthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRtcNumberAuthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRtcNumberAuthStatusResponse() = default;
};
class QueryVirtualNumberRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
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
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> routeType{};
  shared_ptr<long> qualificationId{};
  shared_ptr<string> regionNameCity{};
  shared_ptr<long> specId{};
  shared_ptr<string> relatedNum{};
  shared_ptr<string> phoneNum{};

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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (routeType) {
      res["RouteType"] = boost::any(*routeType);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (regionNameCity) {
      res["RegionNameCity"] = boost::any(*regionNameCity);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    if (relatedNum) {
      res["RelatedNum"] = boost::any(*relatedNum);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
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
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RouteType") != m.end() && !m["RouteType"].empty()) {
      routeType = make_shared<long>(boost::any_cast<long>(m["RouteType"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<long>(boost::any_cast<long>(m["QualificationId"]));
    }
    if (m.find("RegionNameCity") != m.end() && !m["RegionNameCity"].empty()) {
      regionNameCity = make_shared<string>(boost::any_cast<string>(m["RegionNameCity"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<long>(boost::any_cast<long>(m["SpecId"]));
    }
    if (m.find("RelatedNum") != m.end() && !m["RelatedNum"].empty()) {
      relatedNum = make_shared<string>(boost::any_cast<string>(m["RelatedNum"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
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
class QueryVoipNumberBindInfosRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> voipId{};

  QueryVoipNumberBindInfosRequest() {}

  explicit QueryVoipNumberBindInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (voipId) {
      res["VoipId"] = boost::any(*voipId);
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("VoipId") != m.end() && !m["VoipId"].empty()) {
      voipId = make_shared<string>(boost::any_cast<string>(m["VoipId"]));
    }
  }


  virtual ~QueryVoipNumberBindInfosRequest() = default;
};
class QueryVoipNumberBindInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  QueryVoipNumberBindInfosResponseBody() {}

  explicit QueryVoipNumberBindInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryVoipNumberBindInfosResponseBody() = default;
};
class QueryVoipNumberBindInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryVoipNumberBindInfosResponseBody> body{};

  QueryVoipNumberBindInfosResponse() {}

  explicit QueryVoipNumberBindInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryVoipNumberBindInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryVoipNumberBindInfosResponseBody>(model1);
      }
    }
  }


  virtual ~QueryVoipNumberBindInfosResponse() = default;
};
class ReportVoipProblemsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> voipId{};
  shared_ptr<string> title{};
  shared_ptr<string> desc{};

  ReportVoipProblemsRequest() {}

  explicit ReportVoipProblemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (voipId) {
      res["VoipId"] = boost::any(*voipId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
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
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("VoipId") != m.end() && !m["VoipId"].empty()) {
      voipId = make_shared<string>(boost::any_cast<string>(m["VoipId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
  }


  virtual ~ReportVoipProblemsRequest() = default;
};
class ReportVoipProblemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  ReportVoipProblemsResponseBody() {}

  explicit ReportVoipProblemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReportVoipProblemsResponseBody() = default;
};
class ReportVoipProblemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReportVoipProblemsResponseBody> body{};

  ReportVoipProblemsResponse() {}

  explicit ReportVoipProblemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportVoipProblemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportVoipProblemsResponseBody>(model1);
      }
    }
  }


  virtual ~ReportVoipProblemsResponse() = default;
};
class SendVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> verifyType{};
  shared_ptr<string> bizType{};
  shared_ptr<string> target{};

  SendVerificationRequest() {}

  explicit SendVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (verifyType) {
      res["VerifyType"] = boost::any(*verifyType);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (target) {
      res["Target"] = boost::any(*target);
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
    if (m.find("VerifyType") != m.end() && !m["VerifyType"].empty()) {
      verifyType = make_shared<string>(boost::any_cast<string>(m["VerifyType"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~SendVerificationRequest() = default;
};
class SendVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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
  shared_ptr<string> caller{};
  shared_ptr<string> called{};

  SetTransferCalleePoolConfigRequestDetails() {}

  explicit SetTransferCalleePoolConfigRequestDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caller) {
      res["Caller"] = boost::any(*caller);
    }
    if (called) {
      res["Called"] = boost::any(*called);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caller") != m.end() && !m["Caller"].empty()) {
      caller = make_shared<string>(boost::any_cast<string>(m["Caller"]));
    }
    if (m.find("Called") != m.end() && !m["Called"].empty()) {
      called = make_shared<string>(boost::any_cast<string>(m["Called"]));
    }
  }


  virtual ~SetTransferCalleePoolConfigRequestDetails() = default;
};
class SetTransferCalleePoolConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> calledRouteMode{};
  shared_ptr<vector<SetTransferCalleePoolConfigRequestDetails>> details{};

  SetTransferCalleePoolConfigRequest() {}

  explicit SetTransferCalleePoolConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
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
  }


  virtual ~SetTransferCalleePoolConfigRequest() = default;
};
class SetTransferCalleePoolConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> ttsParam{};
  shared_ptr<long> playTimes{};
  shared_ptr<long> volume{};
  shared_ptr<long> speed{};
  shared_ptr<string> outId{};

  SingleCallByTtsRequest() {}

  explicit SingleCallByTtsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (ttsCode) {
      res["TtsCode"] = boost::any(*ttsCode);
    }
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("TtsCode") != m.end() && !m["TtsCode"].empty()) {
      ttsCode = make_shared<string>(boost::any_cast<string>(m["TtsCode"]));
    }
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
  }


  virtual ~SingleCallByTtsRequest() = default;
};
class SingleCallByTtsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> callId{};

  SingleCallByTtsResponseBody() {}

  explicit SingleCallByTtsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> playTimes{};
  shared_ptr<long> volume{};
  shared_ptr<long> speed{};
  shared_ptr<string> outId{};

  SingleCallByVoiceRequest() {}

  explicit SingleCallByVoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (voiceCode) {
      res["VoiceCode"] = boost::any(*voiceCode);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
  }


  virtual ~SingleCallByVoiceRequest() = default;
};
class SingleCallByVoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> callId{};

  SingleCallByVoiceResponseBody() {}

  explicit SingleCallByVoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> calledShowNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> voiceCode{};
  shared_ptr<bool> recordFlag{};
  shared_ptr<long> volume{};
  shared_ptr<long> speed{};
  shared_ptr<string> asrModelId{};
  shared_ptr<long> pauseTime{};
  shared_ptr<long> muteTime{};
  shared_ptr<bool> actionCodeBreak{};
  shared_ptr<string> outId{};
  shared_ptr<string> dynamicId{};
  shared_ptr<bool> earlyMediaAsr{};
  shared_ptr<string> voiceCodeParam{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<long> actionCodeTimeBreak{};
  shared_ptr<string> ttsStyle{};
  shared_ptr<long> ttsVolume{};
  shared_ptr<long> ttsSpeed{};
  shared_ptr<bool> ttsConf{};
  shared_ptr<string> asrBaseId{};
  shared_ptr<long> streamAsr{};

  SmartCallRequest() {}

  explicit SmartCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (calledShowNumber) {
      res["CalledShowNumber"] = boost::any(*calledShowNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (voiceCode) {
      res["VoiceCode"] = boost::any(*voiceCode);
    }
    if (recordFlag) {
      res["RecordFlag"] = boost::any(*recordFlag);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (asrModelId) {
      res["AsrModelId"] = boost::any(*asrModelId);
    }
    if (pauseTime) {
      res["PauseTime"] = boost::any(*pauseTime);
    }
    if (muteTime) {
      res["MuteTime"] = boost::any(*muteTime);
    }
    if (actionCodeBreak) {
      res["ActionCodeBreak"] = boost::any(*actionCodeBreak);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (dynamicId) {
      res["DynamicId"] = boost::any(*dynamicId);
    }
    if (earlyMediaAsr) {
      res["EarlyMediaAsr"] = boost::any(*earlyMediaAsr);
    }
    if (voiceCodeParam) {
      res["VoiceCodeParam"] = boost::any(*voiceCodeParam);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (actionCodeTimeBreak) {
      res["ActionCodeTimeBreak"] = boost::any(*actionCodeTimeBreak);
    }
    if (ttsStyle) {
      res["TtsStyle"] = boost::any(*ttsStyle);
    }
    if (ttsVolume) {
      res["TtsVolume"] = boost::any(*ttsVolume);
    }
    if (ttsSpeed) {
      res["TtsSpeed"] = boost::any(*ttsSpeed);
    }
    if (ttsConf) {
      res["TtsConf"] = boost::any(*ttsConf);
    }
    if (asrBaseId) {
      res["AsrBaseId"] = boost::any(*asrBaseId);
    }
    if (streamAsr) {
      res["StreamAsr"] = boost::any(*streamAsr);
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
    if (m.find("CalledShowNumber") != m.end() && !m["CalledShowNumber"].empty()) {
      calledShowNumber = make_shared<string>(boost::any_cast<string>(m["CalledShowNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("RecordFlag") != m.end() && !m["RecordFlag"].empty()) {
      recordFlag = make_shared<bool>(boost::any_cast<bool>(m["RecordFlag"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("AsrModelId") != m.end() && !m["AsrModelId"].empty()) {
      asrModelId = make_shared<string>(boost::any_cast<string>(m["AsrModelId"]));
    }
    if (m.find("PauseTime") != m.end() && !m["PauseTime"].empty()) {
      pauseTime = make_shared<long>(boost::any_cast<long>(m["PauseTime"]));
    }
    if (m.find("MuteTime") != m.end() && !m["MuteTime"].empty()) {
      muteTime = make_shared<long>(boost::any_cast<long>(m["MuteTime"]));
    }
    if (m.find("ActionCodeBreak") != m.end() && !m["ActionCodeBreak"].empty()) {
      actionCodeBreak = make_shared<bool>(boost::any_cast<bool>(m["ActionCodeBreak"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("DynamicId") != m.end() && !m["DynamicId"].empty()) {
      dynamicId = make_shared<string>(boost::any_cast<string>(m["DynamicId"]));
    }
    if (m.find("EarlyMediaAsr") != m.end() && !m["EarlyMediaAsr"].empty()) {
      earlyMediaAsr = make_shared<bool>(boost::any_cast<bool>(m["EarlyMediaAsr"]));
    }
    if (m.find("VoiceCodeParam") != m.end() && !m["VoiceCodeParam"].empty()) {
      voiceCodeParam = make_shared<string>(boost::any_cast<string>(m["VoiceCodeParam"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("ActionCodeTimeBreak") != m.end() && !m["ActionCodeTimeBreak"].empty()) {
      actionCodeTimeBreak = make_shared<long>(boost::any_cast<long>(m["ActionCodeTimeBreak"]));
    }
    if (m.find("TtsStyle") != m.end() && !m["TtsStyle"].empty()) {
      ttsStyle = make_shared<string>(boost::any_cast<string>(m["TtsStyle"]));
    }
    if (m.find("TtsVolume") != m.end() && !m["TtsVolume"].empty()) {
      ttsVolume = make_shared<long>(boost::any_cast<long>(m["TtsVolume"]));
    }
    if (m.find("TtsSpeed") != m.end() && !m["TtsSpeed"].empty()) {
      ttsSpeed = make_shared<long>(boost::any_cast<long>(m["TtsSpeed"]));
    }
    if (m.find("TtsConf") != m.end() && !m["TtsConf"].empty()) {
      ttsConf = make_shared<bool>(boost::any_cast<bool>(m["TtsConf"]));
    }
    if (m.find("AsrBaseId") != m.end() && !m["AsrBaseId"].empty()) {
      asrBaseId = make_shared<string>(boost::any_cast<string>(m["AsrBaseId"]));
    }
    if (m.find("StreamAsr") != m.end() && !m["StreamAsr"].empty()) {
      streamAsr = make_shared<long>(boost::any_cast<long>(m["StreamAsr"]));
    }
  }


  virtual ~SmartCallRequest() = default;
};
class SmartCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> callId{};

  SmartCallResponseBody() {}

  explicit SmartCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> callId{};
  shared_ptr<string> command{};
  shared_ptr<string> param{};

  SmartCallOperateRequest() {}

  explicit SmartCallOperateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (param) {
      res["Param"] = boost::any(*param);
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
  }


  virtual ~SmartCallOperateRequest() = default;
};
class SmartCallOperateResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> status{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SmartCallOperateResponseBody() {}

  explicit SmartCallOperateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
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
class StartMicroOutboundRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> accountType{};
  shared_ptr<string> accountId{};
  shared_ptr<string> commandCode{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> appName{};

  StartMicroOutboundRequest() {}

  explicit StartMicroOutboundRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (commandCode) {
      res["CommandCode"] = boost::any(*commandCode);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
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
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CommandCode") != m.end() && !m["CommandCode"].empty()) {
      commandCode = make_shared<string>(boost::any_cast<string>(m["CommandCode"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~StartMicroOutboundRequest() = default;
};
class StartMicroOutboundResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> customerInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> invokeCmdId{};
  shared_ptr<string> code{};
  shared_ptr<string> invokeCreateTime{};
  shared_ptr<string> message{};

  StartMicroOutboundResponseBody() {}

  explicit StartMicroOutboundResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerInfo) {
      res["CustomerInfo"] = boost::any(*customerInfo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (invokeCmdId) {
      res["InvokeCmdId"] = boost::any(*invokeCmdId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (invokeCreateTime) {
      res["InvokeCreateTime"] = boost::any(*invokeCreateTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerInfo") != m.end() && !m["CustomerInfo"].empty()) {
      customerInfo = make_shared<string>(boost::any_cast<string>(m["CustomerInfo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InvokeCmdId") != m.end() && !m["InvokeCmdId"].empty()) {
      invokeCmdId = make_shared<string>(boost::any_cast<string>(m["InvokeCmdId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InvokeCreateTime") != m.end() && !m["InvokeCreateTime"].empty()) {
      invokeCreateTime = make_shared<string>(boost::any_cast<string>(m["InvokeCreateTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~StartMicroOutboundResponseBody() = default;
};
class StartMicroOutboundResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartMicroOutboundResponseBody> body{};

  StartMicroOutboundResponse() {}

  explicit StartMicroOutboundResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartMicroOutboundResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartMicroOutboundResponseBody>(model1);
      }
    }
  }


  virtual ~StartMicroOutboundResponse() = default;
};
class StartRobotTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> taskId{};
  shared_ptr<string> scheduleTime{};

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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
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
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
  }


  virtual ~StartRobotTaskRequest() = default;
};
class StartRobotTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> phoneNumberOwnerName{};
  shared_ptr<string> identityCard{};

  SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos() {}

  explicit SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberOwnerName) {
      res["PhoneNumberOwnerName"] = boost::any(*phoneNumberOwnerName);
    }
    if (identityCard) {
      res["IdentityCard"] = boost::any(*identityCard);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneNumberOwnerName") != m.end() && !m["PhoneNumberOwnerName"].empty()) {
      phoneNumberOwnerName = make_shared<string>(boost::any_cast<string>(m["PhoneNumberOwnerName"]));
    }
    if (m.find("IdentityCard") != m.end() && !m["IdentityCard"].empty()) {
      identityCard = make_shared<string>(boost::any_cast<string>(m["IdentityCard"]));
    }
  }


  virtual ~SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos() = default;
};
class SubmitHotlineTransferRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> operatorMail{};
  shared_ptr<string> operatorMailVerifyCode{};
  shared_ptr<string> operatorMobile{};
  shared_ptr<string> operatorMobileVerifyCode{};
  shared_ptr<string> operatorIdentityCard{};
  shared_ptr<string> agreement{};
  shared_ptr<string> hotlineNumber{};
  shared_ptr<vector<SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos>> transferPhoneNumberInfos{};

  SubmitHotlineTransferRegisterRequest() {}

  explicit SubmitHotlineTransferRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
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
    if (operatorIdentityCard) {
      res["OperatorIdentityCard"] = boost::any(*operatorIdentityCard);
    }
    if (agreement) {
      res["Agreement"] = boost::any(*agreement);
    }
    if (hotlineNumber) {
      res["HotlineNumber"] = boost::any(*hotlineNumber);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
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
    if (m.find("OperatorIdentityCard") != m.end() && !m["OperatorIdentityCard"].empty()) {
      operatorIdentityCard = make_shared<string>(boost::any_cast<string>(m["OperatorIdentityCard"]));
    }
    if (m.find("Agreement") != m.end() && !m["Agreement"].empty()) {
      agreement = make_shared<string>(boost::any_cast<string>(m["Agreement"]));
    }
    if (m.find("HotlineNumber") != m.end() && !m["HotlineNumber"].empty()) {
      hotlineNumber = make_shared<string>(boost::any_cast<string>(m["HotlineNumber"]));
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
  shared_ptr<string> message{};
  shared_ptr<long> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
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
class UnbindNumberAndVoipIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> voipId{};

  UnbindNumberAndVoipIdRequest() {}

  explicit UnbindNumberAndVoipIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (voipId) {
      res["VoipId"] = boost::any(*voipId);
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("VoipId") != m.end() && !m["VoipId"].empty()) {
      voipId = make_shared<string>(boost::any_cast<string>(m["VoipId"]));
    }
  }


  virtual ~UnbindNumberAndVoipIdRequest() = default;
};
class UnbindNumberAndVoipIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  UnbindNumberAndVoipIdResponseBody() {}

  explicit UnbindNumberAndVoipIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnbindNumberAndVoipIdResponseBody() = default;
};
class UnbindNumberAndVoipIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnbindNumberAndVoipIdResponseBody> body{};

  UnbindNumberAndVoipIdResponse() {}

  explicit UnbindNumberAndVoipIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindNumberAndVoipIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindNumberAndVoipIdResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindNumberAndVoipIdResponse() = default;
};
class UndoRtcNumberAuthRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};

  UndoRtcNumberAuthRequest() {}

  explicit UndoRtcNumberAuthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~UndoRtcNumberAuthRequest() = default;
};
class UndoRtcNumberAuthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  UndoRtcNumberAuthResponseBody() {}

  explicit UndoRtcNumberAuthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UndoRtcNumberAuthResponseBody() = default;
};
class UndoRtcNumberAuthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UndoRtcNumberAuthResponseBody> body{};

  UndoRtcNumberAuthResponse() {}

  explicit UndoRtcNumberAuthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UndoRtcNumberAuthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UndoRtcNumberAuthResponseBody>(model1);
      }
    }
  }


  virtual ~UndoRtcNumberAuthResponse() = default;
};
class UploadRobotTaskCalledFileRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> id{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> ttsParamHead{};

  UploadRobotTaskCalledFileRequest() {}

  explicit UploadRobotTaskCalledFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> data{};
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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
class VoipAddAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> deviceId{};

  VoipAddAccountRequest() {}

  explicit VoipAddAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
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
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~VoipAddAccountRequest() = default;
};
class VoipAddAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  VoipAddAccountResponseBody() {}

  explicit VoipAddAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoipAddAccountResponseBody() = default;
};
class VoipAddAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<VoipAddAccountResponseBody> body{};

  VoipAddAccountResponse() {}

  explicit VoipAddAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoipAddAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoipAddAccountResponseBody>(model1);
      }
    }
  }


  virtual ~VoipAddAccountResponse() = default;
};
class VoipGetTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> voipId{};
  shared_ptr<string> deviceId{};
  shared_ptr<bool> isCustomAccount{};

  VoipGetTokenRequest() {}

  explicit VoipGetTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (voipId) {
      res["VoipId"] = boost::any(*voipId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (isCustomAccount) {
      res["IsCustomAccount"] = boost::any(*isCustomAccount);
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
    if (m.find("VoipId") != m.end() && !m["VoipId"].empty()) {
      voipId = make_shared<string>(boost::any_cast<string>(m["VoipId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("IsCustomAccount") != m.end() && !m["IsCustomAccount"].empty()) {
      isCustomAccount = make_shared<bool>(boost::any_cast<bool>(m["IsCustomAccount"]));
    }
  }


  virtual ~VoipGetTokenRequest() = default;
};
class VoipGetTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};

  VoipGetTokenResponseBody() {}

  explicit VoipGetTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VoipGetTokenResponseBody() = default;
};
class VoipGetTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<VoipGetTokenResponseBody> body{};

  VoipGetTokenResponse() {}

  explicit VoipGetTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VoipGetTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoipGetTokenResponseBody>(model1);
      }
    }
  }


  virtual ~VoipGetTokenResponse() = default;
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
  BindNumberAndVoipIdResponse bindNumberAndVoipIdWithOptions(shared_ptr<BindNumberAndVoipIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindNumberAndVoipIdResponse bindNumberAndVoipId(shared_ptr<BindNumberAndVoipIdRequest> request);
  CancelCallResponse cancelCallWithOptions(shared_ptr<CancelCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelCallResponse cancelCall(shared_ptr<CancelCallRequest> request);
  CancelOrderRobotTaskResponse cancelOrderRobotTaskWithOptions(shared_ptr<CancelOrderRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOrderRobotTaskResponse cancelOrderRobotTask(shared_ptr<CancelOrderRobotTaskRequest> request);
  CancelRobotTaskResponse cancelRobotTaskWithOptions(shared_ptr<CancelRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRobotTaskResponse cancelRobotTask(shared_ptr<CancelRobotTaskRequest> request);
  ClickToDialResponse clickToDialWithOptions(shared_ptr<ClickToDialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClickToDialResponse clickToDial(shared_ptr<ClickToDialRequest> request);
  CloseSipAccountResponse closeSipAccountWithOptions(shared_ptr<CloseSipAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseSipAccountResponse closeSipAccount(shared_ptr<CloseSipAccountRequest> request);
  CreateCallTaskResponse createCallTaskWithOptions(shared_ptr<CreateCallTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCallTaskResponse createCallTask(shared_ptr<CreateCallTaskRequest> request);
  CreateRobotTaskResponse createRobotTaskWithOptions(shared_ptr<CreateRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRobotTaskResponse createRobotTask(shared_ptr<CreateRobotTaskRequest> request);
  CreateSipAccountResponse createSipAccountWithOptions(shared_ptr<CreateSipAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSipAccountResponse createSipAccount(shared_ptr<CreateSipAccountRequest> request);
  DeleteRobotTaskResponse deleteRobotTaskWithOptions(shared_ptr<DeleteRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRobotTaskResponse deleteRobotTask(shared_ptr<DeleteRobotTaskRequest> request);
  DescribeRecordDataResponse describeRecordDataWithOptions(shared_ptr<DescribeRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecordDataResponse describeRecordData(shared_ptr<DescribeRecordDataRequest> request);
  DoRtcNumberAuthResponse doRtcNumberAuthWithOptions(shared_ptr<DoRtcNumberAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoRtcNumberAuthResponse doRtcNumberAuth(shared_ptr<DoRtcNumberAuthRequest> request);
  DoubleCallSeatResponse doubleCallSeatWithOptions(shared_ptr<DoubleCallSeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoubleCallSeatResponse doubleCallSeat(shared_ptr<DoubleCallSeatRequest> request);
  ExecuteCallTaskResponse executeCallTaskWithOptions(shared_ptr<ExecuteCallTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteCallTaskResponse executeCallTask(shared_ptr<ExecuteCallTaskRequest> request);
  GetHotlineQualificationByOrderResponse getHotlineQualificationByOrderWithOptions(shared_ptr<GetHotlineQualificationByOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotlineQualificationByOrderResponse getHotlineQualificationByOrder(shared_ptr<GetHotlineQualificationByOrderRequest> request);
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
  ListOrderedNumbersResponse listOrderedNumbersWithOptions(shared_ptr<ListOrderedNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrderedNumbersResponse listOrderedNumbers(shared_ptr<ListOrderedNumbersRequest> request);
  ListOutboundStrategiesResponse listOutboundStrategiesWithOptions(shared_ptr<ListOutboundStrategiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOutboundStrategiesResponse listOutboundStrategies(shared_ptr<ListOutboundStrategiesRequest> request);
  ListRobotTaskCallsResponse listRobotTaskCallsWithOptions(shared_ptr<ListRobotTaskCallsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRobotTaskCallsResponse listRobotTaskCalls(shared_ptr<ListRobotTaskCallsRequest> request);
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
  QueryRtcNumberAuthStatusResponse queryRtcNumberAuthStatusWithOptions(shared_ptr<QueryRtcNumberAuthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRtcNumberAuthStatusResponse queryRtcNumberAuthStatus(shared_ptr<QueryRtcNumberAuthStatusRequest> request);
  QueryVirtualNumberResponse queryVirtualNumberWithOptions(shared_ptr<QueryVirtualNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVirtualNumberResponse queryVirtualNumber(shared_ptr<QueryVirtualNumberRequest> request);
  QueryVirtualNumberRelationResponse queryVirtualNumberRelationWithOptions(shared_ptr<QueryVirtualNumberRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVirtualNumberRelationResponse queryVirtualNumberRelation(shared_ptr<QueryVirtualNumberRelationRequest> request);
  QueryVoipNumberBindInfosResponse queryVoipNumberBindInfosWithOptions(shared_ptr<QueryVoipNumberBindInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVoipNumberBindInfosResponse queryVoipNumberBindInfos(shared_ptr<QueryVoipNumberBindInfosRequest> request);
  ReportVoipProblemsResponse reportVoipProblemsWithOptions(shared_ptr<ReportVoipProblemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportVoipProblemsResponse reportVoipProblems(shared_ptr<ReportVoipProblemsRequest> request);
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
  StartMicroOutboundResponse startMicroOutboundWithOptions(shared_ptr<StartMicroOutboundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartMicroOutboundResponse startMicroOutbound(shared_ptr<StartMicroOutboundRequest> request);
  StartRobotTaskResponse startRobotTaskWithOptions(shared_ptr<StartRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartRobotTaskResponse startRobotTask(shared_ptr<StartRobotTaskRequest> request);
  StopRobotTaskResponse stopRobotTaskWithOptions(shared_ptr<StopRobotTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopRobotTaskResponse stopRobotTask(shared_ptr<StopRobotTaskRequest> request);
  SubmitHotlineTransferRegisterResponse submitHotlineTransferRegisterWithOptions(shared_ptr<SubmitHotlineTransferRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitHotlineTransferRegisterResponse submitHotlineTransferRegister(shared_ptr<SubmitHotlineTransferRegisterRequest> request);
  UnbindNumberAndVoipIdResponse unbindNumberAndVoipIdWithOptions(shared_ptr<UnbindNumberAndVoipIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindNumberAndVoipIdResponse unbindNumberAndVoipId(shared_ptr<UnbindNumberAndVoipIdRequest> request);
  UndoRtcNumberAuthResponse undoRtcNumberAuthWithOptions(shared_ptr<UndoRtcNumberAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UndoRtcNumberAuthResponse undoRtcNumberAuth(shared_ptr<UndoRtcNumberAuthRequest> request);
  UploadRobotTaskCalledFileResponse uploadRobotTaskCalledFileWithOptions(shared_ptr<UploadRobotTaskCalledFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadRobotTaskCalledFileResponse uploadRobotTaskCalledFile(shared_ptr<UploadRobotTaskCalledFileRequest> request);
  VoipAddAccountResponse voipAddAccountWithOptions(shared_ptr<VoipAddAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoipAddAccountResponse voipAddAccount(shared_ptr<VoipAddAccountRequest> request);
  VoipGetTokenResponse voipGetTokenWithOptions(shared_ptr<VoipGetTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoipGetTokenResponse voipGetToken(shared_ptr<VoipGetTokenRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dyvmsapi20170525

#endif
