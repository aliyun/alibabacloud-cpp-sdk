// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RESOURCEMANAGER20200331_H_
#define ALIBABACLOUD_RESOURCEMANAGER20200331_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ResourceManager20200331 {
class AcceptHandshakeRequest : public Darabonba::Model {
public:
  shared_ptr<string> handshakeId{};

  AcceptHandshakeRequest() {}

  explicit AcceptHandshakeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~AcceptHandshakeRequest() = default;
};
class AcceptHandshakeResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> handshakeId{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> note{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> targetType{};

  AcceptHandshakeResponseBodyHandshake() {}

  explicit AcceptHandshakeResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~AcceptHandshakeResponseBodyHandshake() = default;
};
class AcceptHandshakeResponseBody : public Darabonba::Model {
public:
  shared_ptr<AcceptHandshakeResponseBodyHandshake> handshake{};
  shared_ptr<string> requestId{};

  AcceptHandshakeResponseBody() {}

  explicit AcceptHandshakeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        AcceptHandshakeResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<AcceptHandshakeResponseBodyHandshake>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AcceptHandshakeResponseBody() = default;
};
class AcceptHandshakeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AcceptHandshakeResponseBody> body{};

  AcceptHandshakeResponse() {}

  explicit AcceptHandshakeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AcceptHandshakeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AcceptHandshakeResponseBody>(model1);
      }
    }
  }


  virtual ~AcceptHandshakeResponse() = default;
};
class AttachControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> targetId{};

  AttachControlPolicyRequest() {}

  explicit AttachControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
  }


  virtual ~AttachControlPolicyRequest() = default;
};
class AttachControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachControlPolicyResponseBody() {}

  explicit AttachControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachControlPolicyResponseBody() = default;
};
class AttachControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachControlPolicyResponseBody> body{};

  AttachControlPolicyResponse() {}

  explicit AttachControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~AttachControlPolicyResponse() = default;
};
class AttachPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> resourceGroupId{};

  AttachPolicyRequest() {}

  explicit AttachPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~AttachPolicyRequest() = default;
};
class AttachPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachPolicyResponseBody() {}

  explicit AttachPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachPolicyResponseBody() = default;
};
class AttachPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachPolicyResponseBody> body{};

  AttachPolicyResponse() {}

  explicit AttachPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~AttachPolicyResponse() = default;
};
class BindSecureMobilePhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> secureMobilePhone{};
  shared_ptr<string> verificationCode{};

  BindSecureMobilePhoneRequest() {}

  explicit BindSecureMobilePhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (secureMobilePhone) {
      res["SecureMobilePhone"] = boost::any(*secureMobilePhone);
    }
    if (verificationCode) {
      res["VerificationCode"] = boost::any(*verificationCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("SecureMobilePhone") != m.end() && !m["SecureMobilePhone"].empty()) {
      secureMobilePhone = make_shared<string>(boost::any_cast<string>(m["SecureMobilePhone"]));
    }
    if (m.find("VerificationCode") != m.end() && !m["VerificationCode"].empty()) {
      verificationCode = make_shared<string>(boost::any_cast<string>(m["VerificationCode"]));
    }
  }


  virtual ~BindSecureMobilePhoneRequest() = default;
};
class BindSecureMobilePhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindSecureMobilePhoneResponseBody() {}

  explicit BindSecureMobilePhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindSecureMobilePhoneResponseBody() = default;
};
class BindSecureMobilePhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindSecureMobilePhoneResponseBody> body{};

  BindSecureMobilePhoneResponse() {}

  explicit BindSecureMobilePhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindSecureMobilePhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindSecureMobilePhoneResponseBody>(model1);
      }
    }
  }


  virtual ~BindSecureMobilePhoneResponse() = default;
};
class CancelChangeAccountEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  CancelChangeAccountEmailRequest() {}

  explicit CancelChangeAccountEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~CancelChangeAccountEmailRequest() = default;
};
class CancelChangeAccountEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelChangeAccountEmailResponseBody() {}

  explicit CancelChangeAccountEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelChangeAccountEmailResponseBody() = default;
};
class CancelChangeAccountEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelChangeAccountEmailResponseBody> body{};

  CancelChangeAccountEmailResponse() {}

  explicit CancelChangeAccountEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelChangeAccountEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelChangeAccountEmailResponseBody>(model1);
      }
    }
  }


  virtual ~CancelChangeAccountEmailResponse() = default;
};
class CancelCreateCloudAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  CancelCreateCloudAccountRequest() {}

  explicit CancelCreateCloudAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~CancelCreateCloudAccountRequest() = default;
};
class CancelCreateCloudAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelCreateCloudAccountResponseBody() {}

  explicit CancelCreateCloudAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelCreateCloudAccountResponseBody() = default;
};
class CancelCreateCloudAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelCreateCloudAccountResponseBody> body{};

  CancelCreateCloudAccountResponse() {}

  explicit CancelCreateCloudAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelCreateCloudAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelCreateCloudAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CancelCreateCloudAccountResponse() = default;
};
class CancelHandshakeRequest : public Darabonba::Model {
public:
  shared_ptr<string> handshakeId{};

  CancelHandshakeRequest() {}

  explicit CancelHandshakeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~CancelHandshakeRequest() = default;
};
class CancelHandshakeResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> handshakeId{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> note{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> targetType{};

  CancelHandshakeResponseBodyHandshake() {}

  explicit CancelHandshakeResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CancelHandshakeResponseBodyHandshake() = default;
};
class CancelHandshakeResponseBody : public Darabonba::Model {
public:
  shared_ptr<CancelHandshakeResponseBodyHandshake> handshake{};
  shared_ptr<string> requestId{};

  CancelHandshakeResponseBody() {}

  explicit CancelHandshakeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        CancelHandshakeResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<CancelHandshakeResponseBodyHandshake>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelHandshakeResponseBody() = default;
};
class CancelHandshakeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelHandshakeResponseBody> body{};

  CancelHandshakeResponse() {}

  explicit CancelHandshakeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelHandshakeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelHandshakeResponseBody>(model1);
      }
    }
  }


  virtual ~CancelHandshakeResponse() = default;
};
class CancelPromoteResourceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  CancelPromoteResourceAccountRequest() {}

  explicit CancelPromoteResourceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~CancelPromoteResourceAccountRequest() = default;
};
class CancelPromoteResourceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelPromoteResourceAccountResponseBody() {}

  explicit CancelPromoteResourceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelPromoteResourceAccountResponseBody() = default;
};
class CancelPromoteResourceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelPromoteResourceAccountResponseBody> body{};

  CancelPromoteResourceAccountResponse() {}

  explicit CancelPromoteResourceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelPromoteResourceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelPromoteResourceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CancelPromoteResourceAccountResponse() = default;
};
class ChangeAccountEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> email{};

  ChangeAccountEmailRequest() {}

  explicit ChangeAccountEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
  }


  virtual ~ChangeAccountEmailRequest() = default;
};
class ChangeAccountEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeAccountEmailResponseBody() {}

  explicit ChangeAccountEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeAccountEmailResponseBody() = default;
};
class ChangeAccountEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeAccountEmailResponseBody> body{};

  ChangeAccountEmailResponse() {}

  explicit ChangeAccountEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeAccountEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeAccountEmailResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeAccountEmailResponse() = default;
};
class CheckAccountDeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  CheckAccountDeleteRequest() {}

  explicit CheckAccountDeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~CheckAccountDeleteRequest() = default;
};
class CheckAccountDeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CheckAccountDeleteResponseBody() {}

  explicit CheckAccountDeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CheckAccountDeleteResponseBody() = default;
};
class CheckAccountDeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckAccountDeleteResponseBody> body{};

  CheckAccountDeleteResponse() {}

  explicit CheckAccountDeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckAccountDeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAccountDeleteResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAccountDeleteResponse() = default;
};
class CreateAutoGroupingRuleRequestRuleContents : public Darabonba::Model {
public:
  shared_ptr<string> autoGroupingScopeCondition{};
  shared_ptr<string> targetResourceGroupCondition{};

  CreateAutoGroupingRuleRequestRuleContents() {}

  explicit CreateAutoGroupingRuleRequestRuleContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoGroupingScopeCondition) {
      res["AutoGroupingScopeCondition"] = boost::any(*autoGroupingScopeCondition);
    }
    if (targetResourceGroupCondition) {
      res["TargetResourceGroupCondition"] = boost::any(*targetResourceGroupCondition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoGroupingScopeCondition") != m.end() && !m["AutoGroupingScopeCondition"].empty()) {
      autoGroupingScopeCondition = make_shared<string>(boost::any_cast<string>(m["AutoGroupingScopeCondition"]));
    }
    if (m.find("TargetResourceGroupCondition") != m.end() && !m["TargetResourceGroupCondition"].empty()) {
      targetResourceGroupCondition = make_shared<string>(boost::any_cast<string>(m["TargetResourceGroupCondition"]));
    }
  }


  virtual ~CreateAutoGroupingRuleRequestRuleContents() = default;
};
class CreateAutoGroupingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> excludeRegionIdsScope{};
  shared_ptr<string> excludeResourceGroupIdsScope{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<string> excludeResourceTypesScope{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceIdsScope{};
  shared_ptr<string> resourceTypesScope{};
  shared_ptr<vector<CreateAutoGroupingRuleRequestRuleContents>> ruleContents{};
  shared_ptr<string> ruleDesc{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};

  CreateAutoGroupingRuleRequest() {}

  explicit CreateAutoGroupingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeRegionIdsScope) {
      res["ExcludeRegionIdsScope"] = boost::any(*excludeRegionIdsScope);
    }
    if (excludeResourceGroupIdsScope) {
      res["ExcludeResourceGroupIdsScope"] = boost::any(*excludeResourceGroupIdsScope);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (excludeResourceTypesScope) {
      res["ExcludeResourceTypesScope"] = boost::any(*excludeResourceTypesScope);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceIdsScope) {
      res["ResourceIdsScope"] = boost::any(*resourceIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (ruleContents) {
      vector<boost::any> temp1;
      for(auto item1:*ruleContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleContents"] = boost::any(temp1);
    }
    if (ruleDesc) {
      res["RuleDesc"] = boost::any(*ruleDesc);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeRegionIdsScope") != m.end() && !m["ExcludeRegionIdsScope"].empty()) {
      excludeRegionIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeRegionIdsScope"]));
    }
    if (m.find("ExcludeResourceGroupIdsScope") != m.end() && !m["ExcludeResourceGroupIdsScope"].empty()) {
      excludeResourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceGroupIdsScope"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("ExcludeResourceTypesScope") != m.end() && !m["ExcludeResourceTypesScope"].empty()) {
      excludeResourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceTypesScope"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceIdsScope") != m.end() && !m["ResourceIdsScope"].empty()) {
      resourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RuleContents") != m.end() && !m["RuleContents"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleContents"].type()) {
        vector<CreateAutoGroupingRuleRequestRuleContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAutoGroupingRuleRequestRuleContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleContents = make_shared<vector<CreateAutoGroupingRuleRequestRuleContents>>(expect1);
      }
    }
    if (m.find("RuleDesc") != m.end() && !m["RuleDesc"].empty()) {
      ruleDesc = make_shared<string>(boost::any_cast<string>(m["RuleDesc"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~CreateAutoGroupingRuleRequest() = default;
};
class CreateAutoGroupingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ruleId{};

  CreateAutoGroupingRuleResponseBody() {}

  explicit CreateAutoGroupingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~CreateAutoGroupingRuleResponseBody() = default;
};
class CreateAutoGroupingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAutoGroupingRuleResponseBody> body{};

  CreateAutoGroupingRuleResponse() {}

  explicit CreateAutoGroupingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAutoGroupingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAutoGroupingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAutoGroupingRuleResponse() = default;
};
class CreateCloudAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> payerAccountId{};

  CreateCloudAccountRequest() {}

  explicit CreateCloudAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (payerAccountId) {
      res["PayerAccountId"] = boost::any(*payerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("PayerAccountId") != m.end() && !m["PayerAccountId"].empty()) {
      payerAccountId = make_shared<string>(boost::any_cast<string>(m["PayerAccountId"]));
    }
  }


  virtual ~CreateCloudAccountRequest() = default;
};
class CreateCloudAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> recordId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  CreateCloudAccountResponseBodyAccount() {}

  explicit CreateCloudAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateCloudAccountResponseBodyAccount() = default;
};
class CreateCloudAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateCloudAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  CreateCloudAccountResponseBody() {}

  explicit CreateCloudAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        CreateCloudAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<CreateCloudAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCloudAccountResponseBody() = default;
};
class CreateCloudAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCloudAccountResponseBody> body{};

  CreateCloudAccountResponse() {}

  explicit CreateCloudAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCloudAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCloudAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCloudAccountResponse() = default;
};
class CreateControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyName{};

  CreateControlPolicyRequest() {}

  explicit CreateControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~CreateControlPolicyRequest() = default;
};
class CreateControlPolicyResponseBodyControlPolicy : public Darabonba::Model {
public:
  shared_ptr<string> attachmentCount{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> updateDate{};

  CreateControlPolicyResponseBodyControlPolicy() {}

  explicit CreateControlPolicyResponseBodyControlPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<string>(boost::any_cast<string>(m["AttachmentCount"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~CreateControlPolicyResponseBodyControlPolicy() = default;
};
class CreateControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateControlPolicyResponseBodyControlPolicy> controlPolicy{};
  shared_ptr<string> requestId{};

  CreateControlPolicyResponseBody() {}

  explicit CreateControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicy) {
      res["ControlPolicy"] = controlPolicy ? boost::any(controlPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicy") != m.end() && !m["ControlPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicy"].type()) {
        CreateControlPolicyResponseBodyControlPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicy"]));
        controlPolicy = make_shared<CreateControlPolicyResponseBodyControlPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateControlPolicyResponseBody() = default;
};
class CreateControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateControlPolicyResponseBody> body{};

  CreateControlPolicyResponse() {}

  explicit CreateControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateControlPolicyResponse() = default;
};
class CreateFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderName{};
  shared_ptr<string> parentFolderId{};

  CreateFolderRequest() {}

  explicit CreateFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
  }


  virtual ~CreateFolderRequest() = default;
};
class CreateFolderResponseBodyFolder : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> folderId{};
  shared_ptr<string> folderName{};
  shared_ptr<string> parentFolderId{};

  CreateFolderResponseBodyFolder() {}

  explicit CreateFolderResponseBodyFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
  }


  virtual ~CreateFolderResponseBodyFolder() = default;
};
class CreateFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateFolderResponseBodyFolder> folder{};
  shared_ptr<string> requestId{};

  CreateFolderResponseBody() {}

  explicit CreateFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folder) {
      res["Folder"] = folder ? boost::any(folder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folder"].type()) {
        CreateFolderResponseBodyFolder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folder"]));
        folder = make_shared<CreateFolderResponseBodyFolder>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFolderResponseBody() = default;
};
class CreateFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFolderResponseBody> body{};

  CreateFolderResponse() {}

  explicit CreateFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFolderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFolderResponse() = default;
};
class CreatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyName{};

  CreatePolicyRequest() {}

  explicit CreatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~CreatePolicyRequest() = default;
};
class CreatePolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  CreatePolicyResponseBodyPolicy() {}

  explicit CreatePolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~CreatePolicyResponseBodyPolicy() = default;
};
class CreatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  CreatePolicyResponseBody() {}

  explicit CreatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        CreatePolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<CreatePolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePolicyResponseBody() = default;
};
class CreatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyResponseBody> body{};

  CreatePolicyResponse() {}

  explicit CreatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyResponse() = default;
};
class CreatePolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyName{};
  shared_ptr<bool> setAsDefault{};

  CreatePolicyVersionRequest() {}

  explicit CreatePolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (setAsDefault) {
      res["SetAsDefault"] = boost::any(*setAsDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("SetAsDefault") != m.end() && !m["SetAsDefault"].empty()) {
      setAsDefault = make_shared<bool>(boost::any_cast<bool>(m["SetAsDefault"]));
    }
  }


  virtual ~CreatePolicyVersionRequest() = default;
};
class CreatePolicyVersionResponseBodyPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> versionId{};

  CreatePolicyVersionResponseBodyPolicyVersion() {}

  explicit CreatePolicyVersionResponseBodyPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~CreatePolicyVersionResponseBodyPolicyVersion() = default;
};
class CreatePolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePolicyVersionResponseBodyPolicyVersion> policyVersion{};
  shared_ptr<string> requestId{};

  CreatePolicyVersionResponseBody() {}

  explicit CreatePolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersion) {
      res["PolicyVersion"] = policyVersion ? boost::any(policyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyVersion"].type()) {
        CreatePolicyVersionResponseBodyPolicyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyVersion"]));
        policyVersion = make_shared<CreatePolicyVersionResponseBodyPolicyVersion>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePolicyVersionResponseBody() = default;
};
class CreatePolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyVersionResponseBody> body{};

  CreatePolicyVersionResponse() {}

  explicit CreatePolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyVersionResponse() = default;
};
class CreateResourceAccountRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateResourceAccountRequestTag() {}

  explicit CreateResourceAccountRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateResourceAccountRequestTag() = default;
};
class CreateResourceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNamePrefix{};
  shared_ptr<string> displayName{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> payerAccountId{};
  shared_ptr<string> resellAccountType{};
  shared_ptr<vector<CreateResourceAccountRequestTag>> tag{};

  CreateResourceAccountRequest() {}

  explicit CreateResourceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNamePrefix) {
      res["AccountNamePrefix"] = boost::any(*accountNamePrefix);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (payerAccountId) {
      res["PayerAccountId"] = boost::any(*payerAccountId);
    }
    if (resellAccountType) {
      res["ResellAccountType"] = boost::any(*resellAccountType);
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
    if (m.find("AccountNamePrefix") != m.end() && !m["AccountNamePrefix"].empty()) {
      accountNamePrefix = make_shared<string>(boost::any_cast<string>(m["AccountNamePrefix"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("PayerAccountId") != m.end() && !m["PayerAccountId"].empty()) {
      payerAccountId = make_shared<string>(boost::any_cast<string>(m["PayerAccountId"]));
    }
    if (m.find("ResellAccountType") != m.end() && !m["ResellAccountType"].empty()) {
      resellAccountType = make_shared<string>(boost::any_cast<string>(m["ResellAccountType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateResourceAccountRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceAccountRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateResourceAccountRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateResourceAccountRequest() = default;
};
class CreateResourceAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  CreateResourceAccountResponseBodyAccount() {}

  explicit CreateResourceAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateResourceAccountResponseBodyAccount() = default;
};
class CreateResourceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateResourceAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  CreateResourceAccountResponseBody() {}

  explicit CreateResourceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        CreateResourceAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<CreateResourceAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateResourceAccountResponseBody() = default;
};
class CreateResourceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceAccountResponseBody> body{};

  CreateResourceAccountResponse() {}

  explicit CreateResourceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceAccountResponse() = default;
};
class CreateResourceGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateResourceGroupRequestTag() {}

  explicit CreateResourceGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateResourceGroupRequestTag() = default;
};
class CreateResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateResourceGroupRequestTag>> tag{};

  CreateResourceGroupRequest() {}

  explicit CreateResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateResourceGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateResourceGroupRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateResourceGroupRequest() = default;
};
class CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() {}

  explicit CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default;
};
class CreateResourceGroupResponseBodyResourceGroupRegionStatuses : public Darabonba::Model {
public:
  shared_ptr<vector<CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>> regionStatus{};

  CreateResourceGroupResponseBodyResourceGroupRegionStatuses() {}

  explicit CreateResourceGroupResponseBodyResourceGroupRegionStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionStatus) {
      vector<boost::any> temp1;
      for(auto item1:*regionStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionStatus"].type()) {
        vector<CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionStatus = make_shared<vector<CreateResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>>(expect1);
      }
    }
  }


  virtual ~CreateResourceGroupResponseBodyResourceGroupRegionStatuses() = default;
};
class CreateResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<CreateResourceGroupResponseBodyResourceGroupRegionStatuses> regionStatuses{};
  shared_ptr<string> status{};

  CreateResourceGroupResponseBodyResourceGroup() {}

  explicit CreateResourceGroupResponseBodyResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionStatuses) {
      res["RegionStatuses"] = regionStatuses ? boost::any(regionStatuses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionStatuses") != m.end() && !m["RegionStatuses"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegionStatuses"].type()) {
        CreateResourceGroupResponseBodyResourceGroupRegionStatuses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegionStatuses"]));
        regionStatuses = make_shared<CreateResourceGroupResponseBodyResourceGroupRegionStatuses>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateResourceGroupResponseBodyResourceGroup() = default;
};
class CreateResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateResourceGroupResponseBodyResourceGroup> resourceGroup{};

  CreateResourceGroupResponseBody() {}

  explicit CreateResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = resourceGroup ? boost::any(resourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroup"].type()) {
        CreateResourceGroupResponseBodyResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroup"]));
        resourceGroup = make_shared<CreateResourceGroupResponseBodyResourceGroup>(model1);
      }
    }
  }


  virtual ~CreateResourceGroupResponseBody() = default;
};
class CreateResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceGroupResponseBody> body{};

  CreateResourceGroupResponse() {}

  explicit CreateResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceGroupResponse() = default;
};
class CreateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleName{};

  CreateRoleRequest() {}

  explicit CreateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateRoleRequest() = default;
};
class CreateRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> rolePrincipalName{};

  CreateRoleResponseBodyRole() {}

  explicit CreateRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
  }


  virtual ~CreateRoleResponseBodyRole() = default;
};
class CreateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateRoleResponseBodyRole> role{};

  CreateRoleResponseBody() {}

  explicit CreateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        CreateRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<CreateRoleResponseBodyRole>(model1);
      }
    }
  }


  virtual ~CreateRoleResponseBody() = default;
};
class CreateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRoleResponseBody> body{};

  CreateRoleResponse() {}

  explicit CreateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoleResponse() = default;
};
class CreateServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> customSuffix{};
  shared_ptr<string> description{};
  shared_ptr<string> serviceName{};

  CreateServiceLinkedRoleRequest() {}

  explicit CreateServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customSuffix) {
      res["CustomSuffix"] = boost::any(*customSuffix);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomSuffix") != m.end() && !m["CustomSuffix"].empty()) {
      customSuffix = make_shared<string>(boost::any_cast<string>(m["CustomSuffix"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~CreateServiceLinkedRoleRequest() = default;
};
class CreateServiceLinkedRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> isServiceLinkedRole{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> rolePrincipalName{};

  CreateServiceLinkedRoleResponseBodyRole() {}

  explicit CreateServiceLinkedRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isServiceLinkedRole) {
      res["IsServiceLinkedRole"] = boost::any(*isServiceLinkedRole);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsServiceLinkedRole") != m.end() && !m["IsServiceLinkedRole"].empty()) {
      isServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["IsServiceLinkedRole"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
  }


  virtual ~CreateServiceLinkedRoleResponseBodyRole() = default;
};
class CreateServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateServiceLinkedRoleResponseBodyRole> role{};

  CreateServiceLinkedRoleResponseBody() {}

  explicit CreateServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        CreateServiceLinkedRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<CreateServiceLinkedRoleResponseBodyRole>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleResponseBody() = default;
};
class CreateServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceLinkedRoleResponseBody> body{};

  CreateServiceLinkedRoleResponse() {}

  explicit CreateServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleResponse() = default;
};
class DeclineHandshakeRequest : public Darabonba::Model {
public:
  shared_ptr<string> handshakeId{};

  DeclineHandshakeRequest() {}

  explicit DeclineHandshakeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~DeclineHandshakeRequest() = default;
};
class DeclineHandshakeResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> handshakeId{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> note{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> targetType{};

  DeclineHandshakeResponseBodyHandshake() {}

  explicit DeclineHandshakeResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~DeclineHandshakeResponseBodyHandshake() = default;
};
class DeclineHandshakeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeclineHandshakeResponseBodyHandshake> handshake{};
  shared_ptr<string> requestId{};

  DeclineHandshakeResponseBody() {}

  explicit DeclineHandshakeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        DeclineHandshakeResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<DeclineHandshakeResponseBodyHandshake>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeclineHandshakeResponseBody() = default;
};
class DeclineHandshakeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeclineHandshakeResponseBody> body{};

  DeclineHandshakeResponse() {}

  explicit DeclineHandshakeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeclineHandshakeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeclineHandshakeResponseBody>(model1);
      }
    }
  }


  virtual ~DeclineHandshakeResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> abandonableCheckId{};
  shared_ptr<string> accountId{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonableCheckId) {
      res["AbandonableCheckId"] = boost::any(*abandonableCheckId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonableCheckId") != m.end() && !m["AbandonableCheckId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AbandonableCheckId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AbandonableCheckId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      abandonableCheckId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~DeleteAccountRequest() = default;
};
class DeleteAccountShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> abandonableCheckIdShrink{};
  shared_ptr<string> accountId{};

  DeleteAccountShrinkRequest() {}

  explicit DeleteAccountShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonableCheckIdShrink) {
      res["AbandonableCheckId"] = boost::any(*abandonableCheckIdShrink);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonableCheckId") != m.end() && !m["AbandonableCheckId"].empty()) {
      abandonableCheckIdShrink = make_shared<string>(boost::any_cast<string>(m["AbandonableCheckId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~DeleteAccountShrinkRequest() = default;
};
class DeleteAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deletionType{};
  shared_ptr<string> requestId{};

  DeleteAccountResponseBody() {}

  explicit DeleteAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionType) {
      res["DeletionType"] = boost::any(*deletionType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionType") != m.end() && !m["DeletionType"].empty()) {
      deletionType = make_shared<string>(boost::any_cast<string>(m["DeletionType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAccountResponseBody() = default;
};
class DeleteAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccountResponseBody> body{};

  DeleteAccountResponse() {}

  explicit DeleteAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccountResponse() = default;
};
class DeleteAutoGroupingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ruleId{};

  DeleteAutoGroupingRuleRequest() {}

  explicit DeleteAutoGroupingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DeleteAutoGroupingRuleRequest() = default;
};
class DeleteAutoGroupingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAutoGroupingRuleResponseBody() {}

  explicit DeleteAutoGroupingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAutoGroupingRuleResponseBody() = default;
};
class DeleteAutoGroupingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAutoGroupingRuleResponseBody> body{};

  DeleteAutoGroupingRuleResponse() {}

  explicit DeleteAutoGroupingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAutoGroupingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAutoGroupingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAutoGroupingRuleResponse() = default;
};
class DeleteControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};

  DeleteControlPolicyRequest() {}

  explicit DeleteControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~DeleteControlPolicyRequest() = default;
};
class DeleteControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteControlPolicyResponseBody() {}

  explicit DeleteControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteControlPolicyResponseBody() = default;
};
class DeleteControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteControlPolicyResponseBody> body{};

  DeleteControlPolicyResponse() {}

  explicit DeleteControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteControlPolicyResponse() = default;
};
class DeleteFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};

  DeleteFolderRequest() {}

  explicit DeleteFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
  }


  virtual ~DeleteFolderRequest() = default;
};
class DeleteFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFolderResponseBody() {}

  explicit DeleteFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFolderResponseBody() = default;
};
class DeleteFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFolderResponseBody> body{};

  DeleteFolderResponse() {}

  explicit DeleteFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFolderResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFolderResponse() = default;
};
class DeletePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};

  DeletePolicyRequest() {}

  explicit DeletePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~DeletePolicyRequest() = default;
};
class DeletePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyResponseBody() {}

  explicit DeletePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePolicyResponseBody() = default;
};
class DeletePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyResponseBody> body{};

  DeletePolicyResponse() {}

  explicit DeletePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyResponse() = default;
};
class DeletePolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> versionId{};

  DeletePolicyVersionRequest() {}

  explicit DeletePolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~DeletePolicyVersionRequest() = default;
};
class DeletePolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyVersionResponseBody() {}

  explicit DeletePolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePolicyVersionResponseBody() = default;
};
class DeletePolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyVersionResponseBody> body{};

  DeletePolicyVersionResponse() {}

  explicit DeletePolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyVersionResponse() = default;
};
class DeleteResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  DeleteResourceGroupRequest() {}

  explicit DeleteResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DeleteResourceGroupRequest() = default;
};
class DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() {}

  explicit DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default;
};
class DeleteResourceGroupResponseBodyResourceGroupRegionStatuses : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>> regionStatus{};

  DeleteResourceGroupResponseBodyResourceGroupRegionStatuses() {}

  explicit DeleteResourceGroupResponseBodyResourceGroupRegionStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionStatus) {
      vector<boost::any> temp1;
      for(auto item1:*regionStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionStatus"].type()) {
        vector<DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionStatus = make_shared<vector<DeleteResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>>(expect1);
      }
    }
  }


  virtual ~DeleteResourceGroupResponseBodyResourceGroupRegionStatuses() = default;
};
class DeleteResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<DeleteResourceGroupResponseBodyResourceGroupRegionStatuses> regionStatuses{};
  shared_ptr<string> status{};

  DeleteResourceGroupResponseBodyResourceGroup() {}

  explicit DeleteResourceGroupResponseBodyResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionStatuses) {
      res["RegionStatuses"] = regionStatuses ? boost::any(regionStatuses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionStatuses") != m.end() && !m["RegionStatuses"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegionStatuses"].type()) {
        DeleteResourceGroupResponseBodyResourceGroupRegionStatuses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegionStatuses"]));
        regionStatuses = make_shared<DeleteResourceGroupResponseBodyResourceGroupRegionStatuses>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteResourceGroupResponseBodyResourceGroup() = default;
};
class DeleteResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteResourceGroupResponseBodyResourceGroup> resourceGroup{};

  DeleteResourceGroupResponseBody() {}

  explicit DeleteResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = resourceGroup ? boost::any(resourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroup"].type()) {
        DeleteResourceGroupResponseBodyResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroup"]));
        resourceGroup = make_shared<DeleteResourceGroupResponseBodyResourceGroup>(model1);
      }
    }
  }


  virtual ~DeleteResourceGroupResponseBody() = default;
};
class DeleteResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceGroupResponseBody> body{};

  DeleteResourceGroupResponse() {}

  explicit DeleteResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceGroupResponse() = default;
};
class DeleteRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  DeleteRoleRequest() {}

  explicit DeleteRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~DeleteRoleRequest() = default;
};
class DeleteRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRoleResponseBody() {}

  explicit DeleteRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRoleResponseBody() = default;
};
class DeleteRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRoleResponseBody> body{};

  DeleteRoleResponse() {}

  explicit DeleteRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRoleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRoleResponse() = default;
};
class DeleteServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  DeleteServiceLinkedRoleRequest() {}

  explicit DeleteServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~DeleteServiceLinkedRoleRequest() = default;
};
class DeleteServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deletionTaskId{};
  shared_ptr<string> requestId{};

  DeleteServiceLinkedRoleResponseBody() {}

  explicit DeleteServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteServiceLinkedRoleResponseBody() = default;
};
class DeleteServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceLinkedRoleResponseBody> body{};

  DeleteServiceLinkedRoleResponse() {}

  explicit DeleteServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceLinkedRoleResponse() = default;
};
class DeregisterDelegatedAdministratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> servicePrincipal{};

  DeregisterDelegatedAdministratorRequest() {}

  explicit DeregisterDelegatedAdministratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
  }


  virtual ~DeregisterDelegatedAdministratorRequest() = default;
};
class DeregisterDelegatedAdministratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeregisterDelegatedAdministratorResponseBody() {}

  explicit DeregisterDelegatedAdministratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeregisterDelegatedAdministratorResponseBody() = default;
};
class DeregisterDelegatedAdministratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeregisterDelegatedAdministratorResponseBody> body{};

  DeregisterDelegatedAdministratorResponse() {}

  explicit DeregisterDelegatedAdministratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeregisterDelegatedAdministratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeregisterDelegatedAdministratorResponseBody>(model1);
      }
    }
  }


  virtual ~DeregisterDelegatedAdministratorResponse() = default;
};
class DestroyResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DestroyResourceDirectoryResponseBody() {}

  explicit DestroyResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DestroyResourceDirectoryResponseBody() = default;
};
class DestroyResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DestroyResourceDirectoryResponseBody> body{};

  DestroyResourceDirectoryResponse() {}

  explicit DestroyResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DestroyResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DestroyResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~DestroyResourceDirectoryResponse() = default;
};
class DetachControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> targetId{};

  DetachControlPolicyRequest() {}

  explicit DetachControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
  }


  virtual ~DetachControlPolicyRequest() = default;
};
class DetachControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachControlPolicyResponseBody() {}

  explicit DetachControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachControlPolicyResponseBody() = default;
};
class DetachControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachControlPolicyResponseBody> body{};

  DetachControlPolicyResponse() {}

  explicit DetachControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DetachControlPolicyResponse() = default;
};
class DetachPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> resourceGroupId{};

  DetachPolicyRequest() {}

  explicit DetachPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DetachPolicyRequest() = default;
};
class DetachPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachPolicyResponseBody() {}

  explicit DetachPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachPolicyResponseBody() = default;
};
class DetachPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachPolicyResponseBody> body{};

  DetachPolicyResponse() {}

  explicit DetachPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DetachPolicyResponse() = default;
};
class DisableAssociatedTransferResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableAssociatedTransferResponseBody() {}

  explicit DisableAssociatedTransferResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableAssociatedTransferResponseBody() = default;
};
class DisableAssociatedTransferResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableAssociatedTransferResponseBody> body{};

  DisableAssociatedTransferResponse() {}

  explicit DisableAssociatedTransferResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableAssociatedTransferResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAssociatedTransferResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAssociatedTransferResponse() = default;
};
class DisableAutoGroupingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableAutoGroupingResponseBody() {}

  explicit DisableAutoGroupingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableAutoGroupingResponseBody() = default;
};
class DisableAutoGroupingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableAutoGroupingResponseBody> body{};

  DisableAutoGroupingResponse() {}

  explicit DisableAutoGroupingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableAutoGroupingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAutoGroupingResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAutoGroupingResponse() = default;
};
class DisableControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> enablementStatus{};
  shared_ptr<string> requestId{};

  DisableControlPolicyResponseBody() {}

  explicit DisableControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablementStatus) {
      res["EnablementStatus"] = boost::any(*enablementStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablementStatus") != m.end() && !m["EnablementStatus"].empty()) {
      enablementStatus = make_shared<string>(boost::any_cast<string>(m["EnablementStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DisableControlPolicyResponseBody() = default;
};
class DisableControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableControlPolicyResponseBody> body{};

  DisableControlPolicyResponse() {}

  explicit DisableControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DisableControlPolicyResponse() = default;
};
class EnableAssociatedTransferResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableAssociatedTransferResponseBody() {}

  explicit EnableAssociatedTransferResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableAssociatedTransferResponseBody() = default;
};
class EnableAssociatedTransferResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAssociatedTransferResponseBody> body{};

  EnableAssociatedTransferResponse() {}

  explicit EnableAssociatedTransferResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAssociatedTransferResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAssociatedTransferResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAssociatedTransferResponse() = default;
};
class EnableAutoGroupingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableAutoGroupingResponseBody() {}

  explicit EnableAutoGroupingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableAutoGroupingResponseBody() = default;
};
class EnableAutoGroupingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAutoGroupingResponseBody> body{};

  EnableAutoGroupingResponse() {}

  explicit EnableAutoGroupingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAutoGroupingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAutoGroupingResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAutoGroupingResponse() = default;
};
class EnableControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> enablementStatus{};
  shared_ptr<string> requestId{};

  EnableControlPolicyResponseBody() {}

  explicit EnableControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablementStatus) {
      res["EnablementStatus"] = boost::any(*enablementStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablementStatus") != m.end() && !m["EnablementStatus"].empty()) {
      enablementStatus = make_shared<string>(boost::any_cast<string>(m["EnablementStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableControlPolicyResponseBody() = default;
};
class EnableControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableControlPolicyResponseBody> body{};

  EnableControlPolicyResponse() {}

  explicit EnableControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~EnableControlPolicyResponse() = default;
};
class EnableResourceDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> enableMode{};
  shared_ptr<string> MAName{};
  shared_ptr<string> MASecureMobilePhone{};
  shared_ptr<string> verificationCode{};

  EnableResourceDirectoryRequest() {}

  explicit EnableResourceDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableMode) {
      res["EnableMode"] = boost::any(*enableMode);
    }
    if (MAName) {
      res["MAName"] = boost::any(*MAName);
    }
    if (MASecureMobilePhone) {
      res["MASecureMobilePhone"] = boost::any(*MASecureMobilePhone);
    }
    if (verificationCode) {
      res["VerificationCode"] = boost::any(*verificationCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableMode") != m.end() && !m["EnableMode"].empty()) {
      enableMode = make_shared<string>(boost::any_cast<string>(m["EnableMode"]));
    }
    if (m.find("MAName") != m.end() && !m["MAName"].empty()) {
      MAName = make_shared<string>(boost::any_cast<string>(m["MAName"]));
    }
    if (m.find("MASecureMobilePhone") != m.end() && !m["MASecureMobilePhone"].empty()) {
      MASecureMobilePhone = make_shared<string>(boost::any_cast<string>(m["MASecureMobilePhone"]));
    }
    if (m.find("VerificationCode") != m.end() && !m["VerificationCode"].empty()) {
      verificationCode = make_shared<string>(boost::any_cast<string>(m["VerificationCode"]));
    }
  }


  virtual ~EnableResourceDirectoryRequest() = default;
};
class EnableResourceDirectoryResponseBodyResourceDirectory : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> rootFolderId{};

  EnableResourceDirectoryResponseBodyResourceDirectory() {}

  explicit EnableResourceDirectoryResponseBodyResourceDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (rootFolderId) {
      res["RootFolderId"] = boost::any(*rootFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("RootFolderId") != m.end() && !m["RootFolderId"].empty()) {
      rootFolderId = make_shared<string>(boost::any_cast<string>(m["RootFolderId"]));
    }
  }


  virtual ~EnableResourceDirectoryResponseBodyResourceDirectory() = default;
};
class EnableResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EnableResourceDirectoryResponseBodyResourceDirectory> resourceDirectory{};

  EnableResourceDirectoryResponseBody() {}

  explicit EnableResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDirectory) {
      res["ResourceDirectory"] = resourceDirectory ? boost::any(resourceDirectory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDirectory") != m.end() && !m["ResourceDirectory"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceDirectory"].type()) {
        EnableResourceDirectoryResponseBodyResourceDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceDirectory"]));
        resourceDirectory = make_shared<EnableResourceDirectoryResponseBodyResourceDirectory>(model1);
      }
    }
  }


  virtual ~EnableResourceDirectoryResponseBody() = default;
};
class EnableResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableResourceDirectoryResponseBody> body{};

  EnableResourceDirectoryResponse() {}

  explicit EnableResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~EnableResourceDirectoryResponse() = default;
};
class GetAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<bool> includeTags{};

  GetAccountRequest() {}

  explicit GetAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (includeTags) {
      res["IncludeTags"] = boost::any(*includeTags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("IncludeTags") != m.end() && !m["IncludeTags"].empty()) {
      includeTags = make_shared<bool>(boost::any_cast<bool>(m["IncludeTags"]));
    }
  }


  virtual ~GetAccountRequest() = default;
};
class GetAccountResponseBodyAccountTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetAccountResponseBodyAccountTags() {}

  explicit GetAccountResponseBodyAccountTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAccountResponseBodyAccountTags() = default;
};
class GetAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> emailStatus{};
  shared_ptr<string> folderId{};
  shared_ptr<string> identityInformation{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> location{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> resourceDirectoryPath{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetAccountResponseBodyAccountTags>> tags{};
  shared_ptr<string> type{};

  GetAccountResponseBodyAccount() {}

  explicit GetAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (emailStatus) {
      res["EmailStatus"] = boost::any(*emailStatus);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (identityInformation) {
      res["IdentityInformation"] = boost::any(*identityInformation);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (resourceDirectoryPath) {
      res["ResourceDirectoryPath"] = boost::any(*resourceDirectoryPath);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("EmailStatus") != m.end() && !m["EmailStatus"].empty()) {
      emailStatus = make_shared<string>(boost::any_cast<string>(m["EmailStatus"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("IdentityInformation") != m.end() && !m["IdentityInformation"].empty()) {
      identityInformation = make_shared<string>(boost::any_cast<string>(m["IdentityInformation"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("ResourceDirectoryPath") != m.end() && !m["ResourceDirectoryPath"].empty()) {
      resourceDirectoryPath = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryPath"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetAccountResponseBodyAccountTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccountResponseBodyAccountTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetAccountResponseBodyAccountTags>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetAccountResponseBodyAccount() = default;
};
class GetAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  GetAccountResponseBody() {}

  explicit GetAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        GetAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<GetAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccountResponseBody() = default;
};
class GetAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountResponseBody> body{};

  GetAccountResponse() {}

  explicit GetAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountResponse() = default;
};
class GetAccountDeletionCheckResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  GetAccountDeletionCheckResultRequest() {}

  explicit GetAccountDeletionCheckResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~GetAccountDeletionCheckResultRequest() = default;
};
class GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks : public Darabonba::Model {
public:
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<string> description{};

  GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks() {}

  explicit GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks() = default;
};
class GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason : public Darabonba::Model {
public:
  shared_ptr<string> checkId{};
  shared_ptr<string> checkName{};
  shared_ptr<string> description{};

  GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason() {}

  explicit GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkId) {
      res["CheckId"] = boost::any(*checkId);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckId") != m.end() && !m["CheckId"].empty()) {
      checkId = make_shared<string>(boost::any_cast<string>(m["CheckId"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason() = default;
};
class GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks>> abandonableChecks{};
  shared_ptr<string> allowDelete{};
  shared_ptr<vector<GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason>> notAllowReason{};
  shared_ptr<string> status{};

  GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo() {}

  explicit GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abandonableChecks) {
      vector<boost::any> temp1;
      for(auto item1:*abandonableChecks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AbandonableChecks"] = boost::any(temp1);
    }
    if (allowDelete) {
      res["AllowDelete"] = boost::any(*allowDelete);
    }
    if (notAllowReason) {
      vector<boost::any> temp1;
      for(auto item1:*notAllowReason){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NotAllowReason"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbandonableChecks") != m.end() && !m["AbandonableChecks"].empty()) {
      if (typeid(vector<boost::any>) == m["AbandonableChecks"].type()) {
        vector<GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AbandonableChecks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        abandonableChecks = make_shared<vector<GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoAbandonableChecks>>(expect1);
      }
    }
    if (m.find("AllowDelete") != m.end() && !m["AllowDelete"].empty()) {
      allowDelete = make_shared<string>(boost::any_cast<string>(m["AllowDelete"]));
    }
    if (m.find("NotAllowReason") != m.end() && !m["NotAllowReason"].empty()) {
      if (typeid(vector<boost::any>) == m["NotAllowReason"].type()) {
        vector<GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NotAllowReason"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notAllowReason = make_shared<vector<GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfoNotAllowReason>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo() = default;
};
class GetAccountDeletionCheckResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo> accountDeletionCheckResultInfo{};
  shared_ptr<string> requestId{};

  GetAccountDeletionCheckResultResponseBody() {}

  explicit GetAccountDeletionCheckResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDeletionCheckResultInfo) {
      res["AccountDeletionCheckResultInfo"] = accountDeletionCheckResultInfo ? boost::any(accountDeletionCheckResultInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDeletionCheckResultInfo") != m.end() && !m["AccountDeletionCheckResultInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountDeletionCheckResultInfo"].type()) {
        GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountDeletionCheckResultInfo"]));
        accountDeletionCheckResultInfo = make_shared<GetAccountDeletionCheckResultResponseBodyAccountDeletionCheckResultInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccountDeletionCheckResultResponseBody() = default;
};
class GetAccountDeletionCheckResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountDeletionCheckResultResponseBody> body{};

  GetAccountDeletionCheckResultResponse() {}

  explicit GetAccountDeletionCheckResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountDeletionCheckResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountDeletionCheckResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountDeletionCheckResultResponse() = default;
};
class GetAccountDeletionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  GetAccountDeletionStatusRequest() {}

  explicit GetAccountDeletionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~GetAccountDeletionStatusRequest() = default;
};
class GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList() {}

  explicit GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList() = default;
};
class GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionTime{};
  shared_ptr<string> deletionType{};
  shared_ptr<vector<GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList>> failReasonList{};
  shared_ptr<string> status{};

  GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus() {}

  explicit GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionTime) {
      res["DeletionTime"] = boost::any(*deletionTime);
    }
    if (deletionType) {
      res["DeletionType"] = boost::any(*deletionType);
    }
    if (failReasonList) {
      vector<boost::any> temp1;
      for(auto item1:*failReasonList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailReasonList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionTime") != m.end() && !m["DeletionTime"].empty()) {
      deletionTime = make_shared<string>(boost::any_cast<string>(m["DeletionTime"]));
    }
    if (m.find("DeletionType") != m.end() && !m["DeletionType"].empty()) {
      deletionType = make_shared<string>(boost::any_cast<string>(m["DeletionType"]));
    }
    if (m.find("FailReasonList") != m.end() && !m["FailReasonList"].empty()) {
      if (typeid(vector<boost::any>) == m["FailReasonList"].type()) {
        vector<GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailReasonList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failReasonList = make_shared<vector<GetAccountDeletionStatusResponseBodyRdAccountDeletionStatusFailReasonList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus() = default;
};
class GetAccountDeletionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus> rdAccountDeletionStatus{};
  shared_ptr<string> requestId{};

  GetAccountDeletionStatusResponseBody() {}

  explicit GetAccountDeletionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rdAccountDeletionStatus) {
      res["RdAccountDeletionStatus"] = rdAccountDeletionStatus ? boost::any(rdAccountDeletionStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RdAccountDeletionStatus") != m.end() && !m["RdAccountDeletionStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["RdAccountDeletionStatus"].type()) {
        GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RdAccountDeletionStatus"]));
        rdAccountDeletionStatus = make_shared<GetAccountDeletionStatusResponseBodyRdAccountDeletionStatus>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccountDeletionStatusResponseBody() = default;
};
class GetAccountDeletionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountDeletionStatusResponseBody> body{};

  GetAccountDeletionStatusResponse() {}

  explicit GetAccountDeletionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountDeletionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountDeletionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountDeletionStatusResponse() = default;
};
class GetAutoGroupingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ruleId{};

  GetAutoGroupingRuleRequest() {}

  explicit GetAutoGroupingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~GetAutoGroupingRuleRequest() = default;
};
class GetAutoGroupingRuleResponseBodyRuleRuleContents : public Darabonba::Model {
public:
  shared_ptr<string> autoGroupingScopeCondition{};
  shared_ptr<string> ruleContentId{};
  shared_ptr<string> targetResourceGroupCondition{};

  GetAutoGroupingRuleResponseBodyRuleRuleContents() {}

  explicit GetAutoGroupingRuleResponseBodyRuleRuleContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoGroupingScopeCondition) {
      res["AutoGroupingScopeCondition"] = boost::any(*autoGroupingScopeCondition);
    }
    if (ruleContentId) {
      res["RuleContentId"] = boost::any(*ruleContentId);
    }
    if (targetResourceGroupCondition) {
      res["TargetResourceGroupCondition"] = boost::any(*targetResourceGroupCondition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoGroupingScopeCondition") != m.end() && !m["AutoGroupingScopeCondition"].empty()) {
      autoGroupingScopeCondition = make_shared<string>(boost::any_cast<string>(m["AutoGroupingScopeCondition"]));
    }
    if (m.find("RuleContentId") != m.end() && !m["RuleContentId"].empty()) {
      ruleContentId = make_shared<string>(boost::any_cast<string>(m["RuleContentId"]));
    }
    if (m.find("TargetResourceGroupCondition") != m.end() && !m["TargetResourceGroupCondition"].empty()) {
      targetResourceGroupCondition = make_shared<string>(boost::any_cast<string>(m["TargetResourceGroupCondition"]));
    }
  }


  virtual ~GetAutoGroupingRuleResponseBodyRuleRuleContents() = default;
};
class GetAutoGroupingRuleResponseBodyRule : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> excludeRegionIdsScope{};
  shared_ptr<string> excludeResourceGroupIdsScope{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<string> excludeResourceTypesScope{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceIdsScope{};
  shared_ptr<string> resourceTypesScope{};
  shared_ptr<vector<GetAutoGroupingRuleResponseBodyRuleRuleContents>> ruleContents{};
  shared_ptr<string> ruleDesc{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};

  GetAutoGroupingRuleResponseBodyRule() {}

  explicit GetAutoGroupingRuleResponseBodyRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (excludeRegionIdsScope) {
      res["ExcludeRegionIdsScope"] = boost::any(*excludeRegionIdsScope);
    }
    if (excludeResourceGroupIdsScope) {
      res["ExcludeResourceGroupIdsScope"] = boost::any(*excludeResourceGroupIdsScope);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (excludeResourceTypesScope) {
      res["ExcludeResourceTypesScope"] = boost::any(*excludeResourceTypesScope);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceIdsScope) {
      res["ResourceIdsScope"] = boost::any(*resourceIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (ruleContents) {
      vector<boost::any> temp1;
      for(auto item1:*ruleContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleContents"] = boost::any(temp1);
    }
    if (ruleDesc) {
      res["RuleDesc"] = boost::any(*ruleDesc);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExcludeRegionIdsScope") != m.end() && !m["ExcludeRegionIdsScope"].empty()) {
      excludeRegionIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeRegionIdsScope"]));
    }
    if (m.find("ExcludeResourceGroupIdsScope") != m.end() && !m["ExcludeResourceGroupIdsScope"].empty()) {
      excludeResourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceGroupIdsScope"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("ExcludeResourceTypesScope") != m.end() && !m["ExcludeResourceTypesScope"].empty()) {
      excludeResourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceTypesScope"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceIdsScope") != m.end() && !m["ResourceIdsScope"].empty()) {
      resourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RuleContents") != m.end() && !m["RuleContents"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleContents"].type()) {
        vector<GetAutoGroupingRuleResponseBodyRuleRuleContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAutoGroupingRuleResponseBodyRuleRuleContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleContents = make_shared<vector<GetAutoGroupingRuleResponseBodyRuleRuleContents>>(expect1);
      }
    }
    if (m.find("RuleDesc") != m.end() && !m["RuleDesc"].empty()) {
      ruleDesc = make_shared<string>(boost::any_cast<string>(m["RuleDesc"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~GetAutoGroupingRuleResponseBodyRule() = default;
};
class GetAutoGroupingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAutoGroupingRuleResponseBodyRule> rule{};

  GetAutoGroupingRuleResponseBody() {}

  explicit GetAutoGroupingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rule) {
      res["Rule"] = rule ? boost::any(rule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rule"].type()) {
        GetAutoGroupingRuleResponseBodyRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rule"]));
        rule = make_shared<GetAutoGroupingRuleResponseBodyRule>(model1);
      }
    }
  }


  virtual ~GetAutoGroupingRuleResponseBody() = default;
};
class GetAutoGroupingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAutoGroupingRuleResponseBody> body{};

  GetAutoGroupingRuleResponse() {}

  explicit GetAutoGroupingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAutoGroupingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAutoGroupingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetAutoGroupingRuleResponse() = default;
};
class GetAutoGroupingStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> enableExistedResourcesTransfer{};
  shared_ptr<string> enableStatus{};
  shared_ptr<string> requestId{};

  GetAutoGroupingStatusResponseBody() {}

  explicit GetAutoGroupingStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableExistedResourcesTransfer) {
      res["EnableExistedResourcesTransfer"] = boost::any(*enableExistedResourcesTransfer);
    }
    if (enableStatus) {
      res["EnableStatus"] = boost::any(*enableStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableExistedResourcesTransfer") != m.end() && !m["EnableExistedResourcesTransfer"].empty()) {
      enableExistedResourcesTransfer = make_shared<bool>(boost::any_cast<bool>(m["EnableExistedResourcesTransfer"]));
    }
    if (m.find("EnableStatus") != m.end() && !m["EnableStatus"].empty()) {
      enableStatus = make_shared<string>(boost::any_cast<string>(m["EnableStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAutoGroupingStatusResponseBody() = default;
};
class GetAutoGroupingStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAutoGroupingStatusResponseBody> body{};

  GetAutoGroupingStatusResponse() {}

  explicit GetAutoGroupingStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAutoGroupingStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAutoGroupingStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetAutoGroupingStatusResponse() = default;
};
class GetControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> policyId{};

  GetControlPolicyRequest() {}

  explicit GetControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~GetControlPolicyRequest() = default;
};
class GetControlPolicyResponseBodyControlPolicy : public Darabonba::Model {
public:
  shared_ptr<string> attachmentCount{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> updateDate{};

  GetControlPolicyResponseBodyControlPolicy() {}

  explicit GetControlPolicyResponseBodyControlPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<string>(boost::any_cast<string>(m["AttachmentCount"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetControlPolicyResponseBodyControlPolicy() = default;
};
class GetControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetControlPolicyResponseBodyControlPolicy> controlPolicy{};
  shared_ptr<string> requestId{};

  GetControlPolicyResponseBody() {}

  explicit GetControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicy) {
      res["ControlPolicy"] = controlPolicy ? boost::any(controlPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicy") != m.end() && !m["ControlPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicy"].type()) {
        GetControlPolicyResponseBodyControlPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicy"]));
        controlPolicy = make_shared<GetControlPolicyResponseBodyControlPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetControlPolicyResponseBody() = default;
};
class GetControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetControlPolicyResponseBody> body{};

  GetControlPolicyResponse() {}

  explicit GetControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetControlPolicyResponse() = default;
};
class GetControlPolicyEnablementStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> enablementStatus{};
  shared_ptr<string> requestId{};

  GetControlPolicyEnablementStatusResponseBody() {}

  explicit GetControlPolicyEnablementStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablementStatus) {
      res["EnablementStatus"] = boost::any(*enablementStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablementStatus") != m.end() && !m["EnablementStatus"].empty()) {
      enablementStatus = make_shared<string>(boost::any_cast<string>(m["EnablementStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetControlPolicyEnablementStatusResponseBody() = default;
};
class GetControlPolicyEnablementStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetControlPolicyEnablementStatusResponseBody> body{};

  GetControlPolicyEnablementStatusResponse() {}

  explicit GetControlPolicyEnablementStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetControlPolicyEnablementStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetControlPolicyEnablementStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetControlPolicyEnablementStatusResponse() = default;
};
class GetFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};

  GetFolderRequest() {}

  explicit GetFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
  }


  virtual ~GetFolderRequest() = default;
};
class GetFolderResponseBodyFolder : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> folderId{};
  shared_ptr<string> folderName{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> resourceDirectoryPath{};

  GetFolderResponseBodyFolder() {}

  explicit GetFolderResponseBodyFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (resourceDirectoryPath) {
      res["ResourceDirectoryPath"] = boost::any(*resourceDirectoryPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("ResourceDirectoryPath") != m.end() && !m["ResourceDirectoryPath"].empty()) {
      resourceDirectoryPath = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryPath"]));
    }
  }


  virtual ~GetFolderResponseBodyFolder() = default;
};
class GetFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetFolderResponseBodyFolder> folder{};
  shared_ptr<string> requestId{};

  GetFolderResponseBody() {}

  explicit GetFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folder) {
      res["Folder"] = folder ? boost::any(folder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folder"].type()) {
        GetFolderResponseBodyFolder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folder"]));
        folder = make_shared<GetFolderResponseBodyFolder>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFolderResponseBody() = default;
};
class GetFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFolderResponseBody> body{};

  GetFolderResponse() {}

  explicit GetFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFolderResponseBody>(model1);
      }
    }
  }


  virtual ~GetFolderResponse() = default;
};
class GetHandshakeRequest : public Darabonba::Model {
public:
  shared_ptr<string> handshakeId{};

  GetHandshakeRequest() {}

  explicit GetHandshakeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
  }


  virtual ~GetHandshakeRequest() = default;
};
class GetHandshakeResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> handshakeId{};
  shared_ptr<string> invitedAccountRealName{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> masterAccountRealName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> note{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> targetType{};

  GetHandshakeResponseBodyHandshake() {}

  explicit GetHandshakeResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    if (invitedAccountRealName) {
      res["InvitedAccountRealName"] = boost::any(*invitedAccountRealName);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (masterAccountRealName) {
      res["MasterAccountRealName"] = boost::any(*masterAccountRealName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
    if (m.find("InvitedAccountRealName") != m.end() && !m["InvitedAccountRealName"].empty()) {
      invitedAccountRealName = make_shared<string>(boost::any_cast<string>(m["InvitedAccountRealName"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("MasterAccountRealName") != m.end() && !m["MasterAccountRealName"].empty()) {
      masterAccountRealName = make_shared<string>(boost::any_cast<string>(m["MasterAccountRealName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~GetHandshakeResponseBodyHandshake() = default;
};
class GetHandshakeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetHandshakeResponseBodyHandshake> handshake{};
  shared_ptr<string> requestId{};

  GetHandshakeResponseBody() {}

  explicit GetHandshakeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        GetHandshakeResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<GetHandshakeResponseBodyHandshake>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetHandshakeResponseBody() = default;
};
class GetHandshakeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHandshakeResponseBody> body{};

  GetHandshakeResponse() {}

  explicit GetHandshakeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHandshakeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHandshakeResponseBody>(model1);
      }
    }
  }


  virtual ~GetHandshakeResponse() = default;
};
class GetPayerForAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  GetPayerForAccountRequest() {}

  explicit GetPayerForAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~GetPayerForAccountRequest() = default;
};
class GetPayerForAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> payerAccountId{};
  shared_ptr<string> payerAccountName{};
  shared_ptr<string> requestId{};

  GetPayerForAccountResponseBody() {}

  explicit GetPayerForAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payerAccountId) {
      res["PayerAccountId"] = boost::any(*payerAccountId);
    }
    if (payerAccountName) {
      res["PayerAccountName"] = boost::any(*payerAccountName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayerAccountId") != m.end() && !m["PayerAccountId"].empty()) {
      payerAccountId = make_shared<string>(boost::any_cast<string>(m["PayerAccountId"]));
    }
    if (m.find("PayerAccountName") != m.end() && !m["PayerAccountName"].empty()) {
      payerAccountName = make_shared<string>(boost::any_cast<string>(m["PayerAccountName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPayerForAccountResponseBody() = default;
};
class GetPayerForAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPayerForAccountResponseBody> body{};

  GetPayerForAccountResponse() {}

  explicit GetPayerForAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPayerForAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPayerForAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetPayerForAccountResponse() = default;
};
class GetPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  GetPolicyRequest() {}

  explicit GetPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~GetPolicyRequest() = default;
};
class GetPolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<long> attachmentCount{};
  shared_ptr<string> createDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> updateDate{};

  GetPolicyResponseBodyPolicy() {}

  explicit GetPolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<long>(boost::any_cast<long>(m["AttachmentCount"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetPolicyResponseBodyPolicy() = default;
};
class GetPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  GetPolicyResponseBody() {}

  explicit GetPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        GetPolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<GetPolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPolicyResponseBody() = default;
};
class GetPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPolicyResponseBody> body{};

  GetPolicyResponse() {}

  explicit GetPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyResponse() = default;
};
class GetPolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> versionId{};

  GetPolicyVersionRequest() {}

  explicit GetPolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetPolicyVersionRequest() = default;
};
class GetPolicyVersionResponseBodyPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> versionId{};

  GetPolicyVersionResponseBodyPolicyVersion() {}

  explicit GetPolicyVersionResponseBodyPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetPolicyVersionResponseBodyPolicyVersion() = default;
};
class GetPolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPolicyVersionResponseBodyPolicyVersion> policyVersion{};
  shared_ptr<string> requestId{};

  GetPolicyVersionResponseBody() {}

  explicit GetPolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersion) {
      res["PolicyVersion"] = policyVersion ? boost::any(policyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyVersion"].type()) {
        GetPolicyVersionResponseBodyPolicyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyVersion"]));
        policyVersion = make_shared<GetPolicyVersionResponseBodyPolicyVersion>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPolicyVersionResponseBody() = default;
};
class GetPolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPolicyVersionResponseBody> body{};

  GetPolicyVersionResponse() {}

  explicit GetPolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyVersionResponse() = default;
};
class GetResourceDirectoryResponseBodyResourceDirectory : public Darabonba::Model {
public:
  shared_ptr<string> controlPolicyStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> identityInformation{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> memberDeletionStatus{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> rootFolderId{};

  GetResourceDirectoryResponseBodyResourceDirectory() {}

  explicit GetResourceDirectoryResponseBodyResourceDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicyStatus) {
      res["ControlPolicyStatus"] = boost::any(*controlPolicyStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (identityInformation) {
      res["IdentityInformation"] = boost::any(*identityInformation);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (memberDeletionStatus) {
      res["MemberDeletionStatus"] = boost::any(*memberDeletionStatus);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (rootFolderId) {
      res["RootFolderId"] = boost::any(*rootFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicyStatus") != m.end() && !m["ControlPolicyStatus"].empty()) {
      controlPolicyStatus = make_shared<string>(boost::any_cast<string>(m["ControlPolicyStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IdentityInformation") != m.end() && !m["IdentityInformation"].empty()) {
      identityInformation = make_shared<string>(boost::any_cast<string>(m["IdentityInformation"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("MemberDeletionStatus") != m.end() && !m["MemberDeletionStatus"].empty()) {
      memberDeletionStatus = make_shared<string>(boost::any_cast<string>(m["MemberDeletionStatus"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("RootFolderId") != m.end() && !m["RootFolderId"].empty()) {
      rootFolderId = make_shared<string>(boost::any_cast<string>(m["RootFolderId"]));
    }
  }


  virtual ~GetResourceDirectoryResponseBodyResourceDirectory() = default;
};
class GetResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceDirectoryResponseBodyResourceDirectory> resourceDirectory{};

  GetResourceDirectoryResponseBody() {}

  explicit GetResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDirectory) {
      res["ResourceDirectory"] = resourceDirectory ? boost::any(resourceDirectory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDirectory") != m.end() && !m["ResourceDirectory"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceDirectory"].type()) {
        GetResourceDirectoryResponseBodyResourceDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceDirectory"]));
        resourceDirectory = make_shared<GetResourceDirectoryResponseBodyResourceDirectory>(model1);
      }
    }
  }


  virtual ~GetResourceDirectoryResponseBody() = default;
};
class GetResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceDirectoryResponseBody> body{};

  GetResourceDirectoryResponse() {}

  explicit GetResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceDirectoryResponse() = default;
};
class GetResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<bool> includeTags{};
  shared_ptr<string> resourceGroupId{};

  GetResourceGroupRequest() {}

  explicit GetResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includeTags) {
      res["IncludeTags"] = boost::any(*includeTags);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IncludeTags") != m.end() && !m["IncludeTags"].empty()) {
      includeTags = make_shared<bool>(boost::any_cast<bool>(m["IncludeTags"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~GetResourceGroupRequest() = default;
};
class GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() {}

  explicit GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus() = default;
};
class GetResourceGroupResponseBodyResourceGroupRegionStatuses : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>> regionStatus{};

  GetResourceGroupResponseBodyResourceGroupRegionStatuses() {}

  explicit GetResourceGroupResponseBodyResourceGroupRegionStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionStatus) {
      vector<boost::any> temp1;
      for(auto item1:*regionStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionStatus"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionStatus") != m.end() && !m["RegionStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionStatus"].type()) {
        vector<GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionStatus = make_shared<vector<GetResourceGroupResponseBodyResourceGroupRegionStatusesRegionStatus>>(expect1);
      }
    }
  }


  virtual ~GetResourceGroupResponseBodyResourceGroupRegionStatuses() = default;
};
class GetResourceGroupResponseBodyResourceGroupTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetResourceGroupResponseBodyResourceGroupTagsTag() {}

  explicit GetResourceGroupResponseBodyResourceGroupTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetResourceGroupResponseBodyResourceGroupTagsTag() = default;
};
class GetResourceGroupResponseBodyResourceGroupTags : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourceGroupResponseBodyResourceGroupTagsTag>> tag{};

  GetResourceGroupResponseBodyResourceGroupTags() {}

  explicit GetResourceGroupResponseBodyResourceGroupTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<GetResourceGroupResponseBodyResourceGroupTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceGroupResponseBodyResourceGroupTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<GetResourceGroupResponseBodyResourceGroupTagsTag>>(expect1);
      }
    }
  }


  virtual ~GetResourceGroupResponseBodyResourceGroupTags() = default;
};
class GetResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<GetResourceGroupResponseBodyResourceGroupRegionStatuses> regionStatuses{};
  shared_ptr<string> status{};
  shared_ptr<GetResourceGroupResponseBodyResourceGroupTags> tags{};

  GetResourceGroupResponseBodyResourceGroup() {}

  explicit GetResourceGroupResponseBodyResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionStatuses) {
      res["RegionStatuses"] = regionStatuses ? boost::any(regionStatuses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionStatuses") != m.end() && !m["RegionStatuses"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegionStatuses"].type()) {
        GetResourceGroupResponseBodyResourceGroupRegionStatuses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegionStatuses"]));
        regionStatuses = make_shared<GetResourceGroupResponseBodyResourceGroupRegionStatuses>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        GetResourceGroupResponseBodyResourceGroupTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<GetResourceGroupResponseBodyResourceGroupTags>(model1);
      }
    }
  }


  virtual ~GetResourceGroupResponseBodyResourceGroup() = default;
};
class GetResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceGroupResponseBodyResourceGroup> resourceGroup{};

  GetResourceGroupResponseBody() {}

  explicit GetResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = resourceGroup ? boost::any(resourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroup"].type()) {
        GetResourceGroupResponseBodyResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroup"]));
        resourceGroup = make_shared<GetResourceGroupResponseBodyResourceGroup>(model1);
      }
    }
  }


  virtual ~GetResourceGroupResponseBody() = default;
};
class GetResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceGroupResponseBody> body{};

  GetResourceGroupResponse() {}

  explicit GetResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceGroupResponse() = default;
};
class GetRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> roleName{};

  GetRoleRequest() {}

  explicit GetRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~GetRoleRequest() = default;
};
class GetRoleResponseBodyRoleLatestDeletionTask : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> deletionTaskId{};

  GetRoleResponseBodyRoleLatestDeletionTask() {}

  explicit GetRoleResponseBodyRoleLatestDeletionTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
  }


  virtual ~GetRoleResponseBodyRoleLatestDeletionTask() = default;
};
class GetRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> isServiceLinkedRole{};
  shared_ptr<GetRoleResponseBodyRoleLatestDeletionTask> latestDeletionTask{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> rolePrincipalName{};
  shared_ptr<string> updateDate{};

  GetRoleResponseBodyRole() {}

  explicit GetRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isServiceLinkedRole) {
      res["IsServiceLinkedRole"] = boost::any(*isServiceLinkedRole);
    }
    if (latestDeletionTask) {
      res["LatestDeletionTask"] = latestDeletionTask ? boost::any(latestDeletionTask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
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
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsServiceLinkedRole") != m.end() && !m["IsServiceLinkedRole"].empty()) {
      isServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["IsServiceLinkedRole"]));
    }
    if (m.find("LatestDeletionTask") != m.end() && !m["LatestDeletionTask"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestDeletionTask"].type()) {
        GetRoleResponseBodyRoleLatestDeletionTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestDeletionTask"]));
        latestDeletionTask = make_shared<GetRoleResponseBodyRoleLatestDeletionTask>(model1);
      }
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetRoleResponseBodyRole() = default;
};
class GetRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRoleResponseBodyRole> role{};

  GetRoleResponseBody() {}

  explicit GetRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        GetRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<GetRoleResponseBodyRole>(model1);
      }
    }
  }


  virtual ~GetRoleResponseBody() = default;
};
class GetRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRoleResponseBody> body{};

  GetRoleResponse() {}

  explicit GetRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoleResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoleResponse() = default;
};
class GetServiceLinkedRoleDeletionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> deletionTaskId{};

  GetServiceLinkedRoleDeletionStatusRequest() {}

  explicit GetServiceLinkedRoleDeletionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusRequest() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resource{};

  GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Resource"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Resource"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resource = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources> resources{};

  GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsageResources>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage>> roleUsage{};

  GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleUsage) {
      vector<boost::any> temp1;
      for(auto item1:*roleUsage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoleUsage"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleUsage") != m.end() && !m["RoleUsage"].empty()) {
      if (typeid(vector<boost::any>) == m["RoleUsage"].type()) {
        vector<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoleUsage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleUsage = make_shared<vector<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsagesRoleUsage>>(expect1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBodyReason : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages> roleUsages{};

  GetServiceLinkedRoleDeletionStatusResponseBodyReason() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBodyReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (roleUsages) {
      res["RoleUsages"] = roleUsages ? boost::any(roleUsages->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RoleUsages") != m.end() && !m["RoleUsages"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleUsages"].type()) {
        GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleUsages"]));
        roleUsages = make_shared<GetServiceLinkedRoleDeletionStatusResponseBodyReasonRoleUsages>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBodyReason() = default;
};
class GetServiceLinkedRoleDeletionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBodyReason> reason{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetServiceLinkedRoleDeletionStatusResponseBody() {}

  explicit GetServiceLinkedRoleDeletionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reason) {
      res["Reason"] = reason ? boost::any(reason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reason"].type()) {
        GetServiceLinkedRoleDeletionStatusResponseBodyReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reason"]));
        reason = make_shared<GetServiceLinkedRoleDeletionStatusResponseBodyReason>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponseBody() = default;
};
class GetServiceLinkedRoleDeletionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceLinkedRoleDeletionStatusResponseBody> body{};

  GetServiceLinkedRoleDeletionStatusResponse() {}

  explicit GetServiceLinkedRoleDeletionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceLinkedRoleDeletionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceLinkedRoleDeletionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponse() = default;
};
class InitResourceDirectoryResponseBodyResourceDirectory : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> rootFolderId{};

  InitResourceDirectoryResponseBodyResourceDirectory() {}

  explicit InitResourceDirectoryResponseBodyResourceDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (rootFolderId) {
      res["RootFolderId"] = boost::any(*rootFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("RootFolderId") != m.end() && !m["RootFolderId"].empty()) {
      rootFolderId = make_shared<string>(boost::any_cast<string>(m["RootFolderId"]));
    }
  }


  virtual ~InitResourceDirectoryResponseBodyResourceDirectory() = default;
};
class InitResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<InitResourceDirectoryResponseBodyResourceDirectory> resourceDirectory{};

  InitResourceDirectoryResponseBody() {}

  explicit InitResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDirectory) {
      res["ResourceDirectory"] = resourceDirectory ? boost::any(resourceDirectory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDirectory") != m.end() && !m["ResourceDirectory"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceDirectory"].type()) {
        InitResourceDirectoryResponseBodyResourceDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceDirectory"]));
        resourceDirectory = make_shared<InitResourceDirectoryResponseBodyResourceDirectory>(model1);
      }
    }
  }


  virtual ~InitResourceDirectoryResponseBody() = default;
};
class InitResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitResourceDirectoryResponseBody> body{};

  InitResourceDirectoryResponse() {}

  explicit InitResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~InitResourceDirectoryResponse() = default;
};
class InviteAccountToResourceDirectoryRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  InviteAccountToResourceDirectoryRequestTag() {}

  explicit InviteAccountToResourceDirectoryRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InviteAccountToResourceDirectoryRequestTag() = default;
};
class InviteAccountToResourceDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> note{};
  shared_ptr<vector<InviteAccountToResourceDirectoryRequestTag>> tag{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> targetType{};

  InviteAccountToResourceDirectoryRequest() {}

  explicit InviteAccountToResourceDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<InviteAccountToResourceDirectoryRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InviteAccountToResourceDirectoryRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<InviteAccountToResourceDirectoryRequestTag>>(expect1);
      }
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~InviteAccountToResourceDirectoryRequest() = default;
};
class InviteAccountToResourceDirectoryResponseBodyHandshake : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> handshakeId{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> note{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> targetType{};

