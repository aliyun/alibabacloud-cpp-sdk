// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AVATAR20220130_H_
#define ALIBABACLOUD_AVATAR20220130_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Avatar20220130 {
class CancelVideoTaskRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  CancelVideoTaskRequestApp() {}

  explicit CancelVideoTaskRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~CancelVideoTaskRequestApp() = default;
};
class CancelVideoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CancelVideoTaskRequestApp> app{};
  shared_ptr<string> taskUuid{};
  shared_ptr<long> tenantId{};

  CancelVideoTaskRequest() {}

  explicit CancelVideoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        CancelVideoTaskRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<CancelVideoTaskRequestApp>(model1);
      }
    }
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~CancelVideoTaskRequest() = default;
};
class CancelVideoTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> taskUuid{};
  shared_ptr<long> tenantId{};

  CancelVideoTaskShrinkRequest() {}

  explicit CancelVideoTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~CancelVideoTaskShrinkRequest() = default;
};
class CancelVideoTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> failReason{};
  shared_ptr<bool> isCancel{};
  shared_ptr<string> taskUuid{};

  CancelVideoTaskResponseBodyData() {}

  explicit CancelVideoTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    if (isCancel) {
      res["IsCancel"] = boost::any(*isCancel);
    }
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
    if (m.find("IsCancel") != m.end() && !m["IsCancel"].empty()) {
      isCancel = make_shared<bool>(boost::any_cast<bool>(m["IsCancel"]));
    }
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
  }


  virtual ~CancelVideoTaskResponseBodyData() = default;
};
class CancelVideoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CancelVideoTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CancelVideoTaskResponseBody() {}

  explicit CancelVideoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CancelVideoTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CancelVideoTaskResponseBodyData>(model1);
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


  virtual ~CancelVideoTaskResponseBody() = default;
};
class CancelVideoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelVideoTaskResponseBody> body{};

  CancelVideoTaskResponse() {}

  explicit CancelVideoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelVideoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelVideoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelVideoTaskResponse() = default;
};
class ClientAuthRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceInfo{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> license{};
  shared_ptr<long> tenantId{};

  ClientAuthRequest() {}

  explicit ClientAuthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (deviceInfo) {
      res["DeviceInfo"] = boost::any(*deviceInfo);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (license) {
      res["License"] = boost::any(*license);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfo = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("License") != m.end() && !m["License"].empty()) {
      license = make_shared<string>(boost::any_cast<string>(m["License"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~ClientAuthRequest() = default;
};
class ClientAuthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ClientAuthResponseBody() {}

  explicit ClientAuthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ClientAuthResponseBody() = default;
};
class ClientAuthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClientAuthResponseBody> body{};

  ClientAuthResponse() {}

  explicit ClientAuthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClientAuthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClientAuthResponseBody>(model1);
      }
    }
  }


  virtual ~ClientAuthResponse() = default;
};
class ClientStartRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> tenantId{};

  ClientStartRequest() {}

  explicit ClientStartRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~ClientStartRequest() = default;
};
class ClientStartResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imToken{};

  ClientStartResponseBodyData() {}

  explicit ClientStartResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imToken) {
      res["ImToken"] = boost::any(*imToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImToken") != m.end() && !m["ImToken"].empty()) {
      imToken = make_shared<string>(boost::any_cast<string>(m["ImToken"]));
    }
  }


  virtual ~ClientStartResponseBodyData() = default;
};
class ClientStartResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ClientStartResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ClientStartResponseBody() {}

  explicit ClientStartResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ClientStartResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ClientStartResponseBodyData>(model1);
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


  virtual ~ClientStartResponseBody() = default;
};
class ClientStartResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClientStartResponseBody> body{};

  ClientStartResponse() {}

  explicit ClientStartResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClientStartResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClientStartResponseBody>(model1);
      }
    }
  }


  virtual ~ClientStartResponse() = default;
};
class ClientUnbindDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<long> tenantId{};

  ClientUnbindDeviceRequest() {}

  explicit ClientUnbindDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~ClientUnbindDeviceRequest() = default;
};
class ClientUnbindDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ClientUnbindDeviceResponseBody() {}

  explicit ClientUnbindDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ClientUnbindDeviceResponseBody() = default;
};
class ClientUnbindDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClientUnbindDeviceResponseBody> body{};

  ClientUnbindDeviceResponse() {}

  explicit ClientUnbindDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClientUnbindDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClientUnbindDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~ClientUnbindDeviceResponse() = default;
};
class CloseTimedResetOperateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> tenantId{};

  CloseTimedResetOperateRequest() {}

  explicit CloseTimedResetOperateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~CloseTimedResetOperateRequest() = default;
};
class CloseTimedResetOperateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> tenantId{};

  CloseTimedResetOperateResponseBodyData() {}

  explicit CloseTimedResetOperateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~CloseTimedResetOperateResponseBodyData() = default;
};
class CloseTimedResetOperateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CloseTimedResetOperateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CloseTimedResetOperateResponseBody() {}

  explicit CloseTimedResetOperateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CloseTimedResetOperateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CloseTimedResetOperateResponseBodyData>(model1);
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


  virtual ~CloseTimedResetOperateResponseBody() = default;
};
class CloseTimedResetOperateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseTimedResetOperateResponseBody> body{};

  CloseTimedResetOperateResponse() {}

  explicit CloseTimedResetOperateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseTimedResetOperateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseTimedResetOperateResponseBody>(model1);
      }
    }
  }


  virtual ~CloseTimedResetOperateResponse() = default;
};
class ConfirmAvatar2dTrainRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> confirm{};
  shared_ptr<long> tenantId{};

  ConfirmAvatar2dTrainRequest() {}

  explicit ConfirmAvatar2dTrainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (confirm) {
      res["Confirm"] = boost::any(*confirm);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Confirm") != m.end() && !m["Confirm"].empty()) {
      confirm = make_shared<string>(boost::any_cast<string>(m["Confirm"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~ConfirmAvatar2dTrainRequest() = default;
};
class ConfirmAvatar2dTrainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConfirmAvatar2dTrainResponseBody() {}

  explicit ConfirmAvatar2dTrainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ConfirmAvatar2dTrainResponseBody() = default;
};
class ConfirmAvatar2dTrainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmAvatar2dTrainResponseBody> body{};

  ConfirmAvatar2dTrainResponse() {}

  explicit ConfirmAvatar2dTrainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmAvatar2dTrainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmAvatar2dTrainResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmAvatar2dTrainResponse() = default;
};
class Create2dAvatarRequest : public Darabonba::Model {
public:
  shared_ptr<bool> callback{};
  shared_ptr<string> description{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};
  shared_ptr<long> orientation{};
  shared_ptr<string> portrait{};
  shared_ptr<long> tenantId{};
  shared_ptr<bool> transparent{};
  shared_ptr<string> video{};

  Create2dAvatarRequest() {}

  explicit Create2dAvatarRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orientation) {
      res["Orientation"] = boost::any(*orientation);
    }
    if (portrait) {
      res["Portrait"] = boost::any(*portrait);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (transparent) {
      res["Transparent"] = boost::any(*transparent);
    }
    if (video) {
      res["Video"] = boost::any(*video);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Orientation") != m.end() && !m["Orientation"].empty()) {
      orientation = make_shared<long>(boost::any_cast<long>(m["Orientation"]));
    }
    if (m.find("Portrait") != m.end() && !m["Portrait"].empty()) {
      portrait = make_shared<string>(boost::any_cast<string>(m["Portrait"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Transparent") != m.end() && !m["Transparent"].empty()) {
      transparent = make_shared<bool>(boost::any_cast<bool>(m["Transparent"]));
    }
    if (m.find("Video") != m.end() && !m["Video"].empty()) {
      video = make_shared<string>(boost::any_cast<string>(m["Video"]));
    }
  }


  virtual ~Create2dAvatarRequest() = default;
};
class Create2dAvatarResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};

  Create2dAvatarResponseBodyData() {}

  explicit Create2dAvatarResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~Create2dAvatarResponseBodyData() = default;
};
class Create2dAvatarResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<Create2dAvatarResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  Create2dAvatarResponseBody() {}

  explicit Create2dAvatarResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        Create2dAvatarResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<Create2dAvatarResponseBodyData>(model1);
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


  virtual ~Create2dAvatarResponseBody() = default;
};
class Create2dAvatarResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Create2dAvatarResponseBody> body{};

  Create2dAvatarResponse() {}

  explicit Create2dAvatarResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Create2dAvatarResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Create2dAvatarResponseBody>(model1);
      }
    }
  }


  virtual ~Create2dAvatarResponse() = default;
};
class DeleteAvatarRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> tenantId{};

  DeleteAvatarRequest() {}

  explicit DeleteAvatarRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~DeleteAvatarRequest() = default;
};
class DeleteAvatarResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAvatarResponseBody() {}

  explicit DeleteAvatarResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteAvatarResponseBody() = default;
};
class DeleteAvatarResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAvatarResponseBody> body{};

  DeleteAvatarResponse() {}

  explicit DeleteAvatarResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAvatarResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAvatarResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAvatarResponse() = default;
};
class DuplexDecisionRequestDialogContextHistories : public Darabonba::Model {
public:
  shared_ptr<string> robot{};
  shared_ptr<string> user{};

  DuplexDecisionRequestDialogContextHistories() {}

