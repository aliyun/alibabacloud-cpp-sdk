// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYPLSAPI20170525_H_
#define ALIBABACLOUD_DYPLSAPI20170525_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dyplsapi20170525 {
class AddAxnTrackNoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subsId{};
  shared_ptr<string> trackNo{};

  AddAxnTrackNoRequest() {}

  explicit AddAxnTrackNoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    if (trackNo) {
      res["trackNo"] = boost::any(*trackNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
    if (m.find("trackNo") != m.end() && !m["trackNo"].empty()) {
      trackNo = make_shared<string>(boost::any_cast<string>(m["trackNo"]));
    }
  }


  virtual ~AddAxnTrackNoRequest() = default;
};
class AddAxnTrackNoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddAxnTrackNoResponseBody() {}

  explicit AddAxnTrackNoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~AddAxnTrackNoResponseBody() = default;
};
class AddAxnTrackNoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddAxnTrackNoResponseBody> body{};

  AddAxnTrackNoResponse() {}

  explicit AddAxnTrackNoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddAxnTrackNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddAxnTrackNoResponseBody>(model1);
      }
    }
  }


  virtual ~AddAxnTrackNoResponse() = default;
};
class AddSecretBlacklistRequest : public Darabonba::Model {
public:
  shared_ptr<string> blackNo{};
  shared_ptr<string> blackType{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> remark{};
  shared_ptr<string> wayControl{};

  AddSecretBlacklistRequest() {}

  explicit AddSecretBlacklistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackNo) {
      res["BlackNo"] = boost::any(*blackNo);
    }
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (wayControl) {
      res["WayControl"] = boost::any(*wayControl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackNo") != m.end() && !m["BlackNo"].empty()) {
      blackNo = make_shared<string>(boost::any_cast<string>(m["BlackNo"]));
    }
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("WayControl") != m.end() && !m["WayControl"].empty()) {
      wayControl = make_shared<string>(boost::any_cast<string>(m["WayControl"]));
    }
  }


  virtual ~AddSecretBlacklistRequest() = default;
};
class AddSecretBlacklistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddSecretBlacklistResponseBody() {}

  explicit AddSecretBlacklistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~AddSecretBlacklistResponseBody() = default;
};
class AddSecretBlacklistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddSecretBlacklistResponseBody> body{};

  AddSecretBlacklistResponse() {}

  explicit AddSecretBlacklistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddSecretBlacklistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSecretBlacklistResponseBody>(model1);
      }
    }
  }


  virtual ~AddSecretBlacklistResponse() = default;
};
class BindAXBCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> authId{};
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<long> expiration{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> telA{};
  shared_ptr<string> userData{};

  BindAXBCallRequest() {}

  explicit BindAXBCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authId) {
      res["AuthId"] = boost::any(*authId);
    }
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (telA) {
      res["TelA"] = boost::any(*telA);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthId") != m.end() && !m["AuthId"].empty()) {
      authId = make_shared<string>(boost::any_cast<string>(m["AuthId"]));
    }
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<long>(boost::any_cast<long>(m["Expiration"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TelA") != m.end() && !m["TelA"].empty()) {
      telA = make_shared<string>(boost::any_cast<string>(m["TelA"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~BindAXBCallRequest() = default;
};
class BindAXBCallResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bindId{};

  BindAXBCallResponseBodyData() {}

  explicit BindAXBCallResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindId) {
      res["BindId"] = boost::any(*bindId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindId") != m.end() && !m["BindId"].empty()) {
      bindId = make_shared<string>(boost::any_cast<string>(m["BindId"]));
    }
  }


  virtual ~BindAXBCallResponseBodyData() = default;
};
class BindAXBCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<BindAXBCallResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  BindAXBCallResponseBody() {}

  explicit BindAXBCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BindAXBCallResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BindAXBCallResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BindAXBCallResponseBody() = default;
};
class BindAXBCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindAXBCallResponseBody> body{};

  BindAXBCallResponse() {}

  explicit BindAXBCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindAXBCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAXBCallResponseBody>(model1);
      }
    }
  }


  virtual ~BindAXBCallResponse() = default;
};
class BindAxbRequest : public Darabonba::Model {
public:
  shared_ptr<string> ASRModelId{};
  shared_ptr<bool> ASRStatus{};
  shared_ptr<long> callDisplayType{};
  shared_ptr<string> callRestrict{};
  shared_ptr<long> callTimeout{};
  shared_ptr<string> dtmfConfig{};
  shared_ptr<string> expectCity{};
  shared_ptr<string> expiration{};
  shared_ptr<bool> isRecordingEnabled{};
  shared_ptr<string> outId{};
  shared_ptr<string> outOrderId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ringConfig{};

  BindAxbRequest() {}

  explicit BindAxbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASRModelId) {
      res["ASRModelId"] = boost::any(*ASRModelId);
    }
    if (ASRStatus) {
      res["ASRStatus"] = boost::any(*ASRStatus);
    }
    if (callDisplayType) {
      res["CallDisplayType"] = boost::any(*callDisplayType);
    }
    if (callRestrict) {
      res["CallRestrict"] = boost::any(*callRestrict);
    }
    if (callTimeout) {
      res["CallTimeout"] = boost::any(*callTimeout);
    }
    if (dtmfConfig) {
      res["DtmfConfig"] = boost::any(*dtmfConfig);
    }
    if (expectCity) {
      res["ExpectCity"] = boost::any(*expectCity);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (isRecordingEnabled) {
      res["IsRecordingEnabled"] = boost::any(*isRecordingEnabled);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (outOrderId) {
      res["OutOrderId"] = boost::any(*outOrderId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ringConfig) {
      res["RingConfig"] = boost::any(*ringConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASRModelId") != m.end() && !m["ASRModelId"].empty()) {
      ASRModelId = make_shared<string>(boost::any_cast<string>(m["ASRModelId"]));
    }
    if (m.find("ASRStatus") != m.end() && !m["ASRStatus"].empty()) {
      ASRStatus = make_shared<bool>(boost::any_cast<bool>(m["ASRStatus"]));
    }
    if (m.find("CallDisplayType") != m.end() && !m["CallDisplayType"].empty()) {
      callDisplayType = make_shared<long>(boost::any_cast<long>(m["CallDisplayType"]));
    }
    if (m.find("CallRestrict") != m.end() && !m["CallRestrict"].empty()) {
      callRestrict = make_shared<string>(boost::any_cast<string>(m["CallRestrict"]));
    }
    if (m.find("CallTimeout") != m.end() && !m["CallTimeout"].empty()) {
      callTimeout = make_shared<long>(boost::any_cast<long>(m["CallTimeout"]));
    }
    if (m.find("DtmfConfig") != m.end() && !m["DtmfConfig"].empty()) {
      dtmfConfig = make_shared<string>(boost::any_cast<string>(m["DtmfConfig"]));
    }
    if (m.find("ExpectCity") != m.end() && !m["ExpectCity"].empty()) {
      expectCity = make_shared<string>(boost::any_cast<string>(m["ExpectCity"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("IsRecordingEnabled") != m.end() && !m["IsRecordingEnabled"].empty()) {
      isRecordingEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsRecordingEnabled"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OutOrderId") != m.end() && !m["OutOrderId"].empty()) {
      outOrderId = make_shared<string>(boost::any_cast<string>(m["OutOrderId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RingConfig") != m.end() && !m["RingConfig"].empty()) {
      ringConfig = make_shared<string>(boost::any_cast<string>(m["RingConfig"]));
    }
  }


  virtual ~BindAxbRequest() = default;
};
class BindAxbResponseBodySecretBindDTO : public Darabonba::Model {
public:
  shared_ptr<string> extension{};
  shared_ptr<string> secretNo{};
  shared_ptr<string> subsId{};

  BindAxbResponseBodySecretBindDTO() {}

  explicit BindAxbResponseBodySecretBindDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~BindAxbResponseBodySecretBindDTO() = default;
};
class BindAxbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<BindAxbResponseBodySecretBindDTO> secretBindDTO{};

  BindAxbResponseBody() {}

  explicit BindAxbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretBindDTO) {
      res["SecretBindDTO"] = secretBindDTO ? boost::any(secretBindDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretBindDTO") != m.end() && !m["SecretBindDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretBindDTO"].type()) {
        BindAxbResponseBodySecretBindDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretBindDTO"]));
        secretBindDTO = make_shared<BindAxbResponseBodySecretBindDTO>(model1);
      }
    }
  }


  virtual ~BindAxbResponseBody() = default;
};
class BindAxbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindAxbResponseBody> body{};

  BindAxbResponse() {}

  explicit BindAxbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindAxbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAxbResponseBody>(model1);
      }
    }
  }


  virtual ~BindAxbResponse() = default;
};
class BindAxgRequest : public Darabonba::Model {
public:
  shared_ptr<string> ASRModelId{};
  shared_ptr<bool> ASRStatus{};
  shared_ptr<long> callDisplayType{};
  shared_ptr<string> callRestrict{};
  shared_ptr<string> expectCity{};
  shared_ptr<string> expiration{};
  shared_ptr<string> groupId{};
  shared_ptr<bool> isRecordingEnabled{};
  shared_ptr<string> outId{};
  shared_ptr<string> outOrderId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ringConfig{};

  BindAxgRequest() {}

  explicit BindAxgRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASRModelId) {
      res["ASRModelId"] = boost::any(*ASRModelId);
    }
    if (ASRStatus) {
      res["ASRStatus"] = boost::any(*ASRStatus);
    }
    if (callDisplayType) {
      res["CallDisplayType"] = boost::any(*callDisplayType);
    }
    if (callRestrict) {
      res["CallRestrict"] = boost::any(*callRestrict);
    }
    if (expectCity) {
      res["ExpectCity"] = boost::any(*expectCity);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (isRecordingEnabled) {
      res["IsRecordingEnabled"] = boost::any(*isRecordingEnabled);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (outOrderId) {
      res["OutOrderId"] = boost::any(*outOrderId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ringConfig) {
      res["RingConfig"] = boost::any(*ringConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASRModelId") != m.end() && !m["ASRModelId"].empty()) {
      ASRModelId = make_shared<string>(boost::any_cast<string>(m["ASRModelId"]));
    }
    if (m.find("ASRStatus") != m.end() && !m["ASRStatus"].empty()) {
      ASRStatus = make_shared<bool>(boost::any_cast<bool>(m["ASRStatus"]));
    }
    if (m.find("CallDisplayType") != m.end() && !m["CallDisplayType"].empty()) {
      callDisplayType = make_shared<long>(boost::any_cast<long>(m["CallDisplayType"]));
    }
    if (m.find("CallRestrict") != m.end() && !m["CallRestrict"].empty()) {
      callRestrict = make_shared<string>(boost::any_cast<string>(m["CallRestrict"]));
    }
    if (m.find("ExpectCity") != m.end() && !m["ExpectCity"].empty()) {
      expectCity = make_shared<string>(boost::any_cast<string>(m["ExpectCity"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IsRecordingEnabled") != m.end() && !m["IsRecordingEnabled"].empty()) {
      isRecordingEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsRecordingEnabled"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OutOrderId") != m.end() && !m["OutOrderId"].empty()) {
      outOrderId = make_shared<string>(boost::any_cast<string>(m["OutOrderId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RingConfig") != m.end() && !m["RingConfig"].empty()) {
      ringConfig = make_shared<string>(boost::any_cast<string>(m["RingConfig"]));
    }
  }


  virtual ~BindAxgRequest() = default;
};
class BindAxgResponseBodySecretBindDTO : public Darabonba::Model {
public:
  shared_ptr<string> extension{};
  shared_ptr<string> secretNo{};
  shared_ptr<string> subsId{};

  BindAxgResponseBodySecretBindDTO() {}

  explicit BindAxgResponseBodySecretBindDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~BindAxgResponseBodySecretBindDTO() = default;
};
class BindAxgResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<BindAxgResponseBodySecretBindDTO> secretBindDTO{};

  BindAxgResponseBody() {}

  explicit BindAxgResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretBindDTO) {
      res["SecretBindDTO"] = secretBindDTO ? boost::any(secretBindDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretBindDTO") != m.end() && !m["SecretBindDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretBindDTO"].type()) {
        BindAxgResponseBodySecretBindDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretBindDTO"]));
        secretBindDTO = make_shared<BindAxgResponseBodySecretBindDTO>(model1);
      }
    }
  }


  virtual ~BindAxgResponseBody() = default;
};
class BindAxgResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindAxgResponseBody> body{};

  BindAxgResponse() {}

  explicit BindAxgResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindAxgResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAxgResponseBody>(model1);
      }
    }
  }


  virtual ~BindAxgResponse() = default;
};
class BindAxnRequest : public Darabonba::Model {
public:
  shared_ptr<string> ASRModelId{};
  shared_ptr<bool> ASRStatus{};
  shared_ptr<long> callDisplayType{};
  shared_ptr<string> callRestrict{};
  shared_ptr<long> callTimeout{};
  shared_ptr<string> expectCity{};
  shared_ptr<string> expiration{};
  shared_ptr<string> extend{};
  shared_ptr<bool> isRecordingEnabled{};
  shared_ptr<string> noType{};
  shared_ptr<string> outId{};
  shared_ptr<string> outOrderId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ringConfig{};

  BindAxnRequest() {}

