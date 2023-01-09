// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMS20190815_H_
#define ALIBABACLOUD_IMS20190815_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ims20190815 {
class AddClientIdToOIDCProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> OIDCProviderName{};

  AddClientIdToOIDCProviderRequest() {}

  explicit AddClientIdToOIDCProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
  }


  virtual ~AddClientIdToOIDCProviderRequest() = default;
};
class AddClientIdToOIDCProviderResponseBodyOIDCProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> clientIds{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> fingerprints{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> issuerUrl{};
  shared_ptr<string> OIDCProviderName{};
  shared_ptr<string> updateDate{};

  AddClientIdToOIDCProviderResponseBodyOIDCProvider() {}

  explicit AddClientIdToOIDCProviderResponseBodyOIDCProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fingerprints) {
      res["Fingerprints"] = boost::any(*fingerprints);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (issuerUrl) {
      res["IssuerUrl"] = boost::any(*issuerUrl);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fingerprints") != m.end() && !m["Fingerprints"].empty()) {
      fingerprints = make_shared<string>(boost::any_cast<string>(m["Fingerprints"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IssuerUrl") != m.end() && !m["IssuerUrl"].empty()) {
      issuerUrl = make_shared<string>(boost::any_cast<string>(m["IssuerUrl"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~AddClientIdToOIDCProviderResponseBodyOIDCProvider() = default;
};
class AddClientIdToOIDCProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddClientIdToOIDCProviderResponseBodyOIDCProvider> OIDCProvider{};
  shared_ptr<string> requestId{};

  AddClientIdToOIDCProviderResponseBody() {}

  explicit AddClientIdToOIDCProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProvider) {
      res["OIDCProvider"] = OIDCProvider ? boost::any(OIDCProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProvider") != m.end() && !m["OIDCProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["OIDCProvider"].type()) {
        AddClientIdToOIDCProviderResponseBodyOIDCProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OIDCProvider"]));
        OIDCProvider = make_shared<AddClientIdToOIDCProviderResponseBodyOIDCProvider>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddClientIdToOIDCProviderResponseBody() = default;
};
class AddClientIdToOIDCProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddClientIdToOIDCProviderResponseBody> body{};

  AddClientIdToOIDCProviderResponse() {}

  explicit AddClientIdToOIDCProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddClientIdToOIDCProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddClientIdToOIDCProviderResponseBody>(model1);
      }
    }
  }


  virtual ~AddClientIdToOIDCProviderResponse() = default;
};
class AddFingerprintToOIDCProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> fingerprint{};
  shared_ptr<string> OIDCProviderName{};

  AddFingerprintToOIDCProviderRequest() {}

  explicit AddFingerprintToOIDCProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
  }


  virtual ~AddFingerprintToOIDCProviderRequest() = default;
};
class AddFingerprintToOIDCProviderResponseBodyOIDCProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> clientIds{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> fingerprints{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> issuerUrl{};
  shared_ptr<string> OIDCProviderName{};
  shared_ptr<string> updateDate{};

  AddFingerprintToOIDCProviderResponseBodyOIDCProvider() {}

  explicit AddFingerprintToOIDCProviderResponseBodyOIDCProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fingerprints) {
      res["Fingerprints"] = boost::any(*fingerprints);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (issuerUrl) {
      res["IssuerUrl"] = boost::any(*issuerUrl);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fingerprints") != m.end() && !m["Fingerprints"].empty()) {
      fingerprints = make_shared<string>(boost::any_cast<string>(m["Fingerprints"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IssuerUrl") != m.end() && !m["IssuerUrl"].empty()) {
      issuerUrl = make_shared<string>(boost::any_cast<string>(m["IssuerUrl"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~AddFingerprintToOIDCProviderResponseBodyOIDCProvider() = default;
};
class AddFingerprintToOIDCProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddFingerprintToOIDCProviderResponseBodyOIDCProvider> OIDCProvider{};
  shared_ptr<string> requestId{};

  AddFingerprintToOIDCProviderResponseBody() {}

  explicit AddFingerprintToOIDCProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProvider) {
      res["OIDCProvider"] = OIDCProvider ? boost::any(OIDCProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProvider") != m.end() && !m["OIDCProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["OIDCProvider"].type()) {
        AddFingerprintToOIDCProviderResponseBodyOIDCProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OIDCProvider"]));
        OIDCProvider = make_shared<AddFingerprintToOIDCProviderResponseBodyOIDCProvider>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddFingerprintToOIDCProviderResponseBody() = default;
};
class AddFingerprintToOIDCProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFingerprintToOIDCProviderResponseBody> body{};

  AddFingerprintToOIDCProviderResponse() {}

  explicit AddFingerprintToOIDCProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFingerprintToOIDCProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFingerprintToOIDCProviderResponseBody>(model1);
      }
    }
  }


  virtual ~AddFingerprintToOIDCProviderResponse() = default;
};
class AddUserToGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> userPrincipalName{};

  AddUserToGroupRequest() {}

  explicit AddUserToGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~AddUserToGroupRequest() = default;
};
class AddUserToGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUserToGroupResponseBody() {}

  explicit AddUserToGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserToGroupResponseBody() = default;
};
class AddUserToGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserToGroupResponseBody> body{};

  AddUserToGroupResponse() {}

  explicit AddUserToGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserToGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserToGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserToGroupResponse() = default;
};
class BindMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> authenticationCode1{};
  shared_ptr<string> authenticationCode2{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> userPrincipalName{};

  BindMFADeviceRequest() {}

  explicit BindMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationCode1) {
      res["AuthenticationCode1"] = boost::any(*authenticationCode1);
    }
    if (authenticationCode2) {
      res["AuthenticationCode2"] = boost::any(*authenticationCode2);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationCode1") != m.end() && !m["AuthenticationCode1"].empty()) {
      authenticationCode1 = make_shared<string>(boost::any_cast<string>(m["AuthenticationCode1"]));
    }
    if (m.find("AuthenticationCode2") != m.end() && !m["AuthenticationCode2"].empty()) {
      authenticationCode2 = make_shared<string>(boost::any_cast<string>(m["AuthenticationCode2"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~BindMFADeviceRequest() = default;
};
class BindMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindMFADeviceResponseBody() {}

  explicit BindMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindMFADeviceResponseBody() = default;
};
class BindMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindMFADeviceResponseBody> body{};

  BindMFADeviceResponse() {}

  explicit BindMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~BindMFADeviceResponse() = default;
};
class ChangePasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> newPassword{};
  shared_ptr<string> oldPassword{};

  ChangePasswordRequest() {}

  explicit ChangePasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newPassword) {
      res["NewPassword"] = boost::any(*newPassword);
    }
    if (oldPassword) {
      res["OldPassword"] = boost::any(*oldPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewPassword") != m.end() && !m["NewPassword"].empty()) {
      newPassword = make_shared<string>(boost::any_cast<string>(m["NewPassword"]));
    }
    if (m.find("OldPassword") != m.end() && !m["OldPassword"].empty()) {
      oldPassword = make_shared<string>(boost::any_cast<string>(m["OldPassword"]));
    }
  }


  virtual ~ChangePasswordRequest() = default;
};
class ChangePasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangePasswordResponseBody() {}

  explicit ChangePasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangePasswordResponseBody() = default;
};
class ChangePasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangePasswordResponseBody> body{};

  ChangePasswordResponse() {}

  explicit ChangePasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangePasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangePasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ChangePasswordResponse() = default;
};
class CreateAccessKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};

  CreateAccessKeyRequest() {}

  explicit CreateAccessKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~CreateAccessKeyRequest() = default;
};
class CreateAccessKeyResponseBodyAccessKey : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> createDate{};
  shared_ptr<string> status{};

  CreateAccessKeyResponseBodyAccessKey() {}

  explicit CreateAccessKeyResponseBodyAccessKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateAccessKeyResponseBodyAccessKey() = default;
};
class CreateAccessKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAccessKeyResponseBodyAccessKey> accessKey{};
  shared_ptr<string> requestId{};

  CreateAccessKeyResponseBody() {}

  explicit CreateAccessKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = accessKey ? boost::any(accessKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKey"].type()) {
        CreateAccessKeyResponseBodyAccessKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKey"]));
        accessKey = make_shared<CreateAccessKeyResponseBodyAccessKey>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccessKeyResponseBody() = default;
};
class CreateAccessKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessKeyResponseBody> body{};

  CreateAccessKeyResponse() {}

  explicit CreateAccessKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessKeyResponse() = default;
};
class CreateAppSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  CreateAppSecretRequest() {}

  explicit CreateAppSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAppSecretRequest() = default;
};
class CreateAppSecretResponseBodyAppSecret : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};
  shared_ptr<string> appSecretValue{};
  shared_ptr<string> createDate{};

  CreateAppSecretResponseBodyAppSecret() {}

  explicit CreateAppSecretResponseBodyAppSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    if (appSecretValue) {
      res["AppSecretValue"] = boost::any(*appSecretValue);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
    if (m.find("AppSecretValue") != m.end() && !m["AppSecretValue"].empty()) {
      appSecretValue = make_shared<string>(boost::any_cast<string>(m["AppSecretValue"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~CreateAppSecretResponseBodyAppSecret() = default;
};
class CreateAppSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAppSecretResponseBodyAppSecret> appSecret{};
  shared_ptr<string> requestId{};

  CreateAppSecretResponseBody() {}

  explicit CreateAppSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecret) {
      res["AppSecret"] = appSecret ? boost::any(appSecret->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppSecret"].type()) {
        CreateAppSecretResponseBodyAppSecret model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppSecret"]));
        appSecret = make_shared<CreateAppSecretResponseBodyAppSecret>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppSecretResponseBody() = default;
};
class CreateAppSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppSecretResponseBody> body{};

  CreateAppSecretResponse() {}

  explicit CreateAppSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppSecretResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppSecretResponse() = default;
};
class CreateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> displayName{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<string> predefinedScopes{};
  shared_ptr<string> redirectUris{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<bool> secretRequired{};

  CreateApplicationRequest() {}

  explicit CreateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (predefinedScopes) {
      res["PredefinedScopes"] = boost::any(*predefinedScopes);
    }
    if (redirectUris) {
      res["RedirectUris"] = boost::any(*redirectUris);
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      predefinedScopes = make_shared<string>(boost::any_cast<string>(m["PredefinedScopes"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      redirectUris = make_shared<string>(boost::any_cast<string>(m["RedirectUris"]));
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
  }


  virtual ~CreateApplicationRequest() = default;
};
class CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() {}

  explicit CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() = default;
};
class CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope{};

  CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() {}

  explicit CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() = default;
};
class CreateApplicationResponseBodyApplicationDelegatedScope : public Darabonba::Model {
public:
  shared_ptr<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes> predefinedScopes{};

  CreateApplicationResponseBodyApplicationDelegatedScope() {}

  explicit CreateApplicationResponseBodyApplicationDelegatedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponseBodyApplicationDelegatedScope() = default;
};
class CreateApplicationResponseBodyApplicationRedirectUris : public Darabonba::Model {
public:
  shared_ptr<vector<string>> redirectUri{};

  CreateApplicationResponseBodyApplicationRedirectUris() {}

  explicit CreateApplicationResponseBodyApplicationRedirectUris(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redirectUri) {
      res["RedirectUri"] = boost::any(*redirectUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RedirectUri") != m.end() && !m["RedirectUri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUri = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateApplicationResponseBodyApplicationRedirectUris() = default;
};
class CreateApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<string> accountId{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> createDate{};
  shared_ptr<CreateApplicationResponseBodyApplicationDelegatedScope> delegatedScope{};
  shared_ptr<string> displayName{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<CreateApplicationResponseBodyApplicationRedirectUris> redirectUris{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<bool> secretRequired{};
  shared_ptr<string> updateDate{};

  CreateApplicationResponseBodyApplication() {}

  explicit CreateApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (delegatedScope) {
      res["DelegatedScope"] = delegatedScope ? boost::any(delegatedScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (redirectUris) {
      res["RedirectUris"] = redirectUris ? boost::any(redirectUris->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DelegatedScope") != m.end() && !m["DelegatedScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedScope"].type()) {
        CreateApplicationResponseBodyApplicationDelegatedScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedScope"]));
        delegatedScope = make_shared<CreateApplicationResponseBodyApplicationDelegatedScope>(model1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectUris"].type()) {
        CreateApplicationResponseBodyApplicationRedirectUris model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectUris"]));
        redirectUris = make_shared<CreateApplicationResponseBodyApplicationRedirectUris>(model1);
      }
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~CreateApplicationResponseBodyApplication() = default;
};
class CreateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateApplicationResponseBodyApplication> application{};
  shared_ptr<string> requestId{};

  CreateApplicationResponseBody() {}

  explicit CreateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        CreateApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<CreateApplicationResponseBodyApplication>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApplicationResponseBody() = default;
};
class CreateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApplicationResponseBody> body{};

  CreateApplicationResponse() {}

  explicit CreateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponse() = default;
};
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> displayName{};
  shared_ptr<string> groupName{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> updateDate{};

  CreateGroupResponseBodyGroup() {}

  explicit CreateGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~CreateGroupResponseBodyGroup() = default;
};
class CreateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  CreateGroupResponseBody() {}

  explicit CreateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = group ? boost::any(group->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(map<string, boost::any>) == m["Group"].type()) {
        CreateGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Group"]));
        group = make_shared<CreateGroupResponseBodyGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGroupResponseBody() = default;
};
class CreateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupResponseBody> body{};

  CreateGroupResponse() {}

  explicit CreateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupResponse() = default;
};
class CreateLoginProfileRequest : public Darabonba::Model {
public:
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<string> password{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<string> status{};
  shared_ptr<string> userPrincipalName{};

  CreateLoginProfileRequest() {}

  explicit CreateLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~CreateLoginProfileRequest() = default;
};
class CreateLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
public:
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<string> status{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userPrincipalName{};

  CreateLoginProfileResponseBodyLoginProfile() {}

  explicit CreateLoginProfileResponseBodyLoginProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~CreateLoginProfileResponseBodyLoginProfile() = default;
};
class CreateLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateLoginProfileResponseBodyLoginProfile> loginProfile{};
  shared_ptr<string> requestId{};

  CreateLoginProfileResponseBody() {}

  explicit CreateLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginProfile) {
      res["LoginProfile"] = loginProfile ? boost::any(loginProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginProfile") != m.end() && !m["LoginProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfile"].type()) {
        CreateLoginProfileResponseBodyLoginProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfile"]));
        loginProfile = make_shared<CreateLoginProfileResponseBodyLoginProfile>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLoginProfileResponseBody() = default;
};
class CreateLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLoginProfileResponseBody> body{};

  CreateLoginProfileResponse() {}

  explicit CreateLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoginProfileResponse() = default;
};
class CreateOIDCProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIds{};
  shared_ptr<string> description{};
  shared_ptr<string> fingerprints{};
  shared_ptr<string> issuerUrl{};
  shared_ptr<string> OIDCProviderName{};

  CreateOIDCProviderRequest() {}

  explicit CreateOIDCProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fingerprints) {
      res["Fingerprints"] = boost::any(*fingerprints);
    }
    if (issuerUrl) {
      res["IssuerUrl"] = boost::any(*issuerUrl);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fingerprints") != m.end() && !m["Fingerprints"].empty()) {
      fingerprints = make_shared<string>(boost::any_cast<string>(m["Fingerprints"]));
    }
    if (m.find("IssuerUrl") != m.end() && !m["IssuerUrl"].empty()) {
      issuerUrl = make_shared<string>(boost::any_cast<string>(m["IssuerUrl"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
  }


  virtual ~CreateOIDCProviderRequest() = default;
};
class CreateOIDCProviderResponseBodyOIDCProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> clientIds{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> fingerprints{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> issuerUrl{};
  shared_ptr<string> OIDCProviderName{};
  shared_ptr<string> updateDate{};

  CreateOIDCProviderResponseBodyOIDCProvider() {}

  explicit CreateOIDCProviderResponseBodyOIDCProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fingerprints) {
      res["Fingerprints"] = boost::any(*fingerprints);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (issuerUrl) {
      res["IssuerUrl"] = boost::any(*issuerUrl);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fingerprints") != m.end() && !m["Fingerprints"].empty()) {
      fingerprints = make_shared<string>(boost::any_cast<string>(m["Fingerprints"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IssuerUrl") != m.end() && !m["IssuerUrl"].empty()) {
      issuerUrl = make_shared<string>(boost::any_cast<string>(m["IssuerUrl"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~CreateOIDCProviderResponseBodyOIDCProvider() = default;
};
class CreateOIDCProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateOIDCProviderResponseBodyOIDCProvider> OIDCProvider{};
  shared_ptr<string> requestId{};

  CreateOIDCProviderResponseBody() {}

  explicit CreateOIDCProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProvider) {
      res["OIDCProvider"] = OIDCProvider ? boost::any(OIDCProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProvider") != m.end() && !m["OIDCProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["OIDCProvider"].type()) {
        CreateOIDCProviderResponseBodyOIDCProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OIDCProvider"]));
        OIDCProvider = make_shared<CreateOIDCProviderResponseBodyOIDCProvider>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateOIDCProviderResponseBody() = default;
};
class CreateOIDCProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOIDCProviderResponseBody> body{};

  CreateOIDCProviderResponse() {}

  explicit CreateOIDCProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOIDCProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOIDCProviderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOIDCProviderResponse() = default;
};
class CreateSAMLProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> encodedSAMLMetadataDocument{};
  shared_ptr<string> SAMLProviderName{};

  CreateSAMLProviderRequest() {}

  explicit CreateSAMLProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encodedSAMLMetadataDocument) {
      res["EncodedSAMLMetadataDocument"] = boost::any(*encodedSAMLMetadataDocument);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncodedSAMLMetadataDocument") != m.end() && !m["EncodedSAMLMetadataDocument"].empty()) {
      encodedSAMLMetadataDocument = make_shared<string>(boost::any_cast<string>(m["EncodedSAMLMetadataDocument"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
  }


  virtual ~CreateSAMLProviderRequest() = default;
};
class CreateSAMLProviderResponseBodySAMLProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> updateDate{};

  CreateSAMLProviderResponseBodySAMLProvider() {}

  explicit CreateSAMLProviderResponseBodySAMLProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~CreateSAMLProviderResponseBodySAMLProvider() = default;
};
class CreateSAMLProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateSAMLProviderResponseBodySAMLProvider> SAMLProvider{};

  CreateSAMLProviderResponseBody() {}

  explicit CreateSAMLProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLProvider) {
      res["SAMLProvider"] = SAMLProvider ? boost::any(SAMLProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLProvider") != m.end() && !m["SAMLProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLProvider"].type()) {
        CreateSAMLProviderResponseBodySAMLProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLProvider"]));
        SAMLProvider = make_shared<CreateSAMLProviderResponseBodySAMLProvider>(model1);
      }
    }
  }


  virtual ~CreateSAMLProviderResponseBody() = default;
};
class CreateSAMLProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSAMLProviderResponseBody> body{};

  CreateSAMLProviderResponse() {}

  explicit CreateSAMLProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSAMLProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSAMLProviderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSAMLProviderResponse() = default;
};
class CreateUserRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateUserRequestTag() {}

  explicit CreateUserRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateUserRequestTag() = default;
};
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<vector<CreateUserRequestTag>> tag{};
  shared_ptr<string> userPrincipalName{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateUserRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUserRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateUserRequestTag>>(expect1);
      }
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBodyUserTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  CreateUserResponseBodyUserTagsTag() {}

  explicit CreateUserResponseBodyUserTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~CreateUserResponseBodyUserTagsTag() = default;
};
class CreateUserResponseBodyUserTags : public Darabonba::Model {
public:
  shared_ptr<vector<CreateUserResponseBodyUserTagsTag>> tag{};

  CreateUserResponseBodyUserTags() {}

  explicit CreateUserResponseBodyUserTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateUserResponseBodyUserTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUserResponseBodyUserTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateUserResponseBodyUserTagsTag>>(expect1);
      }
    }
  }


  virtual ~CreateUserResponseBodyUserTags() = default;
};
class CreateUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> lastLoginDate{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> provisionType{};
  shared_ptr<CreateUserResponseBodyUserTags> tags{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  CreateUserResponseBodyUser() {}

  explicit CreateUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lastLoginDate) {
      res["LastLoginDate"] = boost::any(*lastLoginDate);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("LastLoginDate") != m.end() && !m["LastLoginDate"].empty()) {
      lastLoginDate = make_shared<string>(boost::any_cast<string>(m["LastLoginDate"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        CreateUserResponseBodyUserTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<CreateUserResponseBodyUserTags>(model1);
      }
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~CreateUserResponseBodyUser() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateUserResponseBodyUser> user{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        CreateUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<CreateUserResponseBodyUser>(model1);
      }
    }
  }


  virtual ~CreateUserResponseBody() = default;
};
class CreateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserResponseBody> body{};

  CreateUserResponse() {}

  explicit CreateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserResponse() = default;
};
class CreateVirtualMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> virtualMFADeviceName{};

  CreateVirtualMFADeviceRequest() {}

  explicit CreateVirtualMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (virtualMFADeviceName) {
      res["VirtualMFADeviceName"] = boost::any(*virtualMFADeviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VirtualMFADeviceName") != m.end() && !m["VirtualMFADeviceName"].empty()) {
      virtualMFADeviceName = make_shared<string>(boost::any_cast<string>(m["VirtualMFADeviceName"]));
    }
  }


  virtual ~CreateVirtualMFADeviceRequest() = default;
};
class CreateVirtualMFADeviceResponseBodyVirtualMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> base32StringSeed{};
  shared_ptr<string> QRCodePNG{};
  shared_ptr<string> serialNumber{};

  CreateVirtualMFADeviceResponseBodyVirtualMFADevice() {}

  explicit CreateVirtualMFADeviceResponseBodyVirtualMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (base32StringSeed) {
      res["Base32StringSeed"] = boost::any(*base32StringSeed);
    }
    if (QRCodePNG) {
      res["QRCodePNG"] = boost::any(*QRCodePNG);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Base32StringSeed") != m.end() && !m["Base32StringSeed"].empty()) {
      base32StringSeed = make_shared<string>(boost::any_cast<string>(m["Base32StringSeed"]));
    }
    if (m.find("QRCodePNG") != m.end() && !m["QRCodePNG"].empty()) {
      QRCodePNG = make_shared<string>(boost::any_cast<string>(m["QRCodePNG"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~CreateVirtualMFADeviceResponseBodyVirtualMFADevice() = default;
};
class CreateVirtualMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateVirtualMFADeviceResponseBodyVirtualMFADevice> virtualMFADevice{};

  CreateVirtualMFADeviceResponseBody() {}

  explicit CreateVirtualMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (virtualMFADevice) {
      res["VirtualMFADevice"] = virtualMFADevice ? boost::any(virtualMFADevice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VirtualMFADevice") != m.end() && !m["VirtualMFADevice"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualMFADevice"].type()) {
        CreateVirtualMFADeviceResponseBodyVirtualMFADevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualMFADevice"]));
        virtualMFADevice = make_shared<CreateVirtualMFADeviceResponseBodyVirtualMFADevice>(model1);
      }
    }
  }


  virtual ~CreateVirtualMFADeviceResponseBody() = default;
};
class CreateVirtualMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVirtualMFADeviceResponseBody> body{};

  CreateVirtualMFADeviceResponse() {}

  explicit CreateVirtualMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVirtualMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVirtualMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVirtualMFADeviceResponse() = default;
};
class DeleteAccessKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userPrincipalName{};

  DeleteAccessKeyRequest() {}

  explicit DeleteAccessKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~DeleteAccessKeyRequest() = default;
};
class DeleteAccessKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccessKeyResponseBody() {}

  explicit DeleteAccessKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccessKeyResponseBody() = default;
};
class DeleteAccessKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessKeyResponseBody> body{};

  DeleteAccessKeyResponse() {}

  explicit DeleteAccessKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessKeyResponse() = default;
};
class DeleteAppSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};

  DeleteAppSecretRequest() {}

  explicit DeleteAppSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
  }


  virtual ~DeleteAppSecretRequest() = default;
};
class DeleteAppSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppSecretResponseBody() {}

  explicit DeleteAppSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAppSecretResponseBody() = default;
};
class DeleteAppSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppSecretResponseBody> body{};

  DeleteAppSecretResponse() {}

  explicit DeleteAppSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppSecretResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppSecretResponse() = default;
};
class DeleteApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DeleteApplicationRequest() {}

  explicit DeleteApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteApplicationRequest() = default;
};
class DeleteApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApplicationResponseBody() {}

  explicit DeleteApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteApplicationResponseBody() = default;
};
class DeleteApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApplicationResponseBody> body{};

  DeleteApplicationResponse() {}

  explicit DeleteApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationResponse() = default;
};
class DeleteGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};

  DeleteGroupRequest() {}

  explicit DeleteGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~DeleteGroupRequest() = default;
};
class DeleteGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGroupResponseBody() {}

  explicit DeleteGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGroupResponseBody() = default;
};
class DeleteGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupResponseBody> body{};

  DeleteGroupResponse() {}

  explicit DeleteGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupResponse() = default;
};
class DeleteLoginProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};

  DeleteLoginProfileRequest() {}

  explicit DeleteLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~DeleteLoginProfileRequest() = default;
};
class DeleteLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLoginProfileResponseBody() {}

  explicit DeleteLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLoginProfileResponseBody() = default;
};
class DeleteLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLoginProfileResponseBody> body{};

  DeleteLoginProfileResponse() {}

  explicit DeleteLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLoginProfileResponse() = default;
};
class DeleteOIDCProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> OIDCProviderName{};

  DeleteOIDCProviderRequest() {}

  explicit DeleteOIDCProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
  }


  virtual ~DeleteOIDCProviderRequest() = default;
};
class DeleteOIDCProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteOIDCProviderResponseBody() {}

  explicit DeleteOIDCProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteOIDCProviderResponseBody() = default;
};
class DeleteOIDCProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteOIDCProviderResponseBody> body{};

  DeleteOIDCProviderResponse() {}

  explicit DeleteOIDCProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteOIDCProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteOIDCProviderResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteOIDCProviderResponse() = default;
};
class DeleteSAMLProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> SAMLProviderName{};

  DeleteSAMLProviderRequest() {}

  explicit DeleteSAMLProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
  }


  virtual ~DeleteSAMLProviderRequest() = default;
};
class DeleteSAMLProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSAMLProviderResponseBody() {}

  explicit DeleteSAMLProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSAMLProviderResponseBody() = default;
};
class DeleteSAMLProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSAMLProviderResponseBody> body{};

  DeleteSAMLProviderResponse() {}

  explicit DeleteSAMLProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSAMLProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSAMLProviderResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSAMLProviderResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~DeleteUserRequest() = default;
};
class DeleteUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserResponseBody() {}

  explicit DeleteUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserResponseBody() = default;
};
class DeleteUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserResponseBody> body{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserResponse() = default;
};
class DeleteVirtualMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};

  DeleteVirtualMFADeviceRequest() {}

  explicit DeleteVirtualMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~DeleteVirtualMFADeviceRequest() = default;
};
class DeleteVirtualMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVirtualMFADeviceResponseBody() {}

  explicit DeleteVirtualMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVirtualMFADeviceResponseBody() = default;
};
class DeleteVirtualMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVirtualMFADeviceResponseBody> body{};

  DeleteVirtualMFADeviceResponse() {}

  explicit DeleteVirtualMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVirtualMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVirtualMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVirtualMFADeviceResponse() = default;
};
class DisableVirtualMFARequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};

  DisableVirtualMFARequest() {}

  explicit DisableVirtualMFARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~DisableVirtualMFARequest() = default;
};
class DisableVirtualMFAResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableVirtualMFAResponseBody() {}

  explicit DisableVirtualMFAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableVirtualMFAResponseBody() = default;
};
class DisableVirtualMFAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableVirtualMFAResponseBody> body{};

  DisableVirtualMFAResponse() {}

  explicit DisableVirtualMFAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableVirtualMFAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableVirtualMFAResponseBody>(model1);
      }
    }
  }


  virtual ~DisableVirtualMFAResponse() = default;
};
class GenerateCredentialReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};

  GenerateCredentialReportResponseBody() {}

  explicit GenerateCredentialReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~GenerateCredentialReportResponseBody() = default;
};
class GenerateCredentialReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateCredentialReportResponseBody> body{};

  GenerateCredentialReportResponse() {}

  explicit GenerateCredentialReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateCredentialReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateCredentialReportResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateCredentialReportResponse() = default;
};
class GetAccessKeyLastUsedRequest : public Darabonba::Model {
public:
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userPrincipalName{};

