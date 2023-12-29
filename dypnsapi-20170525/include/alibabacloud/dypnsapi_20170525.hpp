// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYPNSAPI20170525_H_
#define ALIBABACLOUD_DYPNSAPI20170525_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dypnsapi20170525 {
class CheckSmsVerifyCodeRequest : public Darabonba::Model {
public:
  shared_ptr<long> caseAuthPolicy{};
  shared_ptr<string> countryCode{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeName{};
  shared_ptr<string> verifyCode{};

  CheckSmsVerifyCodeRequest() {}

  explicit CheckSmsVerifyCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseAuthPolicy) {
      res["CaseAuthPolicy"] = boost::any(*caseAuthPolicy);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
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
    if (schemeName) {
      res["SchemeName"] = boost::any(*schemeName);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaseAuthPolicy") != m.end() && !m["CaseAuthPolicy"].empty()) {
      caseAuthPolicy = make_shared<long>(boost::any_cast<long>(m["CaseAuthPolicy"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
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
    if (m.find("SchemeName") != m.end() && !m["SchemeName"].empty()) {
      schemeName = make_shared<string>(boost::any_cast<string>(m["SchemeName"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~CheckSmsVerifyCodeRequest() = default;
};
class CheckSmsVerifyCodeResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> outId{};
  shared_ptr<string> verifyResult{};

  CheckSmsVerifyCodeResponseBodyModel() {}

  explicit CheckSmsVerifyCodeResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~CheckSmsVerifyCodeResponseBodyModel() = default;
};
class CheckSmsVerifyCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CheckSmsVerifyCodeResponseBodyModel> model{};
  shared_ptr<bool> success{};

  CheckSmsVerifyCodeResponseBody() {}

  explicit CheckSmsVerifyCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        CheckSmsVerifyCodeResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<CheckSmsVerifyCodeResponseBodyModel>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckSmsVerifyCodeResponseBody() = default;
};
class CheckSmsVerifyCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckSmsVerifyCodeResponseBody> body{};

  CheckSmsVerifyCodeResponse() {}

  explicit CheckSmsVerifyCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckSmsVerifyCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckSmsVerifyCodeResponseBody>(model1);
      }
    }
  }


  virtual ~CheckSmsVerifyCodeResponse() = default;
};
class CreateSchemeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> androidPackageName{};
  shared_ptr<string> androidPackageSign{};
  shared_ptr<string> appName{};
  shared_ptr<string> h5Origin{};
  shared_ptr<string> h5Url{};
  shared_ptr<string> iosBundleId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> platform{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeName{};

  CreateSchemeConfigRequest() {}

  explicit CreateSchemeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (androidPackageName) {
      res["AndroidPackageName"] = boost::any(*androidPackageName);
    }
    if (androidPackageSign) {
      res["AndroidPackageSign"] = boost::any(*androidPackageSign);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (h5Origin) {
      res["H5Origin"] = boost::any(*h5Origin);
    }
    if (h5Url) {
      res["H5Url"] = boost::any(*h5Url);
    }
    if (iosBundleId) {
      res["IosBundleId"] = boost::any(*iosBundleId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (schemeName) {
      res["SchemeName"] = boost::any(*schemeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AndroidPackageName") != m.end() && !m["AndroidPackageName"].empty()) {
      androidPackageName = make_shared<string>(boost::any_cast<string>(m["AndroidPackageName"]));
    }
    if (m.find("AndroidPackageSign") != m.end() && !m["AndroidPackageSign"].empty()) {
      androidPackageSign = make_shared<string>(boost::any_cast<string>(m["AndroidPackageSign"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("H5Origin") != m.end() && !m["H5Origin"].empty()) {
      h5Origin = make_shared<string>(boost::any_cast<string>(m["H5Origin"]));
    }
    if (m.find("H5Url") != m.end() && !m["H5Url"].empty()) {
      h5Url = make_shared<string>(boost::any_cast<string>(m["H5Url"]));
    }
    if (m.find("IosBundleId") != m.end() && !m["IosBundleId"].empty()) {
      iosBundleId = make_shared<string>(boost::any_cast<string>(m["IosBundleId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SchemeName") != m.end() && !m["SchemeName"].empty()) {
      schemeName = make_shared<string>(boost::any_cast<string>(m["SchemeName"]));
    }
  }


  virtual ~CreateSchemeConfigRequest() = default;
};
class CreateSchemeConfigResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> schemeCode{};

  CreateSchemeConfigResponseBodyModel() {}

  explicit CreateSchemeConfigResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schemeCode) {
      res["SchemeCode"] = boost::any(*schemeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SchemeCode") != m.end() && !m["SchemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["SchemeCode"]));
    }
  }


  virtual ~CreateSchemeConfigResponseBodyModel() = default;
};
class CreateSchemeConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CreateSchemeConfigResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateSchemeConfigResponseBody() {}

  explicit CreateSchemeConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        CreateSchemeConfigResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<CreateSchemeConfigResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSchemeConfigResponseBody() = default;
};
class CreateSchemeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSchemeConfigResponseBody> body{};

  CreateSchemeConfigResponse() {}

  explicit CreateSchemeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSchemeConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSchemeConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSchemeConfigResponse() = default;
};
class CreateVerifySchemeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> authType{};
  shared_ptr<string> bundleId{};
  shared_ptr<long> cmApiCode{};
  shared_ptr<long> ctApiCode{};
  shared_ptr<long> cuApiCode{};
  shared_ptr<string> email{};
  shared_ptr<string> ipWhiteList{};
  shared_ptr<string> origin{};
  shared_ptr<string> osType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> packName{};
  shared_ptr<string> packSign{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sceneType{};
  shared_ptr<string> schemeName{};
  shared_ptr<string> smsSignName{};
  shared_ptr<string> url{};

  CreateVerifySchemeRequest() {}

  explicit CreateVerifySchemeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (cmApiCode) {
      res["CmApiCode"] = boost::any(*cmApiCode);
    }
    if (ctApiCode) {
      res["CtApiCode"] = boost::any(*ctApiCode);
    }
    if (cuApiCode) {
      res["CuApiCode"] = boost::any(*cuApiCode);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (ipWhiteList) {
      res["IpWhiteList"] = boost::any(*ipWhiteList);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (packName) {
      res["PackName"] = boost::any(*packName);
    }
    if (packSign) {
      res["PackSign"] = boost::any(*packSign);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sceneType) {
      res["SceneType"] = boost::any(*sceneType);
    }
    if (schemeName) {
      res["SchemeName"] = boost::any(*schemeName);
    }
    if (smsSignName) {
      res["SmsSignName"] = boost::any(*smsSignName);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("CmApiCode") != m.end() && !m["CmApiCode"].empty()) {
      cmApiCode = make_shared<long>(boost::any_cast<long>(m["CmApiCode"]));
    }
    if (m.find("CtApiCode") != m.end() && !m["CtApiCode"].empty()) {
      ctApiCode = make_shared<long>(boost::any_cast<long>(m["CtApiCode"]));
    }
    if (m.find("CuApiCode") != m.end() && !m["CuApiCode"].empty()) {
      cuApiCode = make_shared<long>(boost::any_cast<long>(m["CuApiCode"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("IpWhiteList") != m.end() && !m["IpWhiteList"].empty()) {
      ipWhiteList = make_shared<string>(boost::any_cast<string>(m["IpWhiteList"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PackName") != m.end() && !m["PackName"].empty()) {
      packName = make_shared<string>(boost::any_cast<string>(m["PackName"]));
    }
    if (m.find("PackSign") != m.end() && !m["PackSign"].empty()) {
      packSign = make_shared<string>(boost::any_cast<string>(m["PackSign"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SceneType") != m.end() && !m["SceneType"].empty()) {
      sceneType = make_shared<string>(boost::any_cast<string>(m["SceneType"]));
    }
    if (m.find("SchemeName") != m.end() && !m["SchemeName"].empty()) {
      schemeName = make_shared<string>(boost::any_cast<string>(m["SchemeName"]));
    }
    if (m.find("SmsSignName") != m.end() && !m["SmsSignName"].empty()) {
      smsSignName = make_shared<string>(boost::any_cast<string>(m["SmsSignName"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateVerifySchemeRequest() = default;
};
class CreateVerifySchemeResponseBodyGateVerifySchemeDTO : public Darabonba::Model {
public:
  shared_ptr<string> schemeCode{};

  CreateVerifySchemeResponseBodyGateVerifySchemeDTO() {}

  explicit CreateVerifySchemeResponseBodyGateVerifySchemeDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schemeCode) {
      res["SchemeCode"] = boost::any(*schemeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SchemeCode") != m.end() && !m["SchemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["SchemeCode"]));
    }
  }


  virtual ~CreateVerifySchemeResponseBodyGateVerifySchemeDTO() = default;
};
class CreateVerifySchemeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateVerifySchemeResponseBodyGateVerifySchemeDTO> gateVerifySchemeDTO{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateVerifySchemeResponseBody() {}

  explicit CreateVerifySchemeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gateVerifySchemeDTO) {
      res["GateVerifySchemeDTO"] = gateVerifySchemeDTO ? boost::any(gateVerifySchemeDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("GateVerifySchemeDTO") != m.end() && !m["GateVerifySchemeDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["GateVerifySchemeDTO"].type()) {
        CreateVerifySchemeResponseBodyGateVerifySchemeDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GateVerifySchemeDTO"]));
        gateVerifySchemeDTO = make_shared<CreateVerifySchemeResponseBodyGateVerifySchemeDTO>(model1);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateVerifySchemeResponseBody() = default;
};
class CreateVerifySchemeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVerifySchemeResponseBody> body{};

  CreateVerifySchemeResponse() {}

  explicit CreateVerifySchemeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVerifySchemeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVerifySchemeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVerifySchemeResponse() = default;
};
class DeleteVerifySchemeRequest : public Darabonba::Model {
public:
  shared_ptr<long> customerId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeCode{};

  DeleteVerifySchemeRequest() {}

  explicit DeleteVerifySchemeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
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
    if (schemeCode) {
      res["SchemeCode"] = boost::any(*schemeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<long>(boost::any_cast<long>(m["CustomerId"]));
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
    if (m.find("SchemeCode") != m.end() && !m["SchemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["SchemeCode"]));
    }
  }


  virtual ~DeleteVerifySchemeRequest() = default;
};
class DeleteVerifySchemeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeleteVerifySchemeResponseBody() {}

  explicit DeleteVerifySchemeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = boost::any(*result);
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeleteVerifySchemeResponseBody() = default;
};
class DeleteVerifySchemeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVerifySchemeResponseBody> body{};

  DeleteVerifySchemeResponse() {}

  explicit DeleteVerifySchemeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVerifySchemeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVerifySchemeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVerifySchemeResponse() = default;
};
class DescribeVerifySchemeRequest : public Darabonba::Model {
public:
  shared_ptr<long> customerId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeCode{};

  DescribeVerifySchemeRequest() {}

  explicit DescribeVerifySchemeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
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
    if (schemeCode) {
      res["SchemeCode"] = boost::any(*schemeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<long>(boost::any_cast<long>(m["CustomerId"]));
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
    if (m.find("SchemeCode") != m.end() && !m["SchemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["SchemeCode"]));
    }
  }


  virtual ~DescribeVerifySchemeRequest() = default;
};
class DescribeVerifySchemeResponseBodySchemeQueryResultDTO : public Darabonba::Model {
public:
  shared_ptr<string> appEncryptInfo{};

  DescribeVerifySchemeResponseBodySchemeQueryResultDTO() {}

  explicit DescribeVerifySchemeResponseBodySchemeQueryResultDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appEncryptInfo) {
      res["AppEncryptInfo"] = boost::any(*appEncryptInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppEncryptInfo") != m.end() && !m["AppEncryptInfo"].empty()) {
      appEncryptInfo = make_shared<string>(boost::any_cast<string>(m["AppEncryptInfo"]));
    }
  }


  virtual ~DescribeVerifySchemeResponseBodySchemeQueryResultDTO() = default;
};
class DescribeVerifySchemeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVerifySchemeResponseBodySchemeQueryResultDTO> schemeQueryResultDTO{};

  DescribeVerifySchemeResponseBody() {}

  explicit DescribeVerifySchemeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (schemeQueryResultDTO) {
      res["SchemeQueryResultDTO"] = schemeQueryResultDTO ? boost::any(schemeQueryResultDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SchemeQueryResultDTO") != m.end() && !m["SchemeQueryResultDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["SchemeQueryResultDTO"].type()) {
        DescribeVerifySchemeResponseBodySchemeQueryResultDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SchemeQueryResultDTO"]));
        schemeQueryResultDTO = make_shared<DescribeVerifySchemeResponseBodySchemeQueryResultDTO>(model1);
      }
    }
  }


  virtual ~DescribeVerifySchemeResponseBody() = default;
};
class DescribeVerifySchemeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVerifySchemeResponseBody> body{};

  DescribeVerifySchemeResponse() {}

  explicit DescribeVerifySchemeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifySchemeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifySchemeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifySchemeResponse() = default;
};
class GetAuthTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> origin{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> url{};

  GetAuthTokenRequest() {}

  explicit GetAuthTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (origin) {
      res["Origin"] = boost::any(*origin);
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
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
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
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetAuthTokenRequest() = default;
};
class GetAuthTokenResponseBodyTokenInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> jwtToken{};

  GetAuthTokenResponseBodyTokenInfo() {}

  explicit GetAuthTokenResponseBodyTokenInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~GetAuthTokenResponseBodyTokenInfo() = default;
};
class GetAuthTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAuthTokenResponseBodyTokenInfo> tokenInfo{};

  GetAuthTokenResponseBody() {}

  explicit GetAuthTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tokenInfo) {
      res["TokenInfo"] = tokenInfo ? boost::any(tokenInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TokenInfo") != m.end() && !m["TokenInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TokenInfo"].type()) {
        GetAuthTokenResponseBodyTokenInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TokenInfo"]));
        tokenInfo = make_shared<GetAuthTokenResponseBodyTokenInfo>(model1);
      }
    }
  }


  virtual ~GetAuthTokenResponseBody() = default;
};
class GetAuthTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAuthTokenResponseBody> body{};

  GetAuthTokenResponse() {}

  explicit GetAuthTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuthTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthTokenResponse() = default;
};
class GetAuthorizationUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNo{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> schemeId{};

  GetAuthorizationUrlRequest() {}

  explicit GetAuthorizationUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNo) {
      res["PhoneNo"] = boost::any(*phoneNo);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (schemeId) {
      res["SchemeId"] = boost::any(*schemeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNo") != m.end() && !m["PhoneNo"].empty()) {
      phoneNo = make_shared<string>(boost::any_cast<string>(m["PhoneNo"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SchemeId") != m.end() && !m["SchemeId"].empty()) {
      schemeId = make_shared<long>(boost::any_cast<long>(m["SchemeId"]));
    }
  }


  virtual ~GetAuthorizationUrlRequest() = default;
};
class GetAuthorizationUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> authorizationUrl{};

  GetAuthorizationUrlResponseBodyData() {}

  explicit GetAuthorizationUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
  }


  virtual ~GetAuthorizationUrlResponseBodyData() = default;
};
class GetAuthorizationUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAuthorizationUrlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetAuthorizationUrlResponseBody() {}

  explicit GetAuthorizationUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuthorizationUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAuthorizationUrlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAuthorizationUrlResponseBody() = default;
};
class GetAuthorizationUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAuthorizationUrlResponseBody> body{};

  GetAuthorizationUrlResponse() {}

  explicit GetAuthorizationUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuthorizationUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthorizationUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthorizationUrlResponse() = default;
};
class GetFusionAuthTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> bundleId{};
  shared_ptr<long> durationSeconds{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> packageName{};
  shared_ptr<string> packageSign{};
  shared_ptr<string> platform{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeCode{};

  GetFusionAuthTokenRequest() {}

  explicit GetFusionAuthTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (durationSeconds) {
      res["DurationSeconds"] = boost::any(*durationSeconds);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (packageSign) {
      res["PackageSign"] = boost::any(*packageSign);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (schemeCode) {
      res["SchemeCode"] = boost::any(*schemeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("DurationSeconds") != m.end() && !m["DurationSeconds"].empty()) {
      durationSeconds = make_shared<long>(boost::any_cast<long>(m["DurationSeconds"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("PackageSign") != m.end() && !m["PackageSign"].empty()) {
      packageSign = make_shared<string>(boost::any_cast<string>(m["PackageSign"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SchemeCode") != m.end() && !m["SchemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["SchemeCode"]));
    }
  }


  virtual ~GetFusionAuthTokenRequest() = default;
};
class GetFusionAuthTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetFusionAuthTokenResponseBody() {}

  explicit GetFusionAuthTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (model) {
      res["Model"] = boost::any(*model);
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
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetFusionAuthTokenResponseBody() = default;
};
class GetFusionAuthTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFusionAuthTokenResponseBody> body{};

  GetFusionAuthTokenResponse() {}

  explicit GetFusionAuthTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFusionAuthTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFusionAuthTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetFusionAuthTokenResponse() = default;
};
class GetMobileRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetMobileRequest() {}

  explicit GetMobileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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


  virtual ~GetMobileRequest() = default;
};
class GetMobileResponseBodyGetMobileResultDTO : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};

  GetMobileResponseBodyGetMobileResultDTO() {}

  explicit GetMobileResponseBodyGetMobileResultDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
  }


  virtual ~GetMobileResponseBodyGetMobileResultDTO() = default;
};
class GetMobileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetMobileResponseBodyGetMobileResultDTO> getMobileResultDTO{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetMobileResponseBody() {}

  explicit GetMobileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (getMobileResultDTO) {
      res["GetMobileResultDTO"] = getMobileResultDTO ? boost::any(getMobileResultDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GetMobileResultDTO") != m.end() && !m["GetMobileResultDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["GetMobileResultDTO"].type()) {
        GetMobileResponseBodyGetMobileResultDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GetMobileResultDTO"]));
        getMobileResultDTO = make_shared<GetMobileResponseBodyGetMobileResultDTO>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMobileResponseBody() = default;
};
class GetMobileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMobileResponseBody> body{};

  GetMobileResponse() {}

  explicit GetMobileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMobileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMobileResponseBody>(model1);
      }
    }
  }


  virtual ~GetMobileResponse() = default;
};
class GetPhoneWithTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> spToken{};

  GetPhoneWithTokenRequest() {}

  explicit GetPhoneWithTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (spToken) {
      res["SpToken"] = boost::any(*spToken);
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
    if (m.find("SpToken") != m.end() && !m["SpToken"].empty()) {
      spToken = make_shared<string>(boost::any_cast<string>(m["SpToken"]));
    }
  }


  virtual ~GetPhoneWithTokenRequest() = default;
};
class GetPhoneWithTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};

  GetPhoneWithTokenResponseBodyData() {}

  explicit GetPhoneWithTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
  }


  virtual ~GetPhoneWithTokenResponseBodyData() = default;
};
class GetPhoneWithTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPhoneWithTokenResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPhoneWithTokenResponseBody() {}

  explicit GetPhoneWithTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPhoneWithTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPhoneWithTokenResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPhoneWithTokenResponseBody() = default;
};
class GetPhoneWithTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhoneWithTokenResponseBody> body{};

  GetPhoneWithTokenResponse() {}

  explicit GetPhoneWithTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPhoneWithTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhoneWithTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhoneWithTokenResponse() = default;
};
class GetSmsAuthTokensRequest : public Darabonba::Model {
public:
  shared_ptr<string> bundleId{};
  shared_ptr<long> expire{};
  shared_ptr<string> osType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> packageName{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> signName{};
  shared_ptr<long> smsCodeExpire{};
  shared_ptr<string> smsTemplateCode{};

  GetSmsAuthTokensRequest() {}

  explicit GetSmsAuthTokensRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (smsCodeExpire) {
      res["SmsCodeExpire"] = boost::any(*smsCodeExpire);
    }
    if (smsTemplateCode) {
      res["SmsTemplateCode"] = boost::any(*smsTemplateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SmsCodeExpire") != m.end() && !m["SmsCodeExpire"].empty()) {
      smsCodeExpire = make_shared<long>(boost::any_cast<long>(m["SmsCodeExpire"]));
    }
    if (m.find("SmsTemplateCode") != m.end() && !m["SmsTemplateCode"].empty()) {
      smsTemplateCode = make_shared<string>(boost::any_cast<string>(m["SmsTemplateCode"]));
    }
  }


  virtual ~GetSmsAuthTokensRequest() = default;
};
class GetSmsAuthTokensResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizToken{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> stsAccessKeyId{};
  shared_ptr<string> stsAccessKeySecret{};
  shared_ptr<string> stsToken{};

  GetSmsAuthTokensResponseBodyData() {}

  explicit GetSmsAuthTokensResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizToken) {
      res["BizToken"] = boost::any(*bizToken);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (stsAccessKeyId) {
      res["StsAccessKeyId"] = boost::any(*stsAccessKeyId);
    }
    if (stsAccessKeySecret) {
      res["StsAccessKeySecret"] = boost::any(*stsAccessKeySecret);
    }
    if (stsToken) {
      res["StsToken"] = boost::any(*stsToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizToken") != m.end() && !m["BizToken"].empty()) {
      bizToken = make_shared<string>(boost::any_cast<string>(m["BizToken"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("StsAccessKeyId") != m.end() && !m["StsAccessKeyId"].empty()) {
      stsAccessKeyId = make_shared<string>(boost::any_cast<string>(m["StsAccessKeyId"]));
    }
    if (m.find("StsAccessKeySecret") != m.end() && !m["StsAccessKeySecret"].empty()) {
      stsAccessKeySecret = make_shared<string>(boost::any_cast<string>(m["StsAccessKeySecret"]));
    }
    if (m.find("StsToken") != m.end() && !m["StsToken"].empty()) {
      stsToken = make_shared<string>(boost::any_cast<string>(m["StsToken"]));
    }
  }


  virtual ~GetSmsAuthTokensResponseBodyData() = default;
};
class GetSmsAuthTokensResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetSmsAuthTokensResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetSmsAuthTokensResponseBody() {}

  explicit GetSmsAuthTokensResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSmsAuthTokensResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSmsAuthTokensResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSmsAuthTokensResponseBody() = default;
};
class GetSmsAuthTokensResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSmsAuthTokensResponseBody> body{};

  GetSmsAuthTokensResponse() {}

  explicit GetSmsAuthTokensResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSmsAuthTokensResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSmsAuthTokensResponseBody>(model1);
      }
    }
  }


  virtual ~GetSmsAuthTokensResponse() = default;
};
class JyCreateVerifySchemeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> bundleId{};
  shared_ptr<long> cmApiCode{};
  shared_ptr<long> ctApiCode{};
  shared_ptr<long> cuApiCode{};
  shared_ptr<string> osType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> packName{};
  shared_ptr<string> packSign{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeName{};

  JyCreateVerifySchemeRequest() {}

  explicit JyCreateVerifySchemeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (cmApiCode) {
      res["CmApiCode"] = boost::any(*cmApiCode);
    }
    if (ctApiCode) {
      res["CtApiCode"] = boost::any(*ctApiCode);
    }
    if (cuApiCode) {
      res["CuApiCode"] = boost::any(*cuApiCode);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (packName) {
      res["PackName"] = boost::any(*packName);
    }
    if (packSign) {
      res["PackSign"] = boost::any(*packSign);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (schemeName) {
      res["SchemeName"] = boost::any(*schemeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("CmApiCode") != m.end() && !m["CmApiCode"].empty()) {
      cmApiCode = make_shared<long>(boost::any_cast<long>(m["CmApiCode"]));
    }
    if (m.find("CtApiCode") != m.end() && !m["CtApiCode"].empty()) {
      ctApiCode = make_shared<long>(boost::any_cast<long>(m["CtApiCode"]));
    }
    if (m.find("CuApiCode") != m.end() && !m["CuApiCode"].empty()) {
      cuApiCode = make_shared<long>(boost::any_cast<long>(m["CuApiCode"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PackName") != m.end() && !m["PackName"].empty()) {
      packName = make_shared<string>(boost::any_cast<string>(m["PackName"]));
    }
    if (m.find("PackSign") != m.end() && !m["PackSign"].empty()) {
      packSign = make_shared<string>(boost::any_cast<string>(m["PackSign"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SchemeName") != m.end() && !m["SchemeName"].empty()) {
      schemeName = make_shared<string>(boost::any_cast<string>(m["SchemeName"]));
    }
  }


  virtual ~JyCreateVerifySchemeRequest() = default;
};
class JyCreateVerifySchemeResponseBodyGateVerifySchemeData : public Darabonba::Model {
public:
  shared_ptr<string> schemeCode{};

  JyCreateVerifySchemeResponseBodyGateVerifySchemeData() {}

  explicit JyCreateVerifySchemeResponseBodyGateVerifySchemeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schemeCode) {
      res["SchemeCode"] = boost::any(*schemeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SchemeCode") != m.end() && !m["SchemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["SchemeCode"]));
    }
  }


  virtual ~JyCreateVerifySchemeResponseBodyGateVerifySchemeData() = default;
};
class JyCreateVerifySchemeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<JyCreateVerifySchemeResponseBodyGateVerifySchemeData> gateVerifySchemeData{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  JyCreateVerifySchemeResponseBody() {}

  explicit JyCreateVerifySchemeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gateVerifySchemeData) {
      res["GateVerifySchemeData"] = gateVerifySchemeData ? boost::any(gateVerifySchemeData->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GateVerifySchemeData") != m.end() && !m["GateVerifySchemeData"].empty()) {
      if (typeid(map<string, boost::any>) == m["GateVerifySchemeData"].type()) {
        JyCreateVerifySchemeResponseBodyGateVerifySchemeData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GateVerifySchemeData"]));
        gateVerifySchemeData = make_shared<JyCreateVerifySchemeResponseBodyGateVerifySchemeData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~JyCreateVerifySchemeResponseBody() = default;
};
class JyCreateVerifySchemeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<JyCreateVerifySchemeResponseBody> body{};

  JyCreateVerifySchemeResponse() {}

  explicit JyCreateVerifySchemeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        JyCreateVerifySchemeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JyCreateVerifySchemeResponseBody>(model1);
      }
    }
  }


  virtual ~JyCreateVerifySchemeResponse() = default;
};
class JyQueryAppInfoBySceneCodeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sceneCode{};

  JyQueryAppInfoBySceneCodeRequest() {}

  explicit JyQueryAppInfoBySceneCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
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
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
  }


  virtual ~JyQueryAppInfoBySceneCodeRequest() = default;
};
class JyQueryAppInfoBySceneCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cmAppId{};
  shared_ptr<string> cmAppKey{};
  shared_ptr<string> ctAppId{};
  shared_ptr<string> ctAppKey{};

  JyQueryAppInfoBySceneCodeResponseBodyData() {}

  explicit JyQueryAppInfoBySceneCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmAppId) {
      res["CmAppId"] = boost::any(*cmAppId);
    }
    if (cmAppKey) {
      res["CmAppKey"] = boost::any(*cmAppKey);
    }
    if (ctAppId) {
      res["CtAppId"] = boost::any(*ctAppId);
    }
    if (ctAppKey) {
      res["CtAppKey"] = boost::any(*ctAppKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CmAppId") != m.end() && !m["CmAppId"].empty()) {
      cmAppId = make_shared<string>(boost::any_cast<string>(m["CmAppId"]));
    }
    if (m.find("CmAppKey") != m.end() && !m["CmAppKey"].empty()) {
      cmAppKey = make_shared<string>(boost::any_cast<string>(m["CmAppKey"]));
    }
    if (m.find("CtAppId") != m.end() && !m["CtAppId"].empty()) {
      ctAppId = make_shared<string>(boost::any_cast<string>(m["CtAppId"]));
    }
    if (m.find("CtAppKey") != m.end() && !m["CtAppKey"].empty()) {
      ctAppKey = make_shared<string>(boost::any_cast<string>(m["CtAppKey"]));
    }
  }


  virtual ~JyQueryAppInfoBySceneCodeResponseBodyData() = default;
};
class JyQueryAppInfoBySceneCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<JyQueryAppInfoBySceneCodeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  JyQueryAppInfoBySceneCodeResponseBody() {}

  explicit JyQueryAppInfoBySceneCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        JyQueryAppInfoBySceneCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<JyQueryAppInfoBySceneCodeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~JyQueryAppInfoBySceneCodeResponseBody() = default;
};
class JyQueryAppInfoBySceneCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<JyQueryAppInfoBySceneCodeResponseBody> body{};

  JyQueryAppInfoBySceneCodeResponse() {}

  explicit JyQueryAppInfoBySceneCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        JyQueryAppInfoBySceneCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<JyQueryAppInfoBySceneCodeResponseBody>(model1);
      }
    }
  }


  virtual ~JyQueryAppInfoBySceneCodeResponse() = default;
};
class QueryGateVerifyBillingPublicRequest : public Darabonba::Model {
public:
  shared_ptr<long> authenticationType{};
  shared_ptr<string> month{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};