  explicit DuplexDecisionRequestDialogContextHistories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (robot) {
      res["Robot"] = boost::any(*robot);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Robot") != m.end() && !m["Robot"].empty()) {
      robot = make_shared<string>(boost::any_cast<string>(m["Robot"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DuplexDecisionRequestDialogContextHistories() = default;
};
class DuplexDecisionRequestDialogContext : public Darabonba::Model {
public:
  shared_ptr<long> curUtteranceIdx{};
  shared_ptr<vector<DuplexDecisionRequestDialogContextHistories>> histories{};

  DuplexDecisionRequestDialogContext() {}

  explicit DuplexDecisionRequestDialogContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (curUtteranceIdx) {
      res["CurUtteranceIdx"] = boost::any(*curUtteranceIdx);
    }
    if (histories) {
      vector<boost::any> temp1;
      for(auto item1:*histories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Histories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurUtteranceIdx") != m.end() && !m["CurUtteranceIdx"].empty()) {
      curUtteranceIdx = make_shared<long>(boost::any_cast<long>(m["CurUtteranceIdx"]));
    }
    if (m.find("Histories") != m.end() && !m["Histories"].empty()) {
      if (typeid(vector<boost::any>) == m["Histories"].type()) {
        vector<DuplexDecisionRequestDialogContextHistories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Histories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DuplexDecisionRequestDialogContextHistories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        histories = make_shared<vector<DuplexDecisionRequestDialogContextHistories>>(expect1);
      }
    }
  }


  virtual ~DuplexDecisionRequestDialogContext() = default;
};
class DuplexDecisionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> bizRequestId{};
  shared_ptr<long> callTime{};
  shared_ptr<vector<string>> customKeywords{};
  shared_ptr<DuplexDecisionRequestDialogContext> dialogContext{};
  shared_ptr<string> dialogStatus{};
  shared_ptr<long> interruptType{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> text{};

  DuplexDecisionRequest() {}

  explicit DuplexDecisionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (bizRequestId) {
      res["BizRequestId"] = boost::any(*bizRequestId);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    if (customKeywords) {
      res["CustomKeywords"] = boost::any(*customKeywords);
    }
    if (dialogContext) {
      res["DialogContext"] = dialogContext ? boost::any(dialogContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dialogStatus) {
      res["DialogStatus"] = boost::any(*dialogStatus);
    }
    if (interruptType) {
      res["InterruptType"] = boost::any(*interruptType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BizRequestId") != m.end() && !m["BizRequestId"].empty()) {
      bizRequestId = make_shared<string>(boost::any_cast<string>(m["BizRequestId"]));
    }
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<long>(boost::any_cast<long>(m["CallTime"]));
    }
    if (m.find("CustomKeywords") != m.end() && !m["CustomKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DialogContext") != m.end() && !m["DialogContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["DialogContext"].type()) {
        DuplexDecisionRequestDialogContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DialogContext"]));
        dialogContext = make_shared<DuplexDecisionRequestDialogContext>(model1);
      }
    }
    if (m.find("DialogStatus") != m.end() && !m["DialogStatus"].empty()) {
      dialogStatus = make_shared<string>(boost::any_cast<string>(m["DialogStatus"]));
    }
    if (m.find("InterruptType") != m.end() && !m["InterruptType"].empty()) {
      interruptType = make_shared<long>(boost::any_cast<long>(m["InterruptType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~DuplexDecisionRequest() = default;
};
class DuplexDecisionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> bizRequestId{};
  shared_ptr<long> callTime{};
  shared_ptr<string> customKeywordsShrink{};
  shared_ptr<string> dialogContextShrink{};
  shared_ptr<string> dialogStatus{};
  shared_ptr<long> interruptType{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> text{};

  DuplexDecisionShrinkRequest() {}

  explicit DuplexDecisionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (bizRequestId) {
      res["BizRequestId"] = boost::any(*bizRequestId);
    }
    if (callTime) {
      res["CallTime"] = boost::any(*callTime);
    }
    if (customKeywordsShrink) {
      res["CustomKeywords"] = boost::any(*customKeywordsShrink);
    }
    if (dialogContextShrink) {
      res["DialogContext"] = boost::any(*dialogContextShrink);
    }
    if (dialogStatus) {
      res["DialogStatus"] = boost::any(*dialogStatus);
    }
    if (interruptType) {
      res["InterruptType"] = boost::any(*interruptType);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BizRequestId") != m.end() && !m["BizRequestId"].empty()) {
      bizRequestId = make_shared<string>(boost::any_cast<string>(m["BizRequestId"]));
    }
    if (m.find("CallTime") != m.end() && !m["CallTime"].empty()) {
      callTime = make_shared<long>(boost::any_cast<long>(m["CallTime"]));
    }
    if (m.find("CustomKeywords") != m.end() && !m["CustomKeywords"].empty()) {
      customKeywordsShrink = make_shared<string>(boost::any_cast<string>(m["CustomKeywords"]));
    }
    if (m.find("DialogContext") != m.end() && !m["DialogContext"].empty()) {
      dialogContextShrink = make_shared<string>(boost::any_cast<string>(m["DialogContext"]));
    }
    if (m.find("DialogStatus") != m.end() && !m["DialogStatus"].empty()) {
      dialogStatus = make_shared<string>(boost::any_cast<string>(m["DialogStatus"]));
    }
    if (m.find("InterruptType") != m.end() && !m["InterruptType"].empty()) {
      interruptType = make_shared<long>(boost::any_cast<long>(m["InterruptType"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~DuplexDecisionShrinkRequest() = default;
};
class DuplexDecisionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> grabType{};
  shared_ptr<string> outputText{};

  DuplexDecisionResponseBodyData() {}

  explicit DuplexDecisionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (grabType) {
      res["GrabType"] = boost::any(*grabType);
    }
    if (outputText) {
      res["OutputText"] = boost::any(*outputText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("GrabType") != m.end() && !m["GrabType"].empty()) {
      grabType = make_shared<string>(boost::any_cast<string>(m["GrabType"]));
    }
    if (m.find("OutputText") != m.end() && !m["OutputText"].empty()) {
      outputText = make_shared<string>(boost::any_cast<string>(m["OutputText"]));
    }
  }


  virtual ~DuplexDecisionResponseBodyData() = default;
};
class DuplexDecisionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DuplexDecisionResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DuplexDecisionResponseBody() {}

  explicit DuplexDecisionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DuplexDecisionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DuplexDecisionResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DuplexDecisionResponseBody() = default;
};
class DuplexDecisionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DuplexDecisionResponseBody> body{};

  DuplexDecisionResponse() {}

  explicit DuplexDecisionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DuplexDecisionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DuplexDecisionResponseBody>(model1);
      }
    }
  }


  virtual ~DuplexDecisionResponse() = default;
};
class GetVideoTaskInfoRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetVideoTaskInfoRequestApp() {}

  explicit GetVideoTaskInfoRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~GetVideoTaskInfoRequestApp() = default;
};
class GetVideoTaskInfoRequest : public Darabonba::Model {
public:
  shared_ptr<GetVideoTaskInfoRequestApp> app{};
  shared_ptr<string> taskUuid{};
  shared_ptr<long> tenantId{};

  GetVideoTaskInfoRequest() {}

  explicit GetVideoTaskInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        GetVideoTaskInfoRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<GetVideoTaskInfoRequestApp>(model1);
      }
    }
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~GetVideoTaskInfoRequest() = default;
};
class GetVideoTaskInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> taskUuid{};
  shared_ptr<long> tenantId{};

  GetVideoTaskInfoShrinkRequest() {}

  explicit GetVideoTaskInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~GetVideoTaskInfoShrinkRequest() = default;
};
class GetVideoTaskInfoResponseBodyDataTaskResult : public Darabonba::Model {
public:
  shared_ptr<string> alphaUrl{};
  shared_ptr<string> attachmentUrl{};
  shared_ptr<string> failCode{};
  shared_ptr<string> failReason{};
  shared_ptr<string> previewPic{};
  shared_ptr<string> subtitlesUrl{};
  shared_ptr<long> videoDuration{};
  shared_ptr<string> videoUrl{};
  shared_ptr<string> wordSubtitlesUrl{};

  GetVideoTaskInfoResponseBodyDataTaskResult() {}

  explicit GetVideoTaskInfoResponseBodyDataTaskResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alphaUrl) {
      res["AlphaUrl"] = boost::any(*alphaUrl);
    }
    if (attachmentUrl) {
      res["AttachmentUrl"] = boost::any(*attachmentUrl);
    }
    if (failCode) {
      res["FailCode"] = boost::any(*failCode);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    if (previewPic) {
      res["PreviewPic"] = boost::any(*previewPic);
    }
    if (subtitlesUrl) {
      res["SubtitlesUrl"] = boost::any(*subtitlesUrl);
    }
    if (videoDuration) {
      res["VideoDuration"] = boost::any(*videoDuration);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (wordSubtitlesUrl) {
      res["WordSubtitlesUrl"] = boost::any(*wordSubtitlesUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlphaUrl") != m.end() && !m["AlphaUrl"].empty()) {
      alphaUrl = make_shared<string>(boost::any_cast<string>(m["AlphaUrl"]));
    }
    if (m.find("AttachmentUrl") != m.end() && !m["AttachmentUrl"].empty()) {
      attachmentUrl = make_shared<string>(boost::any_cast<string>(m["AttachmentUrl"]));
    }
    if (m.find("FailCode") != m.end() && !m["FailCode"].empty()) {
      failCode = make_shared<string>(boost::any_cast<string>(m["FailCode"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
    if (m.find("PreviewPic") != m.end() && !m["PreviewPic"].empty()) {
      previewPic = make_shared<string>(boost::any_cast<string>(m["PreviewPic"]));
    }
    if (m.find("SubtitlesUrl") != m.end() && !m["SubtitlesUrl"].empty()) {
      subtitlesUrl = make_shared<string>(boost::any_cast<string>(m["SubtitlesUrl"]));
    }
    if (m.find("VideoDuration") != m.end() && !m["VideoDuration"].empty()) {
      videoDuration = make_shared<long>(boost::any_cast<long>(m["VideoDuration"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("WordSubtitlesUrl") != m.end() && !m["WordSubtitlesUrl"].empty()) {
      wordSubtitlesUrl = make_shared<string>(boost::any_cast<string>(m["WordSubtitlesUrl"]));
    }
  }


  virtual ~GetVideoTaskInfoResponseBodyDataTaskResult() = default;
};
class GetVideoTaskInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> process{};
  shared_ptr<string> status{};
  shared_ptr<GetVideoTaskInfoResponseBodyDataTaskResult> taskResult{};
  shared_ptr<string> taskUuid{};
  shared_ptr<string> type{};

  GetVideoTaskInfoResponseBodyData() {}

  explicit GetVideoTaskInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (process) {
      res["Process"] = boost::any(*process);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskResult) {
      res["TaskResult"] = taskResult ? boost::any(taskResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      process = make_shared<string>(boost::any_cast<string>(m["Process"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskResult") != m.end() && !m["TaskResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskResult"].type()) {
        GetVideoTaskInfoResponseBodyDataTaskResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskResult"]));
        taskResult = make_shared<GetVideoTaskInfoResponseBodyDataTaskResult>(model1);
      }
    }
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetVideoTaskInfoResponseBodyData() = default;
};
class GetVideoTaskInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetVideoTaskInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVideoTaskInfoResponseBody() {}

  explicit GetVideoTaskInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetVideoTaskInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetVideoTaskInfoResponseBodyData>(model1);
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


  virtual ~GetVideoTaskInfoResponseBody() = default;
};
class GetVideoTaskInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVideoTaskInfoResponseBody> body{};

  GetVideoTaskInfoResponse() {}

  explicit GetVideoTaskInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVideoTaskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVideoTaskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetVideoTaskInfoResponse() = default;
};
class LicenseAuthRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> license{};
  shared_ptr<long> tenantId{};

  LicenseAuthRequest() {}

  explicit LicenseAuthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (license) {
      res["License"] = boost::any(*license);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("License") != m.end() && !m["License"].empty()) {
      license = make_shared<string>(boost::any_cast<string>(m["License"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~LicenseAuthRequest() = default;
};
class LicenseAuthResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> token{};

  LicenseAuthResponseBodyData() {}

  explicit LicenseAuthResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~LicenseAuthResponseBodyData() = default;
};
class LicenseAuthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<LicenseAuthResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LicenseAuthResponseBody() {}

  explicit LicenseAuthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        LicenseAuthResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<LicenseAuthResponseBodyData>(model1);
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


  virtual ~LicenseAuthResponseBody() = default;
};
class LicenseAuthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LicenseAuthResponseBody> body{};

  LicenseAuthResponse() {}

  explicit LicenseAuthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LicenseAuthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LicenseAuthResponseBody>(model1);
      }
    }
  }


  virtual ~LicenseAuthResponse() = default;
};
class QueryAvatarRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> tenantId{};

  QueryAvatarRequest() {}

  explicit QueryAvatarRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~QueryAvatarRequest() = default;
};
class QueryAvatarResponseBodyDataSupportedResolutionsOffline : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  QueryAvatarResponseBodyDataSupportedResolutionsOffline() {}

  explicit QueryAvatarResponseBodyDataSupportedResolutionsOffline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~QueryAvatarResponseBodyDataSupportedResolutionsOffline() = default;
};
class QueryAvatarResponseBodyDataSupportedResolutionsOnline : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  QueryAvatarResponseBodyDataSupportedResolutionsOnline() {}

  explicit QueryAvatarResponseBodyDataSupportedResolutionsOnline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~QueryAvatarResponseBodyDataSupportedResolutionsOnline() = default;
};
class QueryAvatarResponseBodyDataSupportedResolutions : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAvatarResponseBodyDataSupportedResolutionsOffline>> offline{};
  shared_ptr<vector<QueryAvatarResponseBodyDataSupportedResolutionsOnline>> online{};

  QueryAvatarResponseBodyDataSupportedResolutions() {}

  explicit QueryAvatarResponseBodyDataSupportedResolutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offline) {
      vector<boost::any> temp1;
      for(auto item1:*offline){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Offline"] = boost::any(temp1);
    }
    if (online) {
      vector<boost::any> temp1;
      for(auto item1:*online){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Online"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Offline") != m.end() && !m["Offline"].empty()) {
      if (typeid(vector<boost::any>) == m["Offline"].type()) {
        vector<QueryAvatarResponseBodyDataSupportedResolutionsOffline> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Offline"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAvatarResponseBodyDataSupportedResolutionsOffline model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        offline = make_shared<vector<QueryAvatarResponseBodyDataSupportedResolutionsOffline>>(expect1);
      }
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      if (typeid(vector<boost::any>) == m["Online"].type()) {
        vector<QueryAvatarResponseBodyDataSupportedResolutionsOnline> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Online"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAvatarResponseBodyDataSupportedResolutionsOnline model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        online = make_shared<vector<QueryAvatarResponseBodyDataSupportedResolutionsOnline>>(expect1);
      }
    }
  }


  virtual ~QueryAvatarResponseBodyDataSupportedResolutions() = default;
};
class QueryAvatarResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> allLocateImages{};
  shared_ptr<string> avatarType{};
  shared_ptr<string> description{};
  shared_ptr<string> image{};
  shared_ptr<string> makeFailReason{};
  shared_ptr<string> makeStage{};
  shared_ptr<string> makeStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> name{};
  shared_ptr<string> portrait{};
  shared_ptr<string> preview{};
  shared_ptr<QueryAvatarResponseBodyDataSupportedResolutions> supportedResolutions{};

  QueryAvatarResponseBodyData() {}

  explicit QueryAvatarResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allLocateImages) {
      res["AllLocateImages"] = boost::any(*allLocateImages);
    }
    if (avatarType) {
      res["AvatarType"] = boost::any(*avatarType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (makeFailReason) {
      res["MakeFailReason"] = boost::any(*makeFailReason);
    }
    if (makeStage) {
      res["MakeStage"] = boost::any(*makeStage);
    }
    if (makeStatus) {
      res["MakeStatus"] = boost::any(*makeStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (portrait) {
      res["Portrait"] = boost::any(*portrait);
    }
    if (preview) {
      res["Preview"] = boost::any(*preview);
    }
    if (supportedResolutions) {
      res["SupportedResolutions"] = supportedResolutions ? boost::any(supportedResolutions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllLocateImages") != m.end() && !m["AllLocateImages"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AllLocateImages"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      allLocateImages = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AvatarType") != m.end() && !m["AvatarType"].empty()) {
      avatarType = make_shared<string>(boost::any_cast<string>(m["AvatarType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("MakeFailReason") != m.end() && !m["MakeFailReason"].empty()) {
      makeFailReason = make_shared<string>(boost::any_cast<string>(m["MakeFailReason"]));
    }
    if (m.find("MakeStage") != m.end() && !m["MakeStage"].empty()) {
      makeStage = make_shared<string>(boost::any_cast<string>(m["MakeStage"]));
    }
    if (m.find("MakeStatus") != m.end() && !m["MakeStatus"].empty()) {
      makeStatus = make_shared<string>(boost::any_cast<string>(m["MakeStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Portrait") != m.end() && !m["Portrait"].empty()) {
      portrait = make_shared<string>(boost::any_cast<string>(m["Portrait"]));
    }
    if (m.find("Preview") != m.end() && !m["Preview"].empty()) {
      preview = make_shared<string>(boost::any_cast<string>(m["Preview"]));
    }
    if (m.find("SupportedResolutions") != m.end() && !m["SupportedResolutions"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedResolutions"].type()) {
        QueryAvatarResponseBodyDataSupportedResolutions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedResolutions"]));
        supportedResolutions = make_shared<QueryAvatarResponseBodyDataSupportedResolutions>(model1);
      }
    }
  }


  virtual ~QueryAvatarResponseBodyData() = default;
};
class QueryAvatarResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryAvatarResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryAvatarResponseBody() {}

  explicit QueryAvatarResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAvatarResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAvatarResponseBodyData>(model1);
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


  virtual ~QueryAvatarResponseBody() = default;
};
class QueryAvatarResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAvatarResponseBody> body{};

  QueryAvatarResponse() {}

  explicit QueryAvatarResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAvatarResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAvatarResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAvatarResponse() = default;
};
class QueryAvatarListRequest : public Darabonba::Model {
public:
  shared_ptr<string> modelType{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> tenantId{};

  QueryAvatarListRequest() {}

  explicit QueryAvatarListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~QueryAvatarListRequest() = default;
};
class QueryAvatarListResponseBodyDataListSupportedResolutionsOffline : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  QueryAvatarListResponseBodyDataListSupportedResolutionsOffline() {}

  explicit QueryAvatarListResponseBodyDataListSupportedResolutionsOffline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~QueryAvatarListResponseBodyDataListSupportedResolutionsOffline() = default;
};
class QueryAvatarListResponseBodyDataListSupportedResolutionsOnline : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  QueryAvatarListResponseBodyDataListSupportedResolutionsOnline() {}

  explicit QueryAvatarListResponseBodyDataListSupportedResolutionsOnline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~QueryAvatarListResponseBodyDataListSupportedResolutionsOnline() = default;
};
class QueryAvatarListResponseBodyDataListSupportedResolutions : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAvatarListResponseBodyDataListSupportedResolutionsOffline>> offline{};
  shared_ptr<vector<QueryAvatarListResponseBodyDataListSupportedResolutionsOnline>> online{};

  QueryAvatarListResponseBodyDataListSupportedResolutions() {}

  explicit QueryAvatarListResponseBodyDataListSupportedResolutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offline) {
      vector<boost::any> temp1;
      for(auto item1:*offline){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Offline"] = boost::any(temp1);
    }
    if (online) {
      vector<boost::any> temp1;
      for(auto item1:*online){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Online"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Offline") != m.end() && !m["Offline"].empty()) {
      if (typeid(vector<boost::any>) == m["Offline"].type()) {
        vector<QueryAvatarListResponseBodyDataListSupportedResolutionsOffline> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Offline"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAvatarListResponseBodyDataListSupportedResolutionsOffline model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        offline = make_shared<vector<QueryAvatarListResponseBodyDataListSupportedResolutionsOffline>>(expect1);
      }
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      if (typeid(vector<boost::any>) == m["Online"].type()) {
        vector<QueryAvatarListResponseBodyDataListSupportedResolutionsOnline> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Online"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAvatarListResponseBodyDataListSupportedResolutionsOnline model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        online = make_shared<vector<QueryAvatarListResponseBodyDataListSupportedResolutionsOnline>>(expect1);
      }
    }
  }


  virtual ~QueryAvatarListResponseBodyDataListSupportedResolutions() = default;
};
class QueryAvatarListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> avatarType{};
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> image{};
  shared_ptr<string> makeFailReason{};
  shared_ptr<string> makeStage{};
  shared_ptr<string> makeStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> name{};
  shared_ptr<string> portrait{};
  shared_ptr<string> preview{};
  shared_ptr<QueryAvatarListResponseBodyDataListSupportedResolutions> supportedResolutions{};

  QueryAvatarListResponseBodyDataList() {}

  explicit QueryAvatarListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatarType) {
      res["AvatarType"] = boost::any(*avatarType);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (makeFailReason) {
      res["MakeFailReason"] = boost::any(*makeFailReason);
    }
    if (makeStage) {
      res["MakeStage"] = boost::any(*makeStage);
    }
    if (makeStatus) {
      res["MakeStatus"] = boost::any(*makeStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (portrait) {
      res["Portrait"] = boost::any(*portrait);
    }
    if (preview) {
      res["Preview"] = boost::any(*preview);
    }
    if (supportedResolutions) {
      res["SupportedResolutions"] = supportedResolutions ? boost::any(supportedResolutions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvatarType") != m.end() && !m["AvatarType"].empty()) {
      avatarType = make_shared<string>(boost::any_cast<string>(m["AvatarType"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("MakeFailReason") != m.end() && !m["MakeFailReason"].empty()) {
      makeFailReason = make_shared<string>(boost::any_cast<string>(m["MakeFailReason"]));
    }
    if (m.find("MakeStage") != m.end() && !m["MakeStage"].empty()) {
      makeStage = make_shared<string>(boost::any_cast<string>(m["MakeStage"]));
    }
    if (m.find("MakeStatus") != m.end() && !m["MakeStatus"].empty()) {
      makeStatus = make_shared<string>(boost::any_cast<string>(m["MakeStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Portrait") != m.end() && !m["Portrait"].empty()) {
      portrait = make_shared<string>(boost::any_cast<string>(m["Portrait"]));
    }
    if (m.find("Preview") != m.end() && !m["Preview"].empty()) {
      preview = make_shared<string>(boost::any_cast<string>(m["Preview"]));
    }
    if (m.find("SupportedResolutions") != m.end() && !m["SupportedResolutions"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedResolutions"].type()) {
        QueryAvatarListResponseBodyDataListSupportedResolutions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedResolutions"]));
        supportedResolutions = make_shared<QueryAvatarListResponseBodyDataListSupportedResolutions>(model1);
      }
    }
  }


  virtual ~QueryAvatarListResponseBodyDataList() = default;
};
class QueryAvatarListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAvatarListResponseBodyDataList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  QueryAvatarListResponseBodyData() {}

  explicit QueryAvatarListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryAvatarListResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAvatarListResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryAvatarListResponseBodyDataList>>(expect1);
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


  virtual ~QueryAvatarListResponseBodyData() = default;
};
class QueryAvatarListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryAvatarListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryAvatarListResponseBody() {}

  explicit QueryAvatarListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAvatarListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAvatarListResponseBodyData>(model1);
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


  virtual ~QueryAvatarListResponseBody() = default;
};
class QueryAvatarListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAvatarListResponseBody> body{};

  QueryAvatarListResponse() {}

  explicit QueryAvatarListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAvatarListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAvatarListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAvatarListResponse() = default;
};
class QueryRunningInstanceRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  QueryRunningInstanceRequestApp() {}

  explicit QueryRunningInstanceRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~QueryRunningInstanceRequestApp() = default;
};
class QueryRunningInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<QueryRunningInstanceRequestApp> app{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};

  QueryRunningInstanceRequest() {}

  explicit QueryRunningInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        QueryRunningInstanceRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<QueryRunningInstanceRequestApp>(model1);
      }
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~QueryRunningInstanceRequest() = default;
};
class QueryRunningInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};

  QueryRunningInstanceShrinkRequest() {}

  explicit QueryRunningInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~QueryRunningInstanceShrinkRequest() = default;
};
class QueryRunningInstanceResponseBodyDataChannel : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> expiredTime{};
  shared_ptr<vector<string>> gslb{};
  shared_ptr<string> nonce{};
  shared_ptr<string> token{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};
  shared_ptr<string> userInfoInChannel{};

  QueryRunningInstanceResponseBodyDataChannel() {}

  explicit QueryRunningInstanceResponseBodyDataChannel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (gslb) {
      res["Gslb"] = boost::any(*gslb);
    }
    if (nonce) {
      res["Nonce"] = boost::any(*nonce);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userInfoInChannel) {
      res["UserInfoInChannel"] = boost::any(*userInfoInChannel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Gslb") != m.end() && !m["Gslb"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Gslb"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Gslb"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gslb = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Nonce") != m.end() && !m["Nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["Nonce"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserInfoInChannel") != m.end() && !m["UserInfoInChannel"].empty()) {
      userInfoInChannel = make_shared<string>(boost::any_cast<string>(m["UserInfoInChannel"]));
    }
  }


  virtual ~QueryRunningInstanceResponseBodyDataChannel() = default;
};
class QueryRunningInstanceResponseBodyDataUser : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  QueryRunningInstanceResponseBodyDataUser() {}

  explicit QueryRunningInstanceResponseBodyDataUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~QueryRunningInstanceResponseBodyDataUser() = default;
};
class QueryRunningInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<QueryRunningInstanceResponseBodyDataChannel> channel{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> token{};
  shared_ptr<QueryRunningInstanceResponseBodyDataUser> user{};

