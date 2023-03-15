// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PUSH20160801_H_
#define ALIBABACLOUD_PUSH20160801_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Push20160801 {
class BindAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<long> appKey{};
  shared_ptr<string> deviceId{};

  BindAliasRequest() {}

  explicit BindAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~BindAliasRequest() = default;
};
class BindAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindAliasResponseBody() {}

  explicit BindAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindAliasResponseBody() = default;
};
class BindAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindAliasResponseBody> body{};

  BindAliasResponse() {}

  explicit BindAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindAliasResponseBody>(model1);
      }
    }
  }


  virtual ~BindAliasResponse() = default;
};
class BindPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> phoneNumber{};

  BindPhoneRequest() {}

  explicit BindPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~BindPhoneRequest() = default;
};
class BindPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindPhoneResponseBody() {}

  explicit BindPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindPhoneResponseBody() = default;
};
class BindPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindPhoneResponseBody> body{};

  BindPhoneResponse() {}

  explicit BindPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~BindPhoneResponse() = default;
};
class BindTagRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> clientKey{};
  shared_ptr<string> keyType{};
  shared_ptr<string> tagName{};

  BindTagRequest() {}

  explicit BindTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (clientKey) {
      res["ClientKey"] = boost::any(*clientKey);
    }
    if (keyType) {
      res["KeyType"] = boost::any(*keyType);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("ClientKey") != m.end() && !m["ClientKey"].empty()) {
      clientKey = make_shared<string>(boost::any_cast<string>(m["ClientKey"]));
    }
    if (m.find("KeyType") != m.end() && !m["KeyType"].empty()) {
      keyType = make_shared<string>(boost::any_cast<string>(m["KeyType"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~BindTagRequest() = default;
};
class BindTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindTagResponseBody() {}

  explicit BindTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindTagResponseBody() = default;
};
class BindTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindTagResponseBody> body{};

  BindTagResponse() {}

  explicit BindTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindTagResponseBody>(model1);
      }
    }
  }


  virtual ~BindTagResponse() = default;
};
class CancelPushRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<long> messageId{};

  CancelPushRequest() {}

  explicit CancelPushRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<long>(boost::any_cast<long>(m["MessageId"]));
    }
  }


  virtual ~CancelPushRequest() = default;
};
class CancelPushResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelPushResponseBody() {}

  explicit CancelPushResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelPushResponseBody() = default;
};
class CancelPushResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelPushResponseBody> body{};

  CancelPushResponse() {}

  explicit CancelPushResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelPushResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelPushResponseBody>(model1);
      }
    }
  }


  virtual ~CancelPushResponse() = default;
};
class CheckCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};

  CheckCertificateRequest() {}

  explicit CheckCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
  }


  virtual ~CheckCertificateRequest() = default;
};
class CheckCertificateResponseBodyDevelopmentCertInfo : public Darabonba::Model {
public:
  shared_ptr<long> exipreTime{};
  shared_ptr<string> status{};

  CheckCertificateResponseBodyDevelopmentCertInfo() {}