  explicit BindAxnRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASRModelId) {
      res["ASRModelId"] = boost::any(*ASRModelId);
    }
    if (ASRStatus) {
      res["ASRStatus"] = boost::any(*ASRStatus);
    }
    if (callDisplayType) {
      res["CallDisplayType"] = boost::any(*callDisplayType);
    }
    if (callRestrict) {
      res["CallRestrict"] = boost::any(*callRestrict);
    }
    if (callTimeout) {
      res["CallTimeout"] = boost::any(*callTimeout);
    }
    if (expectCity) {
      res["ExpectCity"] = boost::any(*expectCity);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (isRecordingEnabled) {
      res["IsRecordingEnabled"] = boost::any(*isRecordingEnabled);
    }
    if (noType) {
      res["NoType"] = boost::any(*noType);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (outOrderId) {
      res["OutOrderId"] = boost::any(*outOrderId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ringConfig) {
      res["RingConfig"] = boost::any(*ringConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASRModelId") != m.end() && !m["ASRModelId"].empty()) {
      ASRModelId = make_shared<string>(boost::any_cast<string>(m["ASRModelId"]));
    }
    if (m.find("ASRStatus") != m.end() && !m["ASRStatus"].empty()) {
      ASRStatus = make_shared<bool>(boost::any_cast<bool>(m["ASRStatus"]));
    }
    if (m.find("CallDisplayType") != m.end() && !m["CallDisplayType"].empty()) {
      callDisplayType = make_shared<long>(boost::any_cast<long>(m["CallDisplayType"]));
    }
    if (m.find("CallRestrict") != m.end() && !m["CallRestrict"].empty()) {
      callRestrict = make_shared<string>(boost::any_cast<string>(m["CallRestrict"]));
    }
    if (m.find("CallTimeout") != m.end() && !m["CallTimeout"].empty()) {
      callTimeout = make_shared<long>(boost::any_cast<long>(m["CallTimeout"]));
    }
    if (m.find("ExpectCity") != m.end() && !m["ExpectCity"].empty()) {
      expectCity = make_shared<string>(boost::any_cast<string>(m["ExpectCity"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("IsRecordingEnabled") != m.end() && !m["IsRecordingEnabled"].empty()) {
      isRecordingEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsRecordingEnabled"]));
    }
    if (m.find("NoType") != m.end() && !m["NoType"].empty()) {
      noType = make_shared<string>(boost::any_cast<string>(m["NoType"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OutOrderId") != m.end() && !m["OutOrderId"].empty()) {
      outOrderId = make_shared<string>(boost::any_cast<string>(m["OutOrderId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RingConfig") != m.end() && !m["RingConfig"].empty()) {
      ringConfig = make_shared<string>(boost::any_cast<string>(m["RingConfig"]));
    }
  }


  virtual ~BindAxnRequest() = default;
};
class BindAxnResponseBodySecretBindDTO : public Darabonba::Model {
public:
  shared_ptr<string> extension{};
  shared_ptr<string> secretNo{};
  shared_ptr<string> subsId{};

  BindAxnResponseBodySecretBindDTO() {}

  explicit BindAxnResponseBodySecretBindDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~BindAxnResponseBodySecretBindDTO() = default;
};
class BindAxnResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<BindAxnResponseBodySecretBindDTO> secretBindDTO{};

  BindAxnResponseBody() {}

  explicit BindAxnResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretBindDTO) {
      res["SecretBindDTO"] = secretBindDTO ? boost::any(secretBindDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretBindDTO") != m.end() && !m["SecretBindDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretBindDTO"].type()) {
        BindAxnResponseBodySecretBindDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretBindDTO"]));
        secretBindDTO = make_shared<BindAxnResponseBodySecretBindDTO>(model1);
      }
    }
  }


  virtual ~BindAxnResponseBody() = default;
};
class BindAxnResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindAxnResponseBody> body{};

  BindAxnResponse() {}

  explicit BindAxnResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindAxnResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAxnResponseBody>(model1);
      }
    }
  }


  virtual ~BindAxnResponse() = default;
};
class BindAxnExtensionRequest : public Darabonba::Model {
public:
  shared_ptr<string> ASRModelId{};
  shared_ptr<bool> ASRStatus{};
  shared_ptr<long> callDisplayType{};
  shared_ptr<string> callRestrict{};
  shared_ptr<string> expectCity{};
  shared_ptr<string> expiration{};
  shared_ptr<string> extend{};
  shared_ptr<string> extension{};
  shared_ptr<bool> isRecordingEnabled{};
  shared_ptr<string> outId{};
  shared_ptr<string> outOrderId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ringConfig{};

  BindAxnExtensionRequest() {}

  explicit BindAxnExtensionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASRModelId) {
      res["ASRModelId"] = boost::any(*ASRModelId);
    }
    if (ASRStatus) {
      res["ASRStatus"] = boost::any(*ASRStatus);
    }
    if (callDisplayType) {
      res["CallDisplayType"] = boost::any(*callDisplayType);
    }
    if (callRestrict) {
      res["CallRestrict"] = boost::any(*callRestrict);
    }
    if (expectCity) {
      res["ExpectCity"] = boost::any(*expectCity);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (isRecordingEnabled) {
      res["IsRecordingEnabled"] = boost::any(*isRecordingEnabled);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (outOrderId) {
      res["OutOrderId"] = boost::any(*outOrderId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ringConfig) {
      res["RingConfig"] = boost::any(*ringConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASRModelId") != m.end() && !m["ASRModelId"].empty()) {
      ASRModelId = make_shared<string>(boost::any_cast<string>(m["ASRModelId"]));
    }
    if (m.find("ASRStatus") != m.end() && !m["ASRStatus"].empty()) {
      ASRStatus = make_shared<bool>(boost::any_cast<bool>(m["ASRStatus"]));
    }
    if (m.find("CallDisplayType") != m.end() && !m["CallDisplayType"].empty()) {
      callDisplayType = make_shared<long>(boost::any_cast<long>(m["CallDisplayType"]));
    }
    if (m.find("CallRestrict") != m.end() && !m["CallRestrict"].empty()) {
      callRestrict = make_shared<string>(boost::any_cast<string>(m["CallRestrict"]));
    }
    if (m.find("ExpectCity") != m.end() && !m["ExpectCity"].empty()) {
      expectCity = make_shared<string>(boost::any_cast<string>(m["ExpectCity"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("IsRecordingEnabled") != m.end() && !m["IsRecordingEnabled"].empty()) {
      isRecordingEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsRecordingEnabled"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OutOrderId") != m.end() && !m["OutOrderId"].empty()) {
      outOrderId = make_shared<string>(boost::any_cast<string>(m["OutOrderId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RingConfig") != m.end() && !m["RingConfig"].empty()) {
      ringConfig = make_shared<string>(boost::any_cast<string>(m["RingConfig"]));
    }
  }


  virtual ~BindAxnExtensionRequest() = default;
};
class BindAxnExtensionResponseBodySecretBindDTO : public Darabonba::Model {
public:
  shared_ptr<string> extension{};
  shared_ptr<string> secretNo{};
  shared_ptr<string> subsId{};

  BindAxnExtensionResponseBodySecretBindDTO() {}

  explicit BindAxnExtensionResponseBodySecretBindDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~BindAxnExtensionResponseBodySecretBindDTO() = default;
};
class BindAxnExtensionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<BindAxnExtensionResponseBodySecretBindDTO> secretBindDTO{};

  BindAxnExtensionResponseBody() {}

  explicit BindAxnExtensionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretBindDTO) {
      res["SecretBindDTO"] = secretBindDTO ? boost::any(secretBindDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretBindDTO") != m.end() && !m["SecretBindDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretBindDTO"].type()) {
        BindAxnExtensionResponseBodySecretBindDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretBindDTO"]));
        secretBindDTO = make_shared<BindAxnExtensionResponseBodySecretBindDTO>(model1);
      }
    }
  }


  virtual ~BindAxnExtensionResponseBody() = default;
};
class BindAxnExtensionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindAxnExtensionResponseBody> body{};

  BindAxnExtensionResponse() {}

  explicit BindAxnExtensionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindAxnExtensionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAxnExtensionResponseBody>(model1);
      }
    }
  }


  virtual ~BindAxnExtensionResponse() = default;
};
class BindBatchAxgRequestAxgBindList : public Darabonba::Model {
public:
  shared_ptr<string> ASRModelId{};
  shared_ptr<bool> ASRStatus{};
  shared_ptr<long> callDisplayType{};
  shared_ptr<string> callRestrict{};
  shared_ptr<string> expectCity{};
  shared_ptr<string> expiration{};
  shared_ptr<string> groupId{};
  shared_ptr<bool> isRecordingEnabled{};
  shared_ptr<string> outId{};
  shared_ptr<string> outOrderId{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> ringConfig{};

  BindBatchAxgRequestAxgBindList() {}

  explicit BindBatchAxgRequestAxgBindList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASRModelId) {
      res["ASRModelId"] = boost::any(*ASRModelId);
    }
    if (ASRStatus) {
      res["ASRStatus"] = boost::any(*ASRStatus);
    }
    if (callDisplayType) {
      res["CallDisplayType"] = boost::any(*callDisplayType);
    }
    if (callRestrict) {
      res["CallRestrict"] = boost::any(*callRestrict);
    }
    if (expectCity) {
      res["ExpectCity"] = boost::any(*expectCity);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (isRecordingEnabled) {
      res["IsRecordingEnabled"] = boost::any(*isRecordingEnabled);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (outOrderId) {
      res["OutOrderId"] = boost::any(*outOrderId);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (ringConfig) {
      res["RingConfig"] = boost::any(*ringConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASRModelId") != m.end() && !m["ASRModelId"].empty()) {
      ASRModelId = make_shared<string>(boost::any_cast<string>(m["ASRModelId"]));
    }
    if (m.find("ASRStatus") != m.end() && !m["ASRStatus"].empty()) {
      ASRStatus = make_shared<bool>(boost::any_cast<bool>(m["ASRStatus"]));
    }
    if (m.find("CallDisplayType") != m.end() && !m["CallDisplayType"].empty()) {
      callDisplayType = make_shared<long>(boost::any_cast<long>(m["CallDisplayType"]));
    }
    if (m.find("CallRestrict") != m.end() && !m["CallRestrict"].empty()) {
      callRestrict = make_shared<string>(boost::any_cast<string>(m["CallRestrict"]));
    }
    if (m.find("ExpectCity") != m.end() && !m["ExpectCity"].empty()) {
      expectCity = make_shared<string>(boost::any_cast<string>(m["ExpectCity"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IsRecordingEnabled") != m.end() && !m["IsRecordingEnabled"].empty()) {
      isRecordingEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsRecordingEnabled"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OutOrderId") != m.end() && !m["OutOrderId"].empty()) {
      outOrderId = make_shared<string>(boost::any_cast<string>(m["OutOrderId"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("RingConfig") != m.end() && !m["RingConfig"].empty()) {
      ringConfig = make_shared<string>(boost::any_cast<string>(m["RingConfig"]));
    }
  }


  virtual ~BindBatchAxgRequestAxgBindList() = default;
};
class BindBatchAxgRequest : public Darabonba::Model {
public:
  shared_ptr<vector<BindBatchAxgRequestAxgBindList>> axgBindList{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  BindBatchAxgRequest() {}

  explicit BindBatchAxgRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (axgBindList) {
      vector<boost::any> temp1;
      for(auto item1:*axgBindList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AxgBindList"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
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
    if (m.find("AxgBindList") != m.end() && !m["AxgBindList"].empty()) {
      if (typeid(vector<boost::any>) == m["AxgBindList"].type()) {
        vector<BindBatchAxgRequestAxgBindList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AxgBindList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BindBatchAxgRequestAxgBindList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        axgBindList = make_shared<vector<BindBatchAxgRequestAxgBindList>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~BindBatchAxgRequest() = default;
};
class BindBatchAxgShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> axgBindListShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  BindBatchAxgShrinkRequest() {}

  explicit BindBatchAxgShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (axgBindListShrink) {
      res["AxgBindList"] = boost::any(*axgBindListShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
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
    if (m.find("AxgBindList") != m.end() && !m["AxgBindList"].empty()) {
      axgBindListShrink = make_shared<string>(boost::any_cast<string>(m["AxgBindList"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~BindBatchAxgShrinkRequest() = default;
};
class BindBatchAxgResponseBodySecretBindListSecretBind : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> extension{};
  shared_ptr<string> groupId{};
  shared_ptr<string> message{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> secretNo{};
  shared_ptr<string> subsId{};

  BindBatchAxgResponseBodySecretBindListSecretBind() {}

  explicit BindBatchAxgResponseBodySecretBindListSecretBind(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~BindBatchAxgResponseBodySecretBindListSecretBind() = default;
};
class BindBatchAxgResponseBodySecretBindList : public Darabonba::Model {
public:
  shared_ptr<vector<BindBatchAxgResponseBodySecretBindListSecretBind>> secretBind{};

  BindBatchAxgResponseBodySecretBindList() {}

  explicit BindBatchAxgResponseBodySecretBindList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretBind) {
      vector<boost::any> temp1;
      for(auto item1:*secretBind){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecretBind"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretBind") != m.end() && !m["SecretBind"].empty()) {
      if (typeid(vector<boost::any>) == m["SecretBind"].type()) {
        vector<BindBatchAxgResponseBodySecretBindListSecretBind> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecretBind"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BindBatchAxgResponseBodySecretBindListSecretBind model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        secretBind = make_shared<vector<BindBatchAxgResponseBodySecretBindListSecretBind>>(expect1);
      }
    }
  }


  virtual ~BindBatchAxgResponseBodySecretBindList() = default;
};
class BindBatchAxgResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<BindBatchAxgResponseBodySecretBindList> secretBindList{};

  BindBatchAxgResponseBody() {}

  explicit BindBatchAxgResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretBindList) {
      res["SecretBindList"] = secretBindList ? boost::any(secretBindList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretBindList") != m.end() && !m["SecretBindList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretBindList"].type()) {
        BindBatchAxgResponseBodySecretBindList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretBindList"]));
        secretBindList = make_shared<BindBatchAxgResponseBodySecretBindList>(model1);
      }
    }
  }


  virtual ~BindBatchAxgResponseBody() = default;
};
class BindBatchAxgResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindBatchAxgResponseBody> body{};

  BindBatchAxgResponse() {}

  explicit BindBatchAxgResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindBatchAxgResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindBatchAxgResponseBody>(model1);
      }
    }
  }


  virtual ~BindBatchAxgResponse() = default;
};
class BindXBRequest : public Darabonba::Model {
public:
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> telB{};
  shared_ptr<string> telX{};
  shared_ptr<string> userData{};

  BindXBRequest() {}

  explicit BindXBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (telB) {
      res["TelB"] = boost::any(*telB);
    }
    if (telX) {
      res["TelX"] = boost::any(*telX);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TelB") != m.end() && !m["TelB"].empty()) {
      telB = make_shared<string>(boost::any_cast<string>(m["TelB"]));
    }
    if (m.find("TelX") != m.end() && !m["TelX"].empty()) {
      telX = make_shared<string>(boost::any_cast<string>(m["TelX"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~BindXBRequest() = default;
};
class BindXBResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> authId{};
  shared_ptr<string> telX{};

  BindXBResponseBodyData() {}

  explicit BindXBResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authId) {
      res["AuthId"] = boost::any(*authId);
    }
    if (telX) {
      res["TelX"] = boost::any(*telX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthId") != m.end() && !m["AuthId"].empty()) {
      authId = make_shared<string>(boost::any_cast<string>(m["AuthId"]));
    }
    if (m.find("TelX") != m.end() && !m["TelX"].empty()) {
      telX = make_shared<string>(boost::any_cast<string>(m["TelX"]));
    }
  }


  virtual ~BindXBResponseBodyData() = default;
};
class BindXBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<BindXBResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  BindXBResponseBody() {}

  explicit BindXBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BindXBResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BindXBResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BindXBResponseBody() = default;
};
class BindXBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindXBResponseBody> body{};

  BindXBResponse() {}

  explicit BindXBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindXBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindXBResponseBody>(model1);
      }
    }
  }


  virtual ~BindXBResponse() = default;
};
class BuySecretNoRequest : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<bool> displayPool{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};
  shared_ptr<long> specId{};

  BuySecretNoRequest() {}

  explicit BuySecretNoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (displayPool) {
      res["DisplayPool"] = boost::any(*displayPool);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("DisplayPool") != m.end() && !m["DisplayPool"].empty()) {
      displayPool = make_shared<bool>(boost::any_cast<bool>(m["DisplayPool"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<long>(boost::any_cast<long>(m["SpecId"]));
    }
  }


  virtual ~BuySecretNoRequest() = default;
};
class BuySecretNoResponseBodySecretBuyInfoDTO : public Darabonba::Model {
public:
  shared_ptr<string> secretNo{};

  BuySecretNoResponseBodySecretBuyInfoDTO() {}

  explicit BuySecretNoResponseBodySecretBuyInfoDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~BuySecretNoResponseBodySecretBuyInfoDTO() = default;
};
class BuySecretNoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<BuySecretNoResponseBodySecretBuyInfoDTO> secretBuyInfoDTO{};

  BuySecretNoResponseBody() {}

  explicit BuySecretNoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretBuyInfoDTO) {
      res["SecretBuyInfoDTO"] = secretBuyInfoDTO ? boost::any(secretBuyInfoDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretBuyInfoDTO") != m.end() && !m["SecretBuyInfoDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretBuyInfoDTO"].type()) {
        BuySecretNoResponseBodySecretBuyInfoDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretBuyInfoDTO"]));
        secretBuyInfoDTO = make_shared<BuySecretNoResponseBodySecretBuyInfoDTO>(model1);
      }
    }
  }


  virtual ~BuySecretNoResponseBody() = default;
};
class BuySecretNoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BuySecretNoResponseBody> body{};

  BuySecretNoResponse() {}

  explicit BuySecretNoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BuySecretNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BuySecretNoResponseBody>(model1);
      }
    }
  }


  virtual ~BuySecretNoResponse() = default;
};
class CancelPickUpWaybillRequest : public Darabonba::Model {
public:
  shared_ptr<string> cancelDesc{};
  shared_ptr<string> outerOrderCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CancelPickUpWaybillRequest() {}

  explicit CancelPickUpWaybillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cancelDesc) {
      res["CancelDesc"] = boost::any(*cancelDesc);
    }
    if (outerOrderCode) {
      res["OuterOrderCode"] = boost::any(*outerOrderCode);
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
    if (m.find("CancelDesc") != m.end() && !m["CancelDesc"].empty()) {
      cancelDesc = make_shared<string>(boost::any_cast<string>(m["CancelDesc"]));
    }
    if (m.find("OuterOrderCode") != m.end() && !m["OuterOrderCode"].empty()) {
      outerOrderCode = make_shared<string>(boost::any_cast<string>(m["OuterOrderCode"]));
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


  virtual ~CancelPickUpWaybillRequest() = default;
};
class CancelPickUpWaybillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  CancelPickUpWaybillResponseBodyData() {}

  explicit CancelPickUpWaybillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelPickUpWaybillResponseBodyData() = default;
};
class CancelPickUpWaybillResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CancelPickUpWaybillResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CancelPickUpWaybillResponseBody() {}

  explicit CancelPickUpWaybillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelPickUpWaybillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CancelPickUpWaybillResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelPickUpWaybillResponseBody() = default;
};
class CancelPickUpWaybillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelPickUpWaybillResponseBody> body{};

  CancelPickUpWaybillResponse() {}

  explicit CancelPickUpWaybillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelPickUpWaybillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelPickUpWaybillResponseBody>(model1);
      }
    }
  }


  virtual ~CancelPickUpWaybillResponse() = default;
};
class ConfigXRequestSequenceCalls : public Darabonba::Model {
public:
  shared_ptr<string> sequenceCallNoPlayCode{};
  shared_ptr<string> sequenceCalledNo{};
  shared_ptr<string> sequenceCalledPlayCode{};

  ConfigXRequestSequenceCalls() {}

