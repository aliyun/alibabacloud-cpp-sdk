// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RESOURCEMANAGER20161111_H_
#define ALIBABACLOUD_RESOURCEMANAGER20161111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ResourceManager20161111 {
class AttachPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
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
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
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
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
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
        AttachPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~AttachPolicyResponse() = default;
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
        CancelCreateCloudAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelCreateCloudAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CancelCreateCloudAccountResponse() = default;
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
        CancelPromoteResourceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelPromoteResourceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CancelPromoteResourceAccountResponse() = default;
};
class CreateCloudAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<bool> enableConsolidatedBilling{};
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
    if (enableConsolidatedBilling) {
      res["EnableConsolidatedBilling"] = boost::any(*enableConsolidatedBilling);
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
    if (m.find("EnableConsolidatedBilling") != m.end() && !m["EnableConsolidatedBilling"].empty()) {
      enableConsolidatedBilling = make_shared<bool>(boost::any_cast<bool>(m["EnableConsolidatedBilling"]));
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
  shared_ptr<string> joinTime{};
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
        CreateCloudAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCloudAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCloudAccountResponse() = default;
};
class CreateFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> parentFolderId{};

  CreateFolderRequest() {}

  explicit CreateFolderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
  }


  virtual ~CreateFolderRequest() = default;
};
class CreateFolderResponseBodyFolder : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> folderId{};
  shared_ptr<string> name{};
  shared_ptr<string> parentFolderId{};

  CreateFolderResponseBodyFolder() {}

  explicit CreateFolderResponseBodyFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
        CreatePolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyVersionResponse() = default;
};
class CreateResourceAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<bool> enableConsolidatedBilling{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> payerAccountId{};

  CreateResourceAccountRequest() {}

  explicit CreateResourceAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (enableConsolidatedBilling) {
      res["EnableConsolidatedBilling"] = boost::any(*enableConsolidatedBilling);
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
    if (m.find("EnableConsolidatedBilling") != m.end() && !m["EnableConsolidatedBilling"].empty()) {
      enableConsolidatedBilling = make_shared<bool>(boost::any_cast<bool>(m["EnableConsolidatedBilling"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
    }
    if (m.find("PayerAccountId") != m.end() && !m["PayerAccountId"].empty()) {
      payerAccountId = make_shared<string>(boost::any_cast<string>(m["PayerAccountId"]));
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
        CreateResourceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceAccountResponse() = default;
};
class CreateResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};

  CreateResourceGroupRequest() {}

  explicit CreateResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
        CreateServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleResponse() = default;
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
        DeleteFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFolderResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFolderResponse() = default;
};
class DeleteInvalidCloudAccountRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};

  DeleteInvalidCloudAccountRecordRequest() {}

  explicit DeleteInvalidCloudAccountRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInvalidCloudAccountRecordRequest() = default;
};
class DeleteInvalidCloudAccountRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInvalidCloudAccountRecordResponseBody() {}

  explicit DeleteInvalidCloudAccountRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInvalidCloudAccountRecordResponseBody() = default;
};
class DeleteInvalidCloudAccountRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInvalidCloudAccountRecordResponseBody> body{};

  DeleteInvalidCloudAccountRecordResponse() {}

  explicit DeleteInvalidCloudAccountRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInvalidCloudAccountRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInvalidCloudAccountRecordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInvalidCloudAccountRecordResponse() = default;
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
  shared_ptr<string> accountId{};
  shared_ptr<string> resourceGroupId{};

  DeleteResourceGroupRequest() {}

  explicit DeleteResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
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
        DeleteServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceLinkedRoleResponse() = default;
};
class DestoryResourceDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DestoryResourceDirectoryResponseBody() {}

  explicit DestoryResourceDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DestoryResourceDirectoryResponseBody() = default;
};
class DestoryResourceDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DestoryResourceDirectoryResponseBody> body{};

  DestoryResourceDirectoryResponse() {}

  explicit DestoryResourceDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DestoryResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DestoryResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~DestoryResourceDirectoryResponse() = default;
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
        DestroyResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DestroyResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~DestroyResourceDirectoryResponse() = default;
};
class DetachPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
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
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
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
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
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
        DetachPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DetachPolicyResponse() = default;
};
class GetAccountSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  GetAccountSummaryRequest() {}

  explicit GetAccountSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAccountSummaryRequest() = default;
};
class GetAccountSummaryResponseBodySummaryMap : public Darabonba::Model {
public:
  shared_ptr<long> attachedPoliciesPerGroupQuota{};
  shared_ptr<long> attachedPoliciesPerRoleQuota{};
  shared_ptr<long> attachedPoliciesPerUserQuota{};
  shared_ptr<long> attachedSystemPoliciesPerGroupQuota{};
  shared_ptr<long> attachedSystemPoliciesPerRoleQuota{};
  shared_ptr<long> attachedSystemPoliciesPerUserQuota{};
  shared_ptr<long> policies{};
  shared_ptr<long> policiesQuota{};
  shared_ptr<long> policySizeQuota{};
  shared_ptr<long> resourceGroups{};
  shared_ptr<long> resourceGroupsQuota{};
  shared_ptr<long> roles{};
  shared_ptr<long> rolesQuota{};
  shared_ptr<long> versionsPerPolicyQuota{};