  explicit CheckCertificateResponseBodyDevelopmentCertInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exipreTime) {
      res["ExipreTime"] = boost::any(*exipreTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExipreTime") != m.end() && !m["ExipreTime"].empty()) {
      exipreTime = make_shared<long>(boost::any_cast<long>(m["ExipreTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CheckCertificateResponseBodyDevelopmentCertInfo() = default;
};
class CheckCertificateResponseBodyProductionCertInfo : public Darabonba::Model {
public:
  shared_ptr<long> exipreTime{};
  shared_ptr<string> status{};

  CheckCertificateResponseBodyProductionCertInfo() {}

  explicit CheckCertificateResponseBodyProductionCertInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exipreTime) {
      res["ExipreTime"] = boost::any(*exipreTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExipreTime") != m.end() && !m["ExipreTime"].empty()) {
      exipreTime = make_shared<long>(boost::any_cast<long>(m["ExipreTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CheckCertificateResponseBodyProductionCertInfo() = default;
};
class CheckCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> android{};
  shared_ptr<CheckCertificateResponseBodyDevelopmentCertInfo> developmentCertInfo{};
  shared_ptr<bool> IOS{};
  shared_ptr<CheckCertificateResponseBodyProductionCertInfo> productionCertInfo{};
  shared_ptr<string> requestId{};

  CheckCertificateResponseBody() {}

  explicit CheckCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (android) {
      res["Android"] = boost::any(*android);
    }
    if (developmentCertInfo) {
      res["DevelopmentCertInfo"] = developmentCertInfo ? boost::any(developmentCertInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (IOS) {
      res["IOS"] = boost::any(*IOS);
    }
    if (productionCertInfo) {
      res["ProductionCertInfo"] = productionCertInfo ? boost::any(productionCertInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Android") != m.end() && !m["Android"].empty()) {
      android = make_shared<bool>(boost::any_cast<bool>(m["Android"]));
    }
    if (m.find("DevelopmentCertInfo") != m.end() && !m["DevelopmentCertInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DevelopmentCertInfo"].type()) {
        CheckCertificateResponseBodyDevelopmentCertInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DevelopmentCertInfo"]));
        developmentCertInfo = make_shared<CheckCertificateResponseBodyDevelopmentCertInfo>(model1);
      }
    }
    if (m.find("IOS") != m.end() && !m["IOS"].empty()) {
      IOS = make_shared<bool>(boost::any_cast<bool>(m["IOS"]));
    }
    if (m.find("ProductionCertInfo") != m.end() && !m["ProductionCertInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductionCertInfo"].type()) {
        CheckCertificateResponseBodyProductionCertInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductionCertInfo"]));
        productionCertInfo = make_shared<CheckCertificateResponseBodyProductionCertInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckCertificateResponseBody() = default;
};
class CheckCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckCertificateResponseBody> body{};

  CheckCertificateResponse() {}

  explicit CheckCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CheckCertificateResponse() = default;
};
class CheckDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> deviceId{};

  CheckDeviceRequest() {}

  explicit CheckDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~CheckDeviceRequest() = default;
};
class CheckDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> available{};
  shared_ptr<string> requestId{};

  CheckDeviceResponseBody() {}

  explicit CheckDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (available) {
      res["Available"] = boost::any(*available);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Available") != m.end() && !m["Available"].empty()) {
      available = make_shared<bool>(boost::any_cast<bool>(m["Available"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDeviceResponseBody() = default;
};
class CheckDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDeviceResponseBody> body{};

  CheckDeviceResponse() {}

  explicit CheckDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDeviceResponse() = default;
};
class CheckDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> deviceIds{};

  CheckDevicesRequest() {}

  explicit CheckDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (deviceIds) {
      res["DeviceIds"] = boost::any(*deviceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("DeviceIds") != m.end() && !m["DeviceIds"].empty()) {
      deviceIds = make_shared<string>(boost::any_cast<string>(m["DeviceIds"]));
    }
  }


  virtual ~CheckDevicesRequest() = default;
};
class CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo : public Darabonba::Model {
public:
  shared_ptr<bool> available{};
  shared_ptr<string> deviceId{};

  CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo() {}

  explicit CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (available) {
      res["Available"] = boost::any(*available);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Available") != m.end() && !m["Available"].empty()) {
      available = make_shared<bool>(boost::any_cast<bool>(m["Available"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo() = default;
};
class CheckDevicesResponseBodyDeviceCheckInfos : public Darabonba::Model {
public:
  shared_ptr<vector<CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo>> deviceCheckInfo{};

  CheckDevicesResponseBodyDeviceCheckInfos() {}

  explicit CheckDevicesResponseBodyDeviceCheckInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCheckInfo) {
      vector<boost::any> temp1;
      for(auto item1:*deviceCheckInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceCheckInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceCheckInfo") != m.end() && !m["DeviceCheckInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceCheckInfo"].type()) {
        vector<CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceCheckInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceCheckInfo = make_shared<vector<CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo>>(expect1);
      }
    }
  }


  virtual ~CheckDevicesResponseBodyDeviceCheckInfos() = default;
};
class CheckDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckDevicesResponseBodyDeviceCheckInfos> deviceCheckInfos{};
  shared_ptr<string> requestId{};

  CheckDevicesResponseBody() {}

  explicit CheckDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCheckInfos) {
      res["DeviceCheckInfos"] = deviceCheckInfos ? boost::any(deviceCheckInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceCheckInfos") != m.end() && !m["DeviceCheckInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceCheckInfos"].type()) {
        CheckDevicesResponseBodyDeviceCheckInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceCheckInfos"]));
        deviceCheckInfos = make_shared<CheckDevicesResponseBodyDeviceCheckInfos>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDevicesResponseBody() = default;
};
class CheckDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDevicesResponseBody> body{};

  CheckDevicesResponse() {}

  explicit CheckDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDevicesResponse() = default;
};
class CompleteContinuouslyPushRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> messageId{};

  CompleteContinuouslyPushRequest() {}

  explicit CompleteContinuouslyPushRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~CompleteContinuouslyPushRequest() = default;
};
class CompleteContinuouslyPushResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  CompleteContinuouslyPushResponseBody() {}

  explicit CompleteContinuouslyPushResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CompleteContinuouslyPushResponseBody() = default;
};
class CompleteContinuouslyPushResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CompleteContinuouslyPushResponseBody> body{};

  CompleteContinuouslyPushResponse() {}

  explicit CompleteContinuouslyPushResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompleteContinuouslyPushResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompleteContinuouslyPushResponseBody>(model1);
      }
    }
  }


  virtual ~CompleteContinuouslyPushResponse() = default;
};
class ContinuouslyPushRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> messageId{};
  shared_ptr<string> target{};
  shared_ptr<string> targetValue{};

  ContinuouslyPushRequest() {}

  explicit ContinuouslyPushRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<string>(boost::any_cast<string>(m["TargetValue"]));
    }
  }


  virtual ~ContinuouslyPushRequest() = default;
};
class ContinuouslyPushResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  ContinuouslyPushResponseBody() {}

  explicit ContinuouslyPushResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ContinuouslyPushResponseBody() = default;
};
class ContinuouslyPushResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContinuouslyPushResponseBody> body{};

  ContinuouslyPushResponse() {}

  explicit ContinuouslyPushResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContinuouslyPushResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContinuouslyPushResponseBody>(model1);
      }
    }
  }


  virtual ~ContinuouslyPushResponse() = default;
};
class ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> appName{};

  ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo() {}

  explicit ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo() = default;
};
class ListSummaryAppsResponseBodySummaryAppInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo>> summaryAppInfo{};

  ListSummaryAppsResponseBodySummaryAppInfos() {}

  explicit ListSummaryAppsResponseBodySummaryAppInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (summaryAppInfo) {
      vector<boost::any> temp1;
      for(auto item1:*summaryAppInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SummaryAppInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SummaryAppInfo") != m.end() && !m["SummaryAppInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SummaryAppInfo"].type()) {
        vector<ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SummaryAppInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        summaryAppInfo = make_shared<vector<ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo>>(expect1);
      }
    }
  }


  virtual ~ListSummaryAppsResponseBodySummaryAppInfos() = default;
};
class ListSummaryAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSummaryAppsResponseBodySummaryAppInfos> summaryAppInfos{};

  ListSummaryAppsResponseBody() {}

  explicit ListSummaryAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (summaryAppInfos) {
      res["SummaryAppInfos"] = summaryAppInfos ? boost::any(summaryAppInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SummaryAppInfos") != m.end() && !m["SummaryAppInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["SummaryAppInfos"].type()) {
        ListSummaryAppsResponseBodySummaryAppInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SummaryAppInfos"]));
        summaryAppInfos = make_shared<ListSummaryAppsResponseBodySummaryAppInfos>(model1);
      }
    }
  }


  virtual ~ListSummaryAppsResponseBody() = default;
};
class ListSummaryAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSummaryAppsResponseBody> body{};

  ListSummaryAppsResponse() {}

  explicit ListSummaryAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSummaryAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSummaryAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSummaryAppsResponse() = default;
};
class ListTagsRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};

  ListTagsRequest() {}

  explicit ListTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
  }


  virtual ~ListTagsRequest() = default;
};
class ListTagsResponseBodyTagInfosTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagName{};

  ListTagsResponseBodyTagInfosTagInfo() {}

  explicit ListTagsResponseBodyTagInfosTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~ListTagsResponseBodyTagInfosTagInfo() = default;
};
class ListTagsResponseBodyTagInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagsResponseBodyTagInfosTagInfo>> tagInfo{};

  ListTagsResponseBodyTagInfos() {}

  explicit ListTagsResponseBodyTagInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<ListTagsResponseBodyTagInfosTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagsResponseBodyTagInfosTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<ListTagsResponseBodyTagInfosTagInfo>>(expect1);
      }
    }
  }


  virtual ~ListTagsResponseBodyTagInfos() = default;
};
class ListTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListTagsResponseBodyTagInfos> tagInfos{};

  ListTagsResponseBody() {}

  explicit ListTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagInfos) {
      res["TagInfos"] = tagInfos ? boost::any(tagInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagInfos") != m.end() && !m["TagInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagInfos"].type()) {
        ListTagsResponseBodyTagInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagInfos"]));
        tagInfos = make_shared<ListTagsResponseBodyTagInfos>(model1);
      }
    }
  }


  virtual ~ListTagsResponseBody() = default;
};
class ListTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagsResponseBody> body{};

  ListTagsResponse() {}

  explicit ListTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagsResponse() = default;
};
class MassPushRequestPushTask : public Darabonba::Model {
public:
  shared_ptr<string> androidActivity{};
  shared_ptr<string> androidBigBody{};
  shared_ptr<string> androidBigPictureUrl{};
  shared_ptr<string> androidBigTitle{};
  shared_ptr<string> androidExtParameters{};
  shared_ptr<string> androidHuaweiReceiptId{};
  shared_ptr<long> androidHuaweiTargetUserType{};
  shared_ptr<string> androidImageUrl{};
  shared_ptr<string> androidInboxBody{};
  shared_ptr<string> androidMessageHuaweiCategory{};
  shared_ptr<string> androidMessageHuaweiUrgency{};
  shared_ptr<string> androidMessageVivoCategory{};
  shared_ptr<string> androidMusic{};
  shared_ptr<long> androidNotificationBarPriority{};
  shared_ptr<long> androidNotificationBarType{};
  shared_ptr<string> androidNotificationChannel{};
  shared_ptr<string> androidNotificationGroup{};
  shared_ptr<string> androidNotificationHonorChannel{};
  shared_ptr<string> androidNotificationHuaweiChannel{};
  shared_ptr<long> androidNotificationNotifyId{};
  shared_ptr<string> androidNotificationVivoChannel{};
  shared_ptr<string> androidNotificationXiaomiChannel{};
  shared_ptr<string> androidNotifyType{};
  shared_ptr<string> androidOpenType{};
  shared_ptr<string> androidOpenUrl{};
  shared_ptr<string> androidPopupActivity{};
  shared_ptr<string> androidPopupBody{};
  shared_ptr<string> androidPopupTitle{};
  shared_ptr<bool> androidRemind{};
  shared_ptr<string> androidRenderStyle{};
  shared_ptr<long> androidVivoPushMode{};
  shared_ptr<string> androidXiaoMiActivity{};
  shared_ptr<string> androidXiaoMiNotifyBody{};
  shared_ptr<string> androidXiaoMiNotifyTitle{};
  shared_ptr<string> androidXiaomiBigPictureUrl{};
  shared_ptr<string> androidXiaomiImageUrl{};
  shared_ptr<string> body{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> jobKey{};
  shared_ptr<string> pushTime{};
  shared_ptr<string> pushType{};
  shared_ptr<string> sendChannels{};
  shared_ptr<long> sendSpeed{};
  shared_ptr<bool> storeOffline{};
  shared_ptr<string> target{};
  shared_ptr<string> targetValue{};
  shared_ptr<string> title{};
  shared_ptr<bool> trim{};
  shared_ptr<string> iOSApnsEnv{};
  shared_ptr<long> iOSBadge{};
  shared_ptr<bool> iOSBadgeAutoIncrement{};
  shared_ptr<string> iOSExtParameters{};
  shared_ptr<string> iOSInterruptionLevel{};
  shared_ptr<string> iOSMusic{};
  shared_ptr<bool> iOSMutableContent{};
  shared_ptr<string> iOSNotificationCategory{};
  shared_ptr<string> iOSNotificationCollapseId{};
  shared_ptr<string> iOSNotificationThreadId{};
  shared_ptr<double> iOSRelevanceScore{};
  shared_ptr<bool> iOSRemind{};
  shared_ptr<string> iOSRemindBody{};
  shared_ptr<bool> iOSSilentNotification{};
  shared_ptr<string> iOSSubtitle{};

  MassPushRequestPushTask() {}

  explicit MassPushRequestPushTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidActivity) {
      res["AndroidActivity"] = boost::any(*androidActivity);
    }
    if (androidBigBody) {
      res["AndroidBigBody"] = boost::any(*androidBigBody);
    }
    if (androidBigPictureUrl) {
      res["AndroidBigPictureUrl"] = boost::any(*androidBigPictureUrl);
    }
    if (androidBigTitle) {
      res["AndroidBigTitle"] = boost::any(*androidBigTitle);
    }
    if (androidExtParameters) {
      res["AndroidExtParameters"] = boost::any(*androidExtParameters);
    }
    if (androidHuaweiReceiptId) {
      res["AndroidHuaweiReceiptId"] = boost::any(*androidHuaweiReceiptId);
    }
    if (androidHuaweiTargetUserType) {
      res["AndroidHuaweiTargetUserType"] = boost::any(*androidHuaweiTargetUserType);
    }
    if (androidImageUrl) {
      res["AndroidImageUrl"] = boost::any(*androidImageUrl);
    }
    if (androidInboxBody) {
      res["AndroidInboxBody"] = boost::any(*androidInboxBody);
    }
    if (androidMessageHuaweiCategory) {
      res["AndroidMessageHuaweiCategory"] = boost::any(*androidMessageHuaweiCategory);
    }
    if (androidMessageHuaweiUrgency) {
      res["AndroidMessageHuaweiUrgency"] = boost::any(*androidMessageHuaweiUrgency);
    }
    if (androidMessageVivoCategory) {
      res["AndroidMessageVivoCategory"] = boost::any(*androidMessageVivoCategory);
    }
    if (androidMusic) {
      res["AndroidMusic"] = boost::any(*androidMusic);
    }
    if (androidNotificationBarPriority) {
      res["AndroidNotificationBarPriority"] = boost::any(*androidNotificationBarPriority);
    }
    if (androidNotificationBarType) {
      res["AndroidNotificationBarType"] = boost::any(*androidNotificationBarType);
    }
    if (androidNotificationChannel) {
      res["AndroidNotificationChannel"] = boost::any(*androidNotificationChannel);
    }
    if (androidNotificationGroup) {
      res["AndroidNotificationGroup"] = boost::any(*androidNotificationGroup);
    }
    if (androidNotificationHonorChannel) {
      res["AndroidNotificationHonorChannel"] = boost::any(*androidNotificationHonorChannel);
    }
    if (androidNotificationHuaweiChannel) {
      res["AndroidNotificationHuaweiChannel"] = boost::any(*androidNotificationHuaweiChannel);
    }
    if (androidNotificationNotifyId) {
      res["AndroidNotificationNotifyId"] = boost::any(*androidNotificationNotifyId);
    }
    if (androidNotificationVivoChannel) {
      res["AndroidNotificationVivoChannel"] = boost::any(*androidNotificationVivoChannel);
    }
    if (androidNotificationXiaomiChannel) {
      res["AndroidNotificationXiaomiChannel"] = boost::any(*androidNotificationXiaomiChannel);
    }
    if (androidNotifyType) {
      res["AndroidNotifyType"] = boost::any(*androidNotifyType);
    }
    if (androidOpenType) {
      res["AndroidOpenType"] = boost::any(*androidOpenType);
    }
    if (androidOpenUrl) {
      res["AndroidOpenUrl"] = boost::any(*androidOpenUrl);
    }
    if (androidPopupActivity) {
      res["AndroidPopupActivity"] = boost::any(*androidPopupActivity);
    }
    if (androidPopupBody) {
      res["AndroidPopupBody"] = boost::any(*androidPopupBody);
    }
    if (androidPopupTitle) {
      res["AndroidPopupTitle"] = boost::any(*androidPopupTitle);
    }
    if (androidRemind) {
      res["AndroidRemind"] = boost::any(*androidRemind);
    }
    if (androidRenderStyle) {
      res["AndroidRenderStyle"] = boost::any(*androidRenderStyle);
    }
    if (androidVivoPushMode) {
      res["AndroidVivoPushMode"] = boost::any(*androidVivoPushMode);
    }
    if (androidXiaoMiActivity) {
      res["AndroidXiaoMiActivity"] = boost::any(*androidXiaoMiActivity);
    }
    if (androidXiaoMiNotifyBody) {
      res["AndroidXiaoMiNotifyBody"] = boost::any(*androidXiaoMiNotifyBody);
    }
    if (androidXiaoMiNotifyTitle) {
      res["AndroidXiaoMiNotifyTitle"] = boost::any(*androidXiaoMiNotifyTitle);
    }
    if (androidXiaomiBigPictureUrl) {
      res["AndroidXiaomiBigPictureUrl"] = boost::any(*androidXiaomiBigPictureUrl);
    }
    if (androidXiaomiImageUrl) {
      res["AndroidXiaomiImageUrl"] = boost::any(*androidXiaomiImageUrl);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    if (pushTime) {
      res["PushTime"] = boost::any(*pushTime);
    }
    if (pushType) {
      res["PushType"] = boost::any(*pushType);
    }
    if (sendChannels) {
      res["SendChannels"] = boost::any(*sendChannels);
    }
    if (sendSpeed) {
      res["SendSpeed"] = boost::any(*sendSpeed);
    }
    if (storeOffline) {
      res["StoreOffline"] = boost::any(*storeOffline);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (trim) {
      res["Trim"] = boost::any(*trim);
    }
    if (iOSApnsEnv) {
      res["iOSApnsEnv"] = boost::any(*iOSApnsEnv);
    }
    if (iOSBadge) {
      res["iOSBadge"] = boost::any(*iOSBadge);
    }
    if (iOSBadgeAutoIncrement) {
      res["iOSBadgeAutoIncrement"] = boost::any(*iOSBadgeAutoIncrement);
    }
    if (iOSExtParameters) {
      res["iOSExtParameters"] = boost::any(*iOSExtParameters);
    }
    if (iOSInterruptionLevel) {
      res["iOSInterruptionLevel"] = boost::any(*iOSInterruptionLevel);
    }
    if (iOSMusic) {
      res["iOSMusic"] = boost::any(*iOSMusic);
    }
    if (iOSMutableContent) {
      res["iOSMutableContent"] = boost::any(*iOSMutableContent);
    }
    if (iOSNotificationCategory) {
      res["iOSNotificationCategory"] = boost::any(*iOSNotificationCategory);
    }
    if (iOSNotificationCollapseId) {
      res["iOSNotificationCollapseId"] = boost::any(*iOSNotificationCollapseId);
    }
    if (iOSNotificationThreadId) {
      res["iOSNotificationThreadId"] = boost::any(*iOSNotificationThreadId);
    }
    if (iOSRelevanceScore) {
      res["iOSRelevanceScore"] = boost::any(*iOSRelevanceScore);
    }
    if (iOSRemind) {
      res["iOSRemind"] = boost::any(*iOSRemind);
    }
    if (iOSRemindBody) {
      res["iOSRemindBody"] = boost::any(*iOSRemindBody);
    }
    if (iOSSilentNotification) {
      res["iOSSilentNotification"] = boost::any(*iOSSilentNotification);
    }
    if (iOSSubtitle) {
      res["iOSSubtitle"] = boost::any(*iOSSubtitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidActivity") != m.end() && !m["AndroidActivity"].empty()) {
      androidActivity = make_shared<string>(boost::any_cast<string>(m["AndroidActivity"]));
    }
    if (m.find("AndroidBigBody") != m.end() && !m["AndroidBigBody"].empty()) {
      androidBigBody = make_shared<string>(boost::any_cast<string>(m["AndroidBigBody"]));
    }
    if (m.find("AndroidBigPictureUrl") != m.end() && !m["AndroidBigPictureUrl"].empty()) {
      androidBigPictureUrl = make_shared<string>(boost::any_cast<string>(m["AndroidBigPictureUrl"]));
    }
    if (m.find("AndroidBigTitle") != m.end() && !m["AndroidBigTitle"].empty()) {
      androidBigTitle = make_shared<string>(boost::any_cast<string>(m["AndroidBigTitle"]));
    }
    if (m.find("AndroidExtParameters") != m.end() && !m["AndroidExtParameters"].empty()) {
      androidExtParameters = make_shared<string>(boost::any_cast<string>(m["AndroidExtParameters"]));
    }
    if (m.find("AndroidHuaweiReceiptId") != m.end() && !m["AndroidHuaweiReceiptId"].empty()) {
      androidHuaweiReceiptId = make_shared<string>(boost::any_cast<string>(m["AndroidHuaweiReceiptId"]));
    }
    if (m.find("AndroidHuaweiTargetUserType") != m.end() && !m["AndroidHuaweiTargetUserType"].empty()) {
      androidHuaweiTargetUserType = make_shared<long>(boost::any_cast<long>(m["AndroidHuaweiTargetUserType"]));
    }
    if (m.find("AndroidImageUrl") != m.end() && !m["AndroidImageUrl"].empty()) {
      androidImageUrl = make_shared<string>(boost::any_cast<string>(m["AndroidImageUrl"]));
    }
    if (m.find("AndroidInboxBody") != m.end() && !m["AndroidInboxBody"].empty()) {
      androidInboxBody = make_shared<string>(boost::any_cast<string>(m["AndroidInboxBody"]));
    }
    if (m.find("AndroidMessageHuaweiCategory") != m.end() && !m["AndroidMessageHuaweiCategory"].empty()) {
      androidMessageHuaweiCategory = make_shared<string>(boost::any_cast<string>(m["AndroidMessageHuaweiCategory"]));
    }
    if (m.find("AndroidMessageHuaweiUrgency") != m.end() && !m["AndroidMessageHuaweiUrgency"].empty()) {
      androidMessageHuaweiUrgency = make_shared<string>(boost::any_cast<string>(m["AndroidMessageHuaweiUrgency"]));
    }
    if (m.find("AndroidMessageVivoCategory") != m.end() && !m["AndroidMessageVivoCategory"].empty()) {
      androidMessageVivoCategory = make_shared<string>(boost::any_cast<string>(m["AndroidMessageVivoCategory"]));
    }
    if (m.find("AndroidMusic") != m.end() && !m["AndroidMusic"].empty()) {
      androidMusic = make_shared<string>(boost::any_cast<string>(m["AndroidMusic"]));
    }
    if (m.find("AndroidNotificationBarPriority") != m.end() && !m["AndroidNotificationBarPriority"].empty()) {
      androidNotificationBarPriority = make_shared<long>(boost::any_cast<long>(m["AndroidNotificationBarPriority"]));
    }
    if (m.find("AndroidNotificationBarType") != m.end() && !m["AndroidNotificationBarType"].empty()) {
      androidNotificationBarType = make_shared<long>(boost::any_cast<long>(m["AndroidNotificationBarType"]));
    }
    if (m.find("AndroidNotificationChannel") != m.end() && !m["AndroidNotificationChannel"].empty()) {
      androidNotificationChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationChannel"]));
    }
    if (m.find("AndroidNotificationGroup") != m.end() && !m["AndroidNotificationGroup"].empty()) {
      androidNotificationGroup = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationGroup"]));
    }
    if (m.find("AndroidNotificationHonorChannel") != m.end() && !m["AndroidNotificationHonorChannel"].empty()) {
      androidNotificationHonorChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationHonorChannel"]));
    }
    if (m.find("AndroidNotificationHuaweiChannel") != m.end() && !m["AndroidNotificationHuaweiChannel"].empty()) {
      androidNotificationHuaweiChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationHuaweiChannel"]));
    }
    if (m.find("AndroidNotificationNotifyId") != m.end() && !m["AndroidNotificationNotifyId"].empty()) {
      androidNotificationNotifyId = make_shared<long>(boost::any_cast<long>(m["AndroidNotificationNotifyId"]));
    }
    if (m.find("AndroidNotificationVivoChannel") != m.end() && !m["AndroidNotificationVivoChannel"].empty()) {
      androidNotificationVivoChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationVivoChannel"]));
    }
    if (m.find("AndroidNotificationXiaomiChannel") != m.end() && !m["AndroidNotificationXiaomiChannel"].empty()) {
      androidNotificationXiaomiChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationXiaomiChannel"]));
    }
    if (m.find("AndroidNotifyType") != m.end() && !m["AndroidNotifyType"].empty()) {
      androidNotifyType = make_shared<string>(boost::any_cast<string>(m["AndroidNotifyType"]));
    }
    if (m.find("AndroidOpenType") != m.end() && !m["AndroidOpenType"].empty()) {
      androidOpenType = make_shared<string>(boost::any_cast<string>(m["AndroidOpenType"]));
    }
    if (m.find("AndroidOpenUrl") != m.end() && !m["AndroidOpenUrl"].empty()) {
      androidOpenUrl = make_shared<string>(boost::any_cast<string>(m["AndroidOpenUrl"]));
    }
    if (m.find("AndroidPopupActivity") != m.end() && !m["AndroidPopupActivity"].empty()) {
      androidPopupActivity = make_shared<string>(boost::any_cast<string>(m["AndroidPopupActivity"]));
    }
    if (m.find("AndroidPopupBody") != m.end() && !m["AndroidPopupBody"].empty()) {
      androidPopupBody = make_shared<string>(boost::any_cast<string>(m["AndroidPopupBody"]));
    }
    if (m.find("AndroidPopupTitle") != m.end() && !m["AndroidPopupTitle"].empty()) {
      androidPopupTitle = make_shared<string>(boost::any_cast<string>(m["AndroidPopupTitle"]));
    }
    if (m.find("AndroidRemind") != m.end() && !m["AndroidRemind"].empty()) {
      androidRemind = make_shared<bool>(boost::any_cast<bool>(m["AndroidRemind"]));
    }
    if (m.find("AndroidRenderStyle") != m.end() && !m["AndroidRenderStyle"].empty()) {
      androidRenderStyle = make_shared<string>(boost::any_cast<string>(m["AndroidRenderStyle"]));
    }
    if (m.find("AndroidVivoPushMode") != m.end() && !m["AndroidVivoPushMode"].empty()) {
      androidVivoPushMode = make_shared<long>(boost::any_cast<long>(m["AndroidVivoPushMode"]));
    }
    if (m.find("AndroidXiaoMiActivity") != m.end() && !m["AndroidXiaoMiActivity"].empty()) {
      androidXiaoMiActivity = make_shared<string>(boost::any_cast<string>(m["AndroidXiaoMiActivity"]));
    }
    if (m.find("AndroidXiaoMiNotifyBody") != m.end() && !m["AndroidXiaoMiNotifyBody"].empty()) {
      androidXiaoMiNotifyBody = make_shared<string>(boost::any_cast<string>(m["AndroidXiaoMiNotifyBody"]));
    }
    if (m.find("AndroidXiaoMiNotifyTitle") != m.end() && !m["AndroidXiaoMiNotifyTitle"].empty()) {
      androidXiaoMiNotifyTitle = make_shared<string>(boost::any_cast<string>(m["AndroidXiaoMiNotifyTitle"]));
    }
    if (m.find("AndroidXiaomiBigPictureUrl") != m.end() && !m["AndroidXiaomiBigPictureUrl"].empty()) {
      androidXiaomiBigPictureUrl = make_shared<string>(boost::any_cast<string>(m["AndroidXiaomiBigPictureUrl"]));
    }
    if (m.find("AndroidXiaomiImageUrl") != m.end() && !m["AndroidXiaomiImageUrl"].empty()) {
      androidXiaomiImageUrl = make_shared<string>(boost::any_cast<string>(m["AndroidXiaomiImageUrl"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
    if (m.find("PushTime") != m.end() && !m["PushTime"].empty()) {
      pushTime = make_shared<string>(boost::any_cast<string>(m["PushTime"]));
    }
    if (m.find("PushType") != m.end() && !m["PushType"].empty()) {
      pushType = make_shared<string>(boost::any_cast<string>(m["PushType"]));
    }
    if (m.find("SendChannels") != m.end() && !m["SendChannels"].empty()) {
      sendChannels = make_shared<string>(boost::any_cast<string>(m["SendChannels"]));
    }
    if (m.find("SendSpeed") != m.end() && !m["SendSpeed"].empty()) {
      sendSpeed = make_shared<long>(boost::any_cast<long>(m["SendSpeed"]));
    }
    if (m.find("StoreOffline") != m.end() && !m["StoreOffline"].empty()) {
      storeOffline = make_shared<bool>(boost::any_cast<bool>(m["StoreOffline"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<string>(boost::any_cast<string>(m["TargetValue"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Trim") != m.end() && !m["Trim"].empty()) {
      trim = make_shared<bool>(boost::any_cast<bool>(m["Trim"]));
    }
    if (m.find("iOSApnsEnv") != m.end() && !m["iOSApnsEnv"].empty()) {
      iOSApnsEnv = make_shared<string>(boost::any_cast<string>(m["iOSApnsEnv"]));
    }
    if (m.find("iOSBadge") != m.end() && !m["iOSBadge"].empty()) {
      iOSBadge = make_shared<long>(boost::any_cast<long>(m["iOSBadge"]));
    }
    if (m.find("iOSBadgeAutoIncrement") != m.end() && !m["iOSBadgeAutoIncrement"].empty()) {
      iOSBadgeAutoIncrement = make_shared<bool>(boost::any_cast<bool>(m["iOSBadgeAutoIncrement"]));
    }
    if (m.find("iOSExtParameters") != m.end() && !m["iOSExtParameters"].empty()) {
      iOSExtParameters = make_shared<string>(boost::any_cast<string>(m["iOSExtParameters"]));
    }
    if (m.find("iOSInterruptionLevel") != m.end() && !m["iOSInterruptionLevel"].empty()) {
      iOSInterruptionLevel = make_shared<string>(boost::any_cast<string>(m["iOSInterruptionLevel"]));
    }
    if (m.find("iOSMusic") != m.end() && !m["iOSMusic"].empty()) {
      iOSMusic = make_shared<string>(boost::any_cast<string>(m["iOSMusic"]));
    }
    if (m.find("iOSMutableContent") != m.end() && !m["iOSMutableContent"].empty()) {
      iOSMutableContent = make_shared<bool>(boost::any_cast<bool>(m["iOSMutableContent"]));
    }
    if (m.find("iOSNotificationCategory") != m.end() && !m["iOSNotificationCategory"].empty()) {
      iOSNotificationCategory = make_shared<string>(boost::any_cast<string>(m["iOSNotificationCategory"]));
    }
    if (m.find("iOSNotificationCollapseId") != m.end() && !m["iOSNotificationCollapseId"].empty()) {
      iOSNotificationCollapseId = make_shared<string>(boost::any_cast<string>(m["iOSNotificationCollapseId"]));
    }
    if (m.find("iOSNotificationThreadId") != m.end() && !m["iOSNotificationThreadId"].empty()) {
      iOSNotificationThreadId = make_shared<string>(boost::any_cast<string>(m["iOSNotificationThreadId"]));
    }
    if (m.find("iOSRelevanceScore") != m.end() && !m["iOSRelevanceScore"].empty()) {
      iOSRelevanceScore = make_shared<double>(boost::any_cast<double>(m["iOSRelevanceScore"]));
    }
    if (m.find("iOSRemind") != m.end() && !m["iOSRemind"].empty()) {
      iOSRemind = make_shared<bool>(boost::any_cast<bool>(m["iOSRemind"]));
    }
    if (m.find("iOSRemindBody") != m.end() && !m["iOSRemindBody"].empty()) {
      iOSRemindBody = make_shared<string>(boost::any_cast<string>(m["iOSRemindBody"]));
    }
    if (m.find("iOSSilentNotification") != m.end() && !m["iOSSilentNotification"].empty()) {
      iOSSilentNotification = make_shared<bool>(boost::any_cast<bool>(m["iOSSilentNotification"]));
    }
    if (m.find("iOSSubtitle") != m.end() && !m["iOSSubtitle"].empty()) {
      iOSSubtitle = make_shared<string>(boost::any_cast<string>(m["iOSSubtitle"]));
    }
  }


  virtual ~MassPushRequestPushTask() = default;
};
class MassPushRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<vector<MassPushRequestPushTask>> pushTask{};

  MassPushRequest() {}

  explicit MassPushRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (pushTask) {
      vector<boost::any> temp1;
      for(auto item1:*pushTask){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PushTask"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("PushTask") != m.end() && !m["PushTask"].empty()) {
      if (typeid(vector<boost::any>) == m["PushTask"].type()) {
        vector<MassPushRequestPushTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PushTask"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MassPushRequestPushTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pushTask = make_shared<vector<MassPushRequestPushTask>>(expect1);
      }
    }
  }


  virtual ~MassPushRequest() = default;
};
class MassPushResponseBodyMessageIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> messageId{};

  MassPushResponseBodyMessageIds() {}

  explicit MassPushResponseBodyMessageIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MessageId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MessageId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~MassPushResponseBodyMessageIds() = default;
};
class MassPushResponseBody : public Darabonba::Model {
public:
  shared_ptr<MassPushResponseBodyMessageIds> messageIds{};
  shared_ptr<string> requestId{};

  MassPushResponseBody() {}

  explicit MassPushResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageIds) {
      res["MessageIds"] = messageIds ? boost::any(messageIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageIds") != m.end() && !m["MessageIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["MessageIds"].type()) {
        MassPushResponseBodyMessageIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MessageIds"]));
        messageIds = make_shared<MassPushResponseBodyMessageIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MassPushResponseBody() = default;
};
class MassPushResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MassPushResponseBody> body{};

  MassPushResponse() {}

  explicit MassPushResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MassPushResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MassPushResponseBody>(model1);
      }
    }
  }


  virtual ~MassPushResponse() = default;
};
class PushRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidActivity{};
  shared_ptr<string> androidBigBody{};
  shared_ptr<string> androidBigPictureUrl{};
  shared_ptr<string> androidBigTitle{};
  shared_ptr<string> androidExtParameters{};
  shared_ptr<string> androidHuaweiReceiptId{};
  shared_ptr<long> androidHuaweiTargetUserType{};
  shared_ptr<string> androidImageUrl{};
  shared_ptr<string> androidInboxBody{};
  shared_ptr<string> androidMessageHuaweiCategory{};
  shared_ptr<string> androidMessageHuaweiUrgency{};
  shared_ptr<string> androidMessageVivoCategory{};
  shared_ptr<string> androidMusic{};
  shared_ptr<long> androidNotificationBarPriority{};
  shared_ptr<long> androidNotificationBarType{};
  shared_ptr<string> androidNotificationChannel{};
  shared_ptr<string> androidNotificationGroup{};
  shared_ptr<string> androidNotificationHonorChannel{};
  shared_ptr<string> androidNotificationHuaweiChannel{};
  shared_ptr<long> androidNotificationNotifyId{};
  shared_ptr<string> androidNotificationVivoChannel{};
  shared_ptr<string> androidNotificationXiaomiChannel{};
  shared_ptr<string> androidNotifyType{};
  shared_ptr<string> androidOpenType{};
  shared_ptr<string> androidOpenUrl{};
  shared_ptr<string> androidPopupActivity{};
  shared_ptr<string> androidPopupBody{};
  shared_ptr<string> androidPopupTitle{};
  shared_ptr<bool> androidRemind{};
  shared_ptr<long> androidRenderStyle{};
  shared_ptr<long> androidVivoPushMode{};
  shared_ptr<string> androidXiaoMiActivity{};
  shared_ptr<string> androidXiaoMiNotifyBody{};
  shared_ptr<string> androidXiaoMiNotifyTitle{};
  shared_ptr<string> androidXiaomiBigPictureUrl{};
  shared_ptr<string> androidXiaomiImageUrl{};
  shared_ptr<long> appKey{};
  shared_ptr<string> body{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> jobKey{};
  shared_ptr<string> pushTime{};
  shared_ptr<string> pushType{};
  shared_ptr<string> sendChannels{};
  shared_ptr<long> sendSpeed{};
  shared_ptr<long> smsDelaySecs{};
  shared_ptr<string> smsParams{};
  shared_ptr<long> smsSendPolicy{};
  shared_ptr<string> smsSignName{};
  shared_ptr<string> smsTemplateName{};
  shared_ptr<bool> storeOffline{};
  shared_ptr<string> target{};
  shared_ptr<string> targetValue{};
  shared_ptr<string> title{};
  shared_ptr<bool> trim{};
  shared_ptr<string> iOSApnsEnv{};
  shared_ptr<long> iOSBadge{};
  shared_ptr<bool> iOSBadgeAutoIncrement{};
  shared_ptr<string> iOSExtParameters{};
  shared_ptr<string> iOSInterruptionLevel{};
  shared_ptr<string> iOSMusic{};
  shared_ptr<bool> iOSMutableContent{};
  shared_ptr<string> iOSNotificationCategory{};
  shared_ptr<string> iOSNotificationCollapseId{};
  shared_ptr<string> iOSNotificationThreadId{};
  shared_ptr<double> iOSRelevanceScore{};
  shared_ptr<bool> iOSRemind{};
  shared_ptr<string> iOSRemindBody{};
  shared_ptr<bool> iOSSilentNotification{};
  shared_ptr<string> iOSSubtitle{};

  PushRequest() {}

  explicit PushRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidActivity) {
      res["AndroidActivity"] = boost::any(*androidActivity);
    }
    if (androidBigBody) {
      res["AndroidBigBody"] = boost::any(*androidBigBody);
    }
    if (androidBigPictureUrl) {
      res["AndroidBigPictureUrl"] = boost::any(*androidBigPictureUrl);
    }
    if (androidBigTitle) {
      res["AndroidBigTitle"] = boost::any(*androidBigTitle);
    }
    if (androidExtParameters) {
      res["AndroidExtParameters"] = boost::any(*androidExtParameters);
    }
    if (androidHuaweiReceiptId) {
      res["AndroidHuaweiReceiptId"] = boost::any(*androidHuaweiReceiptId);
    }
    if (androidHuaweiTargetUserType) {
      res["AndroidHuaweiTargetUserType"] = boost::any(*androidHuaweiTargetUserType);
    }
    if (androidImageUrl) {
      res["AndroidImageUrl"] = boost::any(*androidImageUrl);
    }
    if (androidInboxBody) {
      res["AndroidInboxBody"] = boost::any(*androidInboxBody);
    }
    if (androidMessageHuaweiCategory) {
      res["AndroidMessageHuaweiCategory"] = boost::any(*androidMessageHuaweiCategory);
    }
    if (androidMessageHuaweiUrgency) {
      res["AndroidMessageHuaweiUrgency"] = boost::any(*androidMessageHuaweiUrgency);
    }
    if (androidMessageVivoCategory) {
      res["AndroidMessageVivoCategory"] = boost::any(*androidMessageVivoCategory);
    }
    if (androidMusic) {
      res["AndroidMusic"] = boost::any(*androidMusic);
    }
    if (androidNotificationBarPriority) {
      res["AndroidNotificationBarPriority"] = boost::any(*androidNotificationBarPriority);
    }
    if (androidNotificationBarType) {
      res["AndroidNotificationBarType"] = boost::any(*androidNotificationBarType);
    }
    if (androidNotificationChannel) {
      res["AndroidNotificationChannel"] = boost::any(*androidNotificationChannel);
    }
    if (androidNotificationGroup) {
      res["AndroidNotificationGroup"] = boost::any(*androidNotificationGroup);
    }
    if (androidNotificationHonorChannel) {
      res["AndroidNotificationHonorChannel"] = boost::any(*androidNotificationHonorChannel);
    }
    if (androidNotificationHuaweiChannel) {
      res["AndroidNotificationHuaweiChannel"] = boost::any(*androidNotificationHuaweiChannel);
    }
    if (androidNotificationNotifyId) {
      res["AndroidNotificationNotifyId"] = boost::any(*androidNotificationNotifyId);
    }
    if (androidNotificationVivoChannel) {
      res["AndroidNotificationVivoChannel"] = boost::any(*androidNotificationVivoChannel);
    }
    if (androidNotificationXiaomiChannel) {
      res["AndroidNotificationXiaomiChannel"] = boost::any(*androidNotificationXiaomiChannel);
    }
    if (androidNotifyType) {
      res["AndroidNotifyType"] = boost::any(*androidNotifyType);
    }
    if (androidOpenType) {
      res["AndroidOpenType"] = boost::any(*androidOpenType);
    }
    if (androidOpenUrl) {
      res["AndroidOpenUrl"] = boost::any(*androidOpenUrl);
    }
    if (androidPopupActivity) {
      res["AndroidPopupActivity"] = boost::any(*androidPopupActivity);
    }
    if (androidPopupBody) {
      res["AndroidPopupBody"] = boost::any(*androidPopupBody);
    }
    if (androidPopupTitle) {
      res["AndroidPopupTitle"] = boost::any(*androidPopupTitle);
    }
    if (androidRemind) {
      res["AndroidRemind"] = boost::any(*androidRemind);
    }
    if (androidRenderStyle) {
      res["AndroidRenderStyle"] = boost::any(*androidRenderStyle);
    }
    if (androidVivoPushMode) {
      res["AndroidVivoPushMode"] = boost::any(*androidVivoPushMode);
    }
    if (androidXiaoMiActivity) {
      res["AndroidXiaoMiActivity"] = boost::any(*androidXiaoMiActivity);
    }
    if (androidXiaoMiNotifyBody) {
      res["AndroidXiaoMiNotifyBody"] = boost::any(*androidXiaoMiNotifyBody);
    }
    if (androidXiaoMiNotifyTitle) {
      res["AndroidXiaoMiNotifyTitle"] = boost::any(*androidXiaoMiNotifyTitle);
    }
    if (androidXiaomiBigPictureUrl) {
      res["AndroidXiaomiBigPictureUrl"] = boost::any(*androidXiaomiBigPictureUrl);
    }
    if (androidXiaomiImageUrl) {
      res["AndroidXiaomiImageUrl"] = boost::any(*androidXiaomiImageUrl);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    if (pushTime) {
      res["PushTime"] = boost::any(*pushTime);
    }
    if (pushType) {
      res["PushType"] = boost::any(*pushType);
    }
    if (sendChannels) {
      res["SendChannels"] = boost::any(*sendChannels);
    }
    if (sendSpeed) {
      res["SendSpeed"] = boost::any(*sendSpeed);
    }
    if (smsDelaySecs) {
      res["SmsDelaySecs"] = boost::any(*smsDelaySecs);
    }
    if (smsParams) {
      res["SmsParams"] = boost::any(*smsParams);
    }
    if (smsSendPolicy) {
      res["SmsSendPolicy"] = boost::any(*smsSendPolicy);
    }
    if (smsSignName) {
      res["SmsSignName"] = boost::any(*smsSignName);
    }
    if (smsTemplateName) {
      res["SmsTemplateName"] = boost::any(*smsTemplateName);
    }
    if (storeOffline) {
      res["StoreOffline"] = boost::any(*storeOffline);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (trim) {
      res["Trim"] = boost::any(*trim);
    }
    if (iOSApnsEnv) {
      res["iOSApnsEnv"] = boost::any(*iOSApnsEnv);
    }
    if (iOSBadge) {
      res["iOSBadge"] = boost::any(*iOSBadge);
    }
    if (iOSBadgeAutoIncrement) {
      res["iOSBadgeAutoIncrement"] = boost::any(*iOSBadgeAutoIncrement);
    }
    if (iOSExtParameters) {
      res["iOSExtParameters"] = boost::any(*iOSExtParameters);
    }
    if (iOSInterruptionLevel) {
      res["iOSInterruptionLevel"] = boost::any(*iOSInterruptionLevel);
    }
    if (iOSMusic) {
      res["iOSMusic"] = boost::any(*iOSMusic);
    }
    if (iOSMutableContent) {
      res["iOSMutableContent"] = boost::any(*iOSMutableContent);
    }
    if (iOSNotificationCategory) {
      res["iOSNotificationCategory"] = boost::any(*iOSNotificationCategory);
    }
    if (iOSNotificationCollapseId) {
      res["iOSNotificationCollapseId"] = boost::any(*iOSNotificationCollapseId);
    }
    if (iOSNotificationThreadId) {
      res["iOSNotificationThreadId"] = boost::any(*iOSNotificationThreadId);
    }
    if (iOSRelevanceScore) {
      res["iOSRelevanceScore"] = boost::any(*iOSRelevanceScore);
    }
    if (iOSRemind) {
      res["iOSRemind"] = boost::any(*iOSRemind);
    }
    if (iOSRemindBody) {
      res["iOSRemindBody"] = boost::any(*iOSRemindBody);
    }
    if (iOSSilentNotification) {
      res["iOSSilentNotification"] = boost::any(*iOSSilentNotification);
    }
    if (iOSSubtitle) {
      res["iOSSubtitle"] = boost::any(*iOSSubtitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidActivity") != m.end() && !m["AndroidActivity"].empty()) {
      androidActivity = make_shared<string>(boost::any_cast<string>(m["AndroidActivity"]));
    }
    if (m.find("AndroidBigBody") != m.end() && !m["AndroidBigBody"].empty()) {
      androidBigBody = make_shared<string>(boost::any_cast<string>(m["AndroidBigBody"]));
    }
    if (m.find("AndroidBigPictureUrl") != m.end() && !m["AndroidBigPictureUrl"].empty()) {
      androidBigPictureUrl = make_shared<string>(boost::any_cast<string>(m["AndroidBigPictureUrl"]));
    }
    if (m.find("AndroidBigTitle") != m.end() && !m["AndroidBigTitle"].empty()) {
      androidBigTitle = make_shared<string>(boost::any_cast<string>(m["AndroidBigTitle"]));
    }
    if (m.find("AndroidExtParameters") != m.end() && !m["AndroidExtParameters"].empty()) {
      androidExtParameters = make_shared<string>(boost::any_cast<string>(m["AndroidExtParameters"]));
    }
    if (m.find("AndroidHuaweiReceiptId") != m.end() && !m["AndroidHuaweiReceiptId"].empty()) {
      androidHuaweiReceiptId = make_shared<string>(boost::any_cast<string>(m["AndroidHuaweiReceiptId"]));
    }
    if (m.find("AndroidHuaweiTargetUserType") != m.end() && !m["AndroidHuaweiTargetUserType"].empty()) {
      androidHuaweiTargetUserType = make_shared<long>(boost::any_cast<long>(m["AndroidHuaweiTargetUserType"]));
    }
    if (m.find("AndroidImageUrl") != m.end() && !m["AndroidImageUrl"].empty()) {
      androidImageUrl = make_shared<string>(boost::any_cast<string>(m["AndroidImageUrl"]));
    }
    if (m.find("AndroidInboxBody") != m.end() && !m["AndroidInboxBody"].empty()) {
      androidInboxBody = make_shared<string>(boost::any_cast<string>(m["AndroidInboxBody"]));
    }
    if (m.find("AndroidMessageHuaweiCategory") != m.end() && !m["AndroidMessageHuaweiCategory"].empty()) {
      androidMessageHuaweiCategory = make_shared<string>(boost::any_cast<string>(m["AndroidMessageHuaweiCategory"]));
    }
    if (m.find("AndroidMessageHuaweiUrgency") != m.end() && !m["AndroidMessageHuaweiUrgency"].empty()) {
      androidMessageHuaweiUrgency = make_shared<string>(boost::any_cast<string>(m["AndroidMessageHuaweiUrgency"]));
    }
    if (m.find("AndroidMessageVivoCategory") != m.end() && !m["AndroidMessageVivoCategory"].empty()) {
      androidMessageVivoCategory = make_shared<string>(boost::any_cast<string>(m["AndroidMessageVivoCategory"]));
    }
    if (m.find("AndroidMusic") != m.end() && !m["AndroidMusic"].empty()) {
      androidMusic = make_shared<string>(boost::any_cast<string>(m["AndroidMusic"]));
    }
    if (m.find("AndroidNotificationBarPriority") != m.end() && !m["AndroidNotificationBarPriority"].empty()) {
      androidNotificationBarPriority = make_shared<long>(boost::any_cast<long>(m["AndroidNotificationBarPriority"]));
    }
    if (m.find("AndroidNotificationBarType") != m.end() && !m["AndroidNotificationBarType"].empty()) {
      androidNotificationBarType = make_shared<long>(boost::any_cast<long>(m["AndroidNotificationBarType"]));
    }
    if (m.find("AndroidNotificationChannel") != m.end() && !m["AndroidNotificationChannel"].empty()) {
      androidNotificationChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationChannel"]));
    }
    if (m.find("AndroidNotificationGroup") != m.end() && !m["AndroidNotificationGroup"].empty()) {
      androidNotificationGroup = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationGroup"]));
    }
    if (m.find("AndroidNotificationHonorChannel") != m.end() && !m["AndroidNotificationHonorChannel"].empty()) {
      androidNotificationHonorChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationHonorChannel"]));
    }
    if (m.find("AndroidNotificationHuaweiChannel") != m.end() && !m["AndroidNotificationHuaweiChannel"].empty()) {
      androidNotificationHuaweiChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationHuaweiChannel"]));
    }
    if (m.find("AndroidNotificationNotifyId") != m.end() && !m["AndroidNotificationNotifyId"].empty()) {
      androidNotificationNotifyId = make_shared<long>(boost::any_cast<long>(m["AndroidNotificationNotifyId"]));
    }
    if (m.find("AndroidNotificationVivoChannel") != m.end() && !m["AndroidNotificationVivoChannel"].empty()) {
      androidNotificationVivoChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationVivoChannel"]));
    }
    if (m.find("AndroidNotificationXiaomiChannel") != m.end() && !m["AndroidNotificationXiaomiChannel"].empty()) {
      androidNotificationXiaomiChannel = make_shared<string>(boost::any_cast<string>(m["AndroidNotificationXiaomiChannel"]));
    }
    if (m.find("AndroidNotifyType") != m.end() && !m["AndroidNotifyType"].empty()) {
      androidNotifyType = make_shared<string>(boost::any_cast<string>(m["AndroidNotifyType"]));
    }
    if (m.find("AndroidOpenType") != m.end() && !m["AndroidOpenType"].empty()) {
      androidOpenType = make_shared<string>(boost::any_cast<string>(m["AndroidOpenType"]));
    }
    if (m.find("AndroidOpenUrl") != m.end() && !m["AndroidOpenUrl"].empty()) {
      androidOpenUrl = make_shared<string>(boost::any_cast<string>(m["AndroidOpenUrl"]));
    }
    if (m.find("AndroidPopupActivity") != m.end() && !m["AndroidPopupActivity"].empty()) {
      androidPopupActivity = make_shared<string>(boost::any_cast<string>(m["AndroidPopupActivity"]));
    }
    if (m.find("AndroidPopupBody") != m.end() && !m["AndroidPopupBody"].empty()) {
      androidPopupBody = make_shared<string>(boost::any_cast<string>(m["AndroidPopupBody"]));
    }
    if (m.find("AndroidPopupTitle") != m.end() && !m["AndroidPopupTitle"].empty()) {
      androidPopupTitle = make_shared<string>(boost::any_cast<string>(m["AndroidPopupTitle"]));
    }
    if (m.find("AndroidRemind") != m.end() && !m["AndroidRemind"].empty()) {
      androidRemind = make_shared<bool>(boost::any_cast<bool>(m["AndroidRemind"]));
    }
    if (m.find("AndroidRenderStyle") != m.end() && !m["AndroidRenderStyle"].empty()) {
      androidRenderStyle = make_shared<long>(boost::any_cast<long>(m["AndroidRenderStyle"]));
    }
    if (m.find("AndroidVivoPushMode") != m.end() && !m["AndroidVivoPushMode"].empty()) {
      androidVivoPushMode = make_shared<long>(boost::any_cast<long>(m["AndroidVivoPushMode"]));
    }
    if (m.find("AndroidXiaoMiActivity") != m.end() && !m["AndroidXiaoMiActivity"].empty()) {
      androidXiaoMiActivity = make_shared<string>(boost::any_cast<string>(m["AndroidXiaoMiActivity"]));
    }
    if (m.find("AndroidXiaoMiNotifyBody") != m.end() && !m["AndroidXiaoMiNotifyBody"].empty()) {
      androidXiaoMiNotifyBody = make_shared<string>(boost::any_cast<string>(m["AndroidXiaoMiNotifyBody"]));
    }
    if (m.find("AndroidXiaoMiNotifyTitle") != m.end() && !m["AndroidXiaoMiNotifyTitle"].empty()) {
      androidXiaoMiNotifyTitle = make_shared<string>(boost::any_cast<string>(m["AndroidXiaoMiNotifyTitle"]));
    }
    if (m.find("AndroidXiaomiBigPictureUrl") != m.end() && !m["AndroidXiaomiBigPictureUrl"].empty()) {
      androidXiaomiBigPictureUrl = make_shared<string>(boost::any_cast<string>(m["AndroidXiaomiBigPictureUrl"]));
    }
    if (m.find("AndroidXiaomiImageUrl") != m.end() && !m["AndroidXiaomiImageUrl"].empty()) {
      androidXiaomiImageUrl = make_shared<string>(boost::any_cast<string>(m["AndroidXiaomiImageUrl"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
    if (m.find("PushTime") != m.end() && !m["PushTime"].empty()) {
      pushTime = make_shared<string>(boost::any_cast<string>(m["PushTime"]));
    }
    if (m.find("PushType") != m.end() && !m["PushType"].empty()) {
      pushType = make_shared<string>(boost::any_cast<string>(m["PushType"]));
    }
    if (m.find("SendChannels") != m.end() && !m["SendChannels"].empty()) {
      sendChannels = make_shared<string>(boost::any_cast<string>(m["SendChannels"]));
    }
    if (m.find("SendSpeed") != m.end() && !m["SendSpeed"].empty()) {
      sendSpeed = make_shared<long>(boost::any_cast<long>(m["SendSpeed"]));
    }
    if (m.find("SmsDelaySecs") != m.end() && !m["SmsDelaySecs"].empty()) {
      smsDelaySecs = make_shared<long>(boost::any_cast<long>(m["SmsDelaySecs"]));
    }
    if (m.find("SmsParams") != m.end() && !m["SmsParams"].empty()) {
      smsParams = make_shared<string>(boost::any_cast<string>(m["SmsParams"]));
    }
    if (m.find("SmsSendPolicy") != m.end() && !m["SmsSendPolicy"].empty()) {
      smsSendPolicy = make_shared<long>(boost::any_cast<long>(m["SmsSendPolicy"]));
    }
    if (m.find("SmsSignName") != m.end() && !m["SmsSignName"].empty()) {
      smsSignName = make_shared<string>(boost::any_cast<string>(m["SmsSignName"]));
    }
    if (m.find("SmsTemplateName") != m.end() && !m["SmsTemplateName"].empty()) {
      smsTemplateName = make_shared<string>(boost::any_cast<string>(m["SmsTemplateName"]));
    }
    if (m.find("StoreOffline") != m.end() && !m["StoreOffline"].empty()) {
      storeOffline = make_shared<bool>(boost::any_cast<bool>(m["StoreOffline"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<string>(boost::any_cast<string>(m["TargetValue"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Trim") != m.end() && !m["Trim"].empty()) {
      trim = make_shared<bool>(boost::any_cast<bool>(m["Trim"]));
    }
    if (m.find("iOSApnsEnv") != m.end() && !m["iOSApnsEnv"].empty()) {
      iOSApnsEnv = make_shared<string>(boost::any_cast<string>(m["iOSApnsEnv"]));
    }
    if (m.find("iOSBadge") != m.end() && !m["iOSBadge"].empty()) {
      iOSBadge = make_shared<long>(boost::any_cast<long>(m["iOSBadge"]));
    }
    if (m.find("iOSBadgeAutoIncrement") != m.end() && !m["iOSBadgeAutoIncrement"].empty()) {
      iOSBadgeAutoIncrement = make_shared<bool>(boost::any_cast<bool>(m["iOSBadgeAutoIncrement"]));
    }
    if (m.find("iOSExtParameters") != m.end() && !m["iOSExtParameters"].empty()) {
      iOSExtParameters = make_shared<string>(boost::any_cast<string>(m["iOSExtParameters"]));
    }
    if (m.find("iOSInterruptionLevel") != m.end() && !m["iOSInterruptionLevel"].empty()) {
      iOSInterruptionLevel = make_shared<string>(boost::any_cast<string>(m["iOSInterruptionLevel"]));
    }
    if (m.find("iOSMusic") != m.end() && !m["iOSMusic"].empty()) {
      iOSMusic = make_shared<string>(boost::any_cast<string>(m["iOSMusic"]));
    }
    if (m.find("iOSMutableContent") != m.end() && !m["iOSMutableContent"].empty()) {
      iOSMutableContent = make_shared<bool>(boost::any_cast<bool>(m["iOSMutableContent"]));
    }
    if (m.find("iOSNotificationCategory") != m.end() && !m["iOSNotificationCategory"].empty()) {
      iOSNotificationCategory = make_shared<string>(boost::any_cast<string>(m["iOSNotificationCategory"]));
    }
    if (m.find("iOSNotificationCollapseId") != m.end() && !m["iOSNotificationCollapseId"].empty()) {
      iOSNotificationCollapseId = make_shared<string>(boost::any_cast<string>(m["iOSNotificationCollapseId"]));
    }
    if (m.find("iOSNotificationThreadId") != m.end() && !m["iOSNotificationThreadId"].empty()) {
      iOSNotificationThreadId = make_shared<string>(boost::any_cast<string>(m["iOSNotificationThreadId"]));
    }
    if (m.find("iOSRelevanceScore") != m.end() && !m["iOSRelevanceScore"].empty()) {
      iOSRelevanceScore = make_shared<double>(boost::any_cast<double>(m["iOSRelevanceScore"]));
    }
    if (m.find("iOSRemind") != m.end() && !m["iOSRemind"].empty()) {
      iOSRemind = make_shared<bool>(boost::any_cast<bool>(m["iOSRemind"]));
    }
    if (m.find("iOSRemindBody") != m.end() && !m["iOSRemindBody"].empty()) {
      iOSRemindBody = make_shared<string>(boost::any_cast<string>(m["iOSRemindBody"]));
    }
    if (m.find("iOSSilentNotification") != m.end() && !m["iOSSilentNotification"].empty()) {
      iOSSilentNotification = make_shared<bool>(boost::any_cast<bool>(m["iOSSilentNotification"]));
    }
    if (m.find("iOSSubtitle") != m.end() && !m["iOSSubtitle"].empty()) {
      iOSSubtitle = make_shared<string>(boost::any_cast<string>(m["iOSSubtitle"]));
    }
  }


  virtual ~PushRequest() = default;
};
class PushResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  PushResponseBody() {}

  explicit PushResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PushResponseBody() = default;
};
class PushResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushResponseBody> body{};

  PushResponse() {}

  explicit PushResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushResponseBody>(model1);
      }
    }
  }


  virtual ~PushResponse() = default;
};
class PushMessageToAndroidRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> body{};
  shared_ptr<string> jobKey{};
  shared_ptr<string> target{};
  shared_ptr<string> targetValue{};
  shared_ptr<string> title{};

  PushMessageToAndroidRequest() {}

  explicit PushMessageToAndroidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<string>(boost::any_cast<string>(m["TargetValue"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PushMessageToAndroidRequest() = default;
};
class PushMessageToAndroidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  PushMessageToAndroidResponseBody() {}

  explicit PushMessageToAndroidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PushMessageToAndroidResponseBody() = default;
};
class PushMessageToAndroidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushMessageToAndroidResponseBody> body{};

  PushMessageToAndroidResponse() {}

  explicit PushMessageToAndroidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushMessageToAndroidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushMessageToAndroidResponseBody>(model1);
      }
    }
  }


  virtual ~PushMessageToAndroidResponse() = default;
};
class PushMessageToiOSRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> body{};
  shared_ptr<string> jobKey{};
  shared_ptr<string> target{};
  shared_ptr<string> targetValue{};
  shared_ptr<string> title{};

  PushMessageToiOSRequest() {}

  explicit PushMessageToiOSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<string>(boost::any_cast<string>(m["TargetValue"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PushMessageToiOSRequest() = default;
};
class PushMessageToiOSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  PushMessageToiOSResponseBody() {}

  explicit PushMessageToiOSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PushMessageToiOSResponseBody() = default;
};
class PushMessageToiOSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushMessageToiOSResponseBody> body{};

  PushMessageToiOSResponse() {}

  explicit PushMessageToiOSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushMessageToiOSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushMessageToiOSResponseBody>(model1);
      }
    }
  }


  virtual ~PushMessageToiOSResponse() = default;
};
class PushNoticeToAndroidRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> body{};
  shared_ptr<string> extParameters{};
  shared_ptr<string> jobKey{};
  shared_ptr<string> target{};
  shared_ptr<string> targetValue{};
  shared_ptr<string> title{};

  PushNoticeToAndroidRequest() {}

  explicit PushNoticeToAndroidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (extParameters) {
      res["ExtParameters"] = boost::any(*extParameters);
    }
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("ExtParameters") != m.end() && !m["ExtParameters"].empty()) {
      extParameters = make_shared<string>(boost::any_cast<string>(m["ExtParameters"]));
    }
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<string>(boost::any_cast<string>(m["TargetValue"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PushNoticeToAndroidRequest() = default;
};
class PushNoticeToAndroidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  PushNoticeToAndroidResponseBody() {}

  explicit PushNoticeToAndroidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PushNoticeToAndroidResponseBody() = default;
};
class PushNoticeToAndroidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushNoticeToAndroidResponseBody> body{};

  PushNoticeToAndroidResponse() {}

  explicit PushNoticeToAndroidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushNoticeToAndroidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushNoticeToAndroidResponseBody>(model1);
      }
    }
  }


  virtual ~PushNoticeToAndroidResponse() = default;
};
class PushNoticeToiOSRequest : public Darabonba::Model {
public:
  shared_ptr<string> apnsEnv{};
  shared_ptr<long> appKey{};
  shared_ptr<string> body{};
  shared_ptr<string> extParameters{};
  shared_ptr<string> jobKey{};
  shared_ptr<string> target{};
  shared_ptr<string> targetValue{};
  shared_ptr<string> title{};

  PushNoticeToiOSRequest() {}

  explicit PushNoticeToiOSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apnsEnv) {
      res["ApnsEnv"] = boost::any(*apnsEnv);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (extParameters) {
      res["ExtParameters"] = boost::any(*extParameters);
    }
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApnsEnv") != m.end() && !m["ApnsEnv"].empty()) {
      apnsEnv = make_shared<string>(boost::any_cast<string>(m["ApnsEnv"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("ExtParameters") != m.end() && !m["ExtParameters"].empty()) {
      extParameters = make_shared<string>(boost::any_cast<string>(m["ExtParameters"]));
    }
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<string>(boost::any_cast<string>(m["TargetValue"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~PushNoticeToiOSRequest() = default;
};
class PushNoticeToiOSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  PushNoticeToiOSResponseBody() {}

  explicit PushNoticeToiOSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PushNoticeToiOSResponseBody() = default;
};
class PushNoticeToiOSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushNoticeToiOSResponseBody> body{};

  PushNoticeToiOSResponse() {}

  explicit PushNoticeToiOSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushNoticeToiOSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushNoticeToiOSResponseBody>(model1);
      }
    }
  }


  virtual ~PushNoticeToiOSResponse() = default;
};
class QueryAliasesRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> deviceId{};

  QueryAliasesRequest() {}

  explicit QueryAliasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~QueryAliasesRequest() = default;
};
class QueryAliasesResponseBodyAliasInfosAliasInfo : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};

