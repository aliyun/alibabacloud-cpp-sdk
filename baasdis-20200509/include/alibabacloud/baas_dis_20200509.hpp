// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BAASDIS20200509_H_
#define ALIBABACLOUD_BAASDIS20200509_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_BaasDis20200509 {
class CreateEenterpriseDIDRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerUniqueID{};

  CreateEenterpriseDIDRequest() {}

  explicit CreateEenterpriseDIDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerUniqueID) {
      res["OwnerUniqueID"] = boost::any(*ownerUniqueID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerUniqueID") != m.end() && !m["OwnerUniqueID"].empty()) {
      ownerUniqueID = make_shared<string>(boost::any_cast<string>(m["OwnerUniqueID"]));
    }
  }


  virtual ~CreateEenterpriseDIDRequest() = default;
};
class CreateEenterpriseDIDResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DID{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultMessage{};
  shared_ptr<bool> success{};

  CreateEenterpriseDIDResponseBody() {}

  explicit CreateEenterpriseDIDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DID) {
      res["DID"] = boost::any(*DID);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DID") != m.end() && !m["DID"].empty()) {
      DID = make_shared<string>(boost::any_cast<string>(m["DID"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateEenterpriseDIDResponseBody() = default;
};
class CreateEenterpriseDIDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEenterpriseDIDResponseBody> body{};

  CreateEenterpriseDIDResponse() {}

  explicit CreateEenterpriseDIDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEenterpriseDIDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEenterpriseDIDResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEenterpriseDIDResponse() = default;
};
class CreatePersonalDIDRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerUniqueID{};

  CreatePersonalDIDRequest() {}

  explicit CreatePersonalDIDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerUniqueID) {
      res["OwnerUniqueID"] = boost::any(*ownerUniqueID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerUniqueID") != m.end() && !m["OwnerUniqueID"].empty()) {
      ownerUniqueID = make_shared<string>(boost::any_cast<string>(m["OwnerUniqueID"]));
    }
  }


  virtual ~CreatePersonalDIDRequest() = default;
};
class CreatePersonalDIDResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DID{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultMessage{};
  shared_ptr<bool> success{};

  CreatePersonalDIDResponseBody() {}

  explicit CreatePersonalDIDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DID) {
      res["DID"] = boost::any(*DID);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DID") != m.end() && !m["DID"].empty()) {
      DID = make_shared<string>(boost::any_cast<string>(m["DID"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePersonalDIDResponseBody() = default;
};
class CreatePersonalDIDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePersonalDIDResponseBody> body{};

  CreatePersonalDIDResponse() {}

  explicit CreatePersonalDIDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePersonalDIDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePersonalDIDResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePersonalDIDResponse() = default;
};
class CreateTenantDIDRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};

  CreateTenantDIDRequest() {}

  explicit CreateTenantDIDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateTenantDIDRequest() = default;
};
class CreateTenantDIDResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DID{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultMessage{};
  shared_ptr<bool> success{};

  CreateTenantDIDResponseBody() {}