  explicit ConfigXRequestSequenceCalls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sequenceCallNoPlayCode) {
      res["SequenceCallNoPlayCode"] = boost::any(*sequenceCallNoPlayCode);
    }
    if (sequenceCalledNo) {
      res["SequenceCalledNo"] = boost::any(*sequenceCalledNo);
    }
    if (sequenceCalledPlayCode) {
      res["SequenceCalledPlayCode"] = boost::any(*sequenceCalledPlayCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SequenceCallNoPlayCode") != m.end() && !m["SequenceCallNoPlayCode"].empty()) {
      sequenceCallNoPlayCode = make_shared<string>(boost::any_cast<string>(m["SequenceCallNoPlayCode"]));
    }
    if (m.find("SequenceCalledNo") != m.end() && !m["SequenceCalledNo"].empty()) {
      sequenceCalledNo = make_shared<string>(boost::any_cast<string>(m["SequenceCalledNo"]));
    }
    if (m.find("SequenceCalledPlayCode") != m.end() && !m["SequenceCalledPlayCode"].empty()) {
      sequenceCalledPlayCode = make_shared<string>(boost::any_cast<string>(m["SequenceCalledPlayCode"]));
    }
  }


  virtual ~ConfigXRequestSequenceCalls() = default;
};
class ConfigXRequest : public Darabonba::Model {
public:
  shared_ptr<string> callAbility{};
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<string> GNFlag{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<ConfigXRequestSequenceCalls>> sequenceCalls{};
  shared_ptr<string> sequenceMode{};
  shared_ptr<string> smsAbility{};
  shared_ptr<string> smsSignMode{};
  shared_ptr<string> telX{};

  ConfigXRequest() {}

  explicit ConfigXRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callAbility) {
      res["CallAbility"] = boost::any(*callAbility);
    }
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (GNFlag) {
      res["GNFlag"] = boost::any(*GNFlag);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sequenceCalls) {
      vector<boost::any> temp1;
      for(auto item1:*sequenceCalls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SequenceCalls"] = boost::any(temp1);
    }
    if (sequenceMode) {
      res["SequenceMode"] = boost::any(*sequenceMode);
    }
    if (smsAbility) {
      res["SmsAbility"] = boost::any(*smsAbility);
    }
    if (smsSignMode) {
      res["SmsSignMode"] = boost::any(*smsSignMode);
    }
    if (telX) {
      res["TelX"] = boost::any(*telX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallAbility") != m.end() && !m["CallAbility"].empty()) {
      callAbility = make_shared<string>(boost::any_cast<string>(m["CallAbility"]));
    }
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("GNFlag") != m.end() && !m["GNFlag"].empty()) {
      GNFlag = make_shared<string>(boost::any_cast<string>(m["GNFlag"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SequenceCalls") != m.end() && !m["SequenceCalls"].empty()) {
      if (typeid(vector<boost::any>) == m["SequenceCalls"].type()) {
        vector<ConfigXRequestSequenceCalls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SequenceCalls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConfigXRequestSequenceCalls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sequenceCalls = make_shared<vector<ConfigXRequestSequenceCalls>>(expect1);
      }
    }
    if (m.find("SequenceMode") != m.end() && !m["SequenceMode"].empty()) {
      sequenceMode = make_shared<string>(boost::any_cast<string>(m["SequenceMode"]));
    }
    if (m.find("SmsAbility") != m.end() && !m["SmsAbility"].empty()) {
      smsAbility = make_shared<string>(boost::any_cast<string>(m["SmsAbility"]));
    }
    if (m.find("SmsSignMode") != m.end() && !m["SmsSignMode"].empty()) {
      smsSignMode = make_shared<string>(boost::any_cast<string>(m["SmsSignMode"]));
    }
    if (m.find("TelX") != m.end() && !m["TelX"].empty()) {
      telX = make_shared<string>(boost::any_cast<string>(m["TelX"]));
    }
  }


  virtual ~ConfigXRequest() = default;
};
class ConfigXShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> callAbility{};
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<string> GNFlag{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sequenceCallsShrink{};
  shared_ptr<string> sequenceMode{};
  shared_ptr<string> smsAbility{};
  shared_ptr<string> smsSignMode{};
  shared_ptr<string> telX{};

  ConfigXShrinkRequest() {}

  explicit ConfigXShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callAbility) {
      res["CallAbility"] = boost::any(*callAbility);
    }
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (GNFlag) {
      res["GNFlag"] = boost::any(*GNFlag);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sequenceCallsShrink) {
      res["SequenceCalls"] = boost::any(*sequenceCallsShrink);
    }
    if (sequenceMode) {
      res["SequenceMode"] = boost::any(*sequenceMode);
    }
    if (smsAbility) {
      res["SmsAbility"] = boost::any(*smsAbility);
    }
    if (smsSignMode) {
      res["SmsSignMode"] = boost::any(*smsSignMode);
    }
    if (telX) {
      res["TelX"] = boost::any(*telX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallAbility") != m.end() && !m["CallAbility"].empty()) {
      callAbility = make_shared<string>(boost::any_cast<string>(m["CallAbility"]));
    }
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("GNFlag") != m.end() && !m["GNFlag"].empty()) {
      GNFlag = make_shared<string>(boost::any_cast<string>(m["GNFlag"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SequenceCalls") != m.end() && !m["SequenceCalls"].empty()) {
      sequenceCallsShrink = make_shared<string>(boost::any_cast<string>(m["SequenceCalls"]));
    }
    if (m.find("SequenceMode") != m.end() && !m["SequenceMode"].empty()) {
      sequenceMode = make_shared<string>(boost::any_cast<string>(m["SequenceMode"]));
    }
    if (m.find("SmsAbility") != m.end() && !m["SmsAbility"].empty()) {
      smsAbility = make_shared<string>(boost::any_cast<string>(m["SmsAbility"]));
    }
    if (m.find("SmsSignMode") != m.end() && !m["SmsSignMode"].empty()) {
      smsSignMode = make_shared<string>(boost::any_cast<string>(m["SmsSignMode"]));
    }
    if (m.find("TelX") != m.end() && !m["TelX"].empty()) {
      telX = make_shared<string>(boost::any_cast<string>(m["TelX"]));
    }
  }


  virtual ~ConfigXShrinkRequest() = default;
};
class ConfigXResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  ConfigXResponseBodyData() {}

  explicit ConfigXResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConfigXResponseBodyData() = default;
};
class ConfigXResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ConfigXResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConfigXResponseBody() {}

  explicit ConfigXResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ConfigXResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ConfigXResponseBodyData>(model1);
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


  virtual ~ConfigXResponseBody() = default;
};
class ConfigXResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfigXResponseBody> body{};

  ConfigXResponse() {}

  explicit ConfigXResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfigXResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfigXResponseBody>(model1);
      }
    }
  }


  virtual ~ConfigXResponse() = default;
};
class CreateAxgGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> numbers{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateAxgGroupRequest() {}

  explicit CreateAxgGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbers = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
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


  virtual ~CreateAxgGroupRequest() = default;
};
class CreateAxgGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> groupId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateAxgGroupResponseBody() {}

  explicit CreateAxgGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAxgGroupResponseBody() = default;
};
class CreateAxgGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAxgGroupResponseBody> body{};

  CreateAxgGroupResponse() {}

  explicit CreateAxgGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAxgGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAxgGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAxgGroupResponse() = default;
};
class CreatePhoneNoAReportRequest : public Darabonba::Model {
public:
  shared_ptr<long> ANoWhiteGroupId{};
  shared_ptr<string> custName{};
  shared_ptr<string> documentNumber{};
  shared_ptr<long> documentType{};
  shared_ptr<string> idCardAlivePhoto{};
  shared_ptr<string> idCardBackPhoto{};
  shared_ptr<string> idCardFrontPhoto{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreatePhoneNoAReportRequest() {}

  explicit CreatePhoneNoAReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ANoWhiteGroupId) {
      res["ANoWhiteGroupId"] = boost::any(*ANoWhiteGroupId);
    }
    if (custName) {
      res["CustName"] = boost::any(*custName);
    }
    if (documentNumber) {
      res["DocumentNumber"] = boost::any(*documentNumber);
    }
    if (documentType) {
      res["DocumentType"] = boost::any(*documentType);
    }
    if (idCardAlivePhoto) {
      res["IdCardAlivePhoto"] = boost::any(*idCardAlivePhoto);
    }
    if (idCardBackPhoto) {
      res["IdCardBackPhoto"] = boost::any(*idCardBackPhoto);
    }
    if (idCardFrontPhoto) {
      res["IdCardFrontPhoto"] = boost::any(*idCardFrontPhoto);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
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
    if (m.find("ANoWhiteGroupId") != m.end() && !m["ANoWhiteGroupId"].empty()) {
      ANoWhiteGroupId = make_shared<long>(boost::any_cast<long>(m["ANoWhiteGroupId"]));
    }
    if (m.find("CustName") != m.end() && !m["CustName"].empty()) {
      custName = make_shared<string>(boost::any_cast<string>(m["CustName"]));
    }
    if (m.find("DocumentNumber") != m.end() && !m["DocumentNumber"].empty()) {
      documentNumber = make_shared<string>(boost::any_cast<string>(m["DocumentNumber"]));
    }
    if (m.find("DocumentType") != m.end() && !m["DocumentType"].empty()) {
      documentType = make_shared<long>(boost::any_cast<long>(m["DocumentType"]));
    }
    if (m.find("IdCardAlivePhoto") != m.end() && !m["IdCardAlivePhoto"].empty()) {
      idCardAlivePhoto = make_shared<string>(boost::any_cast<string>(m["IdCardAlivePhoto"]));
    }
    if (m.find("IdCardBackPhoto") != m.end() && !m["IdCardBackPhoto"].empty()) {
      idCardBackPhoto = make_shared<string>(boost::any_cast<string>(m["IdCardBackPhoto"]));
    }
    if (m.find("IdCardFrontPhoto") != m.end() && !m["IdCardFrontPhoto"].empty()) {
      idCardFrontPhoto = make_shared<string>(boost::any_cast<string>(m["IdCardFrontPhoto"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
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


  virtual ~CreatePhoneNoAReportRequest() = default;
};
class CreatePhoneNoAReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> createResult{};
  shared_ptr<long> failType{};

  CreatePhoneNoAReportResponseBodyData() {}

  explicit CreatePhoneNoAReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createResult) {
      res["CreateResult"] = boost::any(*createResult);
    }
    if (failType) {
      res["FailType"] = boost::any(*failType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateResult") != m.end() && !m["CreateResult"].empty()) {
      createResult = make_shared<bool>(boost::any_cast<bool>(m["CreateResult"]));
    }
    if (m.find("FailType") != m.end() && !m["FailType"].empty()) {
      failType = make_shared<long>(boost::any_cast<long>(m["FailType"]));
    }
  }


  virtual ~CreatePhoneNoAReportResponseBodyData() = default;
};
class CreatePhoneNoAReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CreatePhoneNoAReportResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePhoneNoAReportResponseBody() {}

  explicit CreatePhoneNoAReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreatePhoneNoAReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePhoneNoAReportResponseBodyData>(model1);
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


  virtual ~CreatePhoneNoAReportResponseBody() = default;
};
class CreatePhoneNoAReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePhoneNoAReportResponseBody> body{};

  CreatePhoneNoAReportResponse() {}

  explicit CreatePhoneNoAReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePhoneNoAReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePhoneNoAReportResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePhoneNoAReportResponse() = default;
};
class CreatePickUpWaybillRequestConsigneeAddress : public Darabonba::Model {
public:
  shared_ptr<string> addressDetail{};
  shared_ptr<string> areaName{};
  shared_ptr<string> cityName{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> townName{};

  CreatePickUpWaybillRequestConsigneeAddress() {}

  explicit CreatePickUpWaybillRequestConsigneeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressDetail) {
      res["AddressDetail"] = boost::any(*addressDetail);
    }
    if (areaName) {
      res["AreaName"] = boost::any(*areaName);
    }
    if (cityName) {
      res["CityName"] = boost::any(*cityName);
    }
    if (provinceName) {
      res["ProvinceName"] = boost::any(*provinceName);
    }
    if (townName) {
      res["TownName"] = boost::any(*townName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressDetail") != m.end() && !m["AddressDetail"].empty()) {
      addressDetail = make_shared<string>(boost::any_cast<string>(m["AddressDetail"]));
    }
    if (m.find("AreaName") != m.end() && !m["AreaName"].empty()) {
      areaName = make_shared<string>(boost::any_cast<string>(m["AreaName"]));
    }
    if (m.find("CityName") != m.end() && !m["CityName"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["CityName"]));
    }
    if (m.find("ProvinceName") != m.end() && !m["ProvinceName"].empty()) {
      provinceName = make_shared<string>(boost::any_cast<string>(m["ProvinceName"]));
    }
    if (m.find("TownName") != m.end() && !m["TownName"].empty()) {
      townName = make_shared<string>(boost::any_cast<string>(m["TownName"]));
    }
  }


  virtual ~CreatePickUpWaybillRequestConsigneeAddress() = default;
};
class CreatePickUpWaybillRequestGoodsInfos : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> quantity{};
  shared_ptr<string> weight{};

  CreatePickUpWaybillRequestGoodsInfos() {}

  explicit CreatePickUpWaybillRequestGoodsInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
    }
  }


  virtual ~CreatePickUpWaybillRequestGoodsInfos() = default;
};
class CreatePickUpWaybillRequestSendAddress : public Darabonba::Model {
public:
  shared_ptr<string> addressDetail{};
  shared_ptr<string> areaName{};
  shared_ptr<string> cityName{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> townName{};

  CreatePickUpWaybillRequestSendAddress() {}

  explicit CreatePickUpWaybillRequestSendAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressDetail) {
      res["AddressDetail"] = boost::any(*addressDetail);
    }
    if (areaName) {
      res["AreaName"] = boost::any(*areaName);
    }
    if (cityName) {
      res["CityName"] = boost::any(*cityName);
    }
    if (provinceName) {
      res["ProvinceName"] = boost::any(*provinceName);
    }
    if (townName) {
      res["TownName"] = boost::any(*townName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressDetail") != m.end() && !m["AddressDetail"].empty()) {
      addressDetail = make_shared<string>(boost::any_cast<string>(m["AddressDetail"]));
    }
    if (m.find("AreaName") != m.end() && !m["AreaName"].empty()) {
      areaName = make_shared<string>(boost::any_cast<string>(m["AreaName"]));
    }
    if (m.find("CityName") != m.end() && !m["CityName"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["CityName"]));
    }
    if (m.find("ProvinceName") != m.end() && !m["ProvinceName"].empty()) {
      provinceName = make_shared<string>(boost::any_cast<string>(m["ProvinceName"]));
    }
    if (m.find("TownName") != m.end() && !m["TownName"].empty()) {
      townName = make_shared<string>(boost::any_cast<string>(m["TownName"]));
    }
  }


  virtual ~CreatePickUpWaybillRequestSendAddress() = default;
};
class CreatePickUpWaybillRequest : public Darabonba::Model {
public:
  shared_ptr<string> appointGotEndTime{};
  shared_ptr<string> appointGotStartTime{};
  shared_ptr<long> bizType{};
  shared_ptr<CreatePickUpWaybillRequestConsigneeAddress> consigneeAddress{};
  shared_ptr<string> consigneeMobile{};
  shared_ptr<string> consigneeName{};
  shared_ptr<string> consigneePhone{};
  shared_ptr<string> cpCode{};
  shared_ptr<vector<CreatePickUpWaybillRequestGoodsInfos>> goodsInfos{};
  shared_ptr<string> orderChannels{};
  shared_ptr<string> outerOrderCode{};
  shared_ptr<string> remark{};
  shared_ptr<CreatePickUpWaybillRequestSendAddress> sendAddress{};
  shared_ptr<string> sendMobile{};
  shared_ptr<string> sendName{};
  shared_ptr<string> sendPhone{};

  CreatePickUpWaybillRequest() {}

