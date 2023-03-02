// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LTL20190510_H_
#define ALIBABACLOUD_LTL20190510_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ltl20190510 {
class ApplyDataModelConfigInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> configuration{};
  shared_ptr<string> dataModelCode{};
  shared_ptr<string> productKey{};

  ApplyDataModelConfigInfoRequest() {}

  explicit ApplyDataModelConfigInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (configuration) {
      res["Configuration"] = boost::any(*configuration);
    }
    if (dataModelCode) {
      res["DataModelCode"] = boost::any(*dataModelCode);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      configuration = make_shared<string>(boost::any_cast<string>(m["Configuration"]));
    }
    if (m.find("DataModelCode") != m.end() && !m["DataModelCode"].empty()) {
      dataModelCode = make_shared<string>(boost::any_cast<string>(m["DataModelCode"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~ApplyDataModelConfigInfoRequest() = default;
};
class ApplyDataModelConfigInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ApplyDataModelConfigInfoResponseBody() {}

  explicit ApplyDataModelConfigInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ApplyDataModelConfigInfoResponseBody() = default;
};
class ApplyDataModelConfigInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyDataModelConfigInfoResponseBody> body{};

  ApplyDataModelConfigInfoResponse() {}

  explicit ApplyDataModelConfigInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyDataModelConfigInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyDataModelConfigInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyDataModelConfigInfoResponse() = default;
};
class AttachDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> businessId{};
  shared_ptr<string> key{};
  shared_ptr<string> productKey{};
  shared_ptr<string> value{};

  AttachDataRequest() {}

  explicit AttachDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~AttachDataRequest() = default;
};
class AttachDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AttachDataResponseBody() {}

  explicit AttachDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AttachDataResponseBody() = default;
};
class AttachDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachDataResponseBody> body{};

  AttachDataResponse() {}

  explicit AttachDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachDataResponseBody>(model1);
      }
    }
  }


  virtual ~AttachDataResponse() = default;
};
class AttachDataWithSignatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> businessId{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<string> key{};
  shared_ptr<string> productKey{};
  shared_ptr<string> value{};

  AttachDataWithSignatureRequest() {}

  explicit AttachDataWithSignatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~AttachDataWithSignatureRequest() = default;
};
class AttachDataWithSignatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AttachDataWithSignatureResponseBody() {}

  explicit AttachDataWithSignatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AttachDataWithSignatureResponseBody() = default;
};
class AttachDataWithSignatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachDataWithSignatureResponseBody> body{};

  AttachDataWithSignatureResponse() {}

  explicit AttachDataWithSignatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachDataWithSignatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachDataWithSignatureResponseBody>(model1);
      }
    }
  }


  virtual ~AttachDataWithSignatureResponse() = default;
};
class AuthorizeDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> deviceId{};

  AuthorizeDeviceRequest() {}

  explicit AuthorizeDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~AuthorizeDeviceRequest() = default;
};
class AuthorizeDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AuthorizeDeviceResponseBody() {}

  explicit AuthorizeDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AuthorizeDeviceResponseBody() = default;
};
class AuthorizeDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeDeviceResponseBody> body{};

  AuthorizeDeviceResponse() {}

  explicit AuthorizeDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeDeviceResponse() = default;
};
class AuthorizeDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> deviceGroupId{};

  AuthorizeDeviceGroupRequest() {}

  explicit AuthorizeDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
  }


  virtual ~AuthorizeDeviceGroupRequest() = default;
};
class AuthorizeDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AuthorizeDeviceGroupResponseBody() {}

  explicit AuthorizeDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AuthorizeDeviceGroupResponseBody() = default;
};
class AuthorizeDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeDeviceGroupResponseBody> body{};

  AuthorizeDeviceGroupResponse() {}

  explicit AuthorizeDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeDeviceGroupResponse() = default;
};
class BatchUploadMPCoSPhaseDigestInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<map<string, boost::any>> phaseDataList{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};

  BatchUploadMPCoSPhaseDigestInfoRequest() {}

  explicit BatchUploadMPCoSPhaseDigestInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (phaseDataList) {
      res["PhaseDataList"] = boost::any(*phaseDataList);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("PhaseDataList") != m.end() && !m["PhaseDataList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PhaseDataList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      phaseDataList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseDigestInfoRequest() = default;
};
class BatchUploadMPCoSPhaseDigestInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> phaseDataListShrink{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};

  BatchUploadMPCoSPhaseDigestInfoShrinkRequest() {}

  explicit BatchUploadMPCoSPhaseDigestInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (phaseDataListShrink) {
      res["PhaseDataList"] = boost::any(*phaseDataListShrink);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("PhaseDataList") != m.end() && !m["PhaseDataList"].empty()) {
      phaseDataListShrink = make_shared<string>(boost::any_cast<string>(m["PhaseDataList"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseDigestInfoShrinkRequest() = default;
};
class BatchUploadMPCoSPhaseDigestInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchUploadMPCoSPhaseDigestInfoResponseBody() {}

  explicit BatchUploadMPCoSPhaseDigestInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseDigestInfoResponseBody() = default;
};
class BatchUploadMPCoSPhaseDigestInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchUploadMPCoSPhaseDigestInfoResponseBody> body{};

  BatchUploadMPCoSPhaseDigestInfoResponse() {}

  explicit BatchUploadMPCoSPhaseDigestInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUploadMPCoSPhaseDigestInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUploadMPCoSPhaseDigestInfoResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUploadMPCoSPhaseDigestInfoResponse() = default;
};
class BatchUploadMPCoSPhaseDigestInfoByDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<map<string, boost::any>> phaseDataList{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};

  BatchUploadMPCoSPhaseDigestInfoByDeviceRequest() {}

  explicit BatchUploadMPCoSPhaseDigestInfoByDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (phaseDataList) {
      res["PhaseDataList"] = boost::any(*phaseDataList);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("PhaseDataList") != m.end() && !m["PhaseDataList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PhaseDataList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      phaseDataList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseDigestInfoByDeviceRequest() = default;
};
class BatchUploadMPCoSPhaseDigestInfoByDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<string> phaseDataListShrink{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};

  BatchUploadMPCoSPhaseDigestInfoByDeviceShrinkRequest() {}

  explicit BatchUploadMPCoSPhaseDigestInfoByDeviceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (phaseDataListShrink) {
      res["PhaseDataList"] = boost::any(*phaseDataListShrink);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("PhaseDataList") != m.end() && !m["PhaseDataList"].empty()) {
      phaseDataListShrink = make_shared<string>(boost::any_cast<string>(m["PhaseDataList"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseDigestInfoByDeviceShrinkRequest() = default;
};
class BatchUploadMPCoSPhaseDigestInfoByDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchUploadMPCoSPhaseDigestInfoByDeviceResponseBody() {}

  explicit BatchUploadMPCoSPhaseDigestInfoByDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseDigestInfoByDeviceResponseBody() = default;
};
class BatchUploadMPCoSPhaseDigestInfoByDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchUploadMPCoSPhaseDigestInfoByDeviceResponseBody> body{};

  BatchUploadMPCoSPhaseDigestInfoByDeviceResponse() {}

  explicit BatchUploadMPCoSPhaseDigestInfoByDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUploadMPCoSPhaseDigestInfoByDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUploadMPCoSPhaseDigestInfoByDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUploadMPCoSPhaseDigestInfoByDeviceResponse() = default;
};
class BatchUploadMPCoSPhaseTextInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<map<string, boost::any>> phaseDataList{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};

  BatchUploadMPCoSPhaseTextInfoRequest() {}

  explicit BatchUploadMPCoSPhaseTextInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (phaseDataList) {
      res["PhaseDataList"] = boost::any(*phaseDataList);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("PhaseDataList") != m.end() && !m["PhaseDataList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PhaseDataList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      phaseDataList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseTextInfoRequest() = default;
};
class BatchUploadMPCoSPhaseTextInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> phaseDataListShrink{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};

  BatchUploadMPCoSPhaseTextInfoShrinkRequest() {}

  explicit BatchUploadMPCoSPhaseTextInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (phaseDataListShrink) {
      res["PhaseDataList"] = boost::any(*phaseDataListShrink);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("PhaseDataList") != m.end() && !m["PhaseDataList"].empty()) {
      phaseDataListShrink = make_shared<string>(boost::any_cast<string>(m["PhaseDataList"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseTextInfoShrinkRequest() = default;
};
class BatchUploadMPCoSPhaseTextInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchUploadMPCoSPhaseTextInfoResponseBody() {}

  explicit BatchUploadMPCoSPhaseTextInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseTextInfoResponseBody() = default;
};
class BatchUploadMPCoSPhaseTextInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchUploadMPCoSPhaseTextInfoResponseBody> body{};

  BatchUploadMPCoSPhaseTextInfoResponse() {}

  explicit BatchUploadMPCoSPhaseTextInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUploadMPCoSPhaseTextInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUploadMPCoSPhaseTextInfoResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUploadMPCoSPhaseTextInfoResponse() = default;
};
class BatchUploadMPCoSPhaseTextInfoByDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<map<string, boost::any>> phaseDataList{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};

  BatchUploadMPCoSPhaseTextInfoByDeviceRequest() {}

  explicit BatchUploadMPCoSPhaseTextInfoByDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (phaseDataList) {
      res["PhaseDataList"] = boost::any(*phaseDataList);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("PhaseDataList") != m.end() && !m["PhaseDataList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PhaseDataList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      phaseDataList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseTextInfoByDeviceRequest() = default;
};
class BatchUploadMPCoSPhaseTextInfoByDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<string> phaseDataListShrink{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};

  BatchUploadMPCoSPhaseTextInfoByDeviceShrinkRequest() {}

  explicit BatchUploadMPCoSPhaseTextInfoByDeviceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (phaseDataListShrink) {
      res["PhaseDataList"] = boost::any(*phaseDataListShrink);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("PhaseDataList") != m.end() && !m["PhaseDataList"].empty()) {
      phaseDataListShrink = make_shared<string>(boost::any_cast<string>(m["PhaseDataList"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseTextInfoByDeviceShrinkRequest() = default;
};
class BatchUploadMPCoSPhaseTextInfoByDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchUploadMPCoSPhaseTextInfoByDeviceResponseBody() {}

  explicit BatchUploadMPCoSPhaseTextInfoByDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchUploadMPCoSPhaseTextInfoByDeviceResponseBody() = default;
};
class BatchUploadMPCoSPhaseTextInfoByDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchUploadMPCoSPhaseTextInfoByDeviceResponseBody> body{};

  BatchUploadMPCoSPhaseTextInfoByDeviceResponse() {}

  explicit BatchUploadMPCoSPhaseTextInfoByDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUploadMPCoSPhaseTextInfoByDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUploadMPCoSPhaseTextInfoByDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUploadMPCoSPhaseTextInfoByDeviceResponse() = default;
};
class CreateMPCoSPhaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> name{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> remark{};

  CreateMPCoSPhaseRequest() {}

  explicit CreateMPCoSPhaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~CreateMPCoSPhaseRequest() = default;
};
class CreateMPCoSPhaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateMPCoSPhaseResponseBody() {}

  explicit CreateMPCoSPhaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateMPCoSPhaseResponseBody() = default;
};
class CreateMPCoSPhaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMPCoSPhaseResponseBody> body{};

  CreateMPCoSPhaseResponse() {}

  explicit CreateMPCoSPhaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMPCoSPhaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMPCoSPhaseResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMPCoSPhaseResponse() = default;
};
class CreateMPCoSPhaseGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};

  CreateMPCoSPhaseGroupRequest() {}

  explicit CreateMPCoSPhaseGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~CreateMPCoSPhaseGroupRequest() = default;
};
class CreateMPCoSPhaseGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateMPCoSPhaseGroupResponseBody() {}

  explicit CreateMPCoSPhaseGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateMPCoSPhaseGroupResponseBody() = default;
};
class CreateMPCoSPhaseGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMPCoSPhaseGroupResponseBody> body{};

  CreateMPCoSPhaseGroupResponse() {}

  explicit CreateMPCoSPhaseGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMPCoSPhaseGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMPCoSPhaseGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMPCoSPhaseGroupResponse() = default;
};
class CreateMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> memberContact{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberPhone{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> remark{};

  CreateMemberRequest() {}

  explicit CreateMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (memberContact) {
      res["MemberContact"] = boost::any(*memberContact);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (memberPhone) {
      res["MemberPhone"] = boost::any(*memberPhone);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("MemberContact") != m.end() && !m["MemberContact"].empty()) {
      memberContact = make_shared<string>(boost::any_cast<string>(m["MemberContact"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("MemberPhone") != m.end() && !m["MemberPhone"].empty()) {
      memberPhone = make_shared<string>(boost::any_cast<string>(m["MemberPhone"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~CreateMemberRequest() = default;
};
class CreateMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateMemberResponseBody() {}

  explicit CreateMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateMemberResponseBody() = default;
};
class CreateMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMemberResponseBody> body{};

  CreateMemberResponse() {}

  explicit CreateMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMemberResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMemberResponse() = default;
};
class DescribeCapacityInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};

  DescribeCapacityInfoRequest() {}

  explicit DescribeCapacityInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
  }


  virtual ~DescribeCapacityInfoRequest() = default;
};
class DescribeCapacityInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> capacityQuota{};
  shared_ptr<long> countQuota{};
  shared_ptr<long> memberUsedCapacity{};
  shared_ptr<long> memberUsedCount{};
  shared_ptr<long> usedCapacity{};
  shared_ptr<long> usedCount{};

  DescribeCapacityInfoResponseBodyData() {}

  explicit DescribeCapacityInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacityQuota) {
      res["CapacityQuota"] = boost::any(*capacityQuota);
    }
    if (countQuota) {
      res["CountQuota"] = boost::any(*countQuota);
    }
    if (memberUsedCapacity) {
      res["MemberUsedCapacity"] = boost::any(*memberUsedCapacity);
    }
    if (memberUsedCount) {
      res["MemberUsedCount"] = boost::any(*memberUsedCount);
    }
    if (usedCapacity) {
      res["UsedCapacity"] = boost::any(*usedCapacity);
    }
    if (usedCount) {
      res["UsedCount"] = boost::any(*usedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CapacityQuota") != m.end() && !m["CapacityQuota"].empty()) {
      capacityQuota = make_shared<long>(boost::any_cast<long>(m["CapacityQuota"]));
    }
    if (m.find("CountQuota") != m.end() && !m["CountQuota"].empty()) {
      countQuota = make_shared<long>(boost::any_cast<long>(m["CountQuota"]));
    }
    if (m.find("MemberUsedCapacity") != m.end() && !m["MemberUsedCapacity"].empty()) {
      memberUsedCapacity = make_shared<long>(boost::any_cast<long>(m["MemberUsedCapacity"]));
    }
    if (m.find("MemberUsedCount") != m.end() && !m["MemberUsedCount"].empty()) {
      memberUsedCount = make_shared<long>(boost::any_cast<long>(m["MemberUsedCount"]));
    }
    if (m.find("UsedCapacity") != m.end() && !m["UsedCapacity"].empty()) {
      usedCapacity = make_shared<long>(boost::any_cast<long>(m["UsedCapacity"]));
    }
    if (m.find("UsedCount") != m.end() && !m["UsedCount"].empty()) {
      usedCount = make_shared<long>(boost::any_cast<long>(m["UsedCount"]));
    }
  }


  virtual ~DescribeCapacityInfoResponseBodyData() = default;
};
class DescribeCapacityInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeCapacityInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCapacityInfoResponseBody() {}

  explicit DescribeCapacityInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeCapacityInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCapacityInfoResponseBodyData>(model1);
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


  virtual ~DescribeCapacityInfoResponseBody() = default;
};
class DescribeCapacityInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCapacityInfoResponseBody> body{};

  DescribeCapacityInfoResponse() {}

  explicit DescribeCapacityInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCapacityInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCapacityInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCapacityInfoResponse() = default;
};
class DescribeMPCoSAuthorizedInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> memberId{};
  shared_ptr<string> phaseGroupId{};

  DescribeMPCoSAuthorizedInfoRequest() {}

  explicit DescribeMPCoSAuthorizedInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
  }


  virtual ~DescribeMPCoSAuthorizedInfoRequest() = default;
};
class DescribeMPCoSAuthorizedInfoResponseBodyDataAuthorizedPhaseList : public Darabonba::Model {
public:
  shared_ptr<string> phaseId{};
  shared_ptr<string> phaseName{};

