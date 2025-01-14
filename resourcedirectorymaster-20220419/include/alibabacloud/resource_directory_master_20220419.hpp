// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RESOURCEDIRECTORYMASTER20220419_H_
#define ALIBABACLOUD_RESOURCEDIRECTORYMASTER20220419_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ResourceDirectoryMaster20220419 {
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
class AddMessageContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> emailAddress{};
  shared_ptr<vector<string>> messageTypes{};
  shared_ptr<string> name{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> title{};

  AddMessageContactRequest() {}

  explicit AddMessageContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (emailAddress) {
      res["EmailAddress"] = boost::any(*emailAddress);
    }
    if (messageTypes) {
      res["MessageTypes"] = boost::any(*messageTypes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmailAddress") != m.end() && !m["EmailAddress"].empty()) {
      emailAddress = make_shared<string>(boost::any_cast<string>(m["EmailAddress"]));
    }
    if (m.find("MessageTypes") != m.end() && !m["MessageTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MessageTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MessageTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~AddMessageContactRequest() = default;
};
class AddMessageContactResponseBodyContact : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> createDate{};

  AddMessageContactResponseBodyContact() {}

  explicit AddMessageContactResponseBodyContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~AddMessageContactResponseBodyContact() = default;
};
class AddMessageContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddMessageContactResponseBodyContact> contact{};
  shared_ptr<string> requestId{};

  AddMessageContactResponseBody() {}

  explicit AddMessageContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contact) {
      res["Contact"] = contact ? boost::any(contact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contact") != m.end() && !m["Contact"].empty()) {
      if (typeid(map<string, boost::any>) == m["Contact"].type()) {
        AddMessageContactResponseBodyContact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Contact"]));
        contact = make_shared<AddMessageContactResponseBodyContact>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddMessageContactResponseBody() = default;
};
class AddMessageContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddMessageContactResponseBody> body{};

  AddMessageContactResponse() {}

  explicit AddMessageContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddMessageContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMessageContactResponseBody>(model1);
      }
    }
  }


  virtual ~AddMessageContactResponse() = default;
};
class AssociateMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<vector<string>> members{};

  AssociateMembersRequest() {}

  explicit AssociateMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AssociateMembersRequest() = default;
};
class AssociateMembersResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> memberId{};
  shared_ptr<string> modifyDate{};

  AssociateMembersResponseBodyMembers() {}

  explicit AssociateMembersResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (modifyDate) {
      res["ModifyDate"] = boost::any(*modifyDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("ModifyDate") != m.end() && !m["ModifyDate"].empty()) {
      modifyDate = make_shared<string>(boost::any_cast<string>(m["ModifyDate"]));
    }
  }


  virtual ~AssociateMembersResponseBodyMembers() = default;
};
class AssociateMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AssociateMembersResponseBodyMembers>> members{};
  shared_ptr<string> requestId{};

  AssociateMembersResponseBody() {}

  explicit AssociateMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<AssociateMembersResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateMembersResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<AssociateMembersResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssociateMembersResponseBody() = default;
};
class AssociateMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateMembersResponseBody> body{};

  AssociateMembersResponse() {}

  explicit AssociateMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateMembersResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateMembersResponse() = default;
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
class CancelMessageContactUpdateRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> emailAddress{};
  shared_ptr<string> phoneNumber{};

  CancelMessageContactUpdateRequest() {}

  explicit CancelMessageContactUpdateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (emailAddress) {
      res["EmailAddress"] = boost::any(*emailAddress);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("EmailAddress") != m.end() && !m["EmailAddress"].empty()) {
      emailAddress = make_shared<string>(boost::any_cast<string>(m["EmailAddress"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~CancelMessageContactUpdateRequest() = default;
};
class CancelMessageContactUpdateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelMessageContactUpdateResponseBody() {}

  explicit CancelMessageContactUpdateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelMessageContactUpdateResponseBody() = default;
};
class CancelMessageContactUpdateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelMessageContactUpdateResponseBody> body{};

  CancelMessageContactUpdateResponse() {}

  explicit CancelMessageContactUpdateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelMessageContactUpdateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelMessageContactUpdateResponseBody>(model1);
      }
    }
  }


  virtual ~CancelMessageContactUpdateResponse() = default;
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
class CreateControlPolicyRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateControlPolicyRequestTag() {}

  explicit CreateControlPolicyRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateControlPolicyRequestTag() = default;
};
class CreateControlPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> effectScope{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyName{};
  shared_ptr<vector<CreateControlPolicyRequestTag>> tag{};

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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateControlPolicyRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateControlPolicyRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateControlPolicyRequestTag>>(expect1);
      }
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
class CreateFolderRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateFolderRequestTag() {}

  explicit CreateFolderRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateFolderRequestTag() = default;
};
class CreateFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderName{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<vector<CreateFolderRequestTag>> tag{};

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
    if (m.find("FolderName") != m.end() && !m["FolderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["FolderName"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateFolderRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFolderRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateFolderRequestTag>>(expect1);
      }
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
  shared_ptr<bool> dryRun{};
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
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
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
class DeleteMessageContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<bool> retainContactInMembers{};

  DeleteMessageContactRequest() {}

  explicit DeleteMessageContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (retainContactInMembers) {
      res["RetainContactInMembers"] = boost::any(*retainContactInMembers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("RetainContactInMembers") != m.end() && !m["RetainContactInMembers"].empty()) {
      retainContactInMembers = make_shared<bool>(boost::any_cast<bool>(m["RetainContactInMembers"]));
    }
  }


  virtual ~DeleteMessageContactRequest() = default;
};
class DeleteMessageContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteMessageContactResponseBody() {}