  GetAccessKeyLastUsedRequest() {}

  explicit GetAccessKeyLastUsedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~GetAccessKeyLastUsedRequest() = default;
};
class GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed : public Darabonba::Model {
public:
  shared_ptr<string> lastUsedDate{};

  GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed() {}

  explicit GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastUsedDate) {
      res["LastUsedDate"] = boost::any(*lastUsedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastUsedDate") != m.end() && !m["LastUsedDate"].empty()) {
      lastUsedDate = make_shared<string>(boost::any_cast<string>(m["LastUsedDate"]));
    }
  }


  virtual ~GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed() = default;
};
class GetAccessKeyLastUsedResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed> accessKeyLastUsed{};
  shared_ptr<string> requestId{};

  GetAccessKeyLastUsedResponseBody() {}

  explicit GetAccessKeyLastUsedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyLastUsed) {
      res["AccessKeyLastUsed"] = accessKeyLastUsed ? boost::any(accessKeyLastUsed->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyLastUsed") != m.end() && !m["AccessKeyLastUsed"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKeyLastUsed"].type()) {
        GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKeyLastUsed"]));
        accessKeyLastUsed = make_shared<GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccessKeyLastUsedResponseBody() = default;
};
class GetAccessKeyLastUsedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessKeyLastUsedResponseBody> body{};

  GetAccessKeyLastUsedResponse() {}

  explicit GetAccessKeyLastUsedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessKeyLastUsedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessKeyLastUsedResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessKeyLastUsedResponse() = default;
};
class GetAccountMFAInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isMFAEnable{};
  shared_ptr<string> requestId{};

  GetAccountMFAInfoResponseBody() {}

  explicit GetAccountMFAInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isMFAEnable) {
      res["IsMFAEnable"] = boost::any(*isMFAEnable);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsMFAEnable") != m.end() && !m["IsMFAEnable"].empty()) {
      isMFAEnable = make_shared<bool>(boost::any_cast<bool>(m["IsMFAEnable"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccountMFAInfoResponseBody() = default;
};
class GetAccountMFAInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountMFAInfoResponseBody> body{};

  GetAccountMFAInfoResponse() {}

  explicit GetAccountMFAInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountMFAInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountMFAInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountMFAInfoResponse() = default;
};
class GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo : public Darabonba::Model {
public:
  shared_ptr<bool> bindMfa{};
  shared_ptr<long> oldAkNum{};
  shared_ptr<long> rootWithAccessKey{};
  shared_ptr<long> subUser{};
  shared_ptr<long> subUserBindMfa{};
  shared_ptr<string> subUserPwdLevel{};
  shared_ptr<long> subUserWithOldAccessKey{};
  shared_ptr<long> subUserWithUnusedAccessKey{};
  shared_ptr<long> unusedAkNum{};

  GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo() {}

  explicit GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindMfa) {
      res["BindMfa"] = boost::any(*bindMfa);
    }
    if (oldAkNum) {
      res["OldAkNum"] = boost::any(*oldAkNum);
    }
    if (rootWithAccessKey) {
      res["RootWithAccessKey"] = boost::any(*rootWithAccessKey);
    }
    if (subUser) {
      res["SubUser"] = boost::any(*subUser);
    }
    if (subUserBindMfa) {
      res["SubUserBindMfa"] = boost::any(*subUserBindMfa);
    }
    if (subUserPwdLevel) {
      res["SubUserPwdLevel"] = boost::any(*subUserPwdLevel);
    }
    if (subUserWithOldAccessKey) {
      res["SubUserWithOldAccessKey"] = boost::any(*subUserWithOldAccessKey);
    }
    if (subUserWithUnusedAccessKey) {
      res["SubUserWithUnusedAccessKey"] = boost::any(*subUserWithUnusedAccessKey);
    }
    if (unusedAkNum) {
      res["UnusedAkNum"] = boost::any(*unusedAkNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindMfa") != m.end() && !m["BindMfa"].empty()) {
      bindMfa = make_shared<bool>(boost::any_cast<bool>(m["BindMfa"]));
    }
    if (m.find("OldAkNum") != m.end() && !m["OldAkNum"].empty()) {
      oldAkNum = make_shared<long>(boost::any_cast<long>(m["OldAkNum"]));
    }
    if (m.find("RootWithAccessKey") != m.end() && !m["RootWithAccessKey"].empty()) {
      rootWithAccessKey = make_shared<long>(boost::any_cast<long>(m["RootWithAccessKey"]));
    }
    if (m.find("SubUser") != m.end() && !m["SubUser"].empty()) {
      subUser = make_shared<long>(boost::any_cast<long>(m["SubUser"]));
    }
    if (m.find("SubUserBindMfa") != m.end() && !m["SubUserBindMfa"].empty()) {
      subUserBindMfa = make_shared<long>(boost::any_cast<long>(m["SubUserBindMfa"]));
    }
    if (m.find("SubUserPwdLevel") != m.end() && !m["SubUserPwdLevel"].empty()) {
      subUserPwdLevel = make_shared<string>(boost::any_cast<string>(m["SubUserPwdLevel"]));
    }
    if (m.find("SubUserWithOldAccessKey") != m.end() && !m["SubUserWithOldAccessKey"].empty()) {
      subUserWithOldAccessKey = make_shared<long>(boost::any_cast<long>(m["SubUserWithOldAccessKey"]));
    }
    if (m.find("SubUserWithUnusedAccessKey") != m.end() && !m["SubUserWithUnusedAccessKey"].empty()) {
      subUserWithUnusedAccessKey = make_shared<long>(boost::any_cast<long>(m["SubUserWithUnusedAccessKey"]));
    }
    if (m.find("UnusedAkNum") != m.end() && !m["UnusedAkNum"].empty()) {
      unusedAkNum = make_shared<long>(boost::any_cast<long>(m["UnusedAkNum"]));
    }
  }


  virtual ~GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo() = default;
};
class GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo : public Darabonba::Model {
public:
  shared_ptr<GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo> accountSecurityPracticeUserInfo{};
  shared_ptr<long> score{};

  GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo() {}

  explicit GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountSecurityPracticeUserInfo) {
      res["AccountSecurityPracticeUserInfo"] = accountSecurityPracticeUserInfo ? boost::any(accountSecurityPracticeUserInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountSecurityPracticeUserInfo") != m.end() && !m["AccountSecurityPracticeUserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountSecurityPracticeUserInfo"].type()) {
        GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountSecurityPracticeUserInfo"]));
        accountSecurityPracticeUserInfo = make_shared<GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo>(model1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
  }


  virtual ~GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo() = default;
};
class GetAccountSecurityPracticeReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo> accountSecurityPracticeInfo{};
  shared_ptr<string> requestId{};

  GetAccountSecurityPracticeReportResponseBody() {}

  explicit GetAccountSecurityPracticeReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountSecurityPracticeInfo) {
      res["AccountSecurityPracticeInfo"] = accountSecurityPracticeInfo ? boost::any(accountSecurityPracticeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountSecurityPracticeInfo") != m.end() && !m["AccountSecurityPracticeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountSecurityPracticeInfo"].type()) {
        GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountSecurityPracticeInfo"]));
        accountSecurityPracticeInfo = make_shared<GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccountSecurityPracticeReportResponseBody() = default;
};
class GetAccountSecurityPracticeReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountSecurityPracticeReportResponseBody> body{};

  GetAccountSecurityPracticeReportResponse() {}

  explicit GetAccountSecurityPracticeReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountSecurityPracticeReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountSecurityPracticeReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountSecurityPracticeReportResponse() = default;
};
class GetAccountSummaryResponseBodySummaryMap : public Darabonba::Model {
public:
  shared_ptr<long> accessKeysPerUserQuota{};
  shared_ptr<long> attachedPoliciesPerGroupQuota{};
  shared_ptr<long> attachedPoliciesPerRoleQuota{};
  shared_ptr<long> attachedPoliciesPerUserQuota{};
  shared_ptr<long> attachedSystemPoliciesPerGroupQuota{};
  shared_ptr<long> attachedSystemPoliciesPerRoleQuota{};
  shared_ptr<long> attachedSystemPoliciesPerUserQuota{};
  shared_ptr<long> groups{};
  shared_ptr<long> groupsPerUserQuota{};
  shared_ptr<long> groupsQuota{};
  shared_ptr<long> MFADevices{};
  shared_ptr<long> MFADevicesInUse{};
  shared_ptr<long> policies{};
  shared_ptr<long> policiesQuota{};
  shared_ptr<long> policySizeQuota{};
  shared_ptr<long> roles{};
  shared_ptr<long> rolesQuota{};
  shared_ptr<long> users{};
  shared_ptr<long> usersQuota{};
  shared_ptr<long> versionsPerPolicyQuota{};
  shared_ptr<long> virtualMFADevicesQuota{};

  GetAccountSummaryResponseBodySummaryMap() {}

  explicit GetAccountSummaryResponseBodySummaryMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeysPerUserQuota) {
      res["AccessKeysPerUserQuota"] = boost::any(*accessKeysPerUserQuota);
    }
    if (attachedPoliciesPerGroupQuota) {
      res["AttachedPoliciesPerGroupQuota"] = boost::any(*attachedPoliciesPerGroupQuota);
    }
    if (attachedPoliciesPerRoleQuota) {
      res["AttachedPoliciesPerRoleQuota"] = boost::any(*attachedPoliciesPerRoleQuota);
    }
    if (attachedPoliciesPerUserQuota) {
      res["AttachedPoliciesPerUserQuota"] = boost::any(*attachedPoliciesPerUserQuota);
    }
    if (attachedSystemPoliciesPerGroupQuota) {
      res["AttachedSystemPoliciesPerGroupQuota"] = boost::any(*attachedSystemPoliciesPerGroupQuota);
    }
    if (attachedSystemPoliciesPerRoleQuota) {
      res["AttachedSystemPoliciesPerRoleQuota"] = boost::any(*attachedSystemPoliciesPerRoleQuota);
    }
    if (attachedSystemPoliciesPerUserQuota) {
      res["AttachedSystemPoliciesPerUserQuota"] = boost::any(*attachedSystemPoliciesPerUserQuota);
    }
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    if (groupsPerUserQuota) {
      res["GroupsPerUserQuota"] = boost::any(*groupsPerUserQuota);
    }
    if (groupsQuota) {
      res["GroupsQuota"] = boost::any(*groupsQuota);
    }
    if (MFADevices) {
      res["MFADevices"] = boost::any(*MFADevices);
    }
    if (MFADevicesInUse) {
      res["MFADevicesInUse"] = boost::any(*MFADevicesInUse);
    }
    if (policies) {
      res["Policies"] = boost::any(*policies);
    }
    if (policiesQuota) {
      res["PoliciesQuota"] = boost::any(*policiesQuota);
    }
    if (policySizeQuota) {
      res["PolicySizeQuota"] = boost::any(*policySizeQuota);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (rolesQuota) {
      res["RolesQuota"] = boost::any(*rolesQuota);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    if (usersQuota) {
      res["UsersQuota"] = boost::any(*usersQuota);
    }
    if (versionsPerPolicyQuota) {
      res["VersionsPerPolicyQuota"] = boost::any(*versionsPerPolicyQuota);
    }
    if (virtualMFADevicesQuota) {
      res["VirtualMFADevicesQuota"] = boost::any(*virtualMFADevicesQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeysPerUserQuota") != m.end() && !m["AccessKeysPerUserQuota"].empty()) {
      accessKeysPerUserQuota = make_shared<long>(boost::any_cast<long>(m["AccessKeysPerUserQuota"]));
    }
    if (m.find("AttachedPoliciesPerGroupQuota") != m.end() && !m["AttachedPoliciesPerGroupQuota"].empty()) {
      attachedPoliciesPerGroupQuota = make_shared<long>(boost::any_cast<long>(m["AttachedPoliciesPerGroupQuota"]));
    }
    if (m.find("AttachedPoliciesPerRoleQuota") != m.end() && !m["AttachedPoliciesPerRoleQuota"].empty()) {
      attachedPoliciesPerRoleQuota = make_shared<long>(boost::any_cast<long>(m["AttachedPoliciesPerRoleQuota"]));
    }
    if (m.find("AttachedPoliciesPerUserQuota") != m.end() && !m["AttachedPoliciesPerUserQuota"].empty()) {
      attachedPoliciesPerUserQuota = make_shared<long>(boost::any_cast<long>(m["AttachedPoliciesPerUserQuota"]));
    }
    if (m.find("AttachedSystemPoliciesPerGroupQuota") != m.end() && !m["AttachedSystemPoliciesPerGroupQuota"].empty()) {
      attachedSystemPoliciesPerGroupQuota = make_shared<long>(boost::any_cast<long>(m["AttachedSystemPoliciesPerGroupQuota"]));
    }
    if (m.find("AttachedSystemPoliciesPerRoleQuota") != m.end() && !m["AttachedSystemPoliciesPerRoleQuota"].empty()) {
      attachedSystemPoliciesPerRoleQuota = make_shared<long>(boost::any_cast<long>(m["AttachedSystemPoliciesPerRoleQuota"]));
    }
    if (m.find("AttachedSystemPoliciesPerUserQuota") != m.end() && !m["AttachedSystemPoliciesPerUserQuota"].empty()) {
      attachedSystemPoliciesPerUserQuota = make_shared<long>(boost::any_cast<long>(m["AttachedSystemPoliciesPerUserQuota"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      groups = make_shared<long>(boost::any_cast<long>(m["Groups"]));
    }
    if (m.find("GroupsPerUserQuota") != m.end() && !m["GroupsPerUserQuota"].empty()) {
      groupsPerUserQuota = make_shared<long>(boost::any_cast<long>(m["GroupsPerUserQuota"]));
    }
    if (m.find("GroupsQuota") != m.end() && !m["GroupsQuota"].empty()) {
      groupsQuota = make_shared<long>(boost::any_cast<long>(m["GroupsQuota"]));
    }
    if (m.find("MFADevices") != m.end() && !m["MFADevices"].empty()) {
      MFADevices = make_shared<long>(boost::any_cast<long>(m["MFADevices"]));
    }
    if (m.find("MFADevicesInUse") != m.end() && !m["MFADevicesInUse"].empty()) {
      MFADevicesInUse = make_shared<long>(boost::any_cast<long>(m["MFADevicesInUse"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      policies = make_shared<long>(boost::any_cast<long>(m["Policies"]));
    }
    if (m.find("PoliciesQuota") != m.end() && !m["PoliciesQuota"].empty()) {
      policiesQuota = make_shared<long>(boost::any_cast<long>(m["PoliciesQuota"]));
    }
    if (m.find("PolicySizeQuota") != m.end() && !m["PolicySizeQuota"].empty()) {
      policySizeQuota = make_shared<long>(boost::any_cast<long>(m["PolicySizeQuota"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      roles = make_shared<long>(boost::any_cast<long>(m["Roles"]));
    }
    if (m.find("RolesQuota") != m.end() && !m["RolesQuota"].empty()) {
      rolesQuota = make_shared<long>(boost::any_cast<long>(m["RolesQuota"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<long>(boost::any_cast<long>(m["Users"]));
    }
    if (m.find("UsersQuota") != m.end() && !m["UsersQuota"].empty()) {
      usersQuota = make_shared<long>(boost::any_cast<long>(m["UsersQuota"]));
    }
    if (m.find("VersionsPerPolicyQuota") != m.end() && !m["VersionsPerPolicyQuota"].empty()) {
      versionsPerPolicyQuota = make_shared<long>(boost::any_cast<long>(m["VersionsPerPolicyQuota"]));
    }
    if (m.find("VirtualMFADevicesQuota") != m.end() && !m["VirtualMFADevicesQuota"].empty()) {
      virtualMFADevicesQuota = make_shared<long>(boost::any_cast<long>(m["VirtualMFADevicesQuota"]));
    }
  }


  virtual ~GetAccountSummaryResponseBodySummaryMap() = default;
};
class GetAccountSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAccountSummaryResponseBodySummaryMap> summaryMap{};

  GetAccountSummaryResponseBody() {}

  explicit GetAccountSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (summaryMap) {
      res["SummaryMap"] = summaryMap ? boost::any(summaryMap->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SummaryMap") != m.end() && !m["SummaryMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["SummaryMap"].type()) {
        GetAccountSummaryResponseBodySummaryMap model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SummaryMap"]));
        summaryMap = make_shared<GetAccountSummaryResponseBodySummaryMap>(model1);
      }
    }
  }


  virtual ~GetAccountSummaryResponseBody() = default;
};
class GetAccountSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountSummaryResponseBody> body{};

  GetAccountSummaryResponse() {}

  explicit GetAccountSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountSummaryResponse() = default;
};
class GetAppSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};

  GetAppSecretRequest() {}

  explicit GetAppSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
  }


  virtual ~GetAppSecretRequest() = default;
};
class GetAppSecretResponseBodyAppSecret : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};
  shared_ptr<string> appSecretValue{};
  shared_ptr<string> createDate{};

  GetAppSecretResponseBodyAppSecret() {}

  explicit GetAppSecretResponseBodyAppSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    if (appSecretValue) {
      res["AppSecretValue"] = boost::any(*appSecretValue);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
    if (m.find("AppSecretValue") != m.end() && !m["AppSecretValue"].empty()) {
      appSecretValue = make_shared<string>(boost::any_cast<string>(m["AppSecretValue"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~GetAppSecretResponseBodyAppSecret() = default;
};
class GetAppSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAppSecretResponseBodyAppSecret> appSecret{};
  shared_ptr<string> requestId{};

  GetAppSecretResponseBody() {}

  explicit GetAppSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecret) {
      res["AppSecret"] = appSecret ? boost::any(appSecret->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppSecret"].type()) {
        GetAppSecretResponseBodyAppSecret model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppSecret"]));
        appSecret = make_shared<GetAppSecretResponseBodyAppSecret>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAppSecretResponseBody() = default;
};
class GetAppSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppSecretResponseBody> body{};

  GetAppSecretResponse() {}

  explicit GetAppSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppSecretResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppSecretResponse() = default;
};
class GetApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetApplicationRequest() {}

  explicit GetApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetApplicationRequest() = default;
};
class GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() {}

  explicit GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() = default;
};
class GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope{};

  GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() {}

  explicit GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() = default;
};
class GetApplicationResponseBodyApplicationDelegatedScope : public Darabonba::Model {
public:
  shared_ptr<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes> predefinedScopes{};

  GetApplicationResponseBodyApplicationDelegatedScope() {}

  explicit GetApplicationResponseBodyApplicationDelegatedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes>(model1);
      }
    }
  }


  virtual ~GetApplicationResponseBodyApplicationDelegatedScope() = default;
};
class GetApplicationResponseBodyApplicationRedirectUris : public Darabonba::Model {
public:
  shared_ptr<vector<string>> redirectUri{};

  GetApplicationResponseBodyApplicationRedirectUris() {}

  explicit GetApplicationResponseBodyApplicationRedirectUris(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redirectUri) {
      res["RedirectUri"] = boost::any(*redirectUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RedirectUri") != m.end() && !m["RedirectUri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUri = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetApplicationResponseBodyApplicationRedirectUris() = default;
};
class GetApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<string> accountId{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> createDate{};
  shared_ptr<GetApplicationResponseBodyApplicationDelegatedScope> delegatedScope{};
  shared_ptr<string> displayName{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<GetApplicationResponseBodyApplicationRedirectUris> redirectUris{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<bool> secretRequired{};
  shared_ptr<string> updateDate{};

  GetApplicationResponseBodyApplication() {}

  explicit GetApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (delegatedScope) {
      res["DelegatedScope"] = delegatedScope ? boost::any(delegatedScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (redirectUris) {
      res["RedirectUris"] = redirectUris ? boost::any(redirectUris->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DelegatedScope") != m.end() && !m["DelegatedScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedScope"].type()) {
        GetApplicationResponseBodyApplicationDelegatedScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedScope"]));
        delegatedScope = make_shared<GetApplicationResponseBodyApplicationDelegatedScope>(model1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectUris"].type()) {
        GetApplicationResponseBodyApplicationRedirectUris model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectUris"]));
        redirectUris = make_shared<GetApplicationResponseBodyApplicationRedirectUris>(model1);
      }
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetApplicationResponseBodyApplication() = default;
};
class GetApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetApplicationResponseBodyApplication> application{};
  shared_ptr<string> requestId{};

  GetApplicationResponseBody() {}

  explicit GetApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        GetApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<GetApplicationResponseBodyApplication>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetApplicationResponseBody() = default;
};
class GetApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApplicationResponseBody> body{};

  GetApplicationResponse() {}

  explicit GetApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationResponse() = default;
};
class GetCredentialReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> generatedTime{};
  shared_ptr<string> requestId{};

  GetCredentialReportResponseBody() {}

  explicit GetCredentialReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (generatedTime) {
      res["GeneratedTime"] = boost::any(*generatedTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("GeneratedTime") != m.end() && !m["GeneratedTime"].empty()) {
      generatedTime = make_shared<string>(boost::any_cast<string>(m["GeneratedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCredentialReportResponseBody() = default;
};
class GetCredentialReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCredentialReportResponseBody> body{};

  GetCredentialReportResponse() {}

  explicit GetCredentialReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCredentialReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCredentialReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetCredentialReportResponse() = default;
};
class GetDefaultDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> defaultDomainName{};
  shared_ptr<string> requestId{};

  GetDefaultDomainResponseBody() {}

  explicit GetDefaultDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultDomainName) {
      res["DefaultDomainName"] = boost::any(*defaultDomainName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultDomainName") != m.end() && !m["DefaultDomainName"].empty()) {
      defaultDomainName = make_shared<string>(boost::any_cast<string>(m["DefaultDomainName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDefaultDomainResponseBody() = default;
};
class GetDefaultDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDefaultDomainResponseBody> body{};

  GetDefaultDomainResponse() {}

  explicit GetDefaultDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDefaultDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDefaultDomainResponseBody>(model1);
      }
    }
  }


  virtual ~GetDefaultDomainResponse() = default;
};
class GetGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};

  GetGroupRequest() {}

  explicit GetGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetGroupRequest() = default;
};
class GetGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> updateDate{};

  GetGroupResponseBodyGroup() {}

  explicit GetGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetGroupResponseBodyGroup() = default;
};
class GetGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  GetGroupResponseBody() {}

  explicit GetGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = group ? boost::any(group->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(map<string, boost::any>) == m["Group"].type()) {
        GetGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Group"]));
        group = make_shared<GetGroupResponseBodyGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetGroupResponseBody() = default;
};
class GetGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGroupResponseBody> body{};

  GetGroupResponse() {}

  explicit GetGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupResponse() = default;
};
class GetLoginProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};

  GetLoginProfileRequest() {}

  explicit GetLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~GetLoginProfileRequest() = default;
};
class GetLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
public:
  shared_ptr<string> lastLoginTime{};
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<string> status{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userPrincipalName{};

  GetLoginProfileResponseBodyLoginProfile() {}

  explicit GetLoginProfileResponseBodyLoginProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastLoginTime) {
      res["LastLoginTime"] = boost::any(*lastLoginTime);
    }
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastLoginTime") != m.end() && !m["LastLoginTime"].empty()) {
      lastLoginTime = make_shared<string>(boost::any_cast<string>(m["LastLoginTime"]));
    }
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~GetLoginProfileResponseBodyLoginProfile() = default;
};
class GetLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetLoginProfileResponseBodyLoginProfile> loginProfile{};
  shared_ptr<string> requestId{};

  GetLoginProfileResponseBody() {}

  explicit GetLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginProfile) {
      res["LoginProfile"] = loginProfile ? boost::any(loginProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginProfile") != m.end() && !m["LoginProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfile"].type()) {
        GetLoginProfileResponseBodyLoginProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfile"]));
        loginProfile = make_shared<GetLoginProfileResponseBodyLoginProfile>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLoginProfileResponseBody() = default;
};
class GetLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLoginProfileResponseBody> body{};

  GetLoginProfileResponse() {}

  explicit GetLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~GetLoginProfileResponse() = default;
};
class GetOIDCProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> OIDCProviderName{};

  GetOIDCProviderRequest() {}

  explicit GetOIDCProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
  }


  virtual ~GetOIDCProviderRequest() = default;
};
class GetOIDCProviderResponseBodyOIDCProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> clientIds{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> fingerprints{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> issuerUrl{};
  shared_ptr<string> OIDCProviderName{};
  shared_ptr<string> updateDate{};

  GetOIDCProviderResponseBodyOIDCProvider() {}

  explicit GetOIDCProviderResponseBodyOIDCProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fingerprints) {
      res["Fingerprints"] = boost::any(*fingerprints);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (issuerUrl) {
      res["IssuerUrl"] = boost::any(*issuerUrl);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fingerprints") != m.end() && !m["Fingerprints"].empty()) {
      fingerprints = make_shared<string>(boost::any_cast<string>(m["Fingerprints"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IssuerUrl") != m.end() && !m["IssuerUrl"].empty()) {
      issuerUrl = make_shared<string>(boost::any_cast<string>(m["IssuerUrl"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetOIDCProviderResponseBodyOIDCProvider() = default;
};
class GetOIDCProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetOIDCProviderResponseBodyOIDCProvider> OIDCProvider{};
  shared_ptr<string> requestId{};

  GetOIDCProviderResponseBody() {}

  explicit GetOIDCProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProvider) {
      res["OIDCProvider"] = OIDCProvider ? boost::any(OIDCProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProvider") != m.end() && !m["OIDCProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["OIDCProvider"].type()) {
        GetOIDCProviderResponseBodyOIDCProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OIDCProvider"]));
        OIDCProvider = make_shared<GetOIDCProviderResponseBodyOIDCProvider>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOIDCProviderResponseBody() = default;
};
class GetOIDCProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOIDCProviderResponseBody> body{};

  GetOIDCProviderResponse() {}

  explicit GetOIDCProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOIDCProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOIDCProviderResponseBody>(model1);
      }
    }
  }


  virtual ~GetOIDCProviderResponse() = default;
};
class GetPasswordPolicyResponseBodyPasswordPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> hardExpire{};
  shared_ptr<long> maxLoginAttemps{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<long> minimumPasswordDifferentCharacter{};
  shared_ptr<long> minimumPasswordLength{};
  shared_ptr<bool> passwordNotContainUserName{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<bool> requireLowercaseCharacters{};
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> requireUppercaseCharacters{};

  GetPasswordPolicyResponseBodyPasswordPolicy() {}

  explicit GetPasswordPolicyResponseBodyPasswordPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hardExpire) {
      res["HardExpire"] = boost::any(*hardExpire);
    }
    if (maxLoginAttemps) {
      res["MaxLoginAttemps"] = boost::any(*maxLoginAttemps);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (minimumPasswordDifferentCharacter) {
      res["MinimumPasswordDifferentCharacter"] = boost::any(*minimumPasswordDifferentCharacter);
    }
    if (minimumPasswordLength) {
      res["MinimumPasswordLength"] = boost::any(*minimumPasswordLength);
    }
    if (passwordNotContainUserName) {
      res["PasswordNotContainUserName"] = boost::any(*passwordNotContainUserName);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (requireLowercaseCharacters) {
      res["RequireLowercaseCharacters"] = boost::any(*requireLowercaseCharacters);
    }
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (requireUppercaseCharacters) {
      res["RequireUppercaseCharacters"] = boost::any(*requireUppercaseCharacters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HardExpire") != m.end() && !m["HardExpire"].empty()) {
      hardExpire = make_shared<bool>(boost::any_cast<bool>(m["HardExpire"]));
    }
    if (m.find("MaxLoginAttemps") != m.end() && !m["MaxLoginAttemps"].empty()) {
      maxLoginAttemps = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttemps"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("MinimumPasswordDifferentCharacter") != m.end() && !m["MinimumPasswordDifferentCharacter"].empty()) {
      minimumPasswordDifferentCharacter = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordDifferentCharacter"]));
    }
    if (m.find("MinimumPasswordLength") != m.end() && !m["MinimumPasswordLength"].empty()) {
      minimumPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordLength"]));
    }
    if (m.find("PasswordNotContainUserName") != m.end() && !m["PasswordNotContainUserName"].empty()) {
      passwordNotContainUserName = make_shared<bool>(boost::any_cast<bool>(m["PasswordNotContainUserName"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("RequireLowercaseCharacters") != m.end() && !m["RequireLowercaseCharacters"].empty()) {
      requireLowercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireLowercaseCharacters"]));
    }
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("RequireUppercaseCharacters") != m.end() && !m["RequireUppercaseCharacters"].empty()) {
      requireUppercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireUppercaseCharacters"]));
    }
  }


  virtual ~GetPasswordPolicyResponseBodyPasswordPolicy() = default;
};
class GetPasswordPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPasswordPolicyResponseBodyPasswordPolicy> passwordPolicy{};
  shared_ptr<string> requestId{};

  GetPasswordPolicyResponseBody() {}

  explicit GetPasswordPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordPolicy) {
      res["PasswordPolicy"] = passwordPolicy ? boost::any(passwordPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordPolicy") != m.end() && !m["PasswordPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordPolicy"].type()) {
        GetPasswordPolicyResponseBodyPasswordPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordPolicy"]));
        passwordPolicy = make_shared<GetPasswordPolicyResponseBodyPasswordPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPasswordPolicyResponseBody() = default;
};
class GetPasswordPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPasswordPolicyResponseBody> body{};

  GetPasswordPolicyResponse() {}

  explicit GetPasswordPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPasswordPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPasswordPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPasswordPolicyResponse() = default;
};
class GetSAMLProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> SAMLProviderName{};

  GetSAMLProviderRequest() {}

  explicit GetSAMLProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
  }


  virtual ~GetSAMLProviderRequest() = default;
};
class GetSAMLProviderResponseBodySAMLProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> encodedSAMLMetadataDocument{};
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> updateDate{};

  GetSAMLProviderResponseBodySAMLProvider() {}

  explicit GetSAMLProviderResponseBodySAMLProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encodedSAMLMetadataDocument) {
      res["EncodedSAMLMetadataDocument"] = boost::any(*encodedSAMLMetadataDocument);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncodedSAMLMetadataDocument") != m.end() && !m["EncodedSAMLMetadataDocument"].empty()) {
      encodedSAMLMetadataDocument = make_shared<string>(boost::any_cast<string>(m["EncodedSAMLMetadataDocument"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetSAMLProviderResponseBodySAMLProvider() = default;
};
class GetSAMLProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSAMLProviderResponseBodySAMLProvider> SAMLProvider{};

  GetSAMLProviderResponseBody() {}

  explicit GetSAMLProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLProvider) {
      res["SAMLProvider"] = SAMLProvider ? boost::any(SAMLProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLProvider") != m.end() && !m["SAMLProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLProvider"].type()) {
        GetSAMLProviderResponseBodySAMLProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLProvider"]));
        SAMLProvider = make_shared<GetSAMLProviderResponseBodySAMLProvider>(model1);
      }
    }
  }


  virtual ~GetSAMLProviderResponseBody() = default;
};
class GetSAMLProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSAMLProviderResponseBody> body{};

  GetSAMLProviderResponse() {}

  explicit GetSAMLProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSAMLProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSAMLProviderResponseBody>(model1);
      }
    }
  }


  virtual ~GetSAMLProviderResponse() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManageAccessKeys{};

  GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManageAccessKeys) {
      res["AllowUserToManageAccessKeys"] = boost::any(*allowUserToManageAccessKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManageAccessKeys") != m.end() && !m["AllowUserToManageAccessKeys"].empty()) {
      allowUserToManageAccessKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageAccessKeys"]));
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToChangePassword{};
  shared_ptr<bool> enableSaveMFATicket{};
  shared_ptr<string> loginNetworkMasks{};
  shared_ptr<long> loginSessionDuration{};
  shared_ptr<string> MFAOperationForLogin{};
  shared_ptr<string> operationForRiskLogin{};

  GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToChangePassword) {
      res["AllowUserToChangePassword"] = boost::any(*allowUserToChangePassword);
    }
    if (enableSaveMFATicket) {
      res["EnableSaveMFATicket"] = boost::any(*enableSaveMFATicket);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    if (loginSessionDuration) {
      res["LoginSessionDuration"] = boost::any(*loginSessionDuration);
    }
    if (MFAOperationForLogin) {
      res["MFAOperationForLogin"] = boost::any(*MFAOperationForLogin);
    }
    if (operationForRiskLogin) {
      res["OperationForRiskLogin"] = boost::any(*operationForRiskLogin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToChangePassword") != m.end() && !m["AllowUserToChangePassword"].empty()) {
      allowUserToChangePassword = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToChangePassword"]));
    }
    if (m.find("EnableSaveMFATicket") != m.end() && !m["EnableSaveMFATicket"].empty()) {
      enableSaveMFATicket = make_shared<bool>(boost::any_cast<bool>(m["EnableSaveMFATicket"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
    if (m.find("LoginSessionDuration") != m.end() && !m["LoginSessionDuration"].empty()) {
      loginSessionDuration = make_shared<long>(boost::any_cast<long>(m["LoginSessionDuration"]));
    }
    if (m.find("MFAOperationForLogin") != m.end() && !m["MFAOperationForLogin"].empty()) {
      MFAOperationForLogin = make_shared<string>(boost::any_cast<string>(m["MFAOperationForLogin"]));
    }
    if (m.find("OperationForRiskLogin") != m.end() && !m["OperationForRiskLogin"].empty()) {
      operationForRiskLogin = make_shared<string>(boost::any_cast<string>(m["OperationForRiskLogin"]));
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManageMFADevices{};

  GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManageMFADevices) {
      res["AllowUserToManageMFADevices"] = boost::any(*allowUserToManageMFADevices);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManageMFADevices") != m.end() && !m["AllowUserToManageMFADevices"].empty()) {
      allowUserToManageMFADevices = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageMFADevices"]));
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManagePersonalDingTalk{};

  GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManagePersonalDingTalk) {
      res["AllowUserToManagePersonalDingTalk"] = boost::any(*allowUserToManagePersonalDingTalk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManagePersonalDingTalk") != m.end() && !m["AllowUserToManagePersonalDingTalk"].empty()) {
      allowUserToManagePersonalDingTalk = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManagePersonalDingTalk"]));
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreference : public Darabonba::Model {
public:
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference> accessKeyPreference{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference> loginProfilePreference{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference> MFAPreference{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference> personalInfoPreference{};

  GetSecurityPreferenceResponseBodySecurityPreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyPreference) {
      res["AccessKeyPreference"] = accessKeyPreference ? boost::any(accessKeyPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loginProfilePreference) {
      res["LoginProfilePreference"] = loginProfilePreference ? boost::any(loginProfilePreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (MFAPreference) {
      res["MFAPreference"] = MFAPreference ? boost::any(MFAPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (personalInfoPreference) {
      res["PersonalInfoPreference"] = personalInfoPreference ? boost::any(personalInfoPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyPreference") != m.end() && !m["AccessKeyPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKeyPreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKeyPreference"]));
        accessKeyPreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference>(model1);
      }
    }
    if (m.find("LoginProfilePreference") != m.end() && !m["LoginProfilePreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfilePreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfilePreference"]));
        loginProfilePreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference>(model1);
      }
    }
    if (m.find("MFAPreference") != m.end() && !m["MFAPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["MFAPreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MFAPreference"]));
        MFAPreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference>(model1);
      }
    }
    if (m.find("PersonalInfoPreference") != m.end() && !m["PersonalInfoPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["PersonalInfoPreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PersonalInfoPreference"]));
        personalInfoPreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference>(model1);
      }
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreference() = default;
};
class GetSecurityPreferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreference> securityPreference{};

  GetSecurityPreferenceResponseBody() {}

  explicit GetSecurityPreferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityPreference) {
      res["SecurityPreference"] = securityPreference ? boost::any(securityPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityPreference") != m.end() && !m["SecurityPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityPreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityPreference"]));
        securityPreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreference>(model1);
      }
    }
  }


  virtual ~GetSecurityPreferenceResponseBody() = default;
};
class GetSecurityPreferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSecurityPreferenceResponseBody> body{};

  GetSecurityPreferenceResponse() {}

  explicit GetSecurityPreferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSecurityPreferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecurityPreferenceResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecurityPreferenceResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyUserTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetUserResponseBodyUserTagsTag() {}

  explicit GetUserResponseBodyUserTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~GetUserResponseBodyUserTagsTag() = default;
};
class GetUserResponseBodyUserTags : public Darabonba::Model {
public:
  shared_ptr<vector<GetUserResponseBodyUserTagsTag>> tag{};

  GetUserResponseBodyUserTags() {}

  explicit GetUserResponseBodyUserTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<GetUserResponseBodyUserTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyUserTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<GetUserResponseBodyUserTagsTag>>(expect1);
      }
    }
  }


  virtual ~GetUserResponseBodyUserTags() = default;
};
class GetUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> lastLoginDate{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> provisionType{};
  shared_ptr<GetUserResponseBodyUserTags> tags{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  GetUserResponseBodyUser() {}

  explicit GetUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lastLoginDate) {
      res["LastLoginDate"] = boost::any(*lastLoginDate);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("LastLoginDate") != m.end() && !m["LastLoginDate"].empty()) {
      lastLoginDate = make_shared<string>(boost::any_cast<string>(m["LastLoginDate"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        GetUserResponseBodyUserTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<GetUserResponseBodyUserTags>(model1);
      }
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~GetUserResponseBodyUser() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserResponseBodyUser> user{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        GetUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<GetUserResponseBodyUser>(model1);
      }
    }
  }


  virtual ~GetUserResponseBody() = default;
};
class GetUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResponse() = default;
};
class GetUserMFAInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};

  GetUserMFAInfoRequest() {}

  explicit GetUserMFAInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~GetUserMFAInfoRequest() = default;
};
class GetUserMFAInfoResponseBodyMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};
  shared_ptr<string> type{};

  GetUserMFAInfoResponseBodyMFADevice() {}

  explicit GetUserMFAInfoResponseBodyMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetUserMFAInfoResponseBodyMFADevice() = default;
};
class GetUserMFAInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isMFAEnable{};
  shared_ptr<GetUserMFAInfoResponseBodyMFADevice> MFADevice{};
  shared_ptr<string> requestId{};

  GetUserMFAInfoResponseBody() {}

  explicit GetUserMFAInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isMFAEnable) {
      res["IsMFAEnable"] = boost::any(*isMFAEnable);
    }
    if (MFADevice) {
      res["MFADevice"] = MFADevice ? boost::any(MFADevice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsMFAEnable") != m.end() && !m["IsMFAEnable"].empty()) {
      isMFAEnable = make_shared<bool>(boost::any_cast<bool>(m["IsMFAEnable"]));
    }
    if (m.find("MFADevice") != m.end() && !m["MFADevice"].empty()) {
      if (typeid(map<string, boost::any>) == m["MFADevice"].type()) {
        GetUserMFAInfoResponseBodyMFADevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MFADevice"]));
        MFADevice = make_shared<GetUserMFAInfoResponseBodyMFADevice>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserMFAInfoResponseBody() = default;
};
class GetUserMFAInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserMFAInfoResponseBody> body{};

  GetUserMFAInfoResponse() {}

  explicit GetUserMFAInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserMFAInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserMFAInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserMFAInfoResponse() = default;
};
class GetUserSsoSettingsResponseBodyUserSsoSettings : public Darabonba::Model {
public:
  shared_ptr<string> auxiliaryDomain{};
  shared_ptr<string> metadataDocument{};
  shared_ptr<bool> ssoEnabled{};

  GetUserSsoSettingsResponseBodyUserSsoSettings() {}

  explicit GetUserSsoSettingsResponseBodyUserSsoSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auxiliaryDomain) {
      res["AuxiliaryDomain"] = boost::any(*auxiliaryDomain);
    }
    if (metadataDocument) {
      res["MetadataDocument"] = boost::any(*metadataDocument);
    }
    if (ssoEnabled) {
      res["SsoEnabled"] = boost::any(*ssoEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuxiliaryDomain") != m.end() && !m["AuxiliaryDomain"].empty()) {
      auxiliaryDomain = make_shared<string>(boost::any_cast<string>(m["AuxiliaryDomain"]));
    }
    if (m.find("MetadataDocument") != m.end() && !m["MetadataDocument"].empty()) {
      metadataDocument = make_shared<string>(boost::any_cast<string>(m["MetadataDocument"]));
    }
    if (m.find("SsoEnabled") != m.end() && !m["SsoEnabled"].empty()) {
      ssoEnabled = make_shared<bool>(boost::any_cast<bool>(m["SsoEnabled"]));
    }
  }


  virtual ~GetUserSsoSettingsResponseBodyUserSsoSettings() = default;
};
class GetUserSsoSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserSsoSettingsResponseBodyUserSsoSettings> userSsoSettings{};

  GetUserSsoSettingsResponseBody() {}

  explicit GetUserSsoSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userSsoSettings) {
      res["UserSsoSettings"] = userSsoSettings ? boost::any(userSsoSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserSsoSettings") != m.end() && !m["UserSsoSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserSsoSettings"].type()) {
        GetUserSsoSettingsResponseBodyUserSsoSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserSsoSettings"]));
        userSsoSettings = make_shared<GetUserSsoSettingsResponseBodyUserSsoSettings>(model1);
      }
    }
  }


  virtual ~GetUserSsoSettingsResponseBody() = default;
};
class GetUserSsoSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserSsoSettingsResponseBody> body{};

  GetUserSsoSettingsResponse() {}

  explicit GetUserSsoSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserSsoSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserSsoSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserSsoSettingsResponse() = default;
};
class ListAccessKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};

  ListAccessKeysRequest() {}

  explicit ListAccessKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~ListAccessKeysRequest() = default;
};
class ListAccessKeysResponseBodyAccessKeysAccessKey : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> status{};
  shared_ptr<string> updateDate{};

  ListAccessKeysResponseBodyAccessKeysAccessKey() {}

  explicit ListAccessKeysResponseBodyAccessKeysAccessKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListAccessKeysResponseBodyAccessKeysAccessKey() = default;
};
class ListAccessKeysResponseBodyAccessKeys : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccessKeysResponseBodyAccessKeysAccessKey>> accessKey{};

  ListAccessKeysResponseBodyAccessKeys() {}

  explicit ListAccessKeysResponseBodyAccessKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      vector<boost::any> temp1;
      for(auto item1:*accessKey){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessKey"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessKey"].type()) {
        vector<ListAccessKeysResponseBodyAccessKeysAccessKey> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessKey"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessKeysResponseBodyAccessKeysAccessKey model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessKey = make_shared<vector<ListAccessKeysResponseBodyAccessKeysAccessKey>>(expect1);
      }
    }
  }


  virtual ~ListAccessKeysResponseBodyAccessKeys() = default;
};
class ListAccessKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAccessKeysResponseBodyAccessKeys> accessKeys{};
  shared_ptr<string> requestId{};

  ListAccessKeysResponseBody() {}

  explicit ListAccessKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeys) {
      res["AccessKeys"] = accessKeys ? boost::any(accessKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeys") != m.end() && !m["AccessKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKeys"].type()) {
        ListAccessKeysResponseBodyAccessKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKeys"]));
        accessKeys = make_shared<ListAccessKeysResponseBodyAccessKeys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAccessKeysResponseBody() = default;
};
class ListAccessKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessKeysResponseBody> body{};

  ListAccessKeysResponse() {}

  explicit ListAccessKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessKeysResponse() = default;
};
class ListAppSecretIdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  ListAppSecretIdsRequest() {}

  explicit ListAppSecretIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAppSecretIdsRequest() = default;
};
class ListAppSecretIdsResponseBodyAppSecretsAppSecret : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};
  shared_ptr<string> createDate{};

  ListAppSecretIdsResponseBodyAppSecretsAppSecret() {}

  explicit ListAppSecretIdsResponseBodyAppSecretsAppSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~ListAppSecretIdsResponseBodyAppSecretsAppSecret() = default;
};
class ListAppSecretIdsResponseBodyAppSecrets : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppSecretIdsResponseBodyAppSecretsAppSecret>> appSecret{};

  ListAppSecretIdsResponseBodyAppSecrets() {}

  explicit ListAppSecretIdsResponseBodyAppSecrets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecret) {
      vector<boost::any> temp1;
      for(auto item1:*appSecret){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppSecret"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      if (typeid(vector<boost::any>) == m["AppSecret"].type()) {
        vector<ListAppSecretIdsResponseBodyAppSecretsAppSecret> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppSecret"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppSecretIdsResponseBodyAppSecretsAppSecret model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appSecret = make_shared<vector<ListAppSecretIdsResponseBodyAppSecretsAppSecret>>(expect1);
      }
    }
  }


  virtual ~ListAppSecretIdsResponseBodyAppSecrets() = default;
};
class ListAppSecretIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAppSecretIdsResponseBodyAppSecrets> appSecrets{};
  shared_ptr<string> requestId{};

  ListAppSecretIdsResponseBody() {}

  explicit ListAppSecretIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecrets) {
      res["AppSecrets"] = appSecrets ? boost::any(appSecrets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecrets") != m.end() && !m["AppSecrets"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppSecrets"].type()) {
        ListAppSecretIdsResponseBodyAppSecrets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppSecrets"]));
        appSecrets = make_shared<ListAppSecretIdsResponseBodyAppSecrets>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAppSecretIdsResponseBody() = default;
};
class ListAppSecretIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppSecretIdsResponseBody> body{};

  ListAppSecretIdsResponse() {}

  explicit ListAppSecretIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppSecretIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppSecretIdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppSecretIdsResponse() = default;
};
class ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope() {}

  explicit ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope() = default;
};
class ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope{};

  ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes() {}

  explicit ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes() = default;
};
class ListApplicationsResponseBodyApplicationsApplicationDelegatedScope : public Darabonba::Model {
public:
  shared_ptr<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes> predefinedScopes{};

