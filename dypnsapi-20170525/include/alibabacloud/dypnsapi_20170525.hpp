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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeName{};
  shared_ptr<string> appName{};
  shared_ptr<string> osType{};
  shared_ptr<string> packName{};
  shared_ptr<string> packSign{};
  shared_ptr<string> bundleId{};

  CreateVerifySchemeRequest() {}

  explicit CreateVerifySchemeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (schemeName) {
      res["SchemeName"] = boost::any(*schemeName);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (packName) {
      res["PackName"] = boost::any(*packName);
    }
    if (packSign) {
      res["PackSign"] = boost::any(*packSign);
    }
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
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
    if (m.find("SchemeName") != m.end() && !m["SchemeName"].empty()) {
      schemeName = make_shared<string>(boost::any_cast<string>(m["SchemeName"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("PackName") != m.end() && !m["PackName"].empty()) {
      packName = make_shared<string>(boost::any_cast<string>(m["PackName"]));
    }
    if (m.find("PackSign") != m.end() && !m["PackSign"].empty()) {
      packSign = make_shared<string>(boost::any_cast<string>(m["PackSign"]));
    }
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateVerifySchemeResponseBodyGateVerifySchemeDTO> gateVerifySchemeDTO{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (gateVerifySchemeDTO) {
      res["GateVerifySchemeDTO"] = gateVerifySchemeDTO ? boost::any(gateVerifySchemeDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GateVerifySchemeDTO") != m.end() && !m["GateVerifySchemeDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["GateVerifySchemeDTO"].type()) {
        CreateVerifySchemeResponseBodyGateVerifySchemeDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GateVerifySchemeDTO"]));
        gateVerifySchemeDTO = make_shared<CreateVerifySchemeResponseBodyGateVerifySchemeDTO>(model1);
      }
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeCode{};
  shared_ptr<long> customerId{};

  DeleteVerifySchemeRequest() {}

  explicit DeleteVerifySchemeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (schemeCode) {
      res["SchemeCode"] = boost::any(*schemeCode);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
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
    if (m.find("SchemeCode") != m.end() && !m["SchemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["SchemeCode"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<long>(boost::any_cast<long>(m["CustomerId"]));
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> schemeCode{};
  shared_ptr<long> customerId{};

  DescribeVerifySchemeRequest() {}

  explicit DescribeVerifySchemeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (schemeCode) {
      res["SchemeCode"] = boost::any(*schemeCode);
    }
    if (customerId) {
      res["CustomerId"] = boost::any(*customerId);
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
    if (m.find("SchemeCode") != m.end() && !m["SchemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["SchemeCode"]));
    }
    if (m.find("CustomerId") != m.end() && !m["CustomerId"].empty()) {
      customerId = make_shared<long>(boost::any_cast<long>(m["CustomerId"]));
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
class GetAuthorizationUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNo{};
  shared_ptr<long> schemeId{};
  shared_ptr<string> endDate{};

  GetAuthorizationUrlRequest() {}

  explicit GetAuthorizationUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNo) {
      res["PhoneNo"] = boost::any(*phoneNo);
    }
    if (schemeId) {
      res["SchemeId"] = boost::any(*schemeId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
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
    if (m.find("PhoneNo") != m.end() && !m["PhoneNo"].empty()) {
      phoneNo = make_shared<string>(boost::any_cast<string>(m["PhoneNo"]));
    }
    if (m.find("SchemeId") != m.end() && !m["SchemeId"].empty()) {
      schemeId = make_shared<long>(boost::any_cast<long>(m["SchemeId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAuthorizationUrlResponseBodyData> data{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAuthorizationUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAuthorizationUrlResponseBodyData>(model1);
      }
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
class GetAuthTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> url{};
  shared_ptr<string> origin{};

  GetAuthTokenRequest() {}

  explicit GetAuthTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
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
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
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
  shared_ptr<string> materialInfo{};
  shared_ptr<string> identityInfo{};
  shared_ptr<string> verifyDesc{};
  shared_ptr<string> verifyResult{};
  shared_ptr<string> deviceToken{};

  GetCertifyResultResponseBodyData() {}

  explicit GetCertifyResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (identityInfo) {
      res["IdentityInfo"] = boost::any(*identityInfo);
    }
    if (verifyDesc) {
      res["VerifyDesc"] = boost::any(*verifyDesc);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("IdentityInfo") != m.end() && !m["IdentityInfo"].empty()) {
      identityInfo = make_shared<string>(boost::any_cast<string>(m["IdentityInfo"]));
    }
    if (m.find("VerifyDesc") != m.end() && !m["VerifyDesc"].empty()) {
      verifyDesc = make_shared<string>(boost::any_cast<string>(m["VerifyDesc"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
  }


  virtual ~GetCertifyResultResponseBodyData() = default;
};
class GetCertifyResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetCertifyResultResponseBodyData>> data{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> accessToken{};
  shared_ptr<string> outId{};

  GetMobileRequest() {}

  explicit GetMobileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetMobileResponseBodyGetMobileResultDTO> getMobileResultDTO{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (getMobileResultDTO) {
      res["GetMobileResultDTO"] = getMobileResultDTO ? boost::any(getMobileResultDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GetMobileResultDTO") != m.end() && !m["GetMobileResultDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["GetMobileResultDTO"].type()) {
        GetMobileResponseBodyGetMobileResultDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GetMobileResultDTO"]));
        getMobileResultDTO = make_shared<GetMobileResponseBodyGetMobileResultDTO>(model1);
      }
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
class TwiceTelVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> since{};
  shared_ptr<string> phoneNumber{};

  TwiceTelVerifyRequest() {}

  explicit TwiceTelVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (since) {
      res["Since"] = boost::any(*since);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("Since") != m.end() && !m["Since"].empty()) {
      since = make_shared<string>(boost::any_cast<string>(m["Since"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~TwiceTelVerifyRequest() = default;
};
class TwiceTelVerifyResponseBodyTwiceTelVerifyResult : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<long> verifyResult{};

  TwiceTelVerifyResponseBodyTwiceTelVerifyResult() {}

  explicit TwiceTelVerifyResponseBodyTwiceTelVerifyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<long>(boost::any_cast<long>(m["VerifyResult"]));
    }
  }


  virtual ~TwiceTelVerifyResponseBodyTwiceTelVerifyResult() = default;
};
class TwiceTelVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<TwiceTelVerifyResponseBodyTwiceTelVerifyResult> twiceTelVerifyResult{};

  TwiceTelVerifyResponseBody() {}

  explicit TwiceTelVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (twiceTelVerifyResult) {
      res["TwiceTelVerifyResult"] = twiceTelVerifyResult ? boost::any(twiceTelVerifyResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TwiceTelVerifyResult") != m.end() && !m["TwiceTelVerifyResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["TwiceTelVerifyResult"].type()) {
        TwiceTelVerifyResponseBodyTwiceTelVerifyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TwiceTelVerifyResult"]));
        twiceTelVerifyResult = make_shared<TwiceTelVerifyResponseBodyTwiceTelVerifyResult>(model1);
      }
    }
  }


  virtual ~TwiceTelVerifyResponseBody() = default;
};
class TwiceTelVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TwiceTelVerifyResponseBody> body{};

  TwiceTelVerifyResponse() {}

  explicit TwiceTelVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TwiceTelVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TwiceTelVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~TwiceTelVerifyResponse() = default;
};
class VerifyMobileRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> accessCode{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> outId{};

  VerifyMobileRequest() {}

  explicit VerifyMobileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accessCode) {
      res["AccessCode"] = boost::any(*accessCode);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (m.find("AccessCode") != m.end() && !m["AccessCode"].empty()) {
      accessCode = make_shared<string>(boost::any_cast<string>(m["AccessCode"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
  }


  virtual ~VerifyMobileRequest() = default;
};
class VerifyMobileResponseBodyGateVerifyResultDTO : public Darabonba::Model {
public:
  shared_ptr<string> verifyResult{};
  shared_ptr<string> verifyId{};

  VerifyMobileResponseBodyGateVerifyResultDTO() {}

  explicit VerifyMobileResponseBodyGateVerifyResultDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    if (verifyId) {
      res["VerifyId"] = boost::any(*verifyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
    if (m.find("VerifyId") != m.end() && !m["VerifyId"].empty()) {
      verifyId = make_shared<string>(boost::any_cast<string>(m["VerifyId"]));
    }
  }


  virtual ~VerifyMobileResponseBodyGateVerifyResultDTO() = default;
};
class VerifyMobileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VerifyMobileResponseBodyGateVerifyResultDTO> gateVerifyResultDTO{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (gateVerifyResultDTO) {
      res["GateVerifyResultDTO"] = gateVerifyResultDTO ? boost::any(gateVerifyResultDTO->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GateVerifyResultDTO") != m.end() && !m["GateVerifyResultDTO"].empty()) {
      if (typeid(map<string, boost::any>) == m["GateVerifyResultDTO"].type()) {
        VerifyMobileResponseBodyGateVerifyResultDTO model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GateVerifyResultDTO"]));
        gateVerifyResultDTO = make_shared<VerifyMobileResponseBodyGateVerifyResultDTO>(model1);
      }
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
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> phoneNumber{};
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
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
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SpToken") != m.end() && !m["SpToken"].empty()) {
      spToken = make_shared<string>(boost::any_cast<string>(m["SpToken"]));
    }
  }


  virtual ~VerifyPhoneWithTokenRequest() = default;
};
class VerifyPhoneWithTokenResponseBodyGateVerify : public Darabonba::Model {
public:
  shared_ptr<string> verifyResult{};
  shared_ptr<string> verifyId{};

  VerifyPhoneWithTokenResponseBodyGateVerify() {}

  explicit VerifyPhoneWithTokenResponseBodyGateVerify(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    if (verifyId) {
      res["VerifyId"] = boost::any(*verifyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
    if (m.find("VerifyId") != m.end() && !m["VerifyId"].empty()) {
      verifyId = make_shared<string>(boost::any_cast<string>(m["VerifyId"]));
    }
  }


  virtual ~VerifyPhoneWithTokenResponseBodyGateVerify() = default;
};
class VerifyPhoneWithTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VerifyPhoneWithTokenResponseBodyGateVerify> gateVerify{};

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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (gateVerify) {
      res["GateVerify"] = gateVerify ? boost::any(gateVerify->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GateVerify") != m.end() && !m["GateVerify"].empty()) {
      if (typeid(map<string, boost::any>) == m["GateVerify"].type()) {
        VerifyPhoneWithTokenResponseBodyGateVerify model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GateVerify"]));
        gateVerify = make_shared<VerifyPhoneWithTokenResponseBodyGateVerify>(model1);
      }
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
  GetAuthorizationUrlResponse getAuthorizationUrlWithOptions(shared_ptr<GetAuthorizationUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthorizationUrlResponse getAuthorizationUrl(shared_ptr<GetAuthorizationUrlRequest> request);
  GetAuthTokenResponse getAuthTokenWithOptions(shared_ptr<GetAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthTokenResponse getAuthToken(shared_ptr<GetAuthTokenRequest> request);
  GetCertifyResultResponse getCertifyResultWithOptions(shared_ptr<GetCertifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCertifyResultResponse getCertifyResult(shared_ptr<GetCertifyResultRequest> request);
  GetMobileResponse getMobileWithOptions(shared_ptr<GetMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMobileResponse getMobile(shared_ptr<GetMobileRequest> request);
  TwiceTelVerifyResponse twiceTelVerifyWithOptions(shared_ptr<TwiceTelVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TwiceTelVerifyResponse twiceTelVerify(shared_ptr<TwiceTelVerifyRequest> request);
  VerifyMobileResponse verifyMobileWithOptions(shared_ptr<VerifyMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyMobileResponse verifyMobile(shared_ptr<VerifyMobileRequest> request);
  VerifyPhoneWithTokenResponse verifyPhoneWithTokenWithOptions(shared_ptr<VerifyPhoneWithTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyPhoneWithTokenResponse verifyPhoneWithToken(shared_ptr<VerifyPhoneWithTokenRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dypnsapi20170525

#endif