  GetAccountSummaryResponseBodySummaryMap() {}

  explicit GetAccountSummaryResponseBodySummaryMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (policies) {
      res["Policies"] = boost::any(*policies);
    }
    if (policiesQuota) {
      res["PoliciesQuota"] = boost::any(*policiesQuota);
    }
    if (policySizeQuota) {
      res["PolicySizeQuota"] = boost::any(*policySizeQuota);
    }
    if (resourceGroups) {
      res["ResourceGroups"] = boost::any(*resourceGroups);
    }
    if (resourceGroupsQuota) {
      res["ResourceGroupsQuota"] = boost::any(*resourceGroupsQuota);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (rolesQuota) {
      res["RolesQuota"] = boost::any(*rolesQuota);
    }
    if (versionsPerPolicyQuota) {
      res["VersionsPerPolicyQuota"] = boost::any(*versionsPerPolicyQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      policies = make_shared<long>(boost::any_cast<long>(m["Policies"]));
    }
    if (m.find("PoliciesQuota") != m.end() && !m["PoliciesQuota"].empty()) {
      policiesQuota = make_shared<long>(boost::any_cast<long>(m["PoliciesQuota"]));
    }
    if (m.find("PolicySizeQuota") != m.end() && !m["PolicySizeQuota"].empty()) {
      policySizeQuota = make_shared<long>(boost::any_cast<long>(m["PolicySizeQuota"]));
    }
    if (m.find("ResourceGroups") != m.end() && !m["ResourceGroups"].empty()) {
      resourceGroups = make_shared<long>(boost::any_cast<long>(m["ResourceGroups"]));
    }
    if (m.find("ResourceGroupsQuota") != m.end() && !m["ResourceGroupsQuota"].empty()) {
      resourceGroupsQuota = make_shared<long>(boost::any_cast<long>(m["ResourceGroupsQuota"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      roles = make_shared<long>(boost::any_cast<long>(m["Roles"]));
    }
    if (m.find("RolesQuota") != m.end() && !m["RolesQuota"].empty()) {
      rolesQuota = make_shared<long>(boost::any_cast<long>(m["RolesQuota"]));
    }
    if (m.find("VersionsPerPolicyQuota") != m.end() && !m["VersionsPerPolicyQuota"].empty()) {
      versionsPerPolicyQuota = make_shared<long>(boost::any_cast<long>(m["VersionsPerPolicyQuota"]));
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
  shared_ptr<string> createDate{};
  shared_ptr<string> folderId{};
  shared_ptr<string> name{};
  shared_ptr<string> parentFolderId{};

  GetFolderResponseBodyFolder() {}

  explicit GetFolderResponseBodyFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentFolderId) {
      res["ParentFolderId"] = boost::any(*parentFolderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentFolderId") != m.end() && !m["ParentFolderId"].empty()) {
      parentFolderId = make_shared<string>(boost::any_cast<string>(m["ParentFolderId"]));
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
        GetFolderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFolderResponseBody>(model1);
      }
    }
  }


  virtual ~GetFolderResponse() = default;
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
  shared_ptr<string> createDate{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> masterAccountName{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> rootFolderId{};

  GetResourceDirectoryResponseBodyResourceDirectory() {}

  explicit GetResourceDirectoryResponseBodyResourceDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
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
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
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
        GetResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceDirectoryResponse() = default;
};
class GetResourceDirectoryAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  GetResourceDirectoryAccountRequest() {}

  explicit GetResourceDirectoryAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetResourceDirectoryAccountRequest() = default;
};
class GetResourceDirectoryAccountResponseBodyAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> folderId{};
  shared_ptr<string> identityInformation{};
  shared_ptr<string> joinMethod{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> resourceDirectoryId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetResourceDirectoryAccountResponseBodyAccount() {}

  explicit GetResourceDirectoryAccountResponseBodyAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (identityInformation) {
      res["IdentityInformation"] = boost::any(*identityInformation);
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
    if (m.find("IdentityInformation") != m.end() && !m["IdentityInformation"].empty()) {
      identityInformation = make_shared<string>(boost::any_cast<string>(m["IdentityInformation"]));
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


  virtual ~GetResourceDirectoryAccountResponseBodyAccount() = default;
};
class GetResourceDirectoryAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetResourceDirectoryAccountResponseBodyAccount> account{};
  shared_ptr<string> requestId{};

  GetResourceDirectoryAccountResponseBody() {}

  explicit GetResourceDirectoryAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceDirectoryAccountResponseBodyAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<GetResourceDirectoryAccountResponseBodyAccount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetResourceDirectoryAccountResponseBody() = default;
};
class GetResourceDirectoryAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceDirectoryAccountResponseBody> body{};

  GetResourceDirectoryAccountResponse() {}

  explicit GetResourceDirectoryAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceDirectoryAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceDirectoryAccountResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceDirectoryAccountResponse() = default;
};
class GetResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> resourceGroupId{};

  GetResourceGroupRequest() {}

  explicit GetResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
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
class GetResourceGroupResponseBodyResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<GetResourceGroupResponseBodyResourceGroupRegionStatuses> regionStatuses{};
  shared_ptr<string> status{};

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
        GetServiceLinkedRoleDeletionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceLinkedRoleDeletionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleDeletionStatusResponse() = default;
};
class GetServiceLinkedRoleTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};

  GetServiceLinkedRoleTemplateRequest() {}

  explicit GetServiceLinkedRoleTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GetServiceLinkedRoleTemplateRequest() = default;
};
class GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptionsRoleDescription : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> language{};

  GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptionsRoleDescription() {}

  explicit GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptionsRoleDescription(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptionsRoleDescription() = default;
};
class GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptions : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptionsRoleDescription>> roleDescription{};

  GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptions() {}

  explicit GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleDescription) {
      vector<boost::any> temp1;
      for(auto item1:*roleDescription){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoleDescription"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleDescription") != m.end() && !m["RoleDescription"].empty()) {
      if (typeid(vector<boost::any>) == m["RoleDescription"].type()) {
        vector<GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptionsRoleDescription> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoleDescription"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptionsRoleDescription model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleDescription = make_shared<vector<GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptionsRoleDescription>>(expect1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptions() = default;
};
class GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplate : public Darabonba::Model {
public:
  shared_ptr<bool> multipleRolesAllowed{};
  shared_ptr<GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptions> roleDescriptions{};
  shared_ptr<string> roleNamePrefix{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> systemPolicyName{};

  GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplate() {}

  explicit GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multipleRolesAllowed) {
      res["MultipleRolesAllowed"] = boost::any(*multipleRolesAllowed);
    }
    if (roleDescriptions) {
      res["RoleDescriptions"] = roleDescriptions ? boost::any(roleDescriptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleNamePrefix) {
      res["RoleNamePrefix"] = boost::any(*roleNamePrefix);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (systemPolicyName) {
      res["SystemPolicyName"] = boost::any(*systemPolicyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MultipleRolesAllowed") != m.end() && !m["MultipleRolesAllowed"].empty()) {
      multipleRolesAllowed = make_shared<bool>(boost::any_cast<bool>(m["MultipleRolesAllowed"]));
    }
    if (m.find("RoleDescriptions") != m.end() && !m["RoleDescriptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleDescriptions"].type()) {
        GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleDescriptions"]));
        roleDescriptions = make_shared<GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplateRoleDescriptions>(model1);
      }
    }
    if (m.find("RoleNamePrefix") != m.end() && !m["RoleNamePrefix"].empty()) {
      roleNamePrefix = make_shared<string>(boost::any_cast<string>(m["RoleNamePrefix"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SystemPolicyName") != m.end() && !m["SystemPolicyName"].empty()) {
      systemPolicyName = make_shared<string>(boost::any_cast<string>(m["SystemPolicyName"]));
    }
  }


  virtual ~GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplate() = default;
};
class GetServiceLinkedRoleTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplate> serviceLinkedRoleTemplate{};

  GetServiceLinkedRoleTemplateResponseBody() {}

  explicit GetServiceLinkedRoleTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceLinkedRoleTemplate) {
      res["ServiceLinkedRoleTemplate"] = serviceLinkedRoleTemplate ? boost::any(serviceLinkedRoleTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceLinkedRoleTemplate") != m.end() && !m["ServiceLinkedRoleTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceLinkedRoleTemplate"].type()) {
        GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceLinkedRoleTemplate"]));
        serviceLinkedRoleTemplate = make_shared<GetServiceLinkedRoleTemplateResponseBodyServiceLinkedRoleTemplate>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleTemplateResponseBody() = default;
};
class GetServiceLinkedRoleTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceLinkedRoleTemplateResponseBody> body{};

  GetServiceLinkedRoleTemplateResponse() {}

  explicit GetServiceLinkedRoleTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceLinkedRoleTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceLinkedRoleTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceLinkedRoleTemplateResponse() = default;
};
class InitResourceDirectoryResponseBodyResourceDirectory : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
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
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
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
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
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
        InitResourceDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitResourceDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~InitResourceDirectoryResponse() = default;
};
class ListAccountRecordsForParentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> queryKeyword{};

  ListAccountRecordsForParentRequest() {}

  explicit ListAccountRecordsForParentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountRecordsForParentRequest() = default;
};
class ListAccountRecordsForParentResponseBodyRecordsRecord : public Darabonba::Model {
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

  ListAccountRecordsForParentResponseBodyRecordsRecord() {}

  explicit ListAccountRecordsForParentResponseBodyRecordsRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountRecordsForParentResponseBodyRecordsRecord() = default;
};
class ListAccountRecordsForParentResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccountRecordsForParentResponseBodyRecordsRecord>> record{};

  ListAccountRecordsForParentResponseBodyRecords() {}

  explicit ListAccountRecordsForParentResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (record) {
      vector<boost::any> temp1;
      for(auto item1:*record){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Record"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      if (typeid(vector<boost::any>) == m["Record"].type()) {
        vector<ListAccountRecordsForParentResponseBodyRecordsRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Record"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccountRecordsForParentResponseBodyRecordsRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        record = make_shared<vector<ListAccountRecordsForParentResponseBodyRecordsRecord>>(expect1);
      }
    }
  }


  virtual ~ListAccountRecordsForParentResponseBodyRecords() = default;
};
class ListAccountRecordsForParentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<ListAccountRecordsForParentResponseBodyRecords> records{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAccountRecordsForParentResponseBody() {}

  explicit ListAccountRecordsForParentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (records) {
      res["Records"] = records ? boost::any(records->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(map<string, boost::any>) == m["Records"].type()) {
        ListAccountRecordsForParentResponseBodyRecords model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Records"]));
        records = make_shared<ListAccountRecordsForParentResponseBodyRecords>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAccountRecordsForParentResponseBody() = default;
};
class ListAccountRecordsForParentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccountRecordsForParentResponseBody> body{};

  ListAccountRecordsForParentResponse() {}

  explicit ListAccountRecordsForParentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccountRecordsForParentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountRecordsForParentResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountRecordsForParentResponse() = default;
};
class ListAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAccountsRequest() {}

  explicit ListAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountsRequest() = default;
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
  shared_ptr<string> status{};
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
        ListAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountsResponse() = default;
};
class ListAccountsForParentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentFolderId{};
  shared_ptr<string> queryKeyword{};

  ListAccountsForParentRequest() {}

  explicit ListAccountsForParentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountsForParentRequest() = default;
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
  shared_ptr<string> createDate{};
  shared_ptr<string> folderId{};
  shared_ptr<string> name{};

  ListAncestorsResponseBodyFoldersFolder() {}

  explicit ListAncestorsResponseBodyFoldersFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
        ListAncestorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAncestorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAncestorsResponse() = default;
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
  shared_ptr<string> createDate{};
  shared_ptr<string> folderId{};
  shared_ptr<string> name{};

