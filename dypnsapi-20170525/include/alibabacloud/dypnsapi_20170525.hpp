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
class CreateVerifySchemeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> osType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> packName{};
  shared_ptr<string> packSign{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeName{};

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
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

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
    if (m.find("GateVerifySchemeDTO") != m.end() && !m["GateVerifySchemeDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["GateVerifySchemeDTO"].type()) {
        CreateVerifySchemeResponseBodyGateVerifySchemeDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GateVerifySchemeDTO"]));
        gateVerifySchemeDTO = make_shared<CreateVerifySchemeResponseBodyGateVerifySchemeDTO>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVerifySchemeResponseBody() = default;
};
class CreateVerifySchemeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVerifySchemeResponseBody> body{};

  CreateVerifySchemeResponse() {}

  explicit CreateVerifySchemeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<DeleteVerifySchemeResponseBody> body{};

  DeleteVerifySchemeResponse() {}

  explicit DeleteVerifySchemeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<DescribeVerifySchemeResponseBody> body{};

  DescribeVerifySchemeResponse() {}

  explicit DescribeVerifySchemeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<GetAuthTokenResponseBody> body{};

  GetAuthTokenResponse() {}

  explicit GetAuthTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<GetAuthorizationUrlResponseBody> body{};

  GetAuthorizationUrlResponse() {}

  explicit GetAuthorizationUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuthorizationUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthorizationUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthorizationUrlResponse() = default;
};
class GetCertifyResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> token{};

  GetCertifyResultRequest() {}

  explicit GetCertifyResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (token) {
      res["Token"] = boost::any(*token);
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
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetCertifyResultRequest() = default;
};
class GetCertifyResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceToken{};
  shared_ptr<string> identityInfo{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> verifyDesc{};
  shared_ptr<string> verifyResult{};

  GetCertifyResultResponseBodyData() {}

  explicit GetCertifyResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (identityInfo) {
      res["IdentityInfo"] = boost::any(*identityInfo);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (verifyDesc) {
      res["VerifyDesc"] = boost::any(*verifyDesc);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("IdentityInfo") != m.end() && !m["IdentityInfo"].empty()) {
      identityInfo = make_shared<string>(boost::any_cast<string>(m["IdentityInfo"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("VerifyDesc") != m.end() && !m["VerifyDesc"].empty()) {
      verifyDesc = make_shared<string>(boost::any_cast<string>(m["VerifyDesc"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~GetCertifyResultResponseBodyData() = default;
};
class GetCertifyResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetCertifyResultResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetCertifyResultResponseBody() {}

  explicit GetCertifyResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetCertifyResultResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCertifyResultResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetCertifyResultResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCertifyResultResponseBody() = default;
};
class GetCertifyResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCertifyResultResponseBody> body{};

  GetCertifyResultResponse() {}

  explicit GetCertifyResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCertifyResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCertifyResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetCertifyResultResponse() = default;
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
  shared_ptr<GetMobileResponseBody> body{};

  GetMobileResponse() {}

  explicit GetMobileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMobileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMobileResponseBody>(model1);
      }
    }
  }


  virtual ~GetMobileResponse() = default;
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
  shared_ptr<GetSmsAuthTokensResponseBody> body{};

  GetSmsAuthTokensResponse() {}

  explicit GetSmsAuthTokensResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSmsAuthTokensResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSmsAuthTokensResponseBody>(model1);
      }
    }
  }


  virtual ~GetSmsAuthTokensResponse() = default;
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
  shared_ptr<QueryGateVerifyBillingPublicResponseBody> body{};

  QueryGateVerifyBillingPublicResponse() {}

  explicit QueryGateVerifyBillingPublicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<QueryGateVerifyStatisticPublicResponseBody> body{};

  QueryGateVerifyStatisticPublicResponse() {}

  explicit QueryGateVerifyStatisticPublicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryGateVerifyStatisticPublicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGateVerifyStatisticPublicResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGateVerifyStatisticPublicResponse() = default;
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
  shared_ptr<VerifyMobileResponseBody> body{};

  VerifyMobileResponse() {}

  explicit VerifyMobileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<VerifyPhoneWithTokenResponseBody> body{};

  VerifyPhoneWithTokenResponse() {}

  explicit VerifyPhoneWithTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<VerifySmsCodeResponseBody> body{};

  VerifySmsCodeResponse() {}

  explicit VerifySmsCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifySmsCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifySmsCodeResponseBody>(model1);
      }
    }
  }


  virtual ~VerifySmsCodeResponse() = default;
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
  GetCertifyResultResponse getCertifyResultWithOptions(shared_ptr<GetCertifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCertifyResultResponse getCertifyResult(shared_ptr<GetCertifyResultRequest> request);
  GetMobileResponse getMobileWithOptions(shared_ptr<GetMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMobileResponse getMobile(shared_ptr<GetMobileRequest> request);
  GetSmsAuthTokensResponse getSmsAuthTokensWithOptions(shared_ptr<GetSmsAuthTokensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSmsAuthTokensResponse getSmsAuthTokens(shared_ptr<GetSmsAuthTokensRequest> request);
  QueryGateVerifyBillingPublicResponse queryGateVerifyBillingPublicWithOptions(shared_ptr<QueryGateVerifyBillingPublicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGateVerifyBillingPublicResponse queryGateVerifyBillingPublic(shared_ptr<QueryGateVerifyBillingPublicRequest> request);
  QueryGateVerifyStatisticPublicResponse queryGateVerifyStatisticPublicWithOptions(shared_ptr<QueryGateVerifyStatisticPublicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGateVerifyStatisticPublicResponse queryGateVerifyStatisticPublic(shared_ptr<QueryGateVerifyStatisticPublicRequest> request);
  VerifyMobileResponse verifyMobileWithOptions(shared_ptr<VerifyMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyMobileResponse verifyMobile(shared_ptr<VerifyMobileRequest> request);
  VerifyPhoneWithTokenResponse verifyPhoneWithTokenWithOptions(shared_ptr<VerifyPhoneWithTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyPhoneWithTokenResponse verifyPhoneWithToken(shared_ptr<VerifyPhoneWithTokenRequest> request);
  VerifySmsCodeResponse verifySmsCodeWithOptions(shared_ptr<VerifySmsCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifySmsCodeResponse verifySmsCode(shared_ptr<VerifySmsCodeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dypnsapi20170525

#endif