  QueryGateVerifyBillingPublicRequest() {}

  explicit QueryGateVerifyBillingPublicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationType) {
      res["AuthenticationType"] = boost::any(*authenticationType);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationType") != m.end() && !m["AuthenticationType"].empty()) {
      authenticationType = make_shared<long>(boost::any_cast<long>(m["AuthenticationType"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<string>(boost::any_cast<string>(m["Month"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~QueryGateVerifyBillingPublicRequest() = default;
};
class QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList : public Darabonba::Model {
public:
  shared_ptr<string> add{};
  shared_ptr<string> amount{};
  shared_ptr<string> appName{};
  shared_ptr<string> itemName{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> singlePrice{};

  QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList() {}

  explicit QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (add) {
      res["Add"] = boost::any(*add);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (singlePrice) {
      res["SinglePrice"] = boost::any(*singlePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Add") != m.end() && !m["Add"].empty()) {
      add = make_shared<string>(boost::any_cast<string>(m["Add"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("SinglePrice") != m.end() && !m["SinglePrice"].empty()) {
      singlePrice = make_shared<string>(boost::any_cast<string>(m["SinglePrice"]));
    }
  }


  virtual ~QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList() = default;
};
class QueryGateVerifyBillingPublicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> amountSum{};
  shared_ptr<vector<QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList>> sceneBillingList{};

  QueryGateVerifyBillingPublicResponseBodyData() {}

  explicit QueryGateVerifyBillingPublicResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amountSum) {
      res["AmountSum"] = boost::any(*amountSum);
    }
    if (sceneBillingList) {
      vector<boost::any> temp1;
      for(auto item1:*sceneBillingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SceneBillingList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AmountSum") != m.end() && !m["AmountSum"].empty()) {
      amountSum = make_shared<string>(boost::any_cast<string>(m["AmountSum"]));
    }
    if (m.find("SceneBillingList") != m.end() && !m["SceneBillingList"].empty()) {
      if (typeid(vector<boost::any>) == m["SceneBillingList"].type()) {
        vector<QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SceneBillingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sceneBillingList = make_shared<vector<QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList>>(expect1);
      }
    }
  }


  virtual ~QueryGateVerifyBillingPublicResponseBodyData() = default;
};
class QueryGateVerifyBillingPublicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryGateVerifyBillingPublicResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryGateVerifyBillingPublicResponseBody() {}

  explicit QueryGateVerifyBillingPublicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryGateVerifyBillingPublicResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryGateVerifyBillingPublicResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryGateVerifyBillingPublicResponseBody() = default;
};
class QueryGateVerifyBillingPublicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryGateVerifyBillingPublicResponseBody> body{};

  QueryGateVerifyBillingPublicResponse() {}

  explicit QueryGateVerifyBillingPublicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryGateVerifyBillingPublicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGateVerifyBillingPublicResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGateVerifyBillingPublicResponse() = default;
};
class QueryGateVerifyStatisticPublicRequest : public Darabonba::Model {
public:
  shared_ptr<long> authenticationType{};
  shared_ptr<string> endDate{};
  shared_ptr<string> osType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> startDate{};

  QueryGateVerifyStatisticPublicRequest() {}

  explicit QueryGateVerifyStatisticPublicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationType) {
      res["AuthenticationType"] = boost::any(*authenticationType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationType") != m.end() && !m["AuthenticationType"].empty()) {
      authenticationType = make_shared<long>(boost::any_cast<long>(m["AuthenticationType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~QueryGateVerifyStatisticPublicRequest() = default;
};
class QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic : public Darabonba::Model {
public:
  shared_ptr<string> statisticDateStr{};
  shared_ptr<long> totalFail{};
  shared_ptr<long> totalSuccess{};
  shared_ptr<long> totalUnknown{};

  QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic() {}

  explicit QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (statisticDateStr) {
      res["StatisticDateStr"] = boost::any(*statisticDateStr);
    }
    if (totalFail) {
      res["TotalFail"] = boost::any(*totalFail);
    }
    if (totalSuccess) {
      res["TotalSuccess"] = boost::any(*totalSuccess);
    }
    if (totalUnknown) {
      res["TotalUnknown"] = boost::any(*totalUnknown);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StatisticDateStr") != m.end() && !m["StatisticDateStr"].empty()) {
      statisticDateStr = make_shared<string>(boost::any_cast<string>(m["StatisticDateStr"]));
    }
    if (m.find("TotalFail") != m.end() && !m["TotalFail"].empty()) {
      totalFail = make_shared<long>(boost::any_cast<long>(m["TotalFail"]));
    }
    if (m.find("TotalSuccess") != m.end() && !m["TotalSuccess"].empty()) {
      totalSuccess = make_shared<long>(boost::any_cast<long>(m["TotalSuccess"]));
    }
    if (m.find("TotalUnknown") != m.end() && !m["TotalUnknown"].empty()) {
      totalUnknown = make_shared<long>(boost::any_cast<long>(m["TotalUnknown"]));
    }
  }


  virtual ~QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic() = default;
};
class QueryGateVerifyStatisticPublicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic>> dayStatistic{};
  shared_ptr<long> total{};
  shared_ptr<long> totalFail{};
  shared_ptr<long> totalSuccess{};
  shared_ptr<long> totalUnknown{};

  QueryGateVerifyStatisticPublicResponseBodyData() {}

  explicit QueryGateVerifyStatisticPublicResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dayStatistic) {
      vector<boost::any> temp1;
      for(auto item1:*dayStatistic){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DayStatistic"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (totalFail) {
      res["TotalFail"] = boost::any(*totalFail);
    }
    if (totalSuccess) {
      res["TotalSuccess"] = boost::any(*totalSuccess);
    }
    if (totalUnknown) {
      res["TotalUnknown"] = boost::any(*totalUnknown);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DayStatistic") != m.end() && !m["DayStatistic"].empty()) {
      if (typeid(vector<boost::any>) == m["DayStatistic"].type()) {
        vector<QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DayStatistic"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dayStatistic = make_shared<vector<QueryGateVerifyStatisticPublicResponseBodyDataDayStatistic>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TotalFail") != m.end() && !m["TotalFail"].empty()) {
      totalFail = make_shared<long>(boost::any_cast<long>(m["TotalFail"]));
    }
    if (m.find("TotalSuccess") != m.end() && !m["TotalSuccess"].empty()) {
      totalSuccess = make_shared<long>(boost::any_cast<long>(m["TotalSuccess"]));
    }
    if (m.find("TotalUnknown") != m.end() && !m["TotalUnknown"].empty()) {
      totalUnknown = make_shared<long>(boost::any_cast<long>(m["TotalUnknown"]));
    }
  }


  virtual ~QueryGateVerifyStatisticPublicResponseBodyData() = default;
};
class QueryGateVerifyStatisticPublicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryGateVerifyStatisticPublicResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryGateVerifyStatisticPublicResponseBody() {}

  explicit QueryGateVerifyStatisticPublicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryGateVerifyStatisticPublicResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryGateVerifyStatisticPublicResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryGateVerifyStatisticPublicResponseBody() = default;
};
class QueryGateVerifyStatisticPublicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryGateVerifyStatisticPublicResponseBody> body{};

  QueryGateVerifyStatisticPublicResponse() {}

  explicit QueryGateVerifyStatisticPublicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryGateVerifyStatisticPublicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGateVerifyStatisticPublicResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGateVerifyStatisticPublicResponse() = default;
};
class QuerySendDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sendDate{};

  QuerySendDetailsRequest() {}

  explicit QuerySendDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (sendDate) {
      res["SendDate"] = boost::any(*sendDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
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
    if (m.find("SendDate") != m.end() && !m["SendDate"].empty()) {
      sendDate = make_shared<string>(boost::any_cast<string>(m["SendDate"]));
    }
  }


  virtual ~QuerySendDetailsRequest() = default;
};
class QuerySendDetailsResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> errCode{};
  shared_ptr<string> outId{};
  shared_ptr<string> phoneNum{};
  shared_ptr<string> receiveDate{};
  shared_ptr<string> sendDate{};
  shared_ptr<long> sendStatus{};
  shared_ptr<string> templateCode{};

  QuerySendDetailsResponseBodyModel() {}

  explicit QuerySendDetailsResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
    }
    if (receiveDate) {
      res["ReceiveDate"] = boost::any(*receiveDate);
    }
    if (sendDate) {
      res["SendDate"] = boost::any(*sendDate);
    }
    if (sendStatus) {
      res["SendStatus"] = boost::any(*sendStatus);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
    if (m.find("ReceiveDate") != m.end() && !m["ReceiveDate"].empty()) {
      receiveDate = make_shared<string>(boost::any_cast<string>(m["ReceiveDate"]));
    }
    if (m.find("SendDate") != m.end() && !m["SendDate"].empty()) {
      sendDate = make_shared<string>(boost::any_cast<string>(m["SendDate"]));
    }
    if (m.find("SendStatus") != m.end() && !m["SendStatus"].empty()) {
      sendStatus = make_shared<long>(boost::any_cast<long>(m["SendStatus"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~QuerySendDetailsResponseBodyModel() = default;
};
class QuerySendDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<QuerySendDetailsResponseBodyModel>> model{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QuerySendDetailsResponseBody() {}

  explicit QuerySendDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<QuerySendDetailsResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySendDetailsResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<QuerySendDetailsResponseBodyModel>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QuerySendDetailsResponseBody() = default;
};
class QuerySendDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySendDetailsResponseBody> body{};

  QuerySendDetailsResponse() {}

  explicit QuerySendDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySendDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySendDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySendDetailsResponse() = default;
};
class SendSmsVerifyCodeRequest : public Darabonba::Model {
public:
  shared_ptr<long> codeLength{};
  shared_ptr<long> codeType{};
  shared_ptr<string> countryCode{};
  shared_ptr<long> duplicatePolicy{};
  shared_ptr<long> interval{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> returnVerifyCode{};
  shared_ptr<string> schemeName{};
  shared_ptr<string> signName{};
  shared_ptr<string> smsUpExtendCode{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParam{};
  shared_ptr<long> validTime{};

  SendSmsVerifyCodeRequest() {}

  explicit SendSmsVerifyCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeLength) {
      res["CodeLength"] = boost::any(*codeLength);
    }
    if (codeType) {
      res["CodeType"] = boost::any(*codeType);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (duplicatePolicy) {
      res["DuplicatePolicy"] = boost::any(*duplicatePolicy);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
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
    if (returnVerifyCode) {
      res["ReturnVerifyCode"] = boost::any(*returnVerifyCode);
    }
    if (schemeName) {
      res["SchemeName"] = boost::any(*schemeName);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (smsUpExtendCode) {
      res["SmsUpExtendCode"] = boost::any(*smsUpExtendCode);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParam) {
      res["TemplateParam"] = boost::any(*templateParam);
    }
    if (validTime) {
      res["ValidTime"] = boost::any(*validTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeLength") != m.end() && !m["CodeLength"].empty()) {
      codeLength = make_shared<long>(boost::any_cast<long>(m["CodeLength"]));
    }
    if (m.find("CodeType") != m.end() && !m["CodeType"].empty()) {
      codeType = make_shared<long>(boost::any_cast<long>(m["CodeType"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("DuplicatePolicy") != m.end() && !m["DuplicatePolicy"].empty()) {
      duplicatePolicy = make_shared<long>(boost::any_cast<long>(m["DuplicatePolicy"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
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
    if (m.find("ReturnVerifyCode") != m.end() && !m["ReturnVerifyCode"].empty()) {
      returnVerifyCode = make_shared<bool>(boost::any_cast<bool>(m["ReturnVerifyCode"]));
    }
    if (m.find("SchemeName") != m.end() && !m["SchemeName"].empty()) {
      schemeName = make_shared<string>(boost::any_cast<string>(m["SchemeName"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SmsUpExtendCode") != m.end() && !m["SmsUpExtendCode"].empty()) {
      smsUpExtendCode = make_shared<string>(boost::any_cast<string>(m["SmsUpExtendCode"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParam") != m.end() && !m["TemplateParam"].empty()) {
      templateParam = make_shared<string>(boost::any_cast<string>(m["TemplateParam"]));
    }
    if (m.find("ValidTime") != m.end() && !m["ValidTime"].empty()) {
      validTime = make_shared<long>(boost::any_cast<long>(m["ValidTime"]));
    }
  }


  virtual ~SendSmsVerifyCodeRequest() = default;
};
class SendSmsVerifyCodeResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> outId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> verifyCode{};

  SendSmsVerifyCodeResponseBodyModel() {}

  explicit SendSmsVerifyCodeResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~SendSmsVerifyCodeResponseBodyModel() = default;
};
class SendSmsVerifyCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<SendSmsVerifyCodeResponseBodyModel> model{};
  shared_ptr<bool> success{};

  SendSmsVerifyCodeResponseBody() {}

  explicit SendSmsVerifyCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        SendSmsVerifyCodeResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<SendSmsVerifyCodeResponseBodyModel>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendSmsVerifyCodeResponseBody() = default;
};
class SendSmsVerifyCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendSmsVerifyCodeResponseBody> body{};

  SendSmsVerifyCodeResponse() {}

  explicit SendSmsVerifyCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendSmsVerifyCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendSmsVerifyCodeResponseBody>(model1);
      }
    }
  }


  virtual ~SendSmsVerifyCodeResponse() = default;
};
class VerifyMobileRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessCode{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  VerifyMobileRequest() {}

  explicit VerifyMobileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessCode) {
      res["AccessCode"] = boost::any(*accessCode);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessCode") != m.end() && !m["AccessCode"].empty()) {
      accessCode = make_shared<string>(boost::any_cast<string>(m["AccessCode"]));
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
  }


  virtual ~VerifyMobileRequest() = default;
};
class VerifyMobileResponseBodyGateVerifyResultDTO : public Darabonba::Model {
public:
  shared_ptr<string> verifyId{};
  shared_ptr<string> verifyResult{};

  VerifyMobileResponseBodyGateVerifyResultDTO() {}

  explicit VerifyMobileResponseBodyGateVerifyResultDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verifyId) {
      res["VerifyId"] = boost::any(*verifyId);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerifyId") != m.end() && !m["VerifyId"].empty()) {
      verifyId = make_shared<string>(boost::any_cast<string>(m["VerifyId"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~VerifyMobileResponseBodyGateVerifyResultDTO() = default;
};
class VerifyMobileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<VerifyMobileResponseBodyGateVerifyResultDTO> gateVerifyResultDTO{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  VerifyMobileResponseBody() {}

  explicit VerifyMobileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gateVerifyResultDTO) {
      res["GateVerifyResultDTO"] = gateVerifyResultDTO ? boost::any(gateVerifyResultDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GateVerifyResultDTO") != m.end() && !m["GateVerifyResultDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["GateVerifyResultDTO"].type()) {
        VerifyMobileResponseBodyGateVerifyResultDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GateVerifyResultDTO"]));
        gateVerifyResultDTO = make_shared<VerifyMobileResponseBodyGateVerifyResultDTO>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyMobileResponseBody() = default;
};
class VerifyMobileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyMobileResponseBody> body{};

  VerifyMobileResponse() {}

  explicit VerifyMobileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyMobileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyMobileResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyMobileResponse() = default;
};
class VerifyPhoneWithTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> spToken{};

  VerifyPhoneWithTokenRequest() {}

  explicit VerifyPhoneWithTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (spToken) {
      res["SpToken"] = boost::any(*spToken);
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
    if (m.find("SpToken") != m.end() && !m["SpToken"].empty()) {
      spToken = make_shared<string>(boost::any_cast<string>(m["SpToken"]));
    }
  }


  virtual ~VerifyPhoneWithTokenRequest() = default;
};
class VerifyPhoneWithTokenResponseBodyGateVerify : public Darabonba::Model {
public:
  shared_ptr<string> verifyId{};
  shared_ptr<string> verifyResult{};

  VerifyPhoneWithTokenResponseBodyGateVerify() {}

  explicit VerifyPhoneWithTokenResponseBodyGateVerify(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verifyId) {
      res["VerifyId"] = boost::any(*verifyId);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerifyId") != m.end() && !m["VerifyId"].empty()) {
      verifyId = make_shared<string>(boost::any_cast<string>(m["VerifyId"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~VerifyPhoneWithTokenResponseBodyGateVerify() = default;
};
class VerifyPhoneWithTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<VerifyPhoneWithTokenResponseBodyGateVerify> gateVerify{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  VerifyPhoneWithTokenResponseBody() {}

  explicit VerifyPhoneWithTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gateVerify) {
      res["GateVerify"] = gateVerify ? boost::any(gateVerify->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GateVerify") != m.end() && !m["GateVerify"].empty()) {
      if (typeid(map<string, boost::any>) == m["GateVerify"].type()) {
        VerifyPhoneWithTokenResponseBodyGateVerify model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GateVerify"]));
        gateVerify = make_shared<VerifyPhoneWithTokenResponseBodyGateVerify>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyPhoneWithTokenResponseBody() = default;
};
class VerifyPhoneWithTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyPhoneWithTokenResponseBody> body{};

  VerifyPhoneWithTokenResponse() {}

  explicit VerifyPhoneWithTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyPhoneWithTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyPhoneWithTokenResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyPhoneWithTokenResponse() = default;
};
class VerifySmsCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> smsCode{};
  shared_ptr<string> smsToken{};

  VerifySmsCodeRequest() {}

  explicit VerifySmsCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (smsCode) {
      res["SmsCode"] = boost::any(*smsCode);
    }
    if (smsToken) {
      res["SmsToken"] = boost::any(*smsToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SmsCode") != m.end() && !m["SmsCode"].empty()) {
      smsCode = make_shared<string>(boost::any_cast<string>(m["SmsCode"]));
    }
    if (m.find("SmsToken") != m.end() && !m["SmsToken"].empty()) {
      smsToken = make_shared<string>(boost::any_cast<string>(m["SmsToken"]));
    }
  }


  virtual ~VerifySmsCodeRequest() = default;
};
class VerifySmsCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  VerifySmsCodeResponseBody() {}

  explicit VerifySmsCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifySmsCodeResponseBody() = default;
};
class VerifySmsCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifySmsCodeResponseBody> body{};

  VerifySmsCodeResponse() {}

  explicit VerifySmsCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifySmsCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifySmsCodeResponseBody>(model1);
      }
    }
  }


  virtual ~VerifySmsCodeResponse() = default;
};
class VerifyWithFusionAuthTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> verifyToken{};

  VerifyWithFusionAuthTokenRequest() {}

  explicit VerifyWithFusionAuthTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (verifyToken) {
      res["VerifyToken"] = boost::any(*verifyToken);
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
    if (m.find("VerifyToken") != m.end() && !m["VerifyToken"].empty()) {
      verifyToken = make_shared<string>(boost::any_cast<string>(m["VerifyToken"]));
    }
  }


  virtual ~VerifyWithFusionAuthTokenRequest() = default;
};
class VerifyWithFusionAuthTokenResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<long> phoneScore{};
  shared_ptr<string> verifyResult{};

  VerifyWithFusionAuthTokenResponseBodyModel() {}

  explicit VerifyWithFusionAuthTokenResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneScore) {
      res["PhoneScore"] = boost::any(*phoneScore);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneScore") != m.end() && !m["PhoneScore"].empty()) {
      phoneScore = make_shared<long>(boost::any_cast<long>(m["PhoneScore"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~VerifyWithFusionAuthTokenResponseBodyModel() = default;
};
class VerifyWithFusionAuthTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<VerifyWithFusionAuthTokenResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  VerifyWithFusionAuthTokenResponseBody() {}

  explicit VerifyWithFusionAuthTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        VerifyWithFusionAuthTokenResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<VerifyWithFusionAuthTokenResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VerifyWithFusionAuthTokenResponseBody() = default;
};
class VerifyWithFusionAuthTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyWithFusionAuthTokenResponseBody> body{};

  VerifyWithFusionAuthTokenResponse() {}

  explicit VerifyWithFusionAuthTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyWithFusionAuthTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyWithFusionAuthTokenResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyWithFusionAuthTokenResponse() = default;
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
  CheckSmsVerifyCodeResponse checkSmsVerifyCodeWithOptions(shared_ptr<CheckSmsVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckSmsVerifyCodeResponse checkSmsVerifyCode(shared_ptr<CheckSmsVerifyCodeRequest> request);
  CreateSchemeConfigResponse createSchemeConfigWithOptions(shared_ptr<CreateSchemeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSchemeConfigResponse createSchemeConfig(shared_ptr<CreateSchemeConfigRequest> request);
  CreateVerifySchemeResponse createVerifySchemeWithOptions(shared_ptr<CreateVerifySchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVerifySchemeResponse createVerifyScheme(shared_ptr<CreateVerifySchemeRequest> request);
  DeleteVerifySchemeResponse deleteVerifySchemeWithOptions(shared_ptr<DeleteVerifySchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVerifySchemeResponse deleteVerifyScheme(shared_ptr<DeleteVerifySchemeRequest> request);
  DescribeVerifySchemeResponse describeVerifySchemeWithOptions(shared_ptr<DescribeVerifySchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifySchemeResponse describeVerifyScheme(shared_ptr<DescribeVerifySchemeRequest> request);
  GetAuthTokenResponse getAuthTokenWithOptions(shared_ptr<GetAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthTokenResponse getAuthToken(shared_ptr<GetAuthTokenRequest> request);
  GetAuthorizationUrlResponse getAuthorizationUrlWithOptions(shared_ptr<GetAuthorizationUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthorizationUrlResponse getAuthorizationUrl(shared_ptr<GetAuthorizationUrlRequest> request);
  GetFusionAuthTokenResponse getFusionAuthTokenWithOptions(shared_ptr<GetFusionAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFusionAuthTokenResponse getFusionAuthToken(shared_ptr<GetFusionAuthTokenRequest> request);
  GetMobileResponse getMobileWithOptions(shared_ptr<GetMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMobileResponse getMobile(shared_ptr<GetMobileRequest> request);
  GetPhoneWithTokenResponse getPhoneWithTokenWithOptions(shared_ptr<GetPhoneWithTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhoneWithTokenResponse getPhoneWithToken(shared_ptr<GetPhoneWithTokenRequest> request);
  GetSmsAuthTokensResponse getSmsAuthTokensWithOptions(shared_ptr<GetSmsAuthTokensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSmsAuthTokensResponse getSmsAuthTokens(shared_ptr<GetSmsAuthTokensRequest> request);
  JyCreateVerifySchemeResponse jyCreateVerifySchemeWithOptions(shared_ptr<JyCreateVerifySchemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  JyCreateVerifySchemeResponse jyCreateVerifyScheme(shared_ptr<JyCreateVerifySchemeRequest> request);
  JyQueryAppInfoBySceneCodeResponse jyQueryAppInfoBySceneCodeWithOptions(shared_ptr<JyQueryAppInfoBySceneCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  JyQueryAppInfoBySceneCodeResponse jyQueryAppInfoBySceneCode(shared_ptr<JyQueryAppInfoBySceneCodeRequest> request);
  QueryGateVerifyBillingPublicResponse queryGateVerifyBillingPublicWithOptions(shared_ptr<QueryGateVerifyBillingPublicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGateVerifyBillingPublicResponse queryGateVerifyBillingPublic(shared_ptr<QueryGateVerifyBillingPublicRequest> request);
  QueryGateVerifyStatisticPublicResponse queryGateVerifyStatisticPublicWithOptions(shared_ptr<QueryGateVerifyStatisticPublicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGateVerifyStatisticPublicResponse queryGateVerifyStatisticPublic(shared_ptr<QueryGateVerifyStatisticPublicRequest> request);
  QuerySendDetailsResponse querySendDetailsWithOptions(shared_ptr<QuerySendDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySendDetailsResponse querySendDetails(shared_ptr<QuerySendDetailsRequest> request);
  SendSmsVerifyCodeResponse sendSmsVerifyCodeWithOptions(shared_ptr<SendSmsVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendSmsVerifyCodeResponse sendSmsVerifyCode(shared_ptr<SendSmsVerifyCodeRequest> request);
  VerifyMobileResponse verifyMobileWithOptions(shared_ptr<VerifyMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyMobileResponse verifyMobile(shared_ptr<VerifyMobileRequest> request);
  VerifyPhoneWithTokenResponse verifyPhoneWithTokenWithOptions(shared_ptr<VerifyPhoneWithTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyPhoneWithTokenResponse verifyPhoneWithToken(shared_ptr<VerifyPhoneWithTokenRequest> request);
  VerifySmsCodeResponse verifySmsCodeWithOptions(shared_ptr<VerifySmsCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifySmsCodeResponse verifySmsCode(shared_ptr<VerifySmsCodeRequest> request);
  VerifyWithFusionAuthTokenResponse verifyWithFusionAuthTokenWithOptions(shared_ptr<VerifyWithFusionAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyWithFusionAuthTokenResponse verifyWithFusionAuthToken(shared_ptr<VerifyWithFusionAuthTokenRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dypnsapi20170525

#endif