  ListFoldersForParentResponseBodyFoldersFolder() {}

  explicit ListFoldersForParentResponseBodyFoldersFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
        ListFoldersForParentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFoldersForParentResponseBody>(model1);
      }
    }
  }


  virtual ~ListFoldersForParentResponse() = default;
};
class ListParentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> childId{};

  ListParentsRequest() {}

  explicit ListParentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListParentsRequest() = default;
};
class ListParentsResponseBodyFoldersFolder : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> folderId{};
  shared_ptr<string> name{};

  ListParentsResponseBodyFoldersFolder() {}

  explicit ListParentsResponseBodyFoldersFolder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (folderId) {
      res["FolderId"] = boost::any(*folderId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListParentsResponseBodyFoldersFolder() = default;
};
class ListParentsResponseBodyFolders : public Darabonba::Model {
public:
  shared_ptr<vector<ListParentsResponseBodyFoldersFolder>> folder{};

  ListParentsResponseBodyFolders() {}

  explicit ListParentsResponseBodyFolders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListParentsResponseBodyFoldersFolder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Folder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListParentsResponseBodyFoldersFolder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        folder = make_shared<vector<ListParentsResponseBodyFoldersFolder>>(expect1);
      }
    }
  }


  virtual ~ListParentsResponseBodyFolders() = default;
};
class ListParentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListParentsResponseBodyFolders> folders{};
  shared_ptr<string> requestId{};

  ListParentsResponseBody() {}

  explicit ListParentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListParentsResponseBodyFolders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Folders"]));
        folders = make_shared<ListParentsResponseBodyFolders>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListParentsResponseBody() = default;
};
class ListParentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListParentsResponseBody> body{};

  ListParentsResponse() {}

  explicit ListParentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListParentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListParentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListParentsResponse() = default;
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
  shared_ptr<string> accountId{};
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
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
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
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
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
        ListPolicyVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyVersionsResponse() = default;
};
class ListResourceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListResourceGroupsRequest() {}

  explicit ListResourceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListResourceGroupsRequest() = default;
};
class ListResourceGroupsResponseBodyResourceGroupsResourceGroup : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

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
        ListResourceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceGroupsResponse() = default;
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
        ListRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRolesResponse() = default;
};
class ListRolesForServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> service{};

  ListRolesForServiceRequest() {}

  explicit ListRolesForServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~ListRolesForServiceRequest() = default;
};
class ListRolesForServiceResponseBodyRolesRoleLatestDeletionTask : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> deletionTaskId{};

  ListRolesForServiceResponseBodyRolesRoleLatestDeletionTask() {}

  explicit ListRolesForServiceResponseBodyRolesRoleLatestDeletionTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListRolesForServiceResponseBodyRolesRoleLatestDeletionTask() = default;
};
class ListRolesForServiceResponseBodyRolesRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<bool> isServiceLinkedRole{};
  shared_ptr<ListRolesForServiceResponseBodyRolesRoleLatestDeletionTask> latestDeletionTask{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> rolePrincipalName{};
  shared_ptr<string> updateDate{};

  ListRolesForServiceResponseBodyRolesRole() {}

  explicit ListRolesForServiceResponseBodyRolesRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRolesForServiceResponseBodyRolesRoleLatestDeletionTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestDeletionTask"]));
        latestDeletionTask = make_shared<ListRolesForServiceResponseBodyRolesRoleLatestDeletionTask>(model1);
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


  virtual ~ListRolesForServiceResponseBodyRolesRole() = default;
};
class ListRolesForServiceResponseBodyRoles : public Darabonba::Model {
public:
  shared_ptr<vector<ListRolesForServiceResponseBodyRolesRole>> role{};