  QueryAliasesResponseBodyAliasInfosAliasInfo() {}

  explicit QueryAliasesResponseBodyAliasInfosAliasInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
  }


  virtual ~QueryAliasesResponseBodyAliasInfosAliasInfo() = default;
};
class QueryAliasesResponseBodyAliasInfos : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAliasesResponseBodyAliasInfosAliasInfo>> aliasInfo{};

  QueryAliasesResponseBodyAliasInfos() {}

  explicit QueryAliasesResponseBodyAliasInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasInfo) {
      vector<boost::any> temp1;
      for(auto item1:*aliasInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AliasInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasInfo") != m.end() && !m["AliasInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AliasInfo"].type()) {
        vector<QueryAliasesResponseBodyAliasInfosAliasInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AliasInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAliasesResponseBodyAliasInfosAliasInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aliasInfo = make_shared<vector<QueryAliasesResponseBodyAliasInfosAliasInfo>>(expect1);
      }
    }
  }


  virtual ~QueryAliasesResponseBodyAliasInfos() = default;
};
class QueryAliasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryAliasesResponseBodyAliasInfos> aliasInfos{};
  shared_ptr<string> requestId{};

  QueryAliasesResponseBody() {}

  explicit QueryAliasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasInfos) {
      res["AliasInfos"] = aliasInfos ? boost::any(aliasInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasInfos") != m.end() && !m["AliasInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["AliasInfos"].type()) {
        QueryAliasesResponseBodyAliasInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AliasInfos"]));
        aliasInfos = make_shared<QueryAliasesResponseBodyAliasInfos>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryAliasesResponseBody() = default;
};
class QueryAliasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAliasesResponseBody> body{};

  QueryAliasesResponse() {}

  explicit QueryAliasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAliasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAliasesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAliasesResponse() = default;
};
class QueryDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> deviceId{};

  QueryDeviceInfoRequest() {}

  explicit QueryDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~QueryDeviceInfoRequest() = default;
};
class QueryDeviceInfoResponseBodyDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> alias{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> lastOnlineTime{};
  shared_ptr<bool> online{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> pushEnabled{};
  shared_ptr<string> tags{};

  QueryDeviceInfoResponseBodyDeviceInfo() {}

  explicit QueryDeviceInfoResponseBodyDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (lastOnlineTime) {
      res["LastOnlineTime"] = boost::any(*lastOnlineTime);
    }
    if (online) {
      res["Online"] = boost::any(*online);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (pushEnabled) {
      res["PushEnabled"] = boost::any(*pushEnabled);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("LastOnlineTime") != m.end() && !m["LastOnlineTime"].empty()) {
      lastOnlineTime = make_shared<string>(boost::any_cast<string>(m["LastOnlineTime"]));
    }
    if (m.find("Online") != m.end() && !m["Online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["Online"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PushEnabled") != m.end() && !m["PushEnabled"].empty()) {
      pushEnabled = make_shared<bool>(boost::any_cast<bool>(m["PushEnabled"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~QueryDeviceInfoResponseBodyDeviceInfo() = default;
};
class QueryDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryDeviceInfoResponseBodyDeviceInfo> deviceInfo{};
  shared_ptr<string> requestId{};

  QueryDeviceInfoResponseBody() {}

  explicit QueryDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        QueryDeviceInfoResponseBodyDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<QueryDeviceInfoResponseBodyDeviceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDeviceInfoResponseBody() = default;
};
class QueryDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceInfoResponseBody> body{};

  QueryDeviceInfoResponse() {}

  explicit QueryDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceInfoResponse() = default;
};
class QueryDeviceStatRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> queryType{};
  shared_ptr<string> startTime{};

  QueryDeviceStatRequest() {}

  explicit QueryDeviceStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryDeviceStatRequest() = default;
};
class QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> time{};

  QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat() {}

  explicit QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat() = default;
};
class QueryDeviceStatResponseBodyAppDeviceStats : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>> appDeviceStat{};

  QueryDeviceStatResponseBodyAppDeviceStats() {}

  explicit QueryDeviceStatResponseBodyAppDeviceStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDeviceStat) {
      vector<boost::any> temp1;
      for(auto item1:*appDeviceStat){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppDeviceStat"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDeviceStat") != m.end() && !m["AppDeviceStat"].empty()) {
      if (typeid(vector<boost::any>) == m["AppDeviceStat"].type()) {
        vector<QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppDeviceStat"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appDeviceStat = make_shared<vector<QueryDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>>(expect1);
      }
    }
  }


  virtual ~QueryDeviceStatResponseBodyAppDeviceStats() = default;
};
class QueryDeviceStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryDeviceStatResponseBodyAppDeviceStats> appDeviceStats{};
  shared_ptr<string> requestId{};

  QueryDeviceStatResponseBody() {}

  explicit QueryDeviceStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDeviceStats) {
      res["AppDeviceStats"] = appDeviceStats ? boost::any(appDeviceStats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDeviceStats") != m.end() && !m["AppDeviceStats"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppDeviceStats"].type()) {
        QueryDeviceStatResponseBodyAppDeviceStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppDeviceStats"]));
        appDeviceStats = make_shared<QueryDeviceStatResponseBodyAppDeviceStats>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDeviceStatResponseBody() = default;
};
class QueryDeviceStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceStatResponseBody> body{};

  QueryDeviceStatResponse() {}

  explicit QueryDeviceStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDeviceStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceStatResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceStatResponse() = default;
};
class QueryDevicesByAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<long> appKey{};

  QueryDevicesByAccountRequest() {}

  explicit QueryDevicesByAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
  }


  virtual ~QueryDevicesByAccountRequest() = default;
};
class QueryDevicesByAccountResponseBodyDeviceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> deviceId{};

  QueryDevicesByAccountResponseBodyDeviceIds() {}

  explicit QueryDevicesByAccountResponseBodyDeviceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryDevicesByAccountResponseBodyDeviceIds() = default;
};
class QueryDevicesByAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryDevicesByAccountResponseBodyDeviceIds> deviceIds{};
  shared_ptr<string> requestId{};

  QueryDevicesByAccountResponseBody() {}

  explicit QueryDevicesByAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceIds) {
      res["DeviceIds"] = deviceIds ? boost::any(deviceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceIds") != m.end() && !m["DeviceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceIds"].type()) {
        QueryDevicesByAccountResponseBodyDeviceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceIds"]));
        deviceIds = make_shared<QueryDevicesByAccountResponseBodyDeviceIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDevicesByAccountResponseBody() = default;
};
class QueryDevicesByAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDevicesByAccountResponseBody> body{};

  QueryDevicesByAccountResponse() {}

  explicit QueryDevicesByAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDevicesByAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDevicesByAccountResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDevicesByAccountResponse() = default;
};
class QueryDevicesByAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<long> appKey{};

  QueryDevicesByAliasRequest() {}

  explicit QueryDevicesByAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
  }


  virtual ~QueryDevicesByAliasRequest() = default;
};
class QueryDevicesByAliasResponseBodyDeviceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> deviceId{};

  QueryDevicesByAliasResponseBodyDeviceIds() {}

  explicit QueryDevicesByAliasResponseBodyDeviceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryDevicesByAliasResponseBodyDeviceIds() = default;
};
class QueryDevicesByAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryDevicesByAliasResponseBodyDeviceIds> deviceIds{};
  shared_ptr<string> requestId{};

  QueryDevicesByAliasResponseBody() {}

  explicit QueryDevicesByAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceIds) {
      res["DeviceIds"] = deviceIds ? boost::any(deviceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceIds") != m.end() && !m["DeviceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceIds"].type()) {
        QueryDevicesByAliasResponseBodyDeviceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceIds"]));
        deviceIds = make_shared<QueryDevicesByAliasResponseBodyDeviceIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDevicesByAliasResponseBody() = default;
};
class QueryDevicesByAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDevicesByAliasResponseBody> body{};

  QueryDevicesByAliasResponse() {}

  explicit QueryDevicesByAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDevicesByAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDevicesByAliasResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDevicesByAliasResponse() = default;
};
class QueryPushRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pushType{};
  shared_ptr<string> source{};
  shared_ptr<string> startTime{};
  shared_ptr<string> target{};

  QueryPushRecordsRequest() {}

  explicit QueryPushRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pushType) {
      res["PushType"] = boost::any(*pushType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PushType") != m.end() && !m["PushType"].empty()) {
      pushType = make_shared<string>(boost::any_cast<string>(m["PushType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~QueryPushRecordsRequest() = default;
};
class QueryPushRecordsResponseBodyPushInfosPushInfo : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> body{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> messageId{};
  shared_ptr<string> pushTime{};
  shared_ptr<string> pushType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> target{};
  shared_ptr<string> title{};

  QueryPushRecordsResponseBodyPushInfosPushInfo() {}

  explicit QueryPushRecordsResponseBodyPushInfosPushInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (pushTime) {
      res["PushTime"] = boost::any(*pushTime);
    }
    if (pushType) {
      res["PushType"] = boost::any(*pushType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("PushTime") != m.end() && !m["PushTime"].empty()) {
      pushTime = make_shared<string>(boost::any_cast<string>(m["PushTime"]));
    }
    if (m.find("PushType") != m.end() && !m["PushType"].empty()) {
      pushType = make_shared<string>(boost::any_cast<string>(m["PushType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~QueryPushRecordsResponseBodyPushInfosPushInfo() = default;
};
class QueryPushRecordsResponseBodyPushInfos : public Darabonba::Model {
public:
  shared_ptr<vector<QueryPushRecordsResponseBodyPushInfosPushInfo>> pushInfo{};

  QueryPushRecordsResponseBodyPushInfos() {}

  explicit QueryPushRecordsResponseBodyPushInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pushInfo) {
      vector<boost::any> temp1;
      for(auto item1:*pushInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PushInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PushInfo") != m.end() && !m["PushInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PushInfo"].type()) {
        vector<QueryPushRecordsResponseBodyPushInfosPushInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PushInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPushRecordsResponseBodyPushInfosPushInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pushInfo = make_shared<vector<QueryPushRecordsResponseBodyPushInfosPushInfo>>(expect1);
      }
    }
  }


  virtual ~QueryPushRecordsResponseBodyPushInfos() = default;
};
class QueryPushRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<QueryPushRecordsResponseBodyPushInfos> pushInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  QueryPushRecordsResponseBody() {}

  explicit QueryPushRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pushInfos) {
      res["PushInfos"] = pushInfos ? boost::any(pushInfos->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PushInfos") != m.end() && !m["PushInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["PushInfos"].type()) {
        QueryPushRecordsResponseBodyPushInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PushInfos"]));
        pushInfos = make_shared<QueryPushRecordsResponseBodyPushInfos>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryPushRecordsResponseBody() = default;
};
class QueryPushRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPushRecordsResponseBody> body{};

  QueryPushRecordsResponse() {}

  explicit QueryPushRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPushRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPushRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPushRecordsResponse() = default;
};
class QueryPushStatByAppRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> endTime{};
  shared_ptr<string> granularity{};
  shared_ptr<string> startTime{};

  QueryPushStatByAppRequest() {}

  explicit QueryPushStatByAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryPushStatByAppRequest() = default;
};
class QueryPushStatByAppResponseBodyAppPushStatsAppPushStat : public Darabonba::Model {
public:
  shared_ptr<long> acceptCount{};
  shared_ptr<long> deletedCount{};
  shared_ptr<long> openedCount{};
  shared_ptr<long> receivedCount{};
  shared_ptr<long> sentCount{};
  shared_ptr<long> smsFailedCount{};
  shared_ptr<long> smsReceiveFailedCount{};
  shared_ptr<long> smsReceiveSuccessCount{};
  shared_ptr<long> smsSentCount{};
  shared_ptr<long> smsSkipCount{};
  shared_ptr<string> time{};

  QueryPushStatByAppResponseBodyAppPushStatsAppPushStat() {}

  explicit QueryPushStatByAppResponseBodyAppPushStatsAppPushStat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptCount) {
      res["AcceptCount"] = boost::any(*acceptCount);
    }
    if (deletedCount) {
      res["DeletedCount"] = boost::any(*deletedCount);
    }
    if (openedCount) {
      res["OpenedCount"] = boost::any(*openedCount);
    }
    if (receivedCount) {
      res["ReceivedCount"] = boost::any(*receivedCount);
    }
    if (sentCount) {
      res["SentCount"] = boost::any(*sentCount);
    }
    if (smsFailedCount) {
      res["SmsFailedCount"] = boost::any(*smsFailedCount);
    }
    if (smsReceiveFailedCount) {
      res["SmsReceiveFailedCount"] = boost::any(*smsReceiveFailedCount);
    }
    if (smsReceiveSuccessCount) {
      res["SmsReceiveSuccessCount"] = boost::any(*smsReceiveSuccessCount);
    }
    if (smsSentCount) {
      res["SmsSentCount"] = boost::any(*smsSentCount);
    }
    if (smsSkipCount) {
      res["SmsSkipCount"] = boost::any(*smsSkipCount);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptCount") != m.end() && !m["AcceptCount"].empty()) {
      acceptCount = make_shared<long>(boost::any_cast<long>(m["AcceptCount"]));
    }
    if (m.find("DeletedCount") != m.end() && !m["DeletedCount"].empty()) {
      deletedCount = make_shared<long>(boost::any_cast<long>(m["DeletedCount"]));
    }
    if (m.find("OpenedCount") != m.end() && !m["OpenedCount"].empty()) {
      openedCount = make_shared<long>(boost::any_cast<long>(m["OpenedCount"]));
    }
    if (m.find("ReceivedCount") != m.end() && !m["ReceivedCount"].empty()) {
      receivedCount = make_shared<long>(boost::any_cast<long>(m["ReceivedCount"]));
    }
    if (m.find("SentCount") != m.end() && !m["SentCount"].empty()) {
      sentCount = make_shared<long>(boost::any_cast<long>(m["SentCount"]));
    }
    if (m.find("SmsFailedCount") != m.end() && !m["SmsFailedCount"].empty()) {
      smsFailedCount = make_shared<long>(boost::any_cast<long>(m["SmsFailedCount"]));
    }
    if (m.find("SmsReceiveFailedCount") != m.end() && !m["SmsReceiveFailedCount"].empty()) {
      smsReceiveFailedCount = make_shared<long>(boost::any_cast<long>(m["SmsReceiveFailedCount"]));
    }
    if (m.find("SmsReceiveSuccessCount") != m.end() && !m["SmsReceiveSuccessCount"].empty()) {
      smsReceiveSuccessCount = make_shared<long>(boost::any_cast<long>(m["SmsReceiveSuccessCount"]));
    }
    if (m.find("SmsSentCount") != m.end() && !m["SmsSentCount"].empty()) {
      smsSentCount = make_shared<long>(boost::any_cast<long>(m["SmsSentCount"]));
    }
    if (m.find("SmsSkipCount") != m.end() && !m["SmsSkipCount"].empty()) {
      smsSkipCount = make_shared<long>(boost::any_cast<long>(m["SmsSkipCount"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QueryPushStatByAppResponseBodyAppPushStatsAppPushStat() = default;
};
class QueryPushStatByAppResponseBodyAppPushStats : public Darabonba::Model {
public:
  shared_ptr<vector<QueryPushStatByAppResponseBodyAppPushStatsAppPushStat>> appPushStat{};

  QueryPushStatByAppResponseBodyAppPushStats() {}

  explicit QueryPushStatByAppResponseBodyAppPushStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appPushStat) {
      vector<boost::any> temp1;
      for(auto item1:*appPushStat){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppPushStat"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppPushStat") != m.end() && !m["AppPushStat"].empty()) {
      if (typeid(vector<boost::any>) == m["AppPushStat"].type()) {
        vector<QueryPushStatByAppResponseBodyAppPushStatsAppPushStat> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppPushStat"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPushStatByAppResponseBodyAppPushStatsAppPushStat model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appPushStat = make_shared<vector<QueryPushStatByAppResponseBodyAppPushStatsAppPushStat>>(expect1);
      }
    }
  }


  virtual ~QueryPushStatByAppResponseBodyAppPushStats() = default;
};
class QueryPushStatByAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryPushStatByAppResponseBodyAppPushStats> appPushStats{};
  shared_ptr<string> requestId{};

  QueryPushStatByAppResponseBody() {}

  explicit QueryPushStatByAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appPushStats) {
      res["AppPushStats"] = appPushStats ? boost::any(appPushStats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppPushStats") != m.end() && !m["AppPushStats"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppPushStats"].type()) {
        QueryPushStatByAppResponseBodyAppPushStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppPushStats"]));
        appPushStats = make_shared<QueryPushStatByAppResponseBodyAppPushStats>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPushStatByAppResponseBody() = default;
};
class QueryPushStatByAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPushStatByAppResponseBody> body{};

  QueryPushStatByAppResponse() {}

  explicit QueryPushStatByAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPushStatByAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPushStatByAppResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPushStatByAppResponse() = default;
};
class QueryPushStatByMsgRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<long> messageId{};

  QueryPushStatByMsgRequest() {}

  explicit QueryPushStatByMsgRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<long>(boost::any_cast<long>(m["MessageId"]));
    }
  }


  virtual ~QueryPushStatByMsgRequest() = default;
};
class QueryPushStatByMsgResponseBodyPushStatsPushStat : public Darabonba::Model {
public:
  shared_ptr<long> acceptCount{};
  shared_ptr<long> deletedCount{};
  shared_ptr<string> messageId{};
  shared_ptr<long> openedCount{};
  shared_ptr<long> receivedCount{};
  shared_ptr<long> sentCount{};
  shared_ptr<long> smsFailedCount{};
  shared_ptr<long> smsReceiveFailedCount{};
  shared_ptr<long> smsReceiveSuccessCount{};
  shared_ptr<long> smsSentCount{};
  shared_ptr<long> smsSkipCount{};

  QueryPushStatByMsgResponseBodyPushStatsPushStat() {}

  explicit QueryPushStatByMsgResponseBodyPushStatsPushStat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptCount) {
      res["AcceptCount"] = boost::any(*acceptCount);
    }
    if (deletedCount) {
      res["DeletedCount"] = boost::any(*deletedCount);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (openedCount) {
      res["OpenedCount"] = boost::any(*openedCount);
    }
    if (receivedCount) {
      res["ReceivedCount"] = boost::any(*receivedCount);
    }
    if (sentCount) {
      res["SentCount"] = boost::any(*sentCount);
    }
    if (smsFailedCount) {
      res["SmsFailedCount"] = boost::any(*smsFailedCount);
    }
    if (smsReceiveFailedCount) {
      res["SmsReceiveFailedCount"] = boost::any(*smsReceiveFailedCount);
    }
    if (smsReceiveSuccessCount) {
      res["SmsReceiveSuccessCount"] = boost::any(*smsReceiveSuccessCount);
    }
    if (smsSentCount) {
      res["SmsSentCount"] = boost::any(*smsSentCount);
    }
    if (smsSkipCount) {
      res["SmsSkipCount"] = boost::any(*smsSkipCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptCount") != m.end() && !m["AcceptCount"].empty()) {
      acceptCount = make_shared<long>(boost::any_cast<long>(m["AcceptCount"]));
    }
    if (m.find("DeletedCount") != m.end() && !m["DeletedCount"].empty()) {
      deletedCount = make_shared<long>(boost::any_cast<long>(m["DeletedCount"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("OpenedCount") != m.end() && !m["OpenedCount"].empty()) {
      openedCount = make_shared<long>(boost::any_cast<long>(m["OpenedCount"]));
    }
    if (m.find("ReceivedCount") != m.end() && !m["ReceivedCount"].empty()) {
      receivedCount = make_shared<long>(boost::any_cast<long>(m["ReceivedCount"]));
    }
    if (m.find("SentCount") != m.end() && !m["SentCount"].empty()) {
      sentCount = make_shared<long>(boost::any_cast<long>(m["SentCount"]));
    }
    if (m.find("SmsFailedCount") != m.end() && !m["SmsFailedCount"].empty()) {
      smsFailedCount = make_shared<long>(boost::any_cast<long>(m["SmsFailedCount"]));
    }
    if (m.find("SmsReceiveFailedCount") != m.end() && !m["SmsReceiveFailedCount"].empty()) {
      smsReceiveFailedCount = make_shared<long>(boost::any_cast<long>(m["SmsReceiveFailedCount"]));
    }
    if (m.find("SmsReceiveSuccessCount") != m.end() && !m["SmsReceiveSuccessCount"].empty()) {
      smsReceiveSuccessCount = make_shared<long>(boost::any_cast<long>(m["SmsReceiveSuccessCount"]));
    }
    if (m.find("SmsSentCount") != m.end() && !m["SmsSentCount"].empty()) {
      smsSentCount = make_shared<long>(boost::any_cast<long>(m["SmsSentCount"]));
    }
    if (m.find("SmsSkipCount") != m.end() && !m["SmsSkipCount"].empty()) {
      smsSkipCount = make_shared<long>(boost::any_cast<long>(m["SmsSkipCount"]));
    }
  }


  virtual ~QueryPushStatByMsgResponseBodyPushStatsPushStat() = default;
};
class QueryPushStatByMsgResponseBodyPushStats : public Darabonba::Model {
public:
  shared_ptr<vector<QueryPushStatByMsgResponseBodyPushStatsPushStat>> pushStat{};

  QueryPushStatByMsgResponseBodyPushStats() {}

  explicit QueryPushStatByMsgResponseBodyPushStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pushStat) {
      vector<boost::any> temp1;
      for(auto item1:*pushStat){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PushStat"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PushStat") != m.end() && !m["PushStat"].empty()) {
      if (typeid(vector<boost::any>) == m["PushStat"].type()) {
        vector<QueryPushStatByMsgResponseBodyPushStatsPushStat> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PushStat"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPushStatByMsgResponseBodyPushStatsPushStat model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pushStat = make_shared<vector<QueryPushStatByMsgResponseBodyPushStatsPushStat>>(expect1);
      }
    }
  }


  virtual ~QueryPushStatByMsgResponseBodyPushStats() = default;
};
class QueryPushStatByMsgResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryPushStatByMsgResponseBodyPushStats> pushStats{};
  shared_ptr<string> requestId{};

  QueryPushStatByMsgResponseBody() {}

  explicit QueryPushStatByMsgResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pushStats) {
      res["PushStats"] = pushStats ? boost::any(pushStats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PushStats") != m.end() && !m["PushStats"].empty()) {
      if (typeid(map<string, boost::any>) == m["PushStats"].type()) {
        QueryPushStatByMsgResponseBodyPushStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PushStats"]));
        pushStats = make_shared<QueryPushStatByMsgResponseBodyPushStats>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPushStatByMsgResponseBody() = default;
};
class QueryPushStatByMsgResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPushStatByMsgResponseBody> body{};

  QueryPushStatByMsgResponse() {}

  explicit QueryPushStatByMsgResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPushStatByMsgResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPushStatByMsgResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPushStatByMsgResponse() = default;
};
class QueryTagsRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> clientKey{};
  shared_ptr<string> keyType{};

  QueryTagsRequest() {}

  explicit QueryTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (clientKey) {
      res["ClientKey"] = boost::any(*clientKey);
    }
    if (keyType) {
      res["KeyType"] = boost::any(*keyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("ClientKey") != m.end() && !m["ClientKey"].empty()) {
      clientKey = make_shared<string>(boost::any_cast<string>(m["ClientKey"]));
    }
    if (m.find("KeyType") != m.end() && !m["KeyType"].empty()) {
      keyType = make_shared<string>(boost::any_cast<string>(m["KeyType"]));
    }
  }


  virtual ~QueryTagsRequest() = default;
};
class QueryTagsResponseBodyTagInfosTagInfo : public Darabonba::Model {
public:
  shared_ptr<string> tagName{};

  QueryTagsResponseBodyTagInfosTagInfo() {}

  explicit QueryTagsResponseBodyTagInfosTagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~QueryTagsResponseBodyTagInfosTagInfo() = default;
};
class QueryTagsResponseBodyTagInfos : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTagsResponseBodyTagInfosTagInfo>> tagInfo{};

  QueryTagsResponseBodyTagInfos() {}

  explicit QueryTagsResponseBodyTagInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagInfo) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagInfo") != m.end() && !m["TagInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfo"].type()) {
        vector<QueryTagsResponseBodyTagInfosTagInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTagsResponseBodyTagInfosTagInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfo = make_shared<vector<QueryTagsResponseBodyTagInfosTagInfo>>(expect1);
      }
    }
  }


  virtual ~QueryTagsResponseBodyTagInfos() = default;
};
class QueryTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryTagsResponseBodyTagInfos> tagInfos{};

  QueryTagsResponseBody() {}

  explicit QueryTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagInfos) {
      res["TagInfos"] = tagInfos ? boost::any(tagInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagInfos") != m.end() && !m["TagInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagInfos"].type()) {
        QueryTagsResponseBodyTagInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagInfos"]));
        tagInfos = make_shared<QueryTagsResponseBodyTagInfos>(model1);
      }
    }
  }


  virtual ~QueryTagsResponseBody() = default;
};
class QueryTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTagsResponseBody> body{};

  QueryTagsResponse() {}

  explicit QueryTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTagsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTagsResponse() = default;
};
class QueryUniqueDeviceStatRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> endTime{};
  shared_ptr<string> granularity{};
  shared_ptr<string> startTime{};

  QueryUniqueDeviceStatRequest() {}

  explicit QueryUniqueDeviceStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryUniqueDeviceStatRequest() = default;
};
class QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> time{};

  QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat() {}

  explicit QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat() = default;
};
class QueryUniqueDeviceStatResponseBodyAppDeviceStats : public Darabonba::Model {
public:
  shared_ptr<vector<QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>> appDeviceStat{};

