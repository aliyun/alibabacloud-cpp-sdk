// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ACCOUNTCENTER20241209_H_
#define ALIBABACLOUD_ACCOUNTCENTER20241209_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_AccountCenter20241209 {
class EnterpriseOrgQueryLoadTreeRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptTicket{};
  shared_ptr<bool> loadOrgOnly{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> requestId{};

  EnterpriseOrgQueryLoadTreeRequest() {}

  explicit EnterpriseOrgQueryLoadTreeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (loadOrgOnly) {
      res["LoadOrgOnly"] = boost::any(*loadOrgOnly);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("LoadOrgOnly") != m.end() && !m["LoadOrgOnly"].empty()) {
      loadOrgOnly = make_shared<bool>(boost::any_cast<bool>(m["LoadOrgOnly"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnterpriseOrgQueryLoadTreeRequest() = default;
};
class EnterpriseOrgQueryLoadTreeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> treeDto{};

  EnterpriseOrgQueryLoadTreeResponseBody() {}

  explicit EnterpriseOrgQueryLoadTreeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (treeDto) {
      res["TreeDto"] = boost::any(*treeDto);
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
    if (m.find("TreeDto") != m.end() && !m["TreeDto"].empty()) {
      treeDto = make_shared<string>(boost::any_cast<string>(m["TreeDto"]));
    }
  }


  virtual ~EnterpriseOrgQueryLoadTreeResponseBody() = default;
};
class EnterpriseOrgQueryLoadTreeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseOrgQueryLoadTreeResponseBody> body{};

  EnterpriseOrgQueryLoadTreeResponse() {}

  explicit EnterpriseOrgQueryLoadTreeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseOrgQueryLoadTreeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseOrgQueryLoadTreeResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseOrgQueryLoadTreeResponse() = default;
};
class EnterpriseRegisterAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> encryptPassword{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> loginEmail{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> showCompleteInfo{};
  shared_ptr<string> siteNick{};

  EnterpriseRegisterAccountRequest() {}

  explicit EnterpriseRegisterAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (encryptPassword) {
      res["EncryptPassword"] = boost::any(*encryptPassword);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (loginEmail) {
      res["LoginEmail"] = boost::any(*loginEmail);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showCompleteInfo) {
      res["ShowCompleteInfo"] = boost::any(*showCompleteInfo);
    }
    if (siteNick) {
      res["SiteNick"] = boost::any(*siteNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("EncryptPassword") != m.end() && !m["EncryptPassword"].empty()) {
      encryptPassword = make_shared<string>(boost::any_cast<string>(m["EncryptPassword"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("LoginEmail") != m.end() && !m["LoginEmail"].empty()) {
      loginEmail = make_shared<string>(boost::any_cast<string>(m["LoginEmail"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowCompleteInfo") != m.end() && !m["ShowCompleteInfo"].empty()) {
      showCompleteInfo = make_shared<bool>(boost::any_cast<bool>(m["ShowCompleteInfo"]));
    }
    if (m.find("SiteNick") != m.end() && !m["SiteNick"].empty()) {
      siteNick = make_shared<string>(boost::any_cast<string>(m["SiteNick"]));
    }
  }


  virtual ~EnterpriseRegisterAccountRequest() = default;
};
class EnterpriseRegisterAccountResponseBodyAccountInfo : public Darabonba::Model {
public:
  shared_ptr<string> enterpriseLicenseNo{};
  shared_ptr<string> enterpriseName{};
  shared_ptr<string> loginId{};
  shared_ptr<string> pk{};

  EnterpriseRegisterAccountResponseBodyAccountInfo() {}

  explicit EnterpriseRegisterAccountResponseBodyAccountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enterpriseLicenseNo) {
      res["EnterpriseLicenseNo"] = boost::any(*enterpriseLicenseNo);
    }
    if (enterpriseName) {
      res["EnterpriseName"] = boost::any(*enterpriseName);
    }
    if (loginId) {
      res["LoginId"] = boost::any(*loginId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnterpriseLicenseNo") != m.end() && !m["EnterpriseLicenseNo"].empty()) {
      enterpriseLicenseNo = make_shared<string>(boost::any_cast<string>(m["EnterpriseLicenseNo"]));
    }
    if (m.find("EnterpriseName") != m.end() && !m["EnterpriseName"].empty()) {
      enterpriseName = make_shared<string>(boost::any_cast<string>(m["EnterpriseName"]));
    }
    if (m.find("LoginId") != m.end() && !m["LoginId"].empty()) {
      loginId = make_shared<string>(boost::any_cast<string>(m["LoginId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
  }


  virtual ~EnterpriseRegisterAccountResponseBodyAccountInfo() = default;
};
class EnterpriseRegisterAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<EnterpriseRegisterAccountResponseBodyAccountInfo> accountInfo{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseRegisterAccountResponseBody() {}

  explicit EnterpriseRegisterAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountInfo) {
      res["AccountInfo"] = accountInfo ? boost::any(accountInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountInfo") != m.end() && !m["AccountInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountInfo"].type()) {
        EnterpriseRegisterAccountResponseBodyAccountInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountInfo"]));
        accountInfo = make_shared<EnterpriseRegisterAccountResponseBodyAccountInfo>(model1);
      }
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnterpriseRegisterAccountResponseBody() = default;
};
class EnterpriseRegisterAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseRegisterAccountResponseBody> body{};

  EnterpriseRegisterAccountResponse() {}

  explicit EnterpriseRegisterAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseRegisterAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseRegisterAccountResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseRegisterAccountResponse() = default;
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
  EnterpriseOrgQueryLoadTreeResponse enterpriseOrgQueryLoadTreeWithOptions(shared_ptr<EnterpriseOrgQueryLoadTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseOrgQueryLoadTreeResponse enterpriseOrgQueryLoadTree(shared_ptr<EnterpriseOrgQueryLoadTreeRequest> request);
  EnterpriseRegisterAccountResponse enterpriseRegisterAccountWithOptions(shared_ptr<EnterpriseRegisterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseRegisterAccountResponse enterpriseRegisterAccount(shared_ptr<EnterpriseRegisterAccountRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AccountCenter20241209

#endif