  ListApplicationsResponseBodyApplicationsApplicationDelegatedScope() {}

  explicit ListApplicationsResponseBodyApplicationsApplicationDelegatedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes>(model1);
      }
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplicationDelegatedScope() = default;
};
class ListApplicationsResponseBodyApplicationsApplicationRedirectUris : public Darabonba::Model {
public:
  shared_ptr<vector<string>> redirectUri{};

  ListApplicationsResponseBodyApplicationsApplicationRedirectUris() {}

  explicit ListApplicationsResponseBodyApplicationsApplicationRedirectUris(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redirectUri) {
      res["RedirectUri"] = boost::any(*redirectUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RedirectUri") != m.end() && !m["RedirectUri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUri = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplicationRedirectUris() = default;
};
class ListApplicationsResponseBodyApplicationsApplication : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<string> accountId{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> createDate{};
  shared_ptr<ListApplicationsResponseBodyApplicationsApplicationDelegatedScope> delegatedScope{};
  shared_ptr<string> displayName{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<ListApplicationsResponseBodyApplicationsApplicationRedirectUris> redirectUris{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<bool> secretRequired{};
  shared_ptr<string> updateDate{};

  ListApplicationsResponseBodyApplicationsApplication() {}

  explicit ListApplicationsResponseBodyApplicationsApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (delegatedScope) {
      res["DelegatedScope"] = delegatedScope ? boost::any(delegatedScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (redirectUris) {
      res["RedirectUris"] = redirectUris ? boost::any(redirectUris->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DelegatedScope") != m.end() && !m["DelegatedScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedScope"].type()) {
        ListApplicationsResponseBodyApplicationsApplicationDelegatedScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedScope"]));
        delegatedScope = make_shared<ListApplicationsResponseBodyApplicationsApplicationDelegatedScope>(model1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectUris"].type()) {
        ListApplicationsResponseBodyApplicationsApplicationRedirectUris model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectUris"]));
        redirectUris = make_shared<ListApplicationsResponseBodyApplicationsApplicationRedirectUris>(model1);
      }
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplication() = default;
};
class ListApplicationsResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsResponseBodyApplicationsApplication>> application{};

  ListApplicationsResponseBodyApplications() {}

  explicit ListApplicationsResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      vector<boost::any> temp1;
      for(auto item1:*application){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Application"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(vector<boost::any>) == m["Application"].type()) {
        vector<ListApplicationsResponseBodyApplicationsApplication> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Application"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsResponseBodyApplicationsApplication model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        application = make_shared<vector<ListApplicationsResponseBodyApplicationsApplication>>(expect1);
      }
    }
  }


  virtual ~ListApplicationsResponseBodyApplications() = default;
};
class ListApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListApplicationsResponseBodyApplications> applications{};
  shared_ptr<string> requestId{};

  ListApplicationsResponseBody() {}

  explicit ListApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      res["Applications"] = applications ? boost::any(applications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applications"].type()) {
        ListApplicationsResponseBodyApplications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applications"]));
        applications = make_shared<ListApplicationsResponseBodyApplications>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListApplicationsResponseBody() = default;
};
class ListApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationsResponseBody> body{};

  ListApplicationsResponse() {}

  explicit ListApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationsResponse() = default;
};
class ListGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};

  ListGroupsRequest() {}

  explicit ListGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListGroupsRequest() = default;
};
class ListGroupsResponseBodyGroupsGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> updateDate{};

  ListGroupsResponseBodyGroupsGroup() {}

  explicit ListGroupsResponseBodyGroupsGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListGroupsResponseBodyGroupsGroup() = default;
};
class ListGroupsResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsResponseBodyGroupsGroup>> group{};

  ListGroupsResponseBodyGroups() {}

  explicit ListGroupsResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      vector<boost::any> temp1;
      for(auto item1:*group){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Group"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(vector<boost::any>) == m["Group"].type()) {
        vector<ListGroupsResponseBodyGroupsGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Group"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsResponseBodyGroupsGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        group = make_shared<vector<ListGroupsResponseBodyGroupsGroup>>(expect1);
      }
    }
  }


  virtual ~ListGroupsResponseBodyGroups() = default;
};
class ListGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListGroupsResponseBodyGroups> groups{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};

  ListGroupsResponseBody() {}

  explicit ListGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      res["Groups"] = groups ? boost::any(groups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Groups"].type()) {
        ListGroupsResponseBodyGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Groups"]));
        groups = make_shared<ListGroupsResponseBodyGroups>(model1);
      }
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGroupsResponseBody() = default;
};
class ListGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupsResponseBody> body{};

  ListGroupsResponse() {}

  explicit ListGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsResponse() = default;
};
class ListGroupsForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};

  ListGroupsForUserRequest() {}

  explicit ListGroupsForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~ListGroupsForUserRequest() = default;
};
class ListGroupsForUserResponseBodyGroupsGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> displayName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> joinDate{};

  ListGroupsForUserResponseBodyGroupsGroup() {}

  explicit ListGroupsForUserResponseBodyGroupsGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (joinDate) {
      res["JoinDate"] = boost::any(*joinDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("JoinDate") != m.end() && !m["JoinDate"].empty()) {
      joinDate = make_shared<string>(boost::any_cast<string>(m["JoinDate"]));
    }
  }


  virtual ~ListGroupsForUserResponseBodyGroupsGroup() = default;
};
class ListGroupsForUserResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsForUserResponseBodyGroupsGroup>> group{};

  ListGroupsForUserResponseBodyGroups() {}

  explicit ListGroupsForUserResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      vector<boost::any> temp1;
      for(auto item1:*group){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Group"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(vector<boost::any>) == m["Group"].type()) {
        vector<ListGroupsForUserResponseBodyGroupsGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Group"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsForUserResponseBodyGroupsGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        group = make_shared<vector<ListGroupsForUserResponseBodyGroupsGroup>>(expect1);
      }
    }
  }


  virtual ~ListGroupsForUserResponseBodyGroups() = default;
};
class ListGroupsForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListGroupsForUserResponseBodyGroups> groups{};
  shared_ptr<string> requestId{};

  ListGroupsForUserResponseBody() {}

  explicit ListGroupsForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      res["Groups"] = groups ? boost::any(groups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Groups"].type()) {
        ListGroupsForUserResponseBodyGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Groups"]));
        groups = make_shared<ListGroupsForUserResponseBodyGroups>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGroupsForUserResponseBody() = default;
};
class ListGroupsForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupsForUserResponseBody> body{};

  ListGroupsForUserResponse() {}

  explicit ListGroupsForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupsForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsForUserResponse() = default;
};
class ListOIDCProvidersRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};

  ListOIDCProvidersRequest() {}

  explicit ListOIDCProvidersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListOIDCProvidersRequest() = default;
};
class ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> clientIds{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> fingerprints{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> issuerUrl{};
  shared_ptr<string> OIDCProviderName{};
  shared_ptr<string> updateDate{};

  ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider() {}