  DescribeMPCoSAuthorizedInfoResponseBodyDataAuthorizedPhaseList() {}

  explicit DescribeMPCoSAuthorizedInfoResponseBodyDataAuthorizedPhaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (phaseName) {
      res["PhaseName"] = boost::any(*phaseName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("PhaseName") != m.end() && !m["PhaseName"].empty()) {
      phaseName = make_shared<string>(boost::any_cast<string>(m["PhaseName"]));
    }
  }


  virtual ~DescribeMPCoSAuthorizedInfoResponseBodyDataAuthorizedPhaseList() = default;
};
class DescribeMPCoSAuthorizedInfoResponseBodyDataUnAuthorizedPhaseList : public Darabonba::Model {
public:
  shared_ptr<string> phaseId{};
  shared_ptr<string> phaseName{};

  DescribeMPCoSAuthorizedInfoResponseBodyDataUnAuthorizedPhaseList() {}

  explicit DescribeMPCoSAuthorizedInfoResponseBodyDataUnAuthorizedPhaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (phaseName) {
      res["PhaseName"] = boost::any(*phaseName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("PhaseName") != m.end() && !m["PhaseName"].empty()) {
      phaseName = make_shared<string>(boost::any_cast<string>(m["PhaseName"]));
    }
  }


  virtual ~DescribeMPCoSAuthorizedInfoResponseBodyDataUnAuthorizedPhaseList() = default;
};
class DescribeMPCoSAuthorizedInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMPCoSAuthorizedInfoResponseBodyDataAuthorizedPhaseList>> authorizedPhaseList{};
  shared_ptr<vector<DescribeMPCoSAuthorizedInfoResponseBodyDataUnAuthorizedPhaseList>> unAuthorizedPhaseList{};

  DescribeMPCoSAuthorizedInfoResponseBodyData() {}

  explicit DescribeMPCoSAuthorizedInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizedPhaseList) {
      vector<boost::any> temp1;
      for(auto item1:*authorizedPhaseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthorizedPhaseList"] = boost::any(temp1);
    }
    if (unAuthorizedPhaseList) {
      vector<boost::any> temp1;
      for(auto item1:*unAuthorizedPhaseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnAuthorizedPhaseList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizedPhaseList") != m.end() && !m["AuthorizedPhaseList"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthorizedPhaseList"].type()) {
        vector<DescribeMPCoSAuthorizedInfoResponseBodyDataAuthorizedPhaseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthorizedPhaseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMPCoSAuthorizedInfoResponseBodyDataAuthorizedPhaseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authorizedPhaseList = make_shared<vector<DescribeMPCoSAuthorizedInfoResponseBodyDataAuthorizedPhaseList>>(expect1);
      }
    }
    if (m.find("UnAuthorizedPhaseList") != m.end() && !m["UnAuthorizedPhaseList"].empty()) {
      if (typeid(vector<boost::any>) == m["UnAuthorizedPhaseList"].type()) {
        vector<DescribeMPCoSAuthorizedInfoResponseBodyDataUnAuthorizedPhaseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnAuthorizedPhaseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMPCoSAuthorizedInfoResponseBodyDataUnAuthorizedPhaseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unAuthorizedPhaseList = make_shared<vector<DescribeMPCoSAuthorizedInfoResponseBodyDataUnAuthorizedPhaseList>>(expect1);
      }
    }
  }


  virtual ~DescribeMPCoSAuthorizedInfoResponseBodyData() = default;
};
class DescribeMPCoSAuthorizedInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeMPCoSAuthorizedInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeMPCoSAuthorizedInfoResponseBody() {}

  explicit DescribeMPCoSAuthorizedInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeMPCoSAuthorizedInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeMPCoSAuthorizedInfoResponseBodyData>(model1);
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


  virtual ~DescribeMPCoSAuthorizedInfoResponseBody() = default;
};
class DescribeMPCoSAuthorizedInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMPCoSAuthorizedInfoResponseBody> body{};

  DescribeMPCoSAuthorizedInfoResponse() {}

  explicit DescribeMPCoSAuthorizedInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMPCoSAuthorizedInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMPCoSAuthorizedInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMPCoSAuthorizedInfoResponse() = default;
};
class DescribeMPCoSPhaseInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};

  DescribeMPCoSPhaseInfoRequest() {}

  explicit DescribeMPCoSPhaseInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
  }


  virtual ~DescribeMPCoSPhaseInfoRequest() = default;
};
class DescribeMPCoSPhaseInfoResponseBodyDataRelatedDataList : public Darabonba::Model {
public:
  shared_ptr<string> relatedDataKey{};
  shared_ptr<string> relatedDataSeq{};
  shared_ptr<string> relatedPhaseDataHash{};
  shared_ptr<string> relatedPhaseId{};
  shared_ptr<string> relatedPhaseName{};

  DescribeMPCoSPhaseInfoResponseBodyDataRelatedDataList() {}