  InviteAccountToResourceDirectoryResponseBodyHandshake() {}

  explicit InviteAccountToResourceDirectoryResponseBodyHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~InviteAccountToResourceDirectoryResponseBodyHandshake() = default;
};
class InviteAccountToResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<InviteAccountToResourceDirectoryResponseBodyHandshake> handshake{};
  shared_ptr<string> requestId{};

  InviteAccountToResourceDirectoryResponseBody() {}

  explicit InviteAccountToResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshake) {
      res["Handshake"] = handshake ? boost::any(handshake->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshake"].type()) {
        InviteAccountToResourceDirectoryResponseBodyHandshake model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshake"]));
        handshake = make_shared<InviteAccountToResourceDirectoryResponseBodyHandshake>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InviteAccountToResourceDirectoryResponseBody() = default;
};
class InviteAccountToResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InviteAccountToResourceDirectoryResponseBody> body{};

  InviteAccountToResourceDirectoryResponse() {}

  explicit InviteAccountToResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InviteAccountToResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InviteAccountToResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~InviteAccountToResourceDirectoryResponse() = default;
};
class ListAccountsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAccountsRequestTag() {}

  explicit ListAccountsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountsRequestTag() = default;
};
class ListAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> includeTags{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListAccountsRequestTag>> tag{};

