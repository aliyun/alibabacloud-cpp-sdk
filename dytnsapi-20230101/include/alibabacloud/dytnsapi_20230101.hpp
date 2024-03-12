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
  GetPhoneNumberIdentificationResultResponse getPhoneNumberIdentificationResultWithOptions(shared_ptr<GetPhoneNumberIdentificationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhoneNumberIdentificationResultResponse getPhoneNumberIdentificationResult(shared_ptr<GetPhoneNumberIdentificationResultRequest> request);
  GetPhoneNumberIdentificationUrlResponse getPhoneNumberIdentificationUrlWithOptions(shared_ptr<GetPhoneNumberIdentificationUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhoneNumberIdentificationUrlResponse getPhoneNumberIdentificationUrl(shared_ptr<GetPhoneNumberIdentificationUrlRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dytnsapi20230101

#endif