  explicit DescribeMPCoSPhaseInfoResponseBodyDataRelatedDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relatedDataKey) {
      res["RelatedDataKey"] = boost::any(*relatedDataKey);
    }
    if (relatedDataSeq) {
      res["RelatedDataSeq"] = boost::any(*relatedDataSeq);
    }
    if (relatedPhaseDataHash) {
      res["RelatedPhaseDataHash"] = boost::any(*relatedPhaseDataHash);
    }
    if (relatedPhaseId) {
      res["RelatedPhaseId"] = boost::any(*relatedPhaseId);
    }
    if (relatedPhaseName) {
      res["RelatedPhaseName"] = boost::any(*relatedPhaseName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelatedDataKey") != m.end() && !m["RelatedDataKey"].empty()) {
      relatedDataKey = make_shared<string>(boost::any_cast<string>(m["RelatedDataKey"]));
    }
    if (m.find("RelatedDataSeq") != m.end() && !m["RelatedDataSeq"].empty()) {
      relatedDataSeq = make_shared<string>(boost::any_cast<string>(m["RelatedDataSeq"]));
    }
    if (m.find("RelatedPhaseDataHash") != m.end() && !m["RelatedPhaseDataHash"].empty()) {
      relatedPhaseDataHash = make_shared<string>(boost::any_cast<string>(m["RelatedPhaseDataHash"]));
    }
    if (m.find("RelatedPhaseId") != m.end() && !m["RelatedPhaseId"].empty()) {
      relatedPhaseId = make_shared<string>(boost::any_cast<string>(m["RelatedPhaseId"]));
    }
    if (m.find("RelatedPhaseName") != m.end() && !m["RelatedPhaseName"].empty()) {
      relatedPhaseName = make_shared<string>(boost::any_cast<string>(m["RelatedPhaseName"]));
    }
  }


  virtual ~DescribeMPCoSPhaseInfoResponseBodyDataRelatedDataList() = default;
};
class DescribeMPCoSPhaseInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> blockHash{};
  shared_ptr<long> blockNumber{};
  shared_ptr<string> dataHash{};
  shared_ptr<string> dataValue{};
  shared_ptr<string> iotId{};
  shared_ptr<string> previousHash{};
  shared_ptr<string> productKey{};
  shared_ptr<vector<DescribeMPCoSPhaseInfoResponseBodyDataRelatedDataList>> relatedDataList{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> transactionHash{};

  DescribeMPCoSPhaseInfoResponseBodyData() {}

  explicit DescribeMPCoSPhaseInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockHash) {
      res["BlockHash"] = boost::any(*blockHash);
    }
    if (blockNumber) {
      res["BlockNumber"] = boost::any(*blockNumber);
    }
    if (dataHash) {
      res["DataHash"] = boost::any(*dataHash);
    }
    if (dataValue) {
      res["DataValue"] = boost::any(*dataValue);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (previousHash) {
      res["PreviousHash"] = boost::any(*previousHash);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (relatedDataList) {
      vector<boost::any> temp1;
      for(auto item1:*relatedDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedDataList"] = boost::any(temp1);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (transactionHash) {
      res["TransactionHash"] = boost::any(*transactionHash);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockHash") != m.end() && !m["BlockHash"].empty()) {
      blockHash = make_shared<string>(boost::any_cast<string>(m["BlockHash"]));
    }
    if (m.find("BlockNumber") != m.end() && !m["BlockNumber"].empty()) {
      blockNumber = make_shared<long>(boost::any_cast<long>(m["BlockNumber"]));
    }
    if (m.find("DataHash") != m.end() && !m["DataHash"].empty()) {
      dataHash = make_shared<string>(boost::any_cast<string>(m["DataHash"]));
    }
    if (m.find("DataValue") != m.end() && !m["DataValue"].empty()) {
      dataValue = make_shared<string>(boost::any_cast<string>(m["DataValue"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("PreviousHash") != m.end() && !m["PreviousHash"].empty()) {
      previousHash = make_shared<string>(boost::any_cast<string>(m["PreviousHash"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("RelatedDataList") != m.end() && !m["RelatedDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedDataList"].type()) {
        vector<DescribeMPCoSPhaseInfoResponseBodyDataRelatedDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMPCoSPhaseInfoResponseBodyDataRelatedDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedDataList = make_shared<vector<DescribeMPCoSPhaseInfoResponseBodyDataRelatedDataList>>(expect1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TransactionHash") != m.end() && !m["TransactionHash"].empty()) {
      transactionHash = make_shared<string>(boost::any_cast<string>(m["TransactionHash"]));
    }
  }


  virtual ~DescribeMPCoSPhaseInfoResponseBodyData() = default;
};
class DescribeMPCoSPhaseInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeMPCoSPhaseInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeMPCoSPhaseInfoResponseBody() {}

  explicit DescribeMPCoSPhaseInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeMPCoSPhaseInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeMPCoSPhaseInfoResponseBodyData>(model1);
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


  virtual ~DescribeMPCoSPhaseInfoResponseBody() = default;
};
class DescribeMPCoSPhaseInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMPCoSPhaseInfoResponseBody> body{};

  DescribeMPCoSPhaseInfoResponse() {}

  explicit DescribeMPCoSPhaseInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMPCoSPhaseInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMPCoSPhaseInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMPCoSPhaseInfoResponse() = default;
};
class DescribeMPCoSResourceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};

  DescribeMPCoSResourceInfoRequest() {}

  explicit DescribeMPCoSResourceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
  }


  virtual ~DescribeMPCoSResourceInfoRequest() = default;
};
class DescribeMPCoSResourceInfoResponseBodyDataPhaseQuotaInfoList : public Darabonba::Model {
public:
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseGroupName{};
  shared_ptr<long> phaseQuota{};
  shared_ptr<long> usedPhase{};

  DescribeMPCoSResourceInfoResponseBodyDataPhaseQuotaInfoList() {}

  explicit DescribeMPCoSResourceInfoResponseBodyDataPhaseQuotaInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseGroupName) {
      res["PhaseGroupName"] = boost::any(*phaseGroupName);
    }
    if (phaseQuota) {
      res["PhaseQuota"] = boost::any(*phaseQuota);
    }
    if (usedPhase) {
      res["UsedPhase"] = boost::any(*usedPhase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseGroupName") != m.end() && !m["PhaseGroupName"].empty()) {
      phaseGroupName = make_shared<string>(boost::any_cast<string>(m["PhaseGroupName"]));
    }
    if (m.find("PhaseQuota") != m.end() && !m["PhaseQuota"].empty()) {
      phaseQuota = make_shared<long>(boost::any_cast<long>(m["PhaseQuota"]));
    }
    if (m.find("UsedPhase") != m.end() && !m["UsedPhase"].empty()) {
      usedPhase = make_shared<long>(boost::any_cast<long>(m["UsedPhase"]));
    }
  }


  virtual ~DescribeMPCoSResourceInfoResponseBodyDataPhaseQuotaInfoList() = default;
};
class DescribeMPCoSResourceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> memberQuota{};
  shared_ptr<long> phaseGroupQuota{};
  shared_ptr<vector<DescribeMPCoSResourceInfoResponseBodyDataPhaseQuotaInfoList>> phaseQuotaInfoList{};
  shared_ptr<long> usedMember{};
  shared_ptr<long> usedPhaseGroup{};

  DescribeMPCoSResourceInfoResponseBodyData() {}

  explicit DescribeMPCoSResourceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberQuota) {
      res["MemberQuota"] = boost::any(*memberQuota);
    }
    if (phaseGroupQuota) {
      res["PhaseGroupQuota"] = boost::any(*phaseGroupQuota);
    }
    if (phaseQuotaInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*phaseQuotaInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PhaseQuotaInfoList"] = boost::any(temp1);
    }
    if (usedMember) {
      res["UsedMember"] = boost::any(*usedMember);
    }
    if (usedPhaseGroup) {
      res["UsedPhaseGroup"] = boost::any(*usedPhaseGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberQuota") != m.end() && !m["MemberQuota"].empty()) {
      memberQuota = make_shared<long>(boost::any_cast<long>(m["MemberQuota"]));
    }
    if (m.find("PhaseGroupQuota") != m.end() && !m["PhaseGroupQuota"].empty()) {
      phaseGroupQuota = make_shared<long>(boost::any_cast<long>(m["PhaseGroupQuota"]));
    }
    if (m.find("PhaseQuotaInfoList") != m.end() && !m["PhaseQuotaInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PhaseQuotaInfoList"].type()) {
        vector<DescribeMPCoSResourceInfoResponseBodyDataPhaseQuotaInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PhaseQuotaInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMPCoSResourceInfoResponseBodyDataPhaseQuotaInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        phaseQuotaInfoList = make_shared<vector<DescribeMPCoSResourceInfoResponseBodyDataPhaseQuotaInfoList>>(expect1);
      }
    }
    if (m.find("UsedMember") != m.end() && !m["UsedMember"].empty()) {
      usedMember = make_shared<long>(boost::any_cast<long>(m["UsedMember"]));
    }
    if (m.find("UsedPhaseGroup") != m.end() && !m["UsedPhaseGroup"].empty()) {
      usedPhaseGroup = make_shared<long>(boost::any_cast<long>(m["UsedPhaseGroup"]));
    }
  }


  virtual ~DescribeMPCoSResourceInfoResponseBodyData() = default;
};
class DescribeMPCoSResourceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeMPCoSResourceInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeMPCoSResourceInfoResponseBody() {}

  explicit DescribeMPCoSResourceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeMPCoSResourceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeMPCoSResourceInfoResponseBodyData>(model1);
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


  virtual ~DescribeMPCoSResourceInfoResponseBody() = default;
};
class DescribeMPCoSResourceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMPCoSResourceInfoResponseBody> body{};

  DescribeMPCoSResourceInfoResponse() {}

  explicit DescribeMPCoSResourceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMPCoSResourceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMPCoSResourceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMPCoSResourceInfoResponse() = default;
};
class DescribeMemberCapacityInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};

  DescribeMemberCapacityInfoRequest() {}

  explicit DescribeMemberCapacityInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
  }


  virtual ~DescribeMemberCapacityInfoRequest() = default;
};
class DescribeMemberCapacityInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> usedCapacity{};
  shared_ptr<string> usedCount{};

  DescribeMemberCapacityInfoResponseBodyData() {}

  explicit DescribeMemberCapacityInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (usedCapacity) {
      res["UsedCapacity"] = boost::any(*usedCapacity);
    }
    if (usedCount) {
      res["UsedCount"] = boost::any(*usedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("UsedCapacity") != m.end() && !m["UsedCapacity"].empty()) {
      usedCapacity = make_shared<string>(boost::any_cast<string>(m["UsedCapacity"]));
    }
    if (m.find("UsedCount") != m.end() && !m["UsedCount"].empty()) {
      usedCount = make_shared<string>(boost::any_cast<string>(m["UsedCount"]));
    }
  }


  virtual ~DescribeMemberCapacityInfoResponseBodyData() = default;
};
class DescribeMemberCapacityInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<DescribeMemberCapacityInfoResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeMemberCapacityInfoResponseBody() {}

  explicit DescribeMemberCapacityInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeMemberCapacityInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMemberCapacityInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMemberCapacityInfoResponseBodyData>>(expect1);
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


  virtual ~DescribeMemberCapacityInfoResponseBody() = default;
};
class DescribeMemberCapacityInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMemberCapacityInfoResponseBody> body{};

  DescribeMemberCapacityInfoResponse() {}

  explicit DescribeMemberCapacityInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMemberCapacityInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMemberCapacityInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMemberCapacityInfoResponse() = default;
};
class DescribeResourceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};

  DescribeResourceInfoRequest() {}

  explicit DescribeResourceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
  }


  virtual ~DescribeResourceInfoRequest() = default;
};
class DescribeResourceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> authorizeType{};
  shared_ptr<long> effectiveTime{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> region{};
  shared_ptr<string> status{};

  DescribeResourceInfoResponseBodyData() {}

  explicit DescribeResourceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizeType) {
      res["AuthorizeType"] = boost::any(*authorizeType);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizeType") != m.end() && !m["AuthorizeType"].empty()) {
      authorizeType = make_shared<string>(boost::any_cast<string>(m["AuthorizeType"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<long>(boost::any_cast<long>(m["EffectiveTime"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeResourceInfoResponseBodyData() = default;
};
class DescribeResourceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeResourceInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeResourceInfoResponseBody() {}

  explicit DescribeResourceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeResourceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeResourceInfoResponseBodyData>(model1);
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


  virtual ~DescribeResourceInfoResponseBody() = default;
};
class DescribeResourceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceInfoResponseBody> body{};

  DescribeResourceInfoResponse() {}

  explicit DescribeResourceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceInfoResponse() = default;
};
class GetBlockChainInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> businessId{};
  shared_ptr<string> key{};
  shared_ptr<string> productKey{};

  GetBlockChainInfoRequest() {}

  explicit GetBlockChainInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~GetBlockChainInfoRequest() = default;
};
class GetBlockChainInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetBlockChainInfoResponseBody() {}

  explicit GetBlockChainInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetBlockChainInfoResponseBody() = default;
};
class GetBlockChainInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBlockChainInfoResponseBody> body{};

  GetBlockChainInfoResponse() {}

  explicit GetBlockChainInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBlockChainInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBlockChainInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetBlockChainInfoResponse() = default;
};
class GetDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> businessId{};
  shared_ptr<string> key{};
  shared_ptr<string> productKey{};

  GetDataRequest() {}

  explicit GetDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~GetDataRequest() = default;
};
class GetDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDataResponseBody() {}

  explicit GetDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDataResponseBody() = default;
};
class GetDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataResponseBody> body{};

  GetDataResponse() {}

  explicit GetDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataResponse() = default;
};
class GetDataModelConfigInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> dataModelCode{};
  shared_ptr<string> productKey{};

  GetDataModelConfigInfoRequest() {}

  explicit GetDataModelConfigInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (dataModelCode) {
      res["DataModelCode"] = boost::any(*dataModelCode);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("DataModelCode") != m.end() && !m["DataModelCode"].empty()) {
      dataModelCode = make_shared<string>(boost::any_cast<string>(m["DataModelCode"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~GetDataModelConfigInfoRequest() = default;
};
class GetDataModelConfigInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDataModelConfigInfoResponseBody() {}

  explicit GetDataModelConfigInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDataModelConfigInfoResponseBody() = default;
};
class GetDataModelConfigInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataModelConfigInfoResponseBody> body{};

  GetDataModelConfigInfoResponse() {}

  explicit GetDataModelConfigInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataModelConfigInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataModelConfigInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataModelConfigInfoResponse() = default;
};
class GetHistoryDataCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<long> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> productKey{};
  shared_ptr<long> startTime{};

  GetHistoryDataCountRequest() {}

  explicit GetHistoryDataCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetHistoryDataCountRequest() = default;
};
class GetHistoryDataCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetHistoryDataCountResponseBody() {}

  explicit GetHistoryDataCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetHistoryDataCountResponseBody() = default;
};
class GetHistoryDataCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHistoryDataCountResponseBody> body{};

  GetHistoryDataCountResponse() {}

  explicit GetHistoryDataCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoryDataCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHistoryDataCountResponseBody>(model1);
      }
    }
  }


  virtual ~GetHistoryDataCountResponse() = default;
};
class GetHistoryDataListRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> key{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productKey{};
  shared_ptr<long> startTime{};