  explicit CreateTenantDIDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DID) {
      res["DID"] = boost::any(*DID);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DID") != m.end() && !m["DID"].empty()) {
      DID = make_shared<string>(boost::any_cast<string>(m["DID"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTenantDIDResponseBody() = default;
};
class CreateTenantDIDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTenantDIDResponseBody> body{};

  CreateTenantDIDResponse() {}

  explicit CreateTenantDIDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTenantDIDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTenantDIDResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTenantDIDResponse() = default;
};
class GetDIDRequest : public Darabonba::Model {
public:
  shared_ptr<string> DID{};

  GetDIDRequest() {}

  explicit GetDIDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DID) {
      res["DID"] = boost::any(*DID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DID") != m.end() && !m["DID"].empty()) {
      DID = make_shared<string>(boost::any_cast<string>(m["DID"]));
    }
  }


  virtual ~GetDIDRequest() = default;
};
class GetDIDResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> doc{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultMessage{};
  shared_ptr<bool> success{};

  GetDIDResponseBody() {}

  explicit GetDIDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (doc) {
      res["Doc"] = boost::any(*doc);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Doc") != m.end() && !m["Doc"].empty()) {
      doc = make_shared<string>(boost::any_cast<string>(m["Doc"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDIDResponseBody() = default;
};
class GetDIDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDIDResponseBody> body{};

  GetDIDResponse() {}

  explicit GetDIDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDIDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDIDResponseBody>(model1);
      }
    }
  }


  virtual ~GetDIDResponse() = default;
};
class IssueNormalVerifiableVCRequestBareClaimStructBody : public Darabonba::Model {
public:
  shared_ptr<string> claim{};
  shared_ptr<string> claimType{};

  IssueNormalVerifiableVCRequestBareClaimStructBody() {}

  explicit IssueNormalVerifiableVCRequestBareClaimStructBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (claim) {
      res["Claim"] = boost::any(*claim);
    }
    if (claimType) {
      res["ClaimType"] = boost::any(*claimType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Claim") != m.end() && !m["Claim"].empty()) {
      claim = make_shared<string>(boost::any_cast<string>(m["Claim"]));
    }
    if (m.find("ClaimType") != m.end() && !m["ClaimType"].empty()) {
      claimType = make_shared<string>(boost::any_cast<string>(m["ClaimType"]));
    }
  }


  virtual ~IssueNormalVerifiableVCRequestBareClaimStructBody() = default;
};
class IssueNormalVerifiableVCRequest : public Darabonba::Model {
public:
  shared_ptr<vector<IssueNormalVerifiableVCRequestBareClaimStructBody>> bareClaimStructBody{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> expiration{};
  shared_ptr<string> issuer{};
  shared_ptr<string> subject{};

  IssueNormalVerifiableVCRequest() {}

  explicit IssueNormalVerifiableVCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bareClaimStructBody) {
      vector<boost::any> temp1;
      for(auto item1:*bareClaimStructBody){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BareClaimStructBody"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BareClaimStructBody") != m.end() && !m["BareClaimStructBody"].empty()) {
      if (typeid(vector<boost::any>) == m["BareClaimStructBody"].type()) {
        vector<IssueNormalVerifiableVCRequestBareClaimStructBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BareClaimStructBody"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IssueNormalVerifiableVCRequestBareClaimStructBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bareClaimStructBody = make_shared<vector<IssueNormalVerifiableVCRequestBareClaimStructBody>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<long>(boost::any_cast<long>(m["Expiration"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
  }


  virtual ~IssueNormalVerifiableVCRequest() = default;
};
class IssueNormalVerifiableVCResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> verifiableClaimContent{};
  shared_ptr<string> verifiableClaimId{};

  IssueNormalVerifiableVCResponseBody() {}

  explicit IssueNormalVerifiableVCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (verifiableClaimContent) {
      res["VerifiableClaimContent"] = boost::any(*verifiableClaimContent);
    }
    if (verifiableClaimId) {
      res["VerifiableClaimId"] = boost::any(*verifiableClaimId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("VerifiableClaimContent") != m.end() && !m["VerifiableClaimContent"].empty()) {
      verifiableClaimContent = make_shared<string>(boost::any_cast<string>(m["VerifiableClaimContent"]));
    }
    if (m.find("VerifiableClaimId") != m.end() && !m["VerifiableClaimId"].empty()) {
      verifiableClaimId = make_shared<string>(boost::any_cast<string>(m["VerifiableClaimId"]));
    }
  }


  virtual ~IssueNormalVerifiableVCResponseBody() = default;
};
class IssueNormalVerifiableVCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IssueNormalVerifiableVCResponseBody> body{};

  IssueNormalVerifiableVCResponse() {}

  explicit IssueNormalVerifiableVCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IssueNormalVerifiableVCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IssueNormalVerifiableVCResponseBody>(model1);
      }
    }
  }


  virtual ~IssueNormalVerifiableVCResponse() = default;
};
class UpdateVCRequest : public Darabonba::Model {
public:
  shared_ptr<string> issuerDid{};
  shared_ptr<string> VCId{};
  shared_ptr<string> VCStatus{};