  explicit ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fingerprints) {
      res["Fingerprints"] = boost::any(*fingerprints);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (issuerUrl) {
      res["IssuerUrl"] = boost::any(*issuerUrl);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fingerprints") != m.end() && !m["Fingerprints"].empty()) {
      fingerprints = make_shared<string>(boost::any_cast<string>(m["Fingerprints"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IssuerUrl") != m.end() && !m["IssuerUrl"].empty()) {
      issuerUrl = make_shared<string>(boost::any_cast<string>(m["IssuerUrl"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider() = default;
};
class ListOIDCProvidersResponseBodyOIDCProviders : public Darabonba::Model {
public:
  shared_ptr<vector<ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider>> OIDCProvider{};

  ListOIDCProvidersResponseBodyOIDCProviders() {}

  explicit ListOIDCProvidersResponseBodyOIDCProviders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProvider) {
      vector<boost::any> temp1;
      for(auto item1:*OIDCProvider){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OIDCProvider"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProvider") != m.end() && !m["OIDCProvider"].empty()) {
      if (typeid(vector<boost::any>) == m["OIDCProvider"].type()) {
        vector<ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OIDCProvider"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        OIDCProvider = make_shared<vector<ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider>>(expect1);
      }
    }
  }


  virtual ~ListOIDCProvidersResponseBodyOIDCProviders() = default;
};
class ListOIDCProvidersResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<ListOIDCProvidersResponseBodyOIDCProviders> OIDCProviders{};
  shared_ptr<string> requestId{};

  ListOIDCProvidersResponseBody() {}

  explicit ListOIDCProvidersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (OIDCProviders) {
      res["OIDCProviders"] = OIDCProviders ? boost::any(OIDCProviders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("OIDCProviders") != m.end() && !m["OIDCProviders"].empty()) {
      if (typeid(map<string, boost::any>) == m["OIDCProviders"].type()) {
        ListOIDCProvidersResponseBodyOIDCProviders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OIDCProviders"]));
        OIDCProviders = make_shared<ListOIDCProvidersResponseBodyOIDCProviders>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListOIDCProvidersResponseBody() = default;
};
class ListOIDCProvidersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOIDCProvidersResponseBody> body{};

  ListOIDCProvidersResponse() {}

  explicit ListOIDCProvidersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOIDCProvidersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOIDCProvidersResponseBody>(model1);
      }
    }
  }


  virtual ~ListOIDCProvidersResponse() = default;
};
class ListPredefinedScopesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};

  ListPredefinedScopesRequest() {}

  explicit ListPredefinedScopesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
  }


  virtual ~ListPredefinedScopesRequest() = default;
};
class ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope() {}

  explicit ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope() = default;
};
class ListPredefinedScopesResponseBodyPredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope>> predefinedScope{};

  ListPredefinedScopesResponseBodyPredefinedScopes() {}

  explicit ListPredefinedScopesResponseBodyPredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~ListPredefinedScopesResponseBodyPredefinedScopes() = default;
};
class ListPredefinedScopesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPredefinedScopesResponseBodyPredefinedScopes> predefinedScopes{};
  shared_ptr<string> requestId{};

  ListPredefinedScopesResponseBody() {}

  explicit ListPredefinedScopesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        ListPredefinedScopesResponseBodyPredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<ListPredefinedScopesResponseBodyPredefinedScopes>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPredefinedScopesResponseBody() = default;
};
class ListPredefinedScopesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPredefinedScopesResponseBody> body{};

  ListPredefinedScopesResponse() {}

  explicit ListPredefinedScopesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPredefinedScopesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPredefinedScopesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPredefinedScopesResponse() = default;
};
class ListSAMLProvidersRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};

  ListSAMLProvidersRequest() {}

  explicit ListSAMLProvidersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListSAMLProvidersRequest() = default;
};
class ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> updateDate{};

  ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider() {}

  explicit ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider() = default;
};
class ListSAMLProvidersResponseBodySAMLProviders : public Darabonba::Model {
public:
  shared_ptr<vector<ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider>> SAMLProvider{};

  ListSAMLProvidersResponseBodySAMLProviders() {}

  explicit ListSAMLProvidersResponseBodySAMLProviders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SAMLProvider) {
      vector<boost::any> temp1;
      for(auto item1:*SAMLProvider){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SAMLProvider"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SAMLProvider") != m.end() && !m["SAMLProvider"].empty()) {
      if (typeid(vector<boost::any>) == m["SAMLProvider"].type()) {
        vector<ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SAMLProvider"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        SAMLProvider = make_shared<vector<ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider>>(expect1);
      }
    }
  }


  virtual ~ListSAMLProvidersResponseBodySAMLProviders() = default;
};
class ListSAMLProvidersResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};
  shared_ptr<ListSAMLProvidersResponseBodySAMLProviders> SAMLProviders{};

  ListSAMLProvidersResponseBody() {}

  explicit ListSAMLProvidersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLProviders) {
      res["SAMLProviders"] = SAMLProviders ? boost::any(SAMLProviders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLProviders") != m.end() && !m["SAMLProviders"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLProviders"].type()) {
        ListSAMLProvidersResponseBodySAMLProviders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLProviders"]));
        SAMLProviders = make_shared<ListSAMLProvidersResponseBodySAMLProviders>(model1);
      }
    }
  }


  virtual ~ListSAMLProvidersResponseBody() = default;
};
class ListSAMLProvidersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSAMLProvidersResponseBody> body{};

  ListSAMLProvidersResponse() {}

  explicit ListSAMLProvidersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSAMLProvidersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSAMLProvidersResponseBody>(model1);
      }
    }
  }


  virtual ~ListSAMLProvidersResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> resourcePrincipalName{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourcePrincipalName) {
      res["ResourcePrincipalName"] = boost::any(*resourcePrincipalName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourcePrincipalName") != m.end() && !m["ResourcePrincipalName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourcePrincipalName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourcePrincipalName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourcePrincipalName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListUserBasicInfosRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListUserBasicInfosRequestTag() {}

  explicit ListUserBasicInfosRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListUserBasicInfosRequestTag() = default;
};
class ListUserBasicInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};
  shared_ptr<vector<ListUserBasicInfosRequestTag>> tag{};

  ListUserBasicInfosRequest() {}

  explicit ListUserBasicInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListUserBasicInfosRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserBasicInfosRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListUserBasicInfosRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListUserBasicInfosRequest() = default;
};
class ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTagsTag() {}

  explicit ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTagsTag() = default;
};
class ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTagsTag>> tag{};

  ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTags() {}

  explicit ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTags() = default;
};
class ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTags> tags{};
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo() {}

  explicit ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfoTags>(model1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo() = default;
};
class ListUserBasicInfosResponseBodyUserBasicInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo>> userBasicInfo{};

  ListUserBasicInfosResponseBodyUserBasicInfos() {}

  explicit ListUserBasicInfosResponseBodyUserBasicInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*userBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserBasicInfo") != m.end() && !m["UserBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["UserBasicInfo"].type()) {
        vector<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userBasicInfo = make_shared<vector<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo>>(expect1);
      }
    }
  }


  virtual ~ListUserBasicInfosResponseBodyUserBasicInfos() = default;
};
class ListUserBasicInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};
  shared_ptr<ListUserBasicInfosResponseBodyUserBasicInfos> userBasicInfos{};

  ListUserBasicInfosResponseBody() {}

  explicit ListUserBasicInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userBasicInfos) {
      res["UserBasicInfos"] = userBasicInfos ? boost::any(userBasicInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserBasicInfos") != m.end() && !m["UserBasicInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserBasicInfos"].type()) {
        ListUserBasicInfosResponseBodyUserBasicInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserBasicInfos"]));
        userBasicInfos = make_shared<ListUserBasicInfosResponseBodyUserBasicInfos>(model1);
      }
    }
  }


  virtual ~ListUserBasicInfosResponseBody() = default;
};
class ListUserBasicInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserBasicInfosResponseBody> body{};

  ListUserBasicInfosResponse() {}

  explicit ListUserBasicInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserBasicInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserBasicInfosResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserBasicInfosResponse() = default;
};
class ListUsersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListUsersRequestTag() {}

  explicit ListUsersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListUsersRequestTag() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};
  shared_ptr<vector<ListUsersRequestTag>> tag{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListUsersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListUsersRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyUsersUserTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListUsersResponseBodyUsersUserTagsTag() {}

  explicit ListUsersResponseBodyUsersUserTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListUsersResponseBodyUsersUserTagsTag() = default;
};
class ListUsersResponseBodyUsersUserTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersResponseBodyUsersUserTagsTag>> tag{};

  ListUsersResponseBodyUsersUserTags() {}

  explicit ListUsersResponseBodyUsersUserTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListUsersResponseBodyUsersUserTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyUsersUserTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListUsersResponseBodyUsersUserTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBodyUsersUserTags() = default;
};
class ListUsersResponseBodyUsersUser : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> lastLoginDate{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> provisionType{};
  shared_ptr<ListUsersResponseBodyUsersUserTags> tags{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  ListUsersResponseBodyUsersUser() {}

  explicit ListUsersResponseBodyUsersUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lastLoginDate) {
      res["LastLoginDate"] = boost::any(*lastLoginDate);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("LastLoginDate") != m.end() && !m["LastLoginDate"].empty()) {
      lastLoginDate = make_shared<string>(boost::any_cast<string>(m["LastLoginDate"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListUsersResponseBodyUsersUserTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListUsersResponseBodyUsersUserTags>(model1);
      }
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~ListUsersResponseBodyUsersUser() = default;
};
class ListUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersResponseBodyUsersUser>> user{};

  ListUsersResponseBodyUsers() {}

  explicit ListUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      vector<boost::any> temp1;
      for(auto item1:*user){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["User"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<ListUsersResponseBodyUsersUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyUsersUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ListUsersResponseBodyUsersUser>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBodyUsers() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};
  shared_ptr<ListUsersResponseBodyUsers> users{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(map<string, boost::any>) == m["Users"].type()) {
        ListUsersResponseBodyUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Users"]));
        users = make_shared<ListUsersResponseBodyUsers>(model1);
      }
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersResponse() = default;
};
class ListUsersForGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};

  ListUsersForGroupRequest() {}

  explicit ListUsersForGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListUsersForGroupRequest() = default;
};
class ListUsersForGroupResponseBodyUsersUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> joinDate{};
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  ListUsersForGroupResponseBodyUsersUser() {}