  QueryUniqueDeviceStatResponseBodyAppDeviceStats() {}

  explicit QueryUniqueDeviceStatResponseBodyAppDeviceStats(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDeviceStat) {
      vector<boost::any> temp1;
      for(auto item1:*appDeviceStat){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppDeviceStat"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDeviceStat") != m.end() && !m["AppDeviceStat"].empty()) {
      if (typeid(vector<boost::any>) == m["AppDeviceStat"].type()) {
        vector<QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppDeviceStat"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appDeviceStat = make_shared<vector<QueryUniqueDeviceStatResponseBodyAppDeviceStatsAppDeviceStat>>(expect1);
      }
    }
  }


  virtual ~QueryUniqueDeviceStatResponseBodyAppDeviceStats() = default;
};
class QueryUniqueDeviceStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryUniqueDeviceStatResponseBodyAppDeviceStats> appDeviceStats{};
  shared_ptr<string> requestId{};

  QueryUniqueDeviceStatResponseBody() {}

  explicit QueryUniqueDeviceStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appDeviceStats) {
      res["AppDeviceStats"] = appDeviceStats ? boost::any(appDeviceStats->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppDeviceStats") != m.end() && !m["AppDeviceStats"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppDeviceStats"].type()) {
        QueryUniqueDeviceStatResponseBodyAppDeviceStats model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppDeviceStats"]));
        appDeviceStats = make_shared<QueryUniqueDeviceStatResponseBodyAppDeviceStats>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryUniqueDeviceStatResponseBody() = default;
};
class QueryUniqueDeviceStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUniqueDeviceStatResponseBody> body{};

  QueryUniqueDeviceStatResponse() {}

  explicit QueryUniqueDeviceStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUniqueDeviceStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUniqueDeviceStatResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUniqueDeviceStatResponse() = default;
};
class RemoveTagRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> tagName{};

  RemoveTagRequest() {}

  explicit RemoveTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~RemoveTagRequest() = default;
};
class RemoveTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveTagResponseBody() {}

  explicit RemoveTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveTagResponseBody() = default;
};
class RemoveTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveTagResponseBody> body{};

  RemoveTagResponse() {}

  explicit RemoveTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveTagResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveTagResponse() = default;
};
class UnbindAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<long> appKey{};
  shared_ptr<string> deviceId{};
  shared_ptr<bool> unbindAll{};

  UnbindAliasRequest() {}

  explicit UnbindAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (unbindAll) {
      res["UnbindAll"] = boost::any(*unbindAll);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("UnbindAll") != m.end() && !m["UnbindAll"].empty()) {
      unbindAll = make_shared<bool>(boost::any_cast<bool>(m["UnbindAll"]));
    }
  }


  virtual ~UnbindAliasRequest() = default;
};
class UnbindAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindAliasResponseBody() {}

  explicit UnbindAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindAliasResponseBody() = default;
};
class UnbindAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindAliasResponseBody> body{};

  UnbindAliasResponse() {}

  explicit UnbindAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindAliasResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindAliasResponse() = default;
};
class UnbindPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> deviceId{};

  UnbindPhoneRequest() {}

  explicit UnbindPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~UnbindPhoneRequest() = default;
};
class UnbindPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindPhoneResponseBody() {}

  explicit UnbindPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindPhoneResponseBody() = default;
};
class UnbindPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindPhoneResponseBody> body{};

  UnbindPhoneResponse() {}

  explicit UnbindPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindPhoneResponse() = default;
};
class UnbindTagRequest : public Darabonba::Model {
public:
  shared_ptr<long> appKey{};
  shared_ptr<string> clientKey{};
  shared_ptr<string> keyType{};
  shared_ptr<string> tagName{};