  UpdateVCRequest() {}

  explicit UpdateVCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issuerDid) {
      res["IssuerDid"] = boost::any(*issuerDid);
    }
    if (VCId) {
      res["VCId"] = boost::any(*VCId);
    }
    if (VCStatus) {
      res["VCStatus"] = boost::any(*VCStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IssuerDid") != m.end() && !m["IssuerDid"].empty()) {
      issuerDid = make_shared<string>(boost::any_cast<string>(m["IssuerDid"]));
    }
    if (m.find("VCId") != m.end() && !m["VCId"].empty()) {
      VCId = make_shared<string>(boost::any_cast<string>(m["VCId"]));
    }
    if (m.find("VCStatus") != m.end() && !m["VCStatus"].empty()) {
      VCStatus = make_shared<string>(boost::any_cast<string>(m["VCStatus"]));
    }
  }


  virtual ~UpdateVCRequest() = default;
};
class UpdateVCResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultMessage{};
  shared_ptr<bool> success{};

  UpdateVCResponseBody() {}

  explicit UpdateVCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateVCResponseBody() = default;
};
class UpdateVCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVCResponseBody> body{};

  UpdateVCResponse() {}

  explicit UpdateVCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVCResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVCResponse() = default;
};
class VerifyVerifiableClaimRequest : public Darabonba::Model {
public:
  shared_ptr<string> VCContent{};

  VerifyVerifiableClaimRequest() {}

  explicit VerifyVerifiableClaimRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VCContent) {
      res["VCContent"] = boost::any(*VCContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VCContent") != m.end() && !m["VCContent"].empty()) {
      VCContent = make_shared<string>(boost::any_cast<string>(m["VCContent"]));
    }
  }


  virtual ~VerifyVerifiableClaimRequest() = default;
};
class VerifyVerifiableClaimResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultMessage{};
  shared_ptr<bool> success{};

  VerifyVerifiableClaimResponseBody() {}

  explicit VerifyVerifiableClaimResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VerifyVerifiableClaimResponseBody() = default;
};
class VerifyVerifiableClaimResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyVerifiableClaimResponseBody> body{};

  VerifyVerifiableClaimResponse() {}

  explicit VerifyVerifiableClaimResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyVerifiableClaimResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyVerifiableClaimResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyVerifiableClaimResponse() = default;
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
  CreateEenterpriseDIDResponse createEenterpriseDIDWithOptions(shared_ptr<CreateEenterpriseDIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEenterpriseDIDResponse createEenterpriseDID(shared_ptr<CreateEenterpriseDIDRequest> request);
  CreatePersonalDIDResponse createPersonalDIDWithOptions(shared_ptr<CreatePersonalDIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePersonalDIDResponse createPersonalDID(shared_ptr<CreatePersonalDIDRequest> request);
  CreateTenantDIDResponse createTenantDIDWithOptions(shared_ptr<CreateTenantDIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTenantDIDResponse createTenantDID(shared_ptr<CreateTenantDIDRequest> request);
  GetDIDResponse getDIDWithOptions(shared_ptr<GetDIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDIDResponse getDID(shared_ptr<GetDIDRequest> request);
  IssueNormalVerifiableVCResponse issueNormalVerifiableVCWithOptions(shared_ptr<IssueNormalVerifiableVCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IssueNormalVerifiableVCResponse issueNormalVerifiableVC(shared_ptr<IssueNormalVerifiableVCRequest> request);
  UpdateVCResponse updateVCWithOptions(shared_ptr<UpdateVCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVCResponse updateVC(shared_ptr<UpdateVCRequest> request);
  VerifyVerifiableClaimResponse verifyVerifiableClaimWithOptions(shared_ptr<VerifyVerifiableClaimRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyVerifiableClaimResponse verifyVerifiableClaim(shared_ptr<VerifyVerifiableClaimRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BaasDis20200509

#endif