  GetHistoryDataListRequest() {}

  explicit GetHistoryDataListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetHistoryDataListRequest() = default;
};
class GetHistoryDataListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> data{};

  GetHistoryDataListResponseBodyData() {}

  explicit GetHistoryDataListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetHistoryDataListResponseBodyData() = default;
};
class GetHistoryDataListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetHistoryDataListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetHistoryDataListResponseBody() {}

  explicit GetHistoryDataListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetHistoryDataListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHistoryDataListResponseBodyData>(model1);
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


  virtual ~GetHistoryDataListResponseBody() = default;
};
class GetHistoryDataListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHistoryDataListResponseBody> body{};

  GetHistoryDataListResponse() {}

  explicit GetHistoryDataListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoryDataListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHistoryDataListResponseBody>(model1);
      }
    }
  }


  virtual ~GetHistoryDataListResponse() = default;
};
class ListDependentDataModelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> productKey{};

  ListDependentDataModelsRequest() {}

  explicit ListDependentDataModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~ListDependentDataModelsRequest() = default;
};
class ListDependentDataModelsResponseBodyDataDataModelInfo : public Darabonba::Model {
public:
  shared_ptr<string> dataModelCode{};
  shared_ptr<string> dataModelName{};

  ListDependentDataModelsResponseBodyDataDataModelInfo() {}

  explicit ListDependentDataModelsResponseBodyDataDataModelInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModelCode) {
      res["DataModelCode"] = boost::any(*dataModelCode);
    }
    if (dataModelName) {
      res["DataModelName"] = boost::any(*dataModelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModelCode") != m.end() && !m["DataModelCode"].empty()) {
      dataModelCode = make_shared<string>(boost::any_cast<string>(m["DataModelCode"]));
    }
    if (m.find("DataModelName") != m.end() && !m["DataModelName"].empty()) {
      dataModelName = make_shared<string>(boost::any_cast<string>(m["DataModelName"]));
    }
  }


  virtual ~ListDependentDataModelsResponseBodyDataDataModelInfo() = default;
};
class ListDependentDataModelsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDependentDataModelsResponseBodyDataDataModelInfo>> dataModelInfo{};

  ListDependentDataModelsResponseBodyData() {}

  explicit ListDependentDataModelsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataModelInfo) {
      vector<boost::any> temp1;
      for(auto item1:*dataModelInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataModelInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataModelInfo") != m.end() && !m["DataModelInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DataModelInfo"].type()) {
        vector<ListDependentDataModelsResponseBodyDataDataModelInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataModelInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDependentDataModelsResponseBodyDataDataModelInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataModelInfo = make_shared<vector<ListDependentDataModelsResponseBodyDataDataModelInfo>>(expect1);
      }
    }
  }


  virtual ~ListDependentDataModelsResponseBodyData() = default;
};
class ListDependentDataModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListDependentDataModelsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDependentDataModelsResponseBody() {}

  explicit ListDependentDataModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDependentDataModelsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDependentDataModelsResponseBodyData>(model1);
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


  virtual ~ListDependentDataModelsResponseBody() = default;
};
class ListDependentDataModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDependentDataModelsResponseBody> body{};

  ListDependentDataModelsResponse() {}

  explicit ListDependentDataModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDependentDataModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDependentDataModelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDependentDataModelsResponse() = default;
};
class ListDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> iotId{};
  shared_ptr<long> num{};
  shared_ptr<long> size{};

  ListDeviceRequest() {}

  explicit ListDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListDeviceRequest() = default;
};
class ListDeviceResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> iotId{};
  shared_ptr<long> lastSaveTime{};
  shared_ptr<string> status{};

  ListDeviceResponseBodyDataPageData() {}

  explicit ListDeviceResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (lastSaveTime) {
      res["LastSaveTime"] = boost::any(*lastSaveTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("LastSaveTime") != m.end() && !m["LastSaveTime"].empty()) {
      lastSaveTime = make_shared<long>(boost::any_cast<long>(m["LastSaveTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDeviceResponseBodyDataPageData() = default;
};
class ListDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<ListDeviceResponseBodyDataPageData>> pageData{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListDeviceResponseBodyData() {}

  explicit ListDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListDeviceResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListDeviceResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListDeviceResponseBodyData() = default;
};
class ListDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListDeviceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDeviceResponseBody() {}

  explicit ListDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDeviceResponseBodyData>(model1);
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


  virtual ~ListDeviceResponseBody() = default;
};
class ListDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceResponseBody> body{};

  ListDeviceResponse() {}

  explicit ListDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceResponse() = default;
};
class ListDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<long> num{};
  shared_ptr<string> productKey{};
  shared_ptr<long> size{};

  ListDeviceGroupRequest() {}

  explicit ListDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListDeviceGroupRequest() = default;
};
class ListDeviceGroupResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> authorizeType{};
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerUid{};
  shared_ptr<string> productKey{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  ListDeviceGroupResponseBodyDataPageData() {}

  explicit ListDeviceGroupResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizeType) {
      res["AuthorizeType"] = boost::any(*authorizeType);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizeType") != m.end() && !m["AuthorizeType"].empty()) {
      authorizeType = make_shared<string>(boost::any_cast<string>(m["AuthorizeType"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<string>(boost::any_cast<string>(m["OwnerUid"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDeviceGroupResponseBodyDataPageData() = default;
};
class ListDeviceGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<ListDeviceGroupResponseBodyDataPageData>> pageData{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListDeviceGroupResponseBodyData() {}

  explicit ListDeviceGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListDeviceGroupResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceGroupResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListDeviceGroupResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListDeviceGroupResponseBodyData() = default;
};
class ListDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListDeviceGroupResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDeviceGroupResponseBody() {}

  explicit ListDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDeviceGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDeviceGroupResponseBodyData>(model1);
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


  virtual ~ListDeviceGroupResponseBody() = default;
};
class ListDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceGroupResponseBody> body{};

  ListDeviceGroupResponse() {}

  explicit ListDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceGroupResponse() = default;
};
class ListMPCoSPhaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> name{};
  shared_ptr<long> num{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<long> size{};

  ListMPCoSPhaseRequest() {}

  explicit ListMPCoSPhaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListMPCoSPhaseRequest() = default;
};
class ListMPCoSPhaseResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<long> accessPermission{};
  shared_ptr<string> name{};
  shared_ptr<string> phaseId{};
  shared_ptr<string> remark{};

  ListMPCoSPhaseResponseBodyDataPageData() {}

  explicit ListMPCoSPhaseResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPermission) {
      res["AccessPermission"] = boost::any(*accessPermission);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPermission") != m.end() && !m["AccessPermission"].empty()) {
      accessPermission = make_shared<long>(boost::any_cast<long>(m["AccessPermission"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~ListMPCoSPhaseResponseBodyDataPageData() = default;
};
class ListMPCoSPhaseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<ListMPCoSPhaseResponseBodyDataPageData>> pageData{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListMPCoSPhaseResponseBodyData() {}

  explicit ListMPCoSPhaseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListMPCoSPhaseResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMPCoSPhaseResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListMPCoSPhaseResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListMPCoSPhaseResponseBodyData() = default;
};
class ListMPCoSPhaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListMPCoSPhaseResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListMPCoSPhaseResponseBody() {}

  explicit ListMPCoSPhaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListMPCoSPhaseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListMPCoSPhaseResponseBodyData>(model1);
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


  virtual ~ListMPCoSPhaseResponseBody() = default;
};
class ListMPCoSPhaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMPCoSPhaseResponseBody> body{};

  ListMPCoSPhaseResponse() {}

  explicit ListMPCoSPhaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMPCoSPhaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMPCoSPhaseResponseBody>(model1);
      }
    }
  }


  virtual ~ListMPCoSPhaseResponse() = default;
};
class ListMPCoSPhaseGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> name{};
  shared_ptr<long> num{};
  shared_ptr<long> size{};

  ListMPCoSPhaseGroupRequest() {}

  explicit ListMPCoSPhaseGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListMPCoSPhaseGroupRequest() = default;
};
class ListMPCoSPhaseGroupResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> remark{};

  ListMPCoSPhaseGroupResponseBodyDataPageData() {}

  explicit ListMPCoSPhaseGroupResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~ListMPCoSPhaseGroupResponseBodyDataPageData() = default;
};
class ListMPCoSPhaseGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<ListMPCoSPhaseGroupResponseBodyDataPageData>> pageData{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListMPCoSPhaseGroupResponseBodyData() {}