  UnbindTagRequest() {}

  explicit UnbindTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (clientKey) {
      res["ClientKey"] = boost::any(*clientKey);
    }
    if (keyType) {
      res["KeyType"] = boost::any(*keyType);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("ClientKey") != m.end() && !m["ClientKey"].empty()) {
      clientKey = make_shared<string>(boost::any_cast<string>(m["ClientKey"]));
    }
    if (m.find("KeyType") != m.end() && !m["KeyType"].empty()) {
      keyType = make_shared<string>(boost::any_cast<string>(m["KeyType"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~UnbindTagRequest() = default;
};
class UnbindTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindTagResponseBody() {}

  explicit UnbindTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindTagResponseBody() = default;
};
class UnbindTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindTagResponseBody> body{};

  UnbindTagResponse() {}

  explicit UnbindTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindTagResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindTagResponse() = default;
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
  BindAliasResponse bindAliasWithOptions(shared_ptr<BindAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindAliasResponse bindAlias(shared_ptr<BindAliasRequest> request);
  BindPhoneResponse bindPhoneWithOptions(shared_ptr<BindPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindPhoneResponse bindPhone(shared_ptr<BindPhoneRequest> request);
  BindTagResponse bindTagWithOptions(shared_ptr<BindTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindTagResponse bindTag(shared_ptr<BindTagRequest> request);
  CancelPushResponse cancelPushWithOptions(shared_ptr<CancelPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPushResponse cancelPush(shared_ptr<CancelPushRequest> request);
  CheckCertificateResponse checkCertificateWithOptions(shared_ptr<CheckCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckCertificateResponse checkCertificate(shared_ptr<CheckCertificateRequest> request);
  CheckDeviceResponse checkDeviceWithOptions(shared_ptr<CheckDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDeviceResponse checkDevice(shared_ptr<CheckDeviceRequest> request);
  CheckDevicesResponse checkDevicesWithOptions(shared_ptr<CheckDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDevicesResponse checkDevices(shared_ptr<CheckDevicesRequest> request);
  CompleteContinuouslyPushResponse completeContinuouslyPushWithOptions(shared_ptr<CompleteContinuouslyPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompleteContinuouslyPushResponse completeContinuouslyPush(shared_ptr<CompleteContinuouslyPushRequest> request);
  ContinuouslyPushResponse continuouslyPushWithOptions(shared_ptr<ContinuouslyPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContinuouslyPushResponse continuouslyPush(shared_ptr<ContinuouslyPushRequest> request);
  ListSummaryAppsResponse listSummaryAppsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSummaryAppsResponse listSummaryApps();
  ListTagsResponse listTagsWithOptions(shared_ptr<ListTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagsResponse listTags(shared_ptr<ListTagsRequest> request);
  MassPushResponse massPushWithOptions(shared_ptr<MassPushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MassPushResponse massPush(shared_ptr<MassPushRequest> request);
  PushResponse pushWithOptions(shared_ptr<PushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushResponse push(shared_ptr<PushRequest> request);
  PushMessageToAndroidResponse pushMessageToAndroidWithOptions(shared_ptr<PushMessageToAndroidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushMessageToAndroidResponse pushMessageToAndroid(shared_ptr<PushMessageToAndroidRequest> request);
  PushMessageToiOSResponse pushMessageToiOSWithOptions(shared_ptr<PushMessageToiOSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushMessageToiOSResponse pushMessageToiOS(shared_ptr<PushMessageToiOSRequest> request);
  PushNoticeToAndroidResponse pushNoticeToAndroidWithOptions(shared_ptr<PushNoticeToAndroidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushNoticeToAndroidResponse pushNoticeToAndroid(shared_ptr<PushNoticeToAndroidRequest> request);
  PushNoticeToiOSResponse pushNoticeToiOSWithOptions(shared_ptr<PushNoticeToiOSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushNoticeToiOSResponse pushNoticeToiOS(shared_ptr<PushNoticeToiOSRequest> request);
  QueryAliasesResponse queryAliasesWithOptions(shared_ptr<QueryAliasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAliasesResponse queryAliases(shared_ptr<QueryAliasesRequest> request);
  QueryDeviceInfoResponse queryDeviceInfoWithOptions(shared_ptr<QueryDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceInfoResponse queryDeviceInfo(shared_ptr<QueryDeviceInfoRequest> request);
  QueryDeviceStatResponse queryDeviceStatWithOptions(shared_ptr<QueryDeviceStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceStatResponse queryDeviceStat(shared_ptr<QueryDeviceStatRequest> request);
  QueryDevicesByAccountResponse queryDevicesByAccountWithOptions(shared_ptr<QueryDevicesByAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDevicesByAccountResponse queryDevicesByAccount(shared_ptr<QueryDevicesByAccountRequest> request);
  QueryDevicesByAliasResponse queryDevicesByAliasWithOptions(shared_ptr<QueryDevicesByAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDevicesByAliasResponse queryDevicesByAlias(shared_ptr<QueryDevicesByAliasRequest> request);
  QueryPushRecordsResponse queryPushRecordsWithOptions(shared_ptr<QueryPushRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPushRecordsResponse queryPushRecords(shared_ptr<QueryPushRecordsRequest> request);
  QueryPushStatByAppResponse queryPushStatByAppWithOptions(shared_ptr<QueryPushStatByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPushStatByAppResponse queryPushStatByApp(shared_ptr<QueryPushStatByAppRequest> request);
  QueryPushStatByMsgResponse queryPushStatByMsgWithOptions(shared_ptr<QueryPushStatByMsgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPushStatByMsgResponse queryPushStatByMsg(shared_ptr<QueryPushStatByMsgRequest> request);
  QueryTagsResponse queryTagsWithOptions(shared_ptr<QueryTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTagsResponse queryTags(shared_ptr<QueryTagsRequest> request);
  QueryUniqueDeviceStatResponse queryUniqueDeviceStatWithOptions(shared_ptr<QueryUniqueDeviceStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUniqueDeviceStatResponse queryUniqueDeviceStat(shared_ptr<QueryUniqueDeviceStatRequest> request);
  RemoveTagResponse removeTagWithOptions(shared_ptr<RemoveTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveTagResponse removeTag(shared_ptr<RemoveTagRequest> request);
  UnbindAliasResponse unbindAliasWithOptions(shared_ptr<UnbindAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindAliasResponse unbindAlias(shared_ptr<UnbindAliasRequest> request);
  UnbindPhoneResponse unbindPhoneWithOptions(shared_ptr<UnbindPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindPhoneResponse unbindPhone(shared_ptr<UnbindPhoneRequest> request);
  UnbindTagResponse unbindTagWithOptions(shared_ptr<UnbindTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindTagResponse unbindTag(shared_ptr<UnbindTagRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Push20160801

#endif