  explicit CreatePickUpWaybillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointGotEndTime) {
      res["AppointGotEndTime"] = boost::any(*appointGotEndTime);
    }
    if (appointGotStartTime) {
      res["AppointGotStartTime"] = boost::any(*appointGotStartTime);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (consigneeAddress) {
      res["ConsigneeAddress"] = consigneeAddress ? boost::any(consigneeAddress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (consigneeMobile) {
      res["ConsigneeMobile"] = boost::any(*consigneeMobile);
    }
    if (consigneeName) {
      res["ConsigneeName"] = boost::any(*consigneeName);
    }
    if (consigneePhone) {
      res["ConsigneePhone"] = boost::any(*consigneePhone);
    }
    if (cpCode) {
      res["CpCode"] = boost::any(*cpCode);
    }
    if (goodsInfos) {
      vector<boost::any> temp1;
      for(auto item1:*goodsInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GoodsInfos"] = boost::any(temp1);
    }
    if (orderChannels) {
      res["OrderChannels"] = boost::any(*orderChannels);
    }
    if (outerOrderCode) {
      res["OuterOrderCode"] = boost::any(*outerOrderCode);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (sendAddress) {
      res["SendAddress"] = sendAddress ? boost::any(sendAddress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sendMobile) {
      res["SendMobile"] = boost::any(*sendMobile);
    }
    if (sendName) {
      res["SendName"] = boost::any(*sendName);
    }
    if (sendPhone) {
      res["SendPhone"] = boost::any(*sendPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppointGotEndTime") != m.end() && !m["AppointGotEndTime"].empty()) {
      appointGotEndTime = make_shared<string>(boost::any_cast<string>(m["AppointGotEndTime"]));
    }
    if (m.find("AppointGotStartTime") != m.end() && !m["AppointGotStartTime"].empty()) {
      appointGotStartTime = make_shared<string>(boost::any_cast<string>(m["AppointGotStartTime"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<long>(boost::any_cast<long>(m["BizType"]));
    }
    if (m.find("ConsigneeAddress") != m.end() && !m["ConsigneeAddress"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsigneeAddress"].type()) {
        CreatePickUpWaybillRequestConsigneeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsigneeAddress"]));
        consigneeAddress = make_shared<CreatePickUpWaybillRequestConsigneeAddress>(model1);
      }
    }
    if (m.find("ConsigneeMobile") != m.end() && !m["ConsigneeMobile"].empty()) {
      consigneeMobile = make_shared<string>(boost::any_cast<string>(m["ConsigneeMobile"]));
    }
    if (m.find("ConsigneeName") != m.end() && !m["ConsigneeName"].empty()) {
      consigneeName = make_shared<string>(boost::any_cast<string>(m["ConsigneeName"]));
    }
    if (m.find("ConsigneePhone") != m.end() && !m["ConsigneePhone"].empty()) {
      consigneePhone = make_shared<string>(boost::any_cast<string>(m["ConsigneePhone"]));
    }
    if (m.find("CpCode") != m.end() && !m["CpCode"].empty()) {
      cpCode = make_shared<string>(boost::any_cast<string>(m["CpCode"]));
    }
    if (m.find("GoodsInfos") != m.end() && !m["GoodsInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["GoodsInfos"].type()) {
        vector<CreatePickUpWaybillRequestGoodsInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GoodsInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePickUpWaybillRequestGoodsInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        goodsInfos = make_shared<vector<CreatePickUpWaybillRequestGoodsInfos>>(expect1);
      }
    }
    if (m.find("OrderChannels") != m.end() && !m["OrderChannels"].empty()) {
      orderChannels = make_shared<string>(boost::any_cast<string>(m["OrderChannels"]));
    }
    if (m.find("OuterOrderCode") != m.end() && !m["OuterOrderCode"].empty()) {
      outerOrderCode = make_shared<string>(boost::any_cast<string>(m["OuterOrderCode"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("SendAddress") != m.end() && !m["SendAddress"].empty()) {
      if (typeid(map<string, boost::any>) == m["SendAddress"].type()) {
        CreatePickUpWaybillRequestSendAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SendAddress"]));
        sendAddress = make_shared<CreatePickUpWaybillRequestSendAddress>(model1);
      }
    }
    if (m.find("SendMobile") != m.end() && !m["SendMobile"].empty()) {
      sendMobile = make_shared<string>(boost::any_cast<string>(m["SendMobile"]));
    }
    if (m.find("SendName") != m.end() && !m["SendName"].empty()) {
      sendName = make_shared<string>(boost::any_cast<string>(m["SendName"]));
    }
    if (m.find("SendPhone") != m.end() && !m["SendPhone"].empty()) {
      sendPhone = make_shared<string>(boost::any_cast<string>(m["SendPhone"]));
    }
  }


  virtual ~CreatePickUpWaybillRequest() = default;
};
class CreatePickUpWaybillShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appointGotEndTime{};
  shared_ptr<string> appointGotStartTime{};
  shared_ptr<long> bizType{};
  shared_ptr<string> consigneeAddressShrink{};
  shared_ptr<string> consigneeMobile{};
  shared_ptr<string> consigneeName{};
  shared_ptr<string> consigneePhone{};
  shared_ptr<string> cpCode{};
  shared_ptr<string> goodsInfosShrink{};
  shared_ptr<string> orderChannels{};
  shared_ptr<string> outerOrderCode{};
  shared_ptr<string> remark{};
  shared_ptr<string> sendAddressShrink{};
  shared_ptr<string> sendMobile{};
  shared_ptr<string> sendName{};
  shared_ptr<string> sendPhone{};

  CreatePickUpWaybillShrinkRequest() {}

  explicit CreatePickUpWaybillShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointGotEndTime) {
      res["AppointGotEndTime"] = boost::any(*appointGotEndTime);
    }
    if (appointGotStartTime) {
      res["AppointGotStartTime"] = boost::any(*appointGotStartTime);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (consigneeAddressShrink) {
      res["ConsigneeAddress"] = boost::any(*consigneeAddressShrink);
    }
    if (consigneeMobile) {
      res["ConsigneeMobile"] = boost::any(*consigneeMobile);
    }
    if (consigneeName) {
      res["ConsigneeName"] = boost::any(*consigneeName);
    }
    if (consigneePhone) {
      res["ConsigneePhone"] = boost::any(*consigneePhone);
    }
    if (cpCode) {
      res["CpCode"] = boost::any(*cpCode);
    }
    if (goodsInfosShrink) {
      res["GoodsInfos"] = boost::any(*goodsInfosShrink);
    }
    if (orderChannels) {
      res["OrderChannels"] = boost::any(*orderChannels);
    }
    if (outerOrderCode) {
      res["OuterOrderCode"] = boost::any(*outerOrderCode);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (sendAddressShrink) {
      res["SendAddress"] = boost::any(*sendAddressShrink);
    }
    if (sendMobile) {
      res["SendMobile"] = boost::any(*sendMobile);
    }
    if (sendName) {
      res["SendName"] = boost::any(*sendName);
    }
    if (sendPhone) {
      res["SendPhone"] = boost::any(*sendPhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppointGotEndTime") != m.end() && !m["AppointGotEndTime"].empty()) {
      appointGotEndTime = make_shared<string>(boost::any_cast<string>(m["AppointGotEndTime"]));
    }
    if (m.find("AppointGotStartTime") != m.end() && !m["AppointGotStartTime"].empty()) {
      appointGotStartTime = make_shared<string>(boost::any_cast<string>(m["AppointGotStartTime"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<long>(boost::any_cast<long>(m["BizType"]));
    }
    if (m.find("ConsigneeAddress") != m.end() && !m["ConsigneeAddress"].empty()) {
      consigneeAddressShrink = make_shared<string>(boost::any_cast<string>(m["ConsigneeAddress"]));
    }
    if (m.find("ConsigneeMobile") != m.end() && !m["ConsigneeMobile"].empty()) {
      consigneeMobile = make_shared<string>(boost::any_cast<string>(m["ConsigneeMobile"]));
    }
    if (m.find("ConsigneeName") != m.end() && !m["ConsigneeName"].empty()) {
      consigneeName = make_shared<string>(boost::any_cast<string>(m["ConsigneeName"]));
    }
    if (m.find("ConsigneePhone") != m.end() && !m["ConsigneePhone"].empty()) {
      consigneePhone = make_shared<string>(boost::any_cast<string>(m["ConsigneePhone"]));
    }
    if (m.find("CpCode") != m.end() && !m["CpCode"].empty()) {
      cpCode = make_shared<string>(boost::any_cast<string>(m["CpCode"]));
    }
    if (m.find("GoodsInfos") != m.end() && !m["GoodsInfos"].empty()) {
      goodsInfosShrink = make_shared<string>(boost::any_cast<string>(m["GoodsInfos"]));
    }
    if (m.find("OrderChannels") != m.end() && !m["OrderChannels"].empty()) {
      orderChannels = make_shared<string>(boost::any_cast<string>(m["OrderChannels"]));
    }
    if (m.find("OuterOrderCode") != m.end() && !m["OuterOrderCode"].empty()) {
      outerOrderCode = make_shared<string>(boost::any_cast<string>(m["OuterOrderCode"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("SendAddress") != m.end() && !m["SendAddress"].empty()) {
      sendAddressShrink = make_shared<string>(boost::any_cast<string>(m["SendAddress"]));
    }
    if (m.find("SendMobile") != m.end() && !m["SendMobile"].empty()) {
      sendMobile = make_shared<string>(boost::any_cast<string>(m["SendMobile"]));
    }
    if (m.find("SendName") != m.end() && !m["SendName"].empty()) {
      sendName = make_shared<string>(boost::any_cast<string>(m["SendName"]));
    }
    if (m.find("SendPhone") != m.end() && !m["SendPhone"].empty()) {
      sendPhone = make_shared<string>(boost::any_cast<string>(m["SendPhone"]));
    }
  }


  virtual ~CreatePickUpWaybillShrinkRequest() = default;
};
class CreatePickUpWaybillResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cpCode{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> gotCode{};
  shared_ptr<string> mailNo{};
  shared_ptr<string> success{};

  CreatePickUpWaybillResponseBodyData() {}

  explicit CreatePickUpWaybillResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpCode) {
      res["CpCode"] = boost::any(*cpCode);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (gotCode) {
      res["GotCode"] = boost::any(*gotCode);
    }
    if (mailNo) {
      res["MailNo"] = boost::any(*mailNo);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpCode") != m.end() && !m["CpCode"].empty()) {
      cpCode = make_shared<string>(boost::any_cast<string>(m["CpCode"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("GotCode") != m.end() && !m["GotCode"].empty()) {
      gotCode = make_shared<string>(boost::any_cast<string>(m["GotCode"]));
    }
    if (m.find("MailNo") != m.end() && !m["MailNo"].empty()) {
      mailNo = make_shared<string>(boost::any_cast<string>(m["MailNo"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~CreatePickUpWaybillResponseBodyData() = default;
};
class CreatePickUpWaybillResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePickUpWaybillResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreatePickUpWaybillResponseBody() {}

  explicit CreatePickUpWaybillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreatePickUpWaybillResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePickUpWaybillResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePickUpWaybillResponseBody() = default;
};
class CreatePickUpWaybillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePickUpWaybillResponseBody> body{};

  CreatePickUpWaybillResponse() {}

  explicit CreatePickUpWaybillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePickUpWaybillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePickUpWaybillResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePickUpWaybillResponse() = default;
};
class CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo : public Darabonba::Model {
public:
  shared_ptr<string> addressDetail{};
  shared_ptr<string> areaName{};
  shared_ptr<string> cityName{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> townName{};

  CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo() {}

  explicit CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressDetail) {
      res["AddressDetail"] = boost::any(*addressDetail);
    }
    if (areaName) {
      res["AreaName"] = boost::any(*areaName);
    }
    if (cityName) {
      res["CityName"] = boost::any(*cityName);
    }
    if (provinceName) {
      res["ProvinceName"] = boost::any(*provinceName);
    }
    if (townName) {
      res["TownName"] = boost::any(*townName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressDetail") != m.end() && !m["AddressDetail"].empty()) {
      addressDetail = make_shared<string>(boost::any_cast<string>(m["AddressDetail"]));
    }
    if (m.find("AreaName") != m.end() && !m["AreaName"].empty()) {
      areaName = make_shared<string>(boost::any_cast<string>(m["AreaName"]));
    }
    if (m.find("CityName") != m.end() && !m["CityName"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["CityName"]));
    }
    if (m.find("ProvinceName") != m.end() && !m["ProvinceName"].empty()) {
      provinceName = make_shared<string>(boost::any_cast<string>(m["ProvinceName"]));
    }
    if (m.find("TownName") != m.end() && !m["TownName"].empty()) {
      townName = make_shared<string>(boost::any_cast<string>(m["TownName"]));
    }
  }


  virtual ~CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo() = default;
};
class CreatePickUpWaybillPreQueryRequestConsigneeInfo : public Darabonba::Model {
public:
  shared_ptr<CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo> addressInfo{};
  shared_ptr<string> mobile{};
  shared_ptr<string> name{};

  CreatePickUpWaybillPreQueryRequestConsigneeInfo() {}

  explicit CreatePickUpWaybillPreQueryRequestConsigneeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressInfo) {
      res["AddressInfo"] = addressInfo ? boost::any(addressInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressInfo") != m.end() && !m["AddressInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressInfo"].type()) {
        CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressInfo"]));
        addressInfo = make_shared<CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo>(model1);
      }
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreatePickUpWaybillPreQueryRequestConsigneeInfo() = default;
};
class CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo : public Darabonba::Model {
public:
  shared_ptr<string> addressDetail{};
  shared_ptr<string> areaName{};
  shared_ptr<string> cityName{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> townName{};

  CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo() {}

  explicit CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressDetail) {
      res["AddressDetail"] = boost::any(*addressDetail);
    }
    if (areaName) {
      res["AreaName"] = boost::any(*areaName);
    }
    if (cityName) {
      res["CityName"] = boost::any(*cityName);
    }
    if (provinceName) {
      res["ProvinceName"] = boost::any(*provinceName);
    }
    if (townName) {
      res["TownName"] = boost::any(*townName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressDetail") != m.end() && !m["AddressDetail"].empty()) {
      addressDetail = make_shared<string>(boost::any_cast<string>(m["AddressDetail"]));
    }
    if (m.find("AreaName") != m.end() && !m["AreaName"].empty()) {
      areaName = make_shared<string>(boost::any_cast<string>(m["AreaName"]));
    }
    if (m.find("CityName") != m.end() && !m["CityName"].empty()) {
      cityName = make_shared<string>(boost::any_cast<string>(m["CityName"]));
    }
    if (m.find("ProvinceName") != m.end() && !m["ProvinceName"].empty()) {
      provinceName = make_shared<string>(boost::any_cast<string>(m["ProvinceName"]));
    }
    if (m.find("TownName") != m.end() && !m["TownName"].empty()) {
      townName = make_shared<string>(boost::any_cast<string>(m["TownName"]));
    }
  }


  virtual ~CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo() = default;
};
class CreatePickUpWaybillPreQueryRequestSenderInfo : public Darabonba::Model {
public:
  shared_ptr<CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo> addressInfo{};
  shared_ptr<string> mobile{};
  shared_ptr<string> name{};

  CreatePickUpWaybillPreQueryRequestSenderInfo() {}

  explicit CreatePickUpWaybillPreQueryRequestSenderInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressInfo) {
      res["AddressInfo"] = addressInfo ? boost::any(addressInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressInfo") != m.end() && !m["AddressInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddressInfo"].type()) {
        CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddressInfo"]));
        addressInfo = make_shared<CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo>(model1);
      }
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreatePickUpWaybillPreQueryRequestSenderInfo() = default;
};
class CreatePickUpWaybillPreQueryRequest : public Darabonba::Model {
public:
  shared_ptr<CreatePickUpWaybillPreQueryRequestConsigneeInfo> consigneeInfo{};
  shared_ptr<string> cpCode{};
  shared_ptr<string> orderChannels{};
  shared_ptr<string> outerOrderCode{};
  shared_ptr<string> preWeight{};
  shared_ptr<CreatePickUpWaybillPreQueryRequestSenderInfo> senderInfo{};

  CreatePickUpWaybillPreQueryRequest() {}

  explicit CreatePickUpWaybillPreQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consigneeInfo) {
      res["ConsigneeInfo"] = consigneeInfo ? boost::any(consigneeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cpCode) {
      res["CpCode"] = boost::any(*cpCode);
    }
    if (orderChannels) {
      res["OrderChannels"] = boost::any(*orderChannels);
    }
    if (outerOrderCode) {
      res["OuterOrderCode"] = boost::any(*outerOrderCode);
    }
    if (preWeight) {
      res["PreWeight"] = boost::any(*preWeight);
    }
    if (senderInfo) {
      res["SenderInfo"] = senderInfo ? boost::any(senderInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsigneeInfo") != m.end() && !m["ConsigneeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsigneeInfo"].type()) {
        CreatePickUpWaybillPreQueryRequestConsigneeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsigneeInfo"]));
        consigneeInfo = make_shared<CreatePickUpWaybillPreQueryRequestConsigneeInfo>(model1);
      }
    }
    if (m.find("CpCode") != m.end() && !m["CpCode"].empty()) {
      cpCode = make_shared<string>(boost::any_cast<string>(m["CpCode"]));
    }
    if (m.find("OrderChannels") != m.end() && !m["OrderChannels"].empty()) {
      orderChannels = make_shared<string>(boost::any_cast<string>(m["OrderChannels"]));
    }
    if (m.find("OuterOrderCode") != m.end() && !m["OuterOrderCode"].empty()) {
      outerOrderCode = make_shared<string>(boost::any_cast<string>(m["OuterOrderCode"]));
    }
    if (m.find("PreWeight") != m.end() && !m["PreWeight"].empty()) {
      preWeight = make_shared<string>(boost::any_cast<string>(m["PreWeight"]));
    }
    if (m.find("SenderInfo") != m.end() && !m["SenderInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SenderInfo"].type()) {
        CreatePickUpWaybillPreQueryRequestSenderInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SenderInfo"]));
        senderInfo = make_shared<CreatePickUpWaybillPreQueryRequestSenderInfo>(model1);
      }
    }
  }


  virtual ~CreatePickUpWaybillPreQueryRequest() = default;
};
class CreatePickUpWaybillPreQueryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> consigneeInfoShrink{};
  shared_ptr<string> cpCode{};
  shared_ptr<string> orderChannels{};
  shared_ptr<string> outerOrderCode{};
  shared_ptr<string> preWeight{};
  shared_ptr<string> senderInfoShrink{};

  CreatePickUpWaybillPreQueryShrinkRequest() {}

  explicit CreatePickUpWaybillPreQueryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consigneeInfoShrink) {
      res["ConsigneeInfo"] = boost::any(*consigneeInfoShrink);
    }
    if (cpCode) {
      res["CpCode"] = boost::any(*cpCode);
    }
    if (orderChannels) {
      res["OrderChannels"] = boost::any(*orderChannels);
    }
    if (outerOrderCode) {
      res["OuterOrderCode"] = boost::any(*outerOrderCode);
    }
    if (preWeight) {
      res["PreWeight"] = boost::any(*preWeight);
    }
    if (senderInfoShrink) {
      res["SenderInfo"] = boost::any(*senderInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsigneeInfo") != m.end() && !m["ConsigneeInfo"].empty()) {
      consigneeInfoShrink = make_shared<string>(boost::any_cast<string>(m["ConsigneeInfo"]));
    }
    if (m.find("CpCode") != m.end() && !m["CpCode"].empty()) {
      cpCode = make_shared<string>(boost::any_cast<string>(m["CpCode"]));
    }
    if (m.find("OrderChannels") != m.end() && !m["OrderChannels"].empty()) {
      orderChannels = make_shared<string>(boost::any_cast<string>(m["OrderChannels"]));
    }
    if (m.find("OuterOrderCode") != m.end() && !m["OuterOrderCode"].empty()) {
      outerOrderCode = make_shared<string>(boost::any_cast<string>(m["OuterOrderCode"]));
    }
    if (m.find("PreWeight") != m.end() && !m["PreWeight"].empty()) {
      preWeight = make_shared<string>(boost::any_cast<string>(m["PreWeight"]));
    }
    if (m.find("SenderInfo") != m.end() && !m["SenderInfo"].empty()) {
      senderInfoShrink = make_shared<string>(boost::any_cast<string>(m["SenderInfo"]));
    }
  }


  virtual ~CreatePickUpWaybillPreQueryShrinkRequest() = default;
};
class CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> selectDisableTip{};
  shared_ptr<bool> selectable{};
  shared_ptr<string> startTime{};

  CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList() {}

  explicit CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (selectDisableTip) {
      res["SelectDisableTip"] = boost::any(*selectDisableTip);
    }
    if (selectable) {
      res["Selectable"] = boost::any(*selectable);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("SelectDisableTip") != m.end() && !m["SelectDisableTip"].empty()) {
      selectDisableTip = make_shared<string>(boost::any_cast<string>(m["SelectDisableTip"]));
    }
    if (m.find("Selectable") != m.end() && !m["Selectable"].empty()) {
      selectable = make_shared<bool>(boost::any_cast<bool>(m["Selectable"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList() = default;
};
class CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<bool> dateSelectable{};
  shared_ptr<vector<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList>> timeList{};

  CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes() {}

  explicit CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (dateSelectable) {
      res["DateSelectable"] = boost::any(*dateSelectable);
    }
    if (timeList) {
      vector<boost::any> temp1;
      for(auto item1:*timeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("DateSelectable") != m.end() && !m["DateSelectable"].empty()) {
      dateSelectable = make_shared<bool>(boost::any_cast<bool>(m["DateSelectable"]));
    }
    if (m.find("TimeList") != m.end() && !m["TimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeList"].type()) {
        vector<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeList = make_shared<vector<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimesTimeList>>(expect1);
      }
    }
  }


  virtual ~CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes() = default;
};
class CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> selectDisableTip{};
  shared_ptr<bool> selectable{};

  CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime() {}

  explicit CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (selectDisableTip) {
      res["SelectDisableTip"] = boost::any(*selectDisableTip);
    }
    if (selectable) {
      res["Selectable"] = boost::any(*selectable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SelectDisableTip") != m.end() && !m["SelectDisableTip"].empty()) {
      selectDisableTip = make_shared<string>(boost::any_cast<string>(m["SelectDisableTip"]));
    }
    if (m.find("Selectable") != m.end() && !m["Selectable"].empty()) {
      selectable = make_shared<bool>(boost::any_cast<bool>(m["Selectable"]));
    }
  }


  virtual ~CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime() = default;
};
class CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList : public Darabonba::Model {
public:
  shared_ptr<vector<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes>> appointTimes{};
  shared_ptr<string> prePrice{};
  shared_ptr<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime> realTime{};

  CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList() {}

  explicit CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appointTimes) {
      vector<boost::any> temp1;
      for(auto item1:*appointTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppointTimes"] = boost::any(temp1);
    }
    if (prePrice) {
      res["PrePrice"] = boost::any(*prePrice);
    }
    if (realTime) {
      res["RealTime"] = realTime ? boost::any(realTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppointTimes") != m.end() && !m["AppointTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["AppointTimes"].type()) {
        vector<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppointTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appointTimes = make_shared<vector<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListAppointTimes>>(expect1);
      }
    }
    if (m.find("PrePrice") != m.end() && !m["PrePrice"].empty()) {
      prePrice = make_shared<string>(boost::any_cast<string>(m["PrePrice"]));
    }
    if (m.find("RealTime") != m.end() && !m["RealTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealTime"].type()) {
        CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealTime"]));
        realTime = make_shared<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectListRealTime>(model1);
      }
    }
  }


  virtual ~CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList() = default;
};
class CreatePickUpWaybillPreQueryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList>> cpTimeSelectList{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  CreatePickUpWaybillPreQueryResponseBodyData() {}

  explicit CreatePickUpWaybillPreQueryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (cpTimeSelectList) {
      vector<boost::any> temp1;
      for(auto item1:*cpTimeSelectList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CpTimeSelectList"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("CpTimeSelectList") != m.end() && !m["CpTimeSelectList"].empty()) {
      if (typeid(vector<boost::any>) == m["CpTimeSelectList"].type()) {
        vector<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CpTimeSelectList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cpTimeSelectList = make_shared<vector<CreatePickUpWaybillPreQueryResponseBodyDataCpTimeSelectList>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePickUpWaybillPreQueryResponseBodyData() = default;
};
class CreatePickUpWaybillPreQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePickUpWaybillPreQueryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreatePickUpWaybillPreQueryResponseBody() {}

  explicit CreatePickUpWaybillPreQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreatePickUpWaybillPreQueryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePickUpWaybillPreQueryResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePickUpWaybillPreQueryResponseBody() = default;
};
class CreatePickUpWaybillPreQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePickUpWaybillPreQueryResponseBody> body{};

  CreatePickUpWaybillPreQueryResponse() {}

  explicit CreatePickUpWaybillPreQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePickUpWaybillPreQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePickUpWaybillPreQueryResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePickUpWaybillPreQueryResponse() = default;
};
class CreateSmsSignRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNo{};
  shared_ptr<long> callerParentId{};
  shared_ptr<string> callingNo{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateSmsSignRequest() {}

  explicit CreateSmsSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNo) {
      res["CalledNo"] = boost::any(*calledNo);
    }
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (callingNo) {
      res["CallingNo"] = boost::any(*callingNo);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
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
    if (m.find("CalledNo") != m.end() && !m["CalledNo"].empty()) {
      calledNo = make_shared<string>(boost::any_cast<string>(m["CalledNo"]));
    }
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CallingNo") != m.end() && !m["CallingNo"].empty()) {
      callingNo = make_shared<string>(boost::any_cast<string>(m["CallingNo"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateSmsSignRequest() = default;
};
class CreateSmsSignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> calledNoSign{};

  CreateSmsSignResponseBodyData() {}

  explicit CreateSmsSignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNoSign) {
      res["CalledNoSign"] = boost::any(*calledNoSign);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNoSign") != m.end() && !m["CalledNoSign"].empty()) {
      calledNoSign = make_shared<string>(boost::any_cast<string>(m["CalledNoSign"]));
    }
  }


  virtual ~CreateSmsSignResponseBodyData() = default;
};
class CreateSmsSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CreateSmsSignResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  CreateSmsSignResponseBody() {}

  explicit CreateSmsSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateSmsSignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateSmsSignResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSmsSignResponseBody() = default;
};
class CreateSmsSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSmsSignResponseBody> body{};

  CreateSmsSignResponse() {}

  explicit CreateSmsSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSmsSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSmsSignResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSmsSignResponse() = default;
};
class DeleteAxgGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteAxgGroupRequest() {}

  explicit DeleteAxgGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteAxgGroupRequest() = default;
};
class DeleteAxgGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteAxgGroupResponseBody() {}

  explicit DeleteAxgGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteAxgGroupResponseBody() = default;
};
class DeleteAxgGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAxgGroupResponseBody> body{};

  DeleteAxgGroupResponse() {}

  explicit DeleteAxgGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAxgGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAxgGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAxgGroupResponse() = default;
};
class DeleteSecretBlacklistRequest : public Darabonba::Model {
public:
  shared_ptr<string> blackNo{};
  shared_ptr<string> blackType{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> remark{};
  shared_ptr<string> wayControl{};

  DeleteSecretBlacklistRequest() {}

  explicit DeleteSecretBlacklistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackNo) {
      res["BlackNo"] = boost::any(*blackNo);
    }
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (wayControl) {
      res["WayControl"] = boost::any(*wayControl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackNo") != m.end() && !m["BlackNo"].empty()) {
      blackNo = make_shared<string>(boost::any_cast<string>(m["BlackNo"]));
    }
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("WayControl") != m.end() && !m["WayControl"].empty()) {
      wayControl = make_shared<string>(boost::any_cast<string>(m["WayControl"]));
    }
  }


  virtual ~DeleteSecretBlacklistRequest() = default;
};
class DeleteSecretBlacklistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteSecretBlacklistResponseBody() {}

  explicit DeleteSecretBlacklistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteSecretBlacklistResponseBody() = default;
};
class DeleteSecretBlacklistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSecretBlacklistResponseBody> body{};

  DeleteSecretBlacklistResponse() {}

  explicit DeleteSecretBlacklistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSecretBlacklistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSecretBlacklistResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSecretBlacklistResponse() = default;
};
class GetDyplsOSSInfoForUploadFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetDyplsOSSInfoForUploadFileRequest() {}

  explicit GetDyplsOSSInfoForUploadFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~GetDyplsOSSInfoForUploadFileRequest() = default;
};
class GetDyplsOSSInfoForUploadFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};
  shared_ptr<string> startPath{};

  GetDyplsOSSInfoForUploadFileResponseBodyData() {}

  explicit GetDyplsOSSInfoForUploadFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (startPath) {
      res["StartPath"] = boost::any(*startPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("StartPath") != m.end() && !m["StartPath"].empty()) {
      startPath = make_shared<string>(boost::any_cast<string>(m["StartPath"]));
    }
  }


  virtual ~GetDyplsOSSInfoForUploadFileResponseBodyData() = default;
};
class GetDyplsOSSInfoForUploadFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetDyplsOSSInfoForUploadFileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDyplsOSSInfoForUploadFileResponseBody() {}

  explicit GetDyplsOSSInfoForUploadFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDyplsOSSInfoForUploadFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDyplsOSSInfoForUploadFileResponseBodyData>(model1);
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


  virtual ~GetDyplsOSSInfoForUploadFileResponseBody() = default;
};
class GetDyplsOSSInfoForUploadFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDyplsOSSInfoForUploadFileResponseBody> body{};

  GetDyplsOSSInfoForUploadFileResponse() {}

  explicit GetDyplsOSSInfoForUploadFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDyplsOSSInfoForUploadFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDyplsOSSInfoForUploadFileResponseBody>(model1);
      }
    }
  }


  virtual ~GetDyplsOSSInfoForUploadFileResponse() = default;
};
class GetSecretAsrDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> callTime{};
  shared_ptr<string> poolKey{};

  GetSecretAsrDetailRequest() {}

  explicit GetSecretAsrDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["CallTime"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
  }


  virtual ~GetSecretAsrDetailRequest() = default;
};
class GetSecretAsrDetailResponseBodyDataSentences : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> channelId{};
  shared_ptr<string> emotionValue{};
  shared_ptr<long> endTime{};
  shared_ptr<long> silenceDuration{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> text{};

  GetSecretAsrDetailResponseBodyDataSentences() {}

  explicit GetSecretAsrDetailResponseBodyDataSentences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<string>(boost::any_cast<string>(m["EmotionValue"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<long>(boost::any_cast<long>(m["SilenceDuration"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~GetSecretAsrDetailResponseBodyDataSentences() = default;
};
class GetSecretAsrDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> bizDuration{};
  shared_ptr<string> businessId{};
  shared_ptr<string> businessKey{};
  shared_ptr<string> code{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetSecretAsrDetailResponseBodyDataSentences>> sentences{};
  shared_ptr<string> type{};

  GetSecretAsrDetailResponseBodyData() {}

  explicit GetSecretAsrDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDuration) {
      res["BizDuration"] = boost::any(*bizDuration);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (businessKey) {
      res["BusinessKey"] = boost::any(*businessKey);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sentences) {
      vector<boost::any> temp1;
      for(auto item1:*sentences){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sentences"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDuration") != m.end() && !m["BizDuration"].empty()) {
      bizDuration = make_shared<long>(boost::any_cast<long>(m["BizDuration"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("BusinessKey") != m.end() && !m["BusinessKey"].empty()) {
      businessKey = make_shared<string>(boost::any_cast<string>(m["BusinessKey"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Sentences") != m.end() && !m["Sentences"].empty()) {
      if (typeid(vector<boost::any>) == m["Sentences"].type()) {
        vector<GetSecretAsrDetailResponseBodyDataSentences> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sentences"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSecretAsrDetailResponseBodyDataSentences model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sentences = make_shared<vector<GetSecretAsrDetailResponseBodyDataSentences>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetSecretAsrDetailResponseBodyData() = default;
};
class GetSecretAsrDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetSecretAsrDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetSecretAsrDetailResponseBody() {}

  explicit GetSecretAsrDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSecretAsrDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSecretAsrDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSecretAsrDetailResponseBody() = default;
};
class GetSecretAsrDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSecretAsrDetailResponseBody> body{};

  GetSecretAsrDetailResponse() {}

  explicit GetSecretAsrDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSecretAsrDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecretAsrDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecretAsrDetailResponse() = default;
};
class GetTotalPublicUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> callTime{};
  shared_ptr<bool> checkSubs{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> partnerKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetTotalPublicUrlRequest() {}

  explicit GetTotalPublicUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    if (checkSubs) {
      res["CheckSubs"] = boost::any(*checkSubs);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (partnerKey) {
      res["PartnerKey"] = boost::any(*partnerKey);
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
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["CallTime"]));
    }
    if (m.find("CheckSubs") != m.end() && !m["CheckSubs"].empty()) {
      checkSubs = make_shared<bool>(boost::any_cast<bool>(m["CheckSubs"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PartnerKey") != m.end() && !m["PartnerKey"].empty()) {
      partnerKey = make_shared<string>(boost::any_cast<string>(m["PartnerKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetTotalPublicUrlRequest() = default;
};
class GetTotalPublicUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> phonePublicUrl{};
  shared_ptr<string> ringPublicUrl{};

  GetTotalPublicUrlResponseBodyData() {}

  explicit GetTotalPublicUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phonePublicUrl) {
      res["PhonePublicUrl"] = boost::any(*phonePublicUrl);
    }
    if (ringPublicUrl) {
      res["RingPublicUrl"] = boost::any(*ringPublicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhonePublicUrl") != m.end() && !m["PhonePublicUrl"].empty()) {
      phonePublicUrl = make_shared<string>(boost::any_cast<string>(m["PhonePublicUrl"]));
    }
    if (m.find("RingPublicUrl") != m.end() && !m["RingPublicUrl"].empty()) {
      ringPublicUrl = make_shared<string>(boost::any_cast<string>(m["RingPublicUrl"]));
    }
  }


  virtual ~GetTotalPublicUrlResponseBodyData() = default;
};
class GetTotalPublicUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTotalPublicUrlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTotalPublicUrlResponseBody() {}

  explicit GetTotalPublicUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTotalPublicUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTotalPublicUrlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTotalPublicUrlResponseBody() = default;
};
class GetTotalPublicUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTotalPublicUrlResponseBody> body{};

  GetTotalPublicUrlResponse() {}

  explicit GetTotalPublicUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTotalPublicUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTotalPublicUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetTotalPublicUrlResponse() = default;
};
class GetXConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> telX{};

  GetXConfigRequest() {}

  explicit GetXConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (telX) {
      res["TelX"] = boost::any(*telX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TelX") != m.end() && !m["TelX"].empty()) {
      telX = make_shared<string>(boost::any_cast<string>(m["TelX"]));
    }
  }


  virtual ~GetXConfigRequest() = default;
};
class GetXConfigResponseBodyDataReachJsons : public Darabonba::Model {
public:
  shared_ptr<string> callDir{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> receiveDir{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> tempId{};

  GetXConfigResponseBodyDataReachJsons() {}

  explicit GetXConfigResponseBodyDataReachJsons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callDir) {
      res["CallDir"] = boost::any(*callDir);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (receiveDir) {
      res["ReceiveDir"] = boost::any(*receiveDir);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (tempId) {
      res["TempId"] = boost::any(*tempId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallDir") != m.end() && !m["CallDir"].empty()) {
      callDir = make_shared<string>(boost::any_cast<string>(m["CallDir"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ReceiveDir") != m.end() && !m["ReceiveDir"].empty()) {
      receiveDir = make_shared<string>(boost::any_cast<string>(m["ReceiveDir"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("TempId") != m.end() && !m["TempId"].empty()) {
      tempId = make_shared<string>(boost::any_cast<string>(m["TempId"]));
    }
  }


  virtual ~GetXConfigResponseBodyDataReachJsons() = default;
};
class GetXConfigResponseBodyDataSequenceCalls : public Darabonba::Model {
public:
  shared_ptr<string> sequenceCallNoPlayCode{};
  shared_ptr<string> sequenceCalledNo{};
  shared_ptr<string> sequenceCalledPlayCode{};

  GetXConfigResponseBodyDataSequenceCalls() {}

  explicit GetXConfigResponseBodyDataSequenceCalls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sequenceCallNoPlayCode) {
      res["SequenceCallNoPlayCode"] = boost::any(*sequenceCallNoPlayCode);
    }
    if (sequenceCalledNo) {
      res["SequenceCalledNo"] = boost::any(*sequenceCalledNo);
    }
    if (sequenceCalledPlayCode) {
      res["SequenceCalledPlayCode"] = boost::any(*sequenceCalledPlayCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SequenceCallNoPlayCode") != m.end() && !m["SequenceCallNoPlayCode"].empty()) {
      sequenceCallNoPlayCode = make_shared<string>(boost::any_cast<string>(m["SequenceCallNoPlayCode"]));
    }
    if (m.find("SequenceCalledNo") != m.end() && !m["SequenceCalledNo"].empty()) {
      sequenceCalledNo = make_shared<string>(boost::any_cast<string>(m["SequenceCalledNo"]));
    }
    if (m.find("SequenceCalledPlayCode") != m.end() && !m["SequenceCalledPlayCode"].empty()) {
      sequenceCalledPlayCode = make_shared<string>(boost::any_cast<string>(m["SequenceCalledPlayCode"]));
    }
  }


  virtual ~GetXConfigResponseBodyDataSequenceCalls() = default;
};
class GetXConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> callAbility{};
  shared_ptr<string> GNFlag{};
  shared_ptr<vector<GetXConfigResponseBodyDataReachJsons>> reachJsons{};
  shared_ptr<vector<GetXConfigResponseBodyDataSequenceCalls>> sequenceCalls{};
  shared_ptr<string> sequenceEndTime{};
  shared_ptr<string> sequenceStartTime{};
  shared_ptr<string> smsAbility{};
  shared_ptr<string> smsSignMode{};

  GetXConfigResponseBodyData() {}

  explicit GetXConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callAbility) {
      res["CallAbility"] = boost::any(*callAbility);
    }
    if (GNFlag) {
      res["GNFlag"] = boost::any(*GNFlag);
    }
    if (reachJsons) {
      vector<boost::any> temp1;
      for(auto item1:*reachJsons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReachJsons"] = boost::any(temp1);
    }
    if (sequenceCalls) {
      vector<boost::any> temp1;
      for(auto item1:*sequenceCalls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SequenceCalls"] = boost::any(temp1);
    }
    if (sequenceEndTime) {
      res["SequenceEndTime"] = boost::any(*sequenceEndTime);
    }
    if (sequenceStartTime) {
      res["SequenceStartTime"] = boost::any(*sequenceStartTime);
    }
    if (smsAbility) {
      res["SmsAbility"] = boost::any(*smsAbility);
    }
    if (smsSignMode) {
      res["SmsSignMode"] = boost::any(*smsSignMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallAbility") != m.end() && !m["CallAbility"].empty()) {
      callAbility = make_shared<string>(boost::any_cast<string>(m["CallAbility"]));
    }
    if (m.find("GNFlag") != m.end() && !m["GNFlag"].empty()) {
      GNFlag = make_shared<string>(boost::any_cast<string>(m["GNFlag"]));
    }
    if (m.find("ReachJsons") != m.end() && !m["ReachJsons"].empty()) {
      if (typeid(vector<boost::any>) == m["ReachJsons"].type()) {
        vector<GetXConfigResponseBodyDataReachJsons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReachJsons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetXConfigResponseBodyDataReachJsons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reachJsons = make_shared<vector<GetXConfigResponseBodyDataReachJsons>>(expect1);
      }
    }
    if (m.find("SequenceCalls") != m.end() && !m["SequenceCalls"].empty()) {
      if (typeid(vector<boost::any>) == m["SequenceCalls"].type()) {
        vector<GetXConfigResponseBodyDataSequenceCalls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SequenceCalls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetXConfigResponseBodyDataSequenceCalls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sequenceCalls = make_shared<vector<GetXConfigResponseBodyDataSequenceCalls>>(expect1);
      }
    }
    if (m.find("SequenceEndTime") != m.end() && !m["SequenceEndTime"].empty()) {
      sequenceEndTime = make_shared<string>(boost::any_cast<string>(m["SequenceEndTime"]));
    }
    if (m.find("SequenceStartTime") != m.end() && !m["SequenceStartTime"].empty()) {
      sequenceStartTime = make_shared<string>(boost::any_cast<string>(m["SequenceStartTime"]));
    }
    if (m.find("SmsAbility") != m.end() && !m["SmsAbility"].empty()) {
      smsAbility = make_shared<string>(boost::any_cast<string>(m["SmsAbility"]));
    }
    if (m.find("SmsSignMode") != m.end() && !m["SmsSignMode"].empty()) {
      smsSignMode = make_shared<string>(boost::any_cast<string>(m["SmsSignMode"]));
    }
  }


  virtual ~GetXConfigResponseBodyData() = default;
};
class GetXConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetXConfigResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  GetXConfigResponseBody() {}

  explicit GetXConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetXConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetXConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetXConfigResponseBody() = default;
};
class GetXConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetXConfigResponseBody> body{};

  GetXConfigResponse() {}

  explicit GetXConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetXConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetXConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetXConfigResponse() = default;
};
class GetXDefaultConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> telX{};

  GetXDefaultConfigRequest() {}

  explicit GetXDefaultConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (telX) {
      res["TelX"] = boost::any(*telX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TelX") != m.end() && !m["TelX"].empty()) {
      telX = make_shared<string>(boost::any_cast<string>(m["TelX"]));
    }
  }


  virtual ~GetXDefaultConfigRequest() = default;
};
class GetXDefaultConfigResponseBodyDataReachJson : public Darabonba::Model {
public:
  shared_ptr<string> callDir{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> receiveDir{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> tempId{};

  GetXDefaultConfigResponseBodyDataReachJson() {}

  explicit GetXDefaultConfigResponseBodyDataReachJson(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callDir) {
      res["CallDir"] = boost::any(*callDir);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (receiveDir) {
      res["ReceiveDir"] = boost::any(*receiveDir);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (tempId) {
      res["TempId"] = boost::any(*tempId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallDir") != m.end() && !m["CallDir"].empty()) {
      callDir = make_shared<string>(boost::any_cast<string>(m["CallDir"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ReceiveDir") != m.end() && !m["ReceiveDir"].empty()) {
      receiveDir = make_shared<string>(boost::any_cast<string>(m["ReceiveDir"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("TempId") != m.end() && !m["TempId"].empty()) {
      tempId = make_shared<string>(boost::any_cast<string>(m["TempId"]));
    }
  }


  virtual ~GetXDefaultConfigResponseBodyDataReachJson() = default;
};
class GetXDefaultConfigResponseBodyDataSequenceCall : public Darabonba::Model {
public:
  shared_ptr<string> sequenceCallNoPlayCode{};
  shared_ptr<string> sequenceCalledNo{};
  shared_ptr<string> sequenceCalledPlayCode{};

  GetXDefaultConfigResponseBodyDataSequenceCall() {}

  explicit GetXDefaultConfigResponseBodyDataSequenceCall(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sequenceCallNoPlayCode) {
      res["SequenceCallNoPlayCode"] = boost::any(*sequenceCallNoPlayCode);
    }
    if (sequenceCalledNo) {
      res["SequenceCalledNo"] = boost::any(*sequenceCalledNo);
    }
    if (sequenceCalledPlayCode) {
      res["SequenceCalledPlayCode"] = boost::any(*sequenceCalledPlayCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SequenceCallNoPlayCode") != m.end() && !m["SequenceCallNoPlayCode"].empty()) {
      sequenceCallNoPlayCode = make_shared<string>(boost::any_cast<string>(m["SequenceCallNoPlayCode"]));
    }
    if (m.find("SequenceCalledNo") != m.end() && !m["SequenceCalledNo"].empty()) {
      sequenceCalledNo = make_shared<string>(boost::any_cast<string>(m["SequenceCalledNo"]));
    }
    if (m.find("SequenceCalledPlayCode") != m.end() && !m["SequenceCalledPlayCode"].empty()) {
      sequenceCalledPlayCode = make_shared<string>(boost::any_cast<string>(m["SequenceCalledPlayCode"]));
    }
  }


  virtual ~GetXDefaultConfigResponseBodyDataSequenceCall() = default;
};
class GetXDefaultConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> callAbility{};
  shared_ptr<string> GNFlag{};
  shared_ptr<vector<GetXDefaultConfigResponseBodyDataReachJson>> reachJson{};
  shared_ptr<vector<GetXDefaultConfigResponseBodyDataSequenceCall>> sequenceCall{};
  shared_ptr<string> sequenceEndTime{};
  shared_ptr<string> sequenceStartTime{};
  shared_ptr<string> smsAbility{};
  shared_ptr<string> smsSignMode{};

  GetXDefaultConfigResponseBodyData() {}

  explicit GetXDefaultConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callAbility) {
      res["CallAbility"] = boost::any(*callAbility);
    }
    if (GNFlag) {
      res["GNFlag"] = boost::any(*GNFlag);
    }
    if (reachJson) {
      vector<boost::any> temp1;
      for(auto item1:*reachJson){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReachJson"] = boost::any(temp1);
    }
    if (sequenceCall) {
      vector<boost::any> temp1;
      for(auto item1:*sequenceCall){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SequenceCall"] = boost::any(temp1);
    }
    if (sequenceEndTime) {
      res["SequenceEndTime"] = boost::any(*sequenceEndTime);
    }
    if (sequenceStartTime) {
      res["SequenceStartTime"] = boost::any(*sequenceStartTime);
    }
    if (smsAbility) {
      res["SmsAbility"] = boost::any(*smsAbility);
    }
    if (smsSignMode) {
      res["SmsSignMode"] = boost::any(*smsSignMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallAbility") != m.end() && !m["CallAbility"].empty()) {
      callAbility = make_shared<string>(boost::any_cast<string>(m["CallAbility"]));
    }
    if (m.find("GNFlag") != m.end() && !m["GNFlag"].empty()) {
      GNFlag = make_shared<string>(boost::any_cast<string>(m["GNFlag"]));
    }
    if (m.find("ReachJson") != m.end() && !m["ReachJson"].empty()) {
      if (typeid(vector<boost::any>) == m["ReachJson"].type()) {
        vector<GetXDefaultConfigResponseBodyDataReachJson> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReachJson"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetXDefaultConfigResponseBodyDataReachJson model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reachJson = make_shared<vector<GetXDefaultConfigResponseBodyDataReachJson>>(expect1);
      }
    }
    if (m.find("SequenceCall") != m.end() && !m["SequenceCall"].empty()) {
      if (typeid(vector<boost::any>) == m["SequenceCall"].type()) {
        vector<GetXDefaultConfigResponseBodyDataSequenceCall> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SequenceCall"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetXDefaultConfigResponseBodyDataSequenceCall model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sequenceCall = make_shared<vector<GetXDefaultConfigResponseBodyDataSequenceCall>>(expect1);
      }
    }
    if (m.find("SequenceEndTime") != m.end() && !m["SequenceEndTime"].empty()) {
      sequenceEndTime = make_shared<string>(boost::any_cast<string>(m["SequenceEndTime"]));
    }
    if (m.find("SequenceStartTime") != m.end() && !m["SequenceStartTime"].empty()) {
      sequenceStartTime = make_shared<string>(boost::any_cast<string>(m["SequenceStartTime"]));
    }
    if (m.find("SmsAbility") != m.end() && !m["SmsAbility"].empty()) {
      smsAbility = make_shared<string>(boost::any_cast<string>(m["SmsAbility"]));
    }
    if (m.find("SmsSignMode") != m.end() && !m["SmsSignMode"].empty()) {
      smsSignMode = make_shared<string>(boost::any_cast<string>(m["SmsSignMode"]));
    }
  }


  virtual ~GetXDefaultConfigResponseBodyData() = default;
};
class GetXDefaultConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetXDefaultConfigResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  GetXDefaultConfigResponseBody() {}

  explicit GetXDefaultConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetXDefaultConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetXDefaultConfigResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetXDefaultConfigResponseBody() = default;
};
class GetXDefaultConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetXDefaultConfigResponseBody> body{};

  GetXDefaultConfigResponse() {}

  explicit GetXDefaultConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetXDefaultConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetXDefaultConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetXDefaultConfigResponse() = default;
};
class ListXTelephonesRequest : public Darabonba::Model {
public:
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListXTelephonesRequest() {}

  explicit ListXTelephonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
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
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
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
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
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
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListXTelephonesRequest() = default;
};
class ListXTelephonesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> authMsg{};
  shared_ptr<string> bindTime{};
  shared_ptr<string> buyTime{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<string> customerPoolName{};
  shared_ptr<string> releaseTime{};
  shared_ptr<string> smsStatus{};
  shared_ptr<string> telephone{};
  shared_ptr<string> telephoneStatus{};
  shared_ptr<string> unbindTime{};

  ListXTelephonesResponseBodyDataList() {}

  explicit ListXTelephonesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authMsg) {
      res["AuthMsg"] = boost::any(*authMsg);
    }
    if (bindTime) {
      res["BindTime"] = boost::any(*bindTime);
    }
    if (buyTime) {
      res["BuyTime"] = boost::any(*buyTime);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (customerPoolName) {
      res["CustomerPoolName"] = boost::any(*customerPoolName);
    }
    if (releaseTime) {
      res["ReleaseTime"] = boost::any(*releaseTime);
    }
    if (smsStatus) {
      res["SmsStatus"] = boost::any(*smsStatus);
    }
    if (telephone) {
      res["Telephone"] = boost::any(*telephone);
    }
    if (telephoneStatus) {
      res["TelephoneStatus"] = boost::any(*telephoneStatus);
    }
    if (unbindTime) {
      res["UnbindTime"] = boost::any(*unbindTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthMsg") != m.end() && !m["AuthMsg"].empty()) {
      authMsg = make_shared<string>(boost::any_cast<string>(m["AuthMsg"]));
    }
    if (m.find("BindTime") != m.end() && !m["BindTime"].empty()) {
      bindTime = make_shared<string>(boost::any_cast<string>(m["BindTime"]));
    }
    if (m.find("BuyTime") != m.end() && !m["BuyTime"].empty()) {
      buyTime = make_shared<string>(boost::any_cast<string>(m["BuyTime"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("CustomerPoolName") != m.end() && !m["CustomerPoolName"].empty()) {
      customerPoolName = make_shared<string>(boost::any_cast<string>(m["CustomerPoolName"]));
    }
    if (m.find("ReleaseTime") != m.end() && !m["ReleaseTime"].empty()) {
      releaseTime = make_shared<string>(boost::any_cast<string>(m["ReleaseTime"]));
    }
    if (m.find("SmsStatus") != m.end() && !m["SmsStatus"].empty()) {
      smsStatus = make_shared<string>(boost::any_cast<string>(m["SmsStatus"]));
    }
    if (m.find("Telephone") != m.end() && !m["Telephone"].empty()) {
      telephone = make_shared<string>(boost::any_cast<string>(m["Telephone"]));
    }
    if (m.find("TelephoneStatus") != m.end() && !m["TelephoneStatus"].empty()) {
      telephoneStatus = make_shared<string>(boost::any_cast<string>(m["TelephoneStatus"]));
    }
    if (m.find("UnbindTime") != m.end() && !m["UnbindTime"].empty()) {
      unbindTime = make_shared<string>(boost::any_cast<string>(m["UnbindTime"]));
    }
  }


  virtual ~ListXTelephonesResponseBodyDataList() = default;
};
class ListXTelephonesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListXTelephonesResponseBodyDataList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListXTelephonesResponseBodyData() {}

  explicit ListXTelephonesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListXTelephonesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListXTelephonesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListXTelephonesResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListXTelephonesResponseBodyData() = default;
};
class ListXTelephonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ListXTelephonesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  ListXTelephonesResponseBody() {}

  explicit ListXTelephonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListXTelephonesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListXTelephonesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListXTelephonesResponseBody() = default;
};
class ListXTelephonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListXTelephonesResponseBody> body{};

  ListXTelephonesResponse() {}

  explicit ListXTelephonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListXTelephonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListXTelephonesResponseBody>(model1);
      }
    }
  }


  virtual ~ListXTelephonesResponse() = default;
};
class LockSecretNoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  LockSecretNoRequest() {}

  explicit LockSecretNoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~LockSecretNoRequest() = default;
};
class LockSecretNoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  LockSecretNoResponseBody() {}

  explicit LockSecretNoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~LockSecretNoResponseBody() = default;
};
class LockSecretNoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LockSecretNoResponseBody> body{};

  LockSecretNoResponse() {}

  explicit LockSecretNoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LockSecretNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LockSecretNoResponseBody>(model1);
      }
    }
  }


  virtual ~LockSecretNoResponse() = default;
};
class OperateAxgGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> groupId{};
  shared_ptr<string> numbers{};
  shared_ptr<string> operateType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  OperateAxgGroupRequest() {}

  explicit OperateAxgGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      numbers = make_shared<string>(boost::any_cast<string>(m["Numbers"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~OperateAxgGroupRequest() = default;
};
class OperateAxgGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  OperateAxgGroupResponseBody() {}

  explicit OperateAxgGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~OperateAxgGroupResponseBody() = default;
};
class OperateAxgGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateAxgGroupResponseBody> body{};

  OperateAxgGroupResponse() {}

  explicit OperateAxgGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateAxgGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateAxgGroupResponseBody>(model1);
      }
    }
  }


  virtual ~OperateAxgGroupResponse() = default;
};
class OperateBlackNoRequest : public Darabonba::Model {
public:
  shared_ptr<string> blackNo{};
  shared_ptr<string> operateType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tips{};

  OperateBlackNoRequest() {}

  explicit OperateBlackNoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackNo) {
      res["BlackNo"] = boost::any(*blackNo);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackNo") != m.end() && !m["BlackNo"].empty()) {
      blackNo = make_shared<string>(boost::any_cast<string>(m["BlackNo"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
  }


  virtual ~OperateBlackNoRequest() = default;
};
class OperateBlackNoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  OperateBlackNoResponseBody() {}

  explicit OperateBlackNoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~OperateBlackNoResponseBody() = default;
};
class OperateBlackNoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateBlackNoResponseBody> body{};

  OperateBlackNoResponse() {}

  explicit OperateBlackNoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateBlackNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateBlackNoResponseBody>(model1);
      }
    }
  }


  virtual ~OperateBlackNoResponse() = default;
};
class QueryPhoneNoAByTrackNoRequest : public Darabonba::Model {
public:
  shared_ptr<string> cabinetNo{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> trackNo{};

  QueryPhoneNoAByTrackNoRequest() {}

  explicit QueryPhoneNoAByTrackNoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cabinetNo) {
      res["CabinetNo"] = boost::any(*cabinetNo);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (trackNo) {
      res["trackNo"] = boost::any(*trackNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CabinetNo") != m.end() && !m["CabinetNo"].empty()) {
      cabinetNo = make_shared<string>(boost::any_cast<string>(m["CabinetNo"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("trackNo") != m.end() && !m["trackNo"].empty()) {
      trackNo = make_shared<string>(boost::any_cast<string>(m["trackNo"]));
    }
  }


  virtual ~QueryPhoneNoAByTrackNoRequest() = default;
};
class QueryPhoneNoAByTrackNoResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> extension{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoX{};

  QueryPhoneNoAByTrackNoResponseBodyModule() {}

  explicit QueryPhoneNoAByTrackNoResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
  }


  virtual ~QueryPhoneNoAByTrackNoResponseBodyModule() = default;
};
class QueryPhoneNoAByTrackNoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryPhoneNoAByTrackNoResponseBodyModule>> module{};
  shared_ptr<string> requestId{};

  QueryPhoneNoAByTrackNoResponseBody() {}

  explicit QueryPhoneNoAByTrackNoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*module){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Module"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Module"].type()) {
        vector<QueryPhoneNoAByTrackNoResponseBodyModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Module"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPhoneNoAByTrackNoResponseBodyModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        module = make_shared<vector<QueryPhoneNoAByTrackNoResponseBodyModule>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPhoneNoAByTrackNoResponseBody() = default;
};
class QueryPhoneNoAByTrackNoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPhoneNoAByTrackNoResponseBody> body{};

  QueryPhoneNoAByTrackNoResponse() {}

  explicit QueryPhoneNoAByTrackNoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPhoneNoAByTrackNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPhoneNoAByTrackNoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPhoneNoAByTrackNoResponse() = default;
};
class QueryRecordFileDownloadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> callTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryRecordFileDownloadUrlRequest() {}

  explicit QueryRecordFileDownloadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
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
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<string>(boost::any_cast<string>(m["CallTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryRecordFileDownloadUrlRequest() = default;
};
class QueryRecordFileDownloadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryRecordFileDownloadUrlResponseBody() {}

  explicit QueryRecordFileDownloadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
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
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryRecordFileDownloadUrlResponseBody() = default;
};
class QueryRecordFileDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordFileDownloadUrlResponseBody> body{};

  QueryRecordFileDownloadUrlResponse() {}

  explicit QueryRecordFileDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRecordFileDownloadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordFileDownloadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordFileDownloadUrlResponse() = default;
};
class QuerySecretNoDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  QuerySecretNoDetailRequest() {}

  explicit QuerySecretNoDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~QuerySecretNoDetailRequest() = default;
};
class QuerySecretNoDetailResponseBodySecretNoInfoDTO : public Darabonba::Model {
public:
  shared_ptr<long> certifyStatus{};
  shared_ptr<string> city{};
  shared_ptr<string> province{};
  shared_ptr<string> purchaseTime{};
  shared_ptr<long> secretStatus{};
  shared_ptr<long> vendor{};

  QuerySecretNoDetailResponseBodySecretNoInfoDTO() {}

  explicit QuerySecretNoDetailResponseBodySecretNoInfoDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyStatus) {
      res["CertifyStatus"] = boost::any(*certifyStatus);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (purchaseTime) {
      res["PurchaseTime"] = boost::any(*purchaseTime);
    }
    if (secretStatus) {
      res["SecretStatus"] = boost::any(*secretStatus);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyStatus") != m.end() && !m["CertifyStatus"].empty()) {
      certifyStatus = make_shared<long>(boost::any_cast<long>(m["CertifyStatus"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("PurchaseTime") != m.end() && !m["PurchaseTime"].empty()) {
      purchaseTime = make_shared<string>(boost::any_cast<string>(m["PurchaseTime"]));
    }
    if (m.find("SecretStatus") != m.end() && !m["SecretStatus"].empty()) {
      secretStatus = make_shared<long>(boost::any_cast<long>(m["SecretStatus"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<long>(boost::any_cast<long>(m["Vendor"]));
    }
  }


  virtual ~QuerySecretNoDetailResponseBodySecretNoInfoDTO() = default;
};
class QuerySecretNoDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QuerySecretNoDetailResponseBodySecretNoInfoDTO> secretNoInfoDTO{};

  QuerySecretNoDetailResponseBody() {}

  explicit QuerySecretNoDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretNoInfoDTO) {
      res["SecretNoInfoDTO"] = secretNoInfoDTO ? boost::any(secretNoInfoDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretNoInfoDTO") != m.end() && !m["SecretNoInfoDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretNoInfoDTO"].type()) {
        QuerySecretNoDetailResponseBodySecretNoInfoDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretNoInfoDTO"]));
        secretNoInfoDTO = make_shared<QuerySecretNoDetailResponseBodySecretNoInfoDTO>(model1);
      }
    }
  }


  virtual ~QuerySecretNoDetailResponseBody() = default;
};
class QuerySecretNoDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySecretNoDetailResponseBody> body{};

  QuerySecretNoDetailResponse() {}

  explicit QuerySecretNoDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySecretNoDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySecretNoDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySecretNoDetailResponse() = default;
};
class QuerySecretNoRemainRequest : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};
  shared_ptr<long> specId{};

  QuerySecretNoRemainRequest() {}

  explicit QuerySecretNoRemainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["City"] = boost::any(*city);
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
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
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
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<long>(boost::any_cast<long>(m["SpecId"]));
    }
  }


  virtual ~QuerySecretNoRemainRequest() = default;
};
class QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> city{};

  QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO() {}

  explicit QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
  }


  virtual ~QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO() = default;
};
class QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO>> remainDTO{};

  QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList() {}

  explicit QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remainDTO) {
      vector<boost::any> temp1;
      for(auto item1:*remainDTO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["remainDTO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("remainDTO") != m.end() && !m["remainDTO"].empty()) {
      if (typeid(vector<boost::any>) == m["remainDTO"].type()) {
        vector<QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["remainDTO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        remainDTO = make_shared<vector<QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOListRemainDTO>>(expect1);
      }
    }
  }


  virtual ~QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList() = default;
};
class QuerySecretNoRemainResponseBodySecretRemainDTO : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> city{};
  shared_ptr<QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList> remainDTOList{};

  QuerySecretNoRemainResponseBodySecretRemainDTO() {}

  explicit QuerySecretNoRemainResponseBodySecretRemainDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (remainDTOList) {
      res["RemainDTOList"] = remainDTOList ? boost::any(remainDTOList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("RemainDTOList") != m.end() && !m["RemainDTOList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RemainDTOList"].type()) {
        QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RemainDTOList"]));
        remainDTOList = make_shared<QuerySecretNoRemainResponseBodySecretRemainDTORemainDTOList>(model1);
      }
    }
  }


  virtual ~QuerySecretNoRemainResponseBodySecretRemainDTO() = default;
};
class QuerySecretNoRemainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QuerySecretNoRemainResponseBodySecretRemainDTO> secretRemainDTO{};

  QuerySecretNoRemainResponseBody() {}

  explicit QuerySecretNoRemainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretRemainDTO) {
      res["SecretRemainDTO"] = secretRemainDTO ? boost::any(secretRemainDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretRemainDTO") != m.end() && !m["SecretRemainDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretRemainDTO"].type()) {
        QuerySecretNoRemainResponseBodySecretRemainDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretRemainDTO"]));
        secretRemainDTO = make_shared<QuerySecretNoRemainResponseBodySecretRemainDTO>(model1);
      }
    }
  }


  virtual ~QuerySecretNoRemainResponseBody() = default;
};
class QuerySecretNoRemainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySecretNoRemainResponseBody> body{};

  QuerySecretNoRemainResponse() {}

  explicit QuerySecretNoRemainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySecretNoRemainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySecretNoRemainResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySecretNoRemainResponse() = default;
};
class QuerySoundRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QuerySoundRecordRequest() {}

  explicit QuerySoundRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
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
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QuerySoundRecordRequest() = default;
};
class QuerySoundRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileUrl{};

  QuerySoundRecordResponseBodyData() {}

  explicit QuerySoundRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
  }


  virtual ~QuerySoundRecordResponseBodyData() = default;
};
class QuerySoundRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<QuerySoundRecordResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  QuerySoundRecordResponseBody() {}

  explicit QuerySoundRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QuerySoundRecordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySoundRecordResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QuerySoundRecordResponseBody() = default;
};
class QuerySoundRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySoundRecordResponseBody> body{};

  QuerySoundRecordResponse() {}

  explicit QuerySoundRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySoundRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySoundRecordResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySoundRecordResponse() = default;
};
class QuerySubsIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QuerySubsIdRequest() {}

  explicit QuerySubsIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
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
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QuerySubsIdRequest() = default;
};
class QuerySubsIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subsId{};

  QuerySubsIdResponseBody() {}

  explicit QuerySubsIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
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
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~QuerySubsIdResponseBody() = default;
};
class QuerySubsIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySubsIdResponseBody> body{};

  QuerySubsIdResponse() {}

  explicit QuerySubsIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySubsIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySubsIdResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySubsIdResponse() = default;
};
class QuerySubscriptionDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subsId{};

  QuerySubscriptionDetailRequest() {}

  explicit QuerySubscriptionDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~QuerySubscriptionDetailRequest() = default;
};
class QuerySubscriptionDetailResponseBodySecretBindDetailDTO : public Darabonba::Model {
public:
  shared_ptr<string> ASRModelId{};
  shared_ptr<bool> ASRStatus{};
  shared_ptr<string> callRestrict{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> extension{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<long> groupId{};
  shared_ptr<bool> needRecord{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<long> status{};
  shared_ptr<string> subsId{};

  QuerySubscriptionDetailResponseBodySecretBindDetailDTO() {}

  explicit QuerySubscriptionDetailResponseBodySecretBindDetailDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASRModelId) {
      res["ASRModelId"] = boost::any(*ASRModelId);
    }
    if (ASRStatus) {
      res["ASRStatus"] = boost::any(*ASRStatus);
    }
    if (callRestrict) {
      res["CallRestrict"] = boost::any(*callRestrict);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (needRecord) {
      res["NeedRecord"] = boost::any(*needRecord);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASRModelId") != m.end() && !m["ASRModelId"].empty()) {
      ASRModelId = make_shared<string>(boost::any_cast<string>(m["ASRModelId"]));
    }
    if (m.find("ASRStatus") != m.end() && !m["ASRStatus"].empty()) {
      ASRStatus = make_shared<bool>(boost::any_cast<bool>(m["ASRStatus"]));
    }
    if (m.find("CallRestrict") != m.end() && !m["CallRestrict"].empty()) {
      callRestrict = make_shared<string>(boost::any_cast<string>(m["CallRestrict"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("NeedRecord") != m.end() && !m["NeedRecord"].empty()) {
      needRecord = make_shared<bool>(boost::any_cast<bool>(m["NeedRecord"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~QuerySubscriptionDetailResponseBodySecretBindDetailDTO() = default;
};
class QuerySubscriptionDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QuerySubscriptionDetailResponseBodySecretBindDetailDTO> secretBindDetailDTO{};

  QuerySubscriptionDetailResponseBody() {}

  explicit QuerySubscriptionDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretBindDetailDTO) {
      res["SecretBindDetailDTO"] = secretBindDetailDTO ? boost::any(secretBindDetailDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretBindDetailDTO") != m.end() && !m["SecretBindDetailDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretBindDetailDTO"].type()) {
        QuerySubscriptionDetailResponseBodySecretBindDetailDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretBindDetailDTO"]));
        secretBindDetailDTO = make_shared<QuerySubscriptionDetailResponseBodySecretBindDetailDTO>(model1);
      }
    }
  }


  virtual ~QuerySubscriptionDetailResponseBody() = default;
};
class QuerySubscriptionDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySubscriptionDetailResponseBody> body{};

  QuerySubscriptionDetailResponse() {}

  explicit QuerySubscriptionDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySubscriptionDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySubscriptionDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySubscriptionDetailResponse() = default;
};
class ReleaseSecretNoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  ReleaseSecretNoRequest() {}

  explicit ReleaseSecretNoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~ReleaseSecretNoRequest() = default;
};
class ReleaseSecretNoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReleaseSecretNoResponseBody() {}

  explicit ReleaseSecretNoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ReleaseSecretNoResponseBody() = default;
};
class ReleaseSecretNoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseSecretNoResponseBody> body{};

  ReleaseSecretNoResponse() {}

  explicit ReleaseSecretNoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseSecretNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseSecretNoResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseSecretNoResponse() = default;
};
class UnBindAXBRequest : public Darabonba::Model {
public:
  shared_ptr<string> bindId{};
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UnBindAXBRequest() {}

  explicit UnBindAXBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindId) {
      res["BindId"] = boost::any(*bindId);
    }
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
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
    if (m.find("BindId") != m.end() && !m["BindId"].empty()) {
      bindId = make_shared<string>(boost::any_cast<string>(m["BindId"]));
    }
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UnBindAXBRequest() = default;
};
class UnBindAXBResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  UnBindAXBResponseBodyData() {}

  explicit UnBindAXBResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UnBindAXBResponseBodyData() = default;
};
class UnBindAXBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<UnBindAXBResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnBindAXBResponseBody() {}