  ListAccountsRequest() {}

  explicit ListAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includeTags) {
      res["IncludeTags"] = boost::any(*includeTags);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("IncludeTags") != m.end() && !m["IncludeTags"].empty()) {
      includeTags = make_shared<bool>(boost::any_cast<bool>(m["IncludeTags"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListAccountsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListAccountsRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListAccountsRequest() = default;
};
class ListAccountsResponseBodyAccountsAccountTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAccountsResponseBodyAccountsAccountTagsTag() {}

  explicit ListAccountsResponseBodyAccountsAccountTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountsResponseBodyAccountsAccountTagsTag() = default;
};
class ListAccountsResponseBodyAccountsAccountTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountsResponseBodyAccountsAccountTagsTag>> tag{};

  ListAccountsResponseBodyAccountsAccountTags() {}

  explicit ListAccountsResponseBodyAccountsAccountTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListAccountsResponseBodyAccountsAccountTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsResponseBodyAccountsAccountTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListAccountsResponseBodyAccountsAccountTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListAccountsResponseBodyAccountsAccountTags() = default;
};
class ListAccountsResponseBodyAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> resourceDirectoryPath{};
  shared_ptr<string> status{};
  shared_ptr<ListAccountsResponseBodyAccountsAccountTags> tags{};
  shared_ptr<string> type{};

  ListAccountsResponseBodyAccountsAccount() {}

  explicit ListAccountsResponseBodyAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (resourceDirectoryPath) {
      res["ResourceDirectoryPath"] = boost::any(*resourceDirectoryPath);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("ResourceDirectoryPath") != m.end() && !m["ResourceDirectoryPath"].empty()) {
      resourceDirectoryPath = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryPath"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListAccountsResponseBodyAccountsAccountTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListAccountsResponseBodyAccountsAccountTags>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListAccountsResponseBodyAccountsAccount() = default;
};
class ListAccountsResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountsResponseBodyAccountsAccount>> account{};

  ListAccountsResponseBodyAccounts() {}

  explicit ListAccountsResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      vector<boost::any> temp1;
      for(auto item1:*account){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Account"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(vector<boost::any>) == m["Account"].type()) {
        vector<ListAccountsResponseBodyAccountsAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Account"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsResponseBodyAccountsAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        account = make_shared<vector<ListAccountsResponseBodyAccountsAccount>>(expect1);
      }
    }
  }


  virtual ~ListAccountsResponseBodyAccounts() = default;
};
class ListAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAccountsResponseBodyAccounts> accounts{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAccountsResponseBody() {}

  explicit ListAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        ListAccountsResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<ListAccountsResponseBodyAccounts>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAccountsResponseBody() = default;
};
class ListAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccountsResponseBody> body{};

  ListAccountsResponse() {}

  explicit ListAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountsResponse() = default;
};
class ListAccountsForParentRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAccountsForParentRequestTag() {}

  explicit ListAccountsForParentRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountsForParentRequestTag() = default;
};
class ListAccountsForParentRequest : public Darabonba::Model {
public:
  shared_ptr<bool> includeTags{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> queryKeyword{};
  shared_ptr<vector<ListAccountsForParentRequestTag>> tag{};

  ListAccountsForParentRequest() {}

  explicit ListAccountsForParentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (includeTags) {
      res["IncludeTags"] = boost::any(*includeTags);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (queryKeyword) {
      res["QueryKeyword"] = boost::any(*queryKeyword);
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
    if (m.find("IncludeTags") != m.end() && !m["IncludeTags"].empty()) {
      includeTags = make_shared<bool>(boost::any_cast<bool>(m["IncludeTags"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("QueryKeyword") != m.end() && !m["QueryKeyword"].empty()) {
      queryKeyword = make_shared<string>(boost::any_cast<string>(m["QueryKeyword"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListAccountsForParentRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsForParentRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListAccountsForParentRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListAccountsForParentRequest() = default;
};
class ListAccountsForParentResponseBodyAccountsAccountTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAccountsForParentResponseBodyAccountsAccountTagsTag() {}

  explicit ListAccountsForParentResponseBodyAccountsAccountTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountsForParentResponseBodyAccountsAccountTagsTag() = default;
};
class ListAccountsForParentResponseBodyAccountsAccountTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountsForParentResponseBodyAccountsAccountTagsTag>> tag{};

  ListAccountsForParentResponseBodyAccountsAccountTags() {}

  explicit ListAccountsForParentResponseBodyAccountsAccountTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListAccountsForParentResponseBodyAccountsAccountTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsForParentResponseBodyAccountsAccountTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListAccountsForParentResponseBodyAccountsAccountTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListAccountsForParentResponseBodyAccountsAccountTags() = default;
};
class ListAccountsForParentResponseBodyAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<ListAccountsForParentResponseBodyAccountsAccountTags> tags{};
  shared_ptr<string> type{};

  ListAccountsForParentResponseBodyAccountsAccount() {}

  explicit ListAccountsForParentResponseBodyAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListAccountsForParentResponseBodyAccountsAccountTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListAccountsForParentResponseBodyAccountsAccountTags>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListAccountsForParentResponseBodyAccountsAccount() = default;
};
class ListAccountsForParentResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountsForParentResponseBodyAccountsAccount>> account{};

  ListAccountsForParentResponseBodyAccounts() {}

  explicit ListAccountsForParentResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      vector<boost::any> temp1;
      for(auto item1:*account){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Account"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(vector<boost::any>) == m["Account"].type()) {
        vector<ListAccountsForParentResponseBodyAccountsAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Account"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountsForParentResponseBodyAccountsAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        account = make_shared<vector<ListAccountsForParentResponseBodyAccountsAccount>>(expect1);
      }
    }
  }


  virtual ~ListAccountsForParentResponseBodyAccounts() = default;
};
class ListAccountsForParentResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAccountsForParentResponseBodyAccounts> accounts{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAccountsForParentResponseBody() {}

  explicit ListAccountsForParentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        ListAccountsForParentResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<ListAccountsForParentResponseBodyAccounts>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAccountsForParentResponseBody() = default;
};
class ListAccountsForParentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccountsForParentResponseBody> body{};

  ListAccountsForParentResponse() {}

  explicit ListAccountsForParentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccountsForParentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountsForParentResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountsForParentResponse() = default;
};
class ListAncestorsRequest : public Darabonba::Model {
public:
  shared_ptr<string> childId{};

  ListAncestorsRequest() {}

  explicit ListAncestorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childId) {
      res["ChildId"] = boost::any(*childId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildId") != m.end() && !m["ChildId"].empty()) {
      childId = make_shared<string>(boost::any_cast<string>(m["ChildId"]));
    }
  }


  virtual ~ListAncestorsRequest() = default;
};
class ListAncestorsResponseBodyFoldersFolder : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> folderId{};
  shared_ptr<string> folderName{};

  ListAncestorsResponseBodyFoldersFolder() {}

  explicit ListAncestorsResponseBodyFoldersFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
  }


  virtual ~ListAncestorsResponseBodyFoldersFolder() = default;
};
class ListAncestorsResponseBodyFolders : public Darabonba::Model {
public:
  shared_ptr<vector<ListAncestorsResponseBodyFoldersFolder>> folder{};

  ListAncestorsResponseBodyFolders() {}

  explicit ListAncestorsResponseBodyFolders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folder) {
      vector<boost::any> temp1;
      for(auto item1:*folder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Folder"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(vector<boost::any>) == m["Folder"].type()) {
        vector<ListAncestorsResponseBodyFoldersFolder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Folder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAncestorsResponseBodyFoldersFolder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        folder = make_shared<vector<ListAncestorsResponseBodyFoldersFolder>>(expect1);
      }
    }
  }


  virtual ~ListAncestorsResponseBodyFolders() = default;
};
class ListAncestorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAncestorsResponseBodyFolders> folders{};
  shared_ptr<string> requestId{};

  ListAncestorsResponseBody() {}

  explicit ListAncestorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folders) {
      res["Folders"] = folders ? boost::any(folders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Folders") != m.end() && !m["Folders"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folders"].type()) {
        ListAncestorsResponseBodyFolders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folders"]));
        folders = make_shared<ListAncestorsResponseBodyFolders>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAncestorsResponseBody() = default;
};
class ListAncestorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAncestorsResponseBody> body{};

  ListAncestorsResponse() {}

  explicit ListAncestorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAncestorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAncestorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAncestorsResponse() = default;
};
class ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings : public Darabonba::Model {
public:
  shared_ptr<string> associatedResourceType{};
  shared_ptr<string> associatedService{};
  shared_ptr<string> masterResourceType{};
  shared_ptr<string> masterService{};
  shared_ptr<string> status{};

  ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings() {}

  explicit ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associatedResourceType) {
      res["AssociatedResourceType"] = boost::any(*associatedResourceType);
    }
    if (associatedService) {
      res["AssociatedService"] = boost::any(*associatedService);
    }
    if (masterResourceType) {
      res["MasterResourceType"] = boost::any(*masterResourceType);
    }
    if (masterService) {
      res["MasterService"] = boost::any(*masterService);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociatedResourceType") != m.end() && !m["AssociatedResourceType"].empty()) {
      associatedResourceType = make_shared<string>(boost::any_cast<string>(m["AssociatedResourceType"]));
    }
    if (m.find("AssociatedService") != m.end() && !m["AssociatedService"].empty()) {
      associatedService = make_shared<string>(boost::any_cast<string>(m["AssociatedService"]));
    }
    if (m.find("MasterResourceType") != m.end() && !m["MasterResourceType"].empty()) {
      masterResourceType = make_shared<string>(boost::any_cast<string>(m["MasterResourceType"]));
    }
    if (m.find("MasterService") != m.end() && !m["MasterService"].empty()) {
      masterService = make_shared<string>(boost::any_cast<string>(m["MasterService"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings() = default;
};
class ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> enableExistingResourcesTransfer{};
  shared_ptr<vector<ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings>> ruleSettings{};
  shared_ptr<string> status{};

  ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting() {}

  explicit ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (enableExistingResourcesTransfer) {
      res["EnableExistingResourcesTransfer"] = boost::any(*enableExistingResourcesTransfer);
    }
    if (ruleSettings) {
      vector<boost::any> temp1;
      for(auto item1:*ruleSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleSettings"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("EnableExistingResourcesTransfer") != m.end() && !m["EnableExistingResourcesTransfer"].empty()) {
      enableExistingResourcesTransfer = make_shared<string>(boost::any_cast<string>(m["EnableExistingResourcesTransfer"]));
    }
    if (m.find("RuleSettings") != m.end() && !m["RuleSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleSettings"].type()) {
        vector<ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleSettings = make_shared<vector<ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting() = default;
};
class ListAssociatedTransferSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting> associatedTransferSetting{};
  shared_ptr<string> requestId{};

  ListAssociatedTransferSettingResponseBody() {}

  explicit ListAssociatedTransferSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associatedTransferSetting) {
      res["AssociatedTransferSetting"] = associatedTransferSetting ? boost::any(associatedTransferSetting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociatedTransferSetting") != m.end() && !m["AssociatedTransferSetting"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssociatedTransferSetting"].type()) {
        ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssociatedTransferSetting"]));
        associatedTransferSetting = make_shared<ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAssociatedTransferSettingResponseBody() = default;
};
class ListAssociatedTransferSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAssociatedTransferSettingResponseBody> body{};

  ListAssociatedTransferSettingResponse() {}

  explicit ListAssociatedTransferSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAssociatedTransferSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAssociatedTransferSettingResponseBody>(model1);
      }
    }
  }


  virtual ~ListAssociatedTransferSettingResponse() = default;
};
class ListAutoGroupingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};

  ListAutoGroupingRulesRequest() {}

  explicit ListAutoGroupingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~ListAutoGroupingRulesRequest() = default;
};
class ListAutoGroupingRulesResponseBodyRulesRuleContents : public Darabonba::Model {
public:
  shared_ptr<string> autoGroupingScopeCondition{};
  shared_ptr<string> ruleContentId{};
  shared_ptr<string> targetResourceGroupCondition{};

  ListAutoGroupingRulesResponseBodyRulesRuleContents() {}

