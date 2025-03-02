// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYTNSAPI20230101_H_
#define ALIBABACLOUD_DYTNSAPI20230101_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Dytnsapi20230101 {
class DescribeNumberHLRRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeNumberHLRRequest() {}

  explicit DescribeNumberHLRRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
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
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
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


  virtual ~DescribeNumberHLRRequest() = default;
};
class DescribeNumberHLRResponseBodyDataCall : public Darabonba::Model {
public:
  shared_ptr<string> cleansedCode{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> minLength{};

  DescribeNumberHLRResponseBodyDataCall() {}

  explicit DescribeNumberHLRResponseBodyDataCall(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cleansedCode) {
      res["CleansedCode"] = boost::any(*cleansedCode);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CleansedCode") != m.end() && !m["CleansedCode"].empty()) {
      cleansedCode = make_shared<string>(boost::any_cast<string>(m["CleansedCode"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
  }


  virtual ~DescribeNumberHLRResponseBodyDataCall() = default;
};
class DescribeNumberHLRResponseBodyDataLive : public Darabonba::Model {
public:
  shared_ptr<string> deviceStatus{};
  shared_ptr<string> roaming{};
  shared_ptr<string> roamingCountry{};
  shared_ptr<string> subscriberStatus{};

  DescribeNumberHLRResponseBodyDataLive() {}

  explicit DescribeNumberHLRResponseBodyDataLive(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceStatus) {
      res["DeviceStatus"] = boost::any(*deviceStatus);
    }
    if (roaming) {
      res["Roaming"] = boost::any(*roaming);
    }
    if (roamingCountry) {
      res["RoamingCountry"] = boost::any(*roamingCountry);
    }
    if (subscriberStatus) {
      res["SubscriberStatus"] = boost::any(*subscriberStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceStatus") != m.end() && !m["DeviceStatus"].empty()) {
      deviceStatus = make_shared<string>(boost::any_cast<string>(m["DeviceStatus"]));
    }
    if (m.find("Roaming") != m.end() && !m["Roaming"].empty()) {
      roaming = make_shared<string>(boost::any_cast<string>(m["Roaming"]));
    }
    if (m.find("RoamingCountry") != m.end() && !m["RoamingCountry"].empty()) {
      roamingCountry = make_shared<string>(boost::any_cast<string>(m["RoamingCountry"]));
    }
    if (m.find("SubscriberStatus") != m.end() && !m["SubscriberStatus"].empty()) {
      subscriberStatus = make_shared<string>(boost::any_cast<string>(m["SubscriberStatus"]));
    }
  }


  virtual ~DescribeNumberHLRResponseBodyDataLive() = default;
};
class DescribeNumberHLRResponseBodyDataSms : public Darabonba::Model {
public:
  shared_ptr<long> cleansedCode{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> minLength{};

  DescribeNumberHLRResponseBodyDataSms() {}

  explicit DescribeNumberHLRResponseBodyDataSms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cleansedCode) {
      res["CleansedCode"] = boost::any(*cleansedCode);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CleansedCode") != m.end() && !m["CleansedCode"].empty()) {
      cleansedCode = make_shared<long>(boost::any_cast<long>(m["CleansedCode"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
  }


  virtual ~DescribeNumberHLRResponseBodyDataSms() = default;
};
class DescribeNumberHLRResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> blocked{};
  shared_ptr<DescribeNumberHLRResponseBodyDataCall> call{};
  shared_ptr<string> carrier{};
  shared_ptr<string> city{};
  shared_ptr<string> countryIso3{};
  shared_ptr<DescribeNumberHLRResponseBodyDataLive> live{};
  shared_ptr<string> phoneType{};
  shared_ptr<DescribeNumberHLRResponseBodyDataSms> sms{};

  DescribeNumberHLRResponseBodyData() {}

  explicit DescribeNumberHLRResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blocked) {
      res["Blocked"] = boost::any(*blocked);
    }
    if (call) {
      res["Call"] = call ? boost::any(call->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (countryIso3) {
      res["CountryIso3"] = boost::any(*countryIso3);
    }
    if (live) {
      res["Live"] = live ? boost::any(live->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (phoneType) {
      res["PhoneType"] = boost::any(*phoneType);
    }
    if (sms) {
      res["Sms"] = sms ? boost::any(sms->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Blocked") != m.end() && !m["Blocked"].empty()) {
      blocked = make_shared<string>(boost::any_cast<string>(m["Blocked"]));
    }
    if (m.find("Call") != m.end() && !m["Call"].empty()) {
      if (typeid(map<string, boost::any>) == m["Call"].type()) {
        DescribeNumberHLRResponseBodyDataCall model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Call"]));
        call = make_shared<DescribeNumberHLRResponseBodyDataCall>(model1);
      }
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("CountryIso3") != m.end() && !m["CountryIso3"].empty()) {
      countryIso3 = make_shared<string>(boost::any_cast<string>(m["CountryIso3"]));
    }
    if (m.find("Live") != m.end() && !m["Live"].empty()) {
      if (typeid(map<string, boost::any>) == m["Live"].type()) {
        DescribeNumberHLRResponseBodyDataLive model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Live"]));
        live = make_shared<DescribeNumberHLRResponseBodyDataLive>(model1);
      }
    }
    if (m.find("PhoneType") != m.end() && !m["PhoneType"].empty()) {
      phoneType = make_shared<string>(boost::any_cast<string>(m["PhoneType"]));
    }
    if (m.find("Sms") != m.end() && !m["Sms"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sms"].type()) {
        DescribeNumberHLRResponseBodyDataSms model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sms"]));
        sms = make_shared<DescribeNumberHLRResponseBodyDataSms>(model1);
      }
    }
  }


  virtual ~DescribeNumberHLRResponseBodyData() = default;
};
class DescribeNumberHLRResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribeNumberHLRResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeNumberHLRResponseBody() {}

  explicit DescribeNumberHLRResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNumberHLRResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeNumberHLRResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNumberHLRResponseBody() = default;
};
class DescribeNumberHLRResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNumberHLRResponseBody> body{};

  DescribeNumberHLRResponse() {}

  explicit DescribeNumberHLRResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNumberHLRResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNumberHLRResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNumberHLRResponse() = default;
};
class DescribeNumberMccMncRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeNumberMccMncRequest() {}

  explicit DescribeNumberMccMncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
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
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
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


  virtual ~DescribeNumberMccMncRequest() = default;
};
class DescribeNumberMccMncResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> countryIso3{};
  shared_ptr<string> mcc{};
  shared_ptr<string> mnc{};
  shared_ptr<bool> ported{};

  DescribeNumberMccMncResponseBodyData() {}

  explicit DescribeNumberMccMncResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countryIso3) {
      res["CountryIso3"] = boost::any(*countryIso3);
    }
    if (mcc) {
      res["Mcc"] = boost::any(*mcc);
    }
    if (mnc) {
      res["Mnc"] = boost::any(*mnc);
    }
    if (ported) {
      res["Ported"] = boost::any(*ported);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountryIso3") != m.end() && !m["CountryIso3"].empty()) {
      countryIso3 = make_shared<string>(boost::any_cast<string>(m["CountryIso3"]));
    }
    if (m.find("Mcc") != m.end() && !m["Mcc"].empty()) {
      mcc = make_shared<string>(boost::any_cast<string>(m["Mcc"]));
    }
    if (m.find("Mnc") != m.end() && !m["Mnc"].empty()) {
      mnc = make_shared<string>(boost::any_cast<string>(m["Mnc"]));
    }
    if (m.find("Ported") != m.end() && !m["Ported"].empty()) {
      ported = make_shared<bool>(boost::any_cast<bool>(m["Ported"]));
    }
  }


  virtual ~DescribeNumberMccMncResponseBodyData() = default;
};
class DescribeNumberMccMncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribeNumberMccMncResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeNumberMccMncResponseBody() {}

  explicit DescribeNumberMccMncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNumberMccMncResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeNumberMccMncResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNumberMccMncResponseBody() = default;
};
class DescribeNumberMccMncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNumberMccMncResponseBody> body{};

  DescribeNumberMccMncResponse() {}

  explicit DescribeNumberMccMncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNumberMccMncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNumberMccMncResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNumberMccMncResponse() = default;
};
class GetPhoneNumberIdentificationResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sessionPayload{};