  explicit ListMPCoSPhaseGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListMPCoSPhaseGroupResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMPCoSPhaseGroupResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListMPCoSPhaseGroupResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListMPCoSPhaseGroupResponseBodyData() = default;
};
class ListMPCoSPhaseGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListMPCoSPhaseGroupResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListMPCoSPhaseGroupResponseBody() {}

  explicit ListMPCoSPhaseGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListMPCoSPhaseGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListMPCoSPhaseGroupResponseBodyData>(model1);
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


  virtual ~ListMPCoSPhaseGroupResponseBody() = default;
};
class ListMPCoSPhaseGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMPCoSPhaseGroupResponseBody> body{};

  ListMPCoSPhaseGroupResponse() {}

  explicit ListMPCoSPhaseGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMPCoSPhaseGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMPCoSPhaseGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListMPCoSPhaseGroupResponse() = default;
};
class ListMPCoSPhaseHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<long> endTime{};
  shared_ptr<long> num{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};
  shared_ptr<long> size{};
  shared_ptr<long> startTime{};

  ListMPCoSPhaseHistoryRequest() {}

  explicit ListMPCoSPhaseHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListMPCoSPhaseHistoryRequest() = default;
};
class ListMPCoSPhaseHistoryResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> blockHash{};
  shared_ptr<long> blockNumber{};
  shared_ptr<string> dataHash{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> dataValue{};
  shared_ptr<string> iotId{};
  shared_ptr<string> previousHash{};
  shared_ptr<string> productKey{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> transactionHash{};

  ListMPCoSPhaseHistoryResponseBodyDataPageData() {}

  explicit ListMPCoSPhaseHistoryResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockHash) {
      res["BlockHash"] = boost::any(*blockHash);
    }
    if (blockNumber) {
      res["BlockNumber"] = boost::any(*blockNumber);
    }
    if (dataHash) {
      res["DataHash"] = boost::any(*dataHash);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (dataValue) {
      res["DataValue"] = boost::any(*dataValue);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (previousHash) {
      res["PreviousHash"] = boost::any(*previousHash);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (transactionHash) {
      res["TransactionHash"] = boost::any(*transactionHash);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockHash") != m.end() && !m["BlockHash"].empty()) {
      blockHash = make_shared<string>(boost::any_cast<string>(m["BlockHash"]));
    }
    if (m.find("BlockNumber") != m.end() && !m["BlockNumber"].empty()) {
      blockNumber = make_shared<long>(boost::any_cast<long>(m["BlockNumber"]));
    }
    if (m.find("DataHash") != m.end() && !m["DataHash"].empty()) {
      dataHash = make_shared<string>(boost::any_cast<string>(m["DataHash"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("DataValue") != m.end() && !m["DataValue"].empty()) {
      dataValue = make_shared<string>(boost::any_cast<string>(m["DataValue"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("PreviousHash") != m.end() && !m["PreviousHash"].empty()) {
      previousHash = make_shared<string>(boost::any_cast<string>(m["PreviousHash"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TransactionHash") != m.end() && !m["TransactionHash"].empty()) {
      transactionHash = make_shared<string>(boost::any_cast<string>(m["TransactionHash"]));
    }
  }


  virtual ~ListMPCoSPhaseHistoryResponseBodyDataPageData() = default;
};
class ListMPCoSPhaseHistoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<ListMPCoSPhaseHistoryResponseBodyDataPageData>> pageData{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListMPCoSPhaseHistoryResponseBodyData() {}

  explicit ListMPCoSPhaseHistoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListMPCoSPhaseHistoryResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMPCoSPhaseHistoryResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListMPCoSPhaseHistoryResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListMPCoSPhaseHistoryResponseBodyData() = default;
};
class ListMPCoSPhaseHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListMPCoSPhaseHistoryResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListMPCoSPhaseHistoryResponseBody() {}

  explicit ListMPCoSPhaseHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListMPCoSPhaseHistoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListMPCoSPhaseHistoryResponseBodyData>(model1);
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


  virtual ~ListMPCoSPhaseHistoryResponseBody() = default;
};
class ListMPCoSPhaseHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMPCoSPhaseHistoryResponseBody> body{};

  ListMPCoSPhaseHistoryResponse() {}

  explicit ListMPCoSPhaseHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMPCoSPhaseHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMPCoSPhaseHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListMPCoSPhaseHistoryResponse() = default;
};
class ListMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> memberUid{};
  shared_ptr<long> num{};
  shared_ptr<long> size{};

  ListMemberRequest() {}

  explicit ListMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListMemberRequest() = default;
};
class ListMemberResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> memberContact{};
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberPhone{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  ListMemberResponseBodyDataPageData() {}

  explicit ListMemberResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberContact) {
      res["MemberContact"] = boost::any(*memberContact);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (memberPhone) {
      res["MemberPhone"] = boost::any(*memberPhone);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberContact") != m.end() && !m["MemberContact"].empty()) {
      memberContact = make_shared<string>(boost::any_cast<string>(m["MemberContact"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("MemberPhone") != m.end() && !m["MemberPhone"].empty()) {
      memberPhone = make_shared<string>(boost::any_cast<string>(m["MemberPhone"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListMemberResponseBodyDataPageData() = default;
};
class ListMemberResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<ListMemberResponseBodyDataPageData>> pageData{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListMemberResponseBodyData() {}

  explicit ListMemberResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListMemberResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMemberResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListMemberResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListMemberResponseBodyData() = default;
};
class ListMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListMemberResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListMemberResponseBody() {}

  explicit ListMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListMemberResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListMemberResponseBodyData>(model1);
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


  virtual ~ListMemberResponseBody() = default;
};
class ListMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMemberResponseBody> body{};

  ListMemberResponse() {}

  explicit ListMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMemberResponseBody>(model1);
      }
    }
  }


  virtual ~ListMemberResponse() = default;
};
class ListMultiPartyCollaborationChainRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> name{};
  shared_ptr<long> num{};
  shared_ptr<long> size{};

  ListMultiPartyCollaborationChainRequest() {}

  explicit ListMultiPartyCollaborationChainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListMultiPartyCollaborationChainRequest() = default;
};
class ListMultiPartyCollaborationChainResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> bizChainId{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<string> roleType{};

  ListMultiPartyCollaborationChainResponseBodyDataPageData() {}

  explicit ListMultiPartyCollaborationChainResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~ListMultiPartyCollaborationChainResponseBodyDataPageData() = default;
};
class ListMultiPartyCollaborationChainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<ListMultiPartyCollaborationChainResponseBodyDataPageData>> pageData{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListMultiPartyCollaborationChainResponseBodyData() {}

  explicit ListMultiPartyCollaborationChainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListMultiPartyCollaborationChainResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMultiPartyCollaborationChainResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListMultiPartyCollaborationChainResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListMultiPartyCollaborationChainResponseBodyData() = default;
};
class ListMultiPartyCollaborationChainResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListMultiPartyCollaborationChainResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListMultiPartyCollaborationChainResponseBody() {}

  explicit ListMultiPartyCollaborationChainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListMultiPartyCollaborationChainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListMultiPartyCollaborationChainResponseBodyData>(model1);
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


  virtual ~ListMultiPartyCollaborationChainResponseBody() = default;
};
class ListMultiPartyCollaborationChainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMultiPartyCollaborationChainResponseBody> body{};

  ListMultiPartyCollaborationChainResponse() {}

  explicit ListMultiPartyCollaborationChainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMultiPartyCollaborationChainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMultiPartyCollaborationChainResponseBody>(model1);
      }
    }
  }


  virtual ~ListMultiPartyCollaborationChainResponse() = default;
};
class ListPSMemberDataTypeCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> memberUid{};
  shared_ptr<long> num{};
  shared_ptr<long> size{};

  ListPSMemberDataTypeCodeRequest() {}

  explicit ListPSMemberDataTypeCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListPSMemberDataTypeCodeRequest() = default;
};
class ListPSMemberDataTypeCodeResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> dataTypeCode{};
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberUid{};

  ListPSMemberDataTypeCodeResponseBodyDataPageData() {}

  explicit ListPSMemberDataTypeCodeResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataTypeCode) {
      res["DataTypeCode"] = boost::any(*dataTypeCode);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataTypeCode") != m.end() && !m["DataTypeCode"].empty()) {
      dataTypeCode = make_shared<string>(boost::any_cast<string>(m["DataTypeCode"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
  }


  virtual ~ListPSMemberDataTypeCodeResponseBodyDataPageData() = default;
};
class ListPSMemberDataTypeCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<ListPSMemberDataTypeCodeResponseBodyDataPageData>> pageData{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListPSMemberDataTypeCodeResponseBodyData() {}

  explicit ListPSMemberDataTypeCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListPSMemberDataTypeCodeResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPSMemberDataTypeCodeResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListPSMemberDataTypeCodeResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListPSMemberDataTypeCodeResponseBodyData() = default;
};
class ListPSMemberDataTypeCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListPSMemberDataTypeCodeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListPSMemberDataTypeCodeResponseBody() {}

  explicit ListPSMemberDataTypeCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListPSMemberDataTypeCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListPSMemberDataTypeCodeResponseBodyData>(model1);
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


  virtual ~ListPSMemberDataTypeCodeResponseBody() = default;
};
class ListPSMemberDataTypeCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPSMemberDataTypeCodeResponseBody> body{};

  ListPSMemberDataTypeCodeResponse() {}

  explicit ListPSMemberDataTypeCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPSMemberDataTypeCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPSMemberDataTypeCodeResponseBody>(model1);
      }
    }
  }


  virtual ~ListPSMemberDataTypeCodeResponse() = default;
};
class ListProofChainRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> name{};
  shared_ptr<long> num{};
  shared_ptr<long> size{};

  ListProofChainRequest() {}

  explicit ListProofChainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListProofChainRequest() = default;
};
class ListProofChainResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> bizChainCode{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataTypeCode{};
  shared_ptr<string> name{};
  shared_ptr<string> remark{};
  shared_ptr<string> roleType{};

  ListProofChainResponseBodyDataPageData() {}