  explicit ListAutoGroupingRulesResponseBodyRulesRuleContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoGroupingScopeCondition) {
      res["AutoGroupingScopeCondition"] = boost::any(*autoGroupingScopeCondition);
    }
    if (ruleContentId) {
      res["RuleContentId"] = boost::any(*ruleContentId);
    }
    if (targetResourceGroupCondition) {
      res["TargetResourceGroupCondition"] = boost::any(*targetResourceGroupCondition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoGroupingScopeCondition") != m.end() && !m["AutoGroupingScopeCondition"].empty()) {
      autoGroupingScopeCondition = make_shared<string>(boost::any_cast<string>(m["AutoGroupingScopeCondition"]));
    }
    if (m.find("RuleContentId") != m.end() && !m["RuleContentId"].empty()) {
      ruleContentId = make_shared<string>(boost::any_cast<string>(m["RuleContentId"]));
    }
    if (m.find("TargetResourceGroupCondition") != m.end() && !m["TargetResourceGroupCondition"].empty()) {
      targetResourceGroupCondition = make_shared<string>(boost::any_cast<string>(m["TargetResourceGroupCondition"]));
    }
  }


  virtual ~ListAutoGroupingRulesResponseBodyRulesRuleContents() = default;
};
class ListAutoGroupingRulesResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> excludeRegionIdsScope{};
  shared_ptr<string> excludeResourceGroupIdsScope{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<string> excludeResourceTypesScope{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceIdsScope{};
  shared_ptr<string> resourceTypesScope{};
  shared_ptr<vector<ListAutoGroupingRulesResponseBodyRulesRuleContents>> ruleContents{};
  shared_ptr<string> ruleDesc{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};

  ListAutoGroupingRulesResponseBodyRules() {}

  explicit ListAutoGroupingRulesResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (excludeRegionIdsScope) {
      res["ExcludeRegionIdsScope"] = boost::any(*excludeRegionIdsScope);
    }
    if (excludeResourceGroupIdsScope) {
      res["ExcludeResourceGroupIdsScope"] = boost::any(*excludeResourceGroupIdsScope);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (excludeResourceTypesScope) {
      res["ExcludeResourceTypesScope"] = boost::any(*excludeResourceTypesScope);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceIdsScope) {
      res["ResourceIdsScope"] = boost::any(*resourceIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (ruleContents) {
      vector<boost::any> temp1;
      for(auto item1:*ruleContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleContents"] = boost::any(temp1);
    }
    if (ruleDesc) {
      res["RuleDesc"] = boost::any(*ruleDesc);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExcludeRegionIdsScope") != m.end() && !m["ExcludeRegionIdsScope"].empty()) {
      excludeRegionIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeRegionIdsScope"]));
    }
    if (m.find("ExcludeResourceGroupIdsScope") != m.end() && !m["ExcludeResourceGroupIdsScope"].empty()) {
      excludeResourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceGroupIdsScope"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("ExcludeResourceTypesScope") != m.end() && !m["ExcludeResourceTypesScope"].empty()) {
      excludeResourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceTypesScope"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceIdsScope") != m.end() && !m["ResourceIdsScope"].empty()) {
      resourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RuleContents") != m.end() && !m["RuleContents"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleContents"].type()) {
        vector<ListAutoGroupingRulesResponseBodyRulesRuleContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAutoGroupingRulesResponseBodyRulesRuleContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleContents = make_shared<vector<ListAutoGroupingRulesResponseBodyRulesRuleContents>>(expect1);
      }
    }
    if (m.find("RuleDesc") != m.end() && !m["RuleDesc"].empty()) {
      ruleDesc = make_shared<string>(boost::any_cast<string>(m["RuleDesc"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~ListAutoGroupingRulesResponseBodyRules() = default;
};
class ListAutoGroupingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAutoGroupingRulesResponseBodyRules>> rules{};

  ListAutoGroupingRulesResponseBody() {}

  explicit ListAutoGroupingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<ListAutoGroupingRulesResponseBodyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAutoGroupingRulesResponseBodyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<ListAutoGroupingRulesResponseBodyRules>>(expect1);
      }
    }
  }


  virtual ~ListAutoGroupingRulesResponseBody() = default;
};
class ListAutoGroupingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAutoGroupingRulesResponseBody> body{};

  ListAutoGroupingRulesResponse() {}

  explicit ListAutoGroupingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAutoGroupingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAutoGroupingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAutoGroupingRulesResponse() = default;
};
class ListControlPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyType{};

  ListControlPoliciesRequest() {}

  explicit ListControlPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListControlPoliciesRequest() = default;
};
class ListControlPoliciesResponseBodyControlPoliciesControlPolicy : public Darabonba::Model {
public:
  shared_ptr<string> attachmentCount{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> updateDate{};

  ListControlPoliciesResponseBodyControlPoliciesControlPolicy() {}

  explicit ListControlPoliciesResponseBodyControlPoliciesControlPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<string>(boost::any_cast<string>(m["AttachmentCount"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListControlPoliciesResponseBodyControlPoliciesControlPolicy() = default;
};
class ListControlPoliciesResponseBodyControlPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<ListControlPoliciesResponseBodyControlPoliciesControlPolicy>> controlPolicy{};

  ListControlPoliciesResponseBodyControlPolicies() {}

  explicit ListControlPoliciesResponseBodyControlPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*controlPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ControlPolicy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicy") != m.end() && !m["ControlPolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["ControlPolicy"].type()) {
        vector<ListControlPoliciesResponseBodyControlPoliciesControlPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ControlPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListControlPoliciesResponseBodyControlPoliciesControlPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        controlPolicy = make_shared<vector<ListControlPoliciesResponseBodyControlPoliciesControlPolicy>>(expect1);
      }
    }
  }


  virtual ~ListControlPoliciesResponseBodyControlPolicies() = default;
};
class ListControlPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListControlPoliciesResponseBodyControlPolicies> controlPolicies{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListControlPoliciesResponseBody() {}

  explicit ListControlPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicies) {
      res["ControlPolicies"] = controlPolicies ? boost::any(controlPolicies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicies") != m.end() && !m["ControlPolicies"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicies"].type()) {
        ListControlPoliciesResponseBodyControlPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicies"]));
        controlPolicies = make_shared<ListControlPoliciesResponseBodyControlPolicies>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListControlPoliciesResponseBody() = default;
};
class ListControlPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListControlPoliciesResponseBody> body{};

  ListControlPoliciesResponse() {}

  explicit ListControlPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListControlPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListControlPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListControlPoliciesResponse() = default;
};
class ListControlPolicyAttachmentsForTargetRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> targetId{};

  ListControlPolicyAttachmentsForTargetRequest() {}

  explicit ListControlPolicyAttachmentsForTargetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetRequest() = default;
};
class ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment : public Darabonba::Model {
public:
  shared_ptr<string> attachDate{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment() {}

  explicit ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment() = default;
};
class ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments : public Darabonba::Model {
public:
  shared_ptr<vector<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment>> controlPolicyAttachment{};

  ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments() {}

  explicit ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicyAttachment) {
      vector<boost::any> temp1;
      for(auto item1:*controlPolicyAttachment){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ControlPolicyAttachment"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicyAttachment") != m.end() && !m["ControlPolicyAttachment"].empty()) {
      if (typeid(vector<boost::any>) == m["ControlPolicyAttachment"].type()) {
        vector<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ControlPolicyAttachment"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        controlPolicyAttachment = make_shared<vector<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment>>(expect1);
      }
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments() = default;
};
class ListControlPolicyAttachmentsForTargetResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments> controlPolicyAttachments{};
  shared_ptr<string> requestId{};

  ListControlPolicyAttachmentsForTargetResponseBody() {}

  explicit ListControlPolicyAttachmentsForTargetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicyAttachments) {
      res["ControlPolicyAttachments"] = controlPolicyAttachments ? boost::any(controlPolicyAttachments->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicyAttachments") != m.end() && !m["ControlPolicyAttachments"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicyAttachments"].type()) {
        ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicyAttachments"]));
        controlPolicyAttachments = make_shared<ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetResponseBody() = default;
};
class ListControlPolicyAttachmentsForTargetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListControlPolicyAttachmentsForTargetResponseBody> body{};

  ListControlPolicyAttachmentsForTargetResponse() {}

  explicit ListControlPolicyAttachmentsForTargetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListControlPolicyAttachmentsForTargetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListControlPolicyAttachmentsForTargetResponseBody>(model1);
      }
    }
  }


  virtual ~ListControlPolicyAttachmentsForTargetResponse() = default;
};
class ListDelegatedAdministratorsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> servicePrincipal{};

  ListDelegatedAdministratorsRequest() {}

  explicit ListDelegatedAdministratorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
  }


  virtual ~ListDelegatedAdministratorsRequest() = default;
};
class ListDelegatedAdministratorsResponseBodyAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> delegationEnabledTime{};
  shared_ptr<string> displayName{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> servicePrincipal{};

  ListDelegatedAdministratorsResponseBodyAccountsAccount() {}

  explicit ListDelegatedAdministratorsResponseBodyAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (delegationEnabledTime) {
      res["DelegationEnabledTime"] = boost::any(*delegationEnabledTime);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DelegationEnabledTime") != m.end() && !m["DelegationEnabledTime"].empty()) {
      delegationEnabledTime = make_shared<string>(boost::any_cast<string>(m["DelegationEnabledTime"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
  }


  virtual ~ListDelegatedAdministratorsResponseBodyAccountsAccount() = default;
};
class ListDelegatedAdministratorsResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<ListDelegatedAdministratorsResponseBodyAccountsAccount>> account{};

  ListDelegatedAdministratorsResponseBodyAccounts() {}

  explicit ListDelegatedAdministratorsResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      vector<boost::any> temp1;
      for(auto item1:*account){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Account"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(vector<boost::any>) == m["Account"].type()) {
        vector<ListDelegatedAdministratorsResponseBodyAccountsAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Account"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDelegatedAdministratorsResponseBodyAccountsAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        account = make_shared<vector<ListDelegatedAdministratorsResponseBodyAccountsAccount>>(expect1);
      }
    }
  }


  virtual ~ListDelegatedAdministratorsResponseBodyAccounts() = default;
};
class ListDelegatedAdministratorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDelegatedAdministratorsResponseBodyAccounts> accounts{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDelegatedAdministratorsResponseBody() {}

  explicit ListDelegatedAdministratorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        ListDelegatedAdministratorsResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<ListDelegatedAdministratorsResponseBodyAccounts>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDelegatedAdministratorsResponseBody() = default;
};
class ListDelegatedAdministratorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDelegatedAdministratorsResponseBody> body{};

  ListDelegatedAdministratorsResponse() {}

  explicit ListDelegatedAdministratorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDelegatedAdministratorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDelegatedAdministratorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDelegatedAdministratorsResponse() = default;
};
class ListDelegatedServicesForAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  ListDelegatedServicesForAccountRequest() {}

  explicit ListDelegatedServicesForAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~ListDelegatedServicesForAccountRequest() = default;
};
class ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService : public Darabonba::Model {
public:
  shared_ptr<string> delegationEnabledTime{};
  shared_ptr<string> servicePrincipal{};
  shared_ptr<string> status{};

  ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService() {}

  explicit ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delegationEnabledTime) {
      res["DelegationEnabledTime"] = boost::any(*delegationEnabledTime);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelegationEnabledTime") != m.end() && !m["DelegationEnabledTime"].empty()) {
      delegationEnabledTime = make_shared<string>(boost::any_cast<string>(m["DelegationEnabledTime"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService() = default;
};
class ListDelegatedServicesForAccountResponseBodyDelegatedServices : public Darabonba::Model {
public:
  shared_ptr<vector<ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService>> delegatedService{};

  ListDelegatedServicesForAccountResponseBodyDelegatedServices() {}

  explicit ListDelegatedServicesForAccountResponseBodyDelegatedServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delegatedService) {
      vector<boost::any> temp1;
      for(auto item1:*delegatedService){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DelegatedService"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelegatedService") != m.end() && !m["DelegatedService"].empty()) {
      if (typeid(vector<boost::any>) == m["DelegatedService"].type()) {
        vector<ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DelegatedService"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        delegatedService = make_shared<vector<ListDelegatedServicesForAccountResponseBodyDelegatedServicesDelegatedService>>(expect1);
      }
    }
  }


  virtual ~ListDelegatedServicesForAccountResponseBodyDelegatedServices() = default;
};
class ListDelegatedServicesForAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDelegatedServicesForAccountResponseBodyDelegatedServices> delegatedServices{};
  shared_ptr<string> requestId{};

  ListDelegatedServicesForAccountResponseBody() {}

  explicit ListDelegatedServicesForAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delegatedServices) {
      res["DelegatedServices"] = delegatedServices ? boost::any(delegatedServices->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelegatedServices") != m.end() && !m["DelegatedServices"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedServices"].type()) {
        ListDelegatedServicesForAccountResponseBodyDelegatedServices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedServices"]));
        delegatedServices = make_shared<ListDelegatedServicesForAccountResponseBodyDelegatedServices>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDelegatedServicesForAccountResponseBody() = default;
};
class ListDelegatedServicesForAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDelegatedServicesForAccountResponseBody> body{};

  ListDelegatedServicesForAccountResponse() {}

  explicit ListDelegatedServicesForAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDelegatedServicesForAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDelegatedServicesForAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ListDelegatedServicesForAccountResponse() = default;
};
class ListFoldersForParentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> queryKeyword{};

  ListFoldersForParentRequest() {}

  explicit ListFoldersForParentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    if (queryKeyword) {
      res["QueryKeyword"] = boost::any(*queryKeyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("QueryKeyword") != m.end() && !m["QueryKeyword"].empty()) {
      queryKeyword = make_shared<string>(boost::any_cast<string>(m["QueryKeyword"]));
    }
  }


  virtual ~ListFoldersForParentRequest() = default;
};
class ListFoldersForParentResponseBodyFoldersFolder : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> folderId{};
  shared_ptr<string> folderName{};

  ListFoldersForParentResponseBodyFoldersFolder() {}

  explicit ListFoldersForParentResponseBodyFoldersFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
  }


  virtual ~ListFoldersForParentResponseBodyFoldersFolder() = default;
};
class ListFoldersForParentResponseBodyFolders : public Darabonba::Model {
public:
  shared_ptr<vector<ListFoldersForParentResponseBodyFoldersFolder>> folder{};

  ListFoldersForParentResponseBodyFolders() {}

  explicit ListFoldersForParentResponseBodyFolders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folder) {
      vector<boost::any> temp1;
      for(auto item1:*folder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Folder"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(vector<boost::any>) == m["Folder"].type()) {
        vector<ListFoldersForParentResponseBodyFoldersFolder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Folder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFoldersForParentResponseBodyFoldersFolder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        folder = make_shared<vector<ListFoldersForParentResponseBodyFoldersFolder>>(expect1);
      }
    }
  }


  virtual ~ListFoldersForParentResponseBodyFolders() = default;
};
class ListFoldersForParentResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListFoldersForParentResponseBodyFolders> folders{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFoldersForParentResponseBody() {}

  explicit ListFoldersForParentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folders) {
      res["Folders"] = folders ? boost::any(folders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Folders") != m.end() && !m["Folders"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folders"].type()) {
        ListFoldersForParentResponseBodyFolders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folders"]));
        folders = make_shared<ListFoldersForParentResponseBodyFolders>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFoldersForParentResponseBody() = default;
};
class ListFoldersForParentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFoldersForParentResponseBody> body{};

  ListFoldersForParentResponse() {}

  explicit ListFoldersForParentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFoldersForParentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFoldersForParentResponseBody>(model1);
      }
    }
  }


  virtual ~ListFoldersForParentResponse() = default;
};
class ListHandshakesForAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListHandshakesForAccountRequest() {}

  explicit ListHandshakesForAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListHandshakesForAccountRequest() = default;
};
class ListHandshakesForAccountResponseBodyHandshakesHandshake : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> handshakeId{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> note{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> targetType{};

  ListHandshakesForAccountResponseBodyHandshakesHandshake() {}

  explicit ListHandshakesForAccountResponseBodyHandshakesHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListHandshakesForAccountResponseBodyHandshakesHandshake() = default;
};
class ListHandshakesForAccountResponseBodyHandshakes : public Darabonba::Model {
public:
  shared_ptr<vector<ListHandshakesForAccountResponseBodyHandshakesHandshake>> handshake{};

  ListHandshakesForAccountResponseBodyHandshakes() {}

  explicit ListHandshakesForAccountResponseBodyHandshakes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshake) {
      vector<boost::any> temp1;
      for(auto item1:*handshake){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Handshake"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(vector<boost::any>) == m["Handshake"].type()) {
        vector<ListHandshakesForAccountResponseBodyHandshakesHandshake> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Handshake"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHandshakesForAccountResponseBodyHandshakesHandshake model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        handshake = make_shared<vector<ListHandshakesForAccountResponseBodyHandshakesHandshake>>(expect1);
      }
    }
  }


  virtual ~ListHandshakesForAccountResponseBodyHandshakes() = default;
};
class ListHandshakesForAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListHandshakesForAccountResponseBodyHandshakes> handshakes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListHandshakesForAccountResponseBody() {}

  explicit ListHandshakesForAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakes) {
      res["Handshakes"] = handshakes ? boost::any(handshakes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshakes") != m.end() && !m["Handshakes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshakes"].type()) {
        ListHandshakesForAccountResponseBodyHandshakes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshakes"]));
        handshakes = make_shared<ListHandshakesForAccountResponseBodyHandshakes>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListHandshakesForAccountResponseBody() = default;
};
class ListHandshakesForAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHandshakesForAccountResponseBody> body{};

  ListHandshakesForAccountResponse() {}

  explicit ListHandshakesForAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHandshakesForAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHandshakesForAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ListHandshakesForAccountResponse() = default;
};
class ListHandshakesForResourceDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListHandshakesForResourceDirectoryRequest() {}

  explicit ListHandshakesForResourceDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListHandshakesForResourceDirectoryRequest() = default;
};
class ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> handshakeId{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> note{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> targetEntity{};
  shared_ptr<string> targetType{};

  ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake() {}

  explicit ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (handshakeId) {
      res["HandshakeId"] = boost::any(*handshakeId);
    }
    if (masterAccountId) {
      res["MasterAccountId"] = boost::any(*masterAccountId);
    }
    if (masterAccountName) {
      res["MasterAccountName"] = boost::any(*masterAccountName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetEntity) {
      res["TargetEntity"] = boost::any(*targetEntity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HandshakeId") != m.end() && !m["HandshakeId"].empty()) {
      handshakeId = make_shared<string>(boost::any_cast<string>(m["HandshakeId"]));
    }
    if (m.find("MasterAccountId") != m.end() && !m["MasterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["MasterAccountId"]));
    }
    if (m.find("MasterAccountName") != m.end() && !m["MasterAccountName"].empty()) {
      masterAccountName = make_shared<string>(boost::any_cast<string>(m["MasterAccountName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetEntity") != m.end() && !m["TargetEntity"].empty()) {
      targetEntity = make_shared<string>(boost::any_cast<string>(m["TargetEntity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake() = default;
};
class ListHandshakesForResourceDirectoryResponseBodyHandshakes : public Darabonba::Model {
public:
  shared_ptr<vector<ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake>> handshake{};

  ListHandshakesForResourceDirectoryResponseBodyHandshakes() {}

  explicit ListHandshakesForResourceDirectoryResponseBodyHandshakes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshake) {
      vector<boost::any> temp1;
      for(auto item1:*handshake){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Handshake"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshake") != m.end() && !m["Handshake"].empty()) {
      if (typeid(vector<boost::any>) == m["Handshake"].type()) {
        vector<ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Handshake"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        handshake = make_shared<vector<ListHandshakesForResourceDirectoryResponseBodyHandshakesHandshake>>(expect1);
      }
    }
  }


  virtual ~ListHandshakesForResourceDirectoryResponseBodyHandshakes() = default;
};
class ListHandshakesForResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListHandshakesForResourceDirectoryResponseBodyHandshakes> handshakes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListHandshakesForResourceDirectoryResponseBody() {}

  explicit ListHandshakesForResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (handshakes) {
      res["Handshakes"] = handshakes ? boost::any(handshakes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Handshakes") != m.end() && !m["Handshakes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Handshakes"].type()) {
        ListHandshakesForResourceDirectoryResponseBodyHandshakes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Handshakes"]));
        handshakes = make_shared<ListHandshakesForResourceDirectoryResponseBodyHandshakes>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListHandshakesForResourceDirectoryResponseBody() = default;
};
class ListHandshakesForResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHandshakesForResourceDirectoryResponseBody> body{};

  ListHandshakesForResourceDirectoryResponse() {}

  explicit ListHandshakesForResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHandshakesForResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHandshakesForResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListHandshakesForResourceDirectoryResponse() = default;
};
class ListPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyType{};

  ListPoliciesRequest() {}

  explicit ListPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPoliciesRequest() = default;
};
class ListPoliciesResponseBodyPoliciesPolicy : public Darabonba::Model {
public:
  shared_ptr<long> attachmentCount{};
  shared_ptr<string> createDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> updateDate{};

  ListPoliciesResponseBodyPoliciesPolicy() {}

  explicit ListPoliciesResponseBodyPoliciesPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<long>(boost::any_cast<long>(m["AttachmentCount"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListPoliciesResponseBodyPoliciesPolicy() = default;
};
class ListPoliciesResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<ListPoliciesResponseBodyPoliciesPolicy>> policy{};

  ListPoliciesResponseBodyPolicies() {}

  explicit ListPoliciesResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      vector<boost::any> temp1;
      for(auto item1:*policy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(vector<boost::any>) == m["Policy"].type()) {
        vector<ListPoliciesResponseBodyPoliciesPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesResponseBodyPoliciesPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policy = make_shared<vector<ListPoliciesResponseBodyPoliciesPolicy>>(expect1);
      }
    }
  }


  virtual ~ListPoliciesResponseBodyPolicies() = default;
};
class ListPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<ListPoliciesResponseBodyPolicies> policies{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPoliciesResponseBody() {}

  explicit ListPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policies) {
      res["Policies"] = policies ? boost::any(policies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policies"].type()) {
        ListPoliciesResponseBodyPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policies"]));
        policies = make_shared<ListPoliciesResponseBodyPolicies>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPoliciesResponseBody() = default;
};
class ListPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPoliciesResponseBody> body{};

  ListPoliciesResponse() {}

  explicit ListPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesResponse() = default;
};
class ListPolicyAttachmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> resourceGroupId{};

  ListPolicyAttachmentsRequest() {}

  explicit ListPolicyAttachmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListPolicyAttachmentsRequest() = default;
};
class ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment : public Darabonba::Model {
public:
  shared_ptr<string> attachDate{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> resourceGroupId{};

  ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment() {}

  explicit ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment() = default;
};
class ListPolicyAttachmentsResponseBodyPolicyAttachments : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment>> policyAttachment{};

  ListPolicyAttachmentsResponseBodyPolicyAttachments() {}

  explicit ListPolicyAttachmentsResponseBodyPolicyAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyAttachment) {
      vector<boost::any> temp1;
      for(auto item1:*policyAttachment){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyAttachment"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyAttachment") != m.end() && !m["PolicyAttachment"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyAttachment"].type()) {
        vector<ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyAttachment"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyAttachment = make_shared<vector<ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment>>(expect1);
      }
    }
  }


  virtual ~ListPolicyAttachmentsResponseBodyPolicyAttachments() = default;
};
class ListPolicyAttachmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<ListPolicyAttachmentsResponseBodyPolicyAttachments> policyAttachments{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPolicyAttachmentsResponseBody() {}

  explicit ListPolicyAttachmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyAttachments) {
      res["PolicyAttachments"] = policyAttachments ? boost::any(policyAttachments->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyAttachments") != m.end() && !m["PolicyAttachments"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyAttachments"].type()) {
        ListPolicyAttachmentsResponseBodyPolicyAttachments model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyAttachments"]));
        policyAttachments = make_shared<ListPolicyAttachmentsResponseBodyPolicyAttachments>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPolicyAttachmentsResponseBody() = default;
};
class ListPolicyAttachmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicyAttachmentsResponseBody> body{};

  ListPolicyAttachmentsResponse() {}

  explicit ListPolicyAttachmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPolicyAttachmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyAttachmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyAttachmentsResponse() = default;
};
class ListPolicyVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  ListPolicyVersionsRequest() {}

  explicit ListPolicyVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPolicyVersionsRequest() = default;
};
class ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> versionId{};

  ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion() {}