  GetPhoneNumberIdentificationResultRequest() {}

  explicit GetPhoneNumberIdentificationResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
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
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sessionPayload) {
      res["SessionPayload"] = boost::any(*sessionPayload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
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
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SessionPayload") != m.end() && !m["SessionPayload"].empty()) {
      sessionPayload = make_shared<string>(boost::any_cast<string>(m["SessionPayload"]));
    }
  }


  virtual ~GetPhoneNumberIdentificationResultRequest() = default;
};
class GetPhoneNumberIdentificationResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> isIdentified{};

  GetPhoneNumberIdentificationResultResponseBodyData() {}

  explicit GetPhoneNumberIdentificationResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isIdentified) {
      res["IsIdentified"] = boost::any(*isIdentified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsIdentified") != m.end() && !m["IsIdentified"].empty()) {
      isIdentified = make_shared<string>(boost::any_cast<string>(m["IsIdentified"]));
    }
  }


  virtual ~GetPhoneNumberIdentificationResultResponseBodyData() = default;
};
class GetPhoneNumberIdentificationResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPhoneNumberIdentificationResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPhoneNumberIdentificationResultResponseBody() {}

  explicit GetPhoneNumberIdentificationResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPhoneNumberIdentificationResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPhoneNumberIdentificationResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPhoneNumberIdentificationResultResponseBody() = default;
};
class GetPhoneNumberIdentificationResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhoneNumberIdentificationResultResponseBody> body{};

  GetPhoneNumberIdentificationResultResponse() {}

  explicit GetPhoneNumberIdentificationResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPhoneNumberIdentificationResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhoneNumberIdentificationResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhoneNumberIdentificationResultResponse() = default;
};
class GetPhoneNumberIdentificationUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> ip{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> rememberPhoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetPhoneNumberIdentificationUrlRequest() {}

  explicit GetPhoneNumberIdentificationUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (rememberPhoneNumber) {
      res["RememberPhoneNumber"] = boost::any(*rememberPhoneNumber);
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
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("RememberPhoneNumber") != m.end() && !m["RememberPhoneNumber"].empty()) {
      rememberPhoneNumber = make_shared<bool>(boost::any_cast<bool>(m["RememberPhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetPhoneNumberIdentificationUrlRequest() = default;
};
class GetPhoneNumberIdentificationUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> identificationUrl{};
  shared_ptr<string> sessionId{};

  GetPhoneNumberIdentificationUrlResponseBodyData() {}

  explicit GetPhoneNumberIdentificationUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identificationUrl) {
      res["IdentificationUrl"] = boost::any(*identificationUrl);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentificationUrl") != m.end() && !m["IdentificationUrl"].empty()) {
      identificationUrl = make_shared<string>(boost::any_cast<string>(m["IdentificationUrl"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~GetPhoneNumberIdentificationUrlResponseBodyData() = default;
};
class GetPhoneNumberIdentificationUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPhoneNumberIdentificationUrlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPhoneNumberIdentificationUrlResponseBody() {}

  explicit GetPhoneNumberIdentificationUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPhoneNumberIdentificationUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPhoneNumberIdentificationUrlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPhoneNumberIdentificationUrlResponseBody() = default;
};
class GetPhoneNumberIdentificationUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhoneNumberIdentificationUrlResponseBody> body{};

  GetPhoneNumberIdentificationUrlResponse() {}

  explicit GetPhoneNumberIdentificationUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPhoneNumberIdentificationUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhoneNumberIdentificationUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhoneNumberIdentificationUrlResponse() = default;
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
  DescribeNumberHLRResponse describeNumberHLRWithOptions(shared_ptr<DescribeNumberHLRRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNumberHLRResponse describeNumberHLR(shared_ptr<DescribeNumberHLRRequest> request);
  DescribeNumberMccMncResponse describeNumberMccMncWithOptions(shared_ptr<DescribeNumberMccMncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNumberMccMncResponse describeNumberMccMnc(shared_ptr<DescribeNumberMccMncRequest> request);
  GetPhoneNumberIdentificationResultResponse getPhoneNumberIdentificationResultWithOptions(shared_ptr<GetPhoneNumberIdentificationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhoneNumberIdentificationResultResponse getPhoneNumberIdentificationResult(shared_ptr<GetPhoneNumberIdentificationResultRequest> request);
  GetPhoneNumberIdentificationUrlResponse getPhoneNumberIdentificationUrlWithOptions(shared_ptr<GetPhoneNumberIdentificationUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhoneNumberIdentificationUrlResponse getPhoneNumberIdentificationUrl(shared_ptr<GetPhoneNumberIdentificationUrlRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dytnsapi20230101

#endif
