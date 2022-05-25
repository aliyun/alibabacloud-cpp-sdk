// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYPLSAPI20170525_H_
#define ALIBABACLOUD_DYPLSAPI20170525_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
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
        AddSecretBlacklistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSecretBlacklistResponseBody>(model1);
      }
    }
  }


  virtual ~AddSecretBlacklistResponse() = default;
};
class BindAxbRequest : public Darabonba::Model {
public:
  shared_ptr<string> ASRModelId{};
  shared_ptr<bool> ASRStatus{};
  shared_ptr<long> callDisplayType{};
  shared_ptr<string> callRestrict{};
  shared_ptr<long> callTimeout{};
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
        BindAxnExtensionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAxnExtensionResponseBody>(model1);
      }
    }
  }


  virtual ~BindAxnExtensionResponse() = default;
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
        CancelPickUpWaybillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelPickUpWaybillResponseBody>(model1);
      }
    }
  }


  virtual ~CancelPickUpWaybillResponse() = default;
};
class ConfirmSendSmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};

  ConfirmSendSmsRequest() {}

  explicit ConfirmSendSmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
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
  }


  virtual ~ConfirmSendSmsRequest() = default;
};
class ConfirmSendSmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ConfirmSendSmsResponseBody() {}

  explicit ConfirmSendSmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConfirmSendSmsResponseBody() = default;
};
class ConfirmSendSmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmSendSmsResponseBody> body{};

  ConfirmSendSmsResponse() {}

  explicit ConfirmSendSmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmSendSmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmSendSmsResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmSendSmsResponse() = default;
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
        CreateAxgGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAxgGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAxgGroupResponse() = default;
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
        CreatePickUpWaybillPreQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePickUpWaybillPreQueryResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePickUpWaybillPreQueryResponse() = default;
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
        DeleteSecretBlacklistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSecretBlacklistResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSecretBlacklistResponse() = default;
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
        GetSecretAsrDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecretAsrDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecretAsrDetailResponse() = default;
};
class GetSubscriptionDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> secretNo{};
  shared_ptr<long> subsId{};

  GetSubscriptionDetailRequest() {}

  explicit GetSubscriptionDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      subsId = make_shared<long>(boost::any_cast<long>(m["SubsId"]));
    }
  }


  virtual ~GetSubscriptionDetailRequest() = default;
};
class GetSubscriptionDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<string> phoneNo{};
  shared_ptr<string> province{};
  shared_ptr<string> secretNo{};
  shared_ptr<long> subsId{};
  shared_ptr<long> switchStatus{};
  shared_ptr<string> vendor{};

  GetSubscriptionDetailResponseBodyData() {}

  explicit GetSubscriptionDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (phoneNo) {
      res["PhoneNo"] = boost::any(*phoneNo);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (secretNo) {
      res["SecretNo"] = boost::any(*secretNo);
    }
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    if (switchStatus) {
      res["SwitchStatus"] = boost::any(*switchStatus);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("PhoneNo") != m.end() && !m["PhoneNo"].empty()) {
      phoneNo = make_shared<string>(boost::any_cast<string>(m["PhoneNo"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("SecretNo") != m.end() && !m["SecretNo"].empty()) {
      secretNo = make_shared<string>(boost::any_cast<string>(m["SecretNo"]));
    }
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<long>(boost::any_cast<long>(m["SubsId"]));
    }
    if (m.find("SwitchStatus") != m.end() && !m["SwitchStatus"].empty()) {
      switchStatus = make_shared<long>(boost::any_cast<long>(m["SwitchStatus"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~GetSubscriptionDetailResponseBodyData() = default;
};
class GetSubscriptionDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetSubscriptionDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetSubscriptionDetailResponseBody() {}

  explicit GetSubscriptionDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubscriptionDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSubscriptionDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSubscriptionDetailResponseBody() = default;
};
class GetSubscriptionDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSubscriptionDetailResponseBody> body{};

  GetSubscriptionDetailResponse() {}

  explicit GetSubscriptionDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSubscriptionDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubscriptionDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubscriptionDetailResponse() = default;
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
        GetTotalPublicUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTotalPublicUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetTotalPublicUrlResponse() = default;
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
        OperateBlackNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateBlackNoResponseBody>(model1);
      }
    }
  }


  virtual ~OperateBlackNoResponse() = default;
};
class QueryCallStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> callNo{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolKey{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> subsId{};

  QueryCallStatusRequest() {}

  explicit QueryCallStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callNo) {
      res["CallNo"] = boost::any(*callNo);
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
    if (subsId) {
      res["SubsId"] = boost::any(*subsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallNo") != m.end() && !m["CallNo"].empty()) {
      callNo = make_shared<string>(boost::any_cast<string>(m["CallNo"]));
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
    if (m.find("SubsId") != m.end() && !m["SubsId"].empty()) {
      subsId = make_shared<string>(boost::any_cast<string>(m["SubsId"]));
    }
  }


  virtual ~QueryCallStatusRequest() = default;
};
class QueryCallStatusResponseBodySecretCallStatusDTO : public Darabonba::Model {
public:
  shared_ptr<string> calledNo{};
  shared_ptr<string> extension{};
  shared_ptr<long> status{};

  QueryCallStatusResponseBodySecretCallStatusDTO() {}

  explicit QueryCallStatusResponseBodySecretCallStatusDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNo) {
      res["CalledNo"] = boost::any(*calledNo);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNo") != m.end() && !m["CalledNo"].empty()) {
      calledNo = make_shared<string>(boost::any_cast<string>(m["CalledNo"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryCallStatusResponseBodySecretCallStatusDTO() = default;
};
class QueryCallStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryCallStatusResponseBodySecretCallStatusDTO> secretCallStatusDTO{};

  QueryCallStatusResponseBody() {}

  explicit QueryCallStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (secretCallStatusDTO) {
      res["SecretCallStatusDTO"] = secretCallStatusDTO ? boost::any(secretCallStatusDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecretCallStatusDTO") != m.end() && !m["SecretCallStatusDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretCallStatusDTO"].type()) {
        QueryCallStatusResponseBodySecretCallStatusDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretCallStatusDTO"]));
        secretCallStatusDTO = make_shared<QueryCallStatusResponseBodySecretCallStatusDTO>(model1);
      }
    }
  }


  virtual ~QueryCallStatusResponseBody() = default;
};
class QueryCallStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCallStatusResponseBody> body{};

  QueryCallStatusResponse() {}

  explicit QueryCallStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCallStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCallStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCallStatusResponse() = default;
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
        QuerySecretNoRemainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySecretNoRemainResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySecretNoRemainResponse() = default;
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
        ReleaseSecretNoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseSecretNoResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseSecretNoResponse() = default;
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
  BindAxbResponse bindAxbWithOptions(shared_ptr<BindAxbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAxbResponse bindAxb(shared_ptr<BindAxbRequest> request);
  BindAxgResponse bindAxgWithOptions(shared_ptr<BindAxgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAxgResponse bindAxg(shared_ptr<BindAxgRequest> request);
  BindAxnResponse bindAxnWithOptions(shared_ptr<BindAxnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAxnResponse bindAxn(shared_ptr<BindAxnRequest> request);
  BindAxnExtensionResponse bindAxnExtensionWithOptions(shared_ptr<BindAxnExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAxnExtensionResponse bindAxnExtension(shared_ptr<BindAxnExtensionRequest> request);
  BuySecretNoResponse buySecretNoWithOptions(shared_ptr<BuySecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BuySecretNoResponse buySecretNo(shared_ptr<BuySecretNoRequest> request);
  CancelPickUpWaybillResponse cancelPickUpWaybillWithOptions(shared_ptr<CancelPickUpWaybillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPickUpWaybillResponse cancelPickUpWaybill(shared_ptr<CancelPickUpWaybillRequest> request);
  ConfirmSendSmsResponse confirmSendSmsWithOptions(shared_ptr<ConfirmSendSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmSendSmsResponse confirmSendSms(shared_ptr<ConfirmSendSmsRequest> request);
  CreateAxgGroupResponse createAxgGroupWithOptions(shared_ptr<CreateAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAxgGroupResponse createAxgGroup(shared_ptr<CreateAxgGroupRequest> request);
  CreatePickUpWaybillResponse createPickUpWaybillWithOptions(shared_ptr<CreatePickUpWaybillRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePickUpWaybillResponse createPickUpWaybill(shared_ptr<CreatePickUpWaybillRequest> request);
  CreatePickUpWaybillPreQueryResponse createPickUpWaybillPreQueryWithOptions(shared_ptr<CreatePickUpWaybillPreQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePickUpWaybillPreQueryResponse createPickUpWaybillPreQuery(shared_ptr<CreatePickUpWaybillPreQueryRequest> request);
  DeleteSecretBlacklistResponse deleteSecretBlacklistWithOptions(shared_ptr<DeleteSecretBlacklistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecretBlacklistResponse deleteSecretBlacklist(shared_ptr<DeleteSecretBlacklistRequest> request);
  GetSecretAsrDetailResponse getSecretAsrDetailWithOptions(shared_ptr<GetSecretAsrDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecretAsrDetailResponse getSecretAsrDetail(shared_ptr<GetSecretAsrDetailRequest> request);
  GetSubscriptionDetailResponse getSubscriptionDetailWithOptions(shared_ptr<GetSubscriptionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubscriptionDetailResponse getSubscriptionDetail(shared_ptr<GetSubscriptionDetailRequest> request);
  GetTotalPublicUrlResponse getTotalPublicUrlWithOptions(shared_ptr<GetTotalPublicUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTotalPublicUrlResponse getTotalPublicUrl(shared_ptr<GetTotalPublicUrlRequest> request);
  LockSecretNoResponse lockSecretNoWithOptions(shared_ptr<LockSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockSecretNoResponse lockSecretNo(shared_ptr<LockSecretNoRequest> request);
  OperateAxgGroupResponse operateAxgGroupWithOptions(shared_ptr<OperateAxgGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateAxgGroupResponse operateAxgGroup(shared_ptr<OperateAxgGroupRequest> request);
  OperateBlackNoResponse operateBlackNoWithOptions(shared_ptr<OperateBlackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateBlackNoResponse operateBlackNo(shared_ptr<OperateBlackNoRequest> request);
  QueryCallStatusResponse queryCallStatusWithOptions(shared_ptr<QueryCallStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCallStatusResponse queryCallStatus(shared_ptr<QueryCallStatusRequest> request);
  QueryPhoneNoAByTrackNoResponse queryPhoneNoAByTrackNoWithOptions(shared_ptr<QueryPhoneNoAByTrackNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPhoneNoAByTrackNoResponse queryPhoneNoAByTrackNo(shared_ptr<QueryPhoneNoAByTrackNoRequest> request);
  QueryRecordFileDownloadUrlResponse queryRecordFileDownloadUrlWithOptions(shared_ptr<QueryRecordFileDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordFileDownloadUrlResponse queryRecordFileDownloadUrl(shared_ptr<QueryRecordFileDownloadUrlRequest> request);
  QuerySecretNoDetailResponse querySecretNoDetailWithOptions(shared_ptr<QuerySecretNoDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySecretNoDetailResponse querySecretNoDetail(shared_ptr<QuerySecretNoDetailRequest> request);
  QuerySecretNoRemainResponse querySecretNoRemainWithOptions(shared_ptr<QuerySecretNoRemainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySecretNoRemainResponse querySecretNoRemain(shared_ptr<QuerySecretNoRemainRequest> request);
  QuerySubsIdResponse querySubsIdWithOptions(shared_ptr<QuerySubsIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySubsIdResponse querySubsId(shared_ptr<QuerySubsIdRequest> request);
  QuerySubscriptionDetailResponse querySubscriptionDetailWithOptions(shared_ptr<QuerySubscriptionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySubscriptionDetailResponse querySubscriptionDetail(shared_ptr<QuerySubscriptionDetailRequest> request);
  ReleaseSecretNoResponse releaseSecretNoWithOptions(shared_ptr<ReleaseSecretNoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseSecretNoResponse releaseSecretNo(shared_ptr<ReleaseSecretNoRequest> request);
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