  ListRolesForServiceResponseBodyRoles() {}

  explicit ListRolesForServiceResponseBodyRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListRolesForServiceResponseBodyRolesRole> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Role"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesForServiceResponseBodyRolesRole model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        role = make_shared<vector<ListRolesForServiceResponseBodyRolesRole>>(expect1);
      }
    }
  }


  virtual ~ListRolesForServiceResponseBodyRoles() = default;
};
class ListRolesForServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListRolesForServiceResponseBodyRoles> roles{};

  ListRolesForServiceResponseBody() {}

  explicit ListRolesForServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roles) {
      res["Roles"] = roles ? boost::any(roles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roles"].type()) {
        ListRolesForServiceResponseBodyRoles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roles"]));
        roles = make_shared<ListRolesForServiceResponseBodyRoles>(model1);
      }
    }
  }


  virtual ~ListRolesForServiceResponseBody() = default;
};
class ListRolesForServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRolesForServiceResponseBody> body{};

  ListRolesForServiceResponse() {}

  explicit ListRolesForServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRolesForServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRolesForServiceResponseBody>(model1);
      }
    }
  }


  virtual ~ListRolesForServiceResponse() = default;
};
class ListTrustedServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListTrustedServiceStatusRequest() {}

  explicit ListTrustedServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveAccountResponseBody>(model1);
      }
    }
  }


  virtual ~MoveAccountResponse() = default;
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
class PromoteResourceAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};
  shared_ptr<string> requestId{};

  PromoteResourceAccountResponseBody() {}

  explicit PromoteResourceAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
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
        PromoteResourceAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PromoteResourceAccountResponseBody>(model1);
      }
    }
  }


  virtual ~PromoteResourceAccountResponse() = default;
};
class QueryResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> service{};

  QueryResourceRequest() {}

  explicit QueryResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
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
    if (service) {
      res["Service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
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
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
  }


  virtual ~QueryResourceRequest() = default;
};
class QueryResourceResponseBodyResourcesResource : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> service{};

  QueryResourceResponseBodyResourcesResource() {}

  explicit QueryResourceResponseBodyResourcesResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryResourceResponseBodyResourcesResource() = default;
};
class QueryResourceResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<vector<QueryResourceResponseBodyResourcesResource>> resource{};

  QueryResourceResponseBodyResources() {}

  explicit QueryResourceResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryResourceResponseBodyResourcesResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryResourceResponseBodyResourcesResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resource = make_shared<vector<QueryResourceResponseBodyResourcesResource>>(expect1);
      }
    }
  }


  virtual ~QueryResourceResponseBodyResources() = default;
};
class QueryResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryResourceResponseBodyResources> resources{};
  shared_ptr<long> totalCount{};

  QueryResourceResponseBody() {}

  explicit QueryResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryResourceResponseBodyResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<QueryResourceResponseBodyResources>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryResourceResponseBody() = default;
};
class QueryResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryResourceResponseBody> body{};

  QueryResourceResponse() {}

  explicit QueryResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryResourceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryResourceResponse() = default;
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
class ResendCreateCloudAccountEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};
  shared_ptr<string> requestId{};

  ResendCreateCloudAccountEmailResponseBody() {}

  explicit ResendCreateCloudAccountEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
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
class ResendPromoteResourceAccountEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> recordId{};
  shared_ptr<string> requestId{};

  ResendPromoteResourceAccountEmailResponseBody() {}

  explicit ResendPromoteResourceAccountEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
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
        ResendPromoteResourceAccountEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResendPromoteResourceAccountEmailResponseBody>(model1);
      }
    }
  }


  virtual ~ResendPromoteResourceAccountEmailResponse() = default;
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
        SetDefaultPolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultPolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultPolicyVersionResponse() = default;
};
class UpdateFolderRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> name{};

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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FolderId") != m.end() && !m["FolderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["FolderId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateFolderRequest() = default;
};
class UpdateFolderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFolderResponseBody() {}

  explicit UpdateFolderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> accountId{};
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> resourceGroupId{};

  UpdateResourceGroupRequest() {}

  explicit UpdateResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
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
  AttachPolicyResponse attachPolicyWithOptions(shared_ptr<AttachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachPolicyResponse attachPolicy(shared_ptr<AttachPolicyRequest> request);
  CancelCreateCloudAccountResponse cancelCreateCloudAccountWithOptions(shared_ptr<CancelCreateCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelCreateCloudAccountResponse cancelCreateCloudAccount(shared_ptr<CancelCreateCloudAccountRequest> request);
  CancelPromoteResourceAccountResponse cancelPromoteResourceAccountWithOptions(shared_ptr<CancelPromoteResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPromoteResourceAccountResponse cancelPromoteResourceAccount(shared_ptr<CancelPromoteResourceAccountRequest> request);
  CreateCloudAccountResponse createCloudAccountWithOptions(shared_ptr<CreateCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCloudAccountResponse createCloudAccount(shared_ptr<CreateCloudAccountRequest> request);
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
  DeleteFolderResponse deleteFolderWithOptions(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFolderResponse deleteFolder(shared_ptr<DeleteFolderRequest> request);
  DeleteInvalidCloudAccountRecordResponse deleteInvalidCloudAccountRecordWithOptions(shared_ptr<DeleteInvalidCloudAccountRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInvalidCloudAccountRecordResponse deleteInvalidCloudAccountRecord(shared_ptr<DeleteInvalidCloudAccountRecordRequest> request);
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
  DestoryResourceDirectoryResponse destoryResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DestoryResourceDirectoryResponse destoryResourceDirectory();
  DestroyResourceDirectoryResponse destroyResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DestroyResourceDirectoryResponse destroyResourceDirectory();
  DetachPolicyResponse detachPolicyWithOptions(shared_ptr<DetachPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachPolicyResponse detachPolicy(shared_ptr<DetachPolicyRequest> request);
  GetAccountSummaryResponse getAccountSummaryWithOptions(shared_ptr<GetAccountSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountSummaryResponse getAccountSummary(shared_ptr<GetAccountSummaryRequest> request);
  GetFolderResponse getFolderWithOptions(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFolderResponse getFolder(shared_ptr<GetFolderRequest> request);
  GetPolicyResponse getPolicyWithOptions(shared_ptr<GetPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyResponse getPolicy(shared_ptr<GetPolicyRequest> request);
  GetPolicyVersionResponse getPolicyVersionWithOptions(shared_ptr<GetPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyVersionResponse getPolicyVersion(shared_ptr<GetPolicyVersionRequest> request);
  GetResourceDirectoryResponse getResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceDirectoryResponse getResourceDirectory();
  GetResourceDirectoryAccountResponse getResourceDirectoryAccountWithOptions(shared_ptr<GetResourceDirectoryAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceDirectoryAccountResponse getResourceDirectoryAccount(shared_ptr<GetResourceDirectoryAccountRequest> request);
  GetResourceGroupResponse getResourceGroupWithOptions(shared_ptr<GetResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceGroupResponse getResourceGroup(shared_ptr<GetResourceGroupRequest> request);
  GetRoleResponse getRoleWithOptions(shared_ptr<GetRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoleResponse getRole(shared_ptr<GetRoleRequest> request);
  GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatusWithOptions(shared_ptr<GetServiceLinkedRoleDeletionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceLinkedRoleDeletionStatusResponse getServiceLinkedRoleDeletionStatus(shared_ptr<GetServiceLinkedRoleDeletionStatusRequest> request);
  GetServiceLinkedRoleTemplateResponse getServiceLinkedRoleTemplateWithOptions(shared_ptr<GetServiceLinkedRoleTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceLinkedRoleTemplateResponse getServiceLinkedRoleTemplate(shared_ptr<GetServiceLinkedRoleTemplateRequest> request);
  InitResourceDirectoryResponse initResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitResourceDirectoryResponse initResourceDirectory();
  ListAccountRecordsForParentResponse listAccountRecordsForParentWithOptions(shared_ptr<ListAccountRecordsForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountRecordsForParentResponse listAccountRecordsForParent(shared_ptr<ListAccountRecordsForParentRequest> request);
  ListAccountsResponse listAccountsWithOptions(shared_ptr<ListAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsResponse listAccounts(shared_ptr<ListAccountsRequest> request);
  ListAccountsForParentResponse listAccountsForParentWithOptions(shared_ptr<ListAccountsForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsForParentResponse listAccountsForParent(shared_ptr<ListAccountsForParentRequest> request);
  ListAncestorsResponse listAncestorsWithOptions(shared_ptr<ListAncestorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAncestorsResponse listAncestors(shared_ptr<ListAncestorsRequest> request);
  ListFoldersForParentResponse listFoldersForParentWithOptions(shared_ptr<ListFoldersForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFoldersForParentResponse listFoldersForParent(shared_ptr<ListFoldersForParentRequest> request);
  ListParentsResponse listParentsWithOptions(shared_ptr<ListParentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListParentsResponse listParents(shared_ptr<ListParentsRequest> request);
  ListPoliciesResponse listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesResponse listPolicies(shared_ptr<ListPoliciesRequest> request);
  ListPolicyAttachmentsResponse listPolicyAttachmentsWithOptions(shared_ptr<ListPolicyAttachmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyAttachmentsResponse listPolicyAttachments(shared_ptr<ListPolicyAttachmentsRequest> request);
  ListPolicyVersionsResponse listPolicyVersionsWithOptions(shared_ptr<ListPolicyVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyVersionsResponse listPolicyVersions(shared_ptr<ListPolicyVersionsRequest> request);
  ListResourceGroupsResponse listResourceGroupsWithOptions(shared_ptr<ListResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceGroupsResponse listResourceGroups(shared_ptr<ListResourceGroupsRequest> request);
  ListRolesResponse listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRolesResponse listRoles(shared_ptr<ListRolesRequest> request);
  ListRolesForServiceResponse listRolesForServiceWithOptions(shared_ptr<ListRolesForServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRolesForServiceResponse listRolesForService(shared_ptr<ListRolesForServiceRequest> request);
  ListTrustedServiceStatusResponse listTrustedServiceStatusWithOptions(shared_ptr<ListTrustedServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrustedServiceStatusResponse listTrustedServiceStatus(shared_ptr<ListTrustedServiceStatusRequest> request);
  MoveAccountResponse moveAccountWithOptions(shared_ptr<MoveAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveAccountResponse moveAccount(shared_ptr<MoveAccountRequest> request);
  PromoteResourceAccountResponse promoteResourceAccountWithOptions(shared_ptr<PromoteResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PromoteResourceAccountResponse promoteResourceAccount(shared_ptr<PromoteResourceAccountRequest> request);
  QueryResourceResponse queryResourceWithOptions(shared_ptr<QueryResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryResourceResponse queryResource(shared_ptr<QueryResourceRequest> request);
  RemoveCloudAccountResponse removeCloudAccountWithOptions(shared_ptr<RemoveCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveCloudAccountResponse removeCloudAccount(shared_ptr<RemoveCloudAccountRequest> request);
  ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmailWithOptions(shared_ptr<ResendCreateCloudAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResendCreateCloudAccountEmailResponse resendCreateCloudAccountEmail(shared_ptr<ResendCreateCloudAccountEmailRequest> request);
  ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmailWithOptions(shared_ptr<ResendPromoteResourceAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResendPromoteResourceAccountEmailResponse resendPromoteResourceAccountEmail(shared_ptr<ResendPromoteResourceAccountEmailRequest> request);
  SetDefaultPolicyVersionResponse setDefaultPolicyVersionWithOptions(shared_ptr<SetDefaultPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultPolicyVersionResponse setDefaultPolicyVersion(shared_ptr<SetDefaultPolicyVersionRequest> request);
  UpdateFolderResponse updateFolderWithOptions(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFolderResponse updateFolder(shared_ptr<UpdateFolderRequest> request);
  UpdateResourceGroupResponse updateResourceGroupWithOptions(shared_ptr<UpdateResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceGroupResponse updateResourceGroup(shared_ptr<UpdateResourceGroupRequest> request);
  UpdateRoleResponse updateRoleWithOptions(shared_ptr<UpdateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRoleResponse updateRole(shared_ptr<UpdateRoleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ResourceManager20161111

#endif