  explicit DeleteMessageContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteMessageContactResponseBody() = default;
};
class DeleteMessageContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMessageContactResponseBody> body{};

  DeleteMessageContactResponse() {}

  explicit DeleteMessageContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMessageContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMessageContactResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMessageContactResponse() = default;
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
class DisassociateMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<vector<string>> members{};

  DisassociateMembersRequest() {}

  explicit DisassociateMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DisassociateMembersRequest() = default;
};
class DisassociateMembersResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> memberId{};
  shared_ptr<string> modifyDate{};

  DisassociateMembersResponseBodyMembers() {}

  explicit DisassociateMembersResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (modifyDate) {
      res["ModifyDate"] = boost::any(*modifyDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("ModifyDate") != m.end() && !m["ModifyDate"].empty()) {
      modifyDate = make_shared<string>(boost::any_cast<string>(m["ModifyDate"]));
    }
  }


  virtual ~DisassociateMembersResponseBodyMembers() = default;
};
class DisassociateMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DisassociateMembersResponseBodyMembers>> members{};
  shared_ptr<string> requestId{};

  DisassociateMembersResponseBody() {}

  explicit DisassociateMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Members"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<DisassociateMembersResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DisassociateMembersResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<DisassociateMembersResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DisassociateMembersResponseBody() = default;
};
class DisassociateMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisassociateMembersResponseBody> body{};

  DisassociateMembersResponse() {}

  explicit DisassociateMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisassociateMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisassociateMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DisassociateMembersResponse() = default;
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
  shared_ptr<bool> dryRun{};
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
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
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
  shared_ptr<bool> hasSecureMobilePhone{};
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
    if (hasSecureMobilePhone) {
      res["HasSecureMobilePhone"] = boost::any(*hasSecureMobilePhone);
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
    if (m.find("HasSecureMobilePhone") != m.end() && !m["HasSecureMobilePhone"].empty()) {
      hasSecureMobilePhone = make_shared<bool>(boost::any_cast<bool>(m["HasSecureMobilePhone"]));
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
class GetMessageContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};

  GetMessageContactRequest() {}

  explicit GetMessageContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
  }


  virtual ~GetMessageContactRequest() = default;
};
class GetMessageContactResponseBodyContact : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> emailAddress{};
  shared_ptr<vector<string>> members{};
  shared_ptr<vector<string>> messageTypes{};
  shared_ptr<string> name{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  GetMessageContactResponseBodyContact() {}

  explicit GetMessageContactResponseBodyContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (emailAddress) {
      res["EmailAddress"] = boost::any(*emailAddress);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    if (messageTypes) {
      res["MessageTypes"] = boost::any(*messageTypes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("EmailAddress") != m.end() && !m["EmailAddress"].empty()) {
      emailAddress = make_shared<string>(boost::any_cast<string>(m["EmailAddress"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MessageTypes") != m.end() && !m["MessageTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MessageTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MessageTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetMessageContactResponseBodyContact() = default;
};
class GetMessageContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMessageContactResponseBodyContact> contact{};
  shared_ptr<string> requestId{};

  GetMessageContactResponseBody() {}

  explicit GetMessageContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contact) {
      res["Contact"] = contact ? boost::any(contact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contact") != m.end() && !m["Contact"].empty()) {
      if (typeid(map<string, boost::any>) == m["Contact"].type()) {
        GetMessageContactResponseBodyContact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Contact"]));
        contact = make_shared<GetMessageContactResponseBodyContact>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMessageContactResponseBody() = default;
};
class GetMessageContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMessageContactResponseBody> body{};

  GetMessageContactResponse() {}

  explicit GetMessageContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMessageContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMessageContactResponseBody>(model1);
      }
    }
  }


  virtual ~GetMessageContactResponse() = default;
};
class GetMessageContactDeletionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};

  GetMessageContactDeletionStatusRequest() {}

  explicit GetMessageContactDeletionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
  }


  virtual ~GetMessageContactDeletionStatusRequest() = default;
};
class GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<vector<string>> messageTypes{};

  GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList() {}

  explicit GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (messageTypes) {
      res["MessageTypes"] = boost::any(*messageTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("MessageTypes") != m.end() && !m["MessageTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MessageTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MessageTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList() = default;
};
class GetMessageContactDeletionStatusResponseBodyContactDeletionStatus : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<vector<GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList>> failReasonList{};
  shared_ptr<string> status{};

  GetMessageContactDeletionStatusResponseBodyContactDeletionStatus() {}

  explicit GetMessageContactDeletionStatusResponseBodyContactDeletionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
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
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("FailReasonList") != m.end() && !m["FailReasonList"].empty()) {
      if (typeid(vector<boost::any>) == m["FailReasonList"].type()) {
        vector<GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailReasonList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failReasonList = make_shared<vector<GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetMessageContactDeletionStatusResponseBodyContactDeletionStatus() = default;
};
class GetMessageContactDeletionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMessageContactDeletionStatusResponseBodyContactDeletionStatus> contactDeletionStatus{};
  shared_ptr<string> requestId{};

  GetMessageContactDeletionStatusResponseBody() {}

  explicit GetMessageContactDeletionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactDeletionStatus) {
      res["ContactDeletionStatus"] = contactDeletionStatus ? boost::any(contactDeletionStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactDeletionStatus") != m.end() && !m["ContactDeletionStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["ContactDeletionStatus"].type()) {
        GetMessageContactDeletionStatusResponseBodyContactDeletionStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ContactDeletionStatus"]));
        contactDeletionStatus = make_shared<GetMessageContactDeletionStatusResponseBodyContactDeletionStatus>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMessageContactDeletionStatusResponseBody() = default;
};
class GetMessageContactDeletionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMessageContactDeletionStatusResponseBody> body{};

  GetMessageContactDeletionStatusResponse() {}

  explicit GetMessageContactDeletionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMessageContactDeletionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMessageContactDeletionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetMessageContactDeletionStatusResponse() = default;
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
  shared_ptr<string> parentFolderId{};
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
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
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
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
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
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryKeyword{};
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryKeyword") != m.end() && !m["QueryKeyword"].empty()) {
      queryKeyword = make_shared<string>(boost::any_cast<string>(m["QueryKeyword"]));
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
  shared_ptr<string> accountName{};
  shared_ptr<string> deletionStatus{};
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (deletionStatus) {
      res["DeletionStatus"] = boost::any(*deletionStatus);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DeletionStatus") != m.end() && !m["DeletionStatus"].empty()) {
      deletionStatus = make_shared<string>(boost::any_cast<string>(m["DeletionStatus"]));
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
  shared_ptr<string> nextToken{};
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
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  shared_ptr<string> accountName{};
  shared_ptr<string> deletionStatus{};
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
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (deletionStatus) {
      res["DeletionStatus"] = boost::any(*deletionStatus);
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DeletionStatus") != m.end() && !m["DeletionStatus"].empty()) {
      deletionStatus = make_shared<string>(boost::any_cast<string>(m["DeletionStatus"]));
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
class ListFoldersForParentRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListFoldersForParentRequestTag() {}

  explicit ListFoldersForParentRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListFoldersForParentRequestTag() = default;
};
class ListFoldersForParentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> queryKeyword{};
  shared_ptr<vector<ListFoldersForParentRequestTag>> tag{};

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
        vector<ListFoldersForParentRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFoldersForParentRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListFoldersForParentRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListFoldersForParentRequest() = default;
};
class ListFoldersForParentResponseBodyFoldersFolderTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListFoldersForParentResponseBodyFoldersFolderTagsTag() {}

  explicit ListFoldersForParentResponseBodyFoldersFolderTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListFoldersForParentResponseBodyFoldersFolderTagsTag() = default;
};
class ListFoldersForParentResponseBodyFoldersFolderTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListFoldersForParentResponseBodyFoldersFolderTagsTag>> tag{};

  ListFoldersForParentResponseBodyFoldersFolderTags() {}

  explicit ListFoldersForParentResponseBodyFoldersFolderTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListFoldersForParentResponseBodyFoldersFolderTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFoldersForParentResponseBodyFoldersFolderTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListFoldersForParentResponseBodyFoldersFolderTagsTag>>(expect1);
      }
    }
  }


  virtual ~ListFoldersForParentResponseBodyFoldersFolderTags() = default;
};
class ListFoldersForParentResponseBodyFoldersFolder : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> folderId{};
  shared_ptr<string> folderName{};
  shared_ptr<ListFoldersForParentResponseBodyFoldersFolderTags> tags{};

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
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        ListFoldersForParentResponseBodyFoldersFolderTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<ListFoldersForParentResponseBodyFoldersFolderTags>(model1);
      }
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
class ListMessageContactVerificationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListMessageContactVerificationsRequest() {}

  explicit ListMessageContactVerificationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
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
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListMessageContactVerificationsRequest() = default;
};
class ListMessageContactVerificationsResponseBodyContactVerifications : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> target{};

  ListMessageContactVerificationsResponseBodyContactVerifications() {}

  explicit ListMessageContactVerificationsResponseBodyContactVerifications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~ListMessageContactVerificationsResponseBodyContactVerifications() = default;
};
class ListMessageContactVerificationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMessageContactVerificationsResponseBodyContactVerifications>> contactVerifications{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListMessageContactVerificationsResponseBody() {}

  explicit ListMessageContactVerificationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactVerifications) {
      vector<boost::any> temp1;
      for(auto item1:*contactVerifications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContactVerifications"] = boost::any(temp1);
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
    if (m.find("ContactVerifications") != m.end() && !m["ContactVerifications"].empty()) {
      if (typeid(vector<boost::any>) == m["ContactVerifications"].type()) {
        vector<ListMessageContactVerificationsResponseBodyContactVerifications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContactVerifications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMessageContactVerificationsResponseBodyContactVerifications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contactVerifications = make_shared<vector<ListMessageContactVerificationsResponseBodyContactVerifications>>(expect1);
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


  virtual ~ListMessageContactVerificationsResponseBody() = default;
};
class ListMessageContactVerificationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMessageContactVerificationsResponseBody> body{};

  ListMessageContactVerificationsResponse() {}

  explicit ListMessageContactVerificationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMessageContactVerificationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMessageContactVerificationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMessageContactVerificationsResponse() = default;
};
class ListMessageContactsRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> member{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListMessageContactsRequest() {}

  explicit ListMessageContactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (member) {
      res["Member"] = boost::any(*member);
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
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("Member") != m.end() && !m["Member"].empty()) {
      member = make_shared<string>(boost::any_cast<string>(m["Member"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListMessageContactsRequest() = default;
};
class ListMessageContactsResponseBodyContacts : public Darabonba::Model {
public:
  shared_ptr<string> associatedDate{};
  shared_ptr<string> contactId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> emailAddress{};
  shared_ptr<vector<string>> members{};
  shared_ptr<vector<string>> messageTypes{};
  shared_ptr<string> name{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  ListMessageContactsResponseBodyContacts() {}

  explicit ListMessageContactsResponseBodyContacts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associatedDate) {
      res["AssociatedDate"] = boost::any(*associatedDate);
    }
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (emailAddress) {
      res["EmailAddress"] = boost::any(*emailAddress);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    if (messageTypes) {
      res["MessageTypes"] = boost::any(*messageTypes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociatedDate") != m.end() && !m["AssociatedDate"].empty()) {
      associatedDate = make_shared<string>(boost::any_cast<string>(m["AssociatedDate"]));
    }
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("EmailAddress") != m.end() && !m["EmailAddress"].empty()) {
      emailAddress = make_shared<string>(boost::any_cast<string>(m["EmailAddress"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Members"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Members"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      members = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MessageTypes") != m.end() && !m["MessageTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MessageTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MessageTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListMessageContactsResponseBodyContacts() = default;
};
class ListMessageContactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMessageContactsResponseBodyContacts>> contacts{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListMessageContactsResponseBody() {}

  explicit ListMessageContactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contacts) {
      vector<boost::any> temp1;
      for(auto item1:*contacts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contacts"] = boost::any(temp1);
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
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      if (typeid(vector<boost::any>) == m["Contacts"].type()) {
        vector<ListMessageContactsResponseBodyContacts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contacts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMessageContactsResponseBodyContacts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contacts = make_shared<vector<ListMessageContactsResponseBodyContacts>>(expect1);
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


  virtual ~ListMessageContactsResponseBody() = default;
};
class ListMessageContactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMessageContactsResponseBody> body{};

  ListMessageContactsResponse() {}

  explicit ListMessageContactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMessageContactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMessageContactsResponseBody>(model1);
      }
    }
  }


  virtual ~ListMessageContactsResponse() = default;
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
class PrecheckForConsolidatedBillingAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingAccountId{};

  PrecheckForConsolidatedBillingAccountRequest() {}

  explicit PrecheckForConsolidatedBillingAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingAccountId) {
      res["BillingAccountId"] = boost::any(*billingAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingAccountId") != m.end() && !m["BillingAccountId"].empty()) {
      billingAccountId = make_shared<string>(boost::any_cast<string>(m["BillingAccountId"]));
    }
  }


  virtual ~PrecheckForConsolidatedBillingAccountRequest() = default;
};
class PrecheckForConsolidatedBillingAccountResponseBodyReasons : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};

  PrecheckForConsolidatedBillingAccountResponseBodyReasons() {}

  explicit PrecheckForConsolidatedBillingAccountResponseBodyReasons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~PrecheckForConsolidatedBillingAccountResponseBodyReasons() = default;
};
class PrecheckForConsolidatedBillingAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons>> reasons{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  PrecheckForConsolidatedBillingAccountResponseBody() {}

  explicit PrecheckForConsolidatedBillingAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reasons) {
      vector<boost::any> temp1;
      for(auto item1:*reasons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Reasons"] = boost::any(temp1);
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
    if (m.find("Reasons") != m.end() && !m["Reasons"].empty()) {
      if (typeid(vector<boost::any>) == m["Reasons"].type()) {
        vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Reasons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PrecheckForConsolidatedBillingAccountResponseBodyReasons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reasons = make_shared<vector<PrecheckForConsolidatedBillingAccountResponseBodyReasons>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~PrecheckForConsolidatedBillingAccountResponseBody() = default;
};
class PrecheckForConsolidatedBillingAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PrecheckForConsolidatedBillingAccountResponseBody> body{};

  PrecheckForConsolidatedBillingAccountResponse() {}

  explicit PrecheckForConsolidatedBillingAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PrecheckForConsolidatedBillingAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PrecheckForConsolidatedBillingAccountResponseBody>(model1);
      }
    }
  }


  virtual ~PrecheckForConsolidatedBillingAccountResponse() = default;
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
class SendEmailVerificationForMessageContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> emailAddress{};

  SendEmailVerificationForMessageContactRequest() {}

  explicit SendEmailVerificationForMessageContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (emailAddress) {
      res["EmailAddress"] = boost::any(*emailAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("EmailAddress") != m.end() && !m["EmailAddress"].empty()) {
      emailAddress = make_shared<string>(boost::any_cast<string>(m["EmailAddress"]));
    }
  }


  virtual ~SendEmailVerificationForMessageContactRequest() = default;
};
class SendEmailVerificationForMessageContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendEmailVerificationForMessageContactResponseBody() {}

  explicit SendEmailVerificationForMessageContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendEmailVerificationForMessageContactResponseBody() = default;
};
class SendEmailVerificationForMessageContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendEmailVerificationForMessageContactResponseBody> body{};

  SendEmailVerificationForMessageContactResponse() {}

  explicit SendEmailVerificationForMessageContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendEmailVerificationForMessageContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendEmailVerificationForMessageContactResponseBody>(model1);
      }
    }
  }


  virtual ~SendEmailVerificationForMessageContactResponse() = default;
};
class SendPhoneVerificationForMessageContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> phoneNumber{};

  SendPhoneVerificationForMessageContactRequest() {}

  explicit SendPhoneVerificationForMessageContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~SendPhoneVerificationForMessageContactRequest() = default;
};
class SendPhoneVerificationForMessageContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendPhoneVerificationForMessageContactResponseBody() {}

  explicit SendPhoneVerificationForMessageContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendPhoneVerificationForMessageContactResponseBody() = default;
};
class SendPhoneVerificationForMessageContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendPhoneVerificationForMessageContactResponseBody> body{};

  SendPhoneVerificationForMessageContactResponse() {}

  explicit SendPhoneVerificationForMessageContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendPhoneVerificationForMessageContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendPhoneVerificationForMessageContactResponseBody>(model1);
      }
    }
  }


  virtual ~SendPhoneVerificationForMessageContactResponse() = default;
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
  shared_ptr<bool> dryRun{};
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
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
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
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
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
class UpdateMessageContactRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactId{};
  shared_ptr<string> emailAddress{};
  shared_ptr<vector<string>> messageTypes{};
  shared_ptr<string> name{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> title{};

  UpdateMessageContactRequest() {}

  explicit UpdateMessageContactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactId) {
      res["ContactId"] = boost::any(*contactId);
    }
    if (emailAddress) {
      res["EmailAddress"] = boost::any(*emailAddress);
    }
    if (messageTypes) {
      res["MessageTypes"] = boost::any(*messageTypes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactId") != m.end() && !m["ContactId"].empty()) {
      contactId = make_shared<string>(boost::any_cast<string>(m["ContactId"]));
    }
    if (m.find("EmailAddress") != m.end() && !m["EmailAddress"].empty()) {
      emailAddress = make_shared<string>(boost::any_cast<string>(m["EmailAddress"]));
    }
    if (m.find("MessageTypes") != m.end() && !m["MessageTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MessageTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MessageTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      messageTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateMessageContactRequest() = default;
};
class UpdateMessageContactResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMessageContactResponseBody() {}

  explicit UpdateMessageContactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateMessageContactResponseBody() = default;
};
class UpdateMessageContactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMessageContactResponseBody> body{};

  UpdateMessageContactResponse() {}

  explicit UpdateMessageContactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMessageContactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMessageContactResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMessageContactResponse() = default;
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
  AddMessageContactResponse addMessageContactWithOptions(shared_ptr<AddMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMessageContactResponse addMessageContact(shared_ptr<AddMessageContactRequest> request);
  AssociateMembersResponse associateMembersWithOptions(shared_ptr<AssociateMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateMembersResponse associateMembers(shared_ptr<AssociateMembersRequest> request);
  AttachControlPolicyResponse attachControlPolicyWithOptions(shared_ptr<AttachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachControlPolicyResponse attachControlPolicy(shared_ptr<AttachControlPolicyRequest> request);
  BindSecureMobilePhoneResponse bindSecureMobilePhoneWithOptions(shared_ptr<BindSecureMobilePhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindSecureMobilePhoneResponse bindSecureMobilePhone(shared_ptr<BindSecureMobilePhoneRequest> request);
  CancelChangeAccountEmailResponse cancelChangeAccountEmailWithOptions(shared_ptr<CancelChangeAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelChangeAccountEmailResponse cancelChangeAccountEmail(shared_ptr<CancelChangeAccountEmailRequest> request);
  CancelHandshakeResponse cancelHandshakeWithOptions(shared_ptr<CancelHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelHandshakeResponse cancelHandshake(shared_ptr<CancelHandshakeRequest> request);
  CancelMessageContactUpdateResponse cancelMessageContactUpdateWithOptions(shared_ptr<CancelMessageContactUpdateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelMessageContactUpdateResponse cancelMessageContactUpdate(shared_ptr<CancelMessageContactUpdateRequest> request);
  ChangeAccountEmailResponse changeAccountEmailWithOptions(shared_ptr<ChangeAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeAccountEmailResponse changeAccountEmail(shared_ptr<ChangeAccountEmailRequest> request);
  CheckAccountDeleteResponse checkAccountDeleteWithOptions(shared_ptr<CheckAccountDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAccountDeleteResponse checkAccountDelete(shared_ptr<CheckAccountDeleteRequest> request);
  CreateControlPolicyResponse createControlPolicyWithOptions(shared_ptr<CreateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateControlPolicyResponse createControlPolicy(shared_ptr<CreateControlPolicyRequest> request);
  CreateFolderResponse createFolderWithOptions(shared_ptr<CreateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFolderResponse createFolder(shared_ptr<CreateFolderRequest> request);
  CreateResourceAccountResponse createResourceAccountWithOptions(shared_ptr<CreateResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceAccountResponse createResourceAccount(shared_ptr<CreateResourceAccountRequest> request);
  DeclineHandshakeResponse declineHandshakeWithOptions(shared_ptr<DeclineHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeclineHandshakeResponse declineHandshake(shared_ptr<DeclineHandshakeRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteControlPolicyResponse deleteControlPolicyWithOptions(shared_ptr<DeleteControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteControlPolicyResponse deleteControlPolicy(shared_ptr<DeleteControlPolicyRequest> request);
  DeleteFolderResponse deleteFolderWithOptions(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFolderResponse deleteFolder(shared_ptr<DeleteFolderRequest> request);
  DeleteMessageContactResponse deleteMessageContactWithOptions(shared_ptr<DeleteMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMessageContactResponse deleteMessageContact(shared_ptr<DeleteMessageContactRequest> request);
  DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministratorWithOptions(shared_ptr<DeregisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeregisterDelegatedAdministratorResponse deregisterDelegatedAdministrator(shared_ptr<DeregisterDelegatedAdministratorRequest> request);
  DestroyResourceDirectoryResponse destroyResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DestroyResourceDirectoryResponse destroyResourceDirectory();
  DetachControlPolicyResponse detachControlPolicyWithOptions(shared_ptr<DetachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachControlPolicyResponse detachControlPolicy(shared_ptr<DetachControlPolicyRequest> request);
  DisableControlPolicyResponse disableControlPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableControlPolicyResponse disableControlPolicy();
  DisassociateMembersResponse disassociateMembersWithOptions(shared_ptr<DisassociateMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisassociateMembersResponse disassociateMembers(shared_ptr<DisassociateMembersRequest> request);
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
  GetControlPolicyResponse getControlPolicyWithOptions(shared_ptr<GetControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetControlPolicyResponse getControlPolicy(shared_ptr<GetControlPolicyRequest> request);
  GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetControlPolicyEnablementStatusResponse getControlPolicyEnablementStatus();
  GetFolderResponse getFolderWithOptions(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFolderResponse getFolder(shared_ptr<GetFolderRequest> request);
  GetHandshakeResponse getHandshakeWithOptions(shared_ptr<GetHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHandshakeResponse getHandshake(shared_ptr<GetHandshakeRequest> request);
  GetMessageContactResponse getMessageContactWithOptions(shared_ptr<GetMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMessageContactResponse getMessageContact(shared_ptr<GetMessageContactRequest> request);
  GetMessageContactDeletionStatusResponse getMessageContactDeletionStatusWithOptions(shared_ptr<GetMessageContactDeletionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMessageContactDeletionStatusResponse getMessageContactDeletionStatus(shared_ptr<GetMessageContactDeletionStatusRequest> request);
  GetPayerForAccountResponse getPayerForAccountWithOptions(shared_ptr<GetPayerForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPayerForAccountResponse getPayerForAccount(shared_ptr<GetPayerForAccountRequest> request);
  GetResourceDirectoryResponse getResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceDirectoryResponse getResourceDirectory();
  InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectoryWithOptions(shared_ptr<InviteAccountToResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InviteAccountToResourceDirectoryResponse inviteAccountToResourceDirectory(shared_ptr<InviteAccountToResourceDirectoryRequest> request);
  ListAccountsResponse listAccountsWithOptions(shared_ptr<ListAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsResponse listAccounts(shared_ptr<ListAccountsRequest> request);
  ListAccountsForParentResponse listAccountsForParentWithOptions(shared_ptr<ListAccountsForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsForParentResponse listAccountsForParent(shared_ptr<ListAccountsForParentRequest> request);
  ListAncestorsResponse listAncestorsWithOptions(shared_ptr<ListAncestorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAncestorsResponse listAncestors(shared_ptr<ListAncestorsRequest> request);
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
  ListMessageContactVerificationsResponse listMessageContactVerificationsWithOptions(shared_ptr<ListMessageContactVerificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMessageContactVerificationsResponse listMessageContactVerifications(shared_ptr<ListMessageContactVerificationsRequest> request);
  ListMessageContactsResponse listMessageContactsWithOptions(shared_ptr<ListMessageContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMessageContactsResponse listMessageContacts(shared_ptr<ListMessageContactsRequest> request);
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
  PrecheckForConsolidatedBillingAccountResponse precheckForConsolidatedBillingAccountWithOptions(shared_ptr<PrecheckForConsolidatedBillingAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PrecheckForConsolidatedBillingAccountResponse precheckForConsolidatedBillingAccount(shared_ptr<PrecheckForConsolidatedBillingAccountRequest> request);
  RegisterDelegatedAdministratorResponse registerDelegatedAdministratorWithOptions(shared_ptr<RegisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterDelegatedAdministratorResponse registerDelegatedAdministrator(shared_ptr<RegisterDelegatedAdministratorRequest> request);
  RemoveCloudAccountResponse removeCloudAccountWithOptions(shared_ptr<RemoveCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveCloudAccountResponse removeCloudAccount(shared_ptr<RemoveCloudAccountRequest> request);
  RetryChangeAccountEmailResponse retryChangeAccountEmailWithOptions(shared_ptr<RetryChangeAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryChangeAccountEmailResponse retryChangeAccountEmail(shared_ptr<RetryChangeAccountEmailRequest> request);
  SendEmailVerificationForMessageContactResponse sendEmailVerificationForMessageContactWithOptions(shared_ptr<SendEmailVerificationForMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendEmailVerificationForMessageContactResponse sendEmailVerificationForMessageContact(shared_ptr<SendEmailVerificationForMessageContactRequest> request);
  SendPhoneVerificationForMessageContactResponse sendPhoneVerificationForMessageContactWithOptions(shared_ptr<SendPhoneVerificationForMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendPhoneVerificationForMessageContactResponse sendPhoneVerificationForMessageContact(shared_ptr<SendPhoneVerificationForMessageContactRequest> request);
  SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhoneWithOptions(shared_ptr<SendVerificationCodeForBindSecureMobilePhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVerificationCodeForBindSecureMobilePhoneResponse sendVerificationCodeForBindSecureMobilePhone(shared_ptr<SendVerificationCodeForBindSecureMobilePhoneRequest> request);
  SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRDWithOptions(shared_ptr<SendVerificationCodeForEnableRDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVerificationCodeForEnableRDResponse sendVerificationCodeForEnableRD(shared_ptr<SendVerificationCodeForEnableRDRequest> request);
  SetMemberDeletionPermissionResponse setMemberDeletionPermissionWithOptions(shared_ptr<SetMemberDeletionPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetMemberDeletionPermissionResponse setMemberDeletionPermission(shared_ptr<SetMemberDeletionPermissionRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateAccountResponse updateAccountWithOptions(shared_ptr<UpdateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccountResponse updateAccount(shared_ptr<UpdateAccountRequest> request);
  UpdateControlPolicyResponse updateControlPolicyWithOptions(shared_ptr<UpdateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateControlPolicyResponse updateControlPolicy(shared_ptr<UpdateControlPolicyRequest> request);
  UpdateFolderResponse updateFolderWithOptions(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFolderResponse updateFolder(shared_ptr<UpdateFolderRequest> request);
  UpdateMessageContactResponse updateMessageContactWithOptions(shared_ptr<UpdateMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMessageContactResponse updateMessageContact(shared_ptr<UpdateMessageContactRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ResourceDirectoryMaster20220419

#endif