  explicit ListUsersForGroupResponseBodyUsersUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (joinDate) {
      res["JoinDate"] = boost::any(*joinDate);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("JoinDate") != m.end() && !m["JoinDate"].empty()) {
      joinDate = make_shared<string>(boost::any_cast<string>(m["JoinDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~ListUsersForGroupResponseBodyUsersUser() = default;
};
class ListUsersForGroupResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersForGroupResponseBodyUsersUser>> user{};

  ListUsersForGroupResponseBodyUsers() {}

  explicit ListUsersForGroupResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      vector<boost::any> temp1;
      for(auto item1:*user){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["User"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<ListUsersForGroupResponseBodyUsersUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersForGroupResponseBodyUsersUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ListUsersForGroupResponseBodyUsersUser>>(expect1);
      }
    }
  }


  virtual ~ListUsersForGroupResponseBodyUsers() = default;
};
class ListUsersForGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};
  shared_ptr<ListUsersForGroupResponseBodyUsers> users{};

  ListUsersForGroupResponseBody() {}

  explicit ListUsersForGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(map<string, boost::any>) == m["Users"].type()) {
        ListUsersForGroupResponseBodyUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Users"]));
        users = make_shared<ListUsersForGroupResponseBodyUsers>(model1);
      }
    }
  }


  virtual ~ListUsersForGroupResponseBody() = default;
};
class ListUsersForGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersForGroupResponseBody> body{};

  ListUsersForGroupResponse() {}

  explicit ListUsersForGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersForGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersForGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersForGroupResponse() = default;
};
class ListVirtualMFADevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};

  ListVirtualMFADevicesRequest() {}

  explicit ListVirtualMFADevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListVirtualMFADevicesRequest() = default;
};
class ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser() {}

  explicit ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser() = default;
};
class ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> activateDate{};
  shared_ptr<string> serialNumber{};
  shared_ptr<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser> user{};

  ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice() {}

  explicit ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activateDate) {
      res["ActivateDate"] = boost::any(*activateDate);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivateDate") != m.end() && !m["ActivateDate"].empty()) {
      activateDate = make_shared<string>(boost::any_cast<string>(m["ActivateDate"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser>(model1);
      }
    }
  }


  virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice() = default;
};
class ListVirtualMFADevicesResponseBodyVirtualMFADevices : public Darabonba::Model {
public:
  shared_ptr<vector<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice>> virtualMFADevice{};

  ListVirtualMFADevicesResponseBodyVirtualMFADevices() {}

  explicit ListVirtualMFADevicesResponseBodyVirtualMFADevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (virtualMFADevice) {
      vector<boost::any> temp1;
      for(auto item1:*virtualMFADevice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualMFADevice"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VirtualMFADevice") != m.end() && !m["VirtualMFADevice"].empty()) {
      if (typeid(vector<boost::any>) == m["VirtualMFADevice"].type()) {
        vector<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VirtualMFADevice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        virtualMFADevice = make_shared<vector<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice>>(expect1);
      }
    }
  }


  virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevices() = default;
};
class ListVirtualMFADevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};
  shared_ptr<ListVirtualMFADevicesResponseBodyVirtualMFADevices> virtualMFADevices{};

  ListVirtualMFADevicesResponseBody() {}

  explicit ListVirtualMFADevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (virtualMFADevices) {
      res["VirtualMFADevices"] = virtualMFADevices ? boost::any(virtualMFADevices->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VirtualMFADevices") != m.end() && !m["VirtualMFADevices"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualMFADevices"].type()) {
        ListVirtualMFADevicesResponseBodyVirtualMFADevices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualMFADevices"]));
        virtualMFADevices = make_shared<ListVirtualMFADevicesResponseBodyVirtualMFADevices>(model1);
      }
    }
  }


  virtual ~ListVirtualMFADevicesResponseBody() = default;
};
class ListVirtualMFADevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVirtualMFADevicesResponseBody> body{};

  ListVirtualMFADevicesResponse() {}

  explicit ListVirtualMFADevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVirtualMFADevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVirtualMFADevicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVirtualMFADevicesResponse() = default;
};
class RemoveClientIdFromOIDCProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> OIDCProviderName{};

  RemoveClientIdFromOIDCProviderRequest() {}

  explicit RemoveClientIdFromOIDCProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
  }


  virtual ~RemoveClientIdFromOIDCProviderRequest() = default;
};
class RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> clientIds{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> fingerprints{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> issuerUrl{};
  shared_ptr<string> OIDCProviderName{};
  shared_ptr<string> updateDate{};

  RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider() {}