  QueryRunningInstanceResponseBodyData() {}

  explicit QueryRunningInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = channel ? boost::any(channel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      if (typeid(map<string, boost::any>) == m["Channel"].type()) {
        QueryRunningInstanceResponseBodyDataChannel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Channel"]));
        channel = make_shared<QueryRunningInstanceResponseBodyDataChannel>(model1);
      }
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        QueryRunningInstanceResponseBodyDataUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<QueryRunningInstanceResponseBodyDataUser>(model1);
      }
    }
  }


  virtual ~QueryRunningInstanceResponseBodyData() = default;
};
class QueryRunningInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryRunningInstanceResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRunningInstanceResponseBody() {}

  explicit QueryRunningInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryRunningInstanceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRunningInstanceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryRunningInstanceResponseBodyData>>(expect1);
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


  virtual ~QueryRunningInstanceResponseBody() = default;
};
class QueryRunningInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRunningInstanceResponseBody> body{};

  QueryRunningInstanceResponse() {}

  explicit QueryRunningInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRunningInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRunningInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRunningInstanceResponse() = default;
};
class QueryTimedResetOperateStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> tenantId{};

  QueryTimedResetOperateStatusRequest() {}

  explicit QueryTimedResetOperateStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~QueryTimedResetOperateStatusRequest() = default;
};
class QueryTimedResetOperateStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> status{};
  shared_ptr<string> statusStr{};
  shared_ptr<string> tenantId{};

  QueryTimedResetOperateStatusResponseBodyData() {}

  explicit QueryTimedResetOperateStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusStr) {
      res["StatusStr"] = boost::any(*statusStr);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusStr") != m.end() && !m["StatusStr"].empty()) {
      statusStr = make_shared<string>(boost::any_cast<string>(m["StatusStr"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryTimedResetOperateStatusResponseBodyData() = default;
};
class QueryTimedResetOperateStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryTimedResetOperateStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryTimedResetOperateStatusResponseBody() {}

  explicit QueryTimedResetOperateStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTimedResetOperateStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTimedResetOperateStatusResponseBodyData>(model1);
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


  virtual ~QueryTimedResetOperateStatusResponseBody() = default;
};
class QueryTimedResetOperateStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTimedResetOperateStatusResponseBody> body{};

  QueryTimedResetOperateStatusResponse() {}

  explicit QueryTimedResetOperateStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTimedResetOperateStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTimedResetOperateStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTimedResetOperateStatusResponse() = default;
};
class QueryVideoTaskInfoRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  QueryVideoTaskInfoRequestApp() {}

  explicit QueryVideoTaskInfoRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~QueryVideoTaskInfoRequestApp() = default;
};
class QueryVideoTaskInfoRequest : public Darabonba::Model {
public:
  shared_ptr<QueryVideoTaskInfoRequestApp> app{};
  shared_ptr<string> orderById{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<string> taskUuid{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> title{};
  shared_ptr<long> type{};

  QueryVideoTaskInfoRequest() {}

  explicit QueryVideoTaskInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderById) {
      res["OrderById"] = boost::any(*orderById);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        QueryVideoTaskInfoRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<QueryVideoTaskInfoRequestApp>(model1);
      }
    }
    if (m.find("OrderById") != m.end() && !m["OrderById"].empty()) {
      orderById = make_shared<string>(boost::any_cast<string>(m["OrderById"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~QueryVideoTaskInfoRequest() = default;
};
class QueryVideoTaskInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> orderById{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<string> taskUuid{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> title{};
  shared_ptr<long> type{};

  QueryVideoTaskInfoShrinkRequest() {}

  explicit QueryVideoTaskInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (orderById) {
      res["OrderById"] = boost::any(*orderById);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("OrderById") != m.end() && !m["OrderById"].empty()) {
      orderById = make_shared<string>(boost::any_cast<string>(m["OrderById"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~QueryVideoTaskInfoShrinkRequest() = default;
};
class QueryVideoTaskInfoResponseBodyDataListTaskResult : public Darabonba::Model {
public:
  shared_ptr<string> alphaUrl{};
  shared_ptr<string> attachmentUrl{};
  shared_ptr<string> failCode{};
  shared_ptr<string> failReason{};
  shared_ptr<string> previewPic{};
  shared_ptr<string> subtitlesUrl{};
  shared_ptr<long> videoDuration{};
  shared_ptr<string> videoUrl{};
  shared_ptr<string> wordSubtitlesUrl{};

  QueryVideoTaskInfoResponseBodyDataListTaskResult() {}

  explicit QueryVideoTaskInfoResponseBodyDataListTaskResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alphaUrl) {
      res["AlphaUrl"] = boost::any(*alphaUrl);
    }
    if (attachmentUrl) {
      res["AttachmentUrl"] = boost::any(*attachmentUrl);
    }
    if (failCode) {
      res["FailCode"] = boost::any(*failCode);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    if (previewPic) {
      res["PreviewPic"] = boost::any(*previewPic);
    }
    if (subtitlesUrl) {
      res["SubtitlesUrl"] = boost::any(*subtitlesUrl);
    }
    if (videoDuration) {
      res["VideoDuration"] = boost::any(*videoDuration);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (wordSubtitlesUrl) {
      res["WordSubtitlesUrl"] = boost::any(*wordSubtitlesUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlphaUrl") != m.end() && !m["AlphaUrl"].empty()) {
      alphaUrl = make_shared<string>(boost::any_cast<string>(m["AlphaUrl"]));
    }
    if (m.find("AttachmentUrl") != m.end() && !m["AttachmentUrl"].empty()) {
      attachmentUrl = make_shared<string>(boost::any_cast<string>(m["AttachmentUrl"]));
    }
    if (m.find("FailCode") != m.end() && !m["FailCode"].empty()) {
      failCode = make_shared<string>(boost::any_cast<string>(m["FailCode"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
    if (m.find("PreviewPic") != m.end() && !m["PreviewPic"].empty()) {
      previewPic = make_shared<string>(boost::any_cast<string>(m["PreviewPic"]));
    }
    if (m.find("SubtitlesUrl") != m.end() && !m["SubtitlesUrl"].empty()) {
      subtitlesUrl = make_shared<string>(boost::any_cast<string>(m["SubtitlesUrl"]));
    }
    if (m.find("VideoDuration") != m.end() && !m["VideoDuration"].empty()) {
      videoDuration = make_shared<long>(boost::any_cast<long>(m["VideoDuration"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("WordSubtitlesUrl") != m.end() && !m["WordSubtitlesUrl"].empty()) {
      wordSubtitlesUrl = make_shared<string>(boost::any_cast<string>(m["WordSubtitlesUrl"]));
    }
  }


  virtual ~QueryVideoTaskInfoResponseBodyDataListTaskResult() = default;
};
class QueryVideoTaskInfoResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<QueryVideoTaskInfoResponseBodyDataListTaskResult> taskResult{};
  shared_ptr<string> taskUuid{};
  shared_ptr<string> title{};
  shared_ptr<long> type{};

  QueryVideoTaskInfoResponseBodyDataList() {}

  explicit QueryVideoTaskInfoResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskResult) {
      res["TaskResult"] = taskResult ? boost::any(taskResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskResult") != m.end() && !m["TaskResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskResult"].type()) {
        QueryVideoTaskInfoResponseBodyDataListTaskResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskResult"]));
        taskResult = make_shared<QueryVideoTaskInfoResponseBodyDataListTaskResult>(model1);
      }
    }
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~QueryVideoTaskInfoResponseBodyDataList() = default;
};
class QueryVideoTaskInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryVideoTaskInfoResponseBodyDataList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  QueryVideoTaskInfoResponseBodyData() {}

  explicit QueryVideoTaskInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryVideoTaskInfoResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryVideoTaskInfoResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryVideoTaskInfoResponseBodyDataList>>(expect1);
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
  }


  virtual ~QueryVideoTaskInfoResponseBodyData() = default;
};
class QueryVideoTaskInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryVideoTaskInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryVideoTaskInfoResponseBody() {}

  explicit QueryVideoTaskInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryVideoTaskInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryVideoTaskInfoResponseBodyData>(model1);
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


  virtual ~QueryVideoTaskInfoResponseBody() = default;
};
class QueryVideoTaskInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryVideoTaskInfoResponseBody> body{};

  QueryVideoTaskInfoResponse() {}

  explicit QueryVideoTaskInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryVideoTaskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryVideoTaskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryVideoTaskInfoResponse() = default;
};
class Render3dAvatarRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> code{};
  shared_ptr<long> tenantId{};

  Render3dAvatarRequest() {}

  explicit Render3dAvatarRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~Render3dAvatarRequest() = default;
};
class Render3dAvatarResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> renderData{};

  Render3dAvatarResponseBodyData() {}

  explicit Render3dAvatarResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (renderData) {
      res["RenderData"] = boost::any(*renderData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RenderData") != m.end() && !m["RenderData"].empty()) {
      renderData = make_shared<string>(boost::any_cast<string>(m["RenderData"]));
    }
  }


  virtual ~Render3dAvatarResponseBodyData() = default;
};
class Render3dAvatarResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<Render3dAvatarResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  Render3dAvatarResponseBody() {}

  explicit Render3dAvatarResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        Render3dAvatarResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<Render3dAvatarResponseBodyData>(model1);
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


  virtual ~Render3dAvatarResponseBody() = default;
};
class Render3dAvatarResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Render3dAvatarResponseBody> body{};

  Render3dAvatarResponse() {}

  explicit Render3dAvatarResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Render3dAvatarResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Render3dAvatarResponseBody>(model1);
      }
    }
  }


  virtual ~Render3dAvatarResponse() = default;
};
class SendCommandRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> content{};
  shared_ptr<bool> feedback{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> uniqueCode{};

  SendCommandRequest() {}

  explicit SendCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (uniqueCode) {
      res["UniqueCode"] = boost::any(*uniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Content"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<bool>(boost::any_cast<bool>(m["Feedback"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("UniqueCode") != m.end() && !m["UniqueCode"].empty()) {
      uniqueCode = make_shared<string>(boost::any_cast<string>(m["UniqueCode"]));
    }
  }


  virtual ~SendCommandRequest() = default;
};
class SendCommandShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> contentShrink{};
  shared_ptr<bool> feedback{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> uniqueCode{};

  SendCommandShrinkRequest() {}

  explicit SendCommandShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (contentShrink) {
      res["Content"] = boost::any(*contentShrink);
    }
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (uniqueCode) {
      res["UniqueCode"] = boost::any(*uniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      contentShrink = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<bool>(boost::any_cast<bool>(m["Feedback"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("UniqueCode") != m.end() && !m["UniqueCode"].empty()) {
      uniqueCode = make_shared<string>(boost::any_cast<string>(m["UniqueCode"]));
    }
  }


  virtual ~SendCommandShrinkRequest() = default;
};
class SendCommandResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> uniqueCode{};

  SendCommandResponseBodyData() {}

  explicit SendCommandResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uniqueCode) {
      res["UniqueCode"] = boost::any(*uniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("UniqueCode") != m.end() && !m["UniqueCode"].empty()) {
      uniqueCode = make_shared<string>(boost::any_cast<string>(m["UniqueCode"]));
    }
  }


  virtual ~SendCommandResponseBodyData() = default;
};
class SendCommandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendCommandResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendCommandResponseBody() {}

  explicit SendCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SendCommandResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendCommandResponseBodyData>(model1);
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


  virtual ~SendCommandResponseBody() = default;
};
class SendCommandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCommandResponseBody> body{};

  SendCommandResponse() {}

  explicit SendCommandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCommandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCommandResponseBody>(model1);
      }
    }
  }


