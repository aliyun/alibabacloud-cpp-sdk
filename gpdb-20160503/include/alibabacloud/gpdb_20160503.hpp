// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GPDB20160503_H_
#define ALIBABACLOUD_GPDB20160503_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Gpdb20160503 {
class AllocateInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> port{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AllocateInstancePublicConnectionRequest() {}

  explicit AllocateInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
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
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~AllocateInstancePublicConnectionRequest() = default;
};
class AllocateInstancePublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateInstancePublicConnectionResponseBody() {}

  explicit AllocateInstancePublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocateInstancePublicConnectionResponseBody() = default;
};
class AllocateInstancePublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocateInstancePublicConnectionResponseBody> body{};

  AllocateInstancePublicConnectionResponse() {}

  explicit AllocateInstancePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateInstancePublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateInstancePublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateInstancePublicConnectionResponse() = default;
};
class CancelUploadDocumentJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  CancelUploadDocumentJobRequest() {}

  explicit CancelUploadDocumentJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CancelUploadDocumentJobRequest() = default;
};
class CancelUploadDocumentJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CancelUploadDocumentJobResponseBody() {}

  explicit CancelUploadDocumentJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CancelUploadDocumentJobResponseBody() = default;
};
class CancelUploadDocumentJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelUploadDocumentJobResponseBody> body{};

  CancelUploadDocumentJobResponse() {}

  explicit CancelUploadDocumentJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelUploadDocumentJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelUploadDocumentJobResponseBody>(model1);
      }
    }
  }


  virtual ~CancelUploadDocumentJobResponse() = default;
};
class CancelUpsertCollectionDataJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  CancelUpsertCollectionDataJobRequest() {}

  explicit CancelUpsertCollectionDataJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CancelUpsertCollectionDataJobRequest() = default;
};
class CancelUpsertCollectionDataJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CancelUpsertCollectionDataJobResponseBody() {}

  explicit CancelUpsertCollectionDataJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CancelUpsertCollectionDataJobResponseBody() = default;
};
class CancelUpsertCollectionDataJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelUpsertCollectionDataJobResponseBody> body{};

  CancelUpsertCollectionDataJobResponse() {}

  explicit CancelUpsertCollectionDataJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelUpsertCollectionDataJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelUpsertCollectionDataJobResponseBody>(model1);
      }
    }
  }


  virtual ~CancelUpsertCollectionDataJobResponse() = default;
};
class CheckServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  CheckServiceLinkedRoleRequest() {}

  explicit CheckServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CheckServiceLinkedRoleRequest() = default;
};
class CheckServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hasServiceLinkedRole{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};

  CheckServiceLinkedRoleResponseBody() {}

  explicit CheckServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasServiceLinkedRole) {
      res["HasServiceLinkedRole"] = boost::any(*hasServiceLinkedRole);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasServiceLinkedRole") != m.end() && !m["HasServiceLinkedRole"].empty()) {
      hasServiceLinkedRole = make_shared<string>(boost::any_cast<string>(m["HasServiceLinkedRole"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckServiceLinkedRoleResponseBody() = default;
};
class CheckServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckServiceLinkedRoleResponseBody> body{};

  CheckServiceLinkedRoleResponse() {}

  explicit CheckServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckServiceLinkedRoleResponse() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> databaseName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};

  CreateAccountRequest() {}

  explicit CreateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateAccountResponseBody() {}

  explicit CreateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAccountResponseBody() = default;
};
class CreateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccountResponseBody> body{};

  CreateAccountResponse() {}

  explicit CreateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccountResponse() = default;
};
class CreateCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> dimension{};
  shared_ptr<long> externalStorage{};
  shared_ptr<string> fullTextRetrievalFields{};
  shared_ptr<long> hnswM{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<string> metadata{};
  shared_ptr<string> metrics{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parser{};
  shared_ptr<long> pqEnable{};
  shared_ptr<string> regionId{};

  CreateCollectionRequest() {}

  explicit CreateCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (dimension) {
      res["Dimension"] = boost::any(*dimension);
    }
    if (externalStorage) {
      res["ExternalStorage"] = boost::any(*externalStorage);
    }
    if (fullTextRetrievalFields) {
      res["FullTextRetrievalFields"] = boost::any(*fullTextRetrievalFields);
    }
    if (hnswM) {
      res["HnswM"] = boost::any(*hnswM);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    if (pqEnable) {
      res["PqEnable"] = boost::any(*pqEnable);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      dimension = make_shared<long>(boost::any_cast<long>(m["Dimension"]));
    }
    if (m.find("ExternalStorage") != m.end() && !m["ExternalStorage"].empty()) {
      externalStorage = make_shared<long>(boost::any_cast<long>(m["ExternalStorage"]));
    }
    if (m.find("FullTextRetrievalFields") != m.end() && !m["FullTextRetrievalFields"].empty()) {
      fullTextRetrievalFields = make_shared<string>(boost::any_cast<string>(m["FullTextRetrievalFields"]));
    }
    if (m.find("HnswM") != m.end() && !m["HnswM"].empty()) {
      hnswM = make_shared<long>(boost::any_cast<long>(m["HnswM"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<string>(boost::any_cast<string>(m["Metadata"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
    if (m.find("PqEnable") != m.end() && !m["PqEnable"].empty()) {
      pqEnable = make_shared<long>(boost::any_cast<long>(m["PqEnable"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateCollectionRequest() = default;
};
class CreateCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CreateCollectionResponseBody() {}

  explicit CreateCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateCollectionResponseBody() = default;
};
class CreateCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCollectionResponseBody> body{};

  CreateCollectionResponse() {}

  explicit CreateCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCollectionResponse() = default;
};
class CreateDBInstanceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDBInstanceRequestTag() {}

  explicit CreateDBInstanceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDBInstanceRequestTag() = default;
};
class CreateDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> createSampleData{};
  shared_ptr<string> DBInstanceCategory{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceGroupCount{};
  shared_ptr<string> DBInstanceMode{};
  shared_ptr<bool> enableSSL{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> encryptionType{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<long> idleTime{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<long> masterCU{};
  shared_ptr<string> masterNodeNum{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> prodType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> segDiskPerformanceLevel{};
  shared_ptr<string> segNodeNum{};
  shared_ptr<string> segStorageType{};
  shared_ptr<string> serverlessMode{};
  shared_ptr<long> serverlessResource{};
  shared_ptr<string> srcDbInstanceName{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> storageType{};
  shared_ptr<vector<CreateDBInstanceRequestTag>> tag{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vectorConfigurationStatus{};
  shared_ptr<string> zoneId{};

  CreateDBInstanceRequest() {}

  explicit CreateDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (createSampleData) {
      res["CreateSampleData"] = boost::any(*createSampleData);
    }
    if (DBInstanceCategory) {
      res["DBInstanceCategory"] = boost::any(*DBInstanceCategory);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceGroupCount) {
      res["DBInstanceGroupCount"] = boost::any(*DBInstanceGroupCount);
    }
    if (DBInstanceMode) {
      res["DBInstanceMode"] = boost::any(*DBInstanceMode);
    }
    if (enableSSL) {
      res["EnableSSL"] = boost::any(*enableSSL);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (encryptionType) {
      res["EncryptionType"] = boost::any(*encryptionType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (idleTime) {
      res["IdleTime"] = boost::any(*idleTime);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (masterCU) {
      res["MasterCU"] = boost::any(*masterCU);
    }
    if (masterNodeNum) {
      res["MasterNodeNum"] = boost::any(*masterNodeNum);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (prodType) {
      res["ProdType"] = boost::any(*prodType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (segDiskPerformanceLevel) {
      res["SegDiskPerformanceLevel"] = boost::any(*segDiskPerformanceLevel);
    }
    if (segNodeNum) {
      res["SegNodeNum"] = boost::any(*segNodeNum);
    }
    if (segStorageType) {
      res["SegStorageType"] = boost::any(*segStorageType);
    }
    if (serverlessMode) {
      res["ServerlessMode"] = boost::any(*serverlessMode);
    }
    if (serverlessResource) {
      res["ServerlessResource"] = boost::any(*serverlessResource);
    }
    if (srcDbInstanceName) {
      res["SrcDbInstanceName"] = boost::any(*srcDbInstanceName);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vectorConfigurationStatus) {
      res["VectorConfigurationStatus"] = boost::any(*vectorConfigurationStatus);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CreateSampleData") != m.end() && !m["CreateSampleData"].empty()) {
      createSampleData = make_shared<bool>(boost::any_cast<bool>(m["CreateSampleData"]));
    }
    if (m.find("DBInstanceCategory") != m.end() && !m["DBInstanceCategory"].empty()) {
      DBInstanceCategory = make_shared<string>(boost::any_cast<string>(m["DBInstanceCategory"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceGroupCount") != m.end() && !m["DBInstanceGroupCount"].empty()) {
      DBInstanceGroupCount = make_shared<string>(boost::any_cast<string>(m["DBInstanceGroupCount"]));
    }
    if (m.find("DBInstanceMode") != m.end() && !m["DBInstanceMode"].empty()) {
      DBInstanceMode = make_shared<string>(boost::any_cast<string>(m["DBInstanceMode"]));
    }
    if (m.find("EnableSSL") != m.end() && !m["EnableSSL"].empty()) {
      enableSSL = make_shared<bool>(boost::any_cast<bool>(m["EnableSSL"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("EncryptionType") != m.end() && !m["EncryptionType"].empty()) {
      encryptionType = make_shared<string>(boost::any_cast<string>(m["EncryptionType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("IdleTime") != m.end() && !m["IdleTime"].empty()) {
      idleTime = make_shared<long>(boost::any_cast<long>(m["IdleTime"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("MasterCU") != m.end() && !m["MasterCU"].empty()) {
      masterCU = make_shared<long>(boost::any_cast<long>(m["MasterCU"]));
    }
    if (m.find("MasterNodeNum") != m.end() && !m["MasterNodeNum"].empty()) {
      masterNodeNum = make_shared<string>(boost::any_cast<string>(m["MasterNodeNum"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("ProdType") != m.end() && !m["ProdType"].empty()) {
      prodType = make_shared<string>(boost::any_cast<string>(m["ProdType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("SegDiskPerformanceLevel") != m.end() && !m["SegDiskPerformanceLevel"].empty()) {
      segDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["SegDiskPerformanceLevel"]));
    }
    if (m.find("SegNodeNum") != m.end() && !m["SegNodeNum"].empty()) {
      segNodeNum = make_shared<string>(boost::any_cast<string>(m["SegNodeNum"]));
    }
    if (m.find("SegStorageType") != m.end() && !m["SegStorageType"].empty()) {
      segStorageType = make_shared<string>(boost::any_cast<string>(m["SegStorageType"]));
    }
    if (m.find("ServerlessMode") != m.end() && !m["ServerlessMode"].empty()) {
      serverlessMode = make_shared<string>(boost::any_cast<string>(m["ServerlessMode"]));
    }
    if (m.find("ServerlessResource") != m.end() && !m["ServerlessResource"].empty()) {
      serverlessResource = make_shared<long>(boost::any_cast<long>(m["ServerlessResource"]));
    }
    if (m.find("SrcDbInstanceName") != m.end() && !m["SrcDbInstanceName"].empty()) {
      srcDbInstanceName = make_shared<string>(boost::any_cast<string>(m["SrcDbInstanceName"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateDBInstanceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDBInstanceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateDBInstanceRequestTag>>(expect1);
      }
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VectorConfigurationStatus") != m.end() && !m["VectorConfigurationStatus"].empty()) {
      vectorConfigurationStatus = make_shared<string>(boost::any_cast<string>(m["VectorConfigurationStatus"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBInstanceRequest() = default;
};
class CreateDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> port{};
  shared_ptr<string> requestId{};

  CreateDBInstanceResponseBody() {}

  explicit CreateDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBInstanceResponseBody() = default;
};
class CreateDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBInstanceResponseBody> body{};

  CreateDBInstanceResponse() {}

  explicit CreateDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBInstanceResponse() = default;
};
class CreateDBInstancePlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> planConfig{};
  shared_ptr<string> planDesc{};
  shared_ptr<string> planEndDate{};
  shared_ptr<string> planName{};
  shared_ptr<string> planScheduleType{};
  shared_ptr<string> planStartDate{};
  shared_ptr<string> planType{};

  CreateDBInstancePlanRequest() {}

  explicit CreateDBInstancePlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (planConfig) {
      res["PlanConfig"] = boost::any(*planConfig);
    }
    if (planDesc) {
      res["PlanDesc"] = boost::any(*planDesc);
    }
    if (planEndDate) {
      res["PlanEndDate"] = boost::any(*planEndDate);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (planScheduleType) {
      res["PlanScheduleType"] = boost::any(*planScheduleType);
    }
    if (planStartDate) {
      res["PlanStartDate"] = boost::any(*planStartDate);
    }
    if (planType) {
      res["PlanType"] = boost::any(*planType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlanConfig") != m.end() && !m["PlanConfig"].empty()) {
      planConfig = make_shared<string>(boost::any_cast<string>(m["PlanConfig"]));
    }
    if (m.find("PlanDesc") != m.end() && !m["PlanDesc"].empty()) {
      planDesc = make_shared<string>(boost::any_cast<string>(m["PlanDesc"]));
    }
    if (m.find("PlanEndDate") != m.end() && !m["PlanEndDate"].empty()) {
      planEndDate = make_shared<string>(boost::any_cast<string>(m["PlanEndDate"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("PlanScheduleType") != m.end() && !m["PlanScheduleType"].empty()) {
      planScheduleType = make_shared<string>(boost::any_cast<string>(m["PlanScheduleType"]));
    }
    if (m.find("PlanStartDate") != m.end() && !m["PlanStartDate"].empty()) {
      planStartDate = make_shared<string>(boost::any_cast<string>(m["PlanStartDate"]));
    }
    if (m.find("PlanType") != m.end() && !m["PlanType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["PlanType"]));
    }
  }


  virtual ~CreateDBInstancePlanRequest() = default;
};
class CreateDBInstancePlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> planId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CreateDBInstancePlanResponseBody() {}

  explicit CreateDBInstancePlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateDBInstancePlanResponseBody() = default;
};
class CreateDBInstancePlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBInstancePlanResponseBody> body{};

  CreateDBInstancePlanResponse() {}

  explicit CreateDBInstancePlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBInstancePlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBInstancePlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBInstancePlanResponse() = default;
};
class CreateDocumentCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> embeddingModel{};
  shared_ptr<long> externalStorage{};
  shared_ptr<string> fullTextRetrievalFields{};
  shared_ptr<long> hnswM{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<string> metadata{};
  shared_ptr<string> metrics{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parser{};
  shared_ptr<long> pqEnable{};
  shared_ptr<string> regionId{};

  CreateDocumentCollectionRequest() {}

  explicit CreateDocumentCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (embeddingModel) {
      res["EmbeddingModel"] = boost::any(*embeddingModel);
    }
    if (externalStorage) {
      res["ExternalStorage"] = boost::any(*externalStorage);
    }
    if (fullTextRetrievalFields) {
      res["FullTextRetrievalFields"] = boost::any(*fullTextRetrievalFields);
    }
    if (hnswM) {
      res["HnswM"] = boost::any(*hnswM);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    if (pqEnable) {
      res["PqEnable"] = boost::any(*pqEnable);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EmbeddingModel") != m.end() && !m["EmbeddingModel"].empty()) {
      embeddingModel = make_shared<string>(boost::any_cast<string>(m["EmbeddingModel"]));
    }
    if (m.find("ExternalStorage") != m.end() && !m["ExternalStorage"].empty()) {
      externalStorage = make_shared<long>(boost::any_cast<long>(m["ExternalStorage"]));
    }
    if (m.find("FullTextRetrievalFields") != m.end() && !m["FullTextRetrievalFields"].empty()) {
      fullTextRetrievalFields = make_shared<string>(boost::any_cast<string>(m["FullTextRetrievalFields"]));
    }
    if (m.find("HnswM") != m.end() && !m["HnswM"].empty()) {
      hnswM = make_shared<long>(boost::any_cast<long>(m["HnswM"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<string>(boost::any_cast<string>(m["Metadata"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
    if (m.find("PqEnable") != m.end() && !m["PqEnable"].empty()) {
      pqEnable = make_shared<long>(boost::any_cast<long>(m["PqEnable"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateDocumentCollectionRequest() = default;
};
class CreateDocumentCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CreateDocumentCollectionResponseBody() {}

  explicit CreateDocumentCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateDocumentCollectionResponseBody() = default;
};
class CreateDocumentCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDocumentCollectionResponseBody> body{};

  CreateDocumentCollectionResponse() {}

  explicit CreateDocumentCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDocumentCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDocumentCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDocumentCollectionResponse() = default;
};
class CreateNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  CreateNamespaceRequest() {}

  explicit CreateNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateNamespaceRequest() = default;
};
class CreateNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CreateNamespaceResponseBody() {}

  explicit CreateNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateNamespaceResponseBody() = default;
};
class CreateNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNamespaceResponseBody> body{};

  CreateNamespaceResponse() {}

  explicit CreateNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNamespaceResponse() = default;
};
class CreateSampleDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};

  CreateSampleDataRequest() {}

  explicit CreateSampleDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~CreateSampleDataRequest() = default;
};
class CreateSampleDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  CreateSampleDataResponseBody() {}

  explicit CreateSampleDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~CreateSampleDataResponseBody() = default;
};
class CreateSampleDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSampleDataResponseBody> body{};

  CreateSampleDataResponse() {}

  explicit CreateSampleDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSampleDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSampleDataResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSampleDataResponse() = default;
};
class CreateServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  CreateServiceLinkedRoleRequest() {}

  explicit CreateServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateServiceLinkedRoleRequest() = default;
};
class CreateServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class CreateVectorIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> dimension{};
  shared_ptr<long> externalStorage{};
  shared_ptr<long> hnswM{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<string> metrics{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pqEnable{};
  shared_ptr<string> regionId{};

  CreateVectorIndexRequest() {}

  explicit CreateVectorIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (dimension) {
      res["Dimension"] = boost::any(*dimension);
    }
    if (externalStorage) {
      res["ExternalStorage"] = boost::any(*externalStorage);
    }
    if (hnswM) {
      res["HnswM"] = boost::any(*hnswM);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pqEnable) {
      res["PqEnable"] = boost::any(*pqEnable);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      dimension = make_shared<long>(boost::any_cast<long>(m["Dimension"]));
    }
    if (m.find("ExternalStorage") != m.end() && !m["ExternalStorage"].empty()) {
      externalStorage = make_shared<long>(boost::any_cast<long>(m["ExternalStorage"]));
    }
    if (m.find("HnswM") != m.end() && !m["HnswM"].empty()) {
      hnswM = make_shared<long>(boost::any_cast<long>(m["HnswM"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PqEnable") != m.end() && !m["PqEnable"].empty()) {
      pqEnable = make_shared<long>(boost::any_cast<long>(m["PqEnable"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateVectorIndexRequest() = default;
};
class CreateVectorIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CreateVectorIndexResponseBody() {}

  explicit CreateVectorIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateVectorIndexResponseBody() = default;
};
class CreateVectorIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVectorIndexResponseBody> body{};

  CreateVectorIndexResponse() {}

  explicit CreateVectorIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVectorIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVectorIndexResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVectorIndexResponse() = default;
};
class DeleteCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  DeleteCollectionRequest() {}

  explicit DeleteCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteCollectionRequest() = default;
};
class DeleteCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteCollectionResponseBody() {}

  explicit DeleteCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteCollectionResponseBody() = default;
};
class DeleteCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCollectionResponseBody> body{};

  DeleteCollectionResponse() {}

  explicit DeleteCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCollectionResponse() = default;
};
class DeleteCollectionDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> collectionData{};
  shared_ptr<string> collectionDataFilter{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  DeleteCollectionDataRequest() {}

  explicit DeleteCollectionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (collectionData) {
      res["CollectionData"] = boost::any(*collectionData);
    }
    if (collectionDataFilter) {
      res["CollectionDataFilter"] = boost::any(*collectionDataFilter);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("CollectionData") != m.end() && !m["CollectionData"].empty()) {
      collectionData = make_shared<string>(boost::any_cast<string>(m["CollectionData"]));
    }
    if (m.find("CollectionDataFilter") != m.end() && !m["CollectionDataFilter"].empty()) {
      collectionDataFilter = make_shared<string>(boost::any_cast<string>(m["CollectionDataFilter"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteCollectionDataRequest() = default;
};
class DeleteCollectionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> appliedRows{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteCollectionDataResponseBody() {}

  explicit DeleteCollectionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appliedRows) {
      res["AppliedRows"] = boost::any(*appliedRows);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AppliedRows") != m.end() && !m["AppliedRows"].empty()) {
      appliedRows = make_shared<long>(boost::any_cast<long>(m["AppliedRows"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteCollectionDataResponseBody() = default;
};
class DeleteCollectionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCollectionDataResponseBody> body{};

  DeleteCollectionDataResponse() {}

  explicit DeleteCollectionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCollectionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCollectionDataResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCollectionDataResponse() = default;
};
class DeleteDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};

  DeleteDBInstanceRequest() {}

  explicit DeleteDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DeleteDBInstanceRequest() = default;
};
class DeleteDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBInstanceResponseBody() {}

  explicit DeleteDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDBInstanceResponseBody() = default;
};
class DeleteDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBInstanceResponseBody> body{};

  DeleteDBInstanceResponse() {}

  explicit DeleteDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBInstanceResponse() = default;
};
class DeleteDBInstancePlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> planId{};

  DeleteDBInstancePlanRequest() {}

  explicit DeleteDBInstancePlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~DeleteDBInstancePlanRequest() = default;
};
class DeleteDBInstancePlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> planId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteDBInstancePlanResponseBody() {}

  explicit DeleteDBInstancePlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteDBInstancePlanResponseBody() = default;
};
class DeleteDBInstancePlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBInstancePlanResponseBody> body{};

  DeleteDBInstancePlanResponse() {}

  explicit DeleteDBInstancePlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBInstancePlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBInstancePlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBInstancePlanResponse() = default;
};
class DeleteDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  DeleteDocumentRequest() {}

  explicit DeleteDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDocumentRequest() = default;
};
class DeleteDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteDocumentResponseBody() {}

  explicit DeleteDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteDocumentResponseBody() = default;
};
class DeleteDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDocumentResponseBody> body{};

  DeleteDocumentResponse() {}

  explicit DeleteDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDocumentResponse() = default;
};
class DeleteDocumentCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  DeleteDocumentCollectionRequest() {}

  explicit DeleteDocumentCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDocumentCollectionRequest() = default;
};
class DeleteDocumentCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteDocumentCollectionResponseBody() {}

  explicit DeleteDocumentCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteDocumentCollectionResponseBody() = default;
};
class DeleteDocumentCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDocumentCollectionResponseBody> body{};

  DeleteDocumentCollectionResponse() {}

  explicit DeleteDocumentCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDocumentCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDocumentCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDocumentCollectionResponse() = default;
};
class DeleteNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  DeleteNamespaceRequest() {}

  explicit DeleteNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteNamespaceRequest() = default;
};
class DeleteNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteNamespaceResponseBody() {}

  explicit DeleteNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteNamespaceResponseBody() = default;
};
class DeleteNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNamespaceResponseBody> body{};

  DeleteNamespaceResponse() {}

  explicit DeleteNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNamespaceResponse() = default;
};
class DeleteVectorIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  DeleteVectorIndexRequest() {}

  explicit DeleteVectorIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteVectorIndexRequest() = default;
};
class DeleteVectorIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteVectorIndexResponseBody() {}

  explicit DeleteVectorIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteVectorIndexResponseBody() = default;
};
class DeleteVectorIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVectorIndexResponseBody> body{};

  DeleteVectorIndexResponse() {}

  explicit DeleteVectorIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVectorIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVectorIndexResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVectorIndexResponse() = default;
};
class DescribeAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBInstanceId{};

  DescribeAccountsRequest() {}

  explicit DescribeAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeAccountsRequest() = default;
};
class DescribeAccountsResponseBodyAccountsDBInstanceAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> DBInstanceId{};

  DescribeAccountsResponseBodyAccountsDBInstanceAccount() {}

  explicit DescribeAccountsResponseBodyAccountsDBInstanceAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountsDBInstanceAccount() = default;
};
class DescribeAccountsResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountsResponseBodyAccountsDBInstanceAccount>> DBInstanceAccount{};

  DescribeAccountsResponseBodyAccounts() {}

  explicit DescribeAccountsResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceAccount) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceAccount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceAccount"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceAccount") != m.end() && !m["DBInstanceAccount"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceAccount"].type()) {
        vector<DescribeAccountsResponseBodyAccountsDBInstanceAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceAccount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountsResponseBodyAccountsDBInstanceAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceAccount = make_shared<vector<DescribeAccountsResponseBodyAccountsDBInstanceAccount>>(expect1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBodyAccounts() = default;
};
class DescribeAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAccountsResponseBodyAccounts> accounts{};
  shared_ptr<string> requestId{};

  DescribeAccountsResponseBody() {}

  explicit DescribeAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        DescribeAccountsResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<DescribeAccountsResponseBodyAccounts>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAccountsResponseBody() = default;
};
class DescribeAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountsResponseBody> body{};

  DescribeAccountsResponse() {}

  explicit DescribeAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountsResponse() = default;
};
class DescribeActiveSQLRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> maxDuration{};
  shared_ptr<string> minDuration{};
  shared_ptr<string> order{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DescribeActiveSQLRecordsRequest() {}

  explicit DescribeActiveSQLRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (maxDuration) {
      res["MaxDuration"] = boost::any(*maxDuration);
    }
    if (minDuration) {
      res["MinDuration"] = boost::any(*minDuration);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("MaxDuration") != m.end() && !m["MaxDuration"].empty()) {
      maxDuration = make_shared<string>(boost::any_cast<string>(m["MaxDuration"]));
    }
    if (m.find("MinDuration") != m.end() && !m["MinDuration"].empty()) {
      minDuration = make_shared<string>(boost::any_cast<string>(m["MinDuration"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeActiveSQLRecordsRequest() = default;
};
class DescribeActiveSQLRecordsResponseBodyQueries : public Darabonba::Model {
public:
  shared_ptr<string> clientAddr{};
  shared_ptr<string> database{};
  shared_ptr<string> PID{};
  shared_ptr<string> query{};
  shared_ptr<string> queryDuration{};
  shared_ptr<string> queryStart{};
  shared_ptr<string> sessionID{};
  shared_ptr<string> sqlTruncated{};
  shared_ptr<string> sqlTruncatedThreshold{};
  shared_ptr<string> state{};
  shared_ptr<string> user{};

  DescribeActiveSQLRecordsResponseBodyQueries() {}

  explicit DescribeActiveSQLRecordsResponseBodyQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientAddr) {
      res["ClientAddr"] = boost::any(*clientAddr);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (PID) {
      res["PID"] = boost::any(*PID);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (queryDuration) {
      res["QueryDuration"] = boost::any(*queryDuration);
    }
    if (queryStart) {
      res["QueryStart"] = boost::any(*queryStart);
    }
    if (sessionID) {
      res["SessionID"] = boost::any(*sessionID);
    }
    if (sqlTruncated) {
      res["SqlTruncated"] = boost::any(*sqlTruncated);
    }
    if (sqlTruncatedThreshold) {
      res["SqlTruncatedThreshold"] = boost::any(*sqlTruncatedThreshold);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientAddr") != m.end() && !m["ClientAddr"].empty()) {
      clientAddr = make_shared<string>(boost::any_cast<string>(m["ClientAddr"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("PID") != m.end() && !m["PID"].empty()) {
      PID = make_shared<string>(boost::any_cast<string>(m["PID"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("QueryDuration") != m.end() && !m["QueryDuration"].empty()) {
      queryDuration = make_shared<string>(boost::any_cast<string>(m["QueryDuration"]));
    }
    if (m.find("QueryStart") != m.end() && !m["QueryStart"].empty()) {
      queryStart = make_shared<string>(boost::any_cast<string>(m["QueryStart"]));
    }
    if (m.find("SessionID") != m.end() && !m["SessionID"].empty()) {
      sessionID = make_shared<string>(boost::any_cast<string>(m["SessionID"]));
    }
    if (m.find("SqlTruncated") != m.end() && !m["SqlTruncated"].empty()) {
      sqlTruncated = make_shared<string>(boost::any_cast<string>(m["SqlTruncated"]));
    }
    if (m.find("SqlTruncatedThreshold") != m.end() && !m["SqlTruncatedThreshold"].empty()) {
      sqlTruncatedThreshold = make_shared<string>(boost::any_cast<string>(m["SqlTruncatedThreshold"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeActiveSQLRecordsResponseBodyQueries() = default;
};
class DescribeActiveSQLRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<vector<DescribeActiveSQLRecordsResponseBodyQueries>> queries{};
  shared_ptr<string> requestId{};

  DescribeActiveSQLRecordsResponseBody() {}

  explicit DescribeActiveSQLRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (queries) {
      vector<boost::any> temp1;
      for(auto item1:*queries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Queries"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Queries") != m.end() && !m["Queries"].empty()) {
      if (typeid(vector<boost::any>) == m["Queries"].type()) {
        vector<DescribeActiveSQLRecordsResponseBodyQueries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Queries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeActiveSQLRecordsResponseBodyQueries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queries = make_shared<vector<DescribeActiveSQLRecordsResponseBodyQueries>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeActiveSQLRecordsResponseBody() = default;
};
class DescribeActiveSQLRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeActiveSQLRecordsResponseBody> body{};

  DescribeActiveSQLRecordsResponse() {}

  explicit DescribeActiveSQLRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeActiveSQLRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeActiveSQLRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeActiveSQLRecordsResponse() = default;
};
class DescribeAvailableResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> region{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourcesRequest() {}

  explicit DescribeAvailableResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourcesRequest() = default;
};
class DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount : public Darabonba::Model {
public:
  shared_ptr<string> maxCount{};
  shared_ptr<string> minCount{};
  shared_ptr<string> step{};

  DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount() {}

  explicit DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<string>(boost::any_cast<string>(m["MaxCount"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<string>(boost::any_cast<string>(m["MinCount"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
  }


  virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount() = default;
};
class DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize : public Darabonba::Model {
public:
  shared_ptr<string> maxCount{};
  shared_ptr<string> minCount{};
  shared_ptr<string> step{};

  DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize() {}

  explicit DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<string>(boost::any_cast<string>(m["MaxCount"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<string>(boost::any_cast<string>(m["MinCount"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
  }


  virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize() = default;
};
class DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> description{};
  shared_ptr<string> displayClass{};
  shared_ptr<string> instanceClass{};
  shared_ptr<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount> nodeCount{};
  shared_ptr<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize> storageSize{};
  shared_ptr<string> storageType{};

  DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses() {}

  explicit DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayClass) {
      res["DisplayClass"] = boost::any(*displayClass);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (nodeCount) {
      res["NodeCount"] = nodeCount ? boost::any(nodeCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageSize) {
      res["StorageSize"] = storageSize ? boost::any(storageSize->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayClass") != m.end() && !m["DisplayClass"].empty()) {
      displayClass = make_shared<string>(boost::any_cast<string>(m["DisplayClass"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeCount"].type()) {
        DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeCount"]));
        nodeCount = make_shared<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount>(model1);
      }
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageSize"].type()) {
        DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageSize"]));
        storageSize = make_shared<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize>(model1);
      }
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses() = default;
};
class DescribeAvailableResourcesResponseBodyResourcesSupportedEngines : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<string> supportedEngineVersion{};
  shared_ptr<vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses>> supportedInstanceClasses{};

  DescribeAvailableResourcesResponseBodyResourcesSupportedEngines() {}

  explicit DescribeAvailableResourcesResponseBodyResourcesSupportedEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (supportedEngineVersion) {
      res["SupportedEngineVersion"] = boost::any(*supportedEngineVersion);
    }
    if (supportedInstanceClasses) {
      vector<boost::any> temp1;
      for(auto item1:*supportedInstanceClasses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedInstanceClasses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("SupportedEngineVersion") != m.end() && !m["SupportedEngineVersion"].empty()) {
      supportedEngineVersion = make_shared<string>(boost::any_cast<string>(m["SupportedEngineVersion"]));
    }
    if (m.find("SupportedInstanceClasses") != m.end() && !m["SupportedInstanceClasses"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedInstanceClasses"].type()) {
        vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedInstanceClasses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedInstanceClasses = make_shared<vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEngines() = default;
};
class DescribeAvailableResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEngines>> supportedEngines{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourcesResponseBodyResources() {}

  explicit DescribeAvailableResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngines) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngines"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngines") != m.end() && !m["SupportedEngines"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngines"].type()) {
        vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEngines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourcesResponseBodyResourcesSupportedEngines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngines = make_shared<vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEngines>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourcesResponseBodyResources() = default;
};
class DescribeAvailableResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeAvailableResourcesResponseBodyResources>> resources{};

  DescribeAvailableResourcesResponseBody() {}

  explicit DescribeAvailableResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<DescribeAvailableResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<DescribeAvailableResourcesResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourcesResponseBody() = default;
};
class DescribeAvailableResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAvailableResourcesResponseBody> body{};

  DescribeAvailableResourcesResponse() {}

  explicit DescribeAvailableResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAvailableResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourcesResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<bool> enableRecoveryPoint{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> recoveryPointPeriod{};
  shared_ptr<string> requestId{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (enableRecoveryPoint) {
      res["EnableRecoveryPoint"] = boost::any(*enableRecoveryPoint);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (recoveryPointPeriod) {
      res["RecoveryPointPeriod"] = boost::any(*recoveryPointPeriod);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("EnableRecoveryPoint") != m.end() && !m["EnableRecoveryPoint"].empty()) {
      enableRecoveryPoint = make_shared<bool>(boost::any_cast<bool>(m["EnableRecoveryPoint"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("RecoveryPointPeriod") != m.end() && !m["RecoveryPointPeriod"].empty()) {
      recoveryPointPeriod = make_shared<string>(boost::any_cast<string>(m["RecoveryPointPeriod"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBody() = default;
};
class DescribeBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupPolicyResponseBody> body{};

  DescribeBackupPolicyResponse() {}

  explicit DescribeBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPolicyResponse() = default;
};
class DescribeCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  DescribeCollectionRequest() {}

  explicit DescribeCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCollectionRequest() = default;
};
class DescribeCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> dimension{};
  shared_ptr<string> fullTextRetrievalFields{};
  shared_ptr<string> message{};
  shared_ptr<map<string, string>> metadata{};
  shared_ptr<string> metrics{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> parser{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeCollectionResponseBody() {}

  explicit DescribeCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (dimension) {
      res["Dimension"] = boost::any(*dimension);
    }
    if (fullTextRetrievalFields) {
      res["FullTextRetrievalFields"] = boost::any(*fullTextRetrievalFields);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      dimension = make_shared<long>(boost::any_cast<long>(m["Dimension"]));
    }
    if (m.find("FullTextRetrievalFields") != m.end() && !m["FullTextRetrievalFields"].empty()) {
      fullTextRetrievalFields = make_shared<string>(boost::any_cast<string>(m["FullTextRetrievalFields"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Metadata"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCollectionResponseBody() = default;
};
class DescribeCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCollectionResponseBody> body{};

  DescribeCollectionResponse() {}

  explicit DescribeCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCollectionResponse() = default;
};
class DescribeDBClusterNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeType{};

  DescribeDBClusterNodeRequest() {}

  explicit DescribeDBClusterNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~DescribeDBClusterNodeRequest() = default;
};
class DescribeDBClusterNodeResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DescribeDBClusterNodeResponseBodyNodes() {}

  explicit DescribeDBClusterNodeResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeDBClusterNodeResponseBodyNodes() = default;
};
class DescribeDBClusterNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeDBClusterNodeResponseBodyNodes>> nodes{};
  shared_ptr<string> requestId{};

  DescribeDBClusterNodeResponseBody() {}

  explicit DescribeDBClusterNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeDBClusterNodeResponseBodyNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterNodeResponseBodyNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeDBClusterNodeResponseBodyNodes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterNodeResponseBody() = default;
};
class DescribeDBClusterNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterNodeResponseBody> body{};

  DescribeDBClusterNodeResponse() {}

  explicit DescribeDBClusterNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterNodeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterNodeResponse() = default;
};
class DescribeDBClusterPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> nodes{};
  shared_ptr<string> resourceGroupName{};
  shared_ptr<string> startTime{};

  DescribeDBClusterPerformanceRequest() {}

  explicit DescribeDBClusterPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    if (resourceGroupName) {
      res["ResourceGroupName"] = boost::any(*resourceGroupName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
    if (m.find("ResourceGroupName") != m.end() && !m["ResourceGroupName"].empty()) {
      resourceGroupName = make_shared<string>(boost::any_cast<string>(m["ResourceGroupName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceRequest() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> point{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (point) {
      res["Point"] = boost::any(*point);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Point") != m.end() && !m["Point"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Point"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Point"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      point = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> role{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues>> values{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries>> series{};
  shared_ptr<string> unit{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries>>(expect1);
      }
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeDBClusterPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeys>> performanceKeys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBClusterPerformanceResponseBody() {}

  explicit DescribeDBClusterPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performanceKeys) {
      vector<boost::any> temp1;
      for(auto item1:*performanceKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceKeys"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceKeys"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformanceKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceKeys = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeys>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBody() = default;
};
class DescribeDBClusterPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterPerformanceResponseBody> body{};

  DescribeDBClusterPerformanceResponse() {}

  explicit DescribeDBClusterPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponse() = default;
};
class DescribeDBInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};

  DescribeDBInstanceAttributeRequest() {}

  explicit DescribeDBInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeRequest() = default;
};
class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag() {}

  explicit DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag() = default;
};
class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag>> tag{};

  DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags() {}

  explicit DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags() = default;
};
class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute : public Darabonba::Model {
public:
  shared_ptr<string> availabilityValue{};
  shared_ptr<string> connectionMode{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> coreVersion{};
  shared_ptr<long> cpuCores{};
  shared_ptr<long> cpuCoresPerNode{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> DBInstanceCategory{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceClassType{};
  shared_ptr<long> DBInstanceCpuCores{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<long> DBInstanceDiskMBPS{};
  shared_ptr<string> DBInstanceGroupCount{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> DBInstanceMemory{};
  shared_ptr<string> DBInstanceMode{};
  shared_ptr<string> DBInstanceNetType{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<long> DBInstanceStorage{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> encryptionType{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> hostType{};
  shared_ptr<long> idleTime{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<long> masterCU{};
  shared_ptr<long> masterNodeNum{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> memoryPerNode{};
  shared_ptr<long> memorySize{};
  shared_ptr<string> memoryUnit{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> payType{};
  shared_ptr<string> port{};
  shared_ptr<string> prodType{};
  shared_ptr<string> readDelayTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> runningTime{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> segDiskPerformanceLevel{};
  shared_ptr<long> segNodeNum{};
  shared_ptr<long> segmentCounts{};
  shared_ptr<string> serverlessMode{};
  shared_ptr<long> serverlessResource{};
  shared_ptr<string> startTime{};
  shared_ptr<long> storagePerNode{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> storageType{};
  shared_ptr<string> storageUnit{};
  shared_ptr<bool> supportRestore{};
  shared_ptr<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags> tags{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vectorConfigurationStatus{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute() {}

  explicit DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availabilityValue) {
      res["AvailabilityValue"] = boost::any(*availabilityValue);
    }
    if (connectionMode) {
      res["ConnectionMode"] = boost::any(*connectionMode);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (coreVersion) {
      res["CoreVersion"] = boost::any(*coreVersion);
    }
    if (cpuCores) {
      res["CpuCores"] = boost::any(*cpuCores);
    }
    if (cpuCoresPerNode) {
      res["CpuCoresPerNode"] = boost::any(*cpuCoresPerNode);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (DBInstanceCategory) {
      res["DBInstanceCategory"] = boost::any(*DBInstanceCategory);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceClassType) {
      res["DBInstanceClassType"] = boost::any(*DBInstanceClassType);
    }
    if (DBInstanceCpuCores) {
      res["DBInstanceCpuCores"] = boost::any(*DBInstanceCpuCores);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceDiskMBPS) {
      res["DBInstanceDiskMBPS"] = boost::any(*DBInstanceDiskMBPS);
    }
    if (DBInstanceGroupCount) {
      res["DBInstanceGroupCount"] = boost::any(*DBInstanceGroupCount);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceMemory) {
      res["DBInstanceMemory"] = boost::any(*DBInstanceMemory);
    }
    if (DBInstanceMode) {
      res["DBInstanceMode"] = boost::any(*DBInstanceMode);
    }
    if (DBInstanceNetType) {
      res["DBInstanceNetType"] = boost::any(*DBInstanceNetType);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (encryptionType) {
      res["EncryptionType"] = boost::any(*encryptionType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (hostType) {
      res["HostType"] = boost::any(*hostType);
    }
    if (idleTime) {
      res["IdleTime"] = boost::any(*idleTime);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (masterCU) {
      res["MasterCU"] = boost::any(*masterCU);
    }
    if (masterNodeNum) {
      res["MasterNodeNum"] = boost::any(*masterNodeNum);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (memoryPerNode) {
      res["MemoryPerNode"] = boost::any(*memoryPerNode);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (memoryUnit) {
      res["MemoryUnit"] = boost::any(*memoryUnit);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (prodType) {
      res["ProdType"] = boost::any(*prodType);
    }
    if (readDelayTime) {
      res["ReadDelayTime"] = boost::any(*readDelayTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (segDiskPerformanceLevel) {
      res["SegDiskPerformanceLevel"] = boost::any(*segDiskPerformanceLevel);
    }
    if (segNodeNum) {
      res["SegNodeNum"] = boost::any(*segNodeNum);
    }
    if (segmentCounts) {
      res["SegmentCounts"] = boost::any(*segmentCounts);
    }
    if (serverlessMode) {
      res["ServerlessMode"] = boost::any(*serverlessMode);
    }
    if (serverlessResource) {
      res["ServerlessResource"] = boost::any(*serverlessResource);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (storagePerNode) {
      res["StoragePerNode"] = boost::any(*storagePerNode);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (storageUnit) {
      res["StorageUnit"] = boost::any(*storageUnit);
    }
    if (supportRestore) {
      res["SupportRestore"] = boost::any(*supportRestore);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vectorConfigurationStatus) {
      res["VectorConfigurationStatus"] = boost::any(*vectorConfigurationStatus);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailabilityValue") != m.end() && !m["AvailabilityValue"].empty()) {
      availabilityValue = make_shared<string>(boost::any_cast<string>(m["AvailabilityValue"]));
    }
    if (m.find("ConnectionMode") != m.end() && !m["ConnectionMode"].empty()) {
      connectionMode = make_shared<string>(boost::any_cast<string>(m["ConnectionMode"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("CoreVersion") != m.end() && !m["CoreVersion"].empty()) {
      coreVersion = make_shared<string>(boost::any_cast<string>(m["CoreVersion"]));
    }
    if (m.find("CpuCores") != m.end() && !m["CpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["CpuCores"]));
    }
    if (m.find("CpuCoresPerNode") != m.end() && !m["CpuCoresPerNode"].empty()) {
      cpuCoresPerNode = make_shared<long>(boost::any_cast<long>(m["CpuCoresPerNode"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DBInstanceCategory") != m.end() && !m["DBInstanceCategory"].empty()) {
      DBInstanceCategory = make_shared<string>(boost::any_cast<string>(m["DBInstanceCategory"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceClassType") != m.end() && !m["DBInstanceClassType"].empty()) {
      DBInstanceClassType = make_shared<string>(boost::any_cast<string>(m["DBInstanceClassType"]));
    }
    if (m.find("DBInstanceCpuCores") != m.end() && !m["DBInstanceCpuCores"].empty()) {
      DBInstanceCpuCores = make_shared<long>(boost::any_cast<long>(m["DBInstanceCpuCores"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceDiskMBPS") != m.end() && !m["DBInstanceDiskMBPS"].empty()) {
      DBInstanceDiskMBPS = make_shared<long>(boost::any_cast<long>(m["DBInstanceDiskMBPS"]));
    }
    if (m.find("DBInstanceGroupCount") != m.end() && !m["DBInstanceGroupCount"].empty()) {
      DBInstanceGroupCount = make_shared<string>(boost::any_cast<string>(m["DBInstanceGroupCount"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceMemory") != m.end() && !m["DBInstanceMemory"].empty()) {
      DBInstanceMemory = make_shared<long>(boost::any_cast<long>(m["DBInstanceMemory"]));
    }
    if (m.find("DBInstanceMode") != m.end() && !m["DBInstanceMode"].empty()) {
      DBInstanceMode = make_shared<string>(boost::any_cast<string>(m["DBInstanceMode"]));
    }
    if (m.find("DBInstanceNetType") != m.end() && !m["DBInstanceNetType"].empty()) {
      DBInstanceNetType = make_shared<string>(boost::any_cast<string>(m["DBInstanceNetType"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<long>(boost::any_cast<long>(m["DBInstanceStorage"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("EncryptionType") != m.end() && !m["EncryptionType"].empty()) {
      encryptionType = make_shared<string>(boost::any_cast<string>(m["EncryptionType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HostType") != m.end() && !m["HostType"].empty()) {
      hostType = make_shared<string>(boost::any_cast<string>(m["HostType"]));
    }
    if (m.find("IdleTime") != m.end() && !m["IdleTime"].empty()) {
      idleTime = make_shared<long>(boost::any_cast<long>(m["IdleTime"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MasterCU") != m.end() && !m["MasterCU"].empty()) {
      masterCU = make_shared<long>(boost::any_cast<long>(m["MasterCU"]));
    }
    if (m.find("MasterNodeNum") != m.end() && !m["MasterNodeNum"].empty()) {
      masterNodeNum = make_shared<long>(boost::any_cast<long>(m["MasterNodeNum"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MemoryPerNode") != m.end() && !m["MemoryPerNode"].empty()) {
      memoryPerNode = make_shared<long>(boost::any_cast<long>(m["MemoryPerNode"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["MemorySize"]));
    }
    if (m.find("MemoryUnit") != m.end() && !m["MemoryUnit"].empty()) {
      memoryUnit = make_shared<string>(boost::any_cast<string>(m["MemoryUnit"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ProdType") != m.end() && !m["ProdType"].empty()) {
      prodType = make_shared<string>(boost::any_cast<string>(m["ProdType"]));
    }
    if (m.find("ReadDelayTime") != m.end() && !m["ReadDelayTime"].empty()) {
      readDelayTime = make_shared<string>(boost::any_cast<string>(m["ReadDelayTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<string>(boost::any_cast<string>(m["RunningTime"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("SegDiskPerformanceLevel") != m.end() && !m["SegDiskPerformanceLevel"].empty()) {
      segDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["SegDiskPerformanceLevel"]));
    }
    if (m.find("SegNodeNum") != m.end() && !m["SegNodeNum"].empty()) {
      segNodeNum = make_shared<long>(boost::any_cast<long>(m["SegNodeNum"]));
    }
    if (m.find("SegmentCounts") != m.end() && !m["SegmentCounts"].empty()) {
      segmentCounts = make_shared<long>(boost::any_cast<long>(m["SegmentCounts"]));
    }
    if (m.find("ServerlessMode") != m.end() && !m["ServerlessMode"].empty()) {
      serverlessMode = make_shared<string>(boost::any_cast<string>(m["ServerlessMode"]));
    }
    if (m.find("ServerlessResource") != m.end() && !m["ServerlessResource"].empty()) {
      serverlessResource = make_shared<long>(boost::any_cast<long>(m["ServerlessResource"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StoragePerNode") != m.end() && !m["StoragePerNode"].empty()) {
      storagePerNode = make_shared<long>(boost::any_cast<long>(m["StoragePerNode"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("StorageUnit") != m.end() && !m["StorageUnit"].empty()) {
      storageUnit = make_shared<string>(boost::any_cast<string>(m["StorageUnit"]));
    }
    if (m.find("SupportRestore") != m.end() && !m["SupportRestore"].empty()) {
      supportRestore = make_shared<bool>(boost::any_cast<bool>(m["SupportRestore"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VectorConfigurationStatus") != m.end() && !m["VectorConfigurationStatus"].empty()) {
      vectorConfigurationStatus = make_shared<string>(boost::any_cast<string>(m["VectorConfigurationStatus"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute() = default;
};
class DescribeDBInstanceAttributeResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute>> DBInstanceAttribute{};

  DescribeDBInstanceAttributeResponseBodyItems() {}

  explicit DescribeDBInstanceAttributeResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceAttribute") != m.end() && !m["DBInstanceAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceAttribute"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceAttribute = make_shared<vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyItems() = default;
};
class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceAttributeResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceAttributeResponseBody() {}

  explicit DescribeDBInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBInstanceAttributeResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBInstanceAttributeResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBody() = default;
};
class DescribeDBInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceAttributeResponseBody> body{};

  DescribeDBInstanceAttributeResponse() {}

  explicit DescribeDBInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponse() = default;
};
class DescribeDBInstanceDataBloatRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeDBInstanceDataBloatRequest() {}

  explicit DescribeDBInstanceDataBloatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDBInstanceDataBloatRequest() = default;
};
class DescribeDBInstanceDataBloatResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> bloatCeoff{};
  shared_ptr<string> bloatSize{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> expectTableSize{};
  shared_ptr<string> realTableSize{};
  shared_ptr<string> schemaName{};
  shared_ptr<long> sequence{};
  shared_ptr<string> storageType{};
  shared_ptr<string> suggestedAction{};
  shared_ptr<string> tableName{};
  shared_ptr<string> timeLastUpdated{};
  shared_ptr<string> timeLastVacuumed{};

  DescribeDBInstanceDataBloatResponseBodyItems() {}

  explicit DescribeDBInstanceDataBloatResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bloatCeoff) {
      res["BloatCeoff"] = boost::any(*bloatCeoff);
    }
    if (bloatSize) {
      res["BloatSize"] = boost::any(*bloatSize);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (expectTableSize) {
      res["ExpectTableSize"] = boost::any(*expectTableSize);
    }
    if (realTableSize) {
      res["RealTableSize"] = boost::any(*realTableSize);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (sequence) {
      res["Sequence"] = boost::any(*sequence);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (suggestedAction) {
      res["SuggestedAction"] = boost::any(*suggestedAction);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (timeLastUpdated) {
      res["TimeLastUpdated"] = boost::any(*timeLastUpdated);
    }
    if (timeLastVacuumed) {
      res["TimeLastVacuumed"] = boost::any(*timeLastVacuumed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BloatCeoff") != m.end() && !m["BloatCeoff"].empty()) {
      bloatCeoff = make_shared<string>(boost::any_cast<string>(m["BloatCeoff"]));
    }
    if (m.find("BloatSize") != m.end() && !m["BloatSize"].empty()) {
      bloatSize = make_shared<string>(boost::any_cast<string>(m["BloatSize"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("ExpectTableSize") != m.end() && !m["ExpectTableSize"].empty()) {
      expectTableSize = make_shared<string>(boost::any_cast<string>(m["ExpectTableSize"]));
    }
    if (m.find("RealTableSize") != m.end() && !m["RealTableSize"].empty()) {
      realTableSize = make_shared<string>(boost::any_cast<string>(m["RealTableSize"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("Sequence") != m.end() && !m["Sequence"].empty()) {
      sequence = make_shared<long>(boost::any_cast<long>(m["Sequence"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("SuggestedAction") != m.end() && !m["SuggestedAction"].empty()) {
      suggestedAction = make_shared<string>(boost::any_cast<string>(m["SuggestedAction"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TimeLastUpdated") != m.end() && !m["TimeLastUpdated"].empty()) {
      timeLastUpdated = make_shared<string>(boost::any_cast<string>(m["TimeLastUpdated"]));
    }
    if (m.find("TimeLastVacuumed") != m.end() && !m["TimeLastVacuumed"].empty()) {
      timeLastVacuumed = make_shared<string>(boost::any_cast<string>(m["TimeLastVacuumed"]));
    }
  }


  virtual ~DescribeDBInstanceDataBloatResponseBodyItems() = default;
};
class DescribeDBInstanceDataBloatResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceDataBloatResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDBInstanceDataBloatResponseBody() {}

  explicit DescribeDBInstanceDataBloatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBInstanceDataBloatResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceDataBloatResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBInstanceDataBloatResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDBInstanceDataBloatResponseBody() = default;
};
class DescribeDBInstanceDataBloatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceDataBloatResponseBody> body{};

  DescribeDBInstanceDataBloatResponse() {}

  explicit DescribeDBInstanceDataBloatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceDataBloatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceDataBloatResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceDataBloatResponse() = default;
};
class DescribeDBInstanceDataSkewRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeDBInstanceDataSkewRequest() {}

  explicit DescribeDBInstanceDataSkewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDBInstanceDataSkewRequest() = default;
};
class DescribeDBInstanceDataSkewResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<string> distributeKey{};
  shared_ptr<string> owner{};
  shared_ptr<string> schemaName{};
  shared_ptr<long> sequence{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tableSize{};
  shared_ptr<string> tableSkew{};
  shared_ptr<string> timeLastUpdated{};

  DescribeDBInstanceDataSkewResponseBodyItems() {}

  explicit DescribeDBInstanceDataSkewResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (distributeKey) {
      res["DistributeKey"] = boost::any(*distributeKey);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (sequence) {
      res["Sequence"] = boost::any(*sequence);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableSize) {
      res["TableSize"] = boost::any(*tableSize);
    }
    if (tableSkew) {
      res["TableSkew"] = boost::any(*tableSkew);
    }
    if (timeLastUpdated) {
      res["TimeLastUpdated"] = boost::any(*timeLastUpdated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("DistributeKey") != m.end() && !m["DistributeKey"].empty()) {
      distributeKey = make_shared<string>(boost::any_cast<string>(m["DistributeKey"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("Sequence") != m.end() && !m["Sequence"].empty()) {
      sequence = make_shared<long>(boost::any_cast<long>(m["Sequence"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableSize") != m.end() && !m["TableSize"].empty()) {
      tableSize = make_shared<string>(boost::any_cast<string>(m["TableSize"]));
    }
    if (m.find("TableSkew") != m.end() && !m["TableSkew"].empty()) {
      tableSkew = make_shared<string>(boost::any_cast<string>(m["TableSkew"]));
    }
    if (m.find("TimeLastUpdated") != m.end() && !m["TimeLastUpdated"].empty()) {
      timeLastUpdated = make_shared<string>(boost::any_cast<string>(m["TimeLastUpdated"]));
    }
  }


  virtual ~DescribeDBInstanceDataSkewResponseBodyItems() = default;
};
class DescribeDBInstanceDataSkewResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceDataSkewResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDBInstanceDataSkewResponseBody() {}

  explicit DescribeDBInstanceDataSkewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBInstanceDataSkewResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceDataSkewResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBInstanceDataSkewResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDBInstanceDataSkewResponseBody() = default;
};
class DescribeDBInstanceDataSkewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceDataSkewResponseBody> body{};

  DescribeDBInstanceDataSkewResponse() {}

  explicit DescribeDBInstanceDataSkewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceDataSkewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceDataSkewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceDataSkewResponse() = default;
};
class DescribeDBInstanceDiagnosisSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> rolePreferd{};
  shared_ptr<string> startStatus{};
  shared_ptr<string> syncMode{};

  DescribeDBInstanceDiagnosisSummaryRequest() {}

  explicit DescribeDBInstanceDiagnosisSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (rolePreferd) {
      res["RolePreferd"] = boost::any(*rolePreferd);
    }
    if (startStatus) {
      res["StartStatus"] = boost::any(*startStatus);
    }
    if (syncMode) {
      res["SyncMode"] = boost::any(*syncMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RolePreferd") != m.end() && !m["RolePreferd"].empty()) {
      rolePreferd = make_shared<string>(boost::any_cast<string>(m["RolePreferd"]));
    }
    if (m.find("StartStatus") != m.end() && !m["StartStatus"].empty()) {
      startStatus = make_shared<string>(boost::any_cast<string>(m["StartStatus"]));
    }
    if (m.find("SyncMode") != m.end() && !m["SyncMode"].empty()) {
      syncMode = make_shared<string>(boost::any_cast<string>(m["SyncMode"]));
    }
  }


  virtual ~DescribeDBInstanceDiagnosisSummaryRequest() = default;
};
class DescribeDBInstanceDiagnosisSummaryResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> hostname{};
  shared_ptr<string> nodeAddress{};
  shared_ptr<string> nodeCID{};
  shared_ptr<string> nodeID{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodePort{};
  shared_ptr<string> nodePreferredRole{};
  shared_ptr<string> nodeReplicationMode{};
  shared_ptr<string> nodeRole{};
  shared_ptr<string> nodeStatus{};
  shared_ptr<string> nodeType{};

  DescribeDBInstanceDiagnosisSummaryResponseBodyItems() {}

  explicit DescribeDBInstanceDiagnosisSummaryResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (nodeAddress) {
      res["NodeAddress"] = boost::any(*nodeAddress);
    }
    if (nodeCID) {
      res["NodeCID"] = boost::any(*nodeCID);
    }
    if (nodeID) {
      res["NodeID"] = boost::any(*nodeID);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodePort) {
      res["NodePort"] = boost::any(*nodePort);
    }
    if (nodePreferredRole) {
      res["NodePreferredRole"] = boost::any(*nodePreferredRole);
    }
    if (nodeReplicationMode) {
      res["NodeReplicationMode"] = boost::any(*nodeReplicationMode);
    }
    if (nodeRole) {
      res["NodeRole"] = boost::any(*nodeRole);
    }
    if (nodeStatus) {
      res["NodeStatus"] = boost::any(*nodeStatus);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("NodeAddress") != m.end() && !m["NodeAddress"].empty()) {
      nodeAddress = make_shared<string>(boost::any_cast<string>(m["NodeAddress"]));
    }
    if (m.find("NodeCID") != m.end() && !m["NodeCID"].empty()) {
      nodeCID = make_shared<string>(boost::any_cast<string>(m["NodeCID"]));
    }
    if (m.find("NodeID") != m.end() && !m["NodeID"].empty()) {
      nodeID = make_shared<string>(boost::any_cast<string>(m["NodeID"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodePort") != m.end() && !m["NodePort"].empty()) {
      nodePort = make_shared<string>(boost::any_cast<string>(m["NodePort"]));
    }
    if (m.find("NodePreferredRole") != m.end() && !m["NodePreferredRole"].empty()) {
      nodePreferredRole = make_shared<string>(boost::any_cast<string>(m["NodePreferredRole"]));
    }
    if (m.find("NodeReplicationMode") != m.end() && !m["NodeReplicationMode"].empty()) {
      nodeReplicationMode = make_shared<string>(boost::any_cast<string>(m["NodeReplicationMode"]));
    }
    if (m.find("NodeRole") != m.end() && !m["NodeRole"].empty()) {
      nodeRole = make_shared<string>(boost::any_cast<string>(m["NodeRole"]));
    }
    if (m.find("NodeStatus") != m.end() && !m["NodeStatus"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["NodeStatus"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~DescribeDBInstanceDiagnosisSummaryResponseBodyItems() = default;
};
class DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo : public Darabonba::Model {
public:
  shared_ptr<long> exceptionNodeNum{};
  shared_ptr<long> normalNodeNum{};
  shared_ptr<long> notPreferredNodeNum{};
  shared_ptr<long> notSyncingNodeNum{};
  shared_ptr<long> preferredNodeNum{};
  shared_ptr<long> syncedNodeNum{};

  DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo() {}

  explicit DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionNodeNum) {
      res["ExceptionNodeNum"] = boost::any(*exceptionNodeNum);
    }
    if (normalNodeNum) {
      res["NormalNodeNum"] = boost::any(*normalNodeNum);
    }
    if (notPreferredNodeNum) {
      res["NotPreferredNodeNum"] = boost::any(*notPreferredNodeNum);
    }
    if (notSyncingNodeNum) {
      res["NotSyncingNodeNum"] = boost::any(*notSyncingNodeNum);
    }
    if (preferredNodeNum) {
      res["PreferredNodeNum"] = boost::any(*preferredNodeNum);
    }
    if (syncedNodeNum) {
      res["SyncedNodeNum"] = boost::any(*syncedNodeNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExceptionNodeNum") != m.end() && !m["ExceptionNodeNum"].empty()) {
      exceptionNodeNum = make_shared<long>(boost::any_cast<long>(m["ExceptionNodeNum"]));
    }
    if (m.find("NormalNodeNum") != m.end() && !m["NormalNodeNum"].empty()) {
      normalNodeNum = make_shared<long>(boost::any_cast<long>(m["NormalNodeNum"]));
    }
    if (m.find("NotPreferredNodeNum") != m.end() && !m["NotPreferredNodeNum"].empty()) {
      notPreferredNodeNum = make_shared<long>(boost::any_cast<long>(m["NotPreferredNodeNum"]));
    }
    if (m.find("NotSyncingNodeNum") != m.end() && !m["NotSyncingNodeNum"].empty()) {
      notSyncingNodeNum = make_shared<long>(boost::any_cast<long>(m["NotSyncingNodeNum"]));
    }
    if (m.find("PreferredNodeNum") != m.end() && !m["PreferredNodeNum"].empty()) {
      preferredNodeNum = make_shared<long>(boost::any_cast<long>(m["PreferredNodeNum"]));
    }
    if (m.find("SyncedNodeNum") != m.end() && !m["SyncedNodeNum"].empty()) {
      syncedNodeNum = make_shared<long>(boost::any_cast<long>(m["SyncedNodeNum"]));
    }
  }


  virtual ~DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo() = default;
};
class DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo : public Darabonba::Model {
public:
  shared_ptr<long> exceptionNodeNum{};
  shared_ptr<long> normalNodeNum{};
  shared_ptr<long> notPreferredNodeNum{};
  shared_ptr<long> notSyncingNodeNum{};
  shared_ptr<long> preferredNodeNum{};
  shared_ptr<long> syncedNodeNum{};

  DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo() {}

  explicit DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionNodeNum) {
      res["ExceptionNodeNum"] = boost::any(*exceptionNodeNum);
    }
    if (normalNodeNum) {
      res["NormalNodeNum"] = boost::any(*normalNodeNum);
    }
    if (notPreferredNodeNum) {
      res["NotPreferredNodeNum"] = boost::any(*notPreferredNodeNum);
    }
    if (notSyncingNodeNum) {
      res["NotSyncingNodeNum"] = boost::any(*notSyncingNodeNum);
    }
    if (preferredNodeNum) {
      res["PreferredNodeNum"] = boost::any(*preferredNodeNum);
    }
    if (syncedNodeNum) {
      res["SyncedNodeNum"] = boost::any(*syncedNodeNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExceptionNodeNum") != m.end() && !m["ExceptionNodeNum"].empty()) {
      exceptionNodeNum = make_shared<long>(boost::any_cast<long>(m["ExceptionNodeNum"]));
    }
    if (m.find("NormalNodeNum") != m.end() && !m["NormalNodeNum"].empty()) {
      normalNodeNum = make_shared<long>(boost::any_cast<long>(m["NormalNodeNum"]));
    }
    if (m.find("NotPreferredNodeNum") != m.end() && !m["NotPreferredNodeNum"].empty()) {
      notPreferredNodeNum = make_shared<long>(boost::any_cast<long>(m["NotPreferredNodeNum"]));
    }
    if (m.find("NotSyncingNodeNum") != m.end() && !m["NotSyncingNodeNum"].empty()) {
      notSyncingNodeNum = make_shared<long>(boost::any_cast<long>(m["NotSyncingNodeNum"]));
    }
    if (m.find("PreferredNodeNum") != m.end() && !m["PreferredNodeNum"].empty()) {
      preferredNodeNum = make_shared<long>(boost::any_cast<long>(m["PreferredNodeNum"]));
    }
    if (m.find("SyncedNodeNum") != m.end() && !m["SyncedNodeNum"].empty()) {
      syncedNodeNum = make_shared<long>(boost::any_cast<long>(m["SyncedNodeNum"]));
    }
  }


  virtual ~DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo() = default;
};
class DescribeDBInstanceDiagnosisSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems>> items{};
  shared_ptr<DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo> masterStatusInfo{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo> segmentStatusInfo{};
  shared_ptr<string> totalCount{};

  DescribeDBInstanceDiagnosisSummaryResponseBody() {}

  explicit DescribeDBInstanceDiagnosisSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (masterStatusInfo) {
      res["MasterStatusInfo"] = masterStatusInfo ? boost::any(masterStatusInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (segmentStatusInfo) {
      res["SegmentStatusInfo"] = segmentStatusInfo ? boost::any(segmentStatusInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceDiagnosisSummaryResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBInstanceDiagnosisSummaryResponseBodyItems>>(expect1);
      }
    }
    if (m.find("MasterStatusInfo") != m.end() && !m["MasterStatusInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MasterStatusInfo"].type()) {
        DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MasterStatusInfo"]));
        masterStatusInfo = make_shared<DescribeDBInstanceDiagnosisSummaryResponseBodyMasterStatusInfo>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SegmentStatusInfo") != m.end() && !m["SegmentStatusInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SegmentStatusInfo"].type()) {
        DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SegmentStatusInfo"]));
        segmentStatusInfo = make_shared<DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDBInstanceDiagnosisSummaryResponseBody() = default;
};
class DescribeDBInstanceDiagnosisSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceDiagnosisSummaryResponseBody> body{};

  DescribeDBInstanceDiagnosisSummaryResponse() {}

  explicit DescribeDBInstanceDiagnosisSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceDiagnosisSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceDiagnosisSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceDiagnosisSummaryResponse() = default;
};
class DescribeDBInstanceErrorLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> host{};
  shared_ptr<string> keywords{};
  shared_ptr<string> logLevel{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DescribeDBInstanceErrorLogRequest() {}

  explicit DescribeDBInstanceErrorLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (logLevel) {
      res["LogLevel"] = boost::any(*logLevel);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("LogLevel") != m.end() && !m["LogLevel"].empty()) {
      logLevel = make_shared<string>(boost::any_cast<string>(m["LogLevel"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeDBInstanceErrorLogRequest() = default;
};
class DescribeDBInstanceErrorLogResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<string> host{};
  shared_ptr<string> logContext{};
  shared_ptr<string> logLevel{};
  shared_ptr<long> time{};
  shared_ptr<string> user{};

  DescribeDBInstanceErrorLogResponseBodyItems() {}

  explicit DescribeDBInstanceErrorLogResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (logContext) {
      res["LogContext"] = boost::any(*logContext);
    }
    if (logLevel) {
      res["LogLevel"] = boost::any(*logLevel);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("LogContext") != m.end() && !m["LogContext"].empty()) {
      logContext = make_shared<string>(boost::any_cast<string>(m["LogContext"]));
    }
    if (m.find("LogLevel") != m.end() && !m["LogLevel"].empty()) {
      logLevel = make_shared<string>(boost::any_cast<string>(m["LogLevel"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeDBInstanceErrorLogResponseBodyItems() = default;
};
class DescribeDBInstanceErrorLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceErrorLogResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDBInstanceErrorLogResponseBody() {}

  explicit DescribeDBInstanceErrorLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBInstanceErrorLogResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceErrorLogResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBInstanceErrorLogResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDBInstanceErrorLogResponseBody() = default;
};
class DescribeDBInstanceErrorLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceErrorLogResponseBody> body{};

  DescribeDBInstanceErrorLogResponse() {}

  explicit DescribeDBInstanceErrorLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceErrorLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceErrorLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceErrorLogResponse() = default;
};
class DescribeDBInstanceIPArrayListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceIPArrayName{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> resourceGroupId{};

  DescribeDBInstanceIPArrayListRequest() {}

  explicit DescribeDBInstanceIPArrayListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceIPArrayName) {
      res["DBInstanceIPArrayName"] = boost::any(*DBInstanceIPArrayName);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceIPArrayName") != m.end() && !m["DBInstanceIPArrayName"].empty()) {
      DBInstanceIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBInstanceIPArrayName"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeDBInstanceIPArrayListRequest() = default;
};
class DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceIPArrayAttribute{};
  shared_ptr<string> DBInstanceIPArrayName{};
  shared_ptr<string> securityIPList{};

  DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray() {}

  explicit DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceIPArrayAttribute) {
      res["DBInstanceIPArrayAttribute"] = boost::any(*DBInstanceIPArrayAttribute);
    }
    if (DBInstanceIPArrayName) {
      res["DBInstanceIPArrayName"] = boost::any(*DBInstanceIPArrayName);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceIPArrayAttribute") != m.end() && !m["DBInstanceIPArrayAttribute"].empty()) {
      DBInstanceIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBInstanceIPArrayAttribute"]));
    }
    if (m.find("DBInstanceIPArrayName") != m.end() && !m["DBInstanceIPArrayName"].empty()) {
      DBInstanceIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBInstanceIPArrayName"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray() = default;
};
class DescribeDBInstanceIPArrayListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray>> DBInstanceIPArray{};

  DescribeDBInstanceIPArrayListResponseBodyItems() {}

  explicit DescribeDBInstanceIPArrayListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceIPArray) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceIPArray){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceIPArray"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceIPArray") != m.end() && !m["DBInstanceIPArray"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceIPArray"].type()) {
        vector<DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceIPArray"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceIPArray = make_shared<vector<DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceIPArrayListResponseBodyItems() = default;
};
class DescribeDBInstanceIPArrayListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceIPArrayListResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceIPArrayListResponseBody() {}

  explicit DescribeDBInstanceIPArrayListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBInstanceIPArrayListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBInstanceIPArrayListResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceIPArrayListResponseBody() = default;
};
class DescribeDBInstanceIPArrayListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceIPArrayListResponseBody> body{};

  DescribeDBInstanceIPArrayListResponse() {}

  explicit DescribeDBInstanceIPArrayListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceIPArrayListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceIPArrayListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceIPArrayListResponse() = default;
};
class DescribeDBInstanceIndexUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeDBInstanceIndexUsageRequest() {}

  explicit DescribeDBInstanceIndexUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDBInstanceIndexUsageRequest() = default;
};
class DescribeDBInstanceIndexUsageResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> databaseName{};
  shared_ptr<string> indexDef{};
  shared_ptr<string> indexName{};
  shared_ptr<long> indexScanTimes{};
  shared_ptr<string> indexSize{};
  shared_ptr<bool> isPartitionTable{};
  shared_ptr<string> parentTableName{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> timeLastUpdated{};

  DescribeDBInstanceIndexUsageResponseBodyItems() {}

  explicit DescribeDBInstanceIndexUsageResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (indexDef) {
      res["IndexDef"] = boost::any(*indexDef);
    }
    if (indexName) {
      res["IndexName"] = boost::any(*indexName);
    }
    if (indexScanTimes) {
      res["IndexScanTimes"] = boost::any(*indexScanTimes);
    }
    if (indexSize) {
      res["IndexSize"] = boost::any(*indexSize);
    }
    if (isPartitionTable) {
      res["IsPartitionTable"] = boost::any(*isPartitionTable);
    }
    if (parentTableName) {
      res["ParentTableName"] = boost::any(*parentTableName);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (timeLastUpdated) {
      res["TimeLastUpdated"] = boost::any(*timeLastUpdated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("IndexDef") != m.end() && !m["IndexDef"].empty()) {
      indexDef = make_shared<string>(boost::any_cast<string>(m["IndexDef"]));
    }
    if (m.find("IndexName") != m.end() && !m["IndexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["IndexName"]));
    }
    if (m.find("IndexScanTimes") != m.end() && !m["IndexScanTimes"].empty()) {
      indexScanTimes = make_shared<long>(boost::any_cast<long>(m["IndexScanTimes"]));
    }
    if (m.find("IndexSize") != m.end() && !m["IndexSize"].empty()) {
      indexSize = make_shared<string>(boost::any_cast<string>(m["IndexSize"]));
    }
    if (m.find("IsPartitionTable") != m.end() && !m["IsPartitionTable"].empty()) {
      isPartitionTable = make_shared<bool>(boost::any_cast<bool>(m["IsPartitionTable"]));
    }
    if (m.find("ParentTableName") != m.end() && !m["ParentTableName"].empty()) {
      parentTableName = make_shared<string>(boost::any_cast<string>(m["ParentTableName"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TimeLastUpdated") != m.end() && !m["TimeLastUpdated"].empty()) {
      timeLastUpdated = make_shared<string>(boost::any_cast<string>(m["TimeLastUpdated"]));
    }
  }


  virtual ~DescribeDBInstanceIndexUsageResponseBodyItems() = default;
};
class DescribeDBInstanceIndexUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceIndexUsageResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDBInstanceIndexUsageResponseBody() {}

  explicit DescribeDBInstanceIndexUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBInstanceIndexUsageResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceIndexUsageResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBInstanceIndexUsageResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDBInstanceIndexUsageResponseBody() = default;
};
class DescribeDBInstanceIndexUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceIndexUsageResponseBody> body{};

  DescribeDBInstanceIndexUsageResponse() {}

  explicit DescribeDBInstanceIndexUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceIndexUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceIndexUsageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceIndexUsageResponse() = default;
};
class DescribeDBInstanceNetInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceId{};

  DescribeDBInstanceNetInfoRequest() {}

  explicit DescribeDBInstanceNetInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoRequest() = default;
};
class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> IPType{};
  shared_ptr<string> port{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcInstanceId{};

  DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo() {}

  explicit DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (IPType) {
      res["IPType"] = boost::any(*IPType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcInstanceId) {
      res["VpcInstanceId"] = boost::any(*vpcInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("IPType") != m.end() && !m["IPType"].empty()) {
      IPType = make_shared<string>(boost::any_cast<string>(m["IPType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcInstanceId") != m.end() && !m["VpcInstanceId"].empty()) {
      vpcInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcInstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo() = default;
};
class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo>> DBInstanceNetInfo{};

  DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() {}

  explicit DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceNetInfo) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceNetInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceNetInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceNetInfo") != m.end() && !m["DBInstanceNetInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceNetInfo"].type()) {
        vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceNetInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceNetInfo = make_shared<vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() = default;
};
class DescribeDBInstanceNetInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos> DBInstanceNetInfos{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceNetInfoResponseBody() {}

  explicit DescribeDBInstanceNetInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceNetInfos) {
      res["DBInstanceNetInfos"] = DBInstanceNetInfos ? boost::any(DBInstanceNetInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceNetInfos") != m.end() && !m["DBInstanceNetInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstanceNetInfos"].type()) {
        DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstanceNetInfos"]));
        DBInstanceNetInfos = make_shared<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos>(model1);
      }
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBody() = default;
};
class DescribeDBInstanceNetInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceNetInfoResponseBody> body{};

  DescribeDBInstanceNetInfoResponse() {}

  explicit DescribeDBInstanceNetInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceNetInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceNetInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponse() = default;
};
class DescribeDBInstancePerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> startTime{};

  DescribeDBInstancePerformanceRequest() {}

  explicit DescribeDBInstancePerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBInstancePerformanceRequest() = default;
};
class DescribeDBInstancePerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> engine{};
  shared_ptr<vector<string>> performanceKeys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBInstancePerformanceResponseBody() {}

  explicit DescribeDBInstancePerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (performanceKeys) {
      res["PerformanceKeys"] = boost::any(*performanceKeys);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PerformanceKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PerformanceKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      performanceKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBInstancePerformanceResponseBody() = default;
};
class DescribeDBInstancePerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstancePerformanceResponseBody> body{};

  DescribeDBInstancePerformanceResponse() {}

  explicit DescribeDBInstancePerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstancePerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancePerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancePerformanceResponse() = default;
};
class DescribeDBInstancePlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> planCreateDate{};
  shared_ptr<string> planDesc{};
  shared_ptr<string> planId{};
  shared_ptr<string> planScheduleType{};
  shared_ptr<string> planType{};

  DescribeDBInstancePlansRequest() {}

  explicit DescribeDBInstancePlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (planCreateDate) {
      res["PlanCreateDate"] = boost::any(*planCreateDate);
    }
    if (planDesc) {
      res["PlanDesc"] = boost::any(*planDesc);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planScheduleType) {
      res["PlanScheduleType"] = boost::any(*planScheduleType);
    }
    if (planType) {
      res["PlanType"] = boost::any(*planType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlanCreateDate") != m.end() && !m["PlanCreateDate"].empty()) {
      planCreateDate = make_shared<string>(boost::any_cast<string>(m["PlanCreateDate"]));
    }
    if (m.find("PlanDesc") != m.end() && !m["PlanDesc"].empty()) {
      planDesc = make_shared<string>(boost::any_cast<string>(m["PlanDesc"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanScheduleType") != m.end() && !m["PlanScheduleType"].empty()) {
      planScheduleType = make_shared<string>(boost::any_cast<string>(m["PlanScheduleType"]));
    }
    if (m.find("PlanType") != m.end() && !m["PlanType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["PlanType"]));
    }
  }


  virtual ~DescribeDBInstancePlansRequest() = default;
};
class DescribeDBInstancePlansResponseBodyItemsPlanList : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> planConfig{};
  shared_ptr<string> planDesc{};
  shared_ptr<string> planEndDate{};
  shared_ptr<string> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> planScheduleType{};
  shared_ptr<string> planStartDate{};
  shared_ptr<string> planStatus{};
  shared_ptr<string> planType{};

  DescribeDBInstancePlansResponseBodyItemsPlanList() {}

  explicit DescribeDBInstancePlansResponseBodyItemsPlanList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (planConfig) {
      res["PlanConfig"] = boost::any(*planConfig);
    }
    if (planDesc) {
      res["PlanDesc"] = boost::any(*planDesc);
    }
    if (planEndDate) {
      res["PlanEndDate"] = boost::any(*planEndDate);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (planScheduleType) {
      res["PlanScheduleType"] = boost::any(*planScheduleType);
    }
    if (planStartDate) {
      res["PlanStartDate"] = boost::any(*planStartDate);
    }
    if (planStatus) {
      res["PlanStatus"] = boost::any(*planStatus);
    }
    if (planType) {
      res["PlanType"] = boost::any(*planType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("PlanConfig") != m.end() && !m["PlanConfig"].empty()) {
      planConfig = make_shared<string>(boost::any_cast<string>(m["PlanConfig"]));
    }
    if (m.find("PlanDesc") != m.end() && !m["PlanDesc"].empty()) {
      planDesc = make_shared<string>(boost::any_cast<string>(m["PlanDesc"]));
    }
    if (m.find("PlanEndDate") != m.end() && !m["PlanEndDate"].empty()) {
      planEndDate = make_shared<string>(boost::any_cast<string>(m["PlanEndDate"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("PlanScheduleType") != m.end() && !m["PlanScheduleType"].empty()) {
      planScheduleType = make_shared<string>(boost::any_cast<string>(m["PlanScheduleType"]));
    }
    if (m.find("PlanStartDate") != m.end() && !m["PlanStartDate"].empty()) {
      planStartDate = make_shared<string>(boost::any_cast<string>(m["PlanStartDate"]));
    }
    if (m.find("PlanStatus") != m.end() && !m["PlanStatus"].empty()) {
      planStatus = make_shared<string>(boost::any_cast<string>(m["PlanStatus"]));
    }
    if (m.find("PlanType") != m.end() && !m["PlanType"].empty()) {
      planType = make_shared<string>(boost::any_cast<string>(m["PlanType"]));
    }
  }


  virtual ~DescribeDBInstancePlansResponseBodyItemsPlanList() = default;
};
class DescribeDBInstancePlansResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancePlansResponseBodyItemsPlanList>> planList{};

  DescribeDBInstancePlansResponseBodyItems() {}

  explicit DescribeDBInstancePlansResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planList) {
      vector<boost::any> temp1;
      for(auto item1:*planList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlanList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanList") != m.end() && !m["PlanList"].empty()) {
      if (typeid(vector<boost::any>) == m["PlanList"].type()) {
        vector<DescribeDBInstancePlansResponseBodyItemsPlanList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlanList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancePlansResponseBodyItemsPlanList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        planList = make_shared<vector<DescribeDBInstancePlansResponseBodyItemsPlanList>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancePlansResponseBodyItems() = default;
};
class DescribeDBInstancePlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<DescribeDBInstancePlansResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<long> totalRecordCount{};

  DescribeDBInstancePlansResponseBody() {}

  explicit DescribeDBInstancePlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBInstancePlansResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBInstancePlansResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeDBInstancePlansResponseBody() = default;
};
class DescribeDBInstancePlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstancePlansResponseBody> body{};

  DescribeDBInstancePlansResponse() {}

  explicit DescribeDBInstancePlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstancePlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancePlansResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancePlansResponse() = default;
};
class DescribeDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeDBInstanceSSLRequest() {}

  explicit DescribeDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceSSLRequest() = default;
};
class DescribeDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certCommonName{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> SSLEnabled{};
  shared_ptr<string> SSLExpiredTime{};

  DescribeDBInstanceSSLResponseBody() {}

  explicit DescribeDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certCommonName) {
      res["CertCommonName"] = boost::any(*certCommonName);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SSLEnabled) {
      res["SSLEnabled"] = boost::any(*SSLEnabled);
    }
    if (SSLExpiredTime) {
      res["SSLExpiredTime"] = boost::any(*SSLExpiredTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertCommonName") != m.end() && !m["CertCommonName"].empty()) {
      certCommonName = make_shared<string>(boost::any_cast<string>(m["CertCommonName"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<bool>(boost::any_cast<bool>(m["SSLEnabled"]));
    }
    if (m.find("SSLExpiredTime") != m.end() && !m["SSLExpiredTime"].empty()) {
      SSLExpiredTime = make_shared<string>(boost::any_cast<string>(m["SSLExpiredTime"]));
    }
  }


  virtual ~DescribeDBInstanceSSLResponseBody() = default;
};
class DescribeDBInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceSSLResponseBody> body{};

  DescribeDBInstanceSSLResponse() {}

  explicit DescribeDBInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceSSLResponse() = default;
};
class DescribeDBInstanceSupportMaxPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};

  DescribeDBInstanceSupportMaxPerformanceRequest() {}

  explicit DescribeDBInstanceSupportMaxPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeDBInstanceSupportMaxPerformanceRequest() = default;
};
class DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance : public Darabonba::Model {
public:
  shared_ptr<string> bottleneck{};
  shared_ptr<string> key{};
  shared_ptr<string> unit{};
  shared_ptr<string> value{};

  DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance() {}

  explicit DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bottleneck) {
      res["Bottleneck"] = boost::any(*bottleneck);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bottleneck") != m.end() && !m["Bottleneck"].empty()) {
      bottleneck = make_shared<string>(boost::any_cast<string>(m["Bottleneck"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance() = default;
};
class DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance>> performance{};

  DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances() {}

  explicit DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performance) {
      vector<boost::any> temp1;
      for(auto item1:*performance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Performance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Performance") != m.end() && !m["Performance"].empty()) {
      if (typeid(vector<boost::any>) == m["Performance"].type()) {
        vector<DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Performance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performance = make_shared<vector<DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformancesPerformance>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances() = default;
};
class DescribeDBInstanceSupportMaxPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances> performances{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceSupportMaxPerformanceResponseBody() {}

  explicit DescribeDBInstanceSupportMaxPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (performances) {
      res["Performances"] = performances ? boost::any(performances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Performances") != m.end() && !m["Performances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Performances"].type()) {
        DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Performances"]));
        performances = make_shared<DescribeDBInstanceSupportMaxPerformanceResponseBodyPerformances>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceSupportMaxPerformanceResponseBody() = default;
};
class DescribeDBInstanceSupportMaxPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceSupportMaxPerformanceResponseBody> body{};

  DescribeDBInstanceSupportMaxPerformanceResponse() {}

  explicit DescribeDBInstanceSupportMaxPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceSupportMaxPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceSupportMaxPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceSupportMaxPerformanceResponse() = default;
};
class DescribeDBInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesRequestTag() {}

  explicit DescribeDBInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstancesRequestTag() = default;
};
class DescribeDBInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> DBInstanceCategories{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceIds{};
  shared_ptr<vector<string>> DBInstanceModes{};
  shared_ptr<vector<string>> DBInstanceStatuses{};
  shared_ptr<vector<string>> instanceDeployTypes{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeDBInstancesRequestTag>> tag{};
  shared_ptr<string> vpcId{};

  DescribeDBInstancesRequest() {}

  explicit DescribeDBInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceCategories) {
      res["DBInstanceCategories"] = boost::any(*DBInstanceCategories);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceIds) {
      res["DBInstanceIds"] = boost::any(*DBInstanceIds);
    }
    if (DBInstanceModes) {
      res["DBInstanceModes"] = boost::any(*DBInstanceModes);
    }
    if (DBInstanceStatuses) {
      res["DBInstanceStatuses"] = boost::any(*DBInstanceStatuses);
    }
    if (instanceDeployTypes) {
      res["InstanceDeployTypes"] = boost::any(*instanceDeployTypes);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceCategories") != m.end() && !m["DBInstanceCategories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBInstanceCategories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBInstanceCategories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBInstanceCategories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      DBInstanceIds = make_shared<string>(boost::any_cast<string>(m["DBInstanceIds"]));
    }
    if (m.find("DBInstanceModes") != m.end() && !m["DBInstanceModes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBInstanceModes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBInstanceModes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBInstanceModes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DBInstanceStatuses") != m.end() && !m["DBInstanceStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBInstanceStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBInstanceStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBInstanceStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceDeployTypes") != m.end() && !m["InstanceDeployTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceDeployTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceDeployTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceDeployTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstancesRequestTag>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeDBInstancesRequest() = default;
};
class DescribeDBInstancesShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesShrinkRequestTag() {}

  explicit DescribeDBInstancesShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstancesShrinkRequestTag() = default;
};
class DescribeDBInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceCategoriesShrink{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceIds{};
  shared_ptr<string> DBInstanceModesShrink{};
  shared_ptr<string> DBInstanceStatusesShrink{};
  shared_ptr<string> instanceDeployTypesShrink{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeDBInstancesShrinkRequestTag>> tag{};
  shared_ptr<string> vpcId{};

  DescribeDBInstancesShrinkRequest() {}

  explicit DescribeDBInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceCategoriesShrink) {
      res["DBInstanceCategories"] = boost::any(*DBInstanceCategoriesShrink);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceIds) {
      res["DBInstanceIds"] = boost::any(*DBInstanceIds);
    }
    if (DBInstanceModesShrink) {
      res["DBInstanceModes"] = boost::any(*DBInstanceModesShrink);
    }
    if (DBInstanceStatusesShrink) {
      res["DBInstanceStatuses"] = boost::any(*DBInstanceStatusesShrink);
    }
    if (instanceDeployTypesShrink) {
      res["InstanceDeployTypes"] = boost::any(*instanceDeployTypesShrink);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceCategories") != m.end() && !m["DBInstanceCategories"].empty()) {
      DBInstanceCategoriesShrink = make_shared<string>(boost::any_cast<string>(m["DBInstanceCategories"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      DBInstanceIds = make_shared<string>(boost::any_cast<string>(m["DBInstanceIds"]));
    }
    if (m.find("DBInstanceModes") != m.end() && !m["DBInstanceModes"].empty()) {
      DBInstanceModesShrink = make_shared<string>(boost::any_cast<string>(m["DBInstanceModes"]));
    }
    if (m.find("DBInstanceStatuses") != m.end() && !m["DBInstanceStatuses"].empty()) {
      DBInstanceStatusesShrink = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatuses"]));
    }
    if (m.find("InstanceDeployTypes") != m.end() && !m["InstanceDeployTypes"].empty()) {
      instanceDeployTypesShrink = make_shared<string>(boost::any_cast<string>(m["InstanceDeployTypes"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBInstancesShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstancesShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeDBInstancesShrinkRequest() = default;
};
class DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag() {}

  explicit DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag() = default;
};
class DescribeDBInstancesResponseBodyItemsDBInstanceTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag>> tag{};

  DescribeDBInstancesResponseBodyItemsDBInstanceTags() {}

  explicit DescribeDBInstancesResponseBodyItemsDBInstanceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponseBodyItemsDBInstanceTags() = default;
};
class DescribeDBInstancesResponseBodyItemsDBInstance : public Darabonba::Model {
public:
  shared_ptr<string> connectionMode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBInstanceCategory{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceMode{};
  shared_ptr<string> DBInstanceNetType{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> instanceDeployType{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<long> masterNodeNum{};
  shared_ptr<string> payType{};
  shared_ptr<string> prodType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> segNodeNum{};
  shared_ptr<string> serverlessMode{};
  shared_ptr<string> storageSize{};
  shared_ptr<string> storageType{};
  shared_ptr<DescribeDBInstancesResponseBodyItemsDBInstanceTags> tags{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstancesResponseBodyItemsDBInstance() {}

  explicit DescribeDBInstancesResponseBodyItemsDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionMode) {
      res["ConnectionMode"] = boost::any(*connectionMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBInstanceCategory) {
      res["DBInstanceCategory"] = boost::any(*DBInstanceCategory);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceMode) {
      res["DBInstanceMode"] = boost::any(*DBInstanceMode);
    }
    if (DBInstanceNetType) {
      res["DBInstanceNetType"] = boost::any(*DBInstanceNetType);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceDeployType) {
      res["InstanceDeployType"] = boost::any(*instanceDeployType);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (masterNodeNum) {
      res["MasterNodeNum"] = boost::any(*masterNodeNum);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (prodType) {
      res["ProdType"] = boost::any(*prodType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (segNodeNum) {
      res["SegNodeNum"] = boost::any(*segNodeNum);
    }
    if (serverlessMode) {
      res["ServerlessMode"] = boost::any(*serverlessMode);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionMode") != m.end() && !m["ConnectionMode"].empty()) {
      connectionMode = make_shared<string>(boost::any_cast<string>(m["ConnectionMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBInstanceCategory") != m.end() && !m["DBInstanceCategory"].empty()) {
      DBInstanceCategory = make_shared<string>(boost::any_cast<string>(m["DBInstanceCategory"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceMode") != m.end() && !m["DBInstanceMode"].empty()) {
      DBInstanceMode = make_shared<string>(boost::any_cast<string>(m["DBInstanceMode"]));
    }
    if (m.find("DBInstanceNetType") != m.end() && !m["DBInstanceNetType"].empty()) {
      DBInstanceNetType = make_shared<string>(boost::any_cast<string>(m["DBInstanceNetType"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("InstanceDeployType") != m.end() && !m["InstanceDeployType"].empty()) {
      instanceDeployType = make_shared<string>(boost::any_cast<string>(m["InstanceDeployType"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MasterNodeNum") != m.end() && !m["MasterNodeNum"].empty()) {
      masterNodeNum = make_shared<long>(boost::any_cast<long>(m["MasterNodeNum"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("ProdType") != m.end() && !m["ProdType"].empty()) {
      prodType = make_shared<string>(boost::any_cast<string>(m["ProdType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SegNodeNum") != m.end() && !m["SegNodeNum"].empty()) {
      segNodeNum = make_shared<string>(boost::any_cast<string>(m["SegNodeNum"]));
    }
    if (m.find("ServerlessMode") != m.end() && !m["ServerlessMode"].empty()) {
      serverlessMode = make_shared<string>(boost::any_cast<string>(m["ServerlessMode"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<string>(boost::any_cast<string>(m["StorageSize"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBInstancesResponseBodyItemsDBInstanceTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBInstancesResponseBodyItemsDBInstanceTags>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyItemsDBInstance() = default;
};
class DescribeDBInstancesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyItemsDBInstance>> DBInstance{};

  DescribeDBInstancesResponseBodyItems() {}

  explicit DescribeDBInstancesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstance) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstance"].type()) {
        vector<DescribeDBInstancesResponseBodyItemsDBInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyItemsDBInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstance = make_shared<vector<DescribeDBInstancesResponseBodyItemsDBInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponseBodyItems() = default;
};
class DescribeDBInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstancesResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeDBInstancesResponseBody() {}

  explicit DescribeDBInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBInstancesResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBInstancesResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBody() = default;
};
class DescribeDBInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstancesResponseBody> body{};

  DescribeDBInstancesResponse() {}

  explicit DescribeDBInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponse() = default;
};
class DescribeDBVersionInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceMode{};
  shared_ptr<string> DBVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DescribeDBVersionInfosRequest() {}

  explicit DescribeDBVersionInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceMode) {
      res["DBInstanceMode"] = boost::any(*DBInstanceMode);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceMode") != m.end() && !m["DBInstanceMode"].empty()) {
      DBInstanceMode = make_shared<string>(boost::any_cast<string>(m["DBInstanceMode"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeDBVersionInfosRequest() = default;
};
class DescribeDBVersionInfosResponseBodyVersionDetails : public Darabonba::Model {
public:
  shared_ptr<boost::any> serverless{};
  shared_ptr<boost::any> storageElastic{};

  DescribeDBVersionInfosResponseBodyVersionDetails() {}

  explicit DescribeDBVersionInfosResponseBodyVersionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverless) {
      res["Serverless"] = boost::any(*serverless);
    }
    if (storageElastic) {
      res["StorageElastic"] = boost::any(*storageElastic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Serverless") != m.end() && !m["Serverless"].empty()) {
      serverless = make_shared<boost::any>(boost::any_cast<boost::any>(m["Serverless"]));
    }
    if (m.find("StorageElastic") != m.end() && !m["StorageElastic"].empty()) {
      storageElastic = make_shared<boost::any>(boost::any_cast<boost::any>(m["StorageElastic"]));
    }
  }


  virtual ~DescribeDBVersionInfosResponseBodyVersionDetails() = default;
};
class DescribeDBVersionInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBVersionInfosResponseBodyVersionDetails> versionDetails{};

  DescribeDBVersionInfosResponseBody() {}

  explicit DescribeDBVersionInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versionDetails) {
      res["VersionDetails"] = versionDetails ? boost::any(versionDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VersionDetails") != m.end() && !m["VersionDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["VersionDetails"].type()) {
        DescribeDBVersionInfosResponseBodyVersionDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VersionDetails"]));
        versionDetails = make_shared<DescribeDBVersionInfosResponseBodyVersionDetails>(model1);
      }
    }
  }


  virtual ~DescribeDBVersionInfosResponseBody() = default;
};
class DescribeDBVersionInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBVersionInfosResponseBody> body{};

  DescribeDBVersionInfosResponse() {}

  explicit DescribeDBVersionInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBVersionInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBVersionInfosResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBVersionInfosResponse() = default;
};
class DescribeDataBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> dataType{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};

  DescribeDataBackupsRequest() {}

  explicit DescribeDataBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDataBackupsRequest() = default;
};
class DescribeDataBackupsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupEndTimeLocal{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupSetId{};
  shared_ptr<long> backupSize{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStartTimeLocal{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> baksetName{};
  shared_ptr<long> consistentTime{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> dataType{};

  DescribeDataBackupsResponseBodyItems() {}

  explicit DescribeDataBackupsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupEndTimeLocal) {
      res["BackupEndTimeLocal"] = boost::any(*backupEndTimeLocal);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStartTimeLocal) {
      res["BackupStartTimeLocal"] = boost::any(*backupStartTimeLocal);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (baksetName) {
      res["BaksetName"] = boost::any(*baksetName);
    }
    if (consistentTime) {
      res["ConsistentTime"] = boost::any(*consistentTime);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupEndTimeLocal") != m.end() && !m["BackupEndTimeLocal"].empty()) {
      backupEndTimeLocal = make_shared<string>(boost::any_cast<string>(m["BackupEndTimeLocal"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStartTimeLocal") != m.end() && !m["BackupStartTimeLocal"].empty()) {
      backupStartTimeLocal = make_shared<string>(boost::any_cast<string>(m["BackupStartTimeLocal"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BaksetName") != m.end() && !m["BaksetName"].empty()) {
      baksetName = make_shared<string>(boost::any_cast<string>(m["BaksetName"]));
    }
    if (m.find("ConsistentTime") != m.end() && !m["ConsistentTime"].empty()) {
      consistentTime = make_shared<long>(boost::any_cast<long>(m["ConsistentTime"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
  }


  virtual ~DescribeDataBackupsResponseBodyItems() = default;
};
class DescribeDataBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataBackupsResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalBackupSize{};
  shared_ptr<long> totalCount{};

  DescribeDataBackupsResponseBody() {}

  explicit DescribeDataBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (totalBackupSize) {
      res["TotalBackupSize"] = boost::any(*totalBackupSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDataBackupsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataBackupsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDataBackupsResponseBodyItems>>(expect1);
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
    if (m.find("TotalBackupSize") != m.end() && !m["TotalBackupSize"].empty()) {
      totalBackupSize = make_shared<long>(boost::any_cast<long>(m["TotalBackupSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDataBackupsResponseBody() = default;
};
class DescribeDataBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataBackupsResponseBody> body{};

  DescribeDataBackupsResponse() {}

  explicit DescribeDataBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataBackupsResponse() = default;
};
class DescribeDataReDistributeInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};

  DescribeDataReDistributeInfoRequest() {}

  explicit DescribeDataReDistributeInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeDataReDistributeInfoRequest() = default;
};
class DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<long> progress{};
  shared_ptr<string> remainTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo() {}

  explicit DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (remainTime) {
      res["RemainTime"] = boost::any(*remainTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RemainTime") != m.end() && !m["RemainTime"].empty()) {
      remainTime = make_shared<string>(boost::any_cast<string>(m["RemainTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo() = default;
};
class DescribeDataReDistributeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo> dataReDistributeInfo{};
  shared_ptr<string> requestId{};

  DescribeDataReDistributeInfoResponseBody() {}

  explicit DescribeDataReDistributeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataReDistributeInfo) {
      res["DataReDistributeInfo"] = dataReDistributeInfo ? boost::any(dataReDistributeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataReDistributeInfo") != m.end() && !m["DataReDistributeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataReDistributeInfo"].type()) {
        DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataReDistributeInfo"]));
        dataReDistributeInfo = make_shared<DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDataReDistributeInfoResponseBody() = default;
};
class DescribeDataReDistributeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataReDistributeInfoResponseBody> body{};

  DescribeDataReDistributeInfoResponse() {}

  explicit DescribeDataReDistributeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataReDistributeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataReDistributeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataReDistributeInfoResponse() = default;
};
class DescribeDataShareInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> searchValue{};

  DescribeDataShareInstancesRequest() {}

  explicit DescribeDataShareInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (searchValue) {
      res["SearchValue"] = boost::any(*searchValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SearchValue") != m.end() && !m["SearchValue"].empty()) {
      searchValue = make_shared<string>(boost::any_cast<string>(m["SearchValue"]));
    }
  }


  virtual ~DescribeDataShareInstancesRequest() = default;
};
class DescribeDataShareInstancesResponseBodyItemsDBInstance : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceMode{};
  shared_ptr<string> dataShareStatus{};
  shared_ptr<string> description{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeDataShareInstancesResponseBodyItemsDBInstance() {}

  explicit DescribeDataShareInstancesResponseBodyItemsDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceMode) {
      res["DBInstanceMode"] = boost::any(*DBInstanceMode);
    }
    if (dataShareStatus) {
      res["DataShareStatus"] = boost::any(*dataShareStatus);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceMode") != m.end() && !m["DBInstanceMode"].empty()) {
      DBInstanceMode = make_shared<string>(boost::any_cast<string>(m["DBInstanceMode"]));
    }
    if (m.find("DataShareStatus") != m.end() && !m["DataShareStatus"].empty()) {
      dataShareStatus = make_shared<string>(boost::any_cast<string>(m["DataShareStatus"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDataShareInstancesResponseBodyItemsDBInstance() = default;
};
class DescribeDataShareInstancesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataShareInstancesResponseBodyItemsDBInstance>> DBInstance{};

  DescribeDataShareInstancesResponseBodyItems() {}

  explicit DescribeDataShareInstancesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstance) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstance"].type()) {
        vector<DescribeDataShareInstancesResponseBodyItemsDBInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataShareInstancesResponseBodyItemsDBInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstance = make_shared<vector<DescribeDataShareInstancesResponseBodyItemsDBInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDataShareInstancesResponseBodyItems() = default;
};
class DescribeDataShareInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDataShareInstancesResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeDataShareInstancesResponseBody() {}

  explicit DescribeDataShareInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDataShareInstancesResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDataShareInstancesResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeDataShareInstancesResponseBody() = default;
};
class DescribeDataShareInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataShareInstancesResponseBody> body{};

  DescribeDataShareInstancesResponse() {}

  explicit DescribeDataShareInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataShareInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataShareInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataShareInstancesResponse() = default;
};
class DescribeDataSharePerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> startTime{};

  DescribeDataSharePerformanceRequest() {}

  explicit DescribeDataSharePerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDataSharePerformanceRequest() = default;
};
class DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> point{};

  DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues() {}

  explicit DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (point) {
      res["Point"] = boost::any(*point);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Point") != m.end() && !m["Point"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Point"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Point"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      point = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues() = default;
};
class DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues>> values{};

  DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries() {}

  explicit DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<DescribeDataSharePerformanceResponseBodyPerformanceKeysSeriesValues>>(expect1);
      }
    }
  }


  virtual ~DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries() = default;
};
class DescribeDataSharePerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries>> series{};
  shared_ptr<string> unit{};

  DescribeDataSharePerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeDataSharePerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DescribeDataSharePerformanceResponseBodyPerformanceKeysSeries>>(expect1);
      }
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~DescribeDataSharePerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeDataSharePerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<DescribeDataSharePerformanceResponseBodyPerformanceKeys>> performanceKeys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDataSharePerformanceResponseBody() {}

  explicit DescribeDataSharePerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performanceKeys) {
      vector<boost::any> temp1;
      for(auto item1:*performanceKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceKeys"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceKeys"].type()) {
        vector<DescribeDataSharePerformanceResponseBodyPerformanceKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataSharePerformanceResponseBodyPerformanceKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceKeys = make_shared<vector<DescribeDataSharePerformanceResponseBodyPerformanceKeys>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDataSharePerformanceResponseBody() = default;
};
class DescribeDataSharePerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataSharePerformanceResponseBody> body{};

  DescribeDataSharePerformanceResponse() {}

  explicit DescribeDataSharePerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataSharePerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataSharePerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataSharePerformanceResponse() = default;
};
class DescribeDiagnosisDimensionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeDiagnosisDimensionsRequest() {}

  explicit DescribeDiagnosisDimensionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDiagnosisDimensionsRequest() = default;
};
class DescribeDiagnosisDimensionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> databases{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> userNames{};

  DescribeDiagnosisDimensionsResponseBody() {}

  explicit DescribeDiagnosisDimensionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databases) {
      res["Databases"] = boost::any(*databases);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userNames) {
      res["UserNames"] = boost::any(*userNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Databases") != m.end() && !m["Databases"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Databases"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Databases"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      databases = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserNames") != m.end() && !m["UserNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDiagnosisDimensionsResponseBody() = default;
};
class DescribeDiagnosisDimensionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiagnosisDimensionsResponseBody> body{};

  DescribeDiagnosisDimensionsResponse() {}

  explicit DescribeDiagnosisDimensionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiagnosisDimensionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiagnosisDimensionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiagnosisDimensionsResponse() = default;
};
class DescribeDiagnosisMonitorPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> queryCondition{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DescribeDiagnosisMonitorPerformanceRequest() {}

  explicit DescribeDiagnosisMonitorPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (queryCondition) {
      res["QueryCondition"] = boost::any(*queryCondition);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("QueryCondition") != m.end() && !m["QueryCondition"].empty()) {
      queryCondition = make_shared<string>(boost::any_cast<string>(m["QueryCondition"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeDiagnosisMonitorPerformanceRequest() = default;
};
class DescribeDiagnosisMonitorPerformanceResponseBodyPerformances : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> database{};
  shared_ptr<string> queryID{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> user{};

  DescribeDiagnosisMonitorPerformanceResponseBodyPerformances() {}

  explicit DescribeDiagnosisMonitorPerformanceResponseBodyPerformances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (queryID) {
      res["QueryID"] = boost::any(*queryID);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["Cost"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("QueryID") != m.end() && !m["QueryID"].empty()) {
      queryID = make_shared<string>(boost::any_cast<string>(m["QueryID"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeDiagnosisMonitorPerformanceResponseBodyPerformances() = default;
};
class DescribeDiagnosisMonitorPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances>> performances{};
  shared_ptr<long> performancesThreshold{};
  shared_ptr<bool> performancesTruncated{};
  shared_ptr<string> requestId{};

  DescribeDiagnosisMonitorPerformanceResponseBody() {}

  explicit DescribeDiagnosisMonitorPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performances) {
      vector<boost::any> temp1;
      for(auto item1:*performances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Performances"] = boost::any(temp1);
    }
    if (performancesThreshold) {
      res["PerformancesThreshold"] = boost::any(*performancesThreshold);
    }
    if (performancesTruncated) {
      res["PerformancesTruncated"] = boost::any(*performancesTruncated);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Performances") != m.end() && !m["Performances"].empty()) {
      if (typeid(vector<boost::any>) == m["Performances"].type()) {
        vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Performances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiagnosisMonitorPerformanceResponseBodyPerformances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performances = make_shared<vector<DescribeDiagnosisMonitorPerformanceResponseBodyPerformances>>(expect1);
      }
    }
    if (m.find("PerformancesThreshold") != m.end() && !m["PerformancesThreshold"].empty()) {
      performancesThreshold = make_shared<long>(boost::any_cast<long>(m["PerformancesThreshold"]));
    }
    if (m.find("PerformancesTruncated") != m.end() && !m["PerformancesTruncated"].empty()) {
      performancesTruncated = make_shared<bool>(boost::any_cast<bool>(m["PerformancesTruncated"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDiagnosisMonitorPerformanceResponseBody() = default;
};
class DescribeDiagnosisMonitorPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiagnosisMonitorPerformanceResponseBody> body{};

  DescribeDiagnosisMonitorPerformanceResponse() {}

  explicit DescribeDiagnosisMonitorPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiagnosisMonitorPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiagnosisMonitorPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiagnosisMonitorPerformanceResponse() = default;
};
class DescribeDiagnosisRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryCondition{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DescribeDiagnosisRecordsRequest() {}

  explicit DescribeDiagnosisRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryCondition) {
      res["QueryCondition"] = boost::any(*queryCondition);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryCondition") != m.end() && !m["QueryCondition"].empty()) {
      queryCondition = make_shared<string>(boost::any_cast<string>(m["QueryCondition"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeDiagnosisRecordsRequest() = default;
};
class DescribeDiagnosisRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<long> duration{};
  shared_ptr<string> queryID{};
  shared_ptr<string> SQLStmt{};
  shared_ptr<bool> SQLTruncated{};
  shared_ptr<long> SQLTruncatedThreshold{};
  shared_ptr<string> sessionID{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> user{};

  DescribeDiagnosisRecordsResponseBodyItems() {}

  explicit DescribeDiagnosisRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (queryID) {
      res["QueryID"] = boost::any(*queryID);
    }
    if (SQLStmt) {
      res["SQLStmt"] = boost::any(*SQLStmt);
    }
    if (SQLTruncated) {
      res["SQLTruncated"] = boost::any(*SQLTruncated);
    }
    if (SQLTruncatedThreshold) {
      res["SQLTruncatedThreshold"] = boost::any(*SQLTruncatedThreshold);
    }
    if (sessionID) {
      res["SessionID"] = boost::any(*sessionID);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("QueryID") != m.end() && !m["QueryID"].empty()) {
      queryID = make_shared<string>(boost::any_cast<string>(m["QueryID"]));
    }
    if (m.find("SQLStmt") != m.end() && !m["SQLStmt"].empty()) {
      SQLStmt = make_shared<string>(boost::any_cast<string>(m["SQLStmt"]));
    }
    if (m.find("SQLTruncated") != m.end() && !m["SQLTruncated"].empty()) {
      SQLTruncated = make_shared<bool>(boost::any_cast<bool>(m["SQLTruncated"]));
    }
    if (m.find("SQLTruncatedThreshold") != m.end() && !m["SQLTruncatedThreshold"].empty()) {
      SQLTruncatedThreshold = make_shared<long>(boost::any_cast<long>(m["SQLTruncatedThreshold"]));
    }
    if (m.find("SessionID") != m.end() && !m["SessionID"].empty()) {
      sessionID = make_shared<string>(boost::any_cast<string>(m["SessionID"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeDiagnosisRecordsResponseBodyItems() = default;
};
class DescribeDiagnosisRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDiagnosisRecordsResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDiagnosisRecordsResponseBody() {}

  explicit DescribeDiagnosisRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDiagnosisRecordsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDiagnosisRecordsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDiagnosisRecordsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDiagnosisRecordsResponseBody() = default;
};
class DescribeDiagnosisRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiagnosisRecordsResponseBody> body{};

  DescribeDiagnosisRecordsResponse() {}

  explicit DescribeDiagnosisRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiagnosisRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiagnosisRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiagnosisRecordsResponse() = default;
};
class DescribeDiagnosisSQLInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> queryID{};

  DescribeDiagnosisSQLInfoRequest() {}

  explicit DescribeDiagnosisSQLInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (queryID) {
      res["QueryID"] = boost::any(*queryID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("QueryID") != m.end() && !m["QueryID"].empty()) {
      queryID = make_shared<string>(boost::any_cast<string>(m["QueryID"]));
    }
  }


  virtual ~DescribeDiagnosisSQLInfoRequest() = default;
};
class DescribeDiagnosisSQLInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<long> duration{};
  shared_ptr<string> maxOutputRows{};
  shared_ptr<string> queryID{};
  shared_ptr<string> queryPlan{};
  shared_ptr<string> requestId{};
  shared_ptr<string> SQLStmt{};
  shared_ptr<string> sessionID{};
  shared_ptr<string> sortedMetrics{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> textPlan{};
  shared_ptr<string> user{};

  DescribeDiagnosisSQLInfoResponseBody() {}

  explicit DescribeDiagnosisSQLInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (maxOutputRows) {
      res["MaxOutputRows"] = boost::any(*maxOutputRows);
    }
    if (queryID) {
      res["QueryID"] = boost::any(*queryID);
    }
    if (queryPlan) {
      res["QueryPlan"] = boost::any(*queryPlan);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SQLStmt) {
      res["SQLStmt"] = boost::any(*SQLStmt);
    }
    if (sessionID) {
      res["SessionID"] = boost::any(*sessionID);
    }
    if (sortedMetrics) {
      res["SortedMetrics"] = boost::any(*sortedMetrics);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (textPlan) {
      res["TextPlan"] = boost::any(*textPlan);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("MaxOutputRows") != m.end() && !m["MaxOutputRows"].empty()) {
      maxOutputRows = make_shared<string>(boost::any_cast<string>(m["MaxOutputRows"]));
    }
    if (m.find("QueryID") != m.end() && !m["QueryID"].empty()) {
      queryID = make_shared<string>(boost::any_cast<string>(m["QueryID"]));
    }
    if (m.find("QueryPlan") != m.end() && !m["QueryPlan"].empty()) {
      queryPlan = make_shared<string>(boost::any_cast<string>(m["QueryPlan"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SQLStmt") != m.end() && !m["SQLStmt"].empty()) {
      SQLStmt = make_shared<string>(boost::any_cast<string>(m["SQLStmt"]));
    }
    if (m.find("SessionID") != m.end() && !m["SessionID"].empty()) {
      sessionID = make_shared<string>(boost::any_cast<string>(m["SessionID"]));
    }
    if (m.find("SortedMetrics") != m.end() && !m["SortedMetrics"].empty()) {
      sortedMetrics = make_shared<string>(boost::any_cast<string>(m["SortedMetrics"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TextPlan") != m.end() && !m["TextPlan"].empty()) {
      textPlan = make_shared<string>(boost::any_cast<string>(m["TextPlan"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeDiagnosisSQLInfoResponseBody() = default;
};
class DescribeDiagnosisSQLInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiagnosisSQLInfoResponseBody> body{};

  DescribeDiagnosisSQLInfoResponse() {}

  explicit DescribeDiagnosisSQLInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDiagnosisSQLInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiagnosisSQLInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiagnosisSQLInfoResponse() = default;
};
class DescribeDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  DescribeDocumentRequest() {}

  explicit DescribeDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDocumentRequest() = default;
};
class DescribeDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> docsCount{};
  shared_ptr<string> documentLoader{};
  shared_ptr<string> fileExt{};
  shared_ptr<string> fileMd5{};
  shared_ptr<string> fileMtime{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileSize{};
  shared_ptr<long> fileVersion{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> textSplitter{};

  DescribeDocumentResponseBody() {}

  explicit DescribeDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docsCount) {
      res["DocsCount"] = boost::any(*docsCount);
    }
    if (documentLoader) {
      res["DocumentLoader"] = boost::any(*documentLoader);
    }
    if (fileExt) {
      res["FileExt"] = boost::any(*fileExt);
    }
    if (fileMd5) {
      res["FileMd5"] = boost::any(*fileMd5);
    }
    if (fileMtime) {
      res["FileMtime"] = boost::any(*fileMtime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileVersion) {
      res["FileVersion"] = boost::any(*fileVersion);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (textSplitter) {
      res["TextSplitter"] = boost::any(*textSplitter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocsCount") != m.end() && !m["DocsCount"].empty()) {
      docsCount = make_shared<long>(boost::any_cast<long>(m["DocsCount"]));
    }
    if (m.find("DocumentLoader") != m.end() && !m["DocumentLoader"].empty()) {
      documentLoader = make_shared<string>(boost::any_cast<string>(m["DocumentLoader"]));
    }
    if (m.find("FileExt") != m.end() && !m["FileExt"].empty()) {
      fileExt = make_shared<string>(boost::any_cast<string>(m["FileExt"]));
    }
    if (m.find("FileMd5") != m.end() && !m["FileMd5"].empty()) {
      fileMd5 = make_shared<string>(boost::any_cast<string>(m["FileMd5"]));
    }
    if (m.find("FileMtime") != m.end() && !m["FileMtime"].empty()) {
      fileMtime = make_shared<string>(boost::any_cast<string>(m["FileMtime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileVersion") != m.end() && !m["FileVersion"].empty()) {
      fileVersion = make_shared<long>(boost::any_cast<long>(m["FileVersion"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TextSplitter") != m.end() && !m["TextSplitter"].empty()) {
      textSplitter = make_shared<string>(boost::any_cast<string>(m["TextSplitter"]));
    }
  }


  virtual ~DescribeDocumentResponseBody() = default;
};
class DescribeDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDocumentResponseBody> body{};

  DescribeDocumentResponse() {}

  explicit DescribeDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDocumentResponse() = default;
};
class DescribeDownloadRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeDownloadRecordsRequest() {}

  explicit DescribeDownloadRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDownloadRecordsRequest() = default;
};
class DescribeDownloadRecordsResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<long> downloadId{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> exceptionMsg{};
  shared_ptr<string> fileName{};
  shared_ptr<string> status{};

  DescribeDownloadRecordsResponseBodyRecords() {}

  explicit DescribeDownloadRecordsResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadId) {
      res["DownloadId"] = boost::any(*downloadId);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (exceptionMsg) {
      res["ExceptionMsg"] = boost::any(*exceptionMsg);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadId") != m.end() && !m["DownloadId"].empty()) {
      downloadId = make_shared<long>(boost::any_cast<long>(m["DownloadId"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("ExceptionMsg") != m.end() && !m["ExceptionMsg"].empty()) {
      exceptionMsg = make_shared<string>(boost::any_cast<string>(m["ExceptionMsg"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDownloadRecordsResponseBodyRecords() = default;
};
class DescribeDownloadRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDownloadRecordsResponseBodyRecords>> records{};
  shared_ptr<string> requestId{};

  DescribeDownloadRecordsResponseBody() {}

  explicit DescribeDownloadRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribeDownloadRecordsResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDownloadRecordsResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeDownloadRecordsResponseBodyRecords>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDownloadRecordsResponseBody() = default;
};
class DescribeDownloadRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDownloadRecordsResponseBody> body{};

  DescribeDownloadRecordsResponse() {}

  explicit DescribeDownloadRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDownloadRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDownloadRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDownloadRecordsResponse() = default;
};
class DescribeDownloadSQLLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeDownloadSQLLogsRequest() {}

  explicit DescribeDownloadSQLLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDownloadSQLLogsRequest() = default;
};
class DescribeDownloadSQLLogsResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<long> downloadId{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> exceptionMsg{};
  shared_ptr<string> fileName{};
  shared_ptr<string> status{};

  DescribeDownloadSQLLogsResponseBodyRecords() {}

  explicit DescribeDownloadSQLLogsResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadId) {
      res["DownloadId"] = boost::any(*downloadId);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (exceptionMsg) {
      res["ExceptionMsg"] = boost::any(*exceptionMsg);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadId") != m.end() && !m["DownloadId"].empty()) {
      downloadId = make_shared<long>(boost::any_cast<long>(m["DownloadId"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("ExceptionMsg") != m.end() && !m["ExceptionMsg"].empty()) {
      exceptionMsg = make_shared<string>(boost::any_cast<string>(m["ExceptionMsg"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDownloadSQLLogsResponseBodyRecords() = default;
};
class DescribeDownloadSQLLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDownloadSQLLogsResponseBodyRecords>> records{};
  shared_ptr<string> requestId{};

  DescribeDownloadSQLLogsResponseBody() {}

  explicit DescribeDownloadSQLLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribeDownloadSQLLogsResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDownloadSQLLogsResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeDownloadSQLLogsResponseBodyRecords>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDownloadSQLLogsResponseBody() = default;
};
class DescribeDownloadSQLLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDownloadSQLLogsResponseBody> body{};

  DescribeDownloadSQLLogsResponse() {}

  explicit DescribeDownloadSQLLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDownloadSQLLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDownloadSQLLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDownloadSQLLogsResponse() = default;
};
class DescribeHealthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> key{};

  DescribeHealthStatusRequest() {}

  explicit DescribeHealthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~DescribeHealthStatusRequest() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb : public Darabonba::Model {
public:
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb : public Darabonba::Model {
public:
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb : public Darabonba::Model {
public:
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus() = default;
};
class DescribeHealthStatusResponseBodyStatusAdbpgStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusAdbpgStatus() {}

  explicit DescribeHealthStatusResponseBodyStatusAdbpgStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusAdbpgStatus() = default;
};
class DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus() {}

  explicit DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus() = default;
};
class DescribeHealthStatusResponseBodyStatusNodeMasterStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusNodeMasterStatus() {}

  explicit DescribeHealthStatusResponseBodyStatusNodeMasterStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusNodeMasterStatus() = default;
};
class DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus() {}

  explicit DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus() = default;
};
class DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<double> value{};

  DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus() {}

  explicit DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus() = default;
};
class DescribeHealthStatusResponseBodyStatus : public Darabonba::Model {
public:
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax> adbgpSegmentDiskUsagePercentMax{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus> adbpgConnectionStatus{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus> adbpgDiskStatus{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent> adbpgDiskUsagePercent{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb> adbpgInstanceColdDataGb{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb> adbpgInstanceHotDataGb{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb> adbpgInstanceTotalDataGb{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax> adbpgMasterDiskUsagePercentMax{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus> adbpgMasterStatus{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus> adbpgSegmentStatus{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusAdbpgStatus> adbpgStatus{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus> nodeMasterConnectionStatus{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusNodeMasterStatus> nodeMasterStatus{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus> nodeSegmentConnectionStatus{};
  shared_ptr<DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus> nodeSegmentDiskStatus{};

  DescribeHealthStatusResponseBodyStatus() {}

  explicit DescribeHealthStatusResponseBodyStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adbgpSegmentDiskUsagePercentMax) {
      res["adbgp_segment_disk_usage_percent_max"] = adbgpSegmentDiskUsagePercentMax ? boost::any(adbgpSegmentDiskUsagePercentMax->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgConnectionStatus) {
      res["adbpg_connection_status"] = adbpgConnectionStatus ? boost::any(adbpgConnectionStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgDiskStatus) {
      res["adbpg_disk_status"] = adbpgDiskStatus ? boost::any(adbpgDiskStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgDiskUsagePercent) {
      res["adbpg_disk_usage_percent"] = adbpgDiskUsagePercent ? boost::any(adbpgDiskUsagePercent->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgInstanceColdDataGb) {
      res["adbpg_instance_cold_data_gb"] = adbpgInstanceColdDataGb ? boost::any(adbpgInstanceColdDataGb->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgInstanceHotDataGb) {
      res["adbpg_instance_hot_data_gb"] = adbpgInstanceHotDataGb ? boost::any(adbpgInstanceHotDataGb->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgInstanceTotalDataGb) {
      res["adbpg_instance_total_data_gb"] = adbpgInstanceTotalDataGb ? boost::any(adbpgInstanceTotalDataGb->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgMasterDiskUsagePercentMax) {
      res["adbpg_master_disk_usage_percent_max"] = adbpgMasterDiskUsagePercentMax ? boost::any(adbpgMasterDiskUsagePercentMax->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgMasterStatus) {
      res["adbpg_master_status"] = adbpgMasterStatus ? boost::any(adbpgMasterStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgSegmentStatus) {
      res["adbpg_segment_status"] = adbpgSegmentStatus ? boost::any(adbpgSegmentStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (adbpgStatus) {
      res["adbpg_status"] = adbpgStatus ? boost::any(adbpgStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeMasterConnectionStatus) {
      res["node_master_connection_status"] = nodeMasterConnectionStatus ? boost::any(nodeMasterConnectionStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeMasterStatus) {
      res["node_master_status"] = nodeMasterStatus ? boost::any(nodeMasterStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeSegmentConnectionStatus) {
      res["node_segment_connection_status"] = nodeSegmentConnectionStatus ? boost::any(nodeSegmentConnectionStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeSegmentDiskStatus) {
      res["node_segment_disk_status"] = nodeSegmentDiskStatus ? boost::any(nodeSegmentDiskStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("adbgp_segment_disk_usage_percent_max") != m.end() && !m["adbgp_segment_disk_usage_percent_max"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbgp_segment_disk_usage_percent_max"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbgp_segment_disk_usage_percent_max"]));
        adbgpSegmentDiskUsagePercentMax = make_shared<DescribeHealthStatusResponseBodyStatusAdbgpSegmentDiskUsagePercentMax>(model1);
      }
    }
    if (m.find("adbpg_connection_status") != m.end() && !m["adbpg_connection_status"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_connection_status"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_connection_status"]));
        adbpgConnectionStatus = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgConnectionStatus>(model1);
      }
    }
    if (m.find("adbpg_disk_status") != m.end() && !m["adbpg_disk_status"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_disk_status"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_disk_status"]));
        adbpgDiskStatus = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgDiskStatus>(model1);
      }
    }
    if (m.find("adbpg_disk_usage_percent") != m.end() && !m["adbpg_disk_usage_percent"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_disk_usage_percent"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_disk_usage_percent"]));
        adbpgDiskUsagePercent = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgDiskUsagePercent>(model1);
      }
    }
    if (m.find("adbpg_instance_cold_data_gb") != m.end() && !m["adbpg_instance_cold_data_gb"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_instance_cold_data_gb"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_instance_cold_data_gb"]));
        adbpgInstanceColdDataGb = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgInstanceColdDataGb>(model1);
      }
    }
    if (m.find("adbpg_instance_hot_data_gb") != m.end() && !m["adbpg_instance_hot_data_gb"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_instance_hot_data_gb"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_instance_hot_data_gb"]));
        adbpgInstanceHotDataGb = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgInstanceHotDataGb>(model1);
      }
    }
    if (m.find("adbpg_instance_total_data_gb") != m.end() && !m["adbpg_instance_total_data_gb"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_instance_total_data_gb"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_instance_total_data_gb"]));
        adbpgInstanceTotalDataGb = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgInstanceTotalDataGb>(model1);
      }
    }
    if (m.find("adbpg_master_disk_usage_percent_max") != m.end() && !m["adbpg_master_disk_usage_percent_max"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_master_disk_usage_percent_max"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_master_disk_usage_percent_max"]));
        adbpgMasterDiskUsagePercentMax = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgMasterDiskUsagePercentMax>(model1);
      }
    }
    if (m.find("adbpg_master_status") != m.end() && !m["adbpg_master_status"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_master_status"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_master_status"]));
        adbpgMasterStatus = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgMasterStatus>(model1);
      }
    }
    if (m.find("adbpg_segment_status") != m.end() && !m["adbpg_segment_status"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_segment_status"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_segment_status"]));
        adbpgSegmentStatus = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgSegmentStatus>(model1);
      }
    }
    if (m.find("adbpg_status") != m.end() && !m["adbpg_status"].empty()) {
      if (typeid(map<string, boost::any>) == m["adbpg_status"].type()) {
        DescribeHealthStatusResponseBodyStatusAdbpgStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["adbpg_status"]));
        adbpgStatus = make_shared<DescribeHealthStatusResponseBodyStatusAdbpgStatus>(model1);
      }
    }
    if (m.find("node_master_connection_status") != m.end() && !m["node_master_connection_status"].empty()) {
      if (typeid(map<string, boost::any>) == m["node_master_connection_status"].type()) {
        DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["node_master_connection_status"]));
        nodeMasterConnectionStatus = make_shared<DescribeHealthStatusResponseBodyStatusNodeMasterConnectionStatus>(model1);
      }
    }
    if (m.find("node_master_status") != m.end() && !m["node_master_status"].empty()) {
      if (typeid(map<string, boost::any>) == m["node_master_status"].type()) {
        DescribeHealthStatusResponseBodyStatusNodeMasterStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["node_master_status"]));
        nodeMasterStatus = make_shared<DescribeHealthStatusResponseBodyStatusNodeMasterStatus>(model1);
      }
    }
    if (m.find("node_segment_connection_status") != m.end() && !m["node_segment_connection_status"].empty()) {
      if (typeid(map<string, boost::any>) == m["node_segment_connection_status"].type()) {
        DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["node_segment_connection_status"]));
        nodeSegmentConnectionStatus = make_shared<DescribeHealthStatusResponseBodyStatusNodeSegmentConnectionStatus>(model1);
      }
    }
    if (m.find("node_segment_disk_status") != m.end() && !m["node_segment_disk_status"].empty()) {
      if (typeid(map<string, boost::any>) == m["node_segment_disk_status"].type()) {
        DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["node_segment_disk_status"]));
        nodeSegmentDiskStatus = make_shared<DescribeHealthStatusResponseBodyStatusNodeSegmentDiskStatus>(model1);
      }
    }
  }


  virtual ~DescribeHealthStatusResponseBodyStatus() = default;
};
class DescribeHealthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeHealthStatusResponseBodyStatus> status{};

  DescribeHealthStatusResponseBody() {}

  explicit DescribeHealthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        DescribeHealthStatusResponseBodyStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<DescribeHealthStatusResponseBodyStatus>(model1);
      }
    }
  }


  virtual ~DescribeHealthStatusResponseBody() = default;
};
class DescribeHealthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHealthStatusResponseBody> body{};

  DescribeHealthStatusResponse() {}

  explicit DescribeHealthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHealthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHealthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHealthStatusResponse() = default;
};
class DescribeIMVInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> MVName{};

  DescribeIMVInfosRequest() {}

  explicit DescribeIMVInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (MVName) {
      res["MVName"] = boost::any(*MVName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("MVName") != m.end() && !m["MVName"].empty()) {
      MVName = make_shared<string>(boost::any_cast<string>(m["MVName"]));
    }
  }


  virtual ~DescribeIMVInfosRequest() = default;
};
class DescribeIMVInfosResponseBodyImvInfos : public Darabonba::Model {
public:
  shared_ptr<string> base{};
  shared_ptr<string> detailInfo{};
  shared_ptr<string> MV{};

  DescribeIMVInfosResponseBodyImvInfos() {}

  explicit DescribeIMVInfosResponseBodyImvInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (base) {
      res["Base"] = boost::any(*base);
    }
    if (detailInfo) {
      res["DetailInfo"] = boost::any(*detailInfo);
    }
    if (MV) {
      res["MV"] = boost::any(*MV);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Base") != m.end() && !m["Base"].empty()) {
      base = make_shared<string>(boost::any_cast<string>(m["Base"]));
    }
    if (m.find("DetailInfo") != m.end() && !m["DetailInfo"].empty()) {
      detailInfo = make_shared<string>(boost::any_cast<string>(m["DetailInfo"]));
    }
    if (m.find("MV") != m.end() && !m["MV"].empty()) {
      MV = make_shared<string>(boost::any_cast<string>(m["MV"]));
    }
  }


  virtual ~DescribeIMVInfosResponseBodyImvInfos() = default;
};
class DescribeIMVInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<vector<DescribeIMVInfosResponseBodyImvInfos>> imvInfos{};
  shared_ptr<string> requestId{};

  DescribeIMVInfosResponseBody() {}

  explicit DescribeIMVInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (imvInfos) {
      vector<boost::any> temp1;
      for(auto item1:*imvInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImvInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ImvInfos") != m.end() && !m["ImvInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ImvInfos"].type()) {
        vector<DescribeIMVInfosResponseBodyImvInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImvInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIMVInfosResponseBodyImvInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imvInfos = make_shared<vector<DescribeIMVInfosResponseBodyImvInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeIMVInfosResponseBody() = default;
};
class DescribeIMVInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIMVInfosResponseBody> body{};

  DescribeIMVInfosResponse() {}

  explicit DescribeIMVInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIMVInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIMVInfosResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIMVInfosResponse() = default;
};
class DescribeLogBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};

  DescribeLogBackupsRequest() {}

  explicit DescribeLogBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeLogBackupsRequest() = default;
};
class DescribeLogBackupsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> logFileName{};
  shared_ptr<long> logFileSize{};
  shared_ptr<string> logTime{};
  shared_ptr<string> segmentName{};

  DescribeLogBackupsResponseBodyItems() {}

  explicit DescribeLogBackupsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (logFileName) {
      res["LogFileName"] = boost::any(*logFileName);
    }
    if (logFileSize) {
      res["LogFileSize"] = boost::any(*logFileSize);
    }
    if (logTime) {
      res["LogTime"] = boost::any(*logTime);
    }
    if (segmentName) {
      res["SegmentName"] = boost::any(*segmentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("LogFileName") != m.end() && !m["LogFileName"].empty()) {
      logFileName = make_shared<string>(boost::any_cast<string>(m["LogFileName"]));
    }
    if (m.find("LogFileSize") != m.end() && !m["LogFileSize"].empty()) {
      logFileSize = make_shared<long>(boost::any_cast<long>(m["LogFileSize"]));
    }
    if (m.find("LogTime") != m.end() && !m["LogTime"].empty()) {
      logTime = make_shared<string>(boost::any_cast<string>(m["LogTime"]));
    }
    if (m.find("SegmentName") != m.end() && !m["SegmentName"].empty()) {
      segmentName = make_shared<string>(boost::any_cast<string>(m["SegmentName"]));
    }
  }


  virtual ~DescribeLogBackupsResponseBodyItems() = default;
};
class DescribeLogBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLogBackupsResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalLogSize{};

  DescribeLogBackupsResponseBody() {}

  explicit DescribeLogBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (totalLogSize) {
      res["TotalLogSize"] = boost::any(*totalLogSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeLogBackupsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogBackupsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeLogBackupsResponseBodyItems>>(expect1);
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
    if (m.find("TotalLogSize") != m.end() && !m["TotalLogSize"].empty()) {
      totalLogSize = make_shared<long>(boost::any_cast<long>(m["TotalLogSize"]));
    }
  }


  virtual ~DescribeLogBackupsResponseBody() = default;
};
class DescribeLogBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLogBackupsResponseBody> body{};

  DescribeLogBackupsResponse() {}

  explicit DescribeLogBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogBackupsResponse() = default;
};
class DescribeModifyParameterLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  DescribeModifyParameterLogRequest() {}

  explicit DescribeModifyParameterLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeModifyParameterLogRequest() = default;
};
class DescribeModifyParameterLogResponseBodyChangelogs : public Darabonba::Model {
public:
  shared_ptr<string> effectTime{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValid{};
  shared_ptr<string> parameterValueAfter{};
  shared_ptr<string> parameterValueBefore{};

  DescribeModifyParameterLogResponseBodyChangelogs() {}

  explicit DescribeModifyParameterLogResponseBodyChangelogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectTime) {
      res["EffectTime"] = boost::any(*effectTime);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValid) {
      res["ParameterValid"] = boost::any(*parameterValid);
    }
    if (parameterValueAfter) {
      res["ParameterValueAfter"] = boost::any(*parameterValueAfter);
    }
    if (parameterValueBefore) {
      res["ParameterValueBefore"] = boost::any(*parameterValueBefore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EffectTime") != m.end() && !m["EffectTime"].empty()) {
      effectTime = make_shared<string>(boost::any_cast<string>(m["EffectTime"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValid") != m.end() && !m["ParameterValid"].empty()) {
      parameterValid = make_shared<string>(boost::any_cast<string>(m["ParameterValid"]));
    }
    if (m.find("ParameterValueAfter") != m.end() && !m["ParameterValueAfter"].empty()) {
      parameterValueAfter = make_shared<string>(boost::any_cast<string>(m["ParameterValueAfter"]));
    }
    if (m.find("ParameterValueBefore") != m.end() && !m["ParameterValueBefore"].empty()) {
      parameterValueBefore = make_shared<string>(boost::any_cast<string>(m["ParameterValueBefore"]));
    }
  }


  virtual ~DescribeModifyParameterLogResponseBodyChangelogs() = default;
};
class DescribeModifyParameterLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeModifyParameterLogResponseBodyChangelogs>> changelogs{};
  shared_ptr<string> requestId{};

  DescribeModifyParameterLogResponseBody() {}

  explicit DescribeModifyParameterLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (changelogs) {
      vector<boost::any> temp1;
      for(auto item1:*changelogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Changelogs"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Changelogs") != m.end() && !m["Changelogs"].empty()) {
      if (typeid(vector<boost::any>) == m["Changelogs"].type()) {
        vector<DescribeModifyParameterLogResponseBodyChangelogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Changelogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeModifyParameterLogResponseBodyChangelogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changelogs = make_shared<vector<DescribeModifyParameterLogResponseBodyChangelogs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeModifyParameterLogResponseBody() = default;
};
class DescribeModifyParameterLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeModifyParameterLogResponseBody> body{};

  DescribeModifyParameterLogResponse() {}

  explicit DescribeModifyParameterLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeModifyParameterLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeModifyParameterLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeModifyParameterLogResponse() = default;
};
class DescribeNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  DescribeNamespaceRequest() {}

  explicit DescribeNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeNamespaceRequest() = default;
};
class DescribeNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> namespace_{};
  shared_ptr<map<string, string>> namespaceInfo{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeNamespaceResponseBody() {}

  explicit DescribeNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceInfo) {
      res["NamespaceInfo"] = boost::any(*namespaceInfo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceInfo") != m.end() && !m["NamespaceInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["NamespaceInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      namespaceInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeNamespaceResponseBody() = default;
};
class DescribeNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNamespaceResponseBody> body{};

  DescribeNamespaceResponse() {}

  explicit DescribeNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNamespaceResponse() = default;
};
class DescribeParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeParametersRequest() {}

  explicit DescribeParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeParametersRequest() = default;
};
class DescribeParametersResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> currentValue{};
  shared_ptr<string> forceRestartInstance{};
  shared_ptr<string> isChangeableConfig{};
  shared_ptr<string> optionalRange{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParametersResponseBodyParameters() {}

  explicit DescribeParametersResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentValue) {
      res["CurrentValue"] = boost::any(*currentValue);
    }
    if (forceRestartInstance) {
      res["ForceRestartInstance"] = boost::any(*forceRestartInstance);
    }
    if (isChangeableConfig) {
      res["IsChangeableConfig"] = boost::any(*isChangeableConfig);
    }
    if (optionalRange) {
      res["OptionalRange"] = boost::any(*optionalRange);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentValue") != m.end() && !m["CurrentValue"].empty()) {
      currentValue = make_shared<string>(boost::any_cast<string>(m["CurrentValue"]));
    }
    if (m.find("ForceRestartInstance") != m.end() && !m["ForceRestartInstance"].empty()) {
      forceRestartInstance = make_shared<string>(boost::any_cast<string>(m["ForceRestartInstance"]));
    }
    if (m.find("IsChangeableConfig") != m.end() && !m["IsChangeableConfig"].empty()) {
      isChangeableConfig = make_shared<string>(boost::any_cast<string>(m["IsChangeableConfig"]));
    }
    if (m.find("OptionalRange") != m.end() && !m["OptionalRange"].empty()) {
      optionalRange = make_shared<string>(boost::any_cast<string>(m["OptionalRange"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~DescribeParametersResponseBodyParameters() = default;
};
class DescribeParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParametersResponseBodyParameters>> parameters{};
  shared_ptr<string> requestId{};

  DescribeParametersResponseBody() {}

  explicit DescribeParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<DescribeParametersResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<DescribeParametersResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeParametersResponseBody() = default;
};
class DescribeParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeParametersResponseBody> body{};

  DescribeParametersResponse() {}

  explicit DescribeParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParametersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParametersResponse() = default;
};
class DescribeRdsVSwitchsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeRdsVSwitchsRequest() {}

  explicit DescribeRdsVSwitchsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRdsVSwitchsRequest() = default;
};
class DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> bid{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> izNo{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};

  DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch() {}

  explicit DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (izNo) {
      res["IzNo"] = boost::any(*izNo);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("IzNo") != m.end() && !m["IzNo"].empty()) {
      izNo = make_shared<string>(boost::any_cast<string>(m["IzNo"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
  }


  virtual ~DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch() = default;
};
class DescribeRdsVSwitchsResponseBodyVSwitches : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch>> vSwitch{};

  DescribeRdsVSwitchsResponseBodyVSwitches() {}

  explicit DescribeRdsVSwitchsResponseBodyVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitch) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitch){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitch"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitch") != m.end() && !m["VSwitch"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitch"].type()) {
        vector<DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitch"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitch = make_shared<vector<DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch>>(expect1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponseBodyVSwitches() = default;
};
class DescribeRdsVSwitchsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRdsVSwitchsResponseBodyVSwitches> vSwitches{};

  DescribeRdsVSwitchsResponseBody() {}

  explicit DescribeRdsVSwitchsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vSwitches) {
      res["VSwitches"] = vSwitches ? boost::any(vSwitches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(map<string, boost::any>) == m["VSwitches"].type()) {
        DescribeRdsVSwitchsResponseBodyVSwitches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VSwitches"]));
        vSwitches = make_shared<DescribeRdsVSwitchsResponseBodyVSwitches>(model1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponseBody() = default;
};
class DescribeRdsVSwitchsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRdsVSwitchsResponseBody> body{};

  DescribeRdsVSwitchsResponse() {}

  explicit DescribeRdsVSwitchsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsVSwitchsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsVSwitchsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponse() = default;
};
class DescribeRdsVpcsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> zoneId{};

  DescribeRdsVpcsRequest() {}

  explicit DescribeRdsVpcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRdsVpcsRequest() = default;
};
class DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs : public Darabonba::Model {
public:
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> izNo{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};

  DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs() {}

  explicit DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (izNo) {
      res["IzNo"] = boost::any(*izNo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("IzNo") != m.end() && !m["IzNo"].empty()) {
      izNo = make_shared<string>(boost::any_cast<string>(m["IzNo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
  }


  virtual ~DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs() = default;
};
class DescribeRdsVpcsResponseBodyVpcsVpc : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> bid{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs>> vSwitchs{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeRdsVpcsResponseBodyVpcsVpc() {}

  explicit DescribeRdsVpcsResponseBodyVpcsVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchs) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitchs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitchs"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchs") != m.end() && !m["VSwitchs"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitchs"].type()) {
        vector<DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitchs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitchs = make_shared<vector<DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeRdsVpcsResponseBodyVpcsVpc() = default;
};
class DescribeRdsVpcsResponseBodyVpcs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRdsVpcsResponseBodyVpcsVpc>> vpc{};

  DescribeRdsVpcsResponseBodyVpcs() {}

  explicit DescribeRdsVpcsResponseBodyVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpc) {
      vector<boost::any> temp1;
      for(auto item1:*vpc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpc"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpc"].type()) {
        vector<DescribeRdsVpcsResponseBodyVpcsVpc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsVpcsResponseBodyVpcsVpc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpc = make_shared<vector<DescribeRdsVpcsResponseBodyVpcsVpc>>(expect1);
      }
    }
  }


  virtual ~DescribeRdsVpcsResponseBodyVpcs() = default;
};
class DescribeRdsVpcsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRdsVpcsResponseBodyVpcs> vpcs{};

  DescribeRdsVpcsResponseBody() {}

  explicit DescribeRdsVpcsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vpcs) {
      res["Vpcs"] = vpcs ? boost::any(vpcs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Vpcs") != m.end() && !m["Vpcs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vpcs"].type()) {
        DescribeRdsVpcsResponseBodyVpcs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vpcs"]));
        vpcs = make_shared<DescribeRdsVpcsResponseBodyVpcs>(model1);
      }
    }
  }


  virtual ~DescribeRdsVpcsResponseBody() = default;
};
class DescribeRdsVpcsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRdsVpcsResponseBody> body{};

  DescribeRdsVpcsResponse() {}

  explicit DescribeRdsVpcsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsVpcsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsVpcsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsVpcsResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZonesZone : public Darabonba::Model {
public:
  shared_ptr<bool> vpcEnabled{};
  shared_ptr<string> zoneId{};

  DescribeRegionsResponseBodyRegionsRegionZonesZone() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcEnabled) {
      res["VpcEnabled"] = boost::any(*vpcEnabled);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcEnabled") != m.end() && !m["VpcEnabled"].empty()) {
      vpcEnabled = make_shared<bool>(boost::any_cast<bool>(m["VpcEnabled"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZonesZone() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>> zone{};

  DescribeRegionsResponseBodyRegionsRegionZones() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegionZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegionZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZones() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<DescribeRegionsResponseBodyRegionsRegionZones> zones{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeRegionsResponseBodyRegionsRegionZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeRegionsResponseBodyRegionsRegionZones>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeSQLLogCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executeCost{};
  shared_ptr<string> executeState{};
  shared_ptr<string> maxExecuteCost{};
  shared_ptr<string> minExecuteCost{};
  shared_ptr<string> operationClass{};
  shared_ptr<string> operationType{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DescribeSQLLogCountRequest() {}

  explicit DescribeSQLLogCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (maxExecuteCost) {
      res["MaxExecuteCost"] = boost::any(*maxExecuteCost);
    }
    if (minExecuteCost) {
      res["MinExecuteCost"] = boost::any(*minExecuteCost);
    }
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<string>(boost::any_cast<string>(m["ExecuteCost"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("MaxExecuteCost") != m.end() && !m["MaxExecuteCost"].empty()) {
      maxExecuteCost = make_shared<string>(boost::any_cast<string>(m["MaxExecuteCost"]));
    }
    if (m.find("MinExecuteCost") != m.end() && !m["MinExecuteCost"].empty()) {
      minExecuteCost = make_shared<string>(boost::any_cast<string>(m["MinExecuteCost"]));
    }
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeSQLLogCountRequest() = default;
};
class DescribeSQLLogCountResponseBodyItemsSeriesValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> point{};

  DescribeSQLLogCountResponseBodyItemsSeriesValues() {}

  explicit DescribeSQLLogCountResponseBodyItemsSeriesValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (point) {
      res["Point"] = boost::any(*point);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Point") != m.end() && !m["Point"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Point"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Point"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      point = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSQLLogCountResponseBodyItemsSeriesValues() = default;
};
class DescribeSQLLogCountResponseBodyItemsSeries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSQLLogCountResponseBodyItemsSeriesValues>> values{};

  DescribeSQLLogCountResponseBodyItemsSeries() {}

  explicit DescribeSQLLogCountResponseBodyItemsSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<DescribeSQLLogCountResponseBodyItemsSeriesValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogCountResponseBodyItemsSeriesValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<DescribeSQLLogCountResponseBodyItemsSeriesValues>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLLogCountResponseBodyItemsSeries() = default;
};
class DescribeSQLLogCountResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeSQLLogCountResponseBodyItemsSeries>> series{};

  DescribeSQLLogCountResponseBodyItems() {}

  explicit DescribeSQLLogCountResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DescribeSQLLogCountResponseBodyItemsSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogCountResponseBodyItemsSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DescribeSQLLogCountResponseBodyItemsSeries>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLLogCountResponseBodyItems() = default;
};
class DescribeSQLLogCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<DescribeSQLLogCountResponseBodyItems>> items{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeSQLLogCountResponseBody() {}

  explicit DescribeSQLLogCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSQLLogCountResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogCountResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSQLLogCountResponseBodyItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeSQLLogCountResponseBody() = default;
};
class DescribeSQLLogCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSQLLogCountResponseBody> body{};

  DescribeSQLLogCountResponse() {}

  explicit DescribeSQLLogCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLLogCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLLogCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogCountResponse() = default;
};
class DescribeSQLLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executeCost{};
  shared_ptr<string> executeState{};
  shared_ptr<string> maxExecuteCost{};
  shared_ptr<string> minExecuteCost{};
  shared_ptr<string> operationClass{};
  shared_ptr<string> operationType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DescribeSQLLogsRequest() {}

  explicit DescribeSQLLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (maxExecuteCost) {
      res["MaxExecuteCost"] = boost::any(*maxExecuteCost);
    }
    if (minExecuteCost) {
      res["MinExecuteCost"] = boost::any(*minExecuteCost);
    }
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<string>(boost::any_cast<string>(m["ExecuteCost"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("MaxExecuteCost") != m.end() && !m["MaxExecuteCost"].empty()) {
      maxExecuteCost = make_shared<string>(boost::any_cast<string>(m["MaxExecuteCost"]));
    }
    if (m.find("MinExecuteCost") != m.end() && !m["MinExecuteCost"].empty()) {
      minExecuteCost = make_shared<string>(boost::any_cast<string>(m["MinExecuteCost"]));
    }
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeSQLLogsRequest() = default;
};
class DescribeSQLLogsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> DBRole{};
  shared_ptr<double> executeCost{};
  shared_ptr<string> executeState{};
  shared_ptr<string> operationClass{};
  shared_ptr<string> operationExecuteTime{};
  shared_ptr<string> operationType{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> SQLPlan{};
  shared_ptr<string> SQLText{};
  shared_ptr<long> scanRowCounts{};
  shared_ptr<string> sourceIP{};
  shared_ptr<long> sourcePort{};

  DescribeSQLLogsResponseBodyItems() {}

  explicit DescribeSQLLogsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (DBRole) {
      res["DBRole"] = boost::any(*DBRole);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (operationExecuteTime) {
      res["OperationExecuteTime"] = boost::any(*operationExecuteTime);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (SQLPlan) {
      res["SQLPlan"] = boost::any(*SQLPlan);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (scanRowCounts) {
      res["ScanRowCounts"] = boost::any(*scanRowCounts);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("DBRole") != m.end() && !m["DBRole"].empty()) {
      DBRole = make_shared<string>(boost::any_cast<string>(m["DBRole"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<double>(boost::any_cast<double>(m["ExecuteCost"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("OperationExecuteTime") != m.end() && !m["OperationExecuteTime"].empty()) {
      operationExecuteTime = make_shared<string>(boost::any_cast<string>(m["OperationExecuteTime"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("SQLPlan") != m.end() && !m["SQLPlan"].empty()) {
      SQLPlan = make_shared<string>(boost::any_cast<string>(m["SQLPlan"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("ScanRowCounts") != m.end() && !m["ScanRowCounts"].empty()) {
      scanRowCounts = make_shared<long>(boost::any_cast<long>(m["ScanRowCounts"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<long>(boost::any_cast<long>(m["SourcePort"]));
    }
  }


  virtual ~DescribeSQLLogsResponseBodyItems() = default;
};
class DescribeSQLLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSQLLogsResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};

  DescribeSQLLogsResponseBody() {}

  explicit DescribeSQLLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSQLLogsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSQLLogsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSQLLogsResponseBody() = default;
};
class DescribeSQLLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSQLLogsResponseBody> body{};

  DescribeSQLLogsResponse() {}

  explicit DescribeSQLLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogsResponse() = default;
};
class DescribeSQLLogsV2Request : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executeCost{};
  shared_ptr<string> executeState{};
  shared_ptr<string> maxExecuteCost{};
  shared_ptr<string> minExecuteCost{};
  shared_ptr<string> operationClass{};
  shared_ptr<string> operationType{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DescribeSQLLogsV2Request() {}

  explicit DescribeSQLLogsV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (maxExecuteCost) {
      res["MaxExecuteCost"] = boost::any(*maxExecuteCost);
    }
    if (minExecuteCost) {
      res["MinExecuteCost"] = boost::any(*minExecuteCost);
    }
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<string>(boost::any_cast<string>(m["ExecuteCost"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("MaxExecuteCost") != m.end() && !m["MaxExecuteCost"].empty()) {
      maxExecuteCost = make_shared<string>(boost::any_cast<string>(m["MaxExecuteCost"]));
    }
    if (m.find("MinExecuteCost") != m.end() && !m["MinExecuteCost"].empty()) {
      minExecuteCost = make_shared<string>(boost::any_cast<string>(m["MinExecuteCost"]));
    }
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeSQLLogsV2Request() = default;
};
class DescribeSQLLogsV2ResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> DBRole{};
  shared_ptr<double> executeCost{};
  shared_ptr<string> executeState{};
  shared_ptr<string> operationClass{};
  shared_ptr<string> operationExecuteTime{};
  shared_ptr<string> operationType{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> SQLText{};
  shared_ptr<long> scanRowCounts{};
  shared_ptr<string> sourceIP{};
  shared_ptr<long> sourcePort{};

  DescribeSQLLogsV2ResponseBodyItems() {}

  explicit DescribeSQLLogsV2ResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (DBRole) {
      res["DBRole"] = boost::any(*DBRole);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (operationExecuteTime) {
      res["OperationExecuteTime"] = boost::any(*operationExecuteTime);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (scanRowCounts) {
      res["ScanRowCounts"] = boost::any(*scanRowCounts);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("DBRole") != m.end() && !m["DBRole"].empty()) {
      DBRole = make_shared<string>(boost::any_cast<string>(m["DBRole"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<double>(boost::any_cast<double>(m["ExecuteCost"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("OperationExecuteTime") != m.end() && !m["OperationExecuteTime"].empty()) {
      operationExecuteTime = make_shared<string>(boost::any_cast<string>(m["OperationExecuteTime"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("ScanRowCounts") != m.end() && !m["ScanRowCounts"].empty()) {
      scanRowCounts = make_shared<long>(boost::any_cast<long>(m["ScanRowCounts"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<long>(boost::any_cast<long>(m["SourcePort"]));
    }
  }


  virtual ~DescribeSQLLogsV2ResponseBodyItems() = default;
};
class DescribeSQLLogsV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSQLLogsV2ResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};

  DescribeSQLLogsV2ResponseBody() {}

  explicit DescribeSQLLogsV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSQLLogsV2ResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogsV2ResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSQLLogsV2ResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSQLLogsV2ResponseBody() = default;
};
class DescribeSQLLogsV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSQLLogsV2ResponseBody> body{};

  DescribeSQLLogsV2Response() {}

  explicit DescribeSQLLogsV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLLogsV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLLogsV2ResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogsV2Response() = default;
};
class DescribeSampleDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};

  DescribeSampleDataRequest() {}

  explicit DescribeSampleDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeSampleDataRequest() = default;
};
class DescribeSampleDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> hasSampleData{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sampleDataStatus{};

  DescribeSampleDataResponseBody() {}

  explicit DescribeSampleDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (hasSampleData) {
      res["HasSampleData"] = boost::any(*hasSampleData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sampleDataStatus) {
      res["SampleDataStatus"] = boost::any(*sampleDataStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HasSampleData") != m.end() && !m["HasSampleData"].empty()) {
      hasSampleData = make_shared<bool>(boost::any_cast<bool>(m["HasSampleData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SampleDataStatus") != m.end() && !m["SampleDataStatus"].empty()) {
      sampleDataStatus = make_shared<string>(boost::any_cast<string>(m["SampleDataStatus"]));
    }
  }


  virtual ~DescribeSampleDataResponseBody() = default;
};
class DescribeSampleDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSampleDataResponseBody> body{};

  DescribeSampleDataResponse() {}

  explicit DescribeSampleDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSampleDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSampleDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSampleDataResponse() = default;
};
class DescribeSupportFeaturesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};

  DescribeSupportFeaturesRequest() {}

  explicit DescribeSupportFeaturesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeSupportFeaturesRequest() = default;
};
class DescribeSupportFeaturesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> supportFeatureList{};

  DescribeSupportFeaturesResponseBody() {}

  explicit DescribeSupportFeaturesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (supportFeatureList) {
      res["SupportFeatureList"] = boost::any(*supportFeatureList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SupportFeatureList") != m.end() && !m["SupportFeatureList"].empty()) {
      supportFeatureList = make_shared<string>(boost::any_cast<string>(m["SupportFeatureList"]));
    }
  }


  virtual ~DescribeSupportFeaturesResponseBody() = default;
};
class DescribeSupportFeaturesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSupportFeaturesResponseBody> body{};

  DescribeSupportFeaturesResponse() {}

  explicit DescribeSupportFeaturesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSupportFeaturesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSupportFeaturesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSupportFeaturesResponse() = default;
};
class DescribeTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};

  DescribeTagsRequest() {}

  explicit DescribeTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeTagsRequest() = default;
};
class DescribeTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeTagsResponseBodyTags() {}

  explicit DescribeTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeTagsResponseBodyTags() = default;
};
class DescribeTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeTagsResponseBodyTags>> tags{};

  DescribeTagsResponseBody() {}

  explicit DescribeTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeTagsResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTagsResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeTagsResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~DescribeTagsResponseBody() = default;
};
class DescribeTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTagsResponseBody> body{};

  DescribeTagsResponse() {}

  explicit DescribeTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTagsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTagsResponse() = default;
};
class DescribeUserEncryptionKeyListRequest : public Darabonba::Model {
public:
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionId{};

  DescribeUserEncryptionKeyListRequest() {}

  explicit DescribeUserEncryptionKeyListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListRequest() = default;
};
class DescribeUserEncryptionKeyListResponseBodyKmsKeys : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};

  DescribeUserEncryptionKeyListResponseBodyKmsKeys() {}

  explicit DescribeUserEncryptionKeyListResponseBodyKmsKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponseBodyKmsKeys() = default;
};
class DescribeUserEncryptionKeyListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys>> kmsKeys{};
  shared_ptr<string> requestId{};

  DescribeUserEncryptionKeyListResponseBody() {}

  explicit DescribeUserEncryptionKeyListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kmsKeys) {
      vector<boost::any> temp1;
      for(auto item1:*kmsKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KmsKeys"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KmsKeys") != m.end() && !m["KmsKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["KmsKeys"].type()) {
        vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KmsKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserEncryptionKeyListResponseBodyKmsKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        kmsKeys = make_shared<vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponseBody() = default;
};
class DescribeUserEncryptionKeyListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserEncryptionKeyListResponseBody> body{};

  DescribeUserEncryptionKeyListResponse() {}

  explicit DescribeUserEncryptionKeyListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserEncryptionKeyListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserEncryptionKeyListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponse() = default;
};
class DescribeWaitingSQLInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> PID{};

  DescribeWaitingSQLInfoRequest() {}

  explicit DescribeWaitingSQLInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (PID) {
      res["PID"] = boost::any(*PID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("PID") != m.end() && !m["PID"].empty()) {
      PID = make_shared<string>(boost::any_cast<string>(m["PID"]));
    }
  }


  virtual ~DescribeWaitingSQLInfoRequest() = default;
};
class DescribeWaitingSQLInfoResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> application{};
  shared_ptr<string> blockedByApplication{};
  shared_ptr<string> blockedByPID{};
  shared_ptr<string> blockedBySQLStmt{};
  shared_ptr<string> blockedByUser{};
  shared_ptr<string> grantLocks{};
  shared_ptr<string> notGrantLocks{};
  shared_ptr<string> PID{};
  shared_ptr<string> SQLStmt{};
  shared_ptr<string> user{};

  DescribeWaitingSQLInfoResponseBodyItems() {}

  explicit DescribeWaitingSQLInfoResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = boost::any(*application);
    }
    if (blockedByApplication) {
      res["BlockedByApplication"] = boost::any(*blockedByApplication);
    }
    if (blockedByPID) {
      res["BlockedByPID"] = boost::any(*blockedByPID);
    }
    if (blockedBySQLStmt) {
      res["BlockedBySQLStmt"] = boost::any(*blockedBySQLStmt);
    }
    if (blockedByUser) {
      res["BlockedByUser"] = boost::any(*blockedByUser);
    }
    if (grantLocks) {
      res["GrantLocks"] = boost::any(*grantLocks);
    }
    if (notGrantLocks) {
      res["NotGrantLocks"] = boost::any(*notGrantLocks);
    }
    if (PID) {
      res["PID"] = boost::any(*PID);
    }
    if (SQLStmt) {
      res["SQLStmt"] = boost::any(*SQLStmt);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      application = make_shared<string>(boost::any_cast<string>(m["Application"]));
    }
    if (m.find("BlockedByApplication") != m.end() && !m["BlockedByApplication"].empty()) {
      blockedByApplication = make_shared<string>(boost::any_cast<string>(m["BlockedByApplication"]));
    }
    if (m.find("BlockedByPID") != m.end() && !m["BlockedByPID"].empty()) {
      blockedByPID = make_shared<string>(boost::any_cast<string>(m["BlockedByPID"]));
    }
    if (m.find("BlockedBySQLStmt") != m.end() && !m["BlockedBySQLStmt"].empty()) {
      blockedBySQLStmt = make_shared<string>(boost::any_cast<string>(m["BlockedBySQLStmt"]));
    }
    if (m.find("BlockedByUser") != m.end() && !m["BlockedByUser"].empty()) {
      blockedByUser = make_shared<string>(boost::any_cast<string>(m["BlockedByUser"]));
    }
    if (m.find("GrantLocks") != m.end() && !m["GrantLocks"].empty()) {
      grantLocks = make_shared<string>(boost::any_cast<string>(m["GrantLocks"]));
    }
    if (m.find("NotGrantLocks") != m.end() && !m["NotGrantLocks"].empty()) {
      notGrantLocks = make_shared<string>(boost::any_cast<string>(m["NotGrantLocks"]));
    }
    if (m.find("PID") != m.end() && !m["PID"].empty()) {
      PID = make_shared<string>(boost::any_cast<string>(m["PID"]));
    }
    if (m.find("SQLStmt") != m.end() && !m["SQLStmt"].empty()) {
      SQLStmt = make_shared<string>(boost::any_cast<string>(m["SQLStmt"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeWaitingSQLInfoResponseBodyItems() = default;
};
class DescribeWaitingSQLInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<vector<DescribeWaitingSQLInfoResponseBodyItems>> items{};
  shared_ptr<string> requestId{};

  DescribeWaitingSQLInfoResponseBody() {}

  explicit DescribeWaitingSQLInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeWaitingSQLInfoResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWaitingSQLInfoResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeWaitingSQLInfoResponseBodyItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeWaitingSQLInfoResponseBody() = default;
};
class DescribeWaitingSQLInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWaitingSQLInfoResponseBody> body{};

  DescribeWaitingSQLInfoResponse() {}

  explicit DescribeWaitingSQLInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWaitingSQLInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWaitingSQLInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWaitingSQLInfoResponse() = default;
};
class DescribeWaitingSQLRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> keyword{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryCondition{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DescribeWaitingSQLRecordsRequest() {}

  explicit DescribeWaitingSQLRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryCondition) {
      res["QueryCondition"] = boost::any(*queryCondition);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryCondition") != m.end() && !m["QueryCondition"].empty()) {
      queryCondition = make_shared<string>(boost::any_cast<string>(m["QueryCondition"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeWaitingSQLRecordsRequest() = default;
};
class DescribeWaitingSQLRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<string> PID{};
  shared_ptr<string> SQLStmt{};
  shared_ptr<string> sessionID{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> user{};
  shared_ptr<long> waitingTime{};

  DescribeWaitingSQLRecordsResponseBodyItems() {}

  explicit DescribeWaitingSQLRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (PID) {
      res["PID"] = boost::any(*PID);
    }
    if (SQLStmt) {
      res["SQLStmt"] = boost::any(*SQLStmt);
    }
    if (sessionID) {
      res["SessionID"] = boost::any(*sessionID);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (waitingTime) {
      res["WaitingTime"] = boost::any(*waitingTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("PID") != m.end() && !m["PID"].empty()) {
      PID = make_shared<string>(boost::any_cast<string>(m["PID"]));
    }
    if (m.find("SQLStmt") != m.end() && !m["SQLStmt"].empty()) {
      SQLStmt = make_shared<string>(boost::any_cast<string>(m["SQLStmt"]));
    }
    if (m.find("SessionID") != m.end() && !m["SessionID"].empty()) {
      sessionID = make_shared<string>(boost::any_cast<string>(m["SessionID"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("WaitingTime") != m.end() && !m["WaitingTime"].empty()) {
      waitingTime = make_shared<long>(boost::any_cast<long>(m["WaitingTime"]));
    }
  }


  virtual ~DescribeWaitingSQLRecordsResponseBodyItems() = default;
};
class DescribeWaitingSQLRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeWaitingSQLRecordsResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeWaitingSQLRecordsResponseBody() {}

  explicit DescribeWaitingSQLRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeWaitingSQLRecordsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWaitingSQLRecordsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeWaitingSQLRecordsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeWaitingSQLRecordsResponseBody() = default;
};
class DescribeWaitingSQLRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWaitingSQLRecordsResponseBody> body{};

  DescribeWaitingSQLRecordsResponse() {}

  explicit DescribeWaitingSQLRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWaitingSQLRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWaitingSQLRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWaitingSQLRecordsResponse() = default;
};
class DownloadDiagnosisRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> lang{};
  shared_ptr<string> queryCondition{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DownloadDiagnosisRecordsRequest() {}

  explicit DownloadDiagnosisRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (queryCondition) {
      res["QueryCondition"] = boost::any(*queryCondition);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("QueryCondition") != m.end() && !m["QueryCondition"].empty()) {
      queryCondition = make_shared<string>(boost::any_cast<string>(m["QueryCondition"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DownloadDiagnosisRecordsRequest() = default;
};
class DownloadDiagnosisRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> downloadId{};
  shared_ptr<string> requestId{};

  DownloadDiagnosisRecordsResponseBody() {}

  explicit DownloadDiagnosisRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (downloadId) {
      res["DownloadId"] = boost::any(*downloadId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DownloadId") != m.end() && !m["DownloadId"].empty()) {
      downloadId = make_shared<string>(boost::any_cast<string>(m["DownloadId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DownloadDiagnosisRecordsResponseBody() = default;
};
class DownloadDiagnosisRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DownloadDiagnosisRecordsResponseBody> body{};

  DownloadDiagnosisRecordsResponse() {}

  explicit DownloadDiagnosisRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DownloadDiagnosisRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DownloadDiagnosisRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DownloadDiagnosisRecordsResponse() = default;
};
class DownloadSQLLogsRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executeCost{};
  shared_ptr<string> executeState{};
  shared_ptr<string> lang{};
  shared_ptr<string> maxExecuteCost{};
  shared_ptr<string> minExecuteCost{};
  shared_ptr<string> operationClass{};
  shared_ptr<string> operationType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DownloadSQLLogsRecordsRequest() {}

  explicit DownloadSQLLogsRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (maxExecuteCost) {
      res["MaxExecuteCost"] = boost::any(*maxExecuteCost);
    }
    if (minExecuteCost) {
      res["MinExecuteCost"] = boost::any(*minExecuteCost);
    }
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<string>(boost::any_cast<string>(m["ExecuteCost"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MaxExecuteCost") != m.end() && !m["MaxExecuteCost"].empty()) {
      maxExecuteCost = make_shared<string>(boost::any_cast<string>(m["MaxExecuteCost"]));
    }
    if (m.find("MinExecuteCost") != m.end() && !m["MinExecuteCost"].empty()) {
      minExecuteCost = make_shared<string>(boost::any_cast<string>(m["MinExecuteCost"]));
    }
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DownloadSQLLogsRecordsRequest() = default;
};
class DownloadSQLLogsRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> downloadId{};
  shared_ptr<string> requestId{};

  DownloadSQLLogsRecordsResponseBody() {}

  explicit DownloadSQLLogsRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadId) {
      res["DownloadId"] = boost::any(*downloadId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadId") != m.end() && !m["DownloadId"].empty()) {
      downloadId = make_shared<long>(boost::any_cast<long>(m["DownloadId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DownloadSQLLogsRecordsResponseBody() = default;
};
class DownloadSQLLogsRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DownloadSQLLogsRecordsResponseBody> body{};

  DownloadSQLLogsRecordsResponse() {}

  explicit DownloadSQLLogsRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DownloadSQLLogsRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DownloadSQLLogsRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DownloadSQLLogsRecordsResponse() = default;
};
class GetUploadDocumentJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  GetUploadDocumentJobRequest() {}

  explicit GetUploadDocumentJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetUploadDocumentJobRequest() = default;
};
class GetUploadDocumentJobResponseBodyChunkResult : public Darabonba::Model {
public:
  shared_ptr<string> chunkFileUrl{};
  shared_ptr<string> plainChunkFileUrl{};

  GetUploadDocumentJobResponseBodyChunkResult() {}

  explicit GetUploadDocumentJobResponseBodyChunkResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkFileUrl) {
      res["ChunkFileUrl"] = boost::any(*chunkFileUrl);
    }
    if (plainChunkFileUrl) {
      res["PlainChunkFileUrl"] = boost::any(*plainChunkFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChunkFileUrl") != m.end() && !m["ChunkFileUrl"].empty()) {
      chunkFileUrl = make_shared<string>(boost::any_cast<string>(m["ChunkFileUrl"]));
    }
    if (m.find("PlainChunkFileUrl") != m.end() && !m["PlainChunkFileUrl"].empty()) {
      plainChunkFileUrl = make_shared<string>(boost::any_cast<string>(m["PlainChunkFileUrl"]));
    }
  }


  virtual ~GetUploadDocumentJobResponseBodyChunkResult() = default;
};
class GetUploadDocumentJobResponseBodyJob : public Darabonba::Model {
public:
  shared_ptr<bool> completed{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<string> id{};
  shared_ptr<long> progress{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  GetUploadDocumentJobResponseBodyJob() {}

  explicit GetUploadDocumentJobResponseBodyJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetUploadDocumentJobResponseBodyJob() = default;
};
class GetUploadDocumentJobResponseBodyUsage : public Darabonba::Model {
public:
  shared_ptr<long> embeddingEntries{};
  shared_ptr<long> embeddingTokens{};

  GetUploadDocumentJobResponseBodyUsage() {}

  explicit GetUploadDocumentJobResponseBodyUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (embeddingEntries) {
      res["EmbeddingEntries"] = boost::any(*embeddingEntries);
    }
    if (embeddingTokens) {
      res["EmbeddingTokens"] = boost::any(*embeddingTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmbeddingEntries") != m.end() && !m["EmbeddingEntries"].empty()) {
      embeddingEntries = make_shared<long>(boost::any_cast<long>(m["EmbeddingEntries"]));
    }
    if (m.find("EmbeddingTokens") != m.end() && !m["EmbeddingTokens"].empty()) {
      embeddingTokens = make_shared<long>(boost::any_cast<long>(m["EmbeddingTokens"]));
    }
  }


  virtual ~GetUploadDocumentJobResponseBodyUsage() = default;
};
class GetUploadDocumentJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUploadDocumentJobResponseBodyChunkResult> chunkResult{};
  shared_ptr<GetUploadDocumentJobResponseBodyJob> job{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<GetUploadDocumentJobResponseBodyUsage> usage{};

  GetUploadDocumentJobResponseBody() {}

  explicit GetUploadDocumentJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkResult) {
      res["ChunkResult"] = chunkResult ? boost::any(chunkResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (job) {
      res["Job"] = job ? boost::any(job->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (usage) {
      res["Usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChunkResult") != m.end() && !m["ChunkResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChunkResult"].type()) {
        GetUploadDocumentJobResponseBodyChunkResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChunkResult"]));
        chunkResult = make_shared<GetUploadDocumentJobResponseBodyChunkResult>(model1);
      }
    }
    if (m.find("Job") != m.end() && !m["Job"].empty()) {
      if (typeid(map<string, boost::any>) == m["Job"].type()) {
        GetUploadDocumentJobResponseBodyJob model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Job"]));
        job = make_shared<GetUploadDocumentJobResponseBodyJob>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Usage"].type()) {
        GetUploadDocumentJobResponseBodyUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Usage"]));
        usage = make_shared<GetUploadDocumentJobResponseBodyUsage>(model1);
      }
    }
  }


  virtual ~GetUploadDocumentJobResponseBody() = default;
};
class GetUploadDocumentJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUploadDocumentJobResponseBody> body{};

  GetUploadDocumentJobResponse() {}

  explicit GetUploadDocumentJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUploadDocumentJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUploadDocumentJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetUploadDocumentJobResponse() = default;
};
class GetUpsertCollectionDataJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  GetUpsertCollectionDataJobRequest() {}

  explicit GetUpsertCollectionDataJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetUpsertCollectionDataJobRequest() = default;
};
class GetUpsertCollectionDataJobResponseBodyJob : public Darabonba::Model {
public:
  shared_ptr<bool> completed{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<string> id{};
  shared_ptr<long> progress{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  GetUpsertCollectionDataJobResponseBodyJob() {}

  explicit GetUpsertCollectionDataJobResponseBodyJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetUpsertCollectionDataJobResponseBodyJob() = default;
};
class GetUpsertCollectionDataJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUpsertCollectionDataJobResponseBodyJob> job{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetUpsertCollectionDataJobResponseBody() {}

  explicit GetUpsertCollectionDataJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (job) {
      res["Job"] = job ? boost::any(job->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Job") != m.end() && !m["Job"].empty()) {
      if (typeid(map<string, boost::any>) == m["Job"].type()) {
        GetUpsertCollectionDataJobResponseBodyJob model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Job"]));
        job = make_shared<GetUpsertCollectionDataJobResponseBodyJob>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetUpsertCollectionDataJobResponseBody() = default;
};
class GetUpsertCollectionDataJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUpsertCollectionDataJobResponseBody> body{};

  GetUpsertCollectionDataJobResponse() {}

  explicit GetUpsertCollectionDataJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUpsertCollectionDataJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUpsertCollectionDataJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetUpsertCollectionDataJobResponse() = default;
};
class GrantCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> grantToNamespace{};
  shared_ptr<string> grantType{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  GrantCollectionRequest() {}

  explicit GrantCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (grantToNamespace) {
      res["GrantToNamespace"] = boost::any(*grantToNamespace);
    }
    if (grantType) {
      res["GrantType"] = boost::any(*grantType);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("GrantToNamespace") != m.end() && !m["GrantToNamespace"].empty()) {
      grantToNamespace = make_shared<string>(boost::any_cast<string>(m["GrantToNamespace"]));
    }
    if (m.find("GrantType") != m.end() && !m["GrantType"].empty()) {
      grantType = make_shared<string>(boost::any_cast<string>(m["GrantType"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GrantCollectionRequest() = default;
};
class GrantCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GrantCollectionResponseBody() {}

  explicit GrantCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GrantCollectionResponseBody() = default;
};
class GrantCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GrantCollectionResponseBody> body{};

  GrantCollectionResponse() {}

  explicit GrantCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GrantCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~GrantCollectionResponse() = default;
};
class HandleActiveSQLRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> operateType{};
  shared_ptr<string> pids{};

  HandleActiveSQLRecordRequest() {}

  explicit HandleActiveSQLRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (pids) {
      res["Pids"] = boost::any(*pids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<long>(boost::any_cast<long>(m["OperateType"]));
    }
    if (m.find("Pids") != m.end() && !m["Pids"].empty()) {
      pids = make_shared<string>(boost::any_cast<string>(m["Pids"]));
    }
  }


  virtual ~HandleActiveSQLRecordRequest() = default;
};
class HandleActiveSQLRecordResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<string> pid{};
  shared_ptr<string> status{};

  HandleActiveSQLRecordResponseBodyResults() {}

  explicit HandleActiveSQLRecordResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~HandleActiveSQLRecordResponseBodyResults() = default;
};
class HandleActiveSQLRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<HandleActiveSQLRecordResponseBodyResults>> results{};
  shared_ptr<string> status{};

  HandleActiveSQLRecordResponseBody() {}

  explicit HandleActiveSQLRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<HandleActiveSQLRecordResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HandleActiveSQLRecordResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<HandleActiveSQLRecordResponseBodyResults>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~HandleActiveSQLRecordResponseBody() = default;
};
class HandleActiveSQLRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HandleActiveSQLRecordResponseBody> body{};

  HandleActiveSQLRecordResponse() {}

  explicit HandleActiveSQLRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HandleActiveSQLRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HandleActiveSQLRecordResponseBody>(model1);
      }
    }
  }


  virtual ~HandleActiveSQLRecordResponse() = default;
};
class InitVectorDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  InitVectorDatabaseRequest() {}

  explicit InitVectorDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~InitVectorDatabaseRequest() = default;
};
class InitVectorDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  InitVectorDatabaseResponseBody() {}

  explicit InitVectorDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~InitVectorDatabaseResponseBody() = default;
};
class InitVectorDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitVectorDatabaseResponseBody> body{};

  InitVectorDatabaseResponse() {}

  explicit InitVectorDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitVectorDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitVectorDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~InitVectorDatabaseResponse() = default;
};
class ListCollectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  ListCollectionsRequest() {}

  explicit ListCollectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListCollectionsRequest() = default;
};
class ListCollectionsResponseBodyCollections : public Darabonba::Model {
public:
  shared_ptr<vector<string>> collection{};

  ListCollectionsResponseBodyCollections() {}

  explicit ListCollectionsResponseBodyCollections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Collection"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Collection"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      collection = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListCollectionsResponseBodyCollections() = default;
};
class ListCollectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCollectionsResponseBodyCollections> collections{};
  shared_ptr<long> count{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  ListCollectionsResponseBody() {}

  explicit ListCollectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collections) {
      res["Collections"] = collections ? boost::any(collections->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("Collections") != m.end() && !m["Collections"].empty()) {
      if (typeid(map<string, boost::any>) == m["Collections"].type()) {
        ListCollectionsResponseBodyCollections model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Collections"]));
        collections = make_shared<ListCollectionsResponseBodyCollections>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListCollectionsResponseBody() = default;
};
class ListCollectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCollectionsResponseBody> body{};

  ListCollectionsResponse() {}

  explicit ListCollectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCollectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCollectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCollectionsResponse() = default;
};
class ListDocumentCollectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  ListDocumentCollectionsRequest() {}

  explicit ListDocumentCollectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListDocumentCollectionsRequest() = default;
};
class ListDocumentCollectionsResponseBodyItemsCollectionList : public Darabonba::Model {
public:
  shared_ptr<string> collectionName{};
  shared_ptr<long> dimension{};
  shared_ptr<string> embeddingModel{};
  shared_ptr<string> fullTextRetrievalFields{};
  shared_ptr<string> metadata{};
  shared_ptr<string> metrics{};
  shared_ptr<string> parser{};

  ListDocumentCollectionsResponseBodyItemsCollectionList() {}

  explicit ListDocumentCollectionsResponseBodyItemsCollectionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectionName) {
      res["CollectionName"] = boost::any(*collectionName);
    }
    if (dimension) {
      res["Dimension"] = boost::any(*dimension);
    }
    if (embeddingModel) {
      res["EmbeddingModel"] = boost::any(*embeddingModel);
    }
    if (fullTextRetrievalFields) {
      res["FullTextRetrievalFields"] = boost::any(*fullTextRetrievalFields);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectionName") != m.end() && !m["CollectionName"].empty()) {
      collectionName = make_shared<string>(boost::any_cast<string>(m["CollectionName"]));
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      dimension = make_shared<long>(boost::any_cast<long>(m["Dimension"]));
    }
    if (m.find("EmbeddingModel") != m.end() && !m["EmbeddingModel"].empty()) {
      embeddingModel = make_shared<string>(boost::any_cast<string>(m["EmbeddingModel"]));
    }
    if (m.find("FullTextRetrievalFields") != m.end() && !m["FullTextRetrievalFields"].empty()) {
      fullTextRetrievalFields = make_shared<string>(boost::any_cast<string>(m["FullTextRetrievalFields"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<string>(boost::any_cast<string>(m["Metadata"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
  }


  virtual ~ListDocumentCollectionsResponseBodyItemsCollectionList() = default;
};
class ListDocumentCollectionsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<ListDocumentCollectionsResponseBodyItemsCollectionList>> collectionList{};

  ListDocumentCollectionsResponseBodyItems() {}

  explicit ListDocumentCollectionsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectionList) {
      vector<boost::any> temp1;
      for(auto item1:*collectionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CollectionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectionList") != m.end() && !m["CollectionList"].empty()) {
      if (typeid(vector<boost::any>) == m["CollectionList"].type()) {
        vector<ListDocumentCollectionsResponseBodyItemsCollectionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CollectionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDocumentCollectionsResponseBodyItemsCollectionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        collectionList = make_shared<vector<ListDocumentCollectionsResponseBodyItemsCollectionList>>(expect1);
      }
    }
  }


  virtual ~ListDocumentCollectionsResponseBodyItems() = default;
};
class ListDocumentCollectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<ListDocumentCollectionsResponseBodyItems> items{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  ListDocumentCollectionsResponseBody() {}

  explicit ListDocumentCollectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        ListDocumentCollectionsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<ListDocumentCollectionsResponseBodyItems>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDocumentCollectionsResponseBody() = default;
};
class ListDocumentCollectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDocumentCollectionsResponseBody> body{};

  ListDocumentCollectionsResponse() {}

  explicit ListDocumentCollectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDocumentCollectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDocumentCollectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDocumentCollectionsResponse() = default;
};
class ListDocumentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  ListDocumentsRequest() {}

  explicit ListDocumentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListDocumentsRequest() = default;
};
class ListDocumentsResponseBodyItemsDocumentList : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> source{};

  ListDocumentsResponseBodyItemsDocumentList() {}

  explicit ListDocumentsResponseBodyItemsDocumentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListDocumentsResponseBodyItemsDocumentList() = default;
};
class ListDocumentsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<ListDocumentsResponseBodyItemsDocumentList>> documentList{};

  ListDocumentsResponseBodyItems() {}

  explicit ListDocumentsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentList) {
      vector<boost::any> temp1;
      for(auto item1:*documentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DocumentList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentList") != m.end() && !m["DocumentList"].empty()) {
      if (typeid(vector<boost::any>) == m["DocumentList"].type()) {
        vector<ListDocumentsResponseBodyItemsDocumentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DocumentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDocumentsResponseBodyItemsDocumentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        documentList = make_shared<vector<ListDocumentsResponseBodyItemsDocumentList>>(expect1);
      }
    }
  }


  virtual ~ListDocumentsResponseBodyItems() = default;
};
class ListDocumentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDocumentsResponseBodyItems> items{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  ListDocumentsResponseBody() {}

  explicit ListDocumentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        ListDocumentsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<ListDocumentsResponseBodyItems>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDocumentsResponseBody() = default;
};
class ListDocumentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDocumentsResponseBody> body{};

  ListDocumentsResponse() {}

  explicit ListDocumentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDocumentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDocumentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDocumentsResponse() = default;
};
class ListNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> managerAccount{};
  shared_ptr<string> managerAccountPassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  ListNamespacesRequest() {}

  explicit ListNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (managerAccount) {
      res["ManagerAccount"] = boost::any(*managerAccount);
    }
    if (managerAccountPassword) {
      res["ManagerAccountPassword"] = boost::any(*managerAccountPassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ManagerAccount") != m.end() && !m["ManagerAccount"].empty()) {
      managerAccount = make_shared<string>(boost::any_cast<string>(m["ManagerAccount"]));
    }
    if (m.find("ManagerAccountPassword") != m.end() && !m["ManagerAccountPassword"].empty()) {
      managerAccountPassword = make_shared<string>(boost::any_cast<string>(m["ManagerAccountPassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListNamespacesRequest() = default;
};
class ListNamespacesResponseBodyNamespaces : public Darabonba::Model {
public:
  shared_ptr<vector<string>> namespace_{};

  ListNamespacesResponseBodyNamespaces() {}

  explicit ListNamespacesResponseBodyNamespaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Namespace"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Namespace"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      namespace_ = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListNamespacesResponseBodyNamespaces() = default;
};
class ListNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> message{};
  shared_ptr<ListNamespacesResponseBodyNamespaces> namespaces{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  ListNamespacesResponseBody() {}

  explicit ListNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (namespaces) {
      res["Namespaces"] = namespaces ? boost::any(namespaces->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      if (typeid(map<string, boost::any>) == m["Namespaces"].type()) {
        ListNamespacesResponseBodyNamespaces model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Namespaces"]));
        namespaces = make_shared<ListNamespacesResponseBodyNamespaces>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListNamespacesResponseBody() = default;
};
class ListNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNamespacesResponseBody> body{};

  ListNamespacesResponse() {}

  explicit ListNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNamespacesResponse() = default;
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
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
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
class ModifyAccountDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> DBInstanceId{};

  ModifyAccountDescriptionRequest() {}

  explicit ModifyAccountDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~ModifyAccountDescriptionRequest() = default;
};
class ModifyAccountDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountDescriptionResponseBody() {}

  explicit ModifyAccountDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAccountDescriptionResponseBody() = default;
};
class ModifyAccountDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccountDescriptionResponseBody> body{};

  ModifyAccountDescriptionResponse() {}

  explicit ModifyAccountDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAccountDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountDescriptionResponse() = default;
};
class ModifyBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<bool> enableRecoveryPoint{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> recoveryPointPeriod{};

  ModifyBackupPolicyRequest() {}

  explicit ModifyBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (enableRecoveryPoint) {
      res["EnableRecoveryPoint"] = boost::any(*enableRecoveryPoint);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (recoveryPointPeriod) {
      res["RecoveryPointPeriod"] = boost::any(*recoveryPointPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EnableRecoveryPoint") != m.end() && !m["EnableRecoveryPoint"].empty()) {
      enableRecoveryPoint = make_shared<bool>(boost::any_cast<bool>(m["EnableRecoveryPoint"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("RecoveryPointPeriod") != m.end() && !m["RecoveryPointPeriod"].empty()) {
      recoveryPointPeriod = make_shared<string>(boost::any_cast<string>(m["RecoveryPointPeriod"]));
    }
  }


  virtual ~ModifyBackupPolicyRequest() = default;
};
class ModifyBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBackupPolicyResponseBody() {}

  explicit ModifyBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyBackupPolicyResponseBody() = default;
};
class ModifyBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBackupPolicyResponseBody> body{};

  ModifyBackupPolicyResponse() {}

  explicit ModifyBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupPolicyResponse() = default;
};
class ModifyDBInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> idleTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> serverlessResource{};

  ModifyDBInstanceConfigRequest() {}

  explicit ModifyDBInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (idleTime) {
      res["IdleTime"] = boost::any(*idleTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serverlessResource) {
      res["ServerlessResource"] = boost::any(*serverlessResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("IdleTime") != m.end() && !m["IdleTime"].empty()) {
      idleTime = make_shared<long>(boost::any_cast<long>(m["IdleTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServerlessResource") != m.end() && !m["ServerlessResource"].empty()) {
      serverlessResource = make_shared<long>(boost::any_cast<long>(m["ServerlessResource"]));
    }
  }


  virtual ~ModifyDBInstanceConfigRequest() = default;
};
class ModifyDBInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  ModifyDBInstanceConfigResponseBody() {}

  explicit ModifyDBInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~ModifyDBInstanceConfigResponseBody() = default;
};
class ModifyDBInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceConfigResponseBody> body{};

  ModifyDBInstanceConfigResponse() {}

  explicit ModifyDBInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceConfigResponse() = default;
};
class ModifyDBInstanceConnectionStringRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> currentConnectionString{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> port{};

  ModifyDBInstanceConnectionStringRequest() {}

  explicit ModifyDBInstanceConnectionStringRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~ModifyDBInstanceConnectionStringRequest() = default;
};
class ModifyDBInstanceConnectionStringResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceConnectionStringResponseBody() {}

  explicit ModifyDBInstanceConnectionStringResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceConnectionStringResponseBody() = default;
};
class ModifyDBInstanceConnectionStringResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceConnectionStringResponseBody> body{};

  ModifyDBInstanceConnectionStringResponse() {}

  explicit ModifyDBInstanceConnectionStringResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceConnectionStringResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceConnectionStringResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceConnectionStringResponse() = default;
};
class ModifyDBInstanceDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> resourceGroupId{};

  ModifyDBInstanceDescriptionRequest() {}

  explicit ModifyDBInstanceDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ModifyDBInstanceDescriptionRequest() = default;
};
class ModifyDBInstanceDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceDescriptionResponseBody() {}

  explicit ModifyDBInstanceDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceDescriptionResponseBody() = default;
};
class ModifyDBInstanceDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceDescriptionResponseBody> body{};

  ModifyDBInstanceDescriptionResponse() {}

  explicit ModifyDBInstanceDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceDescriptionResponse() = default;
};
class ModifyDBInstanceMaintainTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> startTime{};

  ModifyDBInstanceMaintainTimeRequest() {}

  explicit ModifyDBInstanceMaintainTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ModifyDBInstanceMaintainTimeRequest() = default;
};
class ModifyDBInstanceMaintainTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceMaintainTimeResponseBody() {}

  explicit ModifyDBInstanceMaintainTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceMaintainTimeResponseBody() = default;
};
class ModifyDBInstanceMaintainTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceMaintainTimeResponseBody> body{};

  ModifyDBInstanceMaintainTimeResponse() {}

  explicit ModifyDBInstanceMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceMaintainTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceMaintainTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceMaintainTimeResponse() = default;
};
class ModifyDBInstanceResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBInstanceResourceGroupRequest() {}

  explicit ModifyDBInstanceResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBInstanceResourceGroupRequest() = default;
};
class ModifyDBInstanceResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceResourceGroupResponseBody() {}

  explicit ModifyDBInstanceResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceResourceGroupResponseBody() = default;
};
class ModifyDBInstanceResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceResourceGroupResponseBody> body{};

  ModifyDBInstanceResourceGroupResponse() {}

  explicit ModifyDBInstanceResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceResourceGroupResponse() = default;
};
class ModifyDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> SSLEnabled{};

  ModifyDBInstanceSSLRequest() {}

  explicit ModifyDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (SSLEnabled) {
      res["SSLEnabled"] = boost::any(*SSLEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<long>(boost::any_cast<long>(m["SSLEnabled"]));
    }
  }


  virtual ~ModifyDBInstanceSSLRequest() = default;
};
class ModifyDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceSSLResponseBody() {}

  explicit ModifyDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceSSLResponseBody() = default;
};
class ModifyDBInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceSSLResponseBody> body{};

  ModifyDBInstanceSSLResponse() {}

  explicit ModifyDBInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceSSLResponse() = default;
};
class ModifyMasterSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> masterCU{};
  shared_ptr<string> resourceGroupId{};

  ModifyMasterSpecRequest() {}

  explicit ModifyMasterSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (masterCU) {
      res["MasterCU"] = boost::any(*masterCU);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("MasterCU") != m.end() && !m["MasterCU"].empty()) {
      masterCU = make_shared<long>(boost::any_cast<long>(m["MasterCU"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ModifyMasterSpecRequest() = default;
};
class ModifyMasterSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  ModifyMasterSpecResponseBody() {}

  explicit ModifyMasterSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~ModifyMasterSpecResponseBody() = default;
};
class ModifyMasterSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMasterSpecResponseBody> body{};

  ModifyMasterSpecResponse() {}

  explicit ModifyMasterSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyMasterSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMasterSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMasterSpecResponse() = default;
};
class ModifyParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<bool> forceRestartInstance{};
  shared_ptr<string> parameters{};

  ModifyParametersRequest() {}

  explicit ModifyParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (forceRestartInstance) {
      res["ForceRestartInstance"] = boost::any(*forceRestartInstance);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ForceRestartInstance") != m.end() && !m["ForceRestartInstance"].empty()) {
      forceRestartInstance = make_shared<bool>(boost::any_cast<bool>(m["ForceRestartInstance"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
  }


  virtual ~ModifyParametersRequest() = default;
};
class ModifyParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyParametersResponseBody() {}

  explicit ModifyParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyParametersResponseBody() = default;
};
class ModifyParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyParametersResponseBody> body{};

  ModifyParametersResponse() {}

  explicit ModifyParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyParametersResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyParametersResponse() = default;
};
class ModifySQLCollectorPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> SQLCollectorStatus{};

  ModifySQLCollectorPolicyRequest() {}

  explicit ModifySQLCollectorPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (SQLCollectorStatus) {
      res["SQLCollectorStatus"] = boost::any(*SQLCollectorStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("SQLCollectorStatus") != m.end() && !m["SQLCollectorStatus"].empty()) {
      SQLCollectorStatus = make_shared<string>(boost::any_cast<string>(m["SQLCollectorStatus"]));
    }
  }


  virtual ~ModifySQLCollectorPolicyRequest() = default;
};
class ModifySQLCollectorPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySQLCollectorPolicyResponseBody() {}

  explicit ModifySQLCollectorPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySQLCollectorPolicyResponseBody() = default;
};
class ModifySQLCollectorPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySQLCollectorPolicyResponseBody> body{};

  ModifySQLCollectorPolicyResponse() {}

  explicit ModifySQLCollectorPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySQLCollectorPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySQLCollectorPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySQLCollectorPolicyResponse() = default;
};
class ModifySecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceIPArrayAttribute{};
  shared_ptr<string> DBInstanceIPArrayName{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> modifyMode{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityIPList{};

  ModifySecurityIpsRequest() {}

  explicit ModifySecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceIPArrayAttribute) {
      res["DBInstanceIPArrayAttribute"] = boost::any(*DBInstanceIPArrayAttribute);
    }
    if (DBInstanceIPArrayName) {
      res["DBInstanceIPArrayName"] = boost::any(*DBInstanceIPArrayName);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceIPArrayAttribute") != m.end() && !m["DBInstanceIPArrayAttribute"].empty()) {
      DBInstanceIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBInstanceIPArrayAttribute"]));
    }
    if (m.find("DBInstanceIPArrayName") != m.end() && !m["DBInstanceIPArrayName"].empty()) {
      DBInstanceIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBInstanceIPArrayName"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~ModifySecurityIpsRequest() = default;
};
class ModifySecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySecurityIpsResponseBody() {}

  explicit ModifySecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySecurityIpsResponseBody() = default;
};
class ModifySecurityIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySecurityIpsResponseBody> body{};

  ModifySecurityIpsResponse() {}

  explicit ModifySecurityIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySecurityIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecurityIpsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecurityIpsResponse() = default;
};
class ModifyVectorConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> vectorConfigurationStatus{};

  ModifyVectorConfigurationRequest() {}

  explicit ModifyVectorConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (vectorConfigurationStatus) {
      res["VectorConfigurationStatus"] = boost::any(*vectorConfigurationStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("VectorConfigurationStatus") != m.end() && !m["VectorConfigurationStatus"].empty()) {
      vectorConfigurationStatus = make_shared<string>(boost::any_cast<string>(m["VectorConfigurationStatus"]));
    }
  }


  virtual ~ModifyVectorConfigurationRequest() = default;
};
class ModifyVectorConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  ModifyVectorConfigurationResponseBody() {}

  explicit ModifyVectorConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~ModifyVectorConfigurationResponseBody() = default;
};
class ModifyVectorConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyVectorConfigurationResponseBody> body{};

  ModifyVectorConfigurationResponse() {}

  explicit ModifyVectorConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyVectorConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVectorConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVectorConfigurationResponse() = default;
};
class PauseInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};

  PauseInstanceRequest() {}

  explicit PauseInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~PauseInstanceRequest() = default;
};
class PauseInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  PauseInstanceResponseBody() {}

  explicit PauseInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~PauseInstanceResponseBody() = default;
};
class PauseInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PauseInstanceResponseBody> body{};

  PauseInstanceResponse() {}

  explicit PauseInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PauseInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PauseInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~PauseInstanceResponse() = default;
};
class QueryCollectionDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> content{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> filter{};
  shared_ptr<bool> includeValues{};
  shared_ptr<string> metrics{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> topK{};
  shared_ptr<vector<double>> vector{};

  QueryCollectionDataRequest() {}

  explicit QueryCollectionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (includeValues) {
      res["IncludeValues"] = boost::any(*includeValues);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    if (vector) {
      res["Vector"] = boost::any(*vector);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("IncludeValues") != m.end() && !m["IncludeValues"].empty()) {
      includeValues = make_shared<bool>(boost::any_cast<bool>(m["IncludeValues"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
    if (m.find("Vector") != m.end() && !m["Vector"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Vector"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Vector"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      vector = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~QueryCollectionDataRequest() = default;
};
class QueryCollectionDataShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> content{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> filter{};
  shared_ptr<bool> includeValues{};
  shared_ptr<string> metrics{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> topK{};
  shared_ptr<string> vectorShrink{};

  QueryCollectionDataShrinkRequest() {}

  explicit QueryCollectionDataShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (includeValues) {
      res["IncludeValues"] = boost::any(*includeValues);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    if (vectorShrink) {
      res["Vector"] = boost::any(*vectorShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("IncludeValues") != m.end() && !m["IncludeValues"].empty()) {
      includeValues = make_shared<bool>(boost::any_cast<bool>(m["IncludeValues"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
    if (m.find("Vector") != m.end() && !m["Vector"].empty()) {
      vectorShrink = make_shared<string>(boost::any_cast<string>(m["Vector"]));
    }
  }


  virtual ~QueryCollectionDataShrinkRequest() = default;
};
class QueryCollectionDataResponseBodyMatchesMatchValues : public Darabonba::Model {
public:
  shared_ptr<vector<double>> value{};

  QueryCollectionDataResponseBodyMatchesMatchValues() {}

  explicit QueryCollectionDataResponseBodyMatchesMatchValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("value") != m.end() && !m["value"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      value = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~QueryCollectionDataResponseBodyMatchesMatchValues() = default;
};
class QueryCollectionDataResponseBodyMatchesMatch : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<map<string, string>> metadata{};
  shared_ptr<double> score{};
  shared_ptr<QueryCollectionDataResponseBodyMatchesMatchValues> values{};

  QueryCollectionDataResponseBodyMatchesMatch() {}

  explicit QueryCollectionDataResponseBodyMatchesMatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (values) {
      res["Values"] = values ? boost::any(values->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Metadata"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(map<string, boost::any>) == m["Values"].type()) {
        QueryCollectionDataResponseBodyMatchesMatchValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Values"]));
        values = make_shared<QueryCollectionDataResponseBodyMatchesMatchValues>(model1);
      }
    }
  }


  virtual ~QueryCollectionDataResponseBodyMatchesMatch() = default;
};
class QueryCollectionDataResponseBodyMatches : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCollectionDataResponseBodyMatchesMatch>> match{};

  QueryCollectionDataResponseBodyMatches() {}

  explicit QueryCollectionDataResponseBodyMatches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (match) {
      vector<boost::any> temp1;
      for(auto item1:*match){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["match"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("match") != m.end() && !m["match"].empty()) {
      if (typeid(vector<boost::any>) == m["match"].type()) {
        vector<QueryCollectionDataResponseBodyMatchesMatch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["match"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCollectionDataResponseBodyMatchesMatch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        match = make_shared<vector<QueryCollectionDataResponseBodyMatchesMatch>>(expect1);
      }
    }
  }


  virtual ~QueryCollectionDataResponseBodyMatches() = default;
};
class QueryCollectionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryCollectionDataResponseBodyMatches> matches{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  QueryCollectionDataResponseBody() {}

  explicit QueryCollectionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matches) {
      res["Matches"] = matches ? boost::any(matches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Matches") != m.end() && !m["Matches"].empty()) {
      if (typeid(map<string, boost::any>) == m["Matches"].type()) {
        QueryCollectionDataResponseBodyMatches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Matches"]));
        matches = make_shared<QueryCollectionDataResponseBodyMatches>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryCollectionDataResponseBody() = default;
};
class QueryCollectionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCollectionDataResponseBody> body{};

  QueryCollectionDataResponse() {}

  explicit QueryCollectionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCollectionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCollectionDataResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCollectionDataResponse() = default;
};
class QueryContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> content{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> filter{};
  shared_ptr<bool> includeVector{};
  shared_ptr<string> metrics{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<long>> recallWindow{};
  shared_ptr<string> regionId{};
  shared_ptr<double> rerankFactor{};
  shared_ptr<long> topK{};
  shared_ptr<bool> useFullTextRetrieval{};

  QueryContentRequest() {}

  explicit QueryContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (includeVector) {
      res["IncludeVector"] = boost::any(*includeVector);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (recallWindow) {
      res["RecallWindow"] = boost::any(*recallWindow);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rerankFactor) {
      res["RerankFactor"] = boost::any(*rerankFactor);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    if (useFullTextRetrieval) {
      res["UseFullTextRetrieval"] = boost::any(*useFullTextRetrieval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("IncludeVector") != m.end() && !m["IncludeVector"].empty()) {
      includeVector = make_shared<bool>(boost::any_cast<bool>(m["IncludeVector"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RecallWindow") != m.end() && !m["RecallWindow"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RecallWindow"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecallWindow"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      recallWindow = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RerankFactor") != m.end() && !m["RerankFactor"].empty()) {
      rerankFactor = make_shared<double>(boost::any_cast<double>(m["RerankFactor"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
    if (m.find("UseFullTextRetrieval") != m.end() && !m["UseFullTextRetrieval"].empty()) {
      useFullTextRetrieval = make_shared<bool>(boost::any_cast<bool>(m["UseFullTextRetrieval"]));
    }
  }


  virtual ~QueryContentRequest() = default;
};
class QueryContentAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> content{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> filter{};
  shared_ptr<bool> includeVector{};
  shared_ptr<string> metrics{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<long>> recallWindow{};
  shared_ptr<string> regionId{};
  shared_ptr<double> rerankFactor{};
  shared_ptr<long> topK{};
  shared_ptr<bool> useFullTextRetrieval{};

  QueryContentAdvanceRequest() {}

  explicit QueryContentAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (includeVector) {
      res["IncludeVector"] = boost::any(*includeVector);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (recallWindow) {
      res["RecallWindow"] = boost::any(*recallWindow);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rerankFactor) {
      res["RerankFactor"] = boost::any(*rerankFactor);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    if (useFullTextRetrieval) {
      res["UseFullTextRetrieval"] = boost::any(*useFullTextRetrieval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("IncludeVector") != m.end() && !m["IncludeVector"].empty()) {
      includeVector = make_shared<bool>(boost::any_cast<bool>(m["IncludeVector"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RecallWindow") != m.end() && !m["RecallWindow"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RecallWindow"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecallWindow"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      recallWindow = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RerankFactor") != m.end() && !m["RerankFactor"].empty()) {
      rerankFactor = make_shared<double>(boost::any_cast<double>(m["RerankFactor"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
    if (m.find("UseFullTextRetrieval") != m.end() && !m["UseFullTextRetrieval"].empty()) {
      useFullTextRetrieval = make_shared<bool>(boost::any_cast<bool>(m["UseFullTextRetrieval"]));
    }
  }


  virtual ~QueryContentAdvanceRequest() = default;
};
class QueryContentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> content{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> filter{};
  shared_ptr<bool> includeVector{};
  shared_ptr<string> metrics{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> recallWindowShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<double> rerankFactor{};
  shared_ptr<long> topK{};
  shared_ptr<bool> useFullTextRetrieval{};

  QueryContentShrinkRequest() {}

  explicit QueryContentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (includeVector) {
      res["IncludeVector"] = boost::any(*includeVector);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (recallWindowShrink) {
      res["RecallWindow"] = boost::any(*recallWindowShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rerankFactor) {
      res["RerankFactor"] = boost::any(*rerankFactor);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    if (useFullTextRetrieval) {
      res["UseFullTextRetrieval"] = boost::any(*useFullTextRetrieval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("IncludeVector") != m.end() && !m["IncludeVector"].empty()) {
      includeVector = make_shared<bool>(boost::any_cast<bool>(m["IncludeVector"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RecallWindow") != m.end() && !m["RecallWindow"].empty()) {
      recallWindowShrink = make_shared<string>(boost::any_cast<string>(m["RecallWindow"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RerankFactor") != m.end() && !m["RerankFactor"].empty()) {
      rerankFactor = make_shared<double>(boost::any_cast<double>(m["RerankFactor"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
    if (m.find("UseFullTextRetrieval") != m.end() && !m["UseFullTextRetrieval"].empty()) {
      useFullTextRetrieval = make_shared<bool>(boost::any_cast<bool>(m["UseFullTextRetrieval"]));
    }
  }


  virtual ~QueryContentShrinkRequest() = default;
};
class QueryContentResponseBodyMatchesMatchListVector : public Darabonba::Model {
public:
  shared_ptr<vector<double>> vectorList{};

  QueryContentResponseBodyMatchesMatchListVector() {}

  explicit QueryContentResponseBodyMatchesMatchListVector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vectorList) {
      res["VectorList"] = boost::any(*vectorList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VectorList") != m.end() && !m["VectorList"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["VectorList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VectorList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      vectorList = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~QueryContentResponseBodyMatchesMatchListVector() = default;
};
class QueryContentResponseBodyMatchesMatchList : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileURL{};
  shared_ptr<string> id{};
  shared_ptr<string> loaderMetadata{};
  shared_ptr<map<string, string>> metadata{};
  shared_ptr<double> rerankScore{};
  shared_ptr<long> retrievalSource{};
  shared_ptr<double> score{};
  shared_ptr<QueryContentResponseBodyMatchesMatchListVector> vector{};

  QueryContentResponseBodyMatchesMatchList() {}

  explicit QueryContentResponseBodyMatchesMatchList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileURL) {
      res["FileURL"] = boost::any(*fileURL);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (loaderMetadata) {
      res["LoaderMetadata"] = boost::any(*loaderMetadata);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (rerankScore) {
      res["RerankScore"] = boost::any(*rerankScore);
    }
    if (retrievalSource) {
      res["RetrievalSource"] = boost::any(*retrievalSource);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (vector) {
      res["Vector"] = vector ? boost::any(vector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURL = make_shared<string>(boost::any_cast<string>(m["FileURL"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LoaderMetadata") != m.end() && !m["LoaderMetadata"].empty()) {
      loaderMetadata = make_shared<string>(boost::any_cast<string>(m["LoaderMetadata"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Metadata"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RerankScore") != m.end() && !m["RerankScore"].empty()) {
      rerankScore = make_shared<double>(boost::any_cast<double>(m["RerankScore"]));
    }
    if (m.find("RetrievalSource") != m.end() && !m["RetrievalSource"].empty()) {
      retrievalSource = make_shared<long>(boost::any_cast<long>(m["RetrievalSource"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Vector") != m.end() && !m["Vector"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vector"].type()) {
        QueryContentResponseBodyMatchesMatchListVector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vector"]));
        vector = make_shared<QueryContentResponseBodyMatchesMatchListVector>(model1);
      }
    }
  }


  virtual ~QueryContentResponseBodyMatchesMatchList() = default;
};
class QueryContentResponseBodyMatches : public Darabonba::Model {
public:
  shared_ptr<vector<QueryContentResponseBodyMatchesMatchList>> matchList{};

  QueryContentResponseBodyMatches() {}

  explicit QueryContentResponseBodyMatches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchList) {
      vector<boost::any> temp1;
      for(auto item1:*matchList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MatchList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchList") != m.end() && !m["MatchList"].empty()) {
      if (typeid(vector<boost::any>) == m["MatchList"].type()) {
        vector<QueryContentResponseBodyMatchesMatchList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MatchList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryContentResponseBodyMatchesMatchList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        matchList = make_shared<vector<QueryContentResponseBodyMatchesMatchList>>(expect1);
      }
    }
  }


  virtual ~QueryContentResponseBodyMatches() = default;
};
class QueryContentResponseBodyUsage : public Darabonba::Model {
public:
  shared_ptr<string> embeddingEntries{};
  shared_ptr<string> embeddingTokens{};

  QueryContentResponseBodyUsage() {}

  explicit QueryContentResponseBodyUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (embeddingEntries) {
      res["EmbeddingEntries"] = boost::any(*embeddingEntries);
    }
    if (embeddingTokens) {
      res["EmbeddingTokens"] = boost::any(*embeddingTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmbeddingEntries") != m.end() && !m["EmbeddingEntries"].empty()) {
      embeddingEntries = make_shared<string>(boost::any_cast<string>(m["EmbeddingEntries"]));
    }
    if (m.find("EmbeddingTokens") != m.end() && !m["EmbeddingTokens"].empty()) {
      embeddingTokens = make_shared<string>(boost::any_cast<string>(m["EmbeddingTokens"]));
    }
  }


  virtual ~QueryContentResponseBodyUsage() = default;
};
class QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> fileName{};
  shared_ptr<string> id{};
  shared_ptr<string> loaderMetadata{};
  shared_ptr<map<string, string>> metadata{};

  QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch() {}

  explicit QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (loaderMetadata) {
      res["LoaderMetadata"] = boost::any(*loaderMetadata);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LoaderMetadata") != m.end() && !m["LoaderMetadata"].empty()) {
      loaderMetadata = make_shared<string>(boost::any_cast<string>(m["LoaderMetadata"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Metadata"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch() = default;
};
class QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch : public Darabonba::Model {
public:
  shared_ptr<vector<QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch>> windowMatch{};

  QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch() {}

  explicit QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (windowMatch) {
      vector<boost::any> temp1;
      for(auto item1:*windowMatch){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["windowMatch"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("windowMatch") != m.end() && !m["windowMatch"].empty()) {
      if (typeid(vector<boost::any>) == m["windowMatch"].type()) {
        vector<QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["windowMatch"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        windowMatch = make_shared<vector<QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch>>(expect1);
      }
    }
  }


  virtual ~QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch() = default;
};
class QueryContentResponseBodyWindowMatchesWindowMatches : public Darabonba::Model {
public:
  shared_ptr<QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch> windowMatch{};

  QueryContentResponseBodyWindowMatchesWindowMatches() {}

  explicit QueryContentResponseBodyWindowMatchesWindowMatches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (windowMatch) {
      res["WindowMatch"] = windowMatch ? boost::any(windowMatch->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WindowMatch") != m.end() && !m["WindowMatch"].empty()) {
      if (typeid(map<string, boost::any>) == m["WindowMatch"].type()) {
        QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WindowMatch"]));
        windowMatch = make_shared<QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatch>(model1);
      }
    }
  }


  virtual ~QueryContentResponseBodyWindowMatchesWindowMatches() = default;
};
class QueryContentResponseBodyWindowMatches : public Darabonba::Model {
public:
  shared_ptr<vector<QueryContentResponseBodyWindowMatchesWindowMatches>> windowMatches{};

  QueryContentResponseBodyWindowMatches() {}

  explicit QueryContentResponseBodyWindowMatches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (windowMatches) {
      vector<boost::any> temp1;
      for(auto item1:*windowMatches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["windowMatches"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("windowMatches") != m.end() && !m["windowMatches"].empty()) {
      if (typeid(vector<boost::any>) == m["windowMatches"].type()) {
        vector<QueryContentResponseBodyWindowMatchesWindowMatches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["windowMatches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryContentResponseBodyWindowMatchesWindowMatches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        windowMatches = make_shared<vector<QueryContentResponseBodyWindowMatchesWindowMatches>>(expect1);
      }
    }
  }


  virtual ~QueryContentResponseBodyWindowMatches() = default;
};
class QueryContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> embeddingTokens{};
  shared_ptr<QueryContentResponseBodyMatches> matches{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<QueryContentResponseBodyUsage> usage{};
  shared_ptr<QueryContentResponseBodyWindowMatches> windowMatches{};

  QueryContentResponseBody() {}

  explicit QueryContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (embeddingTokens) {
      res["EmbeddingTokens"] = boost::any(*embeddingTokens);
    }
    if (matches) {
      res["Matches"] = matches ? boost::any(matches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (usage) {
      res["Usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (windowMatches) {
      res["WindowMatches"] = windowMatches ? boost::any(windowMatches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmbeddingTokens") != m.end() && !m["EmbeddingTokens"].empty()) {
      embeddingTokens = make_shared<string>(boost::any_cast<string>(m["EmbeddingTokens"]));
    }
    if (m.find("Matches") != m.end() && !m["Matches"].empty()) {
      if (typeid(map<string, boost::any>) == m["Matches"].type()) {
        QueryContentResponseBodyMatches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Matches"]));
        matches = make_shared<QueryContentResponseBodyMatches>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Usage"].type()) {
        QueryContentResponseBodyUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Usage"]));
        usage = make_shared<QueryContentResponseBodyUsage>(model1);
      }
    }
    if (m.find("WindowMatches") != m.end() && !m["WindowMatches"].empty()) {
      if (typeid(map<string, boost::any>) == m["WindowMatches"].type()) {
        QueryContentResponseBodyWindowMatches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WindowMatches"]));
        windowMatches = make_shared<QueryContentResponseBodyWindowMatches>(model1);
      }
    }
  }


  virtual ~QueryContentResponseBody() = default;
};
class QueryContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryContentResponseBody> body{};

  QueryContentResponse() {}

  explicit QueryContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryContentResponseBody>(model1);
      }
    }
  }


  virtual ~QueryContentResponse() = default;
};
class RebalanceDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};

  RebalanceDBInstanceRequest() {}

  explicit RebalanceDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~RebalanceDBInstanceRequest() = default;
};
class RebalanceDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RebalanceDBInstanceResponseBody() {}

  explicit RebalanceDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RebalanceDBInstanceResponseBody() = default;
};
class RebalanceDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RebalanceDBInstanceResponseBody> body{};

  RebalanceDBInstanceResponse() {}

  explicit RebalanceDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebalanceDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebalanceDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RebalanceDBInstanceResponse() = default;
};
class ReleaseInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<string> currentConnectionString{};
  shared_ptr<string> DBInstanceId{};

  ReleaseInstancePublicConnectionRequest() {}

  explicit ReleaseInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~ReleaseInstancePublicConnectionRequest() = default;
};
class ReleaseInstancePublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseInstancePublicConnectionResponseBody() {}

  explicit ReleaseInstancePublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseInstancePublicConnectionResponseBody() = default;
};
class ReleaseInstancePublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseInstancePublicConnectionResponseBody> body{};

  ReleaseInstancePublicConnectionResponse() {}

  explicit ReleaseInstancePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstancePublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstancePublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstancePublicConnectionResponse() = default;
};
class ResetAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBInstanceId{};

  ResetAccountPasswordRequest() {}

  explicit ResetAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~ResetAccountPasswordRequest() = default;
};
class ResetAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAccountPasswordResponseBody() {}

  explicit ResetAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetAccountPasswordResponseBody() = default;
};
class ResetAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAccountPasswordResponseBody> body{};

  ResetAccountPasswordResponse() {}

  explicit ResetAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAccountPasswordResponse() = default;
};
class ResetIMVMonitorDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};

  ResetIMVMonitorDataRequest() {}

  explicit ResetIMVMonitorDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
  }


  virtual ~ResetIMVMonitorDataRequest() = default;
};
class ResetIMVMonitorDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  ResetIMVMonitorDataResponseBody() {}

  explicit ResetIMVMonitorDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~ResetIMVMonitorDataResponseBody() = default;
};
class ResetIMVMonitorDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetIMVMonitorDataResponseBody> body{};

  ResetIMVMonitorDataResponse() {}

  explicit ResetIMVMonitorDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetIMVMonitorDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetIMVMonitorDataResponseBody>(model1);
      }
    }
  }


  virtual ~ResetIMVMonitorDataResponse() = default;
};
class RestartDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};

  RestartDBInstanceRequest() {}

  explicit RestartDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~RestartDBInstanceRequest() = default;
};
class RestartDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartDBInstanceResponseBody() {}

  explicit RestartDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartDBInstanceResponseBody() = default;
};
class RestartDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartDBInstanceResponseBody> body{};

  RestartDBInstanceResponse() {}

  explicit RestartDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartDBInstanceResponse() = default;
};
class ResumeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};

  ResumeInstanceRequest() {}

  explicit ResumeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~ResumeInstanceRequest() = default;
};
class ResumeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  ResumeInstanceResponseBody() {}

  explicit ResumeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~ResumeInstanceResponseBody() = default;
};
class ResumeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResumeInstanceResponseBody> body{};

  ResumeInstanceResponse() {}

  explicit ResumeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeInstanceResponse() = default;
};
class SetDBInstancePlanStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> planId{};
  shared_ptr<string> planStatus{};

  SetDBInstancePlanStatusRequest() {}

  explicit SetDBInstancePlanStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planStatus) {
      res["PlanStatus"] = boost::any(*planStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanStatus") != m.end() && !m["PlanStatus"].empty()) {
      planStatus = make_shared<string>(boost::any_cast<string>(m["PlanStatus"]));
    }
  }


  virtual ~SetDBInstancePlanStatusRequest() = default;
};
class SetDBInstancePlanStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> planId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  SetDBInstancePlanStatusResponseBody() {}

  explicit SetDBInstancePlanStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
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
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SetDBInstancePlanStatusResponseBody() = default;
};
class SetDBInstancePlanStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDBInstancePlanStatusResponseBody> body{};

  SetDBInstancePlanStatusResponse() {}

  explicit SetDBInstancePlanStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDBInstancePlanStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDBInstancePlanStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetDBInstancePlanStatusResponse() = default;
};
class SetDataShareInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceList{};
  shared_ptr<string> operationType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  SetDataShareInstanceRequest() {}

  explicit SetDataShareInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceList) {
      res["InstanceList"] = boost::any(*instanceList);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SetDataShareInstanceRequest() = default;
};
class SetDataShareInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceListShrink{};
  shared_ptr<string> operationType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  SetDataShareInstanceShrinkRequest() {}

  explicit SetDataShareInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceListShrink) {
      res["InstanceList"] = boost::any(*instanceListShrink);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      instanceListShrink = make_shared<string>(boost::any_cast<string>(m["InstanceList"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SetDataShareInstanceShrinkRequest() = default;
};
class SetDataShareInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  SetDataShareInstanceResponseBody() {}

  explicit SetDataShareInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
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
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SetDataShareInstanceResponseBody() = default;
};
class SetDataShareInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDataShareInstanceResponseBody> body{};

  SetDataShareInstanceResponse() {}

  explicit SetDataShareInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDataShareInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDataShareInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~SetDataShareInstanceResponse() = default;
};
class SwitchDBInstanceNetTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> port{};

  SwitchDBInstanceNetTypeRequest() {}

  explicit SwitchDBInstanceNetTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~SwitchDBInstanceNetTypeRequest() = default;
};
class SwitchDBInstanceNetTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchDBInstanceNetTypeResponseBody() {}

  explicit SwitchDBInstanceNetTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchDBInstanceNetTypeResponseBody() = default;
};
class SwitchDBInstanceNetTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchDBInstanceNetTypeResponseBody> body{};

  SwitchDBInstanceNetTypeResponse() {}

  explicit SwitchDBInstanceNetTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchDBInstanceNetTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchDBInstanceNetTypeResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchDBInstanceNetTypeResponse() = default;
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
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
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
class UnloadSampleDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};

  UnloadSampleDataRequest() {}

  explicit UnloadSampleDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~UnloadSampleDataRequest() = default;
};
class UnloadSampleDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> status{};

  UnloadSampleDataResponseBody() {}

  explicit UnloadSampleDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~UnloadSampleDataResponseBody() = default;
};
class UnloadSampleDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnloadSampleDataResponseBody> body{};

  UnloadSampleDataResponse() {}

  explicit UnloadSampleDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnloadSampleDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnloadSampleDataResponseBody>(model1);
      }
    }
  }


  virtual ~UnloadSampleDataResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
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
class UpdateCollectionDataMetadataRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> filter{};
  shared_ptr<vector<string>> ids{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  UpdateCollectionDataMetadataRequest() {}

  explicit UpdateCollectionDataMetadataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ids = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateCollectionDataMetadataRequest() = default;
};
class UpdateCollectionDataMetadataShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> filter{};
  shared_ptr<string> idsShrink{};
  shared_ptr<string> metadataShrink{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  UpdateCollectionDataMetadataShrinkRequest() {}

  explicit UpdateCollectionDataMetadataShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (idsShrink) {
      res["Ids"] = boost::any(*idsShrink);
    }
    if (metadataShrink) {
      res["Metadata"] = boost::any(*metadataShrink);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      idsShrink = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadataShrink = make_shared<string>(boost::any_cast<string>(m["Metadata"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateCollectionDataMetadataShrinkRequest() = default;
};
class UpdateCollectionDataMetadataResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> appliedRows{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  UpdateCollectionDataMetadataResponseBody() {}

  explicit UpdateCollectionDataMetadataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appliedRows) {
      res["AppliedRows"] = boost::any(*appliedRows);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("AppliedRows") != m.end() && !m["AppliedRows"].empty()) {
      appliedRows = make_shared<long>(boost::any_cast<long>(m["AppliedRows"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateCollectionDataMetadataResponseBody() = default;
};
class UpdateCollectionDataMetadataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCollectionDataMetadataResponseBody> body{};

  UpdateCollectionDataMetadataResponse() {}

  explicit UpdateCollectionDataMetadataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCollectionDataMetadataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCollectionDataMetadataResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCollectionDataMetadataResponse() = default;
};
class UpdateDBInstancePlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> planConfig{};
  shared_ptr<string> planDesc{};
  shared_ptr<string> planEndDate{};
  shared_ptr<string> planId{};
  shared_ptr<string> planName{};
  shared_ptr<string> planStartDate{};

  UpdateDBInstancePlanRequest() {}

  explicit UpdateDBInstancePlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (planConfig) {
      res["PlanConfig"] = boost::any(*planConfig);
    }
    if (planDesc) {
      res["PlanDesc"] = boost::any(*planDesc);
    }
    if (planEndDate) {
      res["PlanEndDate"] = boost::any(*planEndDate);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    if (planStartDate) {
      res["PlanStartDate"] = boost::any(*planStartDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlanConfig") != m.end() && !m["PlanConfig"].empty()) {
      planConfig = make_shared<string>(boost::any_cast<string>(m["PlanConfig"]));
    }
    if (m.find("PlanDesc") != m.end() && !m["PlanDesc"].empty()) {
      planDesc = make_shared<string>(boost::any_cast<string>(m["PlanDesc"]));
    }
    if (m.find("PlanEndDate") != m.end() && !m["PlanEndDate"].empty()) {
      planEndDate = make_shared<string>(boost::any_cast<string>(m["PlanEndDate"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
    if (m.find("PlanStartDate") != m.end() && !m["PlanStartDate"].empty()) {
      planStartDate = make_shared<string>(boost::any_cast<string>(m["PlanStartDate"]));
    }
  }


  virtual ~UpdateDBInstancePlanRequest() = default;
};
class UpdateDBInstancePlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> planId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  UpdateDBInstancePlanResponseBody() {}

  explicit UpdateDBInstancePlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateDBInstancePlanResponseBody() = default;
};
class UpdateDBInstancePlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDBInstancePlanResponseBody> body{};

  UpdateDBInstancePlanResponse() {}

  explicit UpdateDBInstancePlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDBInstancePlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDBInstancePlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDBInstancePlanResponse() = default;
};
class UpgradeDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceGroupCount{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<string> masterNodeNum{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> segDiskPerformanceLevel{};
  shared_ptr<string> segNodeNum{};
  shared_ptr<string> segStorageType{};
  shared_ptr<string> storageSize{};
  shared_ptr<long> upgradeType{};

  UpgradeDBInstanceRequest() {}

  explicit UpgradeDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceGroupCount) {
      res["DBInstanceGroupCount"] = boost::any(*DBInstanceGroupCount);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (masterNodeNum) {
      res["MasterNodeNum"] = boost::any(*masterNodeNum);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (segDiskPerformanceLevel) {
      res["SegDiskPerformanceLevel"] = boost::any(*segDiskPerformanceLevel);
    }
    if (segNodeNum) {
      res["SegNodeNum"] = boost::any(*segNodeNum);
    }
    if (segStorageType) {
      res["SegStorageType"] = boost::any(*segStorageType);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (upgradeType) {
      res["UpgradeType"] = boost::any(*upgradeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceGroupCount") != m.end() && !m["DBInstanceGroupCount"].empty()) {
      DBInstanceGroupCount = make_shared<string>(boost::any_cast<string>(m["DBInstanceGroupCount"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("MasterNodeNum") != m.end() && !m["MasterNodeNum"].empty()) {
      masterNodeNum = make_shared<string>(boost::any_cast<string>(m["MasterNodeNum"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SegDiskPerformanceLevel") != m.end() && !m["SegDiskPerformanceLevel"].empty()) {
      segDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["SegDiskPerformanceLevel"]));
    }
    if (m.find("SegNodeNum") != m.end() && !m["SegNodeNum"].empty()) {
      segNodeNum = make_shared<string>(boost::any_cast<string>(m["SegNodeNum"]));
    }
    if (m.find("SegStorageType") != m.end() && !m["SegStorageType"].empty()) {
      segStorageType = make_shared<string>(boost::any_cast<string>(m["SegStorageType"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<string>(boost::any_cast<string>(m["StorageSize"]));
    }
    if (m.find("UpgradeType") != m.end() && !m["UpgradeType"].empty()) {
      upgradeType = make_shared<long>(boost::any_cast<long>(m["UpgradeType"]));
    }
  }


  virtual ~UpgradeDBInstanceRequest() = default;
};
class UpgradeDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  UpgradeDBInstanceResponseBody() {}

  explicit UpgradeDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeDBInstanceResponseBody() = default;
};
class UpgradeDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeDBInstanceResponseBody> body{};

  UpgradeDBInstanceResponse() {}

  explicit UpgradeDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBInstanceResponse() = default;
};
class UpgradeDBVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> majorVersion{};
  shared_ptr<string> minorVersion{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> switchTimeMode{};

  UpgradeDBVersionRequest() {}

  explicit UpgradeDBVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (majorVersion) {
      res["MajorVersion"] = boost::any(*majorVersion);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    if (switchTimeMode) {
      res["SwitchTimeMode"] = boost::any(*switchTimeMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("MajorVersion") != m.end() && !m["MajorVersion"].empty()) {
      majorVersion = make_shared<string>(boost::any_cast<string>(m["MajorVersion"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("SwitchTimeMode") != m.end() && !m["SwitchTimeMode"].empty()) {
      switchTimeMode = make_shared<string>(boost::any_cast<string>(m["SwitchTimeMode"]));
    }
  }


  virtual ~UpgradeDBVersionRequest() = default;
};
class UpgradeDBVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UpgradeDBVersionResponseBody() {}

  explicit UpgradeDBVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpgradeDBVersionResponseBody() = default;
};
class UpgradeDBVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeDBVersionResponseBody> body{};

  UpgradeDBVersionResponse() {}

  explicit UpgradeDBVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeDBVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBVersionResponse() = default;
};
class UploadDocumentAsyncRequest : public Darabonba::Model {
public:
  shared_ptr<long> chunkOverlap{};
  shared_ptr<long> chunkSize{};
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> documentLoaderName{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> separators{};
  shared_ptr<string> textSplitterName{};
  shared_ptr<bool> zhTitleEnhance{};

  UploadDocumentAsyncRequest() {}

  explicit UploadDocumentAsyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkOverlap) {
      res["ChunkOverlap"] = boost::any(*chunkOverlap);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (documentLoaderName) {
      res["DocumentLoaderName"] = boost::any(*documentLoaderName);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (separators) {
      res["Separators"] = boost::any(*separators);
    }
    if (textSplitterName) {
      res["TextSplitterName"] = boost::any(*textSplitterName);
    }
    if (zhTitleEnhance) {
      res["ZhTitleEnhance"] = boost::any(*zhTitleEnhance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChunkOverlap") != m.end() && !m["ChunkOverlap"].empty()) {
      chunkOverlap = make_shared<long>(boost::any_cast<long>(m["ChunkOverlap"]));
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DocumentLoaderName") != m.end() && !m["DocumentLoaderName"].empty()) {
      documentLoaderName = make_shared<string>(boost::any_cast<string>(m["DocumentLoaderName"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Separators") != m.end() && !m["Separators"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Separators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Separators"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      separators = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TextSplitterName") != m.end() && !m["TextSplitterName"].empty()) {
      textSplitterName = make_shared<string>(boost::any_cast<string>(m["TextSplitterName"]));
    }
    if (m.find("ZhTitleEnhance") != m.end() && !m["ZhTitleEnhance"].empty()) {
      zhTitleEnhance = make_shared<bool>(boost::any_cast<bool>(m["ZhTitleEnhance"]));
    }
  }


  virtual ~UploadDocumentAsyncRequest() = default;
};
class UploadDocumentAsyncAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> chunkOverlap{};
  shared_ptr<long> chunkSize{};
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> documentLoaderName{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<map<string, boost::any>> metadata{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> separators{};
  shared_ptr<string> textSplitterName{};
  shared_ptr<bool> zhTitleEnhance{};

  UploadDocumentAsyncAdvanceRequest() {}

  explicit UploadDocumentAsyncAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkOverlap) {
      res["ChunkOverlap"] = boost::any(*chunkOverlap);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (documentLoaderName) {
      res["DocumentLoaderName"] = boost::any(*documentLoaderName);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (separators) {
      res["Separators"] = boost::any(*separators);
    }
    if (textSplitterName) {
      res["TextSplitterName"] = boost::any(*textSplitterName);
    }
    if (zhTitleEnhance) {
      res["ZhTitleEnhance"] = boost::any(*zhTitleEnhance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChunkOverlap") != m.end() && !m["ChunkOverlap"].empty()) {
      chunkOverlap = make_shared<long>(boost::any_cast<long>(m["ChunkOverlap"]));
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DocumentLoaderName") != m.end() && !m["DocumentLoaderName"].empty()) {
      documentLoaderName = make_shared<string>(boost::any_cast<string>(m["DocumentLoaderName"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Separators") != m.end() && !m["Separators"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Separators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Separators"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      separators = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TextSplitterName") != m.end() && !m["TextSplitterName"].empty()) {
      textSplitterName = make_shared<string>(boost::any_cast<string>(m["TextSplitterName"]));
    }
    if (m.find("ZhTitleEnhance") != m.end() && !m["ZhTitleEnhance"].empty()) {
      zhTitleEnhance = make_shared<bool>(boost::any_cast<bool>(m["ZhTitleEnhance"]));
    }
  }


  virtual ~UploadDocumentAsyncAdvanceRequest() = default;
};
class UploadDocumentAsyncShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> chunkOverlap{};
  shared_ptr<long> chunkSize{};
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> documentLoaderName{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> metadataShrink{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> separatorsShrink{};
  shared_ptr<string> textSplitterName{};
  shared_ptr<bool> zhTitleEnhance{};

  UploadDocumentAsyncShrinkRequest() {}

  explicit UploadDocumentAsyncShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkOverlap) {
      res["ChunkOverlap"] = boost::any(*chunkOverlap);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (documentLoaderName) {
      res["DocumentLoaderName"] = boost::any(*documentLoaderName);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (metadataShrink) {
      res["Metadata"] = boost::any(*metadataShrink);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (separatorsShrink) {
      res["Separators"] = boost::any(*separatorsShrink);
    }
    if (textSplitterName) {
      res["TextSplitterName"] = boost::any(*textSplitterName);
    }
    if (zhTitleEnhance) {
      res["ZhTitleEnhance"] = boost::any(*zhTitleEnhance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChunkOverlap") != m.end() && !m["ChunkOverlap"].empty()) {
      chunkOverlap = make_shared<long>(boost::any_cast<long>(m["ChunkOverlap"]));
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DocumentLoaderName") != m.end() && !m["DocumentLoaderName"].empty()) {
      documentLoaderName = make_shared<string>(boost::any_cast<string>(m["DocumentLoaderName"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadataShrink = make_shared<string>(boost::any_cast<string>(m["Metadata"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Separators") != m.end() && !m["Separators"].empty()) {
      separatorsShrink = make_shared<string>(boost::any_cast<string>(m["Separators"]));
    }
    if (m.find("TextSplitterName") != m.end() && !m["TextSplitterName"].empty()) {
      textSplitterName = make_shared<string>(boost::any_cast<string>(m["TextSplitterName"]));
    }
    if (m.find("ZhTitleEnhance") != m.end() && !m["ZhTitleEnhance"].empty()) {
      zhTitleEnhance = make_shared<bool>(boost::any_cast<bool>(m["ZhTitleEnhance"]));
    }
  }


  virtual ~UploadDocumentAsyncShrinkRequest() = default;
};
class UploadDocumentAsyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  UploadDocumentAsyncResponseBody() {}

  explicit UploadDocumentAsyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UploadDocumentAsyncResponseBody() = default;
};
class UploadDocumentAsyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadDocumentAsyncResponseBody> body{};

  UploadDocumentAsyncResponse() {}

  explicit UploadDocumentAsyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadDocumentAsyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadDocumentAsyncResponseBody>(model1);
      }
    }
  }


  virtual ~UploadDocumentAsyncResponse() = default;
};
class UpsertChunksRequestTextChunks : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<map<string, boost::any>> metadata{};

  UpsertChunksRequestTextChunks() {}

  explicit UpsertChunksRequestTextChunks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpsertChunksRequestTextChunks() = default;
};
class UpsertChunksRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<UpsertChunksRequestTextChunks>> textChunks{};

  UpsertChunksRequest() {}

  explicit UpsertChunksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (textChunks) {
      vector<boost::any> temp1;
      for(auto item1:*textChunks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TextChunks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TextChunks") != m.end() && !m["TextChunks"].empty()) {
      if (typeid(vector<boost::any>) == m["TextChunks"].type()) {
        vector<UpsertChunksRequestTextChunks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TextChunks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpsertChunksRequestTextChunks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textChunks = make_shared<vector<UpsertChunksRequestTextChunks>>(expect1);
      }
    }
  }


  virtual ~UpsertChunksRequest() = default;
};
class UpsertChunksShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> textChunksShrink{};

  UpsertChunksShrinkRequest() {}

  explicit UpsertChunksShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (textChunksShrink) {
      res["TextChunks"] = boost::any(*textChunksShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TextChunks") != m.end() && !m["TextChunks"].empty()) {
      textChunksShrink = make_shared<string>(boost::any_cast<string>(m["TextChunks"]));
    }
  }


  virtual ~UpsertChunksShrinkRequest() = default;
};
class UpsertChunksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> embeddingTokens{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  UpsertChunksResponseBody() {}

  explicit UpsertChunksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (embeddingTokens) {
      res["EmbeddingTokens"] = boost::any(*embeddingTokens);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("EmbeddingTokens") != m.end() && !m["EmbeddingTokens"].empty()) {
      embeddingTokens = make_shared<string>(boost::any_cast<string>(m["EmbeddingTokens"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpsertChunksResponseBody() = default;
};
class UpsertChunksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpsertChunksResponseBody> body{};

  UpsertChunksResponse() {}

  explicit UpsertChunksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpsertChunksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpsertChunksResponseBody>(model1);
      }
    }
  }


  virtual ~UpsertChunksResponse() = default;
};
class UpsertCollectionDataRequestRows : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<map<string, string>> metadata{};
  shared_ptr<vector<double>> vector{};

  UpsertCollectionDataRequestRows() {}

  explicit UpsertCollectionDataRequestRows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (vector) {
      res["Vector"] = boost::any(*vector);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Metadata"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Vector") != m.end() && !m["Vector"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Vector"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Vector"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      vector = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~UpsertCollectionDataRequestRows() = default;
};
class UpsertCollectionDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<UpsertCollectionDataRequestRows>> rows{};

  UpsertCollectionDataRequest() {}

  explicit UpsertCollectionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rows) {
      vector<boost::any> temp1;
      for(auto item1:*rows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rows"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<UpsertCollectionDataRequestRows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpsertCollectionDataRequestRows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rows = make_shared<vector<UpsertCollectionDataRequestRows>>(expect1);
      }
    }
  }


  virtual ~UpsertCollectionDataRequest() = default;
};
class UpsertCollectionDataShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> rowsShrink{};

  UpsertCollectionDataShrinkRequest() {}

  explicit UpsertCollectionDataShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (rowsShrink) {
      res["Rows"] = boost::any(*rowsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rowsShrink = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
  }


  virtual ~UpsertCollectionDataShrinkRequest() = default;
};
class UpsertCollectionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  UpsertCollectionDataResponseBody() {}

  explicit UpsertCollectionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpsertCollectionDataResponseBody() = default;
};
class UpsertCollectionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpsertCollectionDataResponseBody> body{};

  UpsertCollectionDataResponse() {}

  explicit UpsertCollectionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpsertCollectionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpsertCollectionDataResponseBody>(model1);
      }
    }
  }


  virtual ~UpsertCollectionDataResponse() = default;
};
class UpsertCollectionDataAsyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  UpsertCollectionDataAsyncRequest() {}

  explicit UpsertCollectionDataAsyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpsertCollectionDataAsyncRequest() = default;
};
class UpsertCollectionDataAsyncAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespacePassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};

  UpsertCollectionDataAsyncAdvanceRequest() {}

  explicit UpsertCollectionDataAsyncAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespacePassword) {
      res["NamespacePassword"] = boost::any(*namespacePassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespacePassword") != m.end() && !m["NamespacePassword"].empty()) {
      namespacePassword = make_shared<string>(boost::any_cast<string>(m["NamespacePassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpsertCollectionDataAsyncAdvanceRequest() = default;
};
class UpsertCollectionDataAsyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  UpsertCollectionDataAsyncResponseBody() {}

  explicit UpsertCollectionDataAsyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpsertCollectionDataAsyncResponseBody() = default;
};
class UpsertCollectionDataAsyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpsertCollectionDataAsyncResponseBody> body{};

  UpsertCollectionDataAsyncResponse() {}

  explicit UpsertCollectionDataAsyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpsertCollectionDataAsyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpsertCollectionDataAsyncResponseBody>(model1);
      }
    }
  }


  virtual ~UpsertCollectionDataAsyncResponse() = default;
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
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request);
  CancelUploadDocumentJobResponse cancelUploadDocumentJobWithOptions(shared_ptr<CancelUploadDocumentJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelUploadDocumentJobResponse cancelUploadDocumentJob(shared_ptr<CancelUploadDocumentJobRequest> request);
  CancelUpsertCollectionDataJobResponse cancelUpsertCollectionDataJobWithOptions(shared_ptr<CancelUpsertCollectionDataJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelUpsertCollectionDataJobResponse cancelUpsertCollectionDataJob(shared_ptr<CancelUpsertCollectionDataJobRequest> request);
  CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(shared_ptr<CheckServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckServiceLinkedRoleResponse checkServiceLinkedRole(shared_ptr<CheckServiceLinkedRoleRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateCollectionResponse createCollectionWithOptions(shared_ptr<CreateCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCollectionResponse createCollection(shared_ptr<CreateCollectionRequest> request);
  CreateDBInstanceResponse createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBInstanceResponse createDBInstance(shared_ptr<CreateDBInstanceRequest> request);
  CreateDBInstancePlanResponse createDBInstancePlanWithOptions(shared_ptr<CreateDBInstancePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBInstancePlanResponse createDBInstancePlan(shared_ptr<CreateDBInstancePlanRequest> request);
  CreateDocumentCollectionResponse createDocumentCollectionWithOptions(shared_ptr<CreateDocumentCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDocumentCollectionResponse createDocumentCollection(shared_ptr<CreateDocumentCollectionRequest> request);
  CreateNamespaceResponse createNamespaceWithOptions(shared_ptr<CreateNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNamespaceResponse createNamespace(shared_ptr<CreateNamespaceRequest> request);
  CreateSampleDataResponse createSampleDataWithOptions(shared_ptr<CreateSampleDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSampleDataResponse createSampleData(shared_ptr<CreateSampleDataRequest> request);
  CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleResponse createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request);
  CreateVectorIndexResponse createVectorIndexWithOptions(shared_ptr<CreateVectorIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVectorIndexResponse createVectorIndex(shared_ptr<CreateVectorIndexRequest> request);
  DeleteCollectionResponse deleteCollectionWithOptions(shared_ptr<DeleteCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCollectionResponse deleteCollection(shared_ptr<DeleteCollectionRequest> request);
  DeleteCollectionDataResponse deleteCollectionDataWithOptions(shared_ptr<DeleteCollectionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCollectionDataResponse deleteCollectionData(shared_ptr<DeleteCollectionDataRequest> request);
  DeleteDBInstanceResponse deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBInstanceResponse deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request);
  DeleteDBInstancePlanResponse deleteDBInstancePlanWithOptions(shared_ptr<DeleteDBInstancePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBInstancePlanResponse deleteDBInstancePlan(shared_ptr<DeleteDBInstancePlanRequest> request);
  DeleteDocumentResponse deleteDocumentWithOptions(shared_ptr<DeleteDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDocumentResponse deleteDocument(shared_ptr<DeleteDocumentRequest> request);
  DeleteDocumentCollectionResponse deleteDocumentCollectionWithOptions(shared_ptr<DeleteDocumentCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDocumentCollectionResponse deleteDocumentCollection(shared_ptr<DeleteDocumentCollectionRequest> request);
  DeleteNamespaceResponse deleteNamespaceWithOptions(shared_ptr<DeleteNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNamespaceResponse deleteNamespace(shared_ptr<DeleteNamespaceRequest> request);
  DeleteVectorIndexResponse deleteVectorIndexWithOptions(shared_ptr<DeleteVectorIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVectorIndexResponse deleteVectorIndex(shared_ptr<DeleteVectorIndexRequest> request);
  DescribeAccountsResponse describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountsResponse describeAccounts(shared_ptr<DescribeAccountsRequest> request);
  DescribeActiveSQLRecordsResponse describeActiveSQLRecordsWithOptions(shared_ptr<DescribeActiveSQLRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeActiveSQLRecordsResponse describeActiveSQLRecords(shared_ptr<DescribeActiveSQLRecordsRequest> request);
  DescribeAvailableResourcesResponse describeAvailableResourcesWithOptions(shared_ptr<DescribeAvailableResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableResourcesResponse describeAvailableResources(shared_ptr<DescribeAvailableResourcesRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeCollectionResponse describeCollectionWithOptions(shared_ptr<DescribeCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCollectionResponse describeCollection(shared_ptr<DescribeCollectionRequest> request);
  DescribeDBClusterNodeResponse describeDBClusterNodeWithOptions(shared_ptr<DescribeDBClusterNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterNodeResponse describeDBClusterNode(shared_ptr<DescribeDBClusterNodeRequest> request);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request);
  DescribeDBInstanceDataBloatResponse describeDBInstanceDataBloatWithOptions(shared_ptr<DescribeDBInstanceDataBloatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceDataBloatResponse describeDBInstanceDataBloat(shared_ptr<DescribeDBInstanceDataBloatRequest> request);
  DescribeDBInstanceDataSkewResponse describeDBInstanceDataSkewWithOptions(shared_ptr<DescribeDBInstanceDataSkewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceDataSkewResponse describeDBInstanceDataSkew(shared_ptr<DescribeDBInstanceDataSkewRequest> request);
  DescribeDBInstanceDiagnosisSummaryResponse describeDBInstanceDiagnosisSummaryWithOptions(shared_ptr<DescribeDBInstanceDiagnosisSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceDiagnosisSummaryResponse describeDBInstanceDiagnosisSummary(shared_ptr<DescribeDBInstanceDiagnosisSummaryRequest> request);
  DescribeDBInstanceErrorLogResponse describeDBInstanceErrorLogWithOptions(shared_ptr<DescribeDBInstanceErrorLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceErrorLogResponse describeDBInstanceErrorLog(shared_ptr<DescribeDBInstanceErrorLogRequest> request);
  DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayListWithOptions(shared_ptr<DescribeDBInstanceIPArrayListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayList(shared_ptr<DescribeDBInstanceIPArrayListRequest> request);
  DescribeDBInstanceIndexUsageResponse describeDBInstanceIndexUsageWithOptions(shared_ptr<DescribeDBInstanceIndexUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceIndexUsageResponse describeDBInstanceIndexUsage(shared_ptr<DescribeDBInstanceIndexUsageRequest> request);
  DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(shared_ptr<DescribeDBInstanceNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(shared_ptr<DescribeDBInstanceNetInfoRequest> request);
  DescribeDBInstancePerformanceResponse describeDBInstancePerformanceWithOptions(shared_ptr<DescribeDBInstancePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancePerformanceResponse describeDBInstancePerformance(shared_ptr<DescribeDBInstancePerformanceRequest> request);
  DescribeDBInstancePlansResponse describeDBInstancePlansWithOptions(shared_ptr<DescribeDBInstancePlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancePlansResponse describeDBInstancePlans(shared_ptr<DescribeDBInstancePlansRequest> request);
  DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceSSLResponse describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request);
  DescribeDBInstanceSupportMaxPerformanceResponse describeDBInstanceSupportMaxPerformanceWithOptions(shared_ptr<DescribeDBInstanceSupportMaxPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceSupportMaxPerformanceResponse describeDBInstanceSupportMaxPerformance(shared_ptr<DescribeDBInstanceSupportMaxPerformanceRequest> request);
  DescribeDBInstancesResponse describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancesResponse describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request);
  DescribeDBVersionInfosResponse describeDBVersionInfosWithOptions(shared_ptr<DescribeDBVersionInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBVersionInfosResponse describeDBVersionInfos(shared_ptr<DescribeDBVersionInfosRequest> request);
  DescribeDataBackupsResponse describeDataBackupsWithOptions(shared_ptr<DescribeDataBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataBackupsResponse describeDataBackups(shared_ptr<DescribeDataBackupsRequest> request);
  DescribeDataReDistributeInfoResponse describeDataReDistributeInfoWithOptions(shared_ptr<DescribeDataReDistributeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataReDistributeInfoResponse describeDataReDistributeInfo(shared_ptr<DescribeDataReDistributeInfoRequest> request);
  DescribeDataShareInstancesResponse describeDataShareInstancesWithOptions(shared_ptr<DescribeDataShareInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataShareInstancesResponse describeDataShareInstances(shared_ptr<DescribeDataShareInstancesRequest> request);
  DescribeDataSharePerformanceResponse describeDataSharePerformanceWithOptions(shared_ptr<DescribeDataSharePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataSharePerformanceResponse describeDataSharePerformance(shared_ptr<DescribeDataSharePerformanceRequest> request);
  DescribeDiagnosisDimensionsResponse describeDiagnosisDimensionsWithOptions(shared_ptr<DescribeDiagnosisDimensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiagnosisDimensionsResponse describeDiagnosisDimensions(shared_ptr<DescribeDiagnosisDimensionsRequest> request);
  DescribeDiagnosisMonitorPerformanceResponse describeDiagnosisMonitorPerformanceWithOptions(shared_ptr<DescribeDiagnosisMonitorPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiagnosisMonitorPerformanceResponse describeDiagnosisMonitorPerformance(shared_ptr<DescribeDiagnosisMonitorPerformanceRequest> request);
  DescribeDiagnosisRecordsResponse describeDiagnosisRecordsWithOptions(shared_ptr<DescribeDiagnosisRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiagnosisRecordsResponse describeDiagnosisRecords(shared_ptr<DescribeDiagnosisRecordsRequest> request);
  DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfoWithOptions(shared_ptr<DescribeDiagnosisSQLInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiagnosisSQLInfoResponse describeDiagnosisSQLInfo(shared_ptr<DescribeDiagnosisSQLInfoRequest> request);
  DescribeDocumentResponse describeDocumentWithOptions(shared_ptr<DescribeDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDocumentResponse describeDocument(shared_ptr<DescribeDocumentRequest> request);
  DescribeDownloadRecordsResponse describeDownloadRecordsWithOptions(shared_ptr<DescribeDownloadRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDownloadRecordsResponse describeDownloadRecords(shared_ptr<DescribeDownloadRecordsRequest> request);
  DescribeDownloadSQLLogsResponse describeDownloadSQLLogsWithOptions(shared_ptr<DescribeDownloadSQLLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDownloadSQLLogsResponse describeDownloadSQLLogs(shared_ptr<DescribeDownloadSQLLogsRequest> request);
  DescribeHealthStatusResponse describeHealthStatusWithOptions(shared_ptr<DescribeHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHealthStatusResponse describeHealthStatus(shared_ptr<DescribeHealthStatusRequest> request);
  DescribeIMVInfosResponse describeIMVInfosWithOptions(shared_ptr<DescribeIMVInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIMVInfosResponse describeIMVInfos(shared_ptr<DescribeIMVInfosRequest> request);
  DescribeLogBackupsResponse describeLogBackupsWithOptions(shared_ptr<DescribeLogBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogBackupsResponse describeLogBackups(shared_ptr<DescribeLogBackupsRequest> request);
  DescribeModifyParameterLogResponse describeModifyParameterLogWithOptions(shared_ptr<DescribeModifyParameterLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeModifyParameterLogResponse describeModifyParameterLog(shared_ptr<DescribeModifyParameterLogRequest> request);
  DescribeNamespaceResponse describeNamespaceWithOptions(shared_ptr<DescribeNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNamespaceResponse describeNamespace(shared_ptr<DescribeNamespaceRequest> request);
  DescribeParametersResponse describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParametersResponse describeParameters(shared_ptr<DescribeParametersRequest> request);
  DescribeRdsVSwitchsResponse describeRdsVSwitchsWithOptions(shared_ptr<DescribeRdsVSwitchsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsVSwitchsResponse describeRdsVSwitchs(shared_ptr<DescribeRdsVSwitchsRequest> request);
  DescribeRdsVpcsResponse describeRdsVpcsWithOptions(shared_ptr<DescribeRdsVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsVpcsResponse describeRdsVpcs(shared_ptr<DescribeRdsVpcsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSQLLogCountResponse describeSQLLogCountWithOptions(shared_ptr<DescribeSQLLogCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLLogCountResponse describeSQLLogCount(shared_ptr<DescribeSQLLogCountRequest> request);
  DescribeSQLLogsResponse describeSQLLogsWithOptions(shared_ptr<DescribeSQLLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLLogsResponse describeSQLLogs(shared_ptr<DescribeSQLLogsRequest> request);
  DescribeSQLLogsV2Response describeSQLLogsV2WithOptions(shared_ptr<DescribeSQLLogsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLLogsV2Response describeSQLLogsV2(shared_ptr<DescribeSQLLogsV2Request> request);
  DescribeSampleDataResponse describeSampleDataWithOptions(shared_ptr<DescribeSampleDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSampleDataResponse describeSampleData(shared_ptr<DescribeSampleDataRequest> request);
  DescribeSupportFeaturesResponse describeSupportFeaturesWithOptions(shared_ptr<DescribeSupportFeaturesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSupportFeaturesResponse describeSupportFeatures(shared_ptr<DescribeSupportFeaturesRequest> request);
  DescribeTagsResponse describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTagsResponse describeTags(shared_ptr<DescribeTagsRequest> request);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(shared_ptr<DescribeUserEncryptionKeyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(shared_ptr<DescribeUserEncryptionKeyListRequest> request);
  DescribeWaitingSQLInfoResponse describeWaitingSQLInfoWithOptions(shared_ptr<DescribeWaitingSQLInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWaitingSQLInfoResponse describeWaitingSQLInfo(shared_ptr<DescribeWaitingSQLInfoRequest> request);
  DescribeWaitingSQLRecordsResponse describeWaitingSQLRecordsWithOptions(shared_ptr<DescribeWaitingSQLRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWaitingSQLRecordsResponse describeWaitingSQLRecords(shared_ptr<DescribeWaitingSQLRecordsRequest> request);
  DownloadDiagnosisRecordsResponse downloadDiagnosisRecordsWithOptions(shared_ptr<DownloadDiagnosisRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DownloadDiagnosisRecordsResponse downloadDiagnosisRecords(shared_ptr<DownloadDiagnosisRecordsRequest> request);
  DownloadSQLLogsRecordsResponse downloadSQLLogsRecordsWithOptions(shared_ptr<DownloadSQLLogsRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DownloadSQLLogsRecordsResponse downloadSQLLogsRecords(shared_ptr<DownloadSQLLogsRecordsRequest> request);
  GetUploadDocumentJobResponse getUploadDocumentJobWithOptions(shared_ptr<GetUploadDocumentJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUploadDocumentJobResponse getUploadDocumentJob(shared_ptr<GetUploadDocumentJobRequest> request);
  GetUpsertCollectionDataJobResponse getUpsertCollectionDataJobWithOptions(shared_ptr<GetUpsertCollectionDataJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUpsertCollectionDataJobResponse getUpsertCollectionDataJob(shared_ptr<GetUpsertCollectionDataJobRequest> request);
  GrantCollectionResponse grantCollectionWithOptions(shared_ptr<GrantCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantCollectionResponse grantCollection(shared_ptr<GrantCollectionRequest> request);
  HandleActiveSQLRecordResponse handleActiveSQLRecordWithOptions(shared_ptr<HandleActiveSQLRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HandleActiveSQLRecordResponse handleActiveSQLRecord(shared_ptr<HandleActiveSQLRecordRequest> request);
  InitVectorDatabaseResponse initVectorDatabaseWithOptions(shared_ptr<InitVectorDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitVectorDatabaseResponse initVectorDatabase(shared_ptr<InitVectorDatabaseRequest> request);
  ListCollectionsResponse listCollectionsWithOptions(shared_ptr<ListCollectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCollectionsResponse listCollections(shared_ptr<ListCollectionsRequest> request);
  ListDocumentCollectionsResponse listDocumentCollectionsWithOptions(shared_ptr<ListDocumentCollectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDocumentCollectionsResponse listDocumentCollections(shared_ptr<ListDocumentCollectionsRequest> request);
  ListDocumentsResponse listDocumentsWithOptions(shared_ptr<ListDocumentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDocumentsResponse listDocuments(shared_ptr<ListDocumentsRequest> request);
  ListNamespacesResponse listNamespacesWithOptions(shared_ptr<ListNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNamespacesResponse listNamespaces(shared_ptr<ListNamespacesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPolicyResponse modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request);
  ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(shared_ptr<ModifyDBInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceConfigResponse modifyDBInstanceConfig(shared_ptr<ModifyDBInstanceConfigRequest> request);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(shared_ptr<ModifyDBInstanceConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(shared_ptr<ModifyDBInstanceConnectionStringRequest> request);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request);
  ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request);
  ModifyDBInstanceResourceGroupResponse modifyDBInstanceResourceGroupWithOptions(shared_ptr<ModifyDBInstanceResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceResourceGroupResponse modifyDBInstanceResourceGroup(shared_ptr<ModifyDBInstanceResourceGroupRequest> request);
  ModifyDBInstanceSSLResponse modifyDBInstanceSSLWithOptions(shared_ptr<ModifyDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceSSLResponse modifyDBInstanceSSL(shared_ptr<ModifyDBInstanceSSLRequest> request);
  ModifyMasterSpecResponse modifyMasterSpecWithOptions(shared_ptr<ModifyMasterSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMasterSpecResponse modifyMasterSpec(shared_ptr<ModifyMasterSpecRequest> request);
  ModifyParametersResponse modifyParametersWithOptions(shared_ptr<ModifyParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyParametersResponse modifyParameters(shared_ptr<ModifyParametersRequest> request);
  ModifySQLCollectorPolicyResponse modifySQLCollectorPolicyWithOptions(shared_ptr<ModifySQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySQLCollectorPolicyResponse modifySQLCollectorPolicy(shared_ptr<ModifySQLCollectorPolicyRequest> request);
  ModifySecurityIpsResponse modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityIpsResponse modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request);
  ModifyVectorConfigurationResponse modifyVectorConfigurationWithOptions(shared_ptr<ModifyVectorConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVectorConfigurationResponse modifyVectorConfiguration(shared_ptr<ModifyVectorConfigurationRequest> request);
  PauseInstanceResponse pauseInstanceWithOptions(shared_ptr<PauseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PauseInstanceResponse pauseInstance(shared_ptr<PauseInstanceRequest> request);
  QueryCollectionDataResponse queryCollectionDataWithOptions(shared_ptr<QueryCollectionDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCollectionDataResponse queryCollectionData(shared_ptr<QueryCollectionDataRequest> request);
  QueryContentResponse queryContentWithOptions(shared_ptr<QueryContentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryContentResponse queryContent(shared_ptr<QueryContentRequest> request);
  QueryContentResponse queryContentAdvance(shared_ptr<QueryContentAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebalanceDBInstanceResponse rebalanceDBInstanceWithOptions(shared_ptr<RebalanceDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebalanceDBInstanceResponse rebalanceDBInstance(shared_ptr<RebalanceDBInstanceRequest> request);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  ResetIMVMonitorDataResponse resetIMVMonitorDataWithOptions(shared_ptr<ResetIMVMonitorDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetIMVMonitorDataResponse resetIMVMonitorData(shared_ptr<ResetIMVMonitorDataRequest> request);
  RestartDBInstanceResponse restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartDBInstanceResponse restartDBInstance(shared_ptr<RestartDBInstanceRequest> request);
  ResumeInstanceResponse resumeInstanceWithOptions(shared_ptr<ResumeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeInstanceResponse resumeInstance(shared_ptr<ResumeInstanceRequest> request);
  SetDBInstancePlanStatusResponse setDBInstancePlanStatusWithOptions(shared_ptr<SetDBInstancePlanStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDBInstancePlanStatusResponse setDBInstancePlanStatus(shared_ptr<SetDBInstancePlanStatusRequest> request);
  SetDataShareInstanceResponse setDataShareInstanceWithOptions(shared_ptr<SetDataShareInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDataShareInstanceResponse setDataShareInstance(shared_ptr<SetDataShareInstanceRequest> request);
  SwitchDBInstanceNetTypeResponse switchDBInstanceNetTypeWithOptions(shared_ptr<SwitchDBInstanceNetTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchDBInstanceNetTypeResponse switchDBInstanceNetType(shared_ptr<SwitchDBInstanceNetTypeRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnloadSampleDataResponse unloadSampleDataWithOptions(shared_ptr<UnloadSampleDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnloadSampleDataResponse unloadSampleData(shared_ptr<UnloadSampleDataRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateCollectionDataMetadataResponse updateCollectionDataMetadataWithOptions(shared_ptr<UpdateCollectionDataMetadataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCollectionDataMetadataResponse updateCollectionDataMetadata(shared_ptr<UpdateCollectionDataMetadataRequest> request);
  UpdateDBInstancePlanResponse updateDBInstancePlanWithOptions(shared_ptr<UpdateDBInstancePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDBInstancePlanResponse updateDBInstancePlan(shared_ptr<UpdateDBInstancePlanRequest> request);
  UpgradeDBInstanceResponse upgradeDBInstanceWithOptions(shared_ptr<UpgradeDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBInstanceResponse upgradeDBInstance(shared_ptr<UpgradeDBInstanceRequest> request);
  UpgradeDBVersionResponse upgradeDBVersionWithOptions(shared_ptr<UpgradeDBVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBVersionResponse upgradeDBVersion(shared_ptr<UpgradeDBVersionRequest> request);
  UploadDocumentAsyncResponse uploadDocumentAsyncWithOptions(shared_ptr<UploadDocumentAsyncRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadDocumentAsyncResponse uploadDocumentAsync(shared_ptr<UploadDocumentAsyncRequest> request);
  UploadDocumentAsyncResponse uploadDocumentAsyncAdvance(shared_ptr<UploadDocumentAsyncAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpsertChunksResponse upsertChunksWithOptions(shared_ptr<UpsertChunksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpsertChunksResponse upsertChunks(shared_ptr<UpsertChunksRequest> request);
  UpsertCollectionDataResponse upsertCollectionDataWithOptions(shared_ptr<UpsertCollectionDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpsertCollectionDataResponse upsertCollectionData(shared_ptr<UpsertCollectionDataRequest> request);
  UpsertCollectionDataAsyncResponse upsertCollectionDataAsyncWithOptions(shared_ptr<UpsertCollectionDataAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpsertCollectionDataAsyncResponse upsertCollectionDataAsync(shared_ptr<UpsertCollectionDataAsyncRequest> request);
  UpsertCollectionDataAsyncResponse upsertCollectionDataAsyncAdvance(shared_ptr<UpsertCollectionDataAsyncAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Gpdb20160503

#endif