  explicit ListProofChainResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizChainCode) {
      res["BizChainCode"] = boost::any(*bizChainCode);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataTypeCode) {
      res["DataTypeCode"] = boost::any(*dataTypeCode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizChainCode") != m.end() && !m["BizChainCode"].empty()) {
      bizChainCode = make_shared<string>(boost::any_cast<string>(m["BizChainCode"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataTypeCode") != m.end() && !m["DataTypeCode"].empty()) {
      dataTypeCode = make_shared<string>(boost::any_cast<string>(m["DataTypeCode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~ListProofChainResponseBodyDataPageData() = default;
};
class ListProofChainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<ListProofChainResponseBodyDataPageData>> pageData{};
  shared_ptr<long> size{};
  shared_ptr<long> total{};

  ListProofChainResponseBodyData() {}

  explicit ListProofChainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<ListProofChainResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProofChainResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<ListProofChainResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListProofChainResponseBodyData() = default;
};
class ListProofChainResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListProofChainResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListProofChainResponseBody() {}

  explicit ListProofChainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListProofChainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListProofChainResponseBodyData>(model1);
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


  virtual ~ListProofChainResponseBody() = default;
};
class ListProofChainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProofChainResponseBody> body{};

  ListProofChainResponse() {}

  explicit ListProofChainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProofChainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProofChainResponseBody>(model1);
      }
    }
  }


  virtual ~ListProofChainResponse() = default;
};
class LockMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> memberId{};

  LockMemberRequest() {}

  explicit LockMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
  }


  virtual ~LockMemberRequest() = default;
};
class LockMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LockMemberResponseBody() {}

  explicit LockMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~LockMemberResponseBody() = default;
};
class LockMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LockMemberResponseBody> body{};

  LockMemberResponse() {}

  explicit LockMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LockMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LockMemberResponseBody>(model1);
      }
    }
  }


  virtual ~LockMemberResponse() = default;
};
class ModifyMPCoSPhaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> name{};
  shared_ptr<string> phaseId{};
  shared_ptr<string> remark{};

  ModifyMPCoSPhaseRequest() {}

  explicit ModifyMPCoSPhaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~ModifyMPCoSPhaseRequest() = default;
};
class ModifyMPCoSPhaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyMPCoSPhaseResponseBody() {}

  explicit ModifyMPCoSPhaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyMPCoSPhaseResponseBody() = default;
};
class ModifyMPCoSPhaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMPCoSPhaseResponseBody> body{};

  ModifyMPCoSPhaseResponse() {}

  explicit ModifyMPCoSPhaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMPCoSPhaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMPCoSPhaseResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMPCoSPhaseResponse() = default;
};
class ModifyMPCoSPhaseGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> name{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> remark{};

  ModifyMPCoSPhaseGroupRequest() {}

  explicit ModifyMPCoSPhaseGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~ModifyMPCoSPhaseGroupRequest() = default;
};
class ModifyMPCoSPhaseGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyMPCoSPhaseGroupResponseBody() {}

  explicit ModifyMPCoSPhaseGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyMPCoSPhaseGroupResponseBody() = default;
};
class ModifyMPCoSPhaseGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMPCoSPhaseGroupResponseBody> body{};

  ModifyMPCoSPhaseGroupResponse() {}

  explicit ModifyMPCoSPhaseGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMPCoSPhaseGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMPCoSPhaseGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMPCoSPhaseGroupResponse() = default;
};
class ModifyMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> memberContact{};
  shared_ptr<string> memberId{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberPhone{};
  shared_ptr<string> memberUid{};
  shared_ptr<string> remark{};

  ModifyMemberRequest() {}

  explicit ModifyMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (memberContact) {
      res["MemberContact"] = boost::any(*memberContact);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (memberPhone) {
      res["MemberPhone"] = boost::any(*memberPhone);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("MemberContact") != m.end() && !m["MemberContact"].empty()) {
      memberContact = make_shared<string>(boost::any_cast<string>(m["MemberContact"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("MemberPhone") != m.end() && !m["MemberPhone"].empty()) {
      memberPhone = make_shared<string>(boost::any_cast<string>(m["MemberPhone"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<string>(boost::any_cast<string>(m["MemberUid"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~ModifyMemberRequest() = default;
};
class ModifyMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyMemberResponseBody() {}

  explicit ModifyMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyMemberResponseBody() = default;
};
class ModifyMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMemberResponseBody> body{};

  ModifyMemberResponse() {}

  explicit ModifyMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMemberResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMemberResponse() = default;
};
class RegisterDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> authorizeType{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> deviceGroupName{};
  shared_ptr<string> productKey{};
  shared_ptr<string> remark{};

  RegisterDeviceGroupRequest() {}

  explicit RegisterDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (authorizeType) {
      res["AuthorizeType"] = boost::any(*authorizeType);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (deviceGroupName) {
      res["DeviceGroupName"] = boost::any(*deviceGroupName);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("AuthorizeType") != m.end() && !m["AuthorizeType"].empty()) {
      authorizeType = make_shared<string>(boost::any_cast<string>(m["AuthorizeType"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DeviceGroupName") != m.end() && !m["DeviceGroupName"].empty()) {
      deviceGroupName = make_shared<string>(boost::any_cast<string>(m["DeviceGroupName"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~RegisterDeviceGroupRequest() = default;
};
class RegisterDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RegisterDeviceGroupResponseBody() {}

  explicit RegisterDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RegisterDeviceGroupResponseBody() = default;
};
class RegisterDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterDeviceGroupResponseBody> body{};

  RegisterDeviceGroupResponse() {}

  explicit RegisterDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterDeviceGroupResponse() = default;
};
class SetDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> key{};
  shared_ptr<string> productKey{};
  shared_ptr<string> value{};

  SetDataRequest() {}

  explicit SetDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SetDataRequest() = default;
};
class SetDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetDataResponseBody() {}

  explicit SetDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetDataResponseBody() = default;
};
class SetDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDataResponseBody> body{};

  SetDataResponse() {}

  explicit SetDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDataResponseBody>(model1);
      }
    }
  }


  virtual ~SetDataResponse() = default;
};
class SetDataWithSignatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<string> key{};
  shared_ptr<string> productKey{};
  shared_ptr<string> value{};

  SetDataWithSignatureRequest() {}

  explicit SetDataWithSignatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SetDataWithSignatureRequest() = default;
};
class SetDataWithSignatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetDataWithSignatureResponseBody() {}

  explicit SetDataWithSignatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetDataWithSignatureResponseBody() = default;
};
class SetDataWithSignatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDataWithSignatureResponseBody> body{};

  SetDataWithSignatureResponse() {}

  explicit SetDataWithSignatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDataWithSignatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDataWithSignatureResponseBody>(model1);
      }
    }
  }


  virtual ~SetDataWithSignatureResponse() = default;
};
class UnAuthorizeDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> deviceId{};

  UnAuthorizeDeviceRequest() {}

  explicit UnAuthorizeDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~UnAuthorizeDeviceRequest() = default;
};
class UnAuthorizeDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnAuthorizeDeviceResponseBody() {}

  explicit UnAuthorizeDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UnAuthorizeDeviceResponseBody() = default;
};
class UnAuthorizeDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnAuthorizeDeviceResponseBody> body{};

  UnAuthorizeDeviceResponse() {}

  explicit UnAuthorizeDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnAuthorizeDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnAuthorizeDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnAuthorizeDeviceResponse() = default;
};
class UnAuthorizeDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> deviceGroupId{};

  UnAuthorizeDeviceGroupRequest() {}

  explicit UnAuthorizeDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
  }


  virtual ~UnAuthorizeDeviceGroupRequest() = default;
};
class UnAuthorizeDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnAuthorizeDeviceGroupResponseBody() {}

  explicit UnAuthorizeDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UnAuthorizeDeviceGroupResponseBody() = default;
};
class UnAuthorizeDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnAuthorizeDeviceGroupResponseBody> body{};

  UnAuthorizeDeviceGroupResponse() {}

  explicit UnAuthorizeDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnAuthorizeDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnAuthorizeDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UnAuthorizeDeviceGroupResponse() = default;
};
class UnLockMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> memberId{};

  UnLockMemberRequest() {}

  explicit UnLockMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
  }


  virtual ~UnLockMemberRequest() = default;
};
class UnLockMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnLockMemberResponseBody() {}

  explicit UnLockMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UnLockMemberResponseBody() = default;
};
class UnLockMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnLockMemberResponseBody> body{};

  UnLockMemberResponse() {}

  explicit UnLockMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnLockMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnLockMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UnLockMemberResponse() = default;
};
class UpdateMPCoSAuthorizedInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<map<string, boost::any>> authorizedPhaseList{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> memberId{};
  shared_ptr<string> phaseGroupId{};

  UpdateMPCoSAuthorizedInfoRequest() {}

  explicit UpdateMPCoSAuthorizedInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (authorizedPhaseList) {
      res["AuthorizedPhaseList"] = boost::any(*authorizedPhaseList);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("AuthorizedPhaseList") != m.end() && !m["AuthorizedPhaseList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AuthorizedPhaseList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      authorizedPhaseList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
  }


  virtual ~UpdateMPCoSAuthorizedInfoRequest() = default;
};
class UpdateMPCoSAuthorizedInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> authorizedPhaseListShrink{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> memberId{};
  shared_ptr<string> phaseGroupId{};

  UpdateMPCoSAuthorizedInfoShrinkRequest() {}

  explicit UpdateMPCoSAuthorizedInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (authorizedPhaseListShrink) {
      res["AuthorizedPhaseList"] = boost::any(*authorizedPhaseListShrink);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("AuthorizedPhaseList") != m.end() && !m["AuthorizedPhaseList"].empty()) {
      authorizedPhaseListShrink = make_shared<string>(boost::any_cast<string>(m["AuthorizedPhaseList"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
  }


  virtual ~UpdateMPCoSAuthorizedInfoShrinkRequest() = default;
};
class UpdateMPCoSAuthorizedInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateMPCoSAuthorizedInfoResponseBody() {}

  explicit UpdateMPCoSAuthorizedInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateMPCoSAuthorizedInfoResponseBody() = default;
};
class UpdateMPCoSAuthorizedInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMPCoSAuthorizedInfoResponseBody> body{};

  UpdateMPCoSAuthorizedInfoResponse() {}

  explicit UpdateMPCoSAuthorizedInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMPCoSAuthorizedInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMPCoSAuthorizedInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMPCoSAuthorizedInfoResponse() = default;
};
class UploadMPCoSPhaseDigestInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> phaseData{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};
  shared_ptr<map<string, boost::any>> relatedDataList{};

  UploadMPCoSPhaseDigestInfoRequest() {}

  explicit UploadMPCoSPhaseDigestInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (phaseData) {
      res["PhaseData"] = boost::any(*phaseData);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (relatedDataList) {
      res["RelatedDataList"] = boost::any(*relatedDataList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("PhaseData") != m.end() && !m["PhaseData"].empty()) {
      phaseData = make_shared<string>(boost::any_cast<string>(m["PhaseData"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("RelatedDataList") != m.end() && !m["RelatedDataList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RelatedDataList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      relatedDataList = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UploadMPCoSPhaseDigestInfoRequest() = default;
};
class UploadMPCoSPhaseDigestInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> phaseData{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};
  shared_ptr<string> relatedDataListShrink{};

  UploadMPCoSPhaseDigestInfoShrinkRequest() {}

  explicit UploadMPCoSPhaseDigestInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (phaseData) {
      res["PhaseData"] = boost::any(*phaseData);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (relatedDataListShrink) {
      res["RelatedDataList"] = boost::any(*relatedDataListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("PhaseData") != m.end() && !m["PhaseData"].empty()) {
      phaseData = make_shared<string>(boost::any_cast<string>(m["PhaseData"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("RelatedDataList") != m.end() && !m["RelatedDataList"].empty()) {
      relatedDataListShrink = make_shared<string>(boost::any_cast<string>(m["RelatedDataList"]));
    }
  }


  virtual ~UploadMPCoSPhaseDigestInfoShrinkRequest() = default;
};
class UploadMPCoSPhaseDigestInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadMPCoSPhaseDigestInfoResponseBody() {}

  explicit UploadMPCoSPhaseDigestInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UploadMPCoSPhaseDigestInfoResponseBody() = default;
};
class UploadMPCoSPhaseDigestInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadMPCoSPhaseDigestInfoResponseBody> body{};

  UploadMPCoSPhaseDigestInfoResponse() {}

  explicit UploadMPCoSPhaseDigestInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadMPCoSPhaseDigestInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadMPCoSPhaseDigestInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UploadMPCoSPhaseDigestInfoResponse() = default;
};
class UploadMPCoSPhaseDigestInfoByDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<string> phaseData{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};
  shared_ptr<map<string, boost::any>> relatedDataList{};

  UploadMPCoSPhaseDigestInfoByDeviceRequest() {}

  explicit UploadMPCoSPhaseDigestInfoByDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (phaseData) {
      res["PhaseData"] = boost::any(*phaseData);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (relatedDataList) {
      res["RelatedDataList"] = boost::any(*relatedDataList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("PhaseData") != m.end() && !m["PhaseData"].empty()) {
      phaseData = make_shared<string>(boost::any_cast<string>(m["PhaseData"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("RelatedDataList") != m.end() && !m["RelatedDataList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RelatedDataList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      relatedDataList = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UploadMPCoSPhaseDigestInfoByDeviceRequest() = default;
};
class UploadMPCoSPhaseDigestInfoByDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<string> phaseData{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};
  shared_ptr<string> relatedDataListShrink{};

  UploadMPCoSPhaseDigestInfoByDeviceShrinkRequest() {}

  explicit UploadMPCoSPhaseDigestInfoByDeviceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (phaseData) {
      res["PhaseData"] = boost::any(*phaseData);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (relatedDataListShrink) {
      res["RelatedDataList"] = boost::any(*relatedDataListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("PhaseData") != m.end() && !m["PhaseData"].empty()) {
      phaseData = make_shared<string>(boost::any_cast<string>(m["PhaseData"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("RelatedDataList") != m.end() && !m["RelatedDataList"].empty()) {
      relatedDataListShrink = make_shared<string>(boost::any_cast<string>(m["RelatedDataList"]));
    }
  }


  virtual ~UploadMPCoSPhaseDigestInfoByDeviceShrinkRequest() = default;
};
class UploadMPCoSPhaseDigestInfoByDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadMPCoSPhaseDigestInfoByDeviceResponseBody() {}

  explicit UploadMPCoSPhaseDigestInfoByDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UploadMPCoSPhaseDigestInfoByDeviceResponseBody() = default;
};
class UploadMPCoSPhaseDigestInfoByDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadMPCoSPhaseDigestInfoByDeviceResponseBody> body{};

  UploadMPCoSPhaseDigestInfoByDeviceResponse() {}

  explicit UploadMPCoSPhaseDigestInfoByDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadMPCoSPhaseDigestInfoByDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadMPCoSPhaseDigestInfoByDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UploadMPCoSPhaseDigestInfoByDeviceResponse() = default;
};
class UploadMPCoSPhaseTextInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> phaseData{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};
  shared_ptr<map<string, boost::any>> relatedDataList{};

  UploadMPCoSPhaseTextInfoRequest() {}

  explicit UploadMPCoSPhaseTextInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (phaseData) {
      res["PhaseData"] = boost::any(*phaseData);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (relatedDataList) {
      res["RelatedDataList"] = boost::any(*relatedDataList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("PhaseData") != m.end() && !m["PhaseData"].empty()) {
      phaseData = make_shared<string>(boost::any_cast<string>(m["PhaseData"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("RelatedDataList") != m.end() && !m["RelatedDataList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RelatedDataList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      relatedDataList = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UploadMPCoSPhaseTextInfoRequest() = default;
};
class UploadMPCoSPhaseTextInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> phaseData{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};
  shared_ptr<string> relatedDataListShrink{};

  UploadMPCoSPhaseTextInfoShrinkRequest() {}

  explicit UploadMPCoSPhaseTextInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (phaseData) {
      res["PhaseData"] = boost::any(*phaseData);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (relatedDataListShrink) {
      res["RelatedDataList"] = boost::any(*relatedDataListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("PhaseData") != m.end() && !m["PhaseData"].empty()) {
      phaseData = make_shared<string>(boost::any_cast<string>(m["PhaseData"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("RelatedDataList") != m.end() && !m["RelatedDataList"].empty()) {
      relatedDataListShrink = make_shared<string>(boost::any_cast<string>(m["RelatedDataList"]));
    }
  }


  virtual ~UploadMPCoSPhaseTextInfoShrinkRequest() = default;
};
class UploadMPCoSPhaseTextInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadMPCoSPhaseTextInfoResponseBody() {}

  explicit UploadMPCoSPhaseTextInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UploadMPCoSPhaseTextInfoResponseBody() = default;
};
class UploadMPCoSPhaseTextInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadMPCoSPhaseTextInfoResponseBody> body{};

  UploadMPCoSPhaseTextInfoResponse() {}

  explicit UploadMPCoSPhaseTextInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadMPCoSPhaseTextInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadMPCoSPhaseTextInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UploadMPCoSPhaseTextInfoResponse() = default;
};
class UploadMPCoSPhaseTextInfoByDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<string> phaseData{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};
  shared_ptr<map<string, boost::any>> relatedDataList{};

  UploadMPCoSPhaseTextInfoByDeviceRequest() {}

  explicit UploadMPCoSPhaseTextInfoByDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (phaseData) {
      res["PhaseData"] = boost::any(*phaseData);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (relatedDataList) {
      res["RelatedDataList"] = boost::any(*relatedDataList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("PhaseData") != m.end() && !m["PhaseData"].empty()) {
      phaseData = make_shared<string>(boost::any_cast<string>(m["PhaseData"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("RelatedDataList") != m.end() && !m["RelatedDataList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["RelatedDataList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      relatedDataList = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UploadMPCoSPhaseTextInfoByDeviceRequest() = default;
};
class UploadMPCoSPhaseTextInfoByDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> bizChainId{};
  shared_ptr<string> dataKey{};
  shared_ptr<string> dataSeq{};
  shared_ptr<string> iotAuthType{};
  shared_ptr<string> iotDataDigest{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotIdServiceProvider{};
  shared_ptr<string> iotIdSource{};
  shared_ptr<string> iotSignature{};
  shared_ptr<string> phaseData{};
  shared_ptr<string> phaseGroupId{};
  shared_ptr<string> phaseId{};
  shared_ptr<string> relatedDataListShrink{};

  UploadMPCoSPhaseTextInfoByDeviceShrinkRequest() {}

  explicit UploadMPCoSPhaseTextInfoByDeviceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (bizChainId) {
      res["BizChainId"] = boost::any(*bizChainId);
    }
    if (dataKey) {
      res["DataKey"] = boost::any(*dataKey);
    }
    if (dataSeq) {
      res["DataSeq"] = boost::any(*dataSeq);
    }
    if (iotAuthType) {
      res["IotAuthType"] = boost::any(*iotAuthType);
    }
    if (iotDataDigest) {
      res["IotDataDigest"] = boost::any(*iotDataDigest);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotIdServiceProvider) {
      res["IotIdServiceProvider"] = boost::any(*iotIdServiceProvider);
    }
    if (iotIdSource) {
      res["IotIdSource"] = boost::any(*iotIdSource);
    }
    if (iotSignature) {
      res["IotSignature"] = boost::any(*iotSignature);
    }
    if (phaseData) {
      res["PhaseData"] = boost::any(*phaseData);
    }
    if (phaseGroupId) {
      res["PhaseGroupId"] = boost::any(*phaseGroupId);
    }
    if (phaseId) {
      res["PhaseId"] = boost::any(*phaseId);
    }
    if (relatedDataListShrink) {
      res["RelatedDataList"] = boost::any(*relatedDataListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("BizChainId") != m.end() && !m["BizChainId"].empty()) {
      bizChainId = make_shared<string>(boost::any_cast<string>(m["BizChainId"]));
    }
    if (m.find("DataKey") != m.end() && !m["DataKey"].empty()) {
      dataKey = make_shared<string>(boost::any_cast<string>(m["DataKey"]));
    }
    if (m.find("DataSeq") != m.end() && !m["DataSeq"].empty()) {
      dataSeq = make_shared<string>(boost::any_cast<string>(m["DataSeq"]));
    }
    if (m.find("IotAuthType") != m.end() && !m["IotAuthType"].empty()) {
      iotAuthType = make_shared<string>(boost::any_cast<string>(m["IotAuthType"]));
    }
    if (m.find("IotDataDigest") != m.end() && !m["IotDataDigest"].empty()) {
      iotDataDigest = make_shared<string>(boost::any_cast<string>(m["IotDataDigest"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotIdServiceProvider") != m.end() && !m["IotIdServiceProvider"].empty()) {
      iotIdServiceProvider = make_shared<string>(boost::any_cast<string>(m["IotIdServiceProvider"]));
    }
    if (m.find("IotIdSource") != m.end() && !m["IotIdSource"].empty()) {
      iotIdSource = make_shared<string>(boost::any_cast<string>(m["IotIdSource"]));
    }
    if (m.find("IotSignature") != m.end() && !m["IotSignature"].empty()) {
      iotSignature = make_shared<string>(boost::any_cast<string>(m["IotSignature"]));
    }
    if (m.find("PhaseData") != m.end() && !m["PhaseData"].empty()) {
      phaseData = make_shared<string>(boost::any_cast<string>(m["PhaseData"]));
    }
    if (m.find("PhaseGroupId") != m.end() && !m["PhaseGroupId"].empty()) {
      phaseGroupId = make_shared<string>(boost::any_cast<string>(m["PhaseGroupId"]));
    }
    if (m.find("PhaseId") != m.end() && !m["PhaseId"].empty()) {
      phaseId = make_shared<string>(boost::any_cast<string>(m["PhaseId"]));
    }
    if (m.find("RelatedDataList") != m.end() && !m["RelatedDataList"].empty()) {
      relatedDataListShrink = make_shared<string>(boost::any_cast<string>(m["RelatedDataList"]));
    }
  }


  virtual ~UploadMPCoSPhaseTextInfoByDeviceShrinkRequest() = default;
};
class UploadMPCoSPhaseTextInfoByDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UploadMPCoSPhaseTextInfoByDeviceResponseBody() {}

  explicit UploadMPCoSPhaseTextInfoByDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UploadMPCoSPhaseTextInfoByDeviceResponseBody() = default;
};
class UploadMPCoSPhaseTextInfoByDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadMPCoSPhaseTextInfoByDeviceResponseBody> body{};

  UploadMPCoSPhaseTextInfoByDeviceResponse() {}

  explicit UploadMPCoSPhaseTextInfoByDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadMPCoSPhaseTextInfoByDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadMPCoSPhaseTextInfoByDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UploadMPCoSPhaseTextInfoByDeviceResponse() = default;
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
  ApplyDataModelConfigInfoResponse applyDataModelConfigInfoWithOptions(shared_ptr<ApplyDataModelConfigInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyDataModelConfigInfoResponse applyDataModelConfigInfo(shared_ptr<ApplyDataModelConfigInfoRequest> request);
  AttachDataResponse attachDataWithOptions(shared_ptr<AttachDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachDataResponse attachData(shared_ptr<AttachDataRequest> request);
  AttachDataWithSignatureResponse attachDataWithSignatureWithOptions(shared_ptr<AttachDataWithSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachDataWithSignatureResponse attachDataWithSignature(shared_ptr<AttachDataWithSignatureRequest> request);
  AuthorizeDeviceResponse authorizeDeviceWithOptions(shared_ptr<AuthorizeDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeDeviceResponse authorizeDevice(shared_ptr<AuthorizeDeviceRequest> request);
  AuthorizeDeviceGroupResponse authorizeDeviceGroupWithOptions(shared_ptr<AuthorizeDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeDeviceGroupResponse authorizeDeviceGroup(shared_ptr<AuthorizeDeviceGroupRequest> request);
  BatchUploadMPCoSPhaseDigestInfoResponse batchUploadMPCoSPhaseDigestInfoWithOptions(shared_ptr<BatchUploadMPCoSPhaseDigestInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUploadMPCoSPhaseDigestInfoResponse batchUploadMPCoSPhaseDigestInfo(shared_ptr<BatchUploadMPCoSPhaseDigestInfoRequest> request);
  BatchUploadMPCoSPhaseDigestInfoByDeviceResponse batchUploadMPCoSPhaseDigestInfoByDeviceWithOptions(shared_ptr<BatchUploadMPCoSPhaseDigestInfoByDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUploadMPCoSPhaseDigestInfoByDeviceResponse batchUploadMPCoSPhaseDigestInfoByDevice(shared_ptr<BatchUploadMPCoSPhaseDigestInfoByDeviceRequest> request);
  BatchUploadMPCoSPhaseTextInfoResponse batchUploadMPCoSPhaseTextInfoWithOptions(shared_ptr<BatchUploadMPCoSPhaseTextInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUploadMPCoSPhaseTextInfoResponse batchUploadMPCoSPhaseTextInfo(shared_ptr<BatchUploadMPCoSPhaseTextInfoRequest> request);
  BatchUploadMPCoSPhaseTextInfoByDeviceResponse batchUploadMPCoSPhaseTextInfoByDeviceWithOptions(shared_ptr<BatchUploadMPCoSPhaseTextInfoByDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUploadMPCoSPhaseTextInfoByDeviceResponse batchUploadMPCoSPhaseTextInfoByDevice(shared_ptr<BatchUploadMPCoSPhaseTextInfoByDeviceRequest> request);
  CreateMPCoSPhaseResponse createMPCoSPhaseWithOptions(shared_ptr<CreateMPCoSPhaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMPCoSPhaseResponse createMPCoSPhase(shared_ptr<CreateMPCoSPhaseRequest> request);
  CreateMPCoSPhaseGroupResponse createMPCoSPhaseGroupWithOptions(shared_ptr<CreateMPCoSPhaseGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMPCoSPhaseGroupResponse createMPCoSPhaseGroup(shared_ptr<CreateMPCoSPhaseGroupRequest> request);
  CreateMemberResponse createMemberWithOptions(shared_ptr<CreateMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMemberResponse createMember(shared_ptr<CreateMemberRequest> request);
  DescribeCapacityInfoResponse describeCapacityInfoWithOptions(shared_ptr<DescribeCapacityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCapacityInfoResponse describeCapacityInfo(shared_ptr<DescribeCapacityInfoRequest> request);
  DescribeMPCoSAuthorizedInfoResponse describeMPCoSAuthorizedInfoWithOptions(shared_ptr<DescribeMPCoSAuthorizedInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMPCoSAuthorizedInfoResponse describeMPCoSAuthorizedInfo(shared_ptr<DescribeMPCoSAuthorizedInfoRequest> request);
  DescribeMPCoSPhaseInfoResponse describeMPCoSPhaseInfoWithOptions(shared_ptr<DescribeMPCoSPhaseInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMPCoSPhaseInfoResponse describeMPCoSPhaseInfo(shared_ptr<DescribeMPCoSPhaseInfoRequest> request);
  DescribeMPCoSResourceInfoResponse describeMPCoSResourceInfoWithOptions(shared_ptr<DescribeMPCoSResourceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMPCoSResourceInfoResponse describeMPCoSResourceInfo(shared_ptr<DescribeMPCoSResourceInfoRequest> request);
  DescribeMemberCapacityInfoResponse describeMemberCapacityInfoWithOptions(shared_ptr<DescribeMemberCapacityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMemberCapacityInfoResponse describeMemberCapacityInfo(shared_ptr<DescribeMemberCapacityInfoRequest> request);
  DescribeResourceInfoResponse describeResourceInfoWithOptions(shared_ptr<DescribeResourceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceInfoResponse describeResourceInfo(shared_ptr<DescribeResourceInfoRequest> request);
  GetBlockChainInfoResponse getBlockChainInfoWithOptions(shared_ptr<GetBlockChainInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBlockChainInfoResponse getBlockChainInfo(shared_ptr<GetBlockChainInfoRequest> request);
  GetDataResponse getDataWithOptions(shared_ptr<GetDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataResponse getData(shared_ptr<GetDataRequest> request);
  GetDataModelConfigInfoResponse getDataModelConfigInfoWithOptions(shared_ptr<GetDataModelConfigInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataModelConfigInfoResponse getDataModelConfigInfo(shared_ptr<GetDataModelConfigInfoRequest> request);
  GetHistoryDataCountResponse getHistoryDataCountWithOptions(shared_ptr<GetHistoryDataCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistoryDataCountResponse getHistoryDataCount(shared_ptr<GetHistoryDataCountRequest> request);
  GetHistoryDataListResponse getHistoryDataListWithOptions(shared_ptr<GetHistoryDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistoryDataListResponse getHistoryDataList(shared_ptr<GetHistoryDataListRequest> request);
  ListDependentDataModelsResponse listDependentDataModelsWithOptions(shared_ptr<ListDependentDataModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDependentDataModelsResponse listDependentDataModels(shared_ptr<ListDependentDataModelsRequest> request);
  ListDeviceResponse listDeviceWithOptions(shared_ptr<ListDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceResponse listDevice(shared_ptr<ListDeviceRequest> request);
  ListDeviceGroupResponse listDeviceGroupWithOptions(shared_ptr<ListDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceGroupResponse listDeviceGroup(shared_ptr<ListDeviceGroupRequest> request);
  ListMPCoSPhaseResponse listMPCoSPhaseWithOptions(shared_ptr<ListMPCoSPhaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMPCoSPhaseResponse listMPCoSPhase(shared_ptr<ListMPCoSPhaseRequest> request);
  ListMPCoSPhaseGroupResponse listMPCoSPhaseGroupWithOptions(shared_ptr<ListMPCoSPhaseGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMPCoSPhaseGroupResponse listMPCoSPhaseGroup(shared_ptr<ListMPCoSPhaseGroupRequest> request);
  ListMPCoSPhaseHistoryResponse listMPCoSPhaseHistoryWithOptions(shared_ptr<ListMPCoSPhaseHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMPCoSPhaseHistoryResponse listMPCoSPhaseHistory(shared_ptr<ListMPCoSPhaseHistoryRequest> request);
  ListMemberResponse listMemberWithOptions(shared_ptr<ListMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMemberResponse listMember(shared_ptr<ListMemberRequest> request);
  ListMultiPartyCollaborationChainResponse listMultiPartyCollaborationChainWithOptions(shared_ptr<ListMultiPartyCollaborationChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMultiPartyCollaborationChainResponse listMultiPartyCollaborationChain(shared_ptr<ListMultiPartyCollaborationChainRequest> request);
  ListPSMemberDataTypeCodeResponse listPSMemberDataTypeCodeWithOptions(shared_ptr<ListPSMemberDataTypeCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPSMemberDataTypeCodeResponse listPSMemberDataTypeCode(shared_ptr<ListPSMemberDataTypeCodeRequest> request);
  ListProofChainResponse listProofChainWithOptions(shared_ptr<ListProofChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProofChainResponse listProofChain(shared_ptr<ListProofChainRequest> request);
  LockMemberResponse lockMemberWithOptions(shared_ptr<LockMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LockMemberResponse lockMember(shared_ptr<LockMemberRequest> request);
  ModifyMPCoSPhaseResponse modifyMPCoSPhaseWithOptions(shared_ptr<ModifyMPCoSPhaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMPCoSPhaseResponse modifyMPCoSPhase(shared_ptr<ModifyMPCoSPhaseRequest> request);
  ModifyMPCoSPhaseGroupResponse modifyMPCoSPhaseGroupWithOptions(shared_ptr<ModifyMPCoSPhaseGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMPCoSPhaseGroupResponse modifyMPCoSPhaseGroup(shared_ptr<ModifyMPCoSPhaseGroupRequest> request);
  ModifyMemberResponse modifyMemberWithOptions(shared_ptr<ModifyMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMemberResponse modifyMember(shared_ptr<ModifyMemberRequest> request);
  RegisterDeviceGroupResponse registerDeviceGroupWithOptions(shared_ptr<RegisterDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterDeviceGroupResponse registerDeviceGroup(shared_ptr<RegisterDeviceGroupRequest> request);
  SetDataResponse setDataWithOptions(shared_ptr<SetDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDataResponse setData(shared_ptr<SetDataRequest> request);
  SetDataWithSignatureResponse setDataWithSignatureWithOptions(shared_ptr<SetDataWithSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDataWithSignatureResponse setDataWithSignature(shared_ptr<SetDataWithSignatureRequest> request);
  UnAuthorizeDeviceResponse unAuthorizeDeviceWithOptions(shared_ptr<UnAuthorizeDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnAuthorizeDeviceResponse unAuthorizeDevice(shared_ptr<UnAuthorizeDeviceRequest> request);
  UnAuthorizeDeviceGroupResponse unAuthorizeDeviceGroupWithOptions(shared_ptr<UnAuthorizeDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnAuthorizeDeviceGroupResponse unAuthorizeDeviceGroup(shared_ptr<UnAuthorizeDeviceGroupRequest> request);
  UnLockMemberResponse unLockMemberWithOptions(shared_ptr<UnLockMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnLockMemberResponse unLockMember(shared_ptr<UnLockMemberRequest> request);
  UpdateMPCoSAuthorizedInfoResponse updateMPCoSAuthorizedInfoWithOptions(shared_ptr<UpdateMPCoSAuthorizedInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMPCoSAuthorizedInfoResponse updateMPCoSAuthorizedInfo(shared_ptr<UpdateMPCoSAuthorizedInfoRequest> request);
  UploadMPCoSPhaseDigestInfoResponse uploadMPCoSPhaseDigestInfoWithOptions(shared_ptr<UploadMPCoSPhaseDigestInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadMPCoSPhaseDigestInfoResponse uploadMPCoSPhaseDigestInfo(shared_ptr<UploadMPCoSPhaseDigestInfoRequest> request);
  UploadMPCoSPhaseDigestInfoByDeviceResponse uploadMPCoSPhaseDigestInfoByDeviceWithOptions(shared_ptr<UploadMPCoSPhaseDigestInfoByDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadMPCoSPhaseDigestInfoByDeviceResponse uploadMPCoSPhaseDigestInfoByDevice(shared_ptr<UploadMPCoSPhaseDigestInfoByDeviceRequest> request);
  UploadMPCoSPhaseTextInfoResponse uploadMPCoSPhaseTextInfoWithOptions(shared_ptr<UploadMPCoSPhaseTextInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadMPCoSPhaseTextInfoResponse uploadMPCoSPhaseTextInfo(shared_ptr<UploadMPCoSPhaseTextInfoRequest> request);
  UploadMPCoSPhaseTextInfoByDeviceResponse uploadMPCoSPhaseTextInfoByDeviceWithOptions(shared_ptr<UploadMPCoSPhaseTextInfoByDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadMPCoSPhaseTextInfoByDeviceResponse uploadMPCoSPhaseTextInfoByDevice(shared_ptr<UploadMPCoSPhaseTextInfoByDeviceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ltl20190510

#endif