  explicit UnBindAXBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UnBindAXBResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UnBindAXBResponseBodyData>(model1);
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


  virtual ~UnBindAXBResponseBody() = default;
};
class UnBindAXBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnBindAXBResponseBody> body{};

  UnBindAXBResponse() {}

  explicit UnBindAXBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnBindAXBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnBindAXBResponseBody>(model1);
      }
    }
  }


  virtual ~UnBindAXBResponse() = default;
};
class UnBindXBRequest : public Darabonba::Model {
public:
  shared_ptr<string> authId{};
  shared_ptr<long> callerParentId{};
  shared_ptr<string> customerPoolKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> reqId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> telX{};

  UnBindXBRequest() {}

  explicit UnBindXBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authId) {
      res["AuthId"] = boost::any(*authId);
    }
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (customerPoolKey) {
      res["CustomerPoolKey"] = boost::any(*customerPoolKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (reqId) {
      res["ReqId"] = boost::any(*reqId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (telX) {
      res["TelX"] = boost::any(*telX);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthId") != m.end() && !m["AuthId"].empty()) {
      authId = make_shared<string>(boost::any_cast<string>(m["AuthId"]));
    }
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CustomerPoolKey") != m.end() && !m["CustomerPoolKey"].empty()) {
      customerPoolKey = make_shared<string>(boost::any_cast<string>(m["CustomerPoolKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReqId") != m.end() && !m["ReqId"].empty()) {
      reqId = make_shared<string>(boost::any_cast<string>(m["ReqId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TelX") != m.end() && !m["TelX"].empty()) {
      telX = make_shared<string>(boost::any_cast<string>(m["TelX"]));
    }
  }


  virtual ~UnBindXBRequest() = default;
};
class UnBindXBResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  UnBindXBResponseBodyData() {}

  explicit UnBindXBResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UnBindXBResponseBodyData() = default;
};
class UnBindXBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<UnBindXBResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnBindXBResponseBody() {}

  explicit UnBindXBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UnBindXBResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UnBindXBResponseBodyData>(model1);
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


  virtual ~UnBindXBResponseBody() = default;
};
class UnBindXBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnBindXBResponseBody> body{};

  UnBindXBResponse() {}

  explicit UnBindXBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnBindXBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnBindXBResponseBody>(model1);
      }
    }
  }


  virtual ~UnBindXBResponse() = default;
};
class UnbindSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};
  shared_ptr<string> subsId{};

  UnbindSubscriptionRequest() {}

  explicit UnbindSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~UnbindSubscriptionRequest() = default;
};
class UnbindSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> chargeId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UnbindSubscriptionResponseBody() {}

  explicit UnbindSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeId) {
      res["ChargeId"] = boost::any(*chargeId);
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
    if (m.find("ChargeId") != m.end() && !m["ChargeId"].empty()) {
      chargeId = make_shared<string>(boost::any_cast<string>(m["ChargeId"]));
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


  virtual ~UnbindSubscriptionResponseBody() = default;
};
class UnbindSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindSubscriptionResponseBody> body{};

  UnbindSubscriptionResponse() {}

  explicit UnbindSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindSubscriptionResponse() = default;
};
class UnlockSecretNoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  UnlockSecretNoRequest() {}

  explicit UnlockSecretNoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
  }


  virtual ~UnlockSecretNoRequest() = default;
};
class UnlockSecretNoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UnlockSecretNoResponseBody() {}

  explicit UnlockSecretNoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UnlockSecretNoResponseBody() = default;
};
class UnlockSecretNoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnlockSecretNoResponseBody> body{};

  UnlockSecretNoResponse() {}

  explicit UnlockSecretNoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnlockSecretNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnlockSecretNoResponseBody>(model1);
      }
    }
  }


  virtual ~UnlockSecretNoResponse() = default;
};
class UpdateSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> ASRModelId{};
  shared_ptr<bool> ASRStatus{};
  shared_ptr<long> callDisplayType{};
  shared_ptr<string> callRestrict{};
  shared_ptr<string> expiration{};
  shared_ptr<string> groupId{};
  shared_ptr<bool> isRecordingEnabled{};
  shared_ptr<string> operateType{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNoA{};
  shared_ptr<string> phoneNoB{};
  shared_ptr<string> phoneNoX{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> productType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ringConfig{};
  shared_ptr<string> subsId{};

  UpdateSubscriptionRequest() {}

  explicit UpdateSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASRModelId) {
      res["ASRModelId"] = boost::any(*ASRModelId);
    }
    if (ASRStatus) {
      res["ASRStatus"] = boost::any(*ASRStatus);
    }
    if (callDisplayType) {
      res["CallDisplayType"] = boost::any(*callDisplayType);
    }
    if (callRestrict) {
      res["CallRestrict"] = boost::any(*callRestrict);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (isRecordingEnabled) {
      res["IsRecordingEnabled"] = boost::any(*isRecordingEnabled);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNoA) {
      res["PhoneNoA"] = boost::any(*phoneNoA);
    }
    if (phoneNoB) {
      res["PhoneNoB"] = boost::any(*phoneNoB);
    }
    if (phoneNoX) {
      res["PhoneNoX"] = boost::any(*phoneNoX);
    }
    if (poolKey) {
      res["PoolKey"] = boost::any(*poolKey);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ringConfig) {
      res["RingConfig"] = boost::any(*ringConfig);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASRModelId") != m.end() && !m["ASRModelId"].empty()) {
      ASRModelId = make_shared<string>(boost::any_cast<string>(m["ASRModelId"]));
    }
    if (m.find("ASRStatus") != m.end() && !m["ASRStatus"].empty()) {
      ASRStatus = make_shared<bool>(boost::any_cast<bool>(m["ASRStatus"]));
    }
    if (m.find("CallDisplayType") != m.end() && !m["CallDisplayType"].empty()) {
      callDisplayType = make_shared<long>(boost::any_cast<long>(m["CallDisplayType"]));
    }
    if (m.find("CallRestrict") != m.end() && !m["CallRestrict"].empty()) {
      callRestrict = make_shared<string>(boost::any_cast<string>(m["CallRestrict"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IsRecordingEnabled") != m.end() && !m["IsRecordingEnabled"].empty()) {
      isRecordingEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsRecordingEnabled"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNoA") != m.end() && !m["PhoneNoA"].empty()) {
      phoneNoA = make_shared<string>(boost::any_cast<string>(m["PhoneNoA"]));
    }
    if (m.find("PhoneNoB") != m.end() && !m["PhoneNoB"].empty()) {
      phoneNoB = make_shared<string>(boost::any_cast<string>(m["PhoneNoB"]));
    }
    if (m.find("PhoneNoX") != m.end() && !m["PhoneNoX"].empty()) {
      phoneNoX = make_shared<string>(boost::any_cast<string>(m["PhoneNoX"]));
    }
    if (m.find("PoolKey") != m.end() && !m["PoolKey"].empty()) {
      poolKey = make_shared<string>(boost::any_cast<string>(m["PoolKey"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RingConfig") != m.end() && !m["RingConfig"].empty()) {
      ringConfig = make_shared<string>(boost::any_cast<string>(m["RingConfig"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~UpdateSubscriptionRequest() = default;
};
class UpdateSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateSubscriptionResponseBody() {}

  explicit UpdateSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateSubscriptionResponseBody() = default;
};
class UpdateSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSubscriptionResponseBody> body{};

  UpdateSubscriptionResponse() {}

  explicit UpdateSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSubscriptionResponse() = default;
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
  AddAxnTrackNoResponse addAxnTrackNoWithOptions(shared_ptr<AddAxnTrackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddAxnTrackNoResponse addAxnTrackNo(shared_ptr<AddAxnTrackNoRequest> request);
  AddSecretBlacklistResponse addSecretBlacklistWithOptions(shared_ptr<AddSecretBlacklistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSecretBlacklistResponse addSecretBlacklist(shared_ptr<AddSecretBlacklistRequest> request);
  BindAXBCallResponse bindAXBCallWithOptions(shared_ptr<BindAXBCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAXBCallResponse bindAXBCall(shared_ptr<BindAXBCallRequest> request);
  BindAxbResponse bindAxbWithOptions(shared_ptr<BindAxbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAxbResponse bindAxb(shared_ptr<BindAxbRequest> request);
  BindAxgResponse bindAxgWithOptions(shared_ptr<BindAxgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAxgResponse bindAxg(shared_ptr<BindAxgRequest> request);
  BindAxnResponse bindAxnWithOptions(shared_ptr<BindAxnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAxnResponse bindAxn(shared_ptr<BindAxnRequest> request);
  BindAxnExtensionResponse bindAxnExtensionWithOptions(shared_ptr<BindAxnExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAxnExtensionResponse bindAxnExtension(shared_ptr<BindAxnExtensionRequest> request);
  BindBatchAxgResponse bindBatchAxgWithOptions(shared_ptr<BindBatchAxgRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindBatchAxgResponse bindBatchAxg(shared_ptr<BindBatchAxgRequest> request);
  BindXBResponse bindXBWithOptions(shared_ptr<BindXBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindXBResponse bindXB(shared_ptr<BindXBRequest> request);
  BuySecretNoResponse buySecretNoWithOptions(shared_ptr<BuySecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BuySecretNoResponse buySecretNo(shared_ptr<BuySecretNoRequest> request);
  CancelPickUpWaybillResponse cancelPickUpWaybillWithOptions(shared_ptr<CancelPickUpWaybillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPickUpWaybillResponse cancelPickUpWaybill(shared_ptr<CancelPickUpWaybillRequest> request);
  ConfigXResponse configXWithOptions(shared_ptr<ConfigXRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfigXResponse configX(shared_ptr<ConfigXRequest> request);
  CreateAxgGroupResponse createAxgGroupWithOptions(shared_ptr<CreateAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAxgGroupResponse createAxgGroup(shared_ptr<CreateAxgGroupRequest> request);
  CreatePhoneNoAReportResponse createPhoneNoAReportWithOptions(shared_ptr<CreatePhoneNoAReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePhoneNoAReportResponse createPhoneNoAReport(shared_ptr<CreatePhoneNoAReportRequest> request);
  CreatePickUpWaybillResponse createPickUpWaybillWithOptions(shared_ptr<CreatePickUpWaybillRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePickUpWaybillResponse createPickUpWaybill(shared_ptr<CreatePickUpWaybillRequest> request);
  CreatePickUpWaybillPreQueryResponse createPickUpWaybillPreQueryWithOptions(shared_ptr<CreatePickUpWaybillPreQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePickUpWaybillPreQueryResponse createPickUpWaybillPreQuery(shared_ptr<CreatePickUpWaybillPreQueryRequest> request);
  CreateSmsSignResponse createSmsSignWithOptions(shared_ptr<CreateSmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSmsSignResponse createSmsSign(shared_ptr<CreateSmsSignRequest> request);
  DeleteAxgGroupResponse deleteAxgGroupWithOptions(shared_ptr<DeleteAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAxgGroupResponse deleteAxgGroup(shared_ptr<DeleteAxgGroupRequest> request);
  DeleteSecretBlacklistResponse deleteSecretBlacklistWithOptions(shared_ptr<DeleteSecretBlacklistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecretBlacklistResponse deleteSecretBlacklist(shared_ptr<DeleteSecretBlacklistRequest> request);
  GetDyplsOSSInfoForUploadFileResponse getDyplsOSSInfoForUploadFileWithOptions(shared_ptr<GetDyplsOSSInfoForUploadFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDyplsOSSInfoForUploadFileResponse getDyplsOSSInfoForUploadFile(shared_ptr<GetDyplsOSSInfoForUploadFileRequest> request);
  GetSecretAsrDetailResponse getSecretAsrDetailWithOptions(shared_ptr<GetSecretAsrDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecretAsrDetailResponse getSecretAsrDetail(shared_ptr<GetSecretAsrDetailRequest> request);
  GetTotalPublicUrlResponse getTotalPublicUrlWithOptions(shared_ptr<GetTotalPublicUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTotalPublicUrlResponse getTotalPublicUrl(shared_ptr<GetTotalPublicUrlRequest> request);
  GetXConfigResponse getXConfigWithOptions(shared_ptr<GetXConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetXConfigResponse getXConfig(shared_ptr<GetXConfigRequest> request);
  GetXDefaultConfigResponse getXDefaultConfigWithOptions(shared_ptr<GetXDefaultConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetXDefaultConfigResponse getXDefaultConfig(shared_ptr<GetXDefaultConfigRequest> request);
  ListXTelephonesResponse listXTelephonesWithOptions(shared_ptr<ListXTelephonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListXTelephonesResponse listXTelephones(shared_ptr<ListXTelephonesRequest> request);
  LockSecretNoResponse lockSecretNoWithOptions(shared_ptr<LockSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockSecretNoResponse lockSecretNo(shared_ptr<LockSecretNoRequest> request);
  OperateAxgGroupResponse operateAxgGroupWithOptions(shared_ptr<OperateAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateAxgGroupResponse operateAxgGroup(shared_ptr<OperateAxgGroupRequest> request);
  OperateBlackNoResponse operateBlackNoWithOptions(shared_ptr<OperateBlackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateBlackNoResponse operateBlackNo(shared_ptr<OperateBlackNoRequest> request);
  QueryPhoneNoAByTrackNoResponse queryPhoneNoAByTrackNoWithOptions(shared_ptr<QueryPhoneNoAByTrackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPhoneNoAByTrackNoResponse queryPhoneNoAByTrackNo(shared_ptr<QueryPhoneNoAByTrackNoRequest> request);
  QueryRecordFileDownloadUrlResponse queryRecordFileDownloadUrlWithOptions(shared_ptr<QueryRecordFileDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordFileDownloadUrlResponse queryRecordFileDownloadUrl(shared_ptr<QueryRecordFileDownloadUrlRequest> request);
  QuerySecretNoDetailResponse querySecretNoDetailWithOptions(shared_ptr<QuerySecretNoDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySecretNoDetailResponse querySecretNoDetail(shared_ptr<QuerySecretNoDetailRequest> request);
  QuerySecretNoRemainResponse querySecretNoRemainWithOptions(shared_ptr<QuerySecretNoRemainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySecretNoRemainResponse querySecretNoRemain(shared_ptr<QuerySecretNoRemainRequest> request);
  QuerySoundRecordResponse querySoundRecordWithOptions(shared_ptr<QuerySoundRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySoundRecordResponse querySoundRecord(shared_ptr<QuerySoundRecordRequest> request);
  QuerySubsIdResponse querySubsIdWithOptions(shared_ptr<QuerySubsIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySubsIdResponse querySubsId(shared_ptr<QuerySubsIdRequest> request);
  QuerySubscriptionDetailResponse querySubscriptionDetailWithOptions(shared_ptr<QuerySubscriptionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySubscriptionDetailResponse querySubscriptionDetail(shared_ptr<QuerySubscriptionDetailRequest> request);
  ReleaseSecretNoResponse releaseSecretNoWithOptions(shared_ptr<ReleaseSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseSecretNoResponse releaseSecretNo(shared_ptr<ReleaseSecretNoRequest> request);
  UnBindAXBResponse unBindAXBWithOptions(shared_ptr<UnBindAXBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnBindAXBResponse unBindAXB(shared_ptr<UnBindAXBRequest> request);
  UnBindXBResponse unBindXBWithOptions(shared_ptr<UnBindXBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnBindXBResponse unBindXB(shared_ptr<UnBindXBRequest> request);
  UnbindSubscriptionResponse unbindSubscriptionWithOptions(shared_ptr<UnbindSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindSubscriptionResponse unbindSubscription(shared_ptr<UnbindSubscriptionRequest> request);
  UnlockSecretNoResponse unlockSecretNoWithOptions(shared_ptr<UnlockSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlockSecretNoResponse unlockSecretNo(shared_ptr<UnlockSecretNoRequest> request);
  UpdateSubscriptionResponse updateSubscriptionWithOptions(shared_ptr<UpdateSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSubscriptionResponse updateSubscription(shared_ptr<UpdateSubscriptionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dyplsapi20170525

#endif