  explicit ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion() = default;
};
class ListPolicyVersionsResponseBodyPolicyVersions : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion>> policyVersion{};

  ListPolicyVersionsResponseBodyPolicyVersions() {}

  explicit ListPolicyVersionsResponseBodyPolicyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersion) {
      vector<boost::any> temp1;
      for(auto item1:*policyVersion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyVersion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyVersion"].type()) {
        vector<ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyVersion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyVersion = make_shared<vector<ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion>>(expect1);
      }
    }
  }


  virtual ~ListPolicyVersionsResponseBodyPolicyVersions() = default;
};
class ListPolicyVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPolicyVersionsResponseBodyPolicyVersions> policyVersions{};
  shared_ptr<string> requestId{};

  ListPolicyVersionsResponseBody() {}

  explicit ListPolicyVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersions) {
      res["PolicyVersions"] = policyVersions ? boost::any(policyVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersions") != m.end() && !m["PolicyVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyVersions"].type()) {
        ListPolicyVersionsResponseBodyPolicyVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyVersions"]));
        policyVersions = make_shared<ListPolicyVersionsResponseBodyPolicyVersions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPolicyVersionsResponseBody() = default;
};
class ListPolicyVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicyVersionsResponseBody> body{};

  ListPolicyVersionsResponse() {}

  explicit ListPolicyVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPolicyVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyVersionsResponse() = default;
};
class ListResourceGroupsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListResourceGroupsRequestTag() {}

  explicit ListResourceGroupsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListResourceGroupsRequestTag() = default;
};
class ListResourceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<bool> includeTags{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> resourceGroupIds{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListResourceGroupsRequestTag>> tag{};

  ListResourceGroupsRequest() {}

  explicit ListResourceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (includeTags) {
      res["IncludeTags"] = boost::any(*includeTags);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceGroupIds) {
      res["ResourceGroupIds"] = boost::any(*resourceGroupIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("IncludeTags") != m.end() && !m["IncludeTags"].empty()) {
      includeTags = make_shared<bool>(boost::any_cast<bool>(m["IncludeTags"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceGroupIds") != m.end() && !m["ResourceGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListResourceGroupsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceGroupsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListResourceGroupsRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListResourceGroupsRequest() = default;
};
class ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag() {}

  explicit ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag() = default;
};
class ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag>> tag{};

  ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags() {}

  explicit ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListResourceGroupsResponseBodyResourceGroupsResourceGroupTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags() = default;
};
class ListResourceGroupsResponseBodyResourceGroupsResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags> tags{};

  ListResourceGroupsResponseBodyResourceGroupsResourceGroup() {}

  explicit ListResourceGroupsResponseBodyResourceGroupsResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListResourceGroupsResponseBodyResourceGroupsResourceGroupTags>(model1);
      }
    }
  }


  virtual ~ListResourceGroupsResponseBodyResourceGroupsResourceGroup() = default;
};
class ListResourceGroupsResponseBodyResourceGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourceGroupsResponseBodyResourceGroupsResourceGroup>> resourceGroup{};

  ListResourceGroupsResponseBodyResourceGroups() {}

  explicit ListResourceGroupsResponseBodyResourceGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroup) {
      vector<boost::any> temp1;
      for(auto item1:*resourceGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceGroup"].type()) {
        vector<ListResourceGroupsResponseBodyResourceGroupsResourceGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceGroupsResponseBodyResourceGroupsResourceGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceGroup = make_shared<vector<ListResourceGroupsResponseBodyResourceGroupsResourceGroup>>(expect1);
      }
    }
  }


  virtual ~ListResourceGroupsResponseBodyResourceGroups() = default;
};
class ListResourceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListResourceGroupsResponseBodyResourceGroups> resourceGroups{};
  shared_ptr<long> totalCount{};

  ListResourceGroupsResponseBody() {}

  explicit ListResourceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroups) {
      res["ResourceGroups"] = resourceGroups ? boost::any(resourceGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroups") != m.end() && !m["ResourceGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroups"].type()) {
        ListResourceGroupsResponseBodyResourceGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroups"]));
        resourceGroups = make_shared<ListResourceGroupsResponseBodyResourceGroups>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourceGroupsResponseBody() = default;
};
class ListResourceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceGroupsResponseBody> body{};

  ListResourceGroupsResponse() {}

  explicit ListResourceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceGroupsResponse() = default;
};
class ListResourcesRequestResourceTypes : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<string> service{};

  ListResourcesRequestResourceTypes() {}

  explicit ListResourcesRequestResourceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~ListResourcesRequestResourceTypes() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListResourcesRequestResourceTypes>> resourceTypes{};
  shared_ptr<string> service{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceTypes"] = boost::any(temp1);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceTypes") != m.end() && !m["ResourceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceTypes"].type()) {
        vector<ListResourcesRequestResourceTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesRequestResourceTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceTypes = make_shared<vector<ListResourcesRequestResourceTypes>>(expect1);
      }
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyResourcesResource : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> service{};

  ListResourcesResponseBodyResourcesResource() {}

  explicit ListResourcesResponseBodyResourcesResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~ListResourcesResponseBodyResourcesResource() = default;
};
class ListResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourcesResponseBodyResourcesResource>> resource{};

  ListResourcesResponseBodyResources() {}

  explicit ListResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      vector<boost::any> temp1;
      for(auto item1:*resource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(vector<boost::any>) == m["Resource"].type()) {
        vector<ListResourcesResponseBodyResourcesResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyResourcesResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<ListResourcesResponseBodyResourcesResource>>(expect1);
      }
    }
  }


  virtual ~ListResourcesResponseBodyResources() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListResourcesResponseBodyResources> resources{};
  shared_ptr<long> totalCount{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        ListResourcesResponseBodyResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<ListResourcesResponseBodyResources>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListRolesRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListRolesRequest() {}

  explicit ListRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListRolesRequest() = default;
};
class ListRolesResponseBodyRolesRoleLatestDeletionTask : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> deletionTaskId{};

  ListRolesResponseBodyRolesRoleLatestDeletionTask() {}

  explicit ListRolesResponseBodyRolesRoleLatestDeletionTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
  }


  virtual ~ListRolesResponseBodyRolesRoleLatestDeletionTask() = default;
};
class ListRolesResponseBodyRolesRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> isServiceLinkedRole{};
  shared_ptr<ListRolesResponseBodyRolesRoleLatestDeletionTask> latestDeletionTask{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> rolePrincipalName{};
  shared_ptr<string> updateDate{};

  ListRolesResponseBodyRolesRole() {}

  explicit ListRolesResponseBodyRolesRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (isServiceLinkedRole) {
      res["IsServiceLinkedRole"] = boost::any(*isServiceLinkedRole);
    }
    if (latestDeletionTask) {
      res["LatestDeletionTask"] = latestDeletionTask ? boost::any(latestDeletionTask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
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
    if (m.find("IsServiceLinkedRole") != m.end() && !m["IsServiceLinkedRole"].empty()) {
      isServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["IsServiceLinkedRole"]));
    }
    if (m.find("LatestDeletionTask") != m.end() && !m["LatestDeletionTask"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestDeletionTask"].type()) {
        ListRolesResponseBodyRolesRoleLatestDeletionTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestDeletionTask"]));
        latestDeletionTask = make_shared<ListRolesResponseBodyRolesRoleLatestDeletionTask>(model1);
      }
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListRolesResponseBodyRolesRole() = default;
};
class ListRolesResponseBodyRoles : public Darabonba::Model {
public:
  shared_ptr<vector<ListRolesResponseBodyRolesRole>> role{};

  ListRolesResponseBodyRoles() {}

  explicit ListRolesResponseBodyRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      vector<boost::any> temp1;
      for(auto item1:*role){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Role"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(vector<boost::any>) == m["Role"].type()) {
        vector<ListRolesResponseBodyRolesRole> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Role"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyRolesRole model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        role = make_shared<vector<ListRolesResponseBodyRolesRole>>(expect1);
      }
    }
  }


  virtual ~ListRolesResponseBodyRoles() = default;
};
class ListRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListRolesResponseBodyRoles> roles{};
  shared_ptr<long> totalCount{};

  ListRolesResponseBody() {}

  explicit ListRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roles) {
      res["Roles"] = roles ? boost::any(roles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roles"].type()) {
        ListRolesResponseBodyRoles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roles"]));
        roles = make_shared<ListRolesResponseBodyRoles>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListRolesResponseBody() = default;
};
class ListRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRolesResponseBody> body{};

  ListRolesResponse() {}

  explicit ListRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRolesResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyFilter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceType{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyFilter) {
      res["KeyFilter"] = boost::any(*keyFilter);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyFilter") != m.end() && !m["KeyFilter"].empty()) {
      keyFilter = make_shared<string>(boost::any_cast<string>(m["KeyFilter"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};

  ListTagKeysResponseBodyTags() {}

  explicit ListTagKeysResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~ListTagKeysResponseBodyTags() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagKeysResponseBodyTags>> tags{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTagKeysResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagKeysResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTagKeysResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
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
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListTagValuesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> valueFilter{};

  ListTagValuesRequest() {}

  explicit ListTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (valueFilter) {
      res["ValueFilter"] = boost::any(*valueFilter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("ValueFilter") != m.end() && !m["ValueFilter"].empty()) {
      valueFilter = make_shared<string>(boost::any_cast<string>(m["ValueFilter"]));
    }
  }


  virtual ~ListTagValuesRequest() = default;
};
class ListTagValuesResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> value{};

  ListTagValuesResponseBodyTags() {}

  explicit ListTagValuesResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagValuesResponseBodyTags() = default;
};
class ListTagValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagValuesResponseBodyTags>> tags{};

  ListTagValuesResponseBody() {}

  explicit ListTagValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTagValuesResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagValuesResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTagValuesResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~ListTagValuesResponseBody() = default;
};
class ListTagValuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagValuesResponseBody> body{};

  ListTagValuesResponse() {}

  explicit ListTagValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagValuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagValuesResponse() = default;
};
class ListTargetAttachmentsForControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyId{};

  ListTargetAttachmentsForControlPolicyRequest() {}

  explicit ListTargetAttachmentsForControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyRequest() = default;
};
class ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment : public Darabonba::Model {
public:
  shared_ptr<string> attachDate{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetType{};

  ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment() {}

  explicit ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment() = default;
};
class ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments : public Darabonba::Model {
public:
  shared_ptr<vector<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment>> targetAttachment{};

  ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments() {}

  explicit ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetAttachment) {
      vector<boost::any> temp1;
      for(auto item1:*targetAttachment){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TargetAttachment"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetAttachment") != m.end() && !m["TargetAttachment"].empty()) {
      if (typeid(vector<boost::any>) == m["TargetAttachment"].type()) {
        vector<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TargetAttachment"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetAttachment = make_shared<vector<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment>>(expect1);
      }
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments() = default;
};
class ListTargetAttachmentsForControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments> targetAttachments{};
  shared_ptr<long> totalCount{};

  ListTargetAttachmentsForControlPolicyResponseBody() {}

  explicit ListTargetAttachmentsForControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (targetAttachments) {
      res["TargetAttachments"] = targetAttachments ? boost::any(targetAttachments->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TargetAttachments") != m.end() && !m["TargetAttachments"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetAttachments"].type()) {
        ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetAttachments"]));
        targetAttachments = make_shared<ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyResponseBody() = default;
};
class ListTargetAttachmentsForControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTargetAttachmentsForControlPolicyResponseBody> body{};

  ListTargetAttachmentsForControlPolicyResponse() {}

  explicit ListTargetAttachmentsForControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTargetAttachmentsForControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTargetAttachmentsForControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListTargetAttachmentsForControlPolicyResponse() = default;
};
class ListTrustedServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> adminAccountId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListTrustedServiceStatusRequest() {}

  explicit ListTrustedServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminAccountId) {
      res["AdminAccountId"] = boost::any(*adminAccountId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminAccountId") != m.end() && !m["AdminAccountId"].empty()) {
      adminAccountId = make_shared<string>(boost::any_cast<string>(m["AdminAccountId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListTrustedServiceStatusRequest() = default;
};
class ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal : public Darabonba::Model {
public:
  shared_ptr<string> enableTime{};
  shared_ptr<string> servicePrincipal{};

  ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal() {}

  explicit ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableTime) {
      res["EnableTime"] = boost::any(*enableTime);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableTime") != m.end() && !m["EnableTime"].empty()) {
      enableTime = make_shared<string>(boost::any_cast<string>(m["EnableTime"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
  }


  virtual ~ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal() = default;
};
class ListTrustedServiceStatusResponseBodyEnabledServicePrincipals : public Darabonba::Model {
public:
  shared_ptr<vector<ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal>> enabledServicePrincipal{};

  ListTrustedServiceStatusResponseBodyEnabledServicePrincipals() {}

  explicit ListTrustedServiceStatusResponseBodyEnabledServicePrincipals(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabledServicePrincipal) {
      vector<boost::any> temp1;
      for(auto item1:*enabledServicePrincipal){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnabledServicePrincipal"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnabledServicePrincipal") != m.end() && !m["EnabledServicePrincipal"].empty()) {
      if (typeid(vector<boost::any>) == m["EnabledServicePrincipal"].type()) {
        vector<ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnabledServicePrincipal"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        enabledServicePrincipal = make_shared<vector<ListTrustedServiceStatusResponseBodyEnabledServicePrincipalsEnabledServicePrincipal>>(expect1);
      }
    }
  }


  virtual ~ListTrustedServiceStatusResponseBodyEnabledServicePrincipals() = default;
};
class ListTrustedServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListTrustedServiceStatusResponseBodyEnabledServicePrincipals> enabledServicePrincipals{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListTrustedServiceStatusResponseBody() {}

  explicit ListTrustedServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabledServicePrincipals) {
      res["EnabledServicePrincipals"] = enabledServicePrincipals ? boost::any(enabledServicePrincipals->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnabledServicePrincipals") != m.end() && !m["EnabledServicePrincipals"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnabledServicePrincipals"].type()) {
        ListTrustedServiceStatusResponseBodyEnabledServicePrincipals model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnabledServicePrincipals"]));
        enabledServicePrincipals = make_shared<ListTrustedServiceStatusResponseBodyEnabledServicePrincipals>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTrustedServiceStatusResponseBody() = default;
};
class ListTrustedServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTrustedServiceStatusResponseBody> body{};

  ListTrustedServiceStatusResponse() {}

  explicit ListTrustedServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTrustedServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrustedServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrustedServiceStatusResponse() = default;
};
class MoveAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> destinationFolderId{};

  MoveAccountRequest() {}

  explicit MoveAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (destinationFolderId) {
      res["DestinationFolderId"] = boost::any(*destinationFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DestinationFolderId") != m.end() && !m["DestinationFolderId"].empty()) {
      destinationFolderId = make_shared<string>(boost::any_cast<string>(m["DestinationFolderId"]));
    }
  }


  virtual ~MoveAccountRequest() = default;
};
class MoveAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveAccountResponseBody() {}

  explicit MoveAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MoveAccountResponseBody() = default;
};
class MoveAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveAccountResponseBody> body{};

  MoveAccountResponse() {}

  explicit MoveAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveAccountResponseBody>(model1);
      }
    }
  }


  virtual ~MoveAccountResponse() = default;
};
class MoveResourcesRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> service{};

  MoveResourcesRequestResources() {}

  explicit MoveResourcesRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~MoveResourcesRequestResources() = default;
};
class MoveResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<MoveResourcesRequestResources>> resources{};

  MoveResourcesRequest() {}

  explicit MoveResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<MoveResourcesRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MoveResourcesRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<MoveResourcesRequestResources>>(expect1);
      }
    }
  }


  virtual ~MoveResourcesRequest() = default;
};
class MoveResourcesResponseBodyResponses : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> service{};
  shared_ptr<string> status{};

  MoveResourcesResponseBodyResponses() {}

  explicit MoveResourcesResponseBodyResponses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~MoveResourcesResponseBodyResponses() = default;
};
class MoveResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<MoveResourcesResponseBodyResponses>> responses{};

  MoveResourcesResponseBody() {}

  explicit MoveResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responses) {
      vector<boost::any> temp1;
      for(auto item1:*responses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Responses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Responses") != m.end() && !m["Responses"].empty()) {
      if (typeid(vector<boost::any>) == m["Responses"].type()) {
        vector<MoveResourcesResponseBodyResponses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Responses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MoveResourcesResponseBodyResponses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        responses = make_shared<vector<MoveResourcesResponseBodyResponses>>(expect1);
      }
    }
  }


  virtual ~MoveResourcesResponseBody() = default;
};
class MoveResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveResourcesResponseBody> body{};

  MoveResourcesResponse() {}

  explicit MoveResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourcesResponse() = default;
};
class PromoteResourceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> email{};

  PromoteResourceAccountRequest() {}

  explicit PromoteResourceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
  }


  virtual ~PromoteResourceAccountRequest() = default;
};
class PromoteResourceAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> recordId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  PromoteResourceAccountResponseBodyAccount() {}

  explicit PromoteResourceAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PromoteResourceAccountResponseBodyAccount() = default;
};
class PromoteResourceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<PromoteResourceAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  PromoteResourceAccountResponseBody() {}

  explicit PromoteResourceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        PromoteResourceAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<PromoteResourceAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PromoteResourceAccountResponseBody() = default;
};
class PromoteResourceAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PromoteResourceAccountResponseBody> body{};

  PromoteResourceAccountResponse() {}

  explicit PromoteResourceAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PromoteResourceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PromoteResourceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~PromoteResourceAccountResponse() = default;
};
class RegisterDelegatedAdministratorRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> servicePrincipal{};

  RegisterDelegatedAdministratorRequest() {}

  explicit RegisterDelegatedAdministratorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (servicePrincipal) {
      res["ServicePrincipal"] = boost::any(*servicePrincipal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ServicePrincipal") != m.end() && !m["ServicePrincipal"].empty()) {
      servicePrincipal = make_shared<string>(boost::any_cast<string>(m["ServicePrincipal"]));
    }
  }


  virtual ~RegisterDelegatedAdministratorRequest() = default;
};
class RegisterDelegatedAdministratorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RegisterDelegatedAdministratorResponseBody() {}

  explicit RegisterDelegatedAdministratorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RegisterDelegatedAdministratorResponseBody() = default;
};
class RegisterDelegatedAdministratorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterDelegatedAdministratorResponseBody> body{};

  RegisterDelegatedAdministratorResponse() {}

  explicit RegisterDelegatedAdministratorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterDelegatedAdministratorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterDelegatedAdministratorResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterDelegatedAdministratorResponse() = default;
};
class RemoveCloudAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  RemoveCloudAccountRequest() {}

  explicit RemoveCloudAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~RemoveCloudAccountRequest() = default;
};
class RemoveCloudAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveCloudAccountResponseBody() {}

  explicit RemoveCloudAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveCloudAccountResponseBody() = default;
};
class RemoveCloudAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveCloudAccountResponseBody> body{};

  RemoveCloudAccountResponse() {}

  explicit RemoveCloudAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveCloudAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveCloudAccountResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveCloudAccountResponse() = default;
};
class ResendCreateCloudAccountEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  ResendCreateCloudAccountEmailRequest() {}

  explicit ResendCreateCloudAccountEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~ResendCreateCloudAccountEmailRequest() = default;
};
class ResendCreateCloudAccountEmailResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> recordId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ResendCreateCloudAccountEmailResponseBodyAccount() {}

  explicit ResendCreateCloudAccountEmailResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ResendCreateCloudAccountEmailResponseBodyAccount() = default;
};
class ResendCreateCloudAccountEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<ResendCreateCloudAccountEmailResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  ResendCreateCloudAccountEmailResponseBody() {}

  explicit ResendCreateCloudAccountEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        ResendCreateCloudAccountEmailResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<ResendCreateCloudAccountEmailResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResendCreateCloudAccountEmailResponseBody() = default;
};
class ResendCreateCloudAccountEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResendCreateCloudAccountEmailResponseBody> body{};

  ResendCreateCloudAccountEmailResponse() {}

  explicit ResendCreateCloudAccountEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResendCreateCloudAccountEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResendCreateCloudAccountEmailResponseBody>(model1);
      }
    }
  }


  virtual ~ResendCreateCloudAccountEmailResponse() = default;
};
class ResendPromoteResourceAccountEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  ResendPromoteResourceAccountEmailRequest() {}

  explicit ResendPromoteResourceAccountEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~ResendPromoteResourceAccountEmailRequest() = default;
};
class ResendPromoteResourceAccountEmailResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> recordId{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ResendPromoteResourceAccountEmailResponseBodyAccount() {}

  explicit ResendPromoteResourceAccountEmailResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ResendPromoteResourceAccountEmailResponseBodyAccount() = default;
};
class ResendPromoteResourceAccountEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<ResendPromoteResourceAccountEmailResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  ResendPromoteResourceAccountEmailResponseBody() {}

  explicit ResendPromoteResourceAccountEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        ResendPromoteResourceAccountEmailResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<ResendPromoteResourceAccountEmailResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResendPromoteResourceAccountEmailResponseBody() = default;
};
class ResendPromoteResourceAccountEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResendPromoteResourceAccountEmailResponseBody> body{};

  ResendPromoteResourceAccountEmailResponse() {}

  explicit ResendPromoteResourceAccountEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResendPromoteResourceAccountEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResendPromoteResourceAccountEmailResponseBody>(model1);
      }
    }
  }


  virtual ~ResendPromoteResourceAccountEmailResponse() = default;
};
class RetryChangeAccountEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  RetryChangeAccountEmailRequest() {}

  explicit RetryChangeAccountEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~RetryChangeAccountEmailRequest() = default;
};
class RetryChangeAccountEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RetryChangeAccountEmailResponseBody() {}

  explicit RetryChangeAccountEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RetryChangeAccountEmailResponseBody() = default;
};
class RetryChangeAccountEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetryChangeAccountEmailResponseBody> body{};

  RetryChangeAccountEmailResponse() {}

  explicit RetryChangeAccountEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetryChangeAccountEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryChangeAccountEmailResponseBody>(model1);
      }
    }
  }


  virtual ~RetryChangeAccountEmailResponse() = default;
};
class SendVerificationCodeForBindSecureMobilePhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> secureMobilePhone{};

  SendVerificationCodeForBindSecureMobilePhoneRequest() {}

  explicit SendVerificationCodeForBindSecureMobilePhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (secureMobilePhone) {
      res["SecureMobilePhone"] = boost::any(*secureMobilePhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("SecureMobilePhone") != m.end() && !m["SecureMobilePhone"].empty()) {
      secureMobilePhone = make_shared<string>(boost::any_cast<string>(m["SecureMobilePhone"]));
    }
  }


  virtual ~SendVerificationCodeForBindSecureMobilePhoneRequest() = default;
};
class SendVerificationCodeForBindSecureMobilePhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> expirationDate{};
  shared_ptr<string> requestId{};

  SendVerificationCodeForBindSecureMobilePhoneResponseBody() {}

  explicit SendVerificationCodeForBindSecureMobilePhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expirationDate) {
      res["ExpirationDate"] = boost::any(*expirationDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpirationDate") != m.end() && !m["ExpirationDate"].empty()) {
      expirationDate = make_shared<string>(boost::any_cast<string>(m["ExpirationDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendVerificationCodeForBindSecureMobilePhoneResponseBody() = default;
};
class SendVerificationCodeForBindSecureMobilePhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendVerificationCodeForBindSecureMobilePhoneResponseBody> body{};

  SendVerificationCodeForBindSecureMobilePhoneResponse() {}

  explicit SendVerificationCodeForBindSecureMobilePhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendVerificationCodeForBindSecureMobilePhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendVerificationCodeForBindSecureMobilePhoneResponseBody>(model1);
      }
    }
  }


  virtual ~SendVerificationCodeForBindSecureMobilePhoneResponse() = default;
};
class SendVerificationCodeForEnableRDRequest : public Darabonba::Model {
public:
  shared_ptr<string> secureMobilePhone{};

  SendVerificationCodeForEnableRDRequest() {}

  explicit SendVerificationCodeForEnableRDRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secureMobilePhone) {
      res["SecureMobilePhone"] = boost::any(*secureMobilePhone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecureMobilePhone") != m.end() && !m["SecureMobilePhone"].empty()) {
      secureMobilePhone = make_shared<string>(boost::any_cast<string>(m["SecureMobilePhone"]));
    }
  }


  virtual ~SendVerificationCodeForEnableRDRequest() = default;
};
class SendVerificationCodeForEnableRDResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendVerificationCodeForEnableRDResponseBody() {}

  explicit SendVerificationCodeForEnableRDResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendVerificationCodeForEnableRDResponseBody() = default;
};
class SendVerificationCodeForEnableRDResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendVerificationCodeForEnableRDResponseBody> body{};

  SendVerificationCodeForEnableRDResponse() {}

  explicit SendVerificationCodeForEnableRDResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendVerificationCodeForEnableRDResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendVerificationCodeForEnableRDResponseBody>(model1);
      }
    }
  }


  virtual ~SendVerificationCodeForEnableRDResponse() = default;
};
class SetDefaultPolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> versionId{};

  SetDefaultPolicyVersionRequest() {}

  explicit SetDefaultPolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~SetDefaultPolicyVersionRequest() = default;
};
class SetDefaultPolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDefaultPolicyVersionResponseBody() {}

  explicit SetDefaultPolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDefaultPolicyVersionResponseBody() = default;
};
class SetDefaultPolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDefaultPolicyVersionResponseBody> body{};

  SetDefaultPolicyVersionResponse() {}

  explicit SetDefaultPolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDefaultPolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultPolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultPolicyVersionResponse() = default;
};
class SetMemberDeletionPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  SetMemberDeletionPermissionRequest() {}

  explicit SetMemberDeletionPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SetMemberDeletionPermissionRequest() = default;
};
class SetMemberDeletionPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> managementAccountId{};
  shared_ptr<string> memberDeletionStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceDirectoryId{};

  SetMemberDeletionPermissionResponseBody() {}

  explicit SetMemberDeletionPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (managementAccountId) {
      res["ManagementAccountId"] = boost::any(*managementAccountId);
    }
    if (memberDeletionStatus) {
      res["MemberDeletionStatus"] = boost::any(*memberDeletionStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ManagementAccountId") != m.end() && !m["ManagementAccountId"].empty()) {
      managementAccountId = make_shared<string>(boost::any_cast<string>(m["ManagementAccountId"]));
    }
    if (m.find("MemberDeletionStatus") != m.end() && !m["MemberDeletionStatus"].empty()) {
      memberDeletionStatus = make_shared<string>(boost::any_cast<string>(m["MemberDeletionStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
  }


  virtual ~SetMemberDeletionPermissionResponseBody() = default;
};
class SetMemberDeletionPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetMemberDeletionPermissionResponseBody> body{};

  SetMemberDeletionPermissionResponse() {}

  explicit SetMemberDeletionPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetMemberDeletionPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetMemberDeletionPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~SetMemberDeletionPermissionResponse() = default;
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> newAccountType{};
  shared_ptr<string> newDisplayName{};

  UpdateAccountRequest() {}

  explicit UpdateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (newAccountType) {
      res["NewAccountType"] = boost::any(*newAccountType);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("NewAccountType") != m.end() && !m["NewAccountType"].empty()) {
      newAccountType = make_shared<string>(boost::any_cast<string>(m["NewAccountType"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
  }


  virtual ~UpdateAccountRequest() = default;
};
class UpdateAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  UpdateAccountResponseBodyAccount() {}

  explicit UpdateAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (joinMethod) {
      res["JoinMethod"] = boost::any(*joinMethod);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (resourceDirectoryId) {
      res["ResourceDirectoryId"] = boost::any(*resourceDirectoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("JoinMethod") != m.end() && !m["JoinMethod"].empty()) {
      joinMethod = make_shared<string>(boost::any_cast<string>(m["JoinMethod"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ResourceDirectoryId") != m.end() && !m["ResourceDirectoryId"].empty()) {
      resourceDirectoryId = make_shared<string>(boost::any_cast<string>(m["ResourceDirectoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateAccountResponseBodyAccount() = default;
};
class UpdateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  UpdateAccountResponseBody() {}

  explicit UpdateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        UpdateAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<UpdateAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAccountResponseBody() = default;
};
class UpdateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAccountResponseBody> body{};

  UpdateAccountResponse() {}

  explicit UpdateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccountResponse() = default;
};
class UpdateAssociatedTransferSettingRequestRuleSettings : public Darabonba::Model {
public:
  shared_ptr<string> associatedResourceType{};
  shared_ptr<string> associatedService{};
  shared_ptr<string> masterResourceType{};
  shared_ptr<string> masterService{};
  shared_ptr<string> status{};

  UpdateAssociatedTransferSettingRequestRuleSettings() {}

  explicit UpdateAssociatedTransferSettingRequestRuleSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associatedResourceType) {
      res["AssociatedResourceType"] = boost::any(*associatedResourceType);
    }
    if (associatedService) {
      res["AssociatedService"] = boost::any(*associatedService);
    }
    if (masterResourceType) {
      res["MasterResourceType"] = boost::any(*masterResourceType);
    }
    if (masterService) {
      res["MasterService"] = boost::any(*masterService);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociatedResourceType") != m.end() && !m["AssociatedResourceType"].empty()) {
      associatedResourceType = make_shared<string>(boost::any_cast<string>(m["AssociatedResourceType"]));
    }
    if (m.find("AssociatedService") != m.end() && !m["AssociatedService"].empty()) {
      associatedService = make_shared<string>(boost::any_cast<string>(m["AssociatedService"]));
    }
    if (m.find("MasterResourceType") != m.end() && !m["MasterResourceType"].empty()) {
      masterResourceType = make_shared<string>(boost::any_cast<string>(m["MasterResourceType"]));
    }
    if (m.find("MasterService") != m.end() && !m["MasterService"].empty()) {
      masterService = make_shared<string>(boost::any_cast<string>(m["MasterService"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateAssociatedTransferSettingRequestRuleSettings() = default;
};
class UpdateAssociatedTransferSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> enableExistingResourcesTransfer{};
  shared_ptr<vector<UpdateAssociatedTransferSettingRequestRuleSettings>> ruleSettings{};

  UpdateAssociatedTransferSettingRequest() {}

  explicit UpdateAssociatedTransferSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableExistingResourcesTransfer) {
      res["EnableExistingResourcesTransfer"] = boost::any(*enableExistingResourcesTransfer);
    }
    if (ruleSettings) {
      vector<boost::any> temp1;
      for(auto item1:*ruleSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleSettings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableExistingResourcesTransfer") != m.end() && !m["EnableExistingResourcesTransfer"].empty()) {
      enableExistingResourcesTransfer = make_shared<string>(boost::any_cast<string>(m["EnableExistingResourcesTransfer"]));
    }
    if (m.find("RuleSettings") != m.end() && !m["RuleSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleSettings"].type()) {
        vector<UpdateAssociatedTransferSettingRequestRuleSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAssociatedTransferSettingRequestRuleSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleSettings = make_shared<vector<UpdateAssociatedTransferSettingRequestRuleSettings>>(expect1);
      }
    }
  }


  virtual ~UpdateAssociatedTransferSettingRequest() = default;
};
class UpdateAssociatedTransferSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAssociatedTransferSettingResponseBody() {}

  explicit UpdateAssociatedTransferSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAssociatedTransferSettingResponseBody() = default;
};
class UpdateAssociatedTransferSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAssociatedTransferSettingResponseBody> body{};

  UpdateAssociatedTransferSettingResponse() {}

  explicit UpdateAssociatedTransferSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAssociatedTransferSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAssociatedTransferSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAssociatedTransferSettingResponse() = default;
};
class UpdateAutoGroupingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableExistingResourcesTransfer{};

  UpdateAutoGroupingConfigRequest() {}

  explicit UpdateAutoGroupingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableExistingResourcesTransfer) {
      res["EnableExistingResourcesTransfer"] = boost::any(*enableExistingResourcesTransfer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableExistingResourcesTransfer") != m.end() && !m["EnableExistingResourcesTransfer"].empty()) {
      enableExistingResourcesTransfer = make_shared<bool>(boost::any_cast<bool>(m["EnableExistingResourcesTransfer"]));
    }
  }


  virtual ~UpdateAutoGroupingConfigRequest() = default;
};
class UpdateAutoGroupingConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAutoGroupingConfigResponseBody() {}

  explicit UpdateAutoGroupingConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAutoGroupingConfigResponseBody() = default;
};
class UpdateAutoGroupingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAutoGroupingConfigResponseBody> body{};

  UpdateAutoGroupingConfigResponse() {}

  explicit UpdateAutoGroupingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAutoGroupingConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAutoGroupingConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAutoGroupingConfigResponse() = default;
};
class UpdateAutoGroupingRuleRequestRuleContents : public Darabonba::Model {
public:
  shared_ptr<string> autoGroupingScopeCondition{};
  shared_ptr<string> ruleContentId{};
  shared_ptr<string> targetResourceGroupCondition{};

  UpdateAutoGroupingRuleRequestRuleContents() {}

  explicit UpdateAutoGroupingRuleRequestRuleContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoGroupingScopeCondition) {
      res["AutoGroupingScopeCondition"] = boost::any(*autoGroupingScopeCondition);
    }
    if (ruleContentId) {
      res["RuleContentId"] = boost::any(*ruleContentId);
    }
    if (targetResourceGroupCondition) {
      res["TargetResourceGroupCondition"] = boost::any(*targetResourceGroupCondition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoGroupingScopeCondition") != m.end() && !m["AutoGroupingScopeCondition"].empty()) {
      autoGroupingScopeCondition = make_shared<string>(boost::any_cast<string>(m["AutoGroupingScopeCondition"]));
    }
    if (m.find("RuleContentId") != m.end() && !m["RuleContentId"].empty()) {
      ruleContentId = make_shared<string>(boost::any_cast<string>(m["RuleContentId"]));
    }
    if (m.find("TargetResourceGroupCondition") != m.end() && !m["TargetResourceGroupCondition"].empty()) {
      targetResourceGroupCondition = make_shared<string>(boost::any_cast<string>(m["TargetResourceGroupCondition"]));
    }
  }


  virtual ~UpdateAutoGroupingRuleRequestRuleContents() = default;
};
class UpdateAutoGroupingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> excludeRegionIdsScope{};
  shared_ptr<string> excludeResourceGroupIdsScope{};
  shared_ptr<string> excludeResourceIdsScope{};
  shared_ptr<string> excludeResourceTypesScope{};
  shared_ptr<string> regionIdsScope{};
  shared_ptr<string> resourceGroupIdsScope{};
  shared_ptr<string> resourceIdsScope{};
  shared_ptr<string> resourceTypesScope{};
  shared_ptr<vector<UpdateAutoGroupingRuleRequestRuleContents>> ruleContents{};
  shared_ptr<string> ruleDesc{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};

  UpdateAutoGroupingRuleRequest() {}

  explicit UpdateAutoGroupingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeRegionIdsScope) {
      res["ExcludeRegionIdsScope"] = boost::any(*excludeRegionIdsScope);
    }
    if (excludeResourceGroupIdsScope) {
      res["ExcludeResourceGroupIdsScope"] = boost::any(*excludeResourceGroupIdsScope);
    }
    if (excludeResourceIdsScope) {
      res["ExcludeResourceIdsScope"] = boost::any(*excludeResourceIdsScope);
    }
    if (excludeResourceTypesScope) {
      res["ExcludeResourceTypesScope"] = boost::any(*excludeResourceTypesScope);
    }
    if (regionIdsScope) {
      res["RegionIdsScope"] = boost::any(*regionIdsScope);
    }
    if (resourceGroupIdsScope) {
      res["ResourceGroupIdsScope"] = boost::any(*resourceGroupIdsScope);
    }
    if (resourceIdsScope) {
      res["ResourceIdsScope"] = boost::any(*resourceIdsScope);
    }
    if (resourceTypesScope) {
      res["ResourceTypesScope"] = boost::any(*resourceTypesScope);
    }
    if (ruleContents) {
      vector<boost::any> temp1;
      for(auto item1:*ruleContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuleContents"] = boost::any(temp1);
    }
    if (ruleDesc) {
      res["RuleDesc"] = boost::any(*ruleDesc);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeRegionIdsScope") != m.end() && !m["ExcludeRegionIdsScope"].empty()) {
      excludeRegionIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeRegionIdsScope"]));
    }
    if (m.find("ExcludeResourceGroupIdsScope") != m.end() && !m["ExcludeResourceGroupIdsScope"].empty()) {
      excludeResourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceGroupIdsScope"]));
    }
    if (m.find("ExcludeResourceIdsScope") != m.end() && !m["ExcludeResourceIdsScope"].empty()) {
      excludeResourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceIdsScope"]));
    }
    if (m.find("ExcludeResourceTypesScope") != m.end() && !m["ExcludeResourceTypesScope"].empty()) {
      excludeResourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ExcludeResourceTypesScope"]));
    }
    if (m.find("RegionIdsScope") != m.end() && !m["RegionIdsScope"].empty()) {
      regionIdsScope = make_shared<string>(boost::any_cast<string>(m["RegionIdsScope"]));
    }
    if (m.find("ResourceGroupIdsScope") != m.end() && !m["ResourceGroupIdsScope"].empty()) {
      resourceGroupIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdsScope"]));
    }
    if (m.find("ResourceIdsScope") != m.end() && !m["ResourceIdsScope"].empty()) {
      resourceIdsScope = make_shared<string>(boost::any_cast<string>(m["ResourceIdsScope"]));
    }
    if (m.find("ResourceTypesScope") != m.end() && !m["ResourceTypesScope"].empty()) {
      resourceTypesScope = make_shared<string>(boost::any_cast<string>(m["ResourceTypesScope"]));
    }
    if (m.find("RuleContents") != m.end() && !m["RuleContents"].empty()) {
      if (typeid(vector<boost::any>) == m["RuleContents"].type()) {
        vector<UpdateAutoGroupingRuleRequestRuleContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuleContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAutoGroupingRuleRequestRuleContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ruleContents = make_shared<vector<UpdateAutoGroupingRuleRequestRuleContents>>(expect1);
      }
    }
    if (m.find("RuleDesc") != m.end() && !m["RuleDesc"].empty()) {
      ruleDesc = make_shared<string>(boost::any_cast<string>(m["RuleDesc"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~UpdateAutoGroupingRuleRequest() = default;
};
class UpdateAutoGroupingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAutoGroupingRuleResponseBody() {}

  explicit UpdateAutoGroupingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAutoGroupingRuleResponseBody() = default;
};
class UpdateAutoGroupingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAutoGroupingRuleResponseBody> body{};

  UpdateAutoGroupingRuleResponse() {}

  explicit UpdateAutoGroupingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAutoGroupingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAutoGroupingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAutoGroupingRuleResponse() = default;
};
class UpdateControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> newDescription{};
  shared_ptr<string> newPolicyDocument{};
  shared_ptr<string> newPolicyName{};
  shared_ptr<string> policyId{};

  UpdateControlPolicyRequest() {}

  explicit UpdateControlPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (newPolicyDocument) {
      res["NewPolicyDocument"] = boost::any(*newPolicyDocument);
    }
    if (newPolicyName) {
      res["NewPolicyName"] = boost::any(*newPolicyName);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("NewPolicyDocument") != m.end() && !m["NewPolicyDocument"].empty()) {
      newPolicyDocument = make_shared<string>(boost::any_cast<string>(m["NewPolicyDocument"]));
    }
    if (m.find("NewPolicyName") != m.end() && !m["NewPolicyName"].empty()) {
      newPolicyName = make_shared<string>(boost::any_cast<string>(m["NewPolicyName"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~UpdateControlPolicyRequest() = default;
};
class UpdateControlPolicyResponseBodyControlPolicy : public Darabonba::Model {
public:
  shared_ptr<string> attachmentCount{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> updateDate{};

  UpdateControlPolicyResponseBodyControlPolicy() {}

  explicit UpdateControlPolicyResponseBodyControlPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (effectScope) {
      res["EffectScope"] = boost::any(*effectScope);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<string>(boost::any_cast<string>(m["AttachmentCount"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EffectScope") != m.end() && !m["EffectScope"].empty()) {
      effectScope = make_shared<string>(boost::any_cast<string>(m["EffectScope"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~UpdateControlPolicyResponseBodyControlPolicy() = default;
};
class UpdateControlPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateControlPolicyResponseBodyControlPolicy> controlPolicy{};
  shared_ptr<string> requestId{};

  UpdateControlPolicyResponseBody() {}

  explicit UpdateControlPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlPolicy) {
      res["ControlPolicy"] = controlPolicy ? boost::any(controlPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlPolicy") != m.end() && !m["ControlPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPolicy"].type()) {
        UpdateControlPolicyResponseBodyControlPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPolicy"]));
        controlPolicy = make_shared<UpdateControlPolicyResponseBodyControlPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateControlPolicyResponseBody() = default;
};
class UpdateControlPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateControlPolicyResponseBody> body{};

  UpdateControlPolicyResponse() {}

  explicit UpdateControlPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateControlPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateControlPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateControlPolicyResponse() = default;
};
class UpdateFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> newFolderName{};

  UpdateFolderRequest() {}

  explicit UpdateFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (newFolderName) {
      res["NewFolderName"] = boost::any(*newFolderName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("NewFolderName") != m.end() && !m["NewFolderName"].empty()) {
      newFolderName = make_shared<string>(boost::any_cast<string>(m["NewFolderName"]));
    }
  }


  virtual ~UpdateFolderRequest() = default;
};
class UpdateFolderResponseBodyFolder : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> folderId{};
  shared_ptr<string> folderName{};
  shared_ptr<string> parentFolderId{};

  UpdateFolderResponseBodyFolder() {}

  explicit UpdateFolderResponseBodyFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (folderName) {
      res["FolderName"] = boost::any(*folderName);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
  }


  virtual ~UpdateFolderResponseBodyFolder() = default;
};
class UpdateFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateFolderResponseBodyFolder> folder{};
  shared_ptr<string> requestId{};

  UpdateFolderResponseBody() {}

  explicit UpdateFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folder) {
      res["Folder"] = folder ? boost::any(folder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      if (typeid(map<string, boost::any>) == m["Folder"].type()) {
        UpdateFolderResponseBodyFolder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folder"]));
        folder = make_shared<UpdateFolderResponseBodyFolder>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateFolderResponseBody() = default;
};
class UpdateFolderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFolderResponseBody> body{};

  UpdateFolderResponse() {}

  explicit UpdateFolderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFolderResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFolderResponse() = default;
};
class UpdateResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> resourceGroupId{};

  UpdateResourceGroupRequest() {}

  explicit UpdateResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~UpdateResourceGroupRequest() = default;
};
class UpdateResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  UpdateResourceGroupResponseBodyResourceGroup() {}

  explicit UpdateResourceGroupResponseBodyResourceGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateResourceGroupResponseBodyResourceGroup() = default;
};
class UpdateResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateResourceGroupResponseBodyResourceGroup> resourceGroup{};

  UpdateResourceGroupResponseBody() {}

  explicit UpdateResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = resourceGroup ? boost::any(resourceGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceGroup"].type()) {
        UpdateResourceGroupResponseBodyResourceGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceGroup"]));
        resourceGroup = make_shared<UpdateResourceGroupResponseBodyResourceGroup>(model1);
      }
    }
  }


  virtual ~UpdateResourceGroupResponseBody() = default;
};
class UpdateResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceGroupResponseBody> body{};

  UpdateResourceGroupResponse() {}

  explicit UpdateResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceGroupResponse() = default;
};
class UpdateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> newAssumeRolePolicyDocument{};
  shared_ptr<string> newDescription{};
  shared_ptr<long> newMaxSessionDuration{};
  shared_ptr<string> roleName{};

  UpdateRoleRequest() {}

  explicit UpdateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newAssumeRolePolicyDocument) {
      res["NewAssumeRolePolicyDocument"] = boost::any(*newAssumeRolePolicyDocument);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (newMaxSessionDuration) {
      res["NewMaxSessionDuration"] = boost::any(*newMaxSessionDuration);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewAssumeRolePolicyDocument") != m.end() && !m["NewAssumeRolePolicyDocument"].empty()) {
      newAssumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["NewAssumeRolePolicyDocument"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("NewMaxSessionDuration") != m.end() && !m["NewMaxSessionDuration"].empty()) {
      newMaxSessionDuration = make_shared<long>(boost::any_cast<long>(m["NewMaxSessionDuration"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~UpdateRoleRequest() = default;
};
class UpdateRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> rolePrincipalName{};
  shared_ptr<string> updateDate{};

  UpdateRoleResponseBodyRole() {}

  explicit UpdateRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (rolePrincipalName) {
      res["RolePrincipalName"] = boost::any(*rolePrincipalName);
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
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("RolePrincipalName") != m.end() && !m["RolePrincipalName"].empty()) {
      rolePrincipalName = make_shared<string>(boost::any_cast<string>(m["RolePrincipalName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~UpdateRoleResponseBodyRole() = default;
};
class UpdateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateRoleResponseBodyRole> role{};

  UpdateRoleResponseBody() {}

  explicit UpdateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        UpdateRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<UpdateRoleResponseBodyRole>(model1);
      }
    }
  }


  virtual ~UpdateRoleResponseBody() = default;
};
class UpdateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRoleResponseBody> body{};

  UpdateRoleResponse() {}

  explicit UpdateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRoleResponse() = default;
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
  AcceptHandshakeResponse acceptHandshakeWithOptions(shared_ptr<AcceptHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AcceptHandshakeResponse acceptHandshake(shared_ptr<AcceptHandshakeRequest> request);
  AttachControlPolicyResponse attachControlPolicyWithOptions(shared_ptr<AttachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachControlPolicyResponse attachControlPolicy(shared_ptr<AttachControlPolicyRequest> request);
  AttachPolicyResponse attachPolicyWithOptions(shared_ptr<AttachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachPolicyResponse attachPolicy(shared_ptr<AttachPolicyRequest> request);
  BindSecureMobilePhoneResponse bindSecureMobilePhoneWithOptions(shared_ptr<BindSecureMobilePhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindSecureMobilePhoneResponse bindSecureMobilePhone(shared_ptr<BindSecureMobilePhoneRequest> request);
  CancelChangeAccountEmailResponse cancelChangeAccountEmailWithOptions(shared_ptr<CancelChangeAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelChangeAccountEmailResponse cancelChangeAccountEmail(shared_ptr<CancelChangeAccountEmailRequest> request);
  CancelCreateCloudAccountResponse cancelCreateCloudAccountWithOptions(shared_ptr<CancelCreateCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelCreateCloudAccountResponse cancelCreateCloudAccount(shared_ptr<CancelCreateCloudAccountRequest> request);
  CancelHandshakeResponse cancelHandshakeWithOptions(shared_ptr<CancelHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelHandshakeResponse cancelHandshake(shared_ptr<CancelHandshakeRequest> request);
  CancelPromoteResourceAccountResponse cancelPromoteResourceAccountWithOptions(shared_ptr<CancelPromoteResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPromoteResourceAccountResponse cancelPromoteResourceAccount(shared_ptr<CancelPromoteResourceAccountRequest> request);
  ChangeAccountEmailResponse changeAccountEmailWithOptions(shared_ptr<ChangeAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeAccountEmailResponse changeAccountEmail(shared_ptr<ChangeAccountEmailRequest> request);
  CheckAccountDeleteResponse checkAccountDeleteWithOptions(shared_ptr<CheckAccountDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAccountDeleteResponse checkAccountDelete(shared_ptr<CheckAccountDeleteRequest> request);
  CreateAutoGroupingRuleResponse createAutoGroupingRuleWithOptions(shared_ptr<CreateAutoGroupingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAutoGroupingRuleResponse createAutoGroupingRule(shared_ptr<CreateAutoGroupingRuleRequest> request);
  CreateCloudAccountResponse createCloudAccountWithOptions(shared_ptr<CreateCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCloudAccountResponse createCloudAccount(shared_ptr<CreateCloudAccountRequest> request);
  CreateControlPolicyResponse createControlPolicyWithOptions(shared_ptr<CreateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateControlPolicyResponse createControlPolicy(shared_ptr<CreateControlPolicyRequest> request);
  CreateFolderResponse createFolderWithOptions(shared_ptr<CreateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFolderResponse createFolder(shared_ptr<CreateFolderRequest> request);
  CreatePolicyResponse createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyResponse createPolicy(shared_ptr<CreatePolicyRequest> request);
  CreatePolicyVersionResponse createPolicyVersionWithOptions(shared_ptr<CreatePolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyVersionResponse createPolicyVersion(shared_ptr<CreatePolicyVersionRequest> request);
  CreateResourceAccountResponse createResourceAccountWithOptions(shared_ptr<CreateResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceAccountResponse createResourceAccount(shared_ptr<CreateResourceAccountRequest> request);
  CreateResourceGroupResponse createResourceGroupWithOptions(shared_ptr<CreateResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceGroupResponse createResourceGroup(shared_ptr<CreateResourceGroupRequest> request);
  CreateRoleResponse createRoleWithOptions(shared_ptr<CreateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoleResponse createRole(shared_ptr<CreateRoleRequest> request);
  CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleResponse createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request);
  DeclineHandshakeResponse declineHandshakeWithOptions(shared_ptr<DeclineHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeclineHandshakeResponse declineHandshake(shared_ptr<DeclineHandshakeRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteAutoGroupingRuleResponse deleteAutoGroupingRuleWithOptions(shared_ptr<DeleteAutoGroupingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAutoGroupingRuleResponse deleteAutoGroupingRule(shared_ptr<DeleteAutoGroupingRuleRequest> request);
  DeleteControlPolicyResponse deleteControlPolicyWithOptions(shared_ptr<DeleteControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteControlPolicyResponse deleteControlPolicy(shared_ptr<DeleteControlPolicyRequest> request);
  DeleteFolderResponse deleteFolderWithOptions(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFolderResponse deleteFolder(shared_ptr<DeleteFolderRequest> request);
  DeletePolicyResponse deletePolicyWithOptions(shared_ptr<DeletePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyResponse deletePolicy(shared_ptr<DeletePolicyRequest> request);
  DeletePolicyVersionResponse deletePolicyVersionWithOptions(shared_ptr<DeletePolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyVersionResponse deletePolicyVersion(shared_ptr<DeletePolicyVersionRequest> request);
  DeleteResourceGroupResponse deleteResourceGroupWithOptions(shared_ptr<DeleteResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceGroupResponse deleteResourceGroup(shared_ptr<DeleteResourceGroupRequest> request);
  DeleteRoleResponse deleteRoleWithOptions(shared_ptr<DeleteRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRoleResponse deleteRole(shared_ptr<DeleteRoleRequest> request);
  DeleteServiceLinkedRoleResponse deleteServiceLinkedRoleWithOptions(shared_ptr<DeleteServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceLinkedRoleResponse deleteServiceLinkedRole(shared_ptr<DeleteServiceLinkedRoleRequest> request);
  DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministratorWithOptions(shared_ptr<DeregisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministrator(shared_ptr<DeregisterDelegatedAdministratorRequest> request);
  DestroyResourceDirectoryResponse destroyResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DestroyResourceDirectoryResponse destroyResourceDirectory();
  DetachControlPolicyResponse detachControlPolicyWithOptions(shared_ptr<DetachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachControlPolicyResponse detachControlPolicy(shared_ptr<DetachControlPolicyRequest> request);
  DetachPolicyResponse detachPolicyWithOptions(shared_ptr<DetachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachPolicyResponse detachPolicy(shared_ptr<DetachPolicyRequest> request);
  DisableAssociatedTransferResponse disableAssociatedTransferWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAssociatedTransferResponse disableAssociatedTransfer();
  DisableAutoGroupingResponse disableAutoGroupingWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAutoGroupingResponse disableAutoGrouping();
  DisableControlPolicyResponse disableControlPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableControlPolicyResponse disableControlPolicy();
  EnableAssociatedTransferResponse enableAssociatedTransferWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAssociatedTransferResponse enableAssociatedTransfer();
  EnableAutoGroupingResponse enableAutoGroupingWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAutoGroupingResponse enableAutoGrouping();
  EnableControlPolicyResponse enableControlPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableControlPolicyResponse enableControlPolicy();
  EnableResourceDirectoryResponse enableResourceDirectoryWithOptions(shared_ptr<EnableResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableResourceDirectoryResponse enableResourceDirectory(shared_ptr<EnableResourceDirectoryRequest> request);
  GetAccountResponse getAccountWithOptions(shared_ptr<GetAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountResponse getAccount(shared_ptr<GetAccountRequest> request);
  GetAccountDeletionCheckResultResponse getAccountDeletionCheckResultWithOptions(shared_ptr<GetAccountDeletionCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountDeletionCheckResultResponse getAccountDeletionCheckResult(shared_ptr<GetAccountDeletionCheckResultRequest> request);
  GetAccountDeletionStatusResponse getAccountDeletionStatusWithOptions(shared_ptr<GetAccountDeletionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountDeletionStatusResponse getAccountDeletionStatus(shared_ptr<GetAccountDeletionStatusRequest> request);
  GetAutoGroupingRuleResponse getAutoGroupingRuleWithOptions(shared_ptr<GetAutoGroupingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAutoGroupingRuleResponse getAutoGroupingRule(shared_ptr<GetAutoGroupingRuleRequest> request);
  GetAutoGroupingStatusResponse getAutoGroupingStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAutoGroupingStatusResponse getAutoGroupingStatus();
  GetControlPolicyResponse getControlPolicyWithOptions(shared_ptr<GetControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetControlPolicyResponse getControlPolicy(shared_ptr<GetControlPolicyRequest> request);
  GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatus();
  GetFolderResponse getFolderWithOptions(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFolderResponse getFolder(shared_ptr<GetFolderRequest> request);
  GetHandshakeResponse getHandshakeWithOptions(shared_ptr<GetHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHandshakeResponse getHandshake(shared_ptr<GetHandshakeRequest> request);
  GetPayerForAccountResponse getPayerForAccountWithOptions(shared_ptr<GetPayerForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPayerForAccountResponse getPayerForAccount(shared_ptr<GetPayerForAccountRequest> request);
  GetPolicyResponse getPolicyWithOptions(shared_ptr<GetPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyResponse getPolicy(shared_ptr<GetPolicyRequest> request);
  GetPolicyVersionResponse getPolicyVersionWithOptions(shared_ptr<GetPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyVersionResponse getPolicyVersion(shared_ptr<GetPolicyVersionRequest> request);
  GetResourceDirectoryResponse getResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceDirectoryResponse getResourceDirectory();
  GetResourceGroupResponse getResourceGroupWithOptions(shared_ptr<GetResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceGroupResponse getResourceGroup(shared_ptr<GetResourceGroupRequest> request);
  GetRoleResponse getRoleWithOptions(shared_ptr<GetRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoleResponse getRole(shared_ptr<GetRoleRequest> request);
  GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatusWithOptions(shared_ptr<GetServiceLinkedRoleDeletionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatus(shared_ptr<GetServiceLinkedRoleDeletionStatusRequest> request);
  InitResourceDirectoryResponse initResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitResourceDirectoryResponse initResourceDirectory();
  InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectoryWithOptions(shared_ptr<InviteAccountToResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectory(shared_ptr<InviteAccountToResourceDirectoryRequest> request);
  ListAccountsResponse listAccountsWithOptions(shared_ptr<ListAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsResponse listAccounts(shared_ptr<ListAccountsRequest> request);
  ListAccountsForParentResponse listAccountsForParentWithOptions(shared_ptr<ListAccountsForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsForParentResponse listAccountsForParent(shared_ptr<ListAccountsForParentRequest> request);
  ListAncestorsResponse listAncestorsWithOptions(shared_ptr<ListAncestorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAncestorsResponse listAncestors(shared_ptr<ListAncestorsRequest> request);
  ListAssociatedTransferSettingResponse listAssociatedTransferSettingWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAssociatedTransferSettingResponse listAssociatedTransferSetting();
  ListAutoGroupingRulesResponse listAutoGroupingRulesWithOptions(shared_ptr<ListAutoGroupingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAutoGroupingRulesResponse listAutoGroupingRules(shared_ptr<ListAutoGroupingRulesRequest> request);
  ListControlPoliciesResponse listControlPoliciesWithOptions(shared_ptr<ListControlPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListControlPoliciesResponse listControlPolicies(shared_ptr<ListControlPoliciesRequest> request);
  ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTargetWithOptions(shared_ptr<ListControlPolicyAttachmentsForTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListControlPolicyAttachmentsForTargetResponse listControlPolicyAttachmentsForTarget(shared_ptr<ListControlPolicyAttachmentsForTargetRequest> request);
  ListDelegatedAdministratorsResponse listDelegatedAdministratorsWithOptions(shared_ptr<ListDelegatedAdministratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDelegatedAdministratorsResponse listDelegatedAdministrators(shared_ptr<ListDelegatedAdministratorsRequest> request);
  ListDelegatedServicesForAccountResponse listDelegatedServicesForAccountWithOptions(shared_ptr<ListDelegatedServicesForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDelegatedServicesForAccountResponse listDelegatedServicesForAccount(shared_ptr<ListDelegatedServicesForAccountRequest> request);
  ListFoldersForParentResponse listFoldersForParentWithOptions(shared_ptr<ListFoldersForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFoldersForParentResponse listFoldersForParent(shared_ptr<ListFoldersForParentRequest> request);
  ListHandshakesForAccountResponse listHandshakesForAccountWithOptions(shared_ptr<ListHandshakesForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHandshakesForAccountResponse listHandshakesForAccount(shared_ptr<ListHandshakesForAccountRequest> request);
  ListHandshakesForResourceDirectoryResponse listHandshakesForResourceDirectoryWithOptions(shared_ptr<ListHandshakesForResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHandshakesForResourceDirectoryResponse listHandshakesForResourceDirectory(shared_ptr<ListHandshakesForResourceDirectoryRequest> request);
  ListPoliciesResponse listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesResponse listPolicies(shared_ptr<ListPoliciesRequest> request);
  ListPolicyAttachmentsResponse listPolicyAttachmentsWithOptions(shared_ptr<ListPolicyAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyAttachmentsResponse listPolicyAttachments(shared_ptr<ListPolicyAttachmentsRequest> request);
  ListPolicyVersionsResponse listPolicyVersionsWithOptions(shared_ptr<ListPolicyVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyVersionsResponse listPolicyVersions(shared_ptr<ListPolicyVersionsRequest> request);
  ListResourceGroupsResponse listResourceGroupsWithOptions(shared_ptr<ListResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceGroupsResponse listResourceGroups(shared_ptr<ListResourceGroupsRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListRolesResponse listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRolesResponse listRoles(shared_ptr<ListRolesRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicyWithOptions(shared_ptr<ListTargetAttachmentsForControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTargetAttachmentsForControlPolicyResponse listTargetAttachmentsForControlPolicy(shared_ptr<ListTargetAttachmentsForControlPolicyRequest> request);
  ListTrustedServiceStatusResponse listTrustedServiceStatusWithOptions(shared_ptr<ListTrustedServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrustedServiceStatusResponse listTrustedServiceStatus(shared_ptr<ListTrustedServiceStatusRequest> request);
  MoveAccountResponse moveAccountWithOptions(shared_ptr<MoveAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveAccountResponse moveAccount(shared_ptr<MoveAccountRequest> request);
  MoveResourcesResponse moveResourcesWithOptions(shared_ptr<MoveResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourcesResponse moveResources(shared_ptr<MoveResourcesRequest> request);
  PromoteResourceAccountResponse promoteResourceAccountWithOptions(shared_ptr<PromoteResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PromoteResourceAccountResponse promoteResourceAccount(shared_ptr<PromoteResourceAccountRequest> request);
  RegisterDelegatedAdministratorResponse registerDelegatedAdministratorWithOptions(shared_ptr<RegisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterDelegatedAdministratorResponse registerDelegatedAdministrator(shared_ptr<RegisterDelegatedAdministratorRequest> request);
  RemoveCloudAccountResponse removeCloudAccountWithOptions(shared_ptr<RemoveCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveCloudAccountResponse removeCloudAccount(shared_ptr<RemoveCloudAccountRequest> request);
  ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmailWithOptions(shared_ptr<ResendCreateCloudAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmail(shared_ptr<ResendCreateCloudAccountEmailRequest> request);
  ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmailWithOptions(shared_ptr<ResendPromoteResourceAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmail(shared_ptr<ResendPromoteResourceAccountEmailRequest> request);
  RetryChangeAccountEmailResponse retryChangeAccountEmailWithOptions(shared_ptr<RetryChangeAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryChangeAccountEmailResponse retryChangeAccountEmail(shared_ptr<RetryChangeAccountEmailRequest> request);
  SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhoneWithOptions(shared_ptr<SendVerificationCodeForBindSecureMobilePhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhone(shared_ptr<SendVerificationCodeForBindSecureMobilePhoneRequest> request);
  SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRDWithOptions(shared_ptr<SendVerificationCodeForEnableRDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRD(shared_ptr<SendVerificationCodeForEnableRDRequest> request);
  SetDefaultPolicyVersionResponse setDefaultPolicyVersionWithOptions(shared_ptr<SetDefaultPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultPolicyVersionResponse setDefaultPolicyVersion(shared_ptr<SetDefaultPolicyVersionRequest> request);
  SetMemberDeletionPermissionResponse setMemberDeletionPermissionWithOptions(shared_ptr<SetMemberDeletionPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetMemberDeletionPermissionResponse setMemberDeletionPermission(shared_ptr<SetMemberDeletionPermissionRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateAccountResponse updateAccountWithOptions(shared_ptr<UpdateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccountResponse updateAccount(shared_ptr<UpdateAccountRequest> request);
  UpdateAssociatedTransferSettingResponse updateAssociatedTransferSettingWithOptions(shared_ptr<UpdateAssociatedTransferSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAssociatedTransferSettingResponse updateAssociatedTransferSetting(shared_ptr<UpdateAssociatedTransferSettingRequest> request);
  UpdateAutoGroupingConfigResponse updateAutoGroupingConfigWithOptions(shared_ptr<UpdateAutoGroupingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAutoGroupingConfigResponse updateAutoGroupingConfig(shared_ptr<UpdateAutoGroupingConfigRequest> request);
  UpdateAutoGroupingRuleResponse updateAutoGroupingRuleWithOptions(shared_ptr<UpdateAutoGroupingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAutoGroupingRuleResponse updateAutoGroupingRule(shared_ptr<UpdateAutoGroupingRuleRequest> request);
  UpdateControlPolicyResponse updateControlPolicyWithOptions(shared_ptr<UpdateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateControlPolicyResponse updateControlPolicy(shared_ptr<UpdateControlPolicyRequest> request);
  UpdateFolderResponse updateFolderWithOptions(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFolderResponse updateFolder(shared_ptr<UpdateFolderRequest> request);
  UpdateResourceGroupResponse updateResourceGroupWithOptions(shared_ptr<UpdateResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceGroupResponse updateResourceGroup(shared_ptr<UpdateResourceGroupRequest> request);
  UpdateRoleResponse updateRoleWithOptions(shared_ptr<UpdateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRoleResponse updateRole(shared_ptr<UpdateRoleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ResourceManager20200331

#endif