  virtual ~SendCommandResponse() = default;
};
class SendMessageRequestStreamExtension : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<bool> isStream{};
  shared_ptr<string> position{};

  SendMessageRequestStreamExtension() {}

  explicit SendMessageRequestStreamExtension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (isStream) {
      res["IsStream"] = boost::any(*isStream);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("IsStream") != m.end() && !m["IsStream"].empty()) {
      isStream = make_shared<bool>(boost::any_cast<bool>(m["IsStream"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
  }


  virtual ~SendMessageRequestStreamExtension() = default;
};
class SendMessageRequestTextRequest : public Darabonba::Model {
public:
  shared_ptr<string> commandType{};
  shared_ptr<string> id{};
  shared_ptr<string> speechText{};
  shared_ptr<bool> interrupt{};

  SendMessageRequestTextRequest() {}

  explicit SendMessageRequestTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandType) {
      res["CommandType"] = boost::any(*commandType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (speechText) {
      res["SpeechText"] = boost::any(*speechText);
    }
    if (interrupt) {
      res["interrupt"] = boost::any(*interrupt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandType") != m.end() && !m["CommandType"].empty()) {
      commandType = make_shared<string>(boost::any_cast<string>(m["CommandType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SpeechText") != m.end() && !m["SpeechText"].empty()) {
      speechText = make_shared<string>(boost::any_cast<string>(m["SpeechText"]));
    }
    if (m.find("interrupt") != m.end() && !m["interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["interrupt"]));
    }
  }


  virtual ~SendMessageRequestTextRequest() = default;
};
class SendMessageRequestVAMLRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> vaml{};

  SendMessageRequestVAMLRequest() {}

  explicit SendMessageRequestVAMLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (vaml) {
      res["Vaml"] = boost::any(*vaml);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Vaml") != m.end() && !m["Vaml"].empty()) {
      vaml = make_shared<string>(boost::any_cast<string>(m["Vaml"]));
    }
  }


  virtual ~SendMessageRequestVAMLRequest() = default;
};
class SendMessageRequest : public Darabonba::Model {
public:
  shared_ptr<bool> feedback{};
  shared_ptr<string> sessionId{};
  shared_ptr<SendMessageRequestStreamExtension> streamExtension{};
  shared_ptr<long> tenantId{};
  shared_ptr<SendMessageRequestTextRequest> textRequest{};
  shared_ptr<SendMessageRequestVAMLRequest> VAMLRequest{};

  SendMessageRequest() {}

  explicit SendMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (streamExtension) {
      res["StreamExtension"] = streamExtension ? boost::any(streamExtension->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (textRequest) {
      res["TextRequest"] = textRequest ? boost::any(textRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (VAMLRequest) {
      res["VAMLRequest"] = VAMLRequest ? boost::any(VAMLRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<bool>(boost::any_cast<bool>(m["Feedback"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("StreamExtension") != m.end() && !m["StreamExtension"].empty()) {
      if (typeid(map<string, boost::any>) == m["StreamExtension"].type()) {
        SendMessageRequestStreamExtension model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StreamExtension"]));
        streamExtension = make_shared<SendMessageRequestStreamExtension>(model1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("TextRequest") != m.end() && !m["TextRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["TextRequest"].type()) {
        SendMessageRequestTextRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TextRequest"]));
        textRequest = make_shared<SendMessageRequestTextRequest>(model1);
      }
    }
    if (m.find("VAMLRequest") != m.end() && !m["VAMLRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["VAMLRequest"].type()) {
        SendMessageRequestVAMLRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VAMLRequest"]));
        VAMLRequest = make_shared<SendMessageRequestVAMLRequest>(model1);
      }
    }
  }


  virtual ~SendMessageRequest() = default;
};
class SendMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> feedback{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> streamExtensionShrink{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> textRequestShrink{};
  shared_ptr<string> VAMLRequestShrink{};

  SendMessageShrinkRequest() {}

  explicit SendMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (streamExtensionShrink) {
      res["StreamExtension"] = boost::any(*streamExtensionShrink);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (textRequestShrink) {
      res["TextRequest"] = boost::any(*textRequestShrink);
    }
    if (VAMLRequestShrink) {
      res["VAMLRequest"] = boost::any(*VAMLRequestShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<bool>(boost::any_cast<bool>(m["Feedback"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("StreamExtension") != m.end() && !m["StreamExtension"].empty()) {
      streamExtensionShrink = make_shared<string>(boost::any_cast<string>(m["StreamExtension"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("TextRequest") != m.end() && !m["TextRequest"].empty()) {
      textRequestShrink = make_shared<string>(boost::any_cast<string>(m["TextRequest"]));
    }
    if (m.find("VAMLRequest") != m.end() && !m["VAMLRequest"].empty()) {
      VAMLRequestShrink = make_shared<string>(boost::any_cast<string>(m["VAMLRequest"]));
    }
  }


  virtual ~SendMessageShrinkRequest() = default;
};
class SendMessageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};

  SendMessageResponseBodyData() {}

  explicit SendMessageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~SendMessageResponseBodyData() = default;
};
class SendMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendMessageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  SendMessageResponseBody() {}

  explicit SendMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SendMessageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendMessageResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendMessageResponseBody() = default;
};
class SendMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMessageResponseBody> body{};

  SendMessageResponse() {}

  explicit SendMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageResponse() = default;
};
class SendTextRequestStreamExtension : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<bool> isStream{};
  shared_ptr<string> position{};

  SendTextRequestStreamExtension() {}

  explicit SendTextRequestStreamExtension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (isStream) {
      res["IsStream"] = boost::any(*isStream);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("IsStream") != m.end() && !m["IsStream"].empty()) {
      isStream = make_shared<bool>(boost::any_cast<bool>(m["IsStream"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
  }


  virtual ~SendTextRequestStreamExtension() = default;
};
class SendTextRequest : public Darabonba::Model {
public:
  shared_ptr<bool> feedback{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> sessionId{};
  shared_ptr<SendTextRequestStreamExtension> streamExtension{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> text{};
  shared_ptr<string> uniqueCode{};

  SendTextRequest() {}

  explicit SendTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (streamExtension) {
      res["StreamExtension"] = streamExtension ? boost::any(streamExtension->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (uniqueCode) {
      res["UniqueCode"] = boost::any(*uniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<bool>(boost::any_cast<bool>(m["Feedback"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("StreamExtension") != m.end() && !m["StreamExtension"].empty()) {
      if (typeid(map<string, boost::any>) == m["StreamExtension"].type()) {
        SendTextRequestStreamExtension model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StreamExtension"]));
        streamExtension = make_shared<SendTextRequestStreamExtension>(model1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("UniqueCode") != m.end() && !m["UniqueCode"].empty()) {
      uniqueCode = make_shared<string>(boost::any_cast<string>(m["UniqueCode"]));
    }
  }


  virtual ~SendTextRequest() = default;
};
class SendTextShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> feedback{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> streamExtensionShrink{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> text{};
  shared_ptr<string> uniqueCode{};

  SendTextShrinkRequest() {}

  explicit SendTextShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (streamExtensionShrink) {
      res["StreamExtension"] = boost::any(*streamExtensionShrink);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (uniqueCode) {
      res["UniqueCode"] = boost::any(*uniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<bool>(boost::any_cast<bool>(m["Feedback"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("StreamExtension") != m.end() && !m["StreamExtension"].empty()) {
      streamExtensionShrink = make_shared<string>(boost::any_cast<string>(m["StreamExtension"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("UniqueCode") != m.end() && !m["UniqueCode"].empty()) {
      uniqueCode = make_shared<string>(boost::any_cast<string>(m["UniqueCode"]));
    }
  }


  virtual ~SendTextShrinkRequest() = default;
};
class SendTextResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> uniqueCode{};

  SendTextResponseBodyData() {}

  explicit SendTextResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uniqueCode) {
      res["UniqueCode"] = boost::any(*uniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("UniqueCode") != m.end() && !m["UniqueCode"].empty()) {
      uniqueCode = make_shared<string>(boost::any_cast<string>(m["UniqueCode"]));
    }
  }


  virtual ~SendTextResponseBodyData() = default;
};
class SendTextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendTextResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendTextResponseBody() {}

  explicit SendTextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SendTextResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendTextResponseBodyData>(model1);
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


  virtual ~SendTextResponseBody() = default;
};
class SendTextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendTextResponseBody> body{};

  SendTextResponse() {}

  explicit SendTextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendTextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendTextResponseBody>(model1);
      }
    }
  }


  virtual ~SendTextResponse() = default;
};
class SendVamlRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> vaml{};

  SendVamlRequest() {}

  explicit SendVamlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (vaml) {
      res["Vaml"] = boost::any(*vaml);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Vaml") != m.end() && !m["Vaml"].empty()) {
      vaml = make_shared<string>(boost::any_cast<string>(m["Vaml"]));
    }
  }


  virtual ~SendVamlRequest() = default;
};
class SendVamlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> uniqueCode{};

  SendVamlResponseBodyData() {}

  explicit SendVamlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uniqueCode) {
      res["UniqueCode"] = boost::any(*uniqueCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("UniqueCode") != m.end() && !m["UniqueCode"].empty()) {
      uniqueCode = make_shared<string>(boost::any_cast<string>(m["UniqueCode"]));
    }
  }


  virtual ~SendVamlResponseBodyData() = default;
};
class SendVamlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendVamlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendVamlResponseBody() {}

  explicit SendVamlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SendVamlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendVamlResponseBodyData>(model1);
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


  virtual ~SendVamlResponseBody() = default;
};
class SendVamlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendVamlResponseBody> body{};

  SendVamlResponse() {}

  explicit SendVamlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendVamlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendVamlResponseBody>(model1);
      }
    }
  }


  virtual ~SendVamlResponse() = default;
};
class StartInstanceRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  StartInstanceRequestApp() {}

  explicit StartInstanceRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~StartInstanceRequestApp() = default;
};
class StartInstanceRequestChannel : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> reqConfig{};
  shared_ptr<string> type{};

  StartInstanceRequestChannel() {}

  explicit StartInstanceRequestChannel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reqConfig) {
      res["ReqConfig"] = boost::any(*reqConfig);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReqConfig") != m.end() && !m["ReqConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ReqConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      reqConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~StartInstanceRequestChannel() = default;
};
class StartInstanceRequestCommandRequest : public Darabonba::Model {
public:
  shared_ptr<bool> alphaSwitch{};
  shared_ptr<string> backGroundImageUrl{};
  shared_ptr<long> locate{};

  StartInstanceRequestCommandRequest() {}

  explicit StartInstanceRequestCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alphaSwitch) {
      res["AlphaSwitch"] = boost::any(*alphaSwitch);
    }
    if (backGroundImageUrl) {
      res["BackGroundImageUrl"] = boost::any(*backGroundImageUrl);
    }
    if (locate) {
      res["Locate"] = boost::any(*locate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlphaSwitch") != m.end() && !m["AlphaSwitch"].empty()) {
      alphaSwitch = make_shared<bool>(boost::any_cast<bool>(m["AlphaSwitch"]));
    }
    if (m.find("BackGroundImageUrl") != m.end() && !m["BackGroundImageUrl"].empty()) {
      backGroundImageUrl = make_shared<string>(boost::any_cast<string>(m["BackGroundImageUrl"]));
    }
    if (m.find("Locate") != m.end() && !m["Locate"].empty()) {
      locate = make_shared<long>(boost::any_cast<long>(m["Locate"]));
    }
  }


  virtual ~StartInstanceRequestCommandRequest() = default;
};
class StartInstanceRequestTextRequest : public Darabonba::Model {
public:
  shared_ptr<long> pitchRate{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> voice{};
  shared_ptr<long> volume{};

  StartInstanceRequestTextRequest() {}

  explicit StartInstanceRequestTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pitchRate) {
      res["PitchRate"] = boost::any(*pitchRate);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (voice) {
      res["Voice"] = boost::any(*voice);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PitchRate") != m.end() && !m["PitchRate"].empty()) {
      pitchRate = make_shared<long>(boost::any_cast<long>(m["PitchRate"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Voice") != m.end() && !m["Voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["Voice"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~StartInstanceRequestTextRequest() = default;
};
class StartInstanceRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  StartInstanceRequestUser() {}

  explicit StartInstanceRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~StartInstanceRequestUser() = default;
};
class StartInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<StartInstanceRequestApp> app{};
  shared_ptr<string> bizId{};
  shared_ptr<StartInstanceRequestChannel> channel{};
  shared_ptr<StartInstanceRequestCommandRequest> commandRequest{};
  shared_ptr<long> tenantId{};
  shared_ptr<StartInstanceRequestTextRequest> textRequest{};
  shared_ptr<StartInstanceRequestUser> user{};

  StartInstanceRequest() {}

  explicit StartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (channel) {
      res["Channel"] = channel ? boost::any(channel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commandRequest) {
      res["CommandRequest"] = commandRequest ? boost::any(commandRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (textRequest) {
      res["TextRequest"] = textRequest ? boost::any(textRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        StartInstanceRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<StartInstanceRequestApp>(model1);
      }
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      if (typeid(map<string, boost::any>) == m["Channel"].type()) {
        StartInstanceRequestChannel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Channel"]));
        channel = make_shared<StartInstanceRequestChannel>(model1);
      }
    }
    if (m.find("CommandRequest") != m.end() && !m["CommandRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommandRequest"].type()) {
        StartInstanceRequestCommandRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommandRequest"]));
        commandRequest = make_shared<StartInstanceRequestCommandRequest>(model1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("TextRequest") != m.end() && !m["TextRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["TextRequest"].type()) {
        StartInstanceRequestTextRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TextRequest"]));
        textRequest = make_shared<StartInstanceRequestTextRequest>(model1);
      }
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        StartInstanceRequestUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<StartInstanceRequestUser>(model1);
      }
    }
  }


  virtual ~StartInstanceRequest() = default;
};
class StartInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> bizId{};
  shared_ptr<string> channelShrink{};
  shared_ptr<string> commandRequestShrink{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> textRequestShrink{};
  shared_ptr<string> userShrink{};

  StartInstanceShrinkRequest() {}

  explicit StartInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (channelShrink) {
      res["Channel"] = boost::any(*channelShrink);
    }
    if (commandRequestShrink) {
      res["CommandRequest"] = boost::any(*commandRequestShrink);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (textRequestShrink) {
      res["TextRequest"] = boost::any(*textRequestShrink);
    }
    if (userShrink) {
      res["User"] = boost::any(*userShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channelShrink = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("CommandRequest") != m.end() && !m["CommandRequest"].empty()) {
      commandRequestShrink = make_shared<string>(boost::any_cast<string>(m["CommandRequest"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("TextRequest") != m.end() && !m["TextRequest"].empty()) {
      textRequestShrink = make_shared<string>(boost::any_cast<string>(m["TextRequest"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      userShrink = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~StartInstanceShrinkRequest() = default;
};
class StartInstanceResponseBodyDataChannel : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> expiredTime{};
  shared_ptr<vector<string>> gslb{};
  shared_ptr<string> nonce{};
  shared_ptr<string> token{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};
  shared_ptr<string> userInfoInChannel{};

  StartInstanceResponseBodyDataChannel() {}

  explicit StartInstanceResponseBodyDataChannel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (gslb) {
      res["Gslb"] = boost::any(*gslb);
    }
    if (nonce) {
      res["Nonce"] = boost::any(*nonce);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userInfoInChannel) {
      res["UserInfoInChannel"] = boost::any(*userInfoInChannel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Gslb") != m.end() && !m["Gslb"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Gslb"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Gslb"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      gslb = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Nonce") != m.end() && !m["Nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["Nonce"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserInfoInChannel") != m.end() && !m["UserInfoInChannel"].empty()) {
      userInfoInChannel = make_shared<string>(boost::any_cast<string>(m["UserInfoInChannel"]));
    }
  }


  virtual ~StartInstanceResponseBodyDataChannel() = default;
};
class StartInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<StartInstanceResponseBodyDataChannel> channel{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> token{};

  StartInstanceResponseBodyData() {}

  explicit StartInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = channel ? boost::any(channel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      if (typeid(map<string, boost::any>) == m["Channel"].type()) {
        StartInstanceResponseBodyDataChannel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Channel"]));
        channel = make_shared<StartInstanceResponseBodyDataChannel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~StartInstanceResponseBodyData() = default;
};
class StartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<StartInstanceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  StartInstanceResponseBody() {}

  explicit StartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        StartInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<StartInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartInstanceResponseBody() = default;
};
class StartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartInstanceResponseBody> body{};

  StartInstanceResponse() {}

  explicit StartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartInstanceResponse() = default;
};
class StartTimedResetOperateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> tenantId{};

  StartTimedResetOperateRequest() {}

  explicit StartTimedResetOperateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~StartTimedResetOperateRequest() = default;
};
class StartTimedResetOperateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> tenantId{};

  StartTimedResetOperateResponseBodyData() {}

  explicit StartTimedResetOperateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~StartTimedResetOperateResponseBodyData() = default;
};
class StartTimedResetOperateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<StartTimedResetOperateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartTimedResetOperateResponseBody() {}

  explicit StartTimedResetOperateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        StartTimedResetOperateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<StartTimedResetOperateResponseBodyData>(model1);
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


  virtual ~StartTimedResetOperateResponseBody() = default;
};
class StartTimedResetOperateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartTimedResetOperateResponseBody> body{};

  StartTimedResetOperateResponse() {}

  explicit StartTimedResetOperateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartTimedResetOperateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartTimedResetOperateResponseBody>(model1);
      }
    }
  }


  virtual ~StartTimedResetOperateResponse() = default;
};
class StopInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};

  StopInstanceRequest() {}

  explicit StopInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~StopInstanceRequest() = default;
};
class StopInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};

  StopInstanceResponseBodyData() {}

  explicit StopInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~StopInstanceResponseBodyData() = default;
};
class StopInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<StopInstanceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  StopInstanceResponseBody() {}

  explicit StopInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        StopInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<StopInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopInstanceResponseBody() = default;
};
class StopInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopInstanceResponseBody> body{};

  StopInstanceResponse() {}

  explicit StopInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopInstanceResponse() = default;
};
class SubmitAudioTo2DAvatarVideoTaskRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  SubmitAudioTo2DAvatarVideoTaskRequestApp() {}

  explicit SubmitAudioTo2DAvatarVideoTaskRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~SubmitAudioTo2DAvatarVideoTaskRequestApp() = default;
};
class SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo : public Darabonba::Model {
public:
  shared_ptr<long> sampleRate{};

  SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo() {}

  explicit SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
  }


  virtual ~SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo() = default;
};
class SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo() {}

  explicit SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo() = default;
};
class SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo : public Darabonba::Model {
public:
  shared_ptr<long> alphaFormat{};
  shared_ptr<string> backgroundImageUrl{};
  shared_ptr<bool> isAlpha{};
  shared_ptr<long> resolution{};

  SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo() {}

  explicit SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alphaFormat) {
      res["AlphaFormat"] = boost::any(*alphaFormat);
    }
    if (backgroundImageUrl) {
      res["BackgroundImageUrl"] = boost::any(*backgroundImageUrl);
    }
    if (isAlpha) {
      res["IsAlpha"] = boost::any(*isAlpha);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlphaFormat") != m.end() && !m["AlphaFormat"].empty()) {
      alphaFormat = make_shared<long>(boost::any_cast<long>(m["AlphaFormat"]));
    }
    if (m.find("BackgroundImageUrl") != m.end() && !m["BackgroundImageUrl"].empty()) {
      backgroundImageUrl = make_shared<string>(boost::any_cast<string>(m["BackgroundImageUrl"]));
    }
    if (m.find("IsAlpha") != m.end() && !m["IsAlpha"].empty()) {
      isAlpha = make_shared<bool>(boost::any_cast<bool>(m["IsAlpha"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<long>(boost::any_cast<long>(m["Resolution"]));
    }
  }


  virtual ~SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo() = default;
};
class SubmitAudioTo2DAvatarVideoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequestApp> app{};
  shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo> audioInfo{};
  shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo> avatarInfo{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};
  shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo> videoInfo{};

  SubmitAudioTo2DAvatarVideoTaskRequest() {}

  explicit SubmitAudioTo2DAvatarVideoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (audioInfo) {
      res["AudioInfo"] = audioInfo ? boost::any(audioInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (avatarInfo) {
      res["AvatarInfo"] = avatarInfo ? boost::any(avatarInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (videoInfo) {
      res["VideoInfo"] = videoInfo ? boost::any(videoInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        SubmitAudioTo2DAvatarVideoTaskRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<SubmitAudioTo2DAvatarVideoTaskRequestApp>(model1);
      }
    }
    if (m.find("AudioInfo") != m.end() && !m["AudioInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AudioInfo"].type()) {
        SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AudioInfo"]));
        audioInfo = make_shared<SubmitAudioTo2DAvatarVideoTaskRequestAudioInfo>(model1);
      }
    }
    if (m.find("AvatarInfo") != m.end() && !m["AvatarInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvatarInfo"].type()) {
        SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvatarInfo"]));
        avatarInfo = make_shared<SubmitAudioTo2DAvatarVideoTaskRequestAvatarInfo>(model1);
      }
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoInfo"].type()) {
        SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoInfo"]));
        videoInfo = make_shared<SubmitAudioTo2DAvatarVideoTaskRequestVideoInfo>(model1);
      }
    }
  }


  virtual ~SubmitAudioTo2DAvatarVideoTaskRequest() = default;
};
class SubmitAudioTo2DAvatarVideoTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> audioInfoShrink{};
  shared_ptr<string> avatarInfoShrink{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};
  shared_ptr<string> videoInfoShrink{};

  SubmitAudioTo2DAvatarVideoTaskShrinkRequest() {}

  explicit SubmitAudioTo2DAvatarVideoTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (audioInfoShrink) {
      res["AudioInfo"] = boost::any(*audioInfoShrink);
    }
    if (avatarInfoShrink) {
      res["AvatarInfo"] = boost::any(*avatarInfoShrink);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (videoInfoShrink) {
      res["VideoInfo"] = boost::any(*videoInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("AudioInfo") != m.end() && !m["AudioInfo"].empty()) {
      audioInfoShrink = make_shared<string>(boost::any_cast<string>(m["AudioInfo"]));
    }
    if (m.find("AvatarInfo") != m.end() && !m["AvatarInfo"].empty()) {
      avatarInfoShrink = make_shared<string>(boost::any_cast<string>(m["AvatarInfo"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      videoInfoShrink = make_shared<string>(boost::any_cast<string>(m["VideoInfo"]));
    }
  }


  virtual ~SubmitAudioTo2DAvatarVideoTaskShrinkRequest() = default;
};
class SubmitAudioTo2DAvatarVideoTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskUuid{};

  SubmitAudioTo2DAvatarVideoTaskResponseBodyData() {}

  explicit SubmitAudioTo2DAvatarVideoTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
  }


  virtual ~SubmitAudioTo2DAvatarVideoTaskResponseBodyData() = default;
};
class SubmitAudioTo2DAvatarVideoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitAudioTo2DAvatarVideoTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitAudioTo2DAvatarVideoTaskResponseBody() {}

  explicit SubmitAudioTo2DAvatarVideoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitAudioTo2DAvatarVideoTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitAudioTo2DAvatarVideoTaskResponseBodyData>(model1);
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


  virtual ~SubmitAudioTo2DAvatarVideoTaskResponseBody() = default;
};
class SubmitAudioTo2DAvatarVideoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitAudioTo2DAvatarVideoTaskResponseBody> body{};

  SubmitAudioTo2DAvatarVideoTaskResponse() {}

  explicit SubmitAudioTo2DAvatarVideoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitAudioTo2DAvatarVideoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitAudioTo2DAvatarVideoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitAudioTo2DAvatarVideoTaskResponse() = default;
};
class SubmitAudioTo3DAvatarVideoTaskRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  SubmitAudioTo3DAvatarVideoTaskRequestApp() {}

  explicit SubmitAudioTo3DAvatarVideoTaskRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~SubmitAudioTo3DAvatarVideoTaskRequestApp() = default;
};
class SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo : public Darabonba::Model {
public:
  shared_ptr<long> sampleRate{};

  SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo() {}

  explicit SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
  }


  virtual ~SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo() = default;
};
class SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<string> code{};
  shared_ptr<string> industryCode{};
  shared_ptr<long> locate{};

  SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo() {}

  explicit SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (industryCode) {
      res["IndustryCode"] = boost::any(*industryCode);
    }
    if (locate) {
      res["Locate"] = boost::any(*locate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IndustryCode") != m.end() && !m["IndustryCode"].empty()) {
      industryCode = make_shared<string>(boost::any_cast<string>(m["IndustryCode"]));
    }
    if (m.find("Locate") != m.end() && !m["Locate"].empty()) {
      locate = make_shared<long>(boost::any_cast<long>(m["Locate"]));
    }
  }


  virtual ~SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo() = default;
};
class SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo : public Darabonba::Model {
public:
  shared_ptr<long> alphaFormat{};
  shared_ptr<string> backgroundImageUrl{};
  shared_ptr<bool> isAlpha{};
  shared_ptr<long> resolution{};

  SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo() {}

  explicit SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alphaFormat) {
      res["AlphaFormat"] = boost::any(*alphaFormat);
    }
    if (backgroundImageUrl) {
      res["BackgroundImageUrl"] = boost::any(*backgroundImageUrl);
    }
    if (isAlpha) {
      res["IsAlpha"] = boost::any(*isAlpha);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlphaFormat") != m.end() && !m["AlphaFormat"].empty()) {
      alphaFormat = make_shared<long>(boost::any_cast<long>(m["AlphaFormat"]));
    }
    if (m.find("BackgroundImageUrl") != m.end() && !m["BackgroundImageUrl"].empty()) {
      backgroundImageUrl = make_shared<string>(boost::any_cast<string>(m["BackgroundImageUrl"]));
    }
    if (m.find("IsAlpha") != m.end() && !m["IsAlpha"].empty()) {
      isAlpha = make_shared<bool>(boost::any_cast<bool>(m["IsAlpha"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<long>(boost::any_cast<long>(m["Resolution"]));
    }
  }


  virtual ~SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo() = default;
};
class SubmitAudioTo3DAvatarVideoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequestApp> app{};
  shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo> audioInfo{};
  shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo> avatarInfo{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};
  shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo> videoInfo{};

  SubmitAudioTo3DAvatarVideoTaskRequest() {}

  explicit SubmitAudioTo3DAvatarVideoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (audioInfo) {
      res["AudioInfo"] = audioInfo ? boost::any(audioInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (avatarInfo) {
      res["AvatarInfo"] = avatarInfo ? boost::any(avatarInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (videoInfo) {
      res["VideoInfo"] = videoInfo ? boost::any(videoInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        SubmitAudioTo3DAvatarVideoTaskRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<SubmitAudioTo3DAvatarVideoTaskRequestApp>(model1);
      }
    }
    if (m.find("AudioInfo") != m.end() && !m["AudioInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AudioInfo"].type()) {
        SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AudioInfo"]));
        audioInfo = make_shared<SubmitAudioTo3DAvatarVideoTaskRequestAudioInfo>(model1);
      }
    }
    if (m.find("AvatarInfo") != m.end() && !m["AvatarInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvatarInfo"].type()) {
        SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvatarInfo"]));
        avatarInfo = make_shared<SubmitAudioTo3DAvatarVideoTaskRequestAvatarInfo>(model1);
      }
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoInfo"].type()) {
        SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoInfo"]));
        videoInfo = make_shared<SubmitAudioTo3DAvatarVideoTaskRequestVideoInfo>(model1);
      }
    }
  }


  virtual ~SubmitAudioTo3DAvatarVideoTaskRequest() = default;
};
class SubmitAudioTo3DAvatarVideoTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> audioInfoShrink{};
  shared_ptr<string> avatarInfoShrink{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};
  shared_ptr<string> videoInfoShrink{};

  SubmitAudioTo3DAvatarVideoTaskShrinkRequest() {}

  explicit SubmitAudioTo3DAvatarVideoTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (audioInfoShrink) {
      res["AudioInfo"] = boost::any(*audioInfoShrink);
    }
    if (avatarInfoShrink) {
      res["AvatarInfo"] = boost::any(*avatarInfoShrink);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (videoInfoShrink) {
      res["VideoInfo"] = boost::any(*videoInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("AudioInfo") != m.end() && !m["AudioInfo"].empty()) {
      audioInfoShrink = make_shared<string>(boost::any_cast<string>(m["AudioInfo"]));
    }
    if (m.find("AvatarInfo") != m.end() && !m["AvatarInfo"].empty()) {
      avatarInfoShrink = make_shared<string>(boost::any_cast<string>(m["AvatarInfo"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      videoInfoShrink = make_shared<string>(boost::any_cast<string>(m["VideoInfo"]));
    }
  }


  virtual ~SubmitAudioTo3DAvatarVideoTaskShrinkRequest() = default;
};
class SubmitAudioTo3DAvatarVideoTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskUuid{};

  SubmitAudioTo3DAvatarVideoTaskResponseBodyData() {}

  explicit SubmitAudioTo3DAvatarVideoTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
  }


  virtual ~SubmitAudioTo3DAvatarVideoTaskResponseBodyData() = default;
};
class SubmitAudioTo3DAvatarVideoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitAudioTo3DAvatarVideoTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitAudioTo3DAvatarVideoTaskResponseBody() {}

  explicit SubmitAudioTo3DAvatarVideoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitAudioTo3DAvatarVideoTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitAudioTo3DAvatarVideoTaskResponseBodyData>(model1);
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


  virtual ~SubmitAudioTo3DAvatarVideoTaskResponseBody() = default;
};
class SubmitAudioTo3DAvatarVideoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitAudioTo3DAvatarVideoTaskResponseBody> body{};

  SubmitAudioTo3DAvatarVideoTaskResponse() {}

  explicit SubmitAudioTo3DAvatarVideoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitAudioTo3DAvatarVideoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitAudioTo3DAvatarVideoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitAudioTo3DAvatarVideoTaskResponse() = default;
};
class SubmitAvatarVideoTaskRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  SubmitAvatarVideoTaskRequestApp() {}

  explicit SubmitAvatarVideoTaskRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~SubmitAvatarVideoTaskRequestApp() = default;
};
class SubmitAvatarVideoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<SubmitAvatarVideoTaskRequestApp> app{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> title{};
  shared_ptr<string> videoParams{};

  SubmitAvatarVideoTaskRequest() {}

  explicit SubmitAvatarVideoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (videoParams) {
      res["VideoParams"] = boost::any(*videoParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        SubmitAvatarVideoTaskRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<SubmitAvatarVideoTaskRequestApp>(model1);
      }
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VideoParams") != m.end() && !m["VideoParams"].empty()) {
      videoParams = make_shared<string>(boost::any_cast<string>(m["VideoParams"]));
    }
  }


  virtual ~SubmitAvatarVideoTaskRequest() = default;
};
class SubmitAvatarVideoTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> title{};
  shared_ptr<string> videoParams{};

  SubmitAvatarVideoTaskShrinkRequest() {}

  explicit SubmitAvatarVideoTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (videoParams) {
      res["VideoParams"] = boost::any(*videoParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VideoParams") != m.end() && !m["VideoParams"].empty()) {
      videoParams = make_shared<string>(boost::any_cast<string>(m["VideoParams"]));
    }
  }


  virtual ~SubmitAvatarVideoTaskShrinkRequest() = default;
};
class SubmitAvatarVideoTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskUuid{};

  SubmitAvatarVideoTaskResponseBodyData() {}

  explicit SubmitAvatarVideoTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
  }


  virtual ~SubmitAvatarVideoTaskResponseBodyData() = default;
};
class SubmitAvatarVideoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitAvatarVideoTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitAvatarVideoTaskResponseBody() {}

  explicit SubmitAvatarVideoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitAvatarVideoTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitAvatarVideoTaskResponseBodyData>(model1);
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


  virtual ~SubmitAvatarVideoTaskResponseBody() = default;
};
class SubmitAvatarVideoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitAvatarVideoTaskResponseBody> body{};

  SubmitAvatarVideoTaskResponse() {}

  explicit SubmitAvatarVideoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitAvatarVideoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitAvatarVideoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitAvatarVideoTaskResponse() = default;
};
class SubmitTextTo2DAvatarVideoTaskRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  SubmitTextTo2DAvatarVideoTaskRequestApp() {}

  explicit SubmitTextTo2DAvatarVideoTaskRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~SubmitTextTo2DAvatarVideoTaskRequestApp() = default;
};
class SubmitTextTo2DAvatarVideoTaskRequestAudioInfo : public Darabonba::Model {
public:
  shared_ptr<long> pitchRate{};
  shared_ptr<long> sampleRate{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> voice{};
  shared_ptr<long> volume{};

  SubmitTextTo2DAvatarVideoTaskRequestAudioInfo() {}

  explicit SubmitTextTo2DAvatarVideoTaskRequestAudioInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pitchRate) {
      res["PitchRate"] = boost::any(*pitchRate);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (voice) {
      res["Voice"] = boost::any(*voice);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PitchRate") != m.end() && !m["PitchRate"].empty()) {
      pitchRate = make_shared<long>(boost::any_cast<long>(m["PitchRate"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Voice") != m.end() && !m["Voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["Voice"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~SubmitTextTo2DAvatarVideoTaskRequestAudioInfo() = default;
};
class SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> height{};
  shared_ptr<long> width{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo() {}

  explicit SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo() = default;
};
class SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<string> name{};
  shared_ptr<string> outlineColor{};
  shared_ptr<long> size{};
  shared_ptr<long> y{};

  SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle() {}

  explicit SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outlineColor) {
      res["OutlineColor"] = boost::any(*outlineColor);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OutlineColor") != m.end() && !m["OutlineColor"].empty()) {
      outlineColor = make_shared<string>(boost::any_cast<string>(m["OutlineColor"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle() = default;
};
class SubmitTextTo2DAvatarVideoTaskRequestVideoInfo : public Darabonba::Model {
public:
  shared_ptr<long> alphaFormat{};
  shared_ptr<string> backgroundImageUrl{};
  shared_ptr<bool> isAlpha{};
  shared_ptr<bool> isSubtitles{};
  shared_ptr<long> resolution{};
  shared_ptr<bool> subtitleEmbedded{};
  shared_ptr<SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle> subtitleStyle{};

  SubmitTextTo2DAvatarVideoTaskRequestVideoInfo() {}

  explicit SubmitTextTo2DAvatarVideoTaskRequestVideoInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alphaFormat) {
      res["AlphaFormat"] = boost::any(*alphaFormat);
    }
    if (backgroundImageUrl) {
      res["BackgroundImageUrl"] = boost::any(*backgroundImageUrl);
    }
    if (isAlpha) {
      res["IsAlpha"] = boost::any(*isAlpha);
    }
    if (isSubtitles) {
      res["IsSubtitles"] = boost::any(*isSubtitles);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    if (subtitleEmbedded) {
      res["SubtitleEmbedded"] = boost::any(*subtitleEmbedded);
    }
    if (subtitleStyle) {
      res["SubtitleStyle"] = subtitleStyle ? boost::any(subtitleStyle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlphaFormat") != m.end() && !m["AlphaFormat"].empty()) {
      alphaFormat = make_shared<long>(boost::any_cast<long>(m["AlphaFormat"]));
    }
    if (m.find("BackgroundImageUrl") != m.end() && !m["BackgroundImageUrl"].empty()) {
      backgroundImageUrl = make_shared<string>(boost::any_cast<string>(m["BackgroundImageUrl"]));
    }
    if (m.find("IsAlpha") != m.end() && !m["IsAlpha"].empty()) {
      isAlpha = make_shared<bool>(boost::any_cast<bool>(m["IsAlpha"]));
    }
    if (m.find("IsSubtitles") != m.end() && !m["IsSubtitles"].empty()) {
      isSubtitles = make_shared<bool>(boost::any_cast<bool>(m["IsSubtitles"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<long>(boost::any_cast<long>(m["Resolution"]));
    }
    if (m.find("SubtitleEmbedded") != m.end() && !m["SubtitleEmbedded"].empty()) {
      subtitleEmbedded = make_shared<bool>(boost::any_cast<bool>(m["SubtitleEmbedded"]));
    }
    if (m.find("SubtitleStyle") != m.end() && !m["SubtitleStyle"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubtitleStyle"].type()) {
        SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubtitleStyle"]));
        subtitleStyle = make_shared<SubmitTextTo2DAvatarVideoTaskRequestVideoInfoSubtitleStyle>(model1);
      }
    }
  }


  virtual ~SubmitTextTo2DAvatarVideoTaskRequestVideoInfo() = default;
};
class SubmitTextTo2DAvatarVideoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<SubmitTextTo2DAvatarVideoTaskRequestApp> app{};
  shared_ptr<SubmitTextTo2DAvatarVideoTaskRequestAudioInfo> audioInfo{};
  shared_ptr<SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo> avatarInfo{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> text{};
  shared_ptr<string> title{};
  shared_ptr<SubmitTextTo2DAvatarVideoTaskRequestVideoInfo> videoInfo{};

  SubmitTextTo2DAvatarVideoTaskRequest() {}

  explicit SubmitTextTo2DAvatarVideoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (audioInfo) {
      res["AudioInfo"] = audioInfo ? boost::any(audioInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (avatarInfo) {
      res["AvatarInfo"] = avatarInfo ? boost::any(avatarInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (videoInfo) {
      res["VideoInfo"] = videoInfo ? boost::any(videoInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        SubmitTextTo2DAvatarVideoTaskRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<SubmitTextTo2DAvatarVideoTaskRequestApp>(model1);
      }
    }
    if (m.find("AudioInfo") != m.end() && !m["AudioInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AudioInfo"].type()) {
        SubmitTextTo2DAvatarVideoTaskRequestAudioInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AudioInfo"]));
        audioInfo = make_shared<SubmitTextTo2DAvatarVideoTaskRequestAudioInfo>(model1);
      }
    }
    if (m.find("AvatarInfo") != m.end() && !m["AvatarInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvatarInfo"].type()) {
        SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvatarInfo"]));
        avatarInfo = make_shared<SubmitTextTo2DAvatarVideoTaskRequestAvatarInfo>(model1);
      }
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoInfo"].type()) {
        SubmitTextTo2DAvatarVideoTaskRequestVideoInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoInfo"]));
        videoInfo = make_shared<SubmitTextTo2DAvatarVideoTaskRequestVideoInfo>(model1);
      }
    }
  }


  virtual ~SubmitTextTo2DAvatarVideoTaskRequest() = default;
};
class SubmitTextTo2DAvatarVideoTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> audioInfoShrink{};
  shared_ptr<string> avatarInfoShrink{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> text{};
  shared_ptr<string> title{};
  shared_ptr<string> videoInfoShrink{};

  SubmitTextTo2DAvatarVideoTaskShrinkRequest() {}

  explicit SubmitTextTo2DAvatarVideoTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (audioInfoShrink) {
      res["AudioInfo"] = boost::any(*audioInfoShrink);
    }
    if (avatarInfoShrink) {
      res["AvatarInfo"] = boost::any(*avatarInfoShrink);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (videoInfoShrink) {
      res["VideoInfo"] = boost::any(*videoInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("AudioInfo") != m.end() && !m["AudioInfo"].empty()) {
      audioInfoShrink = make_shared<string>(boost::any_cast<string>(m["AudioInfo"]));
    }
    if (m.find("AvatarInfo") != m.end() && !m["AvatarInfo"].empty()) {
      avatarInfoShrink = make_shared<string>(boost::any_cast<string>(m["AvatarInfo"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      videoInfoShrink = make_shared<string>(boost::any_cast<string>(m["VideoInfo"]));
    }
  }


  virtual ~SubmitTextTo2DAvatarVideoTaskShrinkRequest() = default;
};
class SubmitTextTo2DAvatarVideoTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskUuid{};

  SubmitTextTo2DAvatarVideoTaskResponseBodyData() {}

  explicit SubmitTextTo2DAvatarVideoTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
  }


  virtual ~SubmitTextTo2DAvatarVideoTaskResponseBodyData() = default;
};
class SubmitTextTo2DAvatarVideoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitTextTo2DAvatarVideoTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitTextTo2DAvatarVideoTaskResponseBody() {}

  explicit SubmitTextTo2DAvatarVideoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitTextTo2DAvatarVideoTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitTextTo2DAvatarVideoTaskResponseBodyData>(model1);
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


  virtual ~SubmitTextTo2DAvatarVideoTaskResponseBody() = default;
};
class SubmitTextTo2DAvatarVideoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitTextTo2DAvatarVideoTaskResponseBody> body{};

  SubmitTextTo2DAvatarVideoTaskResponse() {}

  explicit SubmitTextTo2DAvatarVideoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitTextTo2DAvatarVideoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitTextTo2DAvatarVideoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitTextTo2DAvatarVideoTaskResponse() = default;
};
class SubmitTextTo3DAvatarVideoTaskRequestApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  SubmitTextTo3DAvatarVideoTaskRequestApp() {}

  explicit SubmitTextTo3DAvatarVideoTaskRequestApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~SubmitTextTo3DAvatarVideoTaskRequestApp() = default;
};
class SubmitTextTo3DAvatarVideoTaskRequestAudioInfo : public Darabonba::Model {
public:
  shared_ptr<long> pitchRate{};
  shared_ptr<long> sampleRate{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> voice{};
  shared_ptr<long> volume{};

  SubmitTextTo3DAvatarVideoTaskRequestAudioInfo() {}

  explicit SubmitTextTo3DAvatarVideoTaskRequestAudioInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pitchRate) {
      res["PitchRate"] = boost::any(*pitchRate);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (voice) {
      res["Voice"] = boost::any(*voice);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PitchRate") != m.end() && !m["PitchRate"].empty()) {
      pitchRate = make_shared<long>(boost::any_cast<long>(m["PitchRate"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Voice") != m.end() && !m["Voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["Voice"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~SubmitTextTo3DAvatarVideoTaskRequestAudioInfo() = default;
};
class SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<string> code{};
  shared_ptr<string> industryCode{};
  shared_ptr<long> locate{};

  SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo() {}

  explicit SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (industryCode) {
      res["IndustryCode"] = boost::any(*industryCode);
    }
    if (locate) {
      res["Locate"] = boost::any(*locate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IndustryCode") != m.end() && !m["IndustryCode"].empty()) {
      industryCode = make_shared<string>(boost::any_cast<string>(m["IndustryCode"]));
    }
    if (m.find("Locate") != m.end() && !m["Locate"].empty()) {
      locate = make_shared<long>(boost::any_cast<long>(m["Locate"]));
    }
  }


  virtual ~SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo() = default;
};
class SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle : public Darabonba::Model {
public:
  shared_ptr<string> color{};
  shared_ptr<string> name{};
  shared_ptr<string> outlineColor{};
  shared_ptr<long> size{};
  shared_ptr<long> y{};

  SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle() {}

  explicit SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outlineColor) {
      res["OutlineColor"] = boost::any(*outlineColor);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OutlineColor") != m.end() && !m["OutlineColor"].empty()) {
      outlineColor = make_shared<string>(boost::any_cast<string>(m["OutlineColor"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle() = default;
};
class SubmitTextTo3DAvatarVideoTaskRequestVideoInfo : public Darabonba::Model {
public:
  shared_ptr<long> alphaFormat{};
  shared_ptr<string> backgroundImageUrl{};
  shared_ptr<bool> isAlpha{};
  shared_ptr<bool> isSubtitles{};
  shared_ptr<long> resolution{};
  shared_ptr<bool> subtitleEmbedded{};
  shared_ptr<SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle> subtitleStyle{};

  SubmitTextTo3DAvatarVideoTaskRequestVideoInfo() {}

  explicit SubmitTextTo3DAvatarVideoTaskRequestVideoInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alphaFormat) {
      res["AlphaFormat"] = boost::any(*alphaFormat);
    }
    if (backgroundImageUrl) {
      res["BackgroundImageUrl"] = boost::any(*backgroundImageUrl);
    }
    if (isAlpha) {
      res["IsAlpha"] = boost::any(*isAlpha);
    }
    if (isSubtitles) {
      res["IsSubtitles"] = boost::any(*isSubtitles);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    if (subtitleEmbedded) {
      res["SubtitleEmbedded"] = boost::any(*subtitleEmbedded);
    }
    if (subtitleStyle) {
      res["SubtitleStyle"] = subtitleStyle ? boost::any(subtitleStyle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlphaFormat") != m.end() && !m["AlphaFormat"].empty()) {
      alphaFormat = make_shared<long>(boost::any_cast<long>(m["AlphaFormat"]));
    }
    if (m.find("BackgroundImageUrl") != m.end() && !m["BackgroundImageUrl"].empty()) {
      backgroundImageUrl = make_shared<string>(boost::any_cast<string>(m["BackgroundImageUrl"]));
    }
    if (m.find("IsAlpha") != m.end() && !m["IsAlpha"].empty()) {
      isAlpha = make_shared<bool>(boost::any_cast<bool>(m["IsAlpha"]));
    }
    if (m.find("IsSubtitles") != m.end() && !m["IsSubtitles"].empty()) {
      isSubtitles = make_shared<bool>(boost::any_cast<bool>(m["IsSubtitles"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<long>(boost::any_cast<long>(m["Resolution"]));
    }
    if (m.find("SubtitleEmbedded") != m.end() && !m["SubtitleEmbedded"].empty()) {
      subtitleEmbedded = make_shared<bool>(boost::any_cast<bool>(m["SubtitleEmbedded"]));
    }
    if (m.find("SubtitleStyle") != m.end() && !m["SubtitleStyle"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubtitleStyle"].type()) {
        SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubtitleStyle"]));
        subtitleStyle = make_shared<SubmitTextTo3DAvatarVideoTaskRequestVideoInfoSubtitleStyle>(model1);
      }
    }
  }


  virtual ~SubmitTextTo3DAvatarVideoTaskRequestVideoInfo() = default;
};
class SubmitTextTo3DAvatarVideoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<SubmitTextTo3DAvatarVideoTaskRequestApp> app{};
  shared_ptr<SubmitTextTo3DAvatarVideoTaskRequestAudioInfo> audioInfo{};
  shared_ptr<SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo> avatarInfo{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> text{};
  shared_ptr<string> title{};
  shared_ptr<SubmitTextTo3DAvatarVideoTaskRequestVideoInfo> videoInfo{};

  SubmitTextTo3DAvatarVideoTaskRequest() {}

  explicit SubmitTextTo3DAvatarVideoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["App"] = app ? boost::any(app->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (audioInfo) {
      res["AudioInfo"] = audioInfo ? boost::any(audioInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (avatarInfo) {
      res["AvatarInfo"] = avatarInfo ? boost::any(avatarInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (videoInfo) {
      res["VideoInfo"] = videoInfo ? boost::any(videoInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(map<string, boost::any>) == m["App"].type()) {
        SubmitTextTo3DAvatarVideoTaskRequestApp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["App"]));
        app = make_shared<SubmitTextTo3DAvatarVideoTaskRequestApp>(model1);
      }
    }
    if (m.find("AudioInfo") != m.end() && !m["AudioInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AudioInfo"].type()) {
        SubmitTextTo3DAvatarVideoTaskRequestAudioInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AudioInfo"]));
        audioInfo = make_shared<SubmitTextTo3DAvatarVideoTaskRequestAudioInfo>(model1);
      }
    }
    if (m.find("AvatarInfo") != m.end() && !m["AvatarInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvatarInfo"].type()) {
        SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvatarInfo"]));
        avatarInfo = make_shared<SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo>(model1);
      }
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoInfo"].type()) {
        SubmitTextTo3DAvatarVideoTaskRequestVideoInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoInfo"]));
        videoInfo = make_shared<SubmitTextTo3DAvatarVideoTaskRequestVideoInfo>(model1);
      }
    }
  }


  virtual ~SubmitTextTo3DAvatarVideoTaskRequest() = default;
};
class SubmitTextTo3DAvatarVideoTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appShrink{};
  shared_ptr<string> audioInfoShrink{};
  shared_ptr<string> avatarInfoShrink{};
  shared_ptr<bool> callback{};
  shared_ptr<string> callbackParams{};
  shared_ptr<string> extParams{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> text{};
  shared_ptr<string> title{};
  shared_ptr<string> videoInfoShrink{};

  SubmitTextTo3DAvatarVideoTaskShrinkRequest() {}

  explicit SubmitTextTo3DAvatarVideoTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appShrink) {
      res["App"] = boost::any(*appShrink);
    }
    if (audioInfoShrink) {
      res["AudioInfo"] = boost::any(*audioInfoShrink);
    }
    if (avatarInfoShrink) {
      res["AvatarInfo"] = boost::any(*avatarInfoShrink);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (callbackParams) {
      res["CallbackParams"] = boost::any(*callbackParams);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (videoInfoShrink) {
      res["VideoInfo"] = boost::any(*videoInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      appShrink = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("AudioInfo") != m.end() && !m["AudioInfo"].empty()) {
      audioInfoShrink = make_shared<string>(boost::any_cast<string>(m["AudioInfo"]));
    }
    if (m.find("AvatarInfo") != m.end() && !m["AvatarInfo"].empty()) {
      avatarInfoShrink = make_shared<string>(boost::any_cast<string>(m["AvatarInfo"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("CallbackParams") != m.end() && !m["CallbackParams"].empty()) {
      callbackParams = make_shared<string>(boost::any_cast<string>(m["CallbackParams"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      videoInfoShrink = make_shared<string>(boost::any_cast<string>(m["VideoInfo"]));
    }
  }


  virtual ~SubmitTextTo3DAvatarVideoTaskShrinkRequest() = default;
};
class SubmitTextTo3DAvatarVideoTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskUuid{};

  SubmitTextTo3DAvatarVideoTaskResponseBodyData() {}

  explicit SubmitTextTo3DAvatarVideoTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskUuid) {
      res["TaskUuid"] = boost::any(*taskUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskUuid") != m.end() && !m["TaskUuid"].empty()) {
      taskUuid = make_shared<string>(boost::any_cast<string>(m["TaskUuid"]));
    }
  }


  virtual ~SubmitTextTo3DAvatarVideoTaskResponseBodyData() = default;
};
class SubmitTextTo3DAvatarVideoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitTextTo3DAvatarVideoTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitTextTo3DAvatarVideoTaskResponseBody() {}

  explicit SubmitTextTo3DAvatarVideoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitTextTo3DAvatarVideoTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitTextTo3DAvatarVideoTaskResponseBodyData>(model1);
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


  virtual ~SubmitTextTo3DAvatarVideoTaskResponseBody() = default;
};
class SubmitTextTo3DAvatarVideoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitTextTo3DAvatarVideoTaskResponseBody> body{};

  SubmitTextTo3DAvatarVideoTaskResponse() {}

  explicit SubmitTextTo3DAvatarVideoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitTextTo3DAvatarVideoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitTextTo3DAvatarVideoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitTextTo3DAvatarVideoTaskResponse() = default;
};
class Update2dAvatarRequest : public Darabonba::Model {
public:
  shared_ptr<bool> callback{};
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};
  shared_ptr<long> orientation{};
  shared_ptr<string> portrait{};
  shared_ptr<long> tenantId{};
  shared_ptr<bool> transparent{};
  shared_ptr<string> video{};

  Update2dAvatarRequest() {}

  explicit Update2dAvatarRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orientation) {
      res["Orientation"] = boost::any(*orientation);
    }
    if (portrait) {
      res["Portrait"] = boost::any(*portrait);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (transparent) {
      res["Transparent"] = boost::any(*transparent);
    }
    if (video) {
      res["Video"] = boost::any(*video);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<bool>(boost::any_cast<bool>(m["Callback"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Orientation") != m.end() && !m["Orientation"].empty()) {
      orientation = make_shared<long>(boost::any_cast<long>(m["Orientation"]));
    }
    if (m.find("Portrait") != m.end() && !m["Portrait"].empty()) {
      portrait = make_shared<string>(boost::any_cast<string>(m["Portrait"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Transparent") != m.end() && !m["Transparent"].empty()) {
      transparent = make_shared<bool>(boost::any_cast<bool>(m["Transparent"]));
    }
    if (m.find("Video") != m.end() && !m["Video"].empty()) {
      video = make_shared<string>(boost::any_cast<string>(m["Video"]));
    }
  }


  virtual ~Update2dAvatarRequest() = default;
};
class Update2dAvatarResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};

  Update2dAvatarResponseBodyData() {}

  explicit Update2dAvatarResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~Update2dAvatarResponseBodyData() = default;
};
class Update2dAvatarResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<Update2dAvatarResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  Update2dAvatarResponseBody() {}

  explicit Update2dAvatarResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        Update2dAvatarResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<Update2dAvatarResponseBodyData>(model1);
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


  virtual ~Update2dAvatarResponseBody() = default;
};
class Update2dAvatarResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Update2dAvatarResponseBody> body{};

  Update2dAvatarResponse() {}

  explicit Update2dAvatarResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Update2dAvatarResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Update2dAvatarResponseBody>(model1);
      }
    }
  }


  virtual ~Update2dAvatarResponse() = default;
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
  CancelVideoTaskResponse cancelVideoTaskWithOptions(shared_ptr<CancelVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelVideoTaskResponse cancelVideoTask(shared_ptr<CancelVideoTaskRequest> request);
  ClientAuthResponse clientAuthWithOptions(shared_ptr<ClientAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClientAuthResponse clientAuth(shared_ptr<ClientAuthRequest> request);
  ClientStartResponse clientStartWithOptions(shared_ptr<ClientStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClientStartResponse clientStart(shared_ptr<ClientStartRequest> request);
  ClientUnbindDeviceResponse clientUnbindDeviceWithOptions(shared_ptr<ClientUnbindDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClientUnbindDeviceResponse clientUnbindDevice(shared_ptr<ClientUnbindDeviceRequest> request);
  CloseTimedResetOperateResponse closeTimedResetOperateWithOptions(shared_ptr<CloseTimedResetOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseTimedResetOperateResponse closeTimedResetOperate(shared_ptr<CloseTimedResetOperateRequest> request);
  ConfirmAvatar2dTrainResponse confirmAvatar2dTrainWithOptions(shared_ptr<ConfirmAvatar2dTrainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmAvatar2dTrainResponse confirmAvatar2dTrain(shared_ptr<ConfirmAvatar2dTrainRequest> request);
  Create2dAvatarResponse create2dAvatarWithOptions(shared_ptr<Create2dAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Create2dAvatarResponse create2dAvatar(shared_ptr<Create2dAvatarRequest> request);
  DeleteAvatarResponse deleteAvatarWithOptions(shared_ptr<DeleteAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAvatarResponse deleteAvatar(shared_ptr<DeleteAvatarRequest> request);
  DuplexDecisionResponse duplexDecisionWithOptions(shared_ptr<DuplexDecisionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DuplexDecisionResponse duplexDecision(shared_ptr<DuplexDecisionRequest> request);
  GetVideoTaskInfoResponse getVideoTaskInfoWithOptions(shared_ptr<GetVideoTaskInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVideoTaskInfoResponse getVideoTaskInfo(shared_ptr<GetVideoTaskInfoRequest> request);
  LicenseAuthResponse licenseAuthWithOptions(shared_ptr<LicenseAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LicenseAuthResponse licenseAuth(shared_ptr<LicenseAuthRequest> request);
  QueryAvatarResponse queryAvatarWithOptions(shared_ptr<QueryAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAvatarResponse queryAvatar(shared_ptr<QueryAvatarRequest> request);
  QueryAvatarListResponse queryAvatarListWithOptions(shared_ptr<QueryAvatarListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAvatarListResponse queryAvatarList(shared_ptr<QueryAvatarListRequest> request);
  QueryRunningInstanceResponse queryRunningInstanceWithOptions(shared_ptr<QueryRunningInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRunningInstanceResponse queryRunningInstance(shared_ptr<QueryRunningInstanceRequest> request);
  QueryTimedResetOperateStatusResponse queryTimedResetOperateStatusWithOptions(shared_ptr<QueryTimedResetOperateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTimedResetOperateStatusResponse queryTimedResetOperateStatus(shared_ptr<QueryTimedResetOperateStatusRequest> request);
  QueryVideoTaskInfoResponse queryVideoTaskInfoWithOptions(shared_ptr<QueryVideoTaskInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVideoTaskInfoResponse queryVideoTaskInfo(shared_ptr<QueryVideoTaskInfoRequest> request);
  Render3dAvatarResponse render3dAvatarWithOptions(shared_ptr<Render3dAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Render3dAvatarResponse render3dAvatar(shared_ptr<Render3dAvatarRequest> request);
  SendCommandResponse sendCommandWithOptions(shared_ptr<SendCommandRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCommandResponse sendCommand(shared_ptr<SendCommandRequest> request);
  SendMessageResponse sendMessageWithOptions(shared_ptr<SendMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageResponse sendMessage(shared_ptr<SendMessageRequest> request);
  SendTextResponse sendTextWithOptions(shared_ptr<SendTextRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendTextResponse sendText(shared_ptr<SendTextRequest> request);
  SendVamlResponse sendVamlWithOptions(shared_ptr<SendVamlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVamlResponse sendVaml(shared_ptr<SendVamlRequest> request);
  StartInstanceResponse startInstanceWithOptions(shared_ptr<StartInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartInstanceResponse startInstance(shared_ptr<StartInstanceRequest> request);
  StartTimedResetOperateResponse startTimedResetOperateWithOptions(shared_ptr<StartTimedResetOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartTimedResetOperateResponse startTimedResetOperate(shared_ptr<StartTimedResetOperateRequest> request);
  StopInstanceResponse stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopInstanceResponse stopInstance(shared_ptr<StopInstanceRequest> request);
  SubmitAudioTo2DAvatarVideoTaskResponse submitAudioTo2DAvatarVideoTaskWithOptions(shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitAudioTo2DAvatarVideoTaskResponse submitAudioTo2DAvatarVideoTask(shared_ptr<SubmitAudioTo2DAvatarVideoTaskRequest> request);
  SubmitAudioTo3DAvatarVideoTaskResponse submitAudioTo3DAvatarVideoTaskWithOptions(shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitAudioTo3DAvatarVideoTaskResponse submitAudioTo3DAvatarVideoTask(shared_ptr<SubmitAudioTo3DAvatarVideoTaskRequest> request);
  SubmitAvatarVideoTaskResponse submitAvatarVideoTaskWithOptions(shared_ptr<SubmitAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitAvatarVideoTaskResponse submitAvatarVideoTask(shared_ptr<SubmitAvatarVideoTaskRequest> request);
  SubmitTextTo2DAvatarVideoTaskResponse submitTextTo2DAvatarVideoTaskWithOptions(shared_ptr<SubmitTextTo2DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitTextTo2DAvatarVideoTaskResponse submitTextTo2DAvatarVideoTask(shared_ptr<SubmitTextTo2DAvatarVideoTaskRequest> request);
  SubmitTextTo3DAvatarVideoTaskResponse submitTextTo3DAvatarVideoTaskWithOptions(shared_ptr<SubmitTextTo3DAvatarVideoTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitTextTo3DAvatarVideoTaskResponse submitTextTo3DAvatarVideoTask(shared_ptr<SubmitTextTo3DAvatarVideoTaskRequest> request);
  Update2dAvatarResponse update2dAvatarWithOptions(shared_ptr<Update2dAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Update2dAvatarResponse update2dAvatar(shared_ptr<Update2dAvatarRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Avatar20220130

#endif