  explicit RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fingerprints) {
      res["Fingerprints"] = boost::any(*fingerprints);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (issuerUrl) {
      res["IssuerUrl"] = boost::any(*issuerUrl);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fingerprints") != m.end() && !m["Fingerprints"].empty()) {
      fingerprints = make_shared<string>(boost::any_cast<string>(m["Fingerprints"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IssuerUrl") != m.end() && !m["IssuerUrl"].empty()) {
      issuerUrl = make_shared<string>(boost::any_cast<string>(m["IssuerUrl"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider() = default;
};
class RemoveClientIdFromOIDCProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider> OIDCProvider{};
  shared_ptr<string> requestId{};

  RemoveClientIdFromOIDCProviderResponseBody() {}

  explicit RemoveClientIdFromOIDCProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProvider) {
      res["OIDCProvider"] = OIDCProvider ? boost::any(OIDCProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProvider") != m.end() && !m["OIDCProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["OIDCProvider"].type()) {
        RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OIDCProvider"]));
        OIDCProvider = make_shared<RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveClientIdFromOIDCProviderResponseBody() = default;
};
class RemoveClientIdFromOIDCProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveClientIdFromOIDCProviderResponseBody> body{};

  RemoveClientIdFromOIDCProviderResponse() {}

  explicit RemoveClientIdFromOIDCProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveClientIdFromOIDCProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveClientIdFromOIDCProviderResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveClientIdFromOIDCProviderResponse() = default;
};
class RemoveFingerprintFromOIDCProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> fingerprint{};
  shared_ptr<string> OIDCProviderName{};

  RemoveFingerprintFromOIDCProviderRequest() {}

  explicit RemoveFingerprintFromOIDCProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
  }


  virtual ~RemoveFingerprintFromOIDCProviderRequest() = default;
};
class RemoveFingerprintFromOIDCProviderResponseBodyOIDCProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> clientIds{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> fingerprints{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> issuerUrl{};
  shared_ptr<string> OIDCProviderName{};
  shared_ptr<string> updateDate{};

  RemoveFingerprintFromOIDCProviderResponseBodyOIDCProvider() {}

  explicit RemoveFingerprintFromOIDCProviderResponseBodyOIDCProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fingerprints) {
      res["Fingerprints"] = boost::any(*fingerprints);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (issuerUrl) {
      res["IssuerUrl"] = boost::any(*issuerUrl);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fingerprints") != m.end() && !m["Fingerprints"].empty()) {
      fingerprints = make_shared<string>(boost::any_cast<string>(m["Fingerprints"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IssuerUrl") != m.end() && !m["IssuerUrl"].empty()) {
      issuerUrl = make_shared<string>(boost::any_cast<string>(m["IssuerUrl"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~RemoveFingerprintFromOIDCProviderResponseBodyOIDCProvider() = default;
};
class RemoveFingerprintFromOIDCProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<RemoveFingerprintFromOIDCProviderResponseBodyOIDCProvider> OIDCProvider{};
  shared_ptr<string> requestId{};

  RemoveFingerprintFromOIDCProviderResponseBody() {}

  explicit RemoveFingerprintFromOIDCProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProvider) {
      res["OIDCProvider"] = OIDCProvider ? boost::any(OIDCProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProvider") != m.end() && !m["OIDCProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["OIDCProvider"].type()) {
        RemoveFingerprintFromOIDCProviderResponseBodyOIDCProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OIDCProvider"]));
        OIDCProvider = make_shared<RemoveFingerprintFromOIDCProviderResponseBodyOIDCProvider>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveFingerprintFromOIDCProviderResponseBody() = default;
};
class RemoveFingerprintFromOIDCProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveFingerprintFromOIDCProviderResponseBody> body{};

  RemoveFingerprintFromOIDCProviderResponse() {}

  explicit RemoveFingerprintFromOIDCProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveFingerprintFromOIDCProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveFingerprintFromOIDCProviderResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveFingerprintFromOIDCProviderResponse() = default;
};
class RemoveUserFromGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> userPrincipalName{};

  RemoveUserFromGroupRequest() {}

  explicit RemoveUserFromGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~RemoveUserFromGroupRequest() = default;
};
class RemoveUserFromGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveUserFromGroupResponseBody() {}

  explicit RemoveUserFromGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveUserFromGroupResponseBody() = default;
};
class RemoveUserFromGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveUserFromGroupResponseBody> body{};

  RemoveUserFromGroupResponse() {}

  explicit RemoveUserFromGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveUserFromGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUserFromGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUserFromGroupResponse() = default;
};
class SetDefaultDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> defaultDomainName{};

  SetDefaultDomainRequest() {}

  explicit SetDefaultDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultDomainName) {
      res["DefaultDomainName"] = boost::any(*defaultDomainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultDomainName") != m.end() && !m["DefaultDomainName"].empty()) {
      defaultDomainName = make_shared<string>(boost::any_cast<string>(m["DefaultDomainName"]));
    }
  }


  virtual ~SetDefaultDomainRequest() = default;
};
class SetDefaultDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> defaultDomainName{};
  shared_ptr<string> requestId{};

  SetDefaultDomainResponseBody() {}

  explicit SetDefaultDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultDomainName) {
      res["DefaultDomainName"] = boost::any(*defaultDomainName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultDomainName") != m.end() && !m["DefaultDomainName"].empty()) {
      defaultDomainName = make_shared<string>(boost::any_cast<string>(m["DefaultDomainName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetDefaultDomainResponseBody() = default;
};
class SetDefaultDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDefaultDomainResponseBody> body{};

  SetDefaultDomainResponse() {}

  explicit SetDefaultDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDefaultDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultDomainResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultDomainResponse() = default;
};
class SetPasswordPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> hardExpire{};
  shared_ptr<long> maxLoginAttemps{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<long> minimumPasswordDifferentCharacter{};
  shared_ptr<long> minimumPasswordLength{};
  shared_ptr<bool> passwordNotContainUserName{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<bool> requireLowercaseCharacters{};
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> requireUppercaseCharacters{};

  SetPasswordPolicyRequest() {}

  explicit SetPasswordPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hardExpire) {
      res["HardExpire"] = boost::any(*hardExpire);
    }
    if (maxLoginAttemps) {
      res["MaxLoginAttemps"] = boost::any(*maxLoginAttemps);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (minimumPasswordDifferentCharacter) {
      res["MinimumPasswordDifferentCharacter"] = boost::any(*minimumPasswordDifferentCharacter);
    }
    if (minimumPasswordLength) {
      res["MinimumPasswordLength"] = boost::any(*minimumPasswordLength);
    }
    if (passwordNotContainUserName) {
      res["PasswordNotContainUserName"] = boost::any(*passwordNotContainUserName);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (requireLowercaseCharacters) {
      res["RequireLowercaseCharacters"] = boost::any(*requireLowercaseCharacters);
    }
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (requireUppercaseCharacters) {
      res["RequireUppercaseCharacters"] = boost::any(*requireUppercaseCharacters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HardExpire") != m.end() && !m["HardExpire"].empty()) {
      hardExpire = make_shared<bool>(boost::any_cast<bool>(m["HardExpire"]));
    }
    if (m.find("MaxLoginAttemps") != m.end() && !m["MaxLoginAttemps"].empty()) {
      maxLoginAttemps = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttemps"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("MinimumPasswordDifferentCharacter") != m.end() && !m["MinimumPasswordDifferentCharacter"].empty()) {
      minimumPasswordDifferentCharacter = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordDifferentCharacter"]));
    }
    if (m.find("MinimumPasswordLength") != m.end() && !m["MinimumPasswordLength"].empty()) {
      minimumPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordLength"]));
    }
    if (m.find("PasswordNotContainUserName") != m.end() && !m["PasswordNotContainUserName"].empty()) {
      passwordNotContainUserName = make_shared<bool>(boost::any_cast<bool>(m["PasswordNotContainUserName"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("RequireLowercaseCharacters") != m.end() && !m["RequireLowercaseCharacters"].empty()) {
      requireLowercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireLowercaseCharacters"]));
    }
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("RequireUppercaseCharacters") != m.end() && !m["RequireUppercaseCharacters"].empty()) {
      requireUppercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireUppercaseCharacters"]));
    }
  }


  virtual ~SetPasswordPolicyRequest() = default;
};
class SetPasswordPolicyResponseBodyPasswordPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> hardExpire{};
  shared_ptr<long> maxLoginAttemps{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<long> minimumPasswordDifferentCharacter{};
  shared_ptr<long> minimumPasswordLength{};
  shared_ptr<bool> passwordNotContainUserName{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<bool> requireLowercaseCharacters{};
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> requireUppercaseCharacters{};

  SetPasswordPolicyResponseBodyPasswordPolicy() {}

  explicit SetPasswordPolicyResponseBodyPasswordPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hardExpire) {
      res["HardExpire"] = boost::any(*hardExpire);
    }
    if (maxLoginAttemps) {
      res["MaxLoginAttemps"] = boost::any(*maxLoginAttemps);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (minimumPasswordDifferentCharacter) {
      res["MinimumPasswordDifferentCharacter"] = boost::any(*minimumPasswordDifferentCharacter);
    }
    if (minimumPasswordLength) {
      res["MinimumPasswordLength"] = boost::any(*minimumPasswordLength);
    }
    if (passwordNotContainUserName) {
      res["PasswordNotContainUserName"] = boost::any(*passwordNotContainUserName);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (requireLowercaseCharacters) {
      res["RequireLowercaseCharacters"] = boost::any(*requireLowercaseCharacters);
    }
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (requireUppercaseCharacters) {
      res["RequireUppercaseCharacters"] = boost::any(*requireUppercaseCharacters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HardExpire") != m.end() && !m["HardExpire"].empty()) {
      hardExpire = make_shared<bool>(boost::any_cast<bool>(m["HardExpire"]));
    }
    if (m.find("MaxLoginAttemps") != m.end() && !m["MaxLoginAttemps"].empty()) {
      maxLoginAttemps = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttemps"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("MinimumPasswordDifferentCharacter") != m.end() && !m["MinimumPasswordDifferentCharacter"].empty()) {
      minimumPasswordDifferentCharacter = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordDifferentCharacter"]));
    }
    if (m.find("MinimumPasswordLength") != m.end() && !m["MinimumPasswordLength"].empty()) {
      minimumPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordLength"]));
    }
    if (m.find("PasswordNotContainUserName") != m.end() && !m["PasswordNotContainUserName"].empty()) {
      passwordNotContainUserName = make_shared<bool>(boost::any_cast<bool>(m["PasswordNotContainUserName"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("RequireLowercaseCharacters") != m.end() && !m["RequireLowercaseCharacters"].empty()) {
      requireLowercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireLowercaseCharacters"]));
    }
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("RequireUppercaseCharacters") != m.end() && !m["RequireUppercaseCharacters"].empty()) {
      requireUppercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireUppercaseCharacters"]));
    }
  }


  virtual ~SetPasswordPolicyResponseBodyPasswordPolicy() = default;
};
class SetPasswordPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<SetPasswordPolicyResponseBodyPasswordPolicy> passwordPolicy{};
  shared_ptr<string> requestId{};

  SetPasswordPolicyResponseBody() {}

  explicit SetPasswordPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordPolicy) {
      res["PasswordPolicy"] = passwordPolicy ? boost::any(passwordPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordPolicy") != m.end() && !m["PasswordPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordPolicy"].type()) {
        SetPasswordPolicyResponseBodyPasswordPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordPolicy"]));
        passwordPolicy = make_shared<SetPasswordPolicyResponseBodyPasswordPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetPasswordPolicyResponseBody() = default;
};
class SetPasswordPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetPasswordPolicyResponseBody> body{};

  SetPasswordPolicyResponse() {}

  explicit SetPasswordPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetPasswordPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetPasswordPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~SetPasswordPolicyResponse() = default;
};
class SetSecurityPreferenceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToChangePassword{};
  shared_ptr<bool> allowUserToManageAccessKeys{};
  shared_ptr<bool> allowUserToManageMFADevices{};
  shared_ptr<bool> allowUserToManagePersonalDingTalk{};
  shared_ptr<bool> enableSaveMFATicket{};
  shared_ptr<string> loginNetworkMasks{};
  shared_ptr<long> loginSessionDuration{};
  shared_ptr<string> MFAOperationForLogin{};
  shared_ptr<string> operationForRiskLogin{};

  SetSecurityPreferenceRequest() {}

  explicit SetSecurityPreferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToChangePassword) {
      res["AllowUserToChangePassword"] = boost::any(*allowUserToChangePassword);
    }
    if (allowUserToManageAccessKeys) {
      res["AllowUserToManageAccessKeys"] = boost::any(*allowUserToManageAccessKeys);
    }
    if (allowUserToManageMFADevices) {
      res["AllowUserToManageMFADevices"] = boost::any(*allowUserToManageMFADevices);
    }
    if (allowUserToManagePersonalDingTalk) {
      res["AllowUserToManagePersonalDingTalk"] = boost::any(*allowUserToManagePersonalDingTalk);
    }
    if (enableSaveMFATicket) {
      res["EnableSaveMFATicket"] = boost::any(*enableSaveMFATicket);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    if (loginSessionDuration) {
      res["LoginSessionDuration"] = boost::any(*loginSessionDuration);
    }
    if (MFAOperationForLogin) {
      res["MFAOperationForLogin"] = boost::any(*MFAOperationForLogin);
    }
    if (operationForRiskLogin) {
      res["OperationForRiskLogin"] = boost::any(*operationForRiskLogin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToChangePassword") != m.end() && !m["AllowUserToChangePassword"].empty()) {
      allowUserToChangePassword = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToChangePassword"]));
    }
    if (m.find("AllowUserToManageAccessKeys") != m.end() && !m["AllowUserToManageAccessKeys"].empty()) {
      allowUserToManageAccessKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageAccessKeys"]));
    }
    if (m.find("AllowUserToManageMFADevices") != m.end() && !m["AllowUserToManageMFADevices"].empty()) {
      allowUserToManageMFADevices = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageMFADevices"]));
    }
    if (m.find("AllowUserToManagePersonalDingTalk") != m.end() && !m["AllowUserToManagePersonalDingTalk"].empty()) {
      allowUserToManagePersonalDingTalk = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManagePersonalDingTalk"]));
    }
    if (m.find("EnableSaveMFATicket") != m.end() && !m["EnableSaveMFATicket"].empty()) {
      enableSaveMFATicket = make_shared<bool>(boost::any_cast<bool>(m["EnableSaveMFATicket"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
    if (m.find("LoginSessionDuration") != m.end() && !m["LoginSessionDuration"].empty()) {
      loginSessionDuration = make_shared<long>(boost::any_cast<long>(m["LoginSessionDuration"]));
    }
    if (m.find("MFAOperationForLogin") != m.end() && !m["MFAOperationForLogin"].empty()) {
      MFAOperationForLogin = make_shared<string>(boost::any_cast<string>(m["MFAOperationForLogin"]));
    }
    if (m.find("OperationForRiskLogin") != m.end() && !m["OperationForRiskLogin"].empty()) {
      operationForRiskLogin = make_shared<string>(boost::any_cast<string>(m["OperationForRiskLogin"]));
    }
  }


  virtual ~SetSecurityPreferenceRequest() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManageAccessKeys{};

  SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManageAccessKeys) {
      res["AllowUserToManageAccessKeys"] = boost::any(*allowUserToManageAccessKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManageAccessKeys") != m.end() && !m["AllowUserToManageAccessKeys"].empty()) {
      allowUserToManageAccessKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageAccessKeys"]));
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToChangePassword{};
  shared_ptr<bool> enableSaveMFATicket{};
  shared_ptr<string> loginNetworkMasks{};
  shared_ptr<long> loginSessionDuration{};
  shared_ptr<string> MFAOperationForLogin{};
  shared_ptr<string> operationForRiskLogin{};

  SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToChangePassword) {
      res["AllowUserToChangePassword"] = boost::any(*allowUserToChangePassword);
    }
    if (enableSaveMFATicket) {
      res["EnableSaveMFATicket"] = boost::any(*enableSaveMFATicket);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    if (loginSessionDuration) {
      res["LoginSessionDuration"] = boost::any(*loginSessionDuration);
    }
    if (MFAOperationForLogin) {
      res["MFAOperationForLogin"] = boost::any(*MFAOperationForLogin);
    }
    if (operationForRiskLogin) {
      res["OperationForRiskLogin"] = boost::any(*operationForRiskLogin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToChangePassword") != m.end() && !m["AllowUserToChangePassword"].empty()) {
      allowUserToChangePassword = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToChangePassword"]));
    }
    if (m.find("EnableSaveMFATicket") != m.end() && !m["EnableSaveMFATicket"].empty()) {
      enableSaveMFATicket = make_shared<bool>(boost::any_cast<bool>(m["EnableSaveMFATicket"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
    if (m.find("LoginSessionDuration") != m.end() && !m["LoginSessionDuration"].empty()) {
      loginSessionDuration = make_shared<long>(boost::any_cast<long>(m["LoginSessionDuration"]));
    }
    if (m.find("MFAOperationForLogin") != m.end() && !m["MFAOperationForLogin"].empty()) {
      MFAOperationForLogin = make_shared<string>(boost::any_cast<string>(m["MFAOperationForLogin"]));
    }
    if (m.find("OperationForRiskLogin") != m.end() && !m["OperationForRiskLogin"].empty()) {
      operationForRiskLogin = make_shared<string>(boost::any_cast<string>(m["OperationForRiskLogin"]));
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManageMFADevices{};

  SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManageMFADevices) {
      res["AllowUserToManageMFADevices"] = boost::any(*allowUserToManageMFADevices);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManageMFADevices") != m.end() && !m["AllowUserToManageMFADevices"].empty()) {
      allowUserToManageMFADevices = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageMFADevices"]));
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManagePersonalDingTalk{};

  SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManagePersonalDingTalk) {
      res["AllowUserToManagePersonalDingTalk"] = boost::any(*allowUserToManagePersonalDingTalk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManagePersonalDingTalk") != m.end() && !m["AllowUserToManagePersonalDingTalk"].empty()) {
      allowUserToManagePersonalDingTalk = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManagePersonalDingTalk"]));
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreference : public Darabonba::Model {
public:
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference> accessKeyPreference{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference> loginProfilePreference{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference> MFAPreference{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference> personalInfoPreference{};

  SetSecurityPreferenceResponseBodySecurityPreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyPreference) {
      res["AccessKeyPreference"] = accessKeyPreference ? boost::any(accessKeyPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loginProfilePreference) {
      res["LoginProfilePreference"] = loginProfilePreference ? boost::any(loginProfilePreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (MFAPreference) {
      res["MFAPreference"] = MFAPreference ? boost::any(MFAPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (personalInfoPreference) {
      res["PersonalInfoPreference"] = personalInfoPreference ? boost::any(personalInfoPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyPreference") != m.end() && !m["AccessKeyPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKeyPreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKeyPreference"]));
        accessKeyPreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference>(model1);
      }
    }
    if (m.find("LoginProfilePreference") != m.end() && !m["LoginProfilePreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfilePreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfilePreference"]));
        loginProfilePreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference>(model1);
      }
    }
    if (m.find("MFAPreference") != m.end() && !m["MFAPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["MFAPreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MFAPreference"]));
        MFAPreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference>(model1);
      }
    }
    if (m.find("PersonalInfoPreference") != m.end() && !m["PersonalInfoPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["PersonalInfoPreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PersonalInfoPreference"]));
        personalInfoPreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference>(model1);
      }
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreference() = default;
};
class SetSecurityPreferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreference> securityPreference{};

  SetSecurityPreferenceResponseBody() {}

  explicit SetSecurityPreferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityPreference) {
      res["SecurityPreference"] = securityPreference ? boost::any(securityPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityPreference") != m.end() && !m["SecurityPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityPreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityPreference"]));
        securityPreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreference>(model1);
      }
    }
  }


  virtual ~SetSecurityPreferenceResponseBody() = default;
};
class SetSecurityPreferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetSecurityPreferenceResponseBody> body{};

  SetSecurityPreferenceResponse() {}

  explicit SetSecurityPreferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetSecurityPreferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSecurityPreferenceResponseBody>(model1);
      }
    }
  }


  virtual ~SetSecurityPreferenceResponse() = default;
};
class SetUserSsoSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> auxiliaryDomain{};
  shared_ptr<string> metadataDocument{};
  shared_ptr<bool> ssoEnabled{};

  SetUserSsoSettingsRequest() {}

  explicit SetUserSsoSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auxiliaryDomain) {
      res["AuxiliaryDomain"] = boost::any(*auxiliaryDomain);
    }
    if (metadataDocument) {
      res["MetadataDocument"] = boost::any(*metadataDocument);
    }
    if (ssoEnabled) {
      res["SsoEnabled"] = boost::any(*ssoEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuxiliaryDomain") != m.end() && !m["AuxiliaryDomain"].empty()) {
      auxiliaryDomain = make_shared<string>(boost::any_cast<string>(m["AuxiliaryDomain"]));
    }
    if (m.find("MetadataDocument") != m.end() && !m["MetadataDocument"].empty()) {
      metadataDocument = make_shared<string>(boost::any_cast<string>(m["MetadataDocument"]));
    }
    if (m.find("SsoEnabled") != m.end() && !m["SsoEnabled"].empty()) {
      ssoEnabled = make_shared<bool>(boost::any_cast<bool>(m["SsoEnabled"]));
    }
  }


  virtual ~SetUserSsoSettingsRequest() = default;
};
class SetUserSsoSettingsResponseBodyUserSsoSettings : public Darabonba::Model {
public:
  shared_ptr<string> auxiliaryDomain{};
  shared_ptr<string> metadataDocument{};
  shared_ptr<bool> ssoEnabled{};

  SetUserSsoSettingsResponseBodyUserSsoSettings() {}

  explicit SetUserSsoSettingsResponseBodyUserSsoSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auxiliaryDomain) {
      res["AuxiliaryDomain"] = boost::any(*auxiliaryDomain);
    }
    if (metadataDocument) {
      res["MetadataDocument"] = boost::any(*metadataDocument);
    }
    if (ssoEnabled) {
      res["SsoEnabled"] = boost::any(*ssoEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuxiliaryDomain") != m.end() && !m["AuxiliaryDomain"].empty()) {
      auxiliaryDomain = make_shared<string>(boost::any_cast<string>(m["AuxiliaryDomain"]));
    }
    if (m.find("MetadataDocument") != m.end() && !m["MetadataDocument"].empty()) {
      metadataDocument = make_shared<string>(boost::any_cast<string>(m["MetadataDocument"]));
    }
    if (m.find("SsoEnabled") != m.end() && !m["SsoEnabled"].empty()) {
      ssoEnabled = make_shared<bool>(boost::any_cast<bool>(m["SsoEnabled"]));
    }
  }


  virtual ~SetUserSsoSettingsResponseBodyUserSsoSettings() = default;
};
class SetUserSsoSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SetUserSsoSettingsResponseBodyUserSsoSettings> userSsoSettings{};

  SetUserSsoSettingsResponseBody() {}

  explicit SetUserSsoSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userSsoSettings) {
      res["UserSsoSettings"] = userSsoSettings ? boost::any(userSsoSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserSsoSettings") != m.end() && !m["UserSsoSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserSsoSettings"].type()) {
        SetUserSsoSettingsResponseBodyUserSsoSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserSsoSettings"]));
        userSsoSettings = make_shared<SetUserSsoSettingsResponseBodyUserSsoSettings>(model1);
      }
    }
  }


  virtual ~SetUserSsoSettingsResponseBody() = default;
};
class SetUserSsoSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetUserSsoSettingsResponseBody> body{};

  SetUserSsoSettingsResponse() {}

  explicit SetUserSsoSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetUserSsoSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetUserSsoSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~SetUserSsoSettingsResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> resourcePrincipalName{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourcePrincipalName) {
      res["ResourcePrincipalName"] = boost::any(*resourcePrincipalName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourcePrincipalName") != m.end() && !m["ResourcePrincipalName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourcePrincipalName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourcePrincipalName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourcePrincipalName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UnbindMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};

  UnbindMFADeviceRequest() {}

  explicit UnbindMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~UnbindMFADeviceRequest() = default;
};
class UnbindMFADeviceResponseBodyMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};

  UnbindMFADeviceResponseBodyMFADevice() {}

  explicit UnbindMFADeviceResponseBodyMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~UnbindMFADeviceResponseBodyMFADevice() = default;
};
class UnbindMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<UnbindMFADeviceResponseBodyMFADevice> MFADevice{};
  shared_ptr<string> requestId{};

  UnbindMFADeviceResponseBody() {}

  explicit UnbindMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFADevice) {
      res["MFADevice"] = MFADevice ? boost::any(MFADevice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFADevice") != m.end() && !m["MFADevice"].empty()) {
      if (typeid(map<string, boost::any>) == m["MFADevice"].type()) {
        UnbindMFADeviceResponseBodyMFADevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MFADevice"]));
        MFADevice = make_shared<UnbindMFADeviceResponseBodyMFADevice>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindMFADeviceResponseBody() = default;
};
class UnbindMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindMFADeviceResponseBody> body{};

  UnbindMFADeviceResponse() {}

  explicit UnbindMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindMFADeviceResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> resourcePrincipalName{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourcePrincipalName) {
      res["ResourcePrincipalName"] = boost::any(*resourcePrincipalName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourcePrincipalName") != m.end() && !m["ResourcePrincipalName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourcePrincipalName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourcePrincipalName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourcePrincipalName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateAccessKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userPrincipalName{};

  UpdateAccessKeyRequest() {}

  explicit UpdateAccessKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~UpdateAccessKeyRequest() = default;
};
class UpdateAccessKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAccessKeyResponseBody() {}

  explicit UpdateAccessKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAccessKeyResponseBody() = default;
};
class UpdateAccessKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAccessKeyResponseBody> body{};

  UpdateAccessKeyResponse() {}

  explicit UpdateAccessKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAccessKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccessKeyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccessKeyResponse() = default;
};
class UpdateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> newAccessTokenValidity{};
  shared_ptr<string> newDisplayName{};
  shared_ptr<bool> newIsMultiTenant{};
  shared_ptr<string> newPredefinedScopes{};
  shared_ptr<string> newRedirectUris{};
  shared_ptr<long> newRefreshTokenValidity{};
  shared_ptr<bool> newSecretRequired{};

  UpdateApplicationRequest() {}

  explicit UpdateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (newAccessTokenValidity) {
      res["NewAccessTokenValidity"] = boost::any(*newAccessTokenValidity);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (newIsMultiTenant) {
      res["NewIsMultiTenant"] = boost::any(*newIsMultiTenant);
    }
    if (newPredefinedScopes) {
      res["NewPredefinedScopes"] = boost::any(*newPredefinedScopes);
    }
    if (newRedirectUris) {
      res["NewRedirectUris"] = boost::any(*newRedirectUris);
    }
    if (newRefreshTokenValidity) {
      res["NewRefreshTokenValidity"] = boost::any(*newRefreshTokenValidity);
    }
    if (newSecretRequired) {
      res["NewSecretRequired"] = boost::any(*newSecretRequired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("NewAccessTokenValidity") != m.end() && !m["NewAccessTokenValidity"].empty()) {
      newAccessTokenValidity = make_shared<long>(boost::any_cast<long>(m["NewAccessTokenValidity"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("NewIsMultiTenant") != m.end() && !m["NewIsMultiTenant"].empty()) {
      newIsMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["NewIsMultiTenant"]));
    }
    if (m.find("NewPredefinedScopes") != m.end() && !m["NewPredefinedScopes"].empty()) {
      newPredefinedScopes = make_shared<string>(boost::any_cast<string>(m["NewPredefinedScopes"]));
    }
    if (m.find("NewRedirectUris") != m.end() && !m["NewRedirectUris"].empty()) {
      newRedirectUris = make_shared<string>(boost::any_cast<string>(m["NewRedirectUris"]));
    }
    if (m.find("NewRefreshTokenValidity") != m.end() && !m["NewRefreshTokenValidity"].empty()) {
      newRefreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["NewRefreshTokenValidity"]));
    }
    if (m.find("NewSecretRequired") != m.end() && !m["NewSecretRequired"].empty()) {
      newSecretRequired = make_shared<bool>(boost::any_cast<bool>(m["NewSecretRequired"]));
    }
  }


  virtual ~UpdateApplicationRequest() = default;
};
class UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() {}

  explicit UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() = default;
};
class UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope{};

  UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() {}

  explicit UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() = default;
};
class UpdateApplicationResponseBodyApplicationDelegatedScope : public Darabonba::Model {
public:
  shared_ptr<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes> predefinedScopes{};

  UpdateApplicationResponseBodyApplicationDelegatedScope() {}

  explicit UpdateApplicationResponseBodyApplicationDelegatedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes>(model1);
      }
    }
  }


  virtual ~UpdateApplicationResponseBodyApplicationDelegatedScope() = default;
};
class UpdateApplicationResponseBodyApplicationRedirectUris : public Darabonba::Model {
public:
  shared_ptr<vector<string>> redirectUri{};

  UpdateApplicationResponseBodyApplicationRedirectUris() {}

  explicit UpdateApplicationResponseBodyApplicationRedirectUris(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redirectUri) {
      res["RedirectUri"] = boost::any(*redirectUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RedirectUri") != m.end() && !m["RedirectUri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUri = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateApplicationResponseBodyApplicationRedirectUris() = default;
};
class UpdateApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<string> accountId{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> createDate{};
  shared_ptr<UpdateApplicationResponseBodyApplicationDelegatedScope> delegatedScope{};
  shared_ptr<string> displayName{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<UpdateApplicationResponseBodyApplicationRedirectUris> redirectUris{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<bool> secretRequired{};
  shared_ptr<string> updateDate{};

  UpdateApplicationResponseBodyApplication() {}

  explicit UpdateApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (delegatedScope) {
      res["DelegatedScope"] = delegatedScope ? boost::any(delegatedScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (redirectUris) {
      res["RedirectUris"] = redirectUris ? boost::any(redirectUris->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DelegatedScope") != m.end() && !m["DelegatedScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedScope"].type()) {
        UpdateApplicationResponseBodyApplicationDelegatedScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedScope"]));
        delegatedScope = make_shared<UpdateApplicationResponseBodyApplicationDelegatedScope>(model1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectUris"].type()) {
        UpdateApplicationResponseBodyApplicationRedirectUris model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectUris"]));
        redirectUris = make_shared<UpdateApplicationResponseBodyApplicationRedirectUris>(model1);
      }
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~UpdateApplicationResponseBodyApplication() = default;
};
class UpdateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateApplicationResponseBodyApplication> application{};
  shared_ptr<string> requestId{};

  UpdateApplicationResponseBody() {}

  explicit UpdateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        UpdateApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<UpdateApplicationResponseBodyApplication>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateApplicationResponseBody() = default;
};
class UpdateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicationResponseBody> body{};

  UpdateApplicationResponse() {}

  explicit UpdateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationResponse() = default;
};
class UpdateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> newComments{};
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> newGroupName{};

  UpdateGroupRequest() {}

  explicit UpdateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (newComments) {
      res["NewComments"] = boost::any(*newComments);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (newGroupName) {
      res["NewGroupName"] = boost::any(*newGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("NewComments") != m.end() && !m["NewComments"].empty()) {
      newComments = make_shared<string>(boost::any_cast<string>(m["NewComments"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("NewGroupName") != m.end() && !m["NewGroupName"].empty()) {
      newGroupName = make_shared<string>(boost::any_cast<string>(m["NewGroupName"]));
    }
  }


  virtual ~UpdateGroupRequest() = default;
};
class UpdateGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> updateDate{};

  UpdateGroupResponseBodyGroup() {}

  explicit UpdateGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~UpdateGroupResponseBodyGroup() = default;
};
class UpdateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  UpdateGroupResponseBody() {}

  explicit UpdateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = group ? boost::any(group->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(map<string, boost::any>) == m["Group"].type()) {
        UpdateGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Group"]));
        group = make_shared<UpdateGroupResponseBodyGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateGroupResponseBody() = default;
};
class UpdateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupResponseBody> body{};

  UpdateGroupResponse() {}

  explicit UpdateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupResponse() = default;
};
class UpdateLoginProfileRequest : public Darabonba::Model {
public:
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<string> password{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<string> status{};
  shared_ptr<string> userPrincipalName{};

  UpdateLoginProfileRequest() {}

  explicit UpdateLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~UpdateLoginProfileRequest() = default;
};
class UpdateLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
public:
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<string> status{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userPrincipalName{};

  UpdateLoginProfileResponseBodyLoginProfile() {}

  explicit UpdateLoginProfileResponseBodyLoginProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~UpdateLoginProfileResponseBodyLoginProfile() = default;
};
class UpdateLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateLoginProfileResponseBodyLoginProfile> loginProfile{};
  shared_ptr<string> requestId{};

  UpdateLoginProfileResponseBody() {}

  explicit UpdateLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginProfile) {
      res["LoginProfile"] = loginProfile ? boost::any(loginProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginProfile") != m.end() && !m["LoginProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfile"].type()) {
        UpdateLoginProfileResponseBodyLoginProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfile"]));
        loginProfile = make_shared<UpdateLoginProfileResponseBodyLoginProfile>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLoginProfileResponseBody() = default;
};
class UpdateLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLoginProfileResponseBody> body{};

  UpdateLoginProfileResponse() {}

  explicit UpdateLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoginProfileResponse() = default;
};
class UpdateOIDCProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIds{};
  shared_ptr<string> newDescription{};
  shared_ptr<string> OIDCProviderName{};

  UpdateOIDCProviderRequest() {}

  explicit UpdateOIDCProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
  }


  virtual ~UpdateOIDCProviderRequest() = default;
};
class UpdateOIDCProviderResponseBodyOIDCProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> clientIds{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> fingerprints{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> issuerUrl{};
  shared_ptr<string> OIDCProviderName{};
  shared_ptr<string> updateDate{};

  UpdateOIDCProviderResponseBodyOIDCProvider() {}

  explicit UpdateOIDCProviderResponseBodyOIDCProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fingerprints) {
      res["Fingerprints"] = boost::any(*fingerprints);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (issuerUrl) {
      res["IssuerUrl"] = boost::any(*issuerUrl);
    }
    if (OIDCProviderName) {
      res["OIDCProviderName"] = boost::any(*OIDCProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Fingerprints") != m.end() && !m["Fingerprints"].empty()) {
      fingerprints = make_shared<string>(boost::any_cast<string>(m["Fingerprints"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IssuerUrl") != m.end() && !m["IssuerUrl"].empty()) {
      issuerUrl = make_shared<string>(boost::any_cast<string>(m["IssuerUrl"]));
    }
    if (m.find("OIDCProviderName") != m.end() && !m["OIDCProviderName"].empty()) {
      OIDCProviderName = make_shared<string>(boost::any_cast<string>(m["OIDCProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~UpdateOIDCProviderResponseBodyOIDCProvider() = default;
};
class UpdateOIDCProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateOIDCProviderResponseBodyOIDCProvider> OIDCProvider{};
  shared_ptr<string> requestId{};

  UpdateOIDCProviderResponseBody() {}

  explicit UpdateOIDCProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OIDCProvider) {
      res["OIDCProvider"] = OIDCProvider ? boost::any(OIDCProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OIDCProvider") != m.end() && !m["OIDCProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["OIDCProvider"].type()) {
        UpdateOIDCProviderResponseBodyOIDCProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OIDCProvider"]));
        OIDCProvider = make_shared<UpdateOIDCProviderResponseBodyOIDCProvider>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateOIDCProviderResponseBody() = default;
};
class UpdateOIDCProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateOIDCProviderResponseBody> body{};

  UpdateOIDCProviderResponse() {}

  explicit UpdateOIDCProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOIDCProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOIDCProviderResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOIDCProviderResponse() = default;
};
class UpdateSAMLProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> newDescription{};
  shared_ptr<string> newEncodedSAMLMetadataDocument{};
  shared_ptr<string> SAMLProviderName{};

  UpdateSAMLProviderRequest() {}

  explicit UpdateSAMLProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (newEncodedSAMLMetadataDocument) {
      res["NewEncodedSAMLMetadataDocument"] = boost::any(*newEncodedSAMLMetadataDocument);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("NewEncodedSAMLMetadataDocument") != m.end() && !m["NewEncodedSAMLMetadataDocument"].empty()) {
      newEncodedSAMLMetadataDocument = make_shared<string>(boost::any_cast<string>(m["NewEncodedSAMLMetadataDocument"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
  }


  virtual ~UpdateSAMLProviderRequest() = default;
};
class UpdateSAMLProviderResponseBodySAMLProvider : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> updateDate{};

  UpdateSAMLProviderResponseBodySAMLProvider() {}

  explicit UpdateSAMLProviderResponseBodySAMLProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~UpdateSAMLProviderResponseBodySAMLProvider() = default;
};
class UpdateSAMLProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateSAMLProviderResponseBodySAMLProvider> SAMLProvider{};

  UpdateSAMLProviderResponseBody() {}

  explicit UpdateSAMLProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLProvider) {
      res["SAMLProvider"] = SAMLProvider ? boost::any(SAMLProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLProvider") != m.end() && !m["SAMLProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLProvider"].type()) {
        UpdateSAMLProviderResponseBodySAMLProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLProvider"]));
        SAMLProvider = make_shared<UpdateSAMLProviderResponseBodySAMLProvider>(model1);
      }
    }
  }


  virtual ~UpdateSAMLProviderResponseBody() = default;
};
class UpdateSAMLProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSAMLProviderResponseBody> body{};

  UpdateSAMLProviderResponse() {}

  explicit UpdateSAMLProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSAMLProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSAMLProviderResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSAMLProviderResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> newComments{};
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> newEmail{};
  shared_ptr<string> newMobilePhone{};
  shared_ptr<string> newUserPrincipalName{};
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newComments) {
      res["NewComments"] = boost::any(*newComments);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (newEmail) {
      res["NewEmail"] = boost::any(*newEmail);
    }
    if (newMobilePhone) {
      res["NewMobilePhone"] = boost::any(*newMobilePhone);
    }
    if (newUserPrincipalName) {
      res["NewUserPrincipalName"] = boost::any(*newUserPrincipalName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewComments") != m.end() && !m["NewComments"].empty()) {
      newComments = make_shared<string>(boost::any_cast<string>(m["NewComments"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("NewEmail") != m.end() && !m["NewEmail"].empty()) {
      newEmail = make_shared<string>(boost::any_cast<string>(m["NewEmail"]));
    }
    if (m.find("NewMobilePhone") != m.end() && !m["NewMobilePhone"].empty()) {
      newMobilePhone = make_shared<string>(boost::any_cast<string>(m["NewMobilePhone"]));
    }
    if (m.find("NewUserPrincipalName") != m.end() && !m["NewUserPrincipalName"].empty()) {
      newUserPrincipalName = make_shared<string>(boost::any_cast<string>(m["NewUserPrincipalName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> lastLoginDate{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userId{};
  shared_ptr<string> userPrincipalName{};

  UpdateUserResponseBodyUser() {}

  explicit UpdateUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lastLoginDate) {
      res["LastLoginDate"] = boost::any(*lastLoginDate);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("LastLoginDate") != m.end() && !m["LastLoginDate"].empty()) {
      lastLoginDate = make_shared<string>(boost::any_cast<string>(m["LastLoginDate"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
  }


  virtual ~UpdateUserResponseBodyUser() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateUserResponseBodyUser> user{};

  UpdateUserResponseBody() {}

  explicit UpdateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        UpdateUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<UpdateUserResponseBodyUser>(model1);
      }
    }
  }


  virtual ~UpdateUserResponseBody() = default;
};
class UpdateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserResponseBody> body{};

  UpdateUserResponse() {}

  explicit UpdateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserResponse() = default;
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
  AddClientIdToOIDCProviderResponse addClientIdToOIDCProviderWithOptions(shared_ptr<AddClientIdToOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddClientIdToOIDCProviderResponse addClientIdToOIDCProvider(shared_ptr<AddClientIdToOIDCProviderRequest> request);
  AddFingerprintToOIDCProviderResponse addFingerprintToOIDCProviderWithOptions(shared_ptr<AddFingerprintToOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFingerprintToOIDCProviderResponse addFingerprintToOIDCProvider(shared_ptr<AddFingerprintToOIDCProviderRequest> request);
  AddUserToGroupResponse addUserToGroupWithOptions(shared_ptr<AddUserToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserToGroupResponse addUserToGroup(shared_ptr<AddUserToGroupRequest> request);
  BindMFADeviceResponse bindMFADeviceWithOptions(shared_ptr<BindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindMFADeviceResponse bindMFADevice(shared_ptr<BindMFADeviceRequest> request);
  ChangePasswordResponse changePasswordWithOptions(shared_ptr<ChangePasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangePasswordResponse changePassword(shared_ptr<ChangePasswordRequest> request);
  CreateAccessKeyResponse createAccessKeyWithOptions(shared_ptr<CreateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessKeyResponse createAccessKey(shared_ptr<CreateAccessKeyRequest> request);
  CreateAppSecretResponse createAppSecretWithOptions(shared_ptr<CreateAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppSecretResponse createAppSecret(shared_ptr<CreateAppSecretRequest> request);
  CreateApplicationResponse createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationResponse createApplication(shared_ptr<CreateApplicationRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateLoginProfileResponse createLoginProfileWithOptions(shared_ptr<CreateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoginProfileResponse createLoginProfile(shared_ptr<CreateLoginProfileRequest> request);
  CreateOIDCProviderResponse createOIDCProviderWithOptions(shared_ptr<CreateOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOIDCProviderResponse createOIDCProvider(shared_ptr<CreateOIDCProviderRequest> request);
  CreateSAMLProviderResponse createSAMLProviderWithOptions(shared_ptr<CreateSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSAMLProviderResponse createSAMLProvider(shared_ptr<CreateSAMLProviderRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<CreateUserRequest> request);
  CreateVirtualMFADeviceResponse createVirtualMFADeviceWithOptions(shared_ptr<CreateVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVirtualMFADeviceResponse createVirtualMFADevice(shared_ptr<CreateVirtualMFADeviceRequest> request);
  DeleteAccessKeyResponse deleteAccessKeyWithOptions(shared_ptr<DeleteAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessKeyResponse deleteAccessKey(shared_ptr<DeleteAccessKeyRequest> request);
  DeleteAppSecretResponse deleteAppSecretWithOptions(shared_ptr<DeleteAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppSecretResponse deleteAppSecret(shared_ptr<DeleteAppSecretRequest> request);
  DeleteApplicationResponse deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationResponse deleteApplication(shared_ptr<DeleteApplicationRequest> request);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<DeleteGroupRequest> request);
  DeleteLoginProfileResponse deleteLoginProfileWithOptions(shared_ptr<DeleteLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoginProfileResponse deleteLoginProfile(shared_ptr<DeleteLoginProfileRequest> request);
  DeleteOIDCProviderResponse deleteOIDCProviderWithOptions(shared_ptr<DeleteOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOIDCProviderResponse deleteOIDCProvider(shared_ptr<DeleteOIDCProviderRequest> request);
  DeleteSAMLProviderResponse deleteSAMLProviderWithOptions(shared_ptr<DeleteSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSAMLProviderResponse deleteSAMLProvider(shared_ptr<DeleteSAMLProviderRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request);
  DisableVirtualMFAResponse disableVirtualMFAWithOptions(shared_ptr<DisableVirtualMFARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableVirtualMFAResponse disableVirtualMFA(shared_ptr<DisableVirtualMFARequest> request);
  GenerateCredentialReportResponse generateCredentialReportWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateCredentialReportResponse generateCredentialReport();
  GetAccessKeyLastUsedResponse getAccessKeyLastUsedWithOptions(shared_ptr<GetAccessKeyLastUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessKeyLastUsedResponse getAccessKeyLastUsed(shared_ptr<GetAccessKeyLastUsedRequest> request);
  GetAccountMFAInfoResponse getAccountMFAInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountMFAInfoResponse getAccountMFAInfo();
  GetAccountSecurityPracticeReportResponse getAccountSecurityPracticeReportWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountSecurityPracticeReportResponse getAccountSecurityPracticeReport();
  GetAccountSummaryResponse getAccountSummaryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountSummaryResponse getAccountSummary();
  GetAppSecretResponse getAppSecretWithOptions(shared_ptr<GetAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppSecretResponse getAppSecret(shared_ptr<GetAppSecretRequest> request);
  GetApplicationResponse getApplicationWithOptions(shared_ptr<GetApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationResponse getApplication(shared_ptr<GetApplicationRequest> request);
  GetCredentialReportResponse getCredentialReportWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCredentialReportResponse getCredentialReport();
  GetDefaultDomainResponse getDefaultDomainWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDefaultDomainResponse getDefaultDomain();
  GetGroupResponse getGroupWithOptions(shared_ptr<GetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupResponse getGroup(shared_ptr<GetGroupRequest> request);
  GetLoginProfileResponse getLoginProfileWithOptions(shared_ptr<GetLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoginProfileResponse getLoginProfile(shared_ptr<GetLoginProfileRequest> request);
  GetOIDCProviderResponse getOIDCProviderWithOptions(shared_ptr<GetOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOIDCProviderResponse getOIDCProvider(shared_ptr<GetOIDCProviderRequest> request);
  GetPasswordPolicyResponse getPasswordPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPasswordPolicyResponse getPasswordPolicy();
  GetSAMLProviderResponse getSAMLProviderWithOptions(shared_ptr<GetSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSAMLProviderResponse getSAMLProvider(shared_ptr<GetSAMLProviderRequest> request);
  GetSecurityPreferenceResponse getSecurityPreferenceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecurityPreferenceResponse getSecurityPreference();
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  GetUserMFAInfoResponse getUserMFAInfoWithOptions(shared_ptr<GetUserMFAInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserMFAInfoResponse getUserMFAInfo(shared_ptr<GetUserMFAInfoRequest> request);
  GetUserSsoSettingsResponse getUserSsoSettingsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserSsoSettingsResponse getUserSsoSettings();
  ListAccessKeysResponse listAccessKeysWithOptions(shared_ptr<ListAccessKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessKeysResponse listAccessKeys(shared_ptr<ListAccessKeysRequest> request);
  ListAppSecretIdsResponse listAppSecretIdsWithOptions(shared_ptr<ListAppSecretIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppSecretIdsResponse listAppSecretIds(shared_ptr<ListAppSecretIdsRequest> request);
  ListApplicationsResponse listApplicationsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsResponse listApplications();
  ListGroupsResponse listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsResponse listGroups(shared_ptr<ListGroupsRequest> request);
  ListGroupsForUserResponse listGroupsForUserWithOptions(shared_ptr<ListGroupsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsForUserResponse listGroupsForUser(shared_ptr<ListGroupsForUserRequest> request);
  ListOIDCProvidersResponse listOIDCProvidersWithOptions(shared_ptr<ListOIDCProvidersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOIDCProvidersResponse listOIDCProviders(shared_ptr<ListOIDCProvidersRequest> request);
  ListPredefinedScopesResponse listPredefinedScopesWithOptions(shared_ptr<ListPredefinedScopesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPredefinedScopesResponse listPredefinedScopes(shared_ptr<ListPredefinedScopesRequest> request);
  ListSAMLProvidersResponse listSAMLProvidersWithOptions(shared_ptr<ListSAMLProvidersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSAMLProvidersResponse listSAMLProviders(shared_ptr<ListSAMLProvidersRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListUserBasicInfosResponse listUserBasicInfosWithOptions(shared_ptr<ListUserBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserBasicInfosResponse listUserBasicInfos(shared_ptr<ListUserBasicInfosRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListUsersForGroupResponse listUsersForGroupWithOptions(shared_ptr<ListUsersForGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersForGroupResponse listUsersForGroup(shared_ptr<ListUsersForGroupRequest> request);
  ListVirtualMFADevicesResponse listVirtualMFADevicesWithOptions(shared_ptr<ListVirtualMFADevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVirtualMFADevicesResponse listVirtualMFADevices(shared_ptr<ListVirtualMFADevicesRequest> request);
  RemoveClientIdFromOIDCProviderResponse removeClientIdFromOIDCProviderWithOptions(shared_ptr<RemoveClientIdFromOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveClientIdFromOIDCProviderResponse removeClientIdFromOIDCProvider(shared_ptr<RemoveClientIdFromOIDCProviderRequest> request);
  RemoveFingerprintFromOIDCProviderResponse removeFingerprintFromOIDCProviderWithOptions(shared_ptr<RemoveFingerprintFromOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveFingerprintFromOIDCProviderResponse removeFingerprintFromOIDCProvider(shared_ptr<RemoveFingerprintFromOIDCProviderRequest> request);
  RemoveUserFromGroupResponse removeUserFromGroupWithOptions(shared_ptr<RemoveUserFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserFromGroupResponse removeUserFromGroup(shared_ptr<RemoveUserFromGroupRequest> request);
  SetDefaultDomainResponse setDefaultDomainWithOptions(shared_ptr<SetDefaultDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultDomainResponse setDefaultDomain(shared_ptr<SetDefaultDomainRequest> request);
  SetPasswordPolicyResponse setPasswordPolicyWithOptions(shared_ptr<SetPasswordPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPasswordPolicyResponse setPasswordPolicy(shared_ptr<SetPasswordPolicyRequest> request);
  SetSecurityPreferenceResponse setSecurityPreferenceWithOptions(shared_ptr<SetSecurityPreferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSecurityPreferenceResponse setSecurityPreference(shared_ptr<SetSecurityPreferenceRequest> request);
  SetUserSsoSettingsResponse setUserSsoSettingsWithOptions(shared_ptr<SetUserSsoSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetUserSsoSettingsResponse setUserSsoSettings(shared_ptr<SetUserSsoSettingsRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnbindMFADeviceResponse unbindMFADeviceWithOptions(shared_ptr<UnbindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindMFADeviceResponse unbindMFADevice(shared_ptr<UnbindMFADeviceRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateAccessKeyResponse updateAccessKeyWithOptions(shared_ptr<UpdateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccessKeyResponse updateAccessKey(shared_ptr<UpdateAccessKeyRequest> request);
  UpdateApplicationResponse updateApplicationWithOptions(shared_ptr<UpdateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationResponse updateApplication(shared_ptr<UpdateApplicationRequest> request);
  UpdateGroupResponse updateGroupWithOptions(shared_ptr<UpdateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupResponse updateGroup(shared_ptr<UpdateGroupRequest> request);
  UpdateLoginProfileResponse updateLoginProfileWithOptions(shared_ptr<UpdateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoginProfileResponse updateLoginProfile(shared_ptr<UpdateLoginProfileRequest> request);
  UpdateOIDCProviderResponse updateOIDCProviderWithOptions(shared_ptr<UpdateOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOIDCProviderResponse updateOIDCProvider(shared_ptr<UpdateOIDCProviderRequest> request);
  UpdateSAMLProviderResponse updateSAMLProviderWithOptions(shared_ptr<UpdateSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSAMLProviderResponse updateSAMLProvider(shared_ptr<UpdateSAMLProviderRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ims20190815

#endif
