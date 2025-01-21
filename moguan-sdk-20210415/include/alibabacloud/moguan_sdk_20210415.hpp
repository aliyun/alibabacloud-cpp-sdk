// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MOGUAN-SDK20210415_H_
#define ALIBABACLOUD_MOGUAN-SDK20210415_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Moguan-sdk20210415 {
class RegisterDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> deviceId{};
  shared_ptr<map<string, boost::any>> extend{};
  shared_ptr<string> sdkCode{};
  shared_ptr<string> userDeviceId{};

  RegisterDeviceRequest() {}

  explicit RegisterDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (sdkCode) {
      res["SdkCode"] = boost::any(*sdkCode);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Extend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SdkCode") != m.end() && !m["SdkCode"].empty()) {
      sdkCode = make_shared<string>(boost::any_cast<string>(m["SdkCode"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
  }


  virtual ~RegisterDeviceRequest() = default;
};
class RegisterDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> extendShrink{};
  shared_ptr<string> sdkCode{};
  shared_ptr<string> userDeviceId{};

  RegisterDeviceShrinkRequest() {}

  explicit RegisterDeviceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (extendShrink) {
      res["Extend"] = boost::any(*extendShrink);
    }
    if (sdkCode) {
      res["SdkCode"] = boost::any(*sdkCode);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extendShrink = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("SdkCode") != m.end() && !m["SdkCode"].empty()) {
      sdkCode = make_shared<string>(boost::any_cast<string>(m["SdkCode"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
  }


  virtual ~RegisterDeviceShrinkRequest() = default;
};
class RegisterDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> license{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> rid{};
  shared_ptr<string> signature{};

  RegisterDeviceResponseBodyData() {}

  explicit RegisterDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (license) {
      res["License"] = boost::any(*license);
    }
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (rid) {
      res["Rid"] = boost::any(*rid);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("License") != m.end() && !m["License"].empty()) {
      license = make_shared<string>(boost::any_cast<string>(m["License"]));
    }
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("Rid") != m.end() && !m["Rid"].empty()) {
      rid = make_shared<string>(boost::any_cast<string>(m["Rid"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~RegisterDeviceResponseBodyData() = default;
};
class RegisterDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RegisterDeviceResponseBodyData> data{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RegisterDeviceResponseBody() {}

  explicit RegisterDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
        RegisterDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RegisterDeviceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegisterDeviceResponseBody() = default;
};
class RegisterDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterDeviceResponseBody> body{};

  RegisterDeviceResponse() {}

  explicit RegisterDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterDeviceResponse() = default;
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
  RegisterDeviceResponse registerDeviceWithOptions(shared_ptr<RegisterDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterDeviceResponse registerDevice(shared_ptr<RegisterDeviceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Moguan-sdk20210415

#endif
