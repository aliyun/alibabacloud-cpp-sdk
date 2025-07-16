// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_POLARDBX20200202_H_
#define ALIBABACLOUD_POLARDBX20200202_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Polardbx20200202 {
class AlignStoragePrimaryAzoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storageInstanceName{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> switchTimeMode{};

  AlignStoragePrimaryAzoneRequest() {}

  explicit AlignStoragePrimaryAzoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (storageInstanceName) {
      res["StorageInstanceName"] = boost::any(*storageInstanceName);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StorageInstanceName") != m.end() && !m["StorageInstanceName"].empty()) {
      storageInstanceName = make_shared<string>(boost::any_cast<string>(m["StorageInstanceName"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("SwitchTimeMode") != m.end() && !m["SwitchTimeMode"].empty()) {
      switchTimeMode = make_shared<string>(boost::any_cast<string>(m["SwitchTimeMode"]));
    }
  }


  virtual ~AlignStoragePrimaryAzoneRequest() = default;
};
class AlignStoragePrimaryAzoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AlignStoragePrimaryAzoneResponseBody() {}

  explicit AlignStoragePrimaryAzoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AlignStoragePrimaryAzoneResponseBody() = default;
};
class AlignStoragePrimaryAzoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AlignStoragePrimaryAzoneResponseBody> body{};

  AlignStoragePrimaryAzoneResponse() {}

  explicit AlignStoragePrimaryAzoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AlignStoragePrimaryAzoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AlignStoragePrimaryAzoneResponseBody>(model1);
      }
    }
  }


  virtual ~AlignStoragePrimaryAzoneResponse() = default;
};
class AllocateColdDataVolumeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  AllocateColdDataVolumeRequest() {}

  explicit AllocateColdDataVolumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AllocateColdDataVolumeRequest() = default;
};
class AllocateColdDataVolumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateColdDataVolumeResponseBody() {}

  explicit AllocateColdDataVolumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocateColdDataVolumeResponseBody() = default;
};
class AllocateColdDataVolumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocateColdDataVolumeResponseBody> body{};

  AllocateColdDataVolumeResponse() {}

  explicit AllocateColdDataVolumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AllocateColdDataVolumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateColdDataVolumeResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateColdDataVolumeResponse() = default;
};
class AllocateInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> port{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  AllocateInstancePublicConnectionRequest() {}

  explicit AllocateInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class CancelActiveOperationTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> regionId{};

  CancelActiveOperationTasksRequest() {}

  explicit CancelActiveOperationTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CancelActiveOperationTasksRequest() = default;
};
class CancelActiveOperationTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> requestId{};

  CancelActiveOperationTasksResponseBody() {}

  explicit CancelActiveOperationTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelActiveOperationTasksResponseBody() = default;
};
class CancelActiveOperationTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelActiveOperationTasksResponseBody> body{};

  CancelActiveOperationTasksResponse() {}

  explicit CancelActiveOperationTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelActiveOperationTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelActiveOperationTasksResponseBody>(model1);
      }
    }
  }


  virtual ~CancelActiveOperationTasksResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeResourceGroupResponseBody() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeResourceGroupResponseBody> body{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class CheckCloudResourceAuthorizedRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> roleArn{};

  CheckCloudResourceAuthorizedRequest() {}

  explicit CheckCloudResourceAuthorizedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
  }


  virtual ~CheckCloudResourceAuthorizedRequest() = default;
};
class CheckCloudResourceAuthorizedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> authorizationState{};
  shared_ptr<string> roleArn{};

  CheckCloudResourceAuthorizedResponseBodyData() {}

  explicit CheckCloudResourceAuthorizedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationState) {
      res["AuthorizationState"] = boost::any(*authorizationState);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationState") != m.end() && !m["AuthorizationState"].empty()) {
      authorizationState = make_shared<string>(boost::any_cast<string>(m["AuthorizationState"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
  }


  virtual ~CheckCloudResourceAuthorizedResponseBodyData() = default;
};
class CheckCloudResourceAuthorizedResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckCloudResourceAuthorizedResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CheckCloudResourceAuthorizedResponseBody() {}

  explicit CheckCloudResourceAuthorizedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CheckCloudResourceAuthorizedResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckCloudResourceAuthorizedResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckCloudResourceAuthorizedResponseBody() = default;
};
class CheckCloudResourceAuthorizedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckCloudResourceAuthorizedResponseBody> body{};

  CheckCloudResourceAuthorizedResponse() {}

  explicit CheckCloudResourceAuthorizedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckCloudResourceAuthorizedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckCloudResourceAuthorizedResponseBody>(model1);
      }
    }
  }


  virtual ~CheckCloudResourceAuthorizedResponse() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityAccountName{};
  shared_ptr<string> securityAccountPassword{};

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
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityAccountName) {
      res["SecurityAccountName"] = boost::any(*securityAccountName);
    }
    if (securityAccountPassword) {
      res["SecurityAccountPassword"] = boost::any(*securityAccountPassword);
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
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityAccountName") != m.end() && !m["SecurityAccountName"].empty()) {
      securityAccountName = make_shared<string>(boost::any_cast<string>(m["SecurityAccountName"]));
    }
    if (m.find("SecurityAccountPassword") != m.end() && !m["SecurityAccountPassword"].empty()) {
      securityAccountPassword = make_shared<string>(boost::any_cast<string>(m["SecurityAccountPassword"]));
    }
  }


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAccountResponseBody() {}

  explicit CreateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class CreateBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupType{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  CreateBackupRequest() {}

  explicit CreateBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateBackupRequest() = default;
};
class CreateBackupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> backupSetId{};

  CreateBackupResponseBodyData() {}

  explicit CreateBackupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
  }


  virtual ~CreateBackupResponseBodyData() = default;
};
class CreateBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateBackupResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateBackupResponseBody() {}

  explicit CreateBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateBackupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateBackupResponseBodyData>(model1);
      }
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


  virtual ~CreateBackupResponseBody() = default;
};
class CreateBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBackupResponseBody> body{};

  CreateBackupResponse() {}

  explicit CreateBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBackupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBackupResponse() = default;
};
class CreateDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> charset{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbDescription{};
  shared_ptr<string> dbName{};
  shared_ptr<string> mode{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityAccountName{};
  shared_ptr<string> securityAccountPassword{};
  shared_ptr<string> storagePoolName{};

  CreateDBRequest() {}

  explicit CreateDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (charset) {
      res["Charset"] = boost::any(*charset);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbDescription) {
      res["DbDescription"] = boost::any(*dbDescription);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityAccountName) {
      res["SecurityAccountName"] = boost::any(*securityAccountName);
    }
    if (securityAccountPassword) {
      res["SecurityAccountPassword"] = boost::any(*securityAccountPassword);
    }
    if (storagePoolName) {
      res["StoragePoolName"] = boost::any(*storagePoolName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("Charset") != m.end() && !m["Charset"].empty()) {
      charset = make_shared<string>(boost::any_cast<string>(m["Charset"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbDescription") != m.end() && !m["DbDescription"].empty()) {
      dbDescription = make_shared<string>(boost::any_cast<string>(m["DbDescription"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityAccountName") != m.end() && !m["SecurityAccountName"].empty()) {
      securityAccountName = make_shared<string>(boost::any_cast<string>(m["SecurityAccountName"]));
    }
    if (m.find("SecurityAccountPassword") != m.end() && !m["SecurityAccountPassword"].empty()) {
      securityAccountPassword = make_shared<string>(boost::any_cast<string>(m["SecurityAccountPassword"]));
    }
    if (m.find("StoragePoolName") != m.end() && !m["StoragePoolName"].empty()) {
      storagePoolName = make_shared<string>(boost::any_cast<string>(m["StoragePoolName"]));
    }
  }


  virtual ~CreateDBRequest() = default;
};
class CreateDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDBResponseBody() {}

  explicit CreateDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateDBResponseBody() = default;
};
class CreateDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBResponseBody> body{};

  CreateDBResponse() {}

  explicit CreateDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBResponse() = default;
};
class CreateDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> CNNodeCount{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> cnClass{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<long> DNNodeCount{};
  shared_ptr<string> dnClass{};
  shared_ptr<string> dnStorageSpace{};
  shared_ptr<string> engineVersion{};
  shared_ptr<map<string, string>> extraParams{};
  shared_ptr<bool> isColumnarReadDBInstance{};
  shared_ptr<bool> isReadDBInstance{};
  shared_ptr<string> networkType{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> primaryDBInstanceName{};
  shared_ptr<string> primaryZone{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> secondaryZone{};
  shared_ptr<string> series{};
  shared_ptr<string> tertiaryZone{};
  shared_ptr<string> topologyType{};
  shared_ptr<long> usedTime{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateDBInstanceRequest() {}

  explicit CreateDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (CNNodeCount) {
      res["CNNodeCount"] = boost::any(*CNNodeCount);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cnClass) {
      res["CnClass"] = boost::any(*cnClass);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (DNNodeCount) {
      res["DNNodeCount"] = boost::any(*DNNodeCount);
    }
    if (dnClass) {
      res["DnClass"] = boost::any(*dnClass);
    }
    if (dnStorageSpace) {
      res["DnStorageSpace"] = boost::any(*dnStorageSpace);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (isColumnarReadDBInstance) {
      res["IsColumnarReadDBInstance"] = boost::any(*isColumnarReadDBInstance);
    }
    if (isReadDBInstance) {
      res["IsReadDBInstance"] = boost::any(*isReadDBInstance);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (primaryDBInstanceName) {
      res["PrimaryDBInstanceName"] = boost::any(*primaryDBInstanceName);
    }
    if (primaryZone) {
      res["PrimaryZone"] = boost::any(*primaryZone);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (secondaryZone) {
      res["SecondaryZone"] = boost::any(*secondaryZone);
    }
    if (series) {
      res["Series"] = boost::any(*series);
    }
    if (tertiaryZone) {
      res["TertiaryZone"] = boost::any(*tertiaryZone);
    }
    if (topologyType) {
      res["TopologyType"] = boost::any(*topologyType);
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("CNNodeCount") != m.end() && !m["CNNodeCount"].empty()) {
      CNNodeCount = make_shared<long>(boost::any_cast<long>(m["CNNodeCount"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CnClass") != m.end() && !m["CnClass"].empty()) {
      cnClass = make_shared<string>(boost::any_cast<string>(m["CnClass"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("DNNodeCount") != m.end() && !m["DNNodeCount"].empty()) {
      DNNodeCount = make_shared<long>(boost::any_cast<long>(m["DNNodeCount"]));
    }
    if (m.find("DnClass") != m.end() && !m["DnClass"].empty()) {
      dnClass = make_shared<string>(boost::any_cast<string>(m["DnClass"]));
    }
    if (m.find("DnStorageSpace") != m.end() && !m["DnStorageSpace"].empty()) {
      dnStorageSpace = make_shared<string>(boost::any_cast<string>(m["DnStorageSpace"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtraParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("IsColumnarReadDBInstance") != m.end() && !m["IsColumnarReadDBInstance"].empty()) {
      isColumnarReadDBInstance = make_shared<bool>(boost::any_cast<bool>(m["IsColumnarReadDBInstance"]));
    }
    if (m.find("IsReadDBInstance") != m.end() && !m["IsReadDBInstance"].empty()) {
      isReadDBInstance = make_shared<bool>(boost::any_cast<bool>(m["IsReadDBInstance"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PrimaryDBInstanceName") != m.end() && !m["PrimaryDBInstanceName"].empty()) {
      primaryDBInstanceName = make_shared<string>(boost::any_cast<string>(m["PrimaryDBInstanceName"]));
    }
    if (m.find("PrimaryZone") != m.end() && !m["PrimaryZone"].empty()) {
      primaryZone = make_shared<string>(boost::any_cast<string>(m["PrimaryZone"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecondaryZone") != m.end() && !m["SecondaryZone"].empty()) {
      secondaryZone = make_shared<string>(boost::any_cast<string>(m["SecondaryZone"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      series = make_shared<string>(boost::any_cast<string>(m["Series"]));
    }
    if (m.find("TertiaryZone") != m.end() && !m["TertiaryZone"].empty()) {
      tertiaryZone = make_shared<string>(boost::any_cast<string>(m["TertiaryZone"]));
    }
    if (m.find("TopologyType") != m.end() && !m["TopologyType"].empty()) {
      topologyType = make_shared<string>(boost::any_cast<string>(m["TopologyType"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBInstanceRequest() = default;
};
class CreateDBInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> CNNodeCount{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> cnClass{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<long> DNNodeCount{};
  shared_ptr<string> dnClass{};
  shared_ptr<string> dnStorageSpace{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> extraParamsShrink{};
  shared_ptr<bool> isColumnarReadDBInstance{};
  shared_ptr<bool> isReadDBInstance{};
  shared_ptr<string> networkType{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> primaryDBInstanceName{};
  shared_ptr<string> primaryZone{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> secondaryZone{};
  shared_ptr<string> series{};
  shared_ptr<string> tertiaryZone{};
  shared_ptr<string> topologyType{};
  shared_ptr<long> usedTime{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateDBInstanceShrinkRequest() {}

  explicit CreateDBInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (CNNodeCount) {
      res["CNNodeCount"] = boost::any(*CNNodeCount);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cnClass) {
      res["CnClass"] = boost::any(*cnClass);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (DNNodeCount) {
      res["DNNodeCount"] = boost::any(*DNNodeCount);
    }
    if (dnClass) {
      res["DnClass"] = boost::any(*dnClass);
    }
    if (dnStorageSpace) {
      res["DnStorageSpace"] = boost::any(*dnStorageSpace);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (extraParamsShrink) {
      res["ExtraParams"] = boost::any(*extraParamsShrink);
    }
    if (isColumnarReadDBInstance) {
      res["IsColumnarReadDBInstance"] = boost::any(*isColumnarReadDBInstance);
    }
    if (isReadDBInstance) {
      res["IsReadDBInstance"] = boost::any(*isReadDBInstance);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (primaryDBInstanceName) {
      res["PrimaryDBInstanceName"] = boost::any(*primaryDBInstanceName);
    }
    if (primaryZone) {
      res["PrimaryZone"] = boost::any(*primaryZone);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (secondaryZone) {
      res["SecondaryZone"] = boost::any(*secondaryZone);
    }
    if (series) {
      res["Series"] = boost::any(*series);
    }
    if (tertiaryZone) {
      res["TertiaryZone"] = boost::any(*tertiaryZone);
    }
    if (topologyType) {
      res["TopologyType"] = boost::any(*topologyType);
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("CNNodeCount") != m.end() && !m["CNNodeCount"].empty()) {
      CNNodeCount = make_shared<long>(boost::any_cast<long>(m["CNNodeCount"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CnClass") != m.end() && !m["CnClass"].empty()) {
      cnClass = make_shared<string>(boost::any_cast<string>(m["CnClass"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("DNNodeCount") != m.end() && !m["DNNodeCount"].empty()) {
      DNNodeCount = make_shared<long>(boost::any_cast<long>(m["DNNodeCount"]));
    }
    if (m.find("DnClass") != m.end() && !m["DnClass"].empty()) {
      dnClass = make_shared<string>(boost::any_cast<string>(m["DnClass"]));
    }
    if (m.find("DnStorageSpace") != m.end() && !m["DnStorageSpace"].empty()) {
      dnStorageSpace = make_shared<string>(boost::any_cast<string>(m["DnStorageSpace"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParamsShrink = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("IsColumnarReadDBInstance") != m.end() && !m["IsColumnarReadDBInstance"].empty()) {
      isColumnarReadDBInstance = make_shared<bool>(boost::any_cast<bool>(m["IsColumnarReadDBInstance"]));
    }
    if (m.find("IsReadDBInstance") != m.end() && !m["IsReadDBInstance"].empty()) {
      isReadDBInstance = make_shared<bool>(boost::any_cast<bool>(m["IsReadDBInstance"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PrimaryDBInstanceName") != m.end() && !m["PrimaryDBInstanceName"].empty()) {
      primaryDBInstanceName = make_shared<string>(boost::any_cast<string>(m["PrimaryDBInstanceName"]));
    }
    if (m.find("PrimaryZone") != m.end() && !m["PrimaryZone"].empty()) {
      primaryZone = make_shared<string>(boost::any_cast<string>(m["PrimaryZone"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecondaryZone") != m.end() && !m["SecondaryZone"].empty()) {
      secondaryZone = make_shared<string>(boost::any_cast<string>(m["SecondaryZone"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      series = make_shared<string>(boost::any_cast<string>(m["Series"]));
    }
    if (m.find("TertiaryZone") != m.end() && !m["TertiaryZone"].empty()) {
      tertiaryZone = make_shared<string>(boost::any_cast<string>(m["TertiaryZone"]));
    }
    if (m.find("TopologyType") != m.end() && !m["TopologyType"].empty()) {
      topologyType = make_shared<string>(boost::any_cast<string>(m["TopologyType"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBInstanceShrinkRequest() = default;
};
class CreateDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateDBInstanceResponseBody() {}

  explicit CreateDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
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
class CreateSuperAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  CreateSuperAccountRequest() {}

  explicit CreateSuperAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateSuperAccountRequest() = default;
};
class CreateSuperAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateSuperAccountResponseBody() {}

  explicit CreateSuperAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSuperAccountResponseBody() = default;
};
class CreateSuperAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSuperAccountResponseBody> body{};

  CreateSuperAccountResponse() {}

  explicit CreateSuperAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSuperAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSuperAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSuperAccountResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityAccountName{};
  shared_ptr<string> securityAccountPassword{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityAccountName) {
      res["SecurityAccountName"] = boost::any(*securityAccountName);
    }
    if (securityAccountPassword) {
      res["SecurityAccountPassword"] = boost::any(*securityAccountPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityAccountName") != m.end() && !m["SecurityAccountName"].empty()) {
      securityAccountName = make_shared<string>(boost::any_cast<string>(m["SecurityAccountName"]));
    }
    if (m.find("SecurityAccountPassword") != m.end() && !m["SecurityAccountPassword"].empty()) {
      securityAccountPassword = make_shared<string>(boost::any_cast<string>(m["SecurityAccountPassword"]));
    }
  }


  virtual ~DeleteAccountRequest() = default;
};
class DeleteAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAccountResponseBody() {}

  explicit DeleteAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class DeleteDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbName{};
  shared_ptr<string> regionId{};

  DeleteDBRequest() {}

  explicit DeleteDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteDBRequest() = default;
};
class DeleteDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDBResponseBody() {}

  explicit DeleteDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDBResponseBody() = default;
};
class DeleteDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBResponseBody> body{};

  DeleteDBResponse() {}

  explicit DeleteDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBResponse() = default;
};
class DeleteDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DeleteDBInstanceRequest() {}

  explicit DeleteDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class DescribeAccountListRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeAccountListRequest() {}

  explicit DescribeAccountListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAccountListRequest() = default;
};
class DescribeAccountListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> accountType{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> gmtCreated{};

  DescribeAccountListResponseBodyData() {}

  explicit DescribeAccountListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
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
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
  }


  virtual ~DescribeAccountListResponseBodyData() = default;
};
class DescribeAccountListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAccountListResponseBody() {}

  explicit DescribeAccountListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeAccountListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeAccountListResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeAccountListResponseBody() = default;
};
class DescribeAccountListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountListResponseBody> body{};

  DescribeAccountListResponse() {}

  explicit DescribeAccountListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAccountListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountListResponse() = default;
};
class DescribeActiveOperationMaintainConfRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeActiveOperationMaintainConfRequest() {}

  explicit DescribeActiveOperationMaintainConfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeActiveOperationMaintainConfRequest() = default;
};
class DescribeActiveOperationMaintainConfResponseBodyConfig : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> cycleTime{};
  shared_ptr<string> cycleType{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<long> status{};

  DescribeActiveOperationMaintainConfResponseBodyConfig() {}

  explicit DescribeActiveOperationMaintainConfResponseBodyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (cycleTime) {
      res["CycleTime"] = boost::any(*cycleTime);
    }
    if (cycleType) {
      res["CycleType"] = boost::any(*cycleType);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CycleTime") != m.end() && !m["CycleTime"].empty()) {
      cycleTime = make_shared<string>(boost::any_cast<string>(m["CycleTime"]));
    }
    if (m.find("CycleType") != m.end() && !m["CycleType"].empty()) {
      cycleType = make_shared<string>(boost::any_cast<string>(m["CycleType"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeActiveOperationMaintainConfResponseBodyConfig() = default;
};
class DescribeActiveOperationMaintainConfResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeActiveOperationMaintainConfResponseBodyConfig> config{};
  shared_ptr<long> hasConfig{};
  shared_ptr<string> requestId{};

  DescribeActiveOperationMaintainConfResponseBody() {}

  explicit DescribeActiveOperationMaintainConfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hasConfig) {
      res["HasConfig"] = boost::any(*hasConfig);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["Config"].type()) {
        DescribeActiveOperationMaintainConfResponseBodyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Config"]));
        config = make_shared<DescribeActiveOperationMaintainConfResponseBodyConfig>(model1);
      }
    }
    if (m.find("HasConfig") != m.end() && !m["HasConfig"].empty()) {
      hasConfig = make_shared<long>(boost::any_cast<long>(m["HasConfig"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeActiveOperationMaintainConfResponseBody() = default;
};
class DescribeActiveOperationMaintainConfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeActiveOperationMaintainConfResponseBody> body{};

  DescribeActiveOperationMaintainConfResponse() {}

  explicit DescribeActiveOperationMaintainConfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeActiveOperationMaintainConfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeActiveOperationMaintainConfResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeActiveOperationMaintainConfResponse() = default;
};
class DescribeActiveOperationTaskCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};

  DescribeActiveOperationTaskCountRequest() {}

  explicit DescribeActiveOperationTaskCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeActiveOperationTaskCountRequest() = default;
};
class DescribeActiveOperationTaskCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> needPop{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskCount{};

  DescribeActiveOperationTaskCountResponseBody() {}

  explicit DescribeActiveOperationTaskCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needPop) {
      res["NeedPop"] = boost::any(*needPop);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskCount) {
      res["TaskCount"] = boost::any(*taskCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedPop") != m.end() && !m["NeedPop"].empty()) {
      needPop = make_shared<long>(boost::any_cast<long>(m["NeedPop"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskCount") != m.end() && !m["TaskCount"].empty()) {
      taskCount = make_shared<long>(boost::any_cast<long>(m["TaskCount"]));
    }
  }


  virtual ~DescribeActiveOperationTaskCountResponseBody() = default;
};
class DescribeActiveOperationTaskCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeActiveOperationTaskCountResponseBody> body{};

  DescribeActiveOperationTaskCountResponse() {}

  explicit DescribeActiveOperationTaskCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeActiveOperationTaskCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeActiveOperationTaskCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeActiveOperationTaskCountResponse() = default;
};
class DescribeActiveOperationTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> allowCancel{};
  shared_ptr<long> allowChange{};
  shared_ptr<string> changeLevel{};
  shared_ptr<string> dbType{};
  shared_ptr<string> insName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<string> regionId{};
  shared_ptr<long> status{};
  shared_ptr<string> taskType{};

  DescribeActiveOperationTasksRequest() {}

  explicit DescribeActiveOperationTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCancel) {
      res["AllowCancel"] = boost::any(*allowCancel);
    }
    if (allowChange) {
      res["AllowChange"] = boost::any(*allowChange);
    }
    if (changeLevel) {
      res["ChangeLevel"] = boost::any(*changeLevel);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowCancel") != m.end() && !m["AllowCancel"].empty()) {
      allowCancel = make_shared<long>(boost::any_cast<long>(m["AllowCancel"]));
    }
    if (m.find("AllowChange") != m.end() && !m["AllowChange"].empty()) {
      allowChange = make_shared<long>(boost::any_cast<long>(m["AllowChange"]));
    }
    if (m.find("ChangeLevel") != m.end() && !m["ChangeLevel"].empty()) {
      changeLevel = make_shared<string>(boost::any_cast<string>(m["ChangeLevel"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DescribeActiveOperationTasksRequest() = default;
};
class DescribeActiveOperationTasksResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> allowCancel{};
  shared_ptr<string> allowChange{};
  shared_ptr<string> changeLevel{};
  shared_ptr<string> changeLevelEn{};
  shared_ptr<string> changeLevelZh{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> currentAVZ{};
  shared_ptr<string> dbType{};
  shared_ptr<string> dbVersion{};
  shared_ptr<string> deadline{};
  shared_ptr<long> id{};
  shared_ptr<string> impact{};
  shared_ptr<string> impactEn{};
  shared_ptr<string> impactZh{};
  shared_ptr<string> insComment{};
  shared_ptr<string> insName{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> prepareInterval{};
  shared_ptr<string> region{};
  shared_ptr<string> resultInfo{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<vector<string>> subInsNames{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeEn{};
  shared_ptr<string> taskTypeZh{};

  DescribeActiveOperationTasksResponseBodyItems() {}

  explicit DescribeActiveOperationTasksResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCancel) {
      res["AllowCancel"] = boost::any(*allowCancel);
    }
    if (allowChange) {
      res["AllowChange"] = boost::any(*allowChange);
    }
    if (changeLevel) {
      res["ChangeLevel"] = boost::any(*changeLevel);
    }
    if (changeLevelEn) {
      res["ChangeLevelEn"] = boost::any(*changeLevelEn);
    }
    if (changeLevelZh) {
      res["ChangeLevelZh"] = boost::any(*changeLevelZh);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (currentAVZ) {
      res["CurrentAVZ"] = boost::any(*currentAVZ);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    if (deadline) {
      res["Deadline"] = boost::any(*deadline);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (impact) {
      res["Impact"] = boost::any(*impact);
    }
    if (impactEn) {
      res["ImpactEn"] = boost::any(*impactEn);
    }
    if (impactZh) {
      res["ImpactZh"] = boost::any(*impactZh);
    }
    if (insComment) {
      res["InsComment"] = boost::any(*insComment);
    }
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (prepareInterval) {
      res["PrepareInterval"] = boost::any(*prepareInterval);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resultInfo) {
      res["ResultInfo"] = boost::any(*resultInfo);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subInsNames) {
      res["SubInsNames"] = boost::any(*subInsNames);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeEn) {
      res["TaskTypeEn"] = boost::any(*taskTypeEn);
    }
    if (taskTypeZh) {
      res["TaskTypeZh"] = boost::any(*taskTypeZh);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowCancel") != m.end() && !m["AllowCancel"].empty()) {
      allowCancel = make_shared<string>(boost::any_cast<string>(m["AllowCancel"]));
    }
    if (m.find("AllowChange") != m.end() && !m["AllowChange"].empty()) {
      allowChange = make_shared<string>(boost::any_cast<string>(m["AllowChange"]));
    }
    if (m.find("ChangeLevel") != m.end() && !m["ChangeLevel"].empty()) {
      changeLevel = make_shared<string>(boost::any_cast<string>(m["ChangeLevel"]));
    }
    if (m.find("ChangeLevelEn") != m.end() && !m["ChangeLevelEn"].empty()) {
      changeLevelEn = make_shared<string>(boost::any_cast<string>(m["ChangeLevelEn"]));
    }
    if (m.find("ChangeLevelZh") != m.end() && !m["ChangeLevelZh"].empty()) {
      changeLevelZh = make_shared<string>(boost::any_cast<string>(m["ChangeLevelZh"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CurrentAVZ") != m.end() && !m["CurrentAVZ"].empty()) {
      currentAVZ = make_shared<string>(boost::any_cast<string>(m["CurrentAVZ"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<string>(boost::any_cast<string>(m["DbVersion"]));
    }
    if (m.find("Deadline") != m.end() && !m["Deadline"].empty()) {
      deadline = make_shared<string>(boost::any_cast<string>(m["Deadline"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Impact") != m.end() && !m["Impact"].empty()) {
      impact = make_shared<string>(boost::any_cast<string>(m["Impact"]));
    }
    if (m.find("ImpactEn") != m.end() && !m["ImpactEn"].empty()) {
      impactEn = make_shared<string>(boost::any_cast<string>(m["ImpactEn"]));
    }
    if (m.find("ImpactZh") != m.end() && !m["ImpactZh"].empty()) {
      impactZh = make_shared<string>(boost::any_cast<string>(m["ImpactZh"]));
    }
    if (m.find("InsComment") != m.end() && !m["InsComment"].empty()) {
      insComment = make_shared<string>(boost::any_cast<string>(m["InsComment"]));
    }
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PrepareInterval") != m.end() && !m["PrepareInterval"].empty()) {
      prepareInterval = make_shared<string>(boost::any_cast<string>(m["PrepareInterval"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResultInfo") != m.end() && !m["ResultInfo"].empty()) {
      resultInfo = make_shared<string>(boost::any_cast<string>(m["ResultInfo"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubInsNames") != m.end() && !m["SubInsNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubInsNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubInsNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subInsNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeEn") != m.end() && !m["TaskTypeEn"].empty()) {
      taskTypeEn = make_shared<string>(boost::any_cast<string>(m["TaskTypeEn"]));
    }
    if (m.find("TaskTypeZh") != m.end() && !m["TaskTypeZh"].empty()) {
      taskTypeZh = make_shared<string>(boost::any_cast<string>(m["TaskTypeZh"]));
    }
  }


  virtual ~DescribeActiveOperationTasksResponseBodyItems() = default;
};
class DescribeActiveOperationTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeActiveOperationTasksResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeActiveOperationTasksResponseBody() {}

  explicit DescribeActiveOperationTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeActiveOperationTasksResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeActiveOperationTasksResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeActiveOperationTasksResponseBodyItems>>(expect1);
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
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeActiveOperationTasksResponseBody() = default;
};
class DescribeActiveOperationTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeActiveOperationTasksResponseBody> body{};

  DescribeActiveOperationTasksResponse() {}

  explicit DescribeActiveOperationTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeActiveOperationTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeActiveOperationTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeActiveOperationTasksResponse() = default;
};
class DescribeArchiveTableListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> status{};
  shared_ptr<string> tableName{};

  DescribeArchiveTableListRequest() {}

  explicit DescribeArchiveTableListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeArchiveTableListRequest() = default;
};
class DescribeArchiveTableListResponseBodyDataTables : public Darabonba::Model {
public:
  shared_ptr<string> archiveStatus{};
  shared_ptr<long> createdDate{};
  shared_ptr<long> fileCount{};
  shared_ptr<long> lastSuccessArchiveTime{};
  shared_ptr<string> schemaName{};
  shared_ptr<double> spaceSize{};
  shared_ptr<string> tableName{};

  DescribeArchiveTableListResponseBodyDataTables() {}

  explicit DescribeArchiveTableListResponseBodyDataTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveStatus) {
      res["ArchiveStatus"] = boost::any(*archiveStatus);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (fileCount) {
      res["FileCount"] = boost::any(*fileCount);
    }
    if (lastSuccessArchiveTime) {
      res["LastSuccessArchiveTime"] = boost::any(*lastSuccessArchiveTime);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (spaceSize) {
      res["SpaceSize"] = boost::any(*spaceSize);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveStatus") != m.end() && !m["ArchiveStatus"].empty()) {
      archiveStatus = make_shared<string>(boost::any_cast<string>(m["ArchiveStatus"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<long>(boost::any_cast<long>(m["CreatedDate"]));
    }
    if (m.find("FileCount") != m.end() && !m["FileCount"].empty()) {
      fileCount = make_shared<long>(boost::any_cast<long>(m["FileCount"]));
    }
    if (m.find("LastSuccessArchiveTime") != m.end() && !m["LastSuccessArchiveTime"].empty()) {
      lastSuccessArchiveTime = make_shared<long>(boost::any_cast<long>(m["LastSuccessArchiveTime"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("SpaceSize") != m.end() && !m["SpaceSize"].empty()) {
      spaceSize = make_shared<double>(boost::any_cast<double>(m["SpaceSize"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeArchiveTableListResponseBodyDataTables() = default;
};
class DescribeArchiveTableListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pausedCount{};
  shared_ptr<long> runningCount{};
  shared_ptr<long> successCount{};
  shared_ptr<vector<DescribeArchiveTableListResponseBodyDataTables>> tables{};
  shared_ptr<long> tobeArchivedConut{};
  shared_ptr<long> total{};

  DescribeArchiveTableListResponseBodyData() {}

  explicit DescribeArchiveTableListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pausedCount) {
      res["PausedCount"] = boost::any(*pausedCount);
    }
    if (runningCount) {
      res["RunningCount"] = boost::any(*runningCount);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (tobeArchivedConut) {
      res["TobeArchivedConut"] = boost::any(*tobeArchivedConut);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PausedCount") != m.end() && !m["PausedCount"].empty()) {
      pausedCount = make_shared<long>(boost::any_cast<long>(m["PausedCount"]));
    }
    if (m.find("RunningCount") != m.end() && !m["RunningCount"].empty()) {
      runningCount = make_shared<long>(boost::any_cast<long>(m["RunningCount"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<DescribeArchiveTableListResponseBodyDataTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeArchiveTableListResponseBodyDataTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<DescribeArchiveTableListResponseBodyDataTables>>(expect1);
      }
    }
    if (m.find("TobeArchivedConut") != m.end() && !m["TobeArchivedConut"].empty()) {
      tobeArchivedConut = make_shared<long>(boost::any_cast<long>(m["TobeArchivedConut"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeArchiveTableListResponseBodyData() = default;
};
class DescribeArchiveTableListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeArchiveTableListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeArchiveTableListResponseBody() {}

  explicit DescribeArchiveTableListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeArchiveTableListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeArchiveTableListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeArchiveTableListResponseBody() = default;
};
class DescribeArchiveTableListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeArchiveTableListResponseBody> body{};

  DescribeArchiveTableListResponse() {}

  explicit DescribeArchiveTableListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeArchiveTableListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeArchiveTableListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeArchiveTableListResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> backupPeriod{};
  shared_ptr<string> backupPlanBegin{};
  shared_ptr<long> backupSetRetention{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupWay{};
  shared_ptr<long> coldDataBackupInterval{};
  shared_ptr<long> coldDataBackupRetention{};
  shared_ptr<long> crossRegionDataBackupRetention{};
  shared_ptr<long> crossRegionLogBackupRetention{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> destCrossRegion{};
  shared_ptr<long> forceCleanOnHighSpaceUsage{};
  shared_ptr<bool> isCrossRegionDataBackupEnabled{};
  shared_ptr<bool> isCrossRegionLogBackupEnabled{};
  shared_ptr<long> isEnabled{};
  shared_ptr<long> localLogRetention{};
  shared_ptr<long> localLogRetentionNumber{};
  shared_ptr<long> logLocalRetentionSpace{};
  shared_ptr<long> removeLogRetention{};

  DescribeBackupPolicyResponseBodyData() {}

  explicit DescribeBackupPolicyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanBegin) {
      res["BackupPlanBegin"] = boost::any(*backupPlanBegin);
    }
    if (backupSetRetention) {
      res["BackupSetRetention"] = boost::any(*backupSetRetention);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupWay) {
      res["BackupWay"] = boost::any(*backupWay);
    }
    if (coldDataBackupInterval) {
      res["ColdDataBackupInterval"] = boost::any(*coldDataBackupInterval);
    }
    if (coldDataBackupRetention) {
      res["ColdDataBackupRetention"] = boost::any(*coldDataBackupRetention);
    }
    if (crossRegionDataBackupRetention) {
      res["CrossRegionDataBackupRetention"] = boost::any(*crossRegionDataBackupRetention);
    }
    if (crossRegionLogBackupRetention) {
      res["CrossRegionLogBackupRetention"] = boost::any(*crossRegionLogBackupRetention);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (destCrossRegion) {
      res["DestCrossRegion"] = boost::any(*destCrossRegion);
    }
    if (forceCleanOnHighSpaceUsage) {
      res["ForceCleanOnHighSpaceUsage"] = boost::any(*forceCleanOnHighSpaceUsage);
    }
    if (isCrossRegionDataBackupEnabled) {
      res["IsCrossRegionDataBackupEnabled"] = boost::any(*isCrossRegionDataBackupEnabled);
    }
    if (isCrossRegionLogBackupEnabled) {
      res["IsCrossRegionLogBackupEnabled"] = boost::any(*isCrossRegionLogBackupEnabled);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (localLogRetention) {
      res["LocalLogRetention"] = boost::any(*localLogRetention);
    }
    if (localLogRetentionNumber) {
      res["LocalLogRetentionNumber"] = boost::any(*localLogRetentionNumber);
    }
    if (logLocalRetentionSpace) {
      res["LogLocalRetentionSpace"] = boost::any(*logLocalRetentionSpace);
    }
    if (removeLogRetention) {
      res["RemoveLogRetention"] = boost::any(*removeLogRetention);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanBegin") != m.end() && !m["BackupPlanBegin"].empty()) {
      backupPlanBegin = make_shared<string>(boost::any_cast<string>(m["BackupPlanBegin"]));
    }
    if (m.find("BackupSetRetention") != m.end() && !m["BackupSetRetention"].empty()) {
      backupSetRetention = make_shared<long>(boost::any_cast<long>(m["BackupSetRetention"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupWay") != m.end() && !m["BackupWay"].empty()) {
      backupWay = make_shared<string>(boost::any_cast<string>(m["BackupWay"]));
    }
    if (m.find("ColdDataBackupInterval") != m.end() && !m["ColdDataBackupInterval"].empty()) {
      coldDataBackupInterval = make_shared<long>(boost::any_cast<long>(m["ColdDataBackupInterval"]));
    }
    if (m.find("ColdDataBackupRetention") != m.end() && !m["ColdDataBackupRetention"].empty()) {
      coldDataBackupRetention = make_shared<long>(boost::any_cast<long>(m["ColdDataBackupRetention"]));
    }
    if (m.find("CrossRegionDataBackupRetention") != m.end() && !m["CrossRegionDataBackupRetention"].empty()) {
      crossRegionDataBackupRetention = make_shared<long>(boost::any_cast<long>(m["CrossRegionDataBackupRetention"]));
    }
    if (m.find("CrossRegionLogBackupRetention") != m.end() && !m["CrossRegionLogBackupRetention"].empty()) {
      crossRegionLogBackupRetention = make_shared<long>(boost::any_cast<long>(m["CrossRegionLogBackupRetention"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DestCrossRegion") != m.end() && !m["DestCrossRegion"].empty()) {
      destCrossRegion = make_shared<string>(boost::any_cast<string>(m["DestCrossRegion"]));
    }
    if (m.find("ForceCleanOnHighSpaceUsage") != m.end() && !m["ForceCleanOnHighSpaceUsage"].empty()) {
      forceCleanOnHighSpaceUsage = make_shared<long>(boost::any_cast<long>(m["ForceCleanOnHighSpaceUsage"]));
    }
    if (m.find("IsCrossRegionDataBackupEnabled") != m.end() && !m["IsCrossRegionDataBackupEnabled"].empty()) {
      isCrossRegionDataBackupEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsCrossRegionDataBackupEnabled"]));
    }
    if (m.find("IsCrossRegionLogBackupEnabled") != m.end() && !m["IsCrossRegionLogBackupEnabled"].empty()) {
      isCrossRegionLogBackupEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsCrossRegionLogBackupEnabled"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<long>(boost::any_cast<long>(m["IsEnabled"]));
    }
    if (m.find("LocalLogRetention") != m.end() && !m["LocalLogRetention"].empty()) {
      localLogRetention = make_shared<long>(boost::any_cast<long>(m["LocalLogRetention"]));
    }
    if (m.find("LocalLogRetentionNumber") != m.end() && !m["LocalLogRetentionNumber"].empty()) {
      localLogRetentionNumber = make_shared<long>(boost::any_cast<long>(m["LocalLogRetentionNumber"]));
    }
    if (m.find("LogLocalRetentionSpace") != m.end() && !m["LogLocalRetentionSpace"].empty()) {
      logLocalRetentionSpace = make_shared<long>(boost::any_cast<long>(m["LogLocalRetentionSpace"]));
    }
    if (m.find("RemoveLogRetention") != m.end() && !m["RemoveLogRetention"].empty()) {
      removeLogRetention = make_shared<long>(boost::any_cast<long>(m["RemoveLogRetention"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBodyData() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupPolicyResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeBackupPolicyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeBackupPolicyResponseBodyData>(model1);
      }
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
class DescribeBackupSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupSetId{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> destCrossRegion{};
  shared_ptr<string> regionId{};

  DescribeBackupSetRequest() {}

  explicit DescribeBackupSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (destCrossRegion) {
      res["DestCrossRegion"] = boost::any(*destCrossRegion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DestCrossRegion") != m.end() && !m["DestCrossRegion"].empty()) {
      destCrossRegion = make_shared<string>(boost::any_cast<string>(m["DestCrossRegion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeBackupSetRequest() = default;
};
class DescribeBackupSetResponseBodyDataOSSList : public Darabonba::Model {
public:
  shared_ptr<string> backupSetFile{};
  shared_ptr<string> downloadLink{};
  shared_ptr<string> intranetDownloadLink{};
  shared_ptr<string> linkExpiredTime{};

  DescribeBackupSetResponseBodyDataOSSList() {}

  explicit DescribeBackupSetResponseBodyDataOSSList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetFile) {
      res["BackupSetFile"] = boost::any(*backupSetFile);
    }
    if (downloadLink) {
      res["DownloadLink"] = boost::any(*downloadLink);
    }
    if (intranetDownloadLink) {
      res["IntranetDownloadLink"] = boost::any(*intranetDownloadLink);
    }
    if (linkExpiredTime) {
      res["LinkExpiredTime"] = boost::any(*linkExpiredTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetFile") != m.end() && !m["BackupSetFile"].empty()) {
      backupSetFile = make_shared<string>(boost::any_cast<string>(m["BackupSetFile"]));
    }
    if (m.find("DownloadLink") != m.end() && !m["DownloadLink"].empty()) {
      downloadLink = make_shared<string>(boost::any_cast<string>(m["DownloadLink"]));
    }
    if (m.find("IntranetDownloadLink") != m.end() && !m["IntranetDownloadLink"].empty()) {
      intranetDownloadLink = make_shared<string>(boost::any_cast<string>(m["IntranetDownloadLink"]));
    }
    if (m.find("LinkExpiredTime") != m.end() && !m["LinkExpiredTime"].empty()) {
      linkExpiredTime = make_shared<string>(boost::any_cast<string>(m["LinkExpiredTime"]));
    }
  }


  virtual ~DescribeBackupSetResponseBodyDataOSSList() = default;
};
class DescribeBackupSetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> backupModel{};
  shared_ptr<long> backupSetId{};
  shared_ptr<long> backupSetSize{};
  shared_ptr<long> backupType{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<DescribeBackupSetResponseBodyDataOSSList>> OSSList{};
  shared_ptr<long> status{};

  DescribeBackupSetResponseBodyData() {}

  explicit DescribeBackupSetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupModel) {
      res["BackupModel"] = boost::any(*backupModel);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (backupSetSize) {
      res["BackupSetSize"] = boost::any(*backupSetSize);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (OSSList) {
      vector<boost::any> temp1;
      for(auto item1:*OSSList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OSSList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupModel") != m.end() && !m["BackupModel"].empty()) {
      backupModel = make_shared<long>(boost::any_cast<long>(m["BackupModel"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<long>(boost::any_cast<long>(m["BackupSetId"]));
    }
    if (m.find("BackupSetSize") != m.end() && !m["BackupSetSize"].empty()) {
      backupSetSize = make_shared<long>(boost::any_cast<long>(m["BackupSetSize"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<long>(boost::any_cast<long>(m["BackupType"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("OSSList") != m.end() && !m["OSSList"].empty()) {
      if (typeid(vector<boost::any>) == m["OSSList"].type()) {
        vector<DescribeBackupSetResponseBodyDataOSSList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OSSList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupSetResponseBodyDataOSSList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        OSSList = make_shared<vector<DescribeBackupSetResponseBodyDataOSSList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeBackupSetResponseBodyData() = default;
};
class DescribeBackupSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupSetResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeBackupSetResponseBody() {}

  explicit DescribeBackupSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeBackupSetResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupSetResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeBackupSetResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeBackupSetResponseBody() = default;
};
class DescribeBackupSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupSetResponseBody> body{};

  DescribeBackupSetResponse() {}

  explicit DescribeBackupSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupSetResponse() = default;
};
class DescribeBackupSetListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> destCrossRegion{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};

  DescribeBackupSetListRequest() {}

  explicit DescribeBackupSetListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (destCrossRegion) {
      res["DestCrossRegion"] = boost::any(*destCrossRegion);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DestCrossRegion") != m.end() && !m["DestCrossRegion"].empty()) {
      destCrossRegion = make_shared<string>(boost::any_cast<string>(m["DestCrossRegion"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeBackupSetListRequest() = default;
};
class DescribeBackupSetListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> backupModel{};
  shared_ptr<string> backupSetId{};
  shared_ptr<long> backupSetSize{};
  shared_ptr<long> backupType{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> status{};

  DescribeBackupSetListResponseBodyData() {}

  explicit DescribeBackupSetListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupModel) {
      res["BackupModel"] = boost::any(*backupModel);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (backupSetSize) {
      res["BackupSetSize"] = boost::any(*backupSetSize);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupModel") != m.end() && !m["BackupModel"].empty()) {
      backupModel = make_shared<long>(boost::any_cast<long>(m["BackupModel"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("BackupSetSize") != m.end() && !m["BackupSetSize"].empty()) {
      backupSetSize = make_shared<long>(boost::any_cast<long>(m["BackupSetSize"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<long>(boost::any_cast<long>(m["BackupType"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeBackupSetListResponseBodyData() = default;
};
class DescribeBackupSetListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupSetListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeBackupSetListResponseBody() {}

  explicit DescribeBackupSetListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeBackupSetListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupSetListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeBackupSetListResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeBackupSetListResponseBody() = default;
};
class DescribeBackupSetListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupSetListResponseBody> body{};

  DescribeBackupSetListResponse() {}

  explicit DescribeBackupSetListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupSetListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupSetListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupSetListResponse() = default;
};
class DescribeBinaryLogListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeBinaryLogListRequest() {}

  explicit DescribeBinaryLogListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeBinaryLogListRequest() = default;
};
class DescribeBinaryLogListResponseBodyLogList : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> downloadLink{};
  shared_ptr<string> endTime{};
  shared_ptr<string> fileName{};
  shared_ptr<long> id{};
  shared_ptr<long> logSize{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<long> purgeStatus{};
  shared_ptr<string> uploadHost{};
  shared_ptr<long> uploadStatus{};

  DescribeBinaryLogListResponseBodyLogList() {}

  explicit DescribeBinaryLogListResponseBodyLogList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (downloadLink) {
      res["DownloadLink"] = boost::any(*downloadLink);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (logSize) {
      res["LogSize"] = boost::any(*logSize);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (purgeStatus) {
      res["PurgeStatus"] = boost::any(*purgeStatus);
    }
    if (uploadHost) {
      res["UploadHost"] = boost::any(*uploadHost);
    }
    if (uploadStatus) {
      res["UploadStatus"] = boost::any(*uploadStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DownloadLink") != m.end() && !m["DownloadLink"].empty()) {
      downloadLink = make_shared<string>(boost::any_cast<string>(m["DownloadLink"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LogSize") != m.end() && !m["LogSize"].empty()) {
      logSize = make_shared<long>(boost::any_cast<long>(m["LogSize"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PurgeStatus") != m.end() && !m["PurgeStatus"].empty()) {
      purgeStatus = make_shared<long>(boost::any_cast<long>(m["PurgeStatus"]));
    }
    if (m.find("UploadHost") != m.end() && !m["UploadHost"].empty()) {
      uploadHost = make_shared<string>(boost::any_cast<string>(m["UploadHost"]));
    }
    if (m.find("UploadStatus") != m.end() && !m["UploadStatus"].empty()) {
      uploadStatus = make_shared<long>(boost::any_cast<long>(m["UploadStatus"]));
    }
  }


  virtual ~DescribeBinaryLogListResponseBodyLogList() = default;
};
class DescribeBinaryLogListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBinaryLogListResponseBodyLogList>> logList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNumber{};

  DescribeBinaryLogListResponseBody() {}

  explicit DescribeBinaryLogListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logList) {
      vector<boost::any> temp1;
      for(auto item1:*logList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogList"] = boost::any(temp1);
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
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogList") != m.end() && !m["LogList"].empty()) {
      if (typeid(vector<boost::any>) == m["LogList"].type()) {
        vector<DescribeBinaryLogListResponseBodyLogList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBinaryLogListResponseBodyLogList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logList = make_shared<vector<DescribeBinaryLogListResponseBodyLogList>>(expect1);
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
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
    }
  }


  virtual ~DescribeBinaryLogListResponseBody() = default;
};
class DescribeBinaryLogListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBinaryLogListResponseBody> body{};

  DescribeBinaryLogListResponse() {}

  explicit DescribeBinaryLogListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBinaryLogListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBinaryLogListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBinaryLogListResponse() = default;
};
class DescribeCdcInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeCdcInfoRequest() {}

  explicit DescribeCdcInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCdcInfoRequest() = default;
};
class DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes : public Darabonba::Model {
public:
  shared_ptr<string> AZone{};
  shared_ptr<long> disk{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes() {}

  explicit DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (AZone) {
      res["AZone"] = boost::any(*AZone);
    }
    if (disk) {
      res["Disk"] = boost::any(*disk);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AZone") != m.end() && !m["AZone"].empty()) {
      AZone = make_shared<string>(boost::any_cast<string>(m["AZone"]));
    }
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      disk = make_shared<long>(boost::any_cast<long>(m["Disk"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes() = default;
};
class DescribeCdcInfoResponseBodyDataInstanceTopologyList : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<string> comment{};
  shared_ptr<string> groupName{};
  shared_ptr<string> hashLevel{};
  shared_ptr<string> instanceName{};
  shared_ptr<vector<DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes>> physicalNodes{};
  shared_ptr<long> streamNum{};

  DescribeCdcInfoResponseBodyDataInstanceTopologyList() {}

  explicit DescribeCdcInfoResponseBodyDataInstanceTopologyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (hashLevel) {
      res["HashLevel"] = boost::any(*hashLevel);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (physicalNodes) {
      vector<boost::any> temp1;
      for(auto item1:*physicalNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PhysicalNodes"] = boost::any(temp1);
    }
    if (streamNum) {
      res["StreamNum"] = boost::any(*streamNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HashLevel") != m.end() && !m["HashLevel"].empty()) {
      hashLevel = make_shared<string>(boost::any_cast<string>(m["HashLevel"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PhysicalNodes") != m.end() && !m["PhysicalNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["PhysicalNodes"].type()) {
        vector<DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PhysicalNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        physicalNodes = make_shared<vector<DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes>>(expect1);
      }
    }
    if (m.find("StreamNum") != m.end() && !m["StreamNum"].empty()) {
      streamNum = make_shared<long>(boost::any_cast<long>(m["StreamNum"]));
    }
  }


  virtual ~DescribeCdcInfoResponseBodyDataInstanceTopologyList() = default;
};
class DescribeCdcInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> binlogPersistTime{};
  shared_ptr<long> binlogSize{};
  shared_ptr<string> cdcNewVersion{};
  shared_ptr<string> checkSumSwitch{};
  shared_ptr<bool> enableCyclicReplication{};
  shared_ptr<vector<DescribeCdcInfoResponseBodyDataInstanceTopologyList>> instanceTopologyList{};
  shared_ptr<long> serverId{};
  shared_ptr<bool> versionSupportMultiCdc{};

  DescribeCdcInfoResponseBodyData() {}

  explicit DescribeCdcInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (binlogPersistTime) {
      res["BinlogPersistTime"] = boost::any(*binlogPersistTime);
    }
    if (binlogSize) {
      res["BinlogSize"] = boost::any(*binlogSize);
    }
    if (cdcNewVersion) {
      res["CdcNewVersion"] = boost::any(*cdcNewVersion);
    }
    if (checkSumSwitch) {
      res["CheckSumSwitch"] = boost::any(*checkSumSwitch);
    }
    if (enableCyclicReplication) {
      res["EnableCyclicReplication"] = boost::any(*enableCyclicReplication);
    }
    if (instanceTopologyList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTopologyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTopologyList"] = boost::any(temp1);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (versionSupportMultiCdc) {
      res["VersionSupportMultiCdc"] = boost::any(*versionSupportMultiCdc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BinlogPersistTime") != m.end() && !m["BinlogPersistTime"].empty()) {
      binlogPersistTime = make_shared<long>(boost::any_cast<long>(m["BinlogPersistTime"]));
    }
    if (m.find("BinlogSize") != m.end() && !m["BinlogSize"].empty()) {
      binlogSize = make_shared<long>(boost::any_cast<long>(m["BinlogSize"]));
    }
    if (m.find("CdcNewVersion") != m.end() && !m["CdcNewVersion"].empty()) {
      cdcNewVersion = make_shared<string>(boost::any_cast<string>(m["CdcNewVersion"]));
    }
    if (m.find("CheckSumSwitch") != m.end() && !m["CheckSumSwitch"].empty()) {
      checkSumSwitch = make_shared<string>(boost::any_cast<string>(m["CheckSumSwitch"]));
    }
    if (m.find("EnableCyclicReplication") != m.end() && !m["EnableCyclicReplication"].empty()) {
      enableCyclicReplication = make_shared<bool>(boost::any_cast<bool>(m["EnableCyclicReplication"]));
    }
    if (m.find("InstanceTopologyList") != m.end() && !m["InstanceTopologyList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTopologyList"].type()) {
        vector<DescribeCdcInfoResponseBodyDataInstanceTopologyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTopologyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCdcInfoResponseBodyDataInstanceTopologyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTopologyList = make_shared<vector<DescribeCdcInfoResponseBodyDataInstanceTopologyList>>(expect1);
      }
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<long>(boost::any_cast<long>(m["ServerId"]));
    }
    if (m.find("VersionSupportMultiCdc") != m.end() && !m["VersionSupportMultiCdc"].empty()) {
      versionSupportMultiCdc = make_shared<bool>(boost::any_cast<bool>(m["VersionSupportMultiCdc"]));
    }
  }


  virtual ~DescribeCdcInfoResponseBodyData() = default;
};
class DescribeCdcInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCdcInfoResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCdcInfoResponseBody() {}

  explicit DescribeCdcInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeCdcInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCdcInfoResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeCdcInfoResponseBody() = default;
};
class DescribeCdcInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCdcInfoResponseBody> body{};

  DescribeCdcInfoResponse() {}

  explicit DescribeCdcInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCdcInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCdcInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCdcInfoResponse() = default;
};
class DescribeCharacterSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeCharacterSetRequest() {}

  explicit DescribeCharacterSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeCharacterSetRequest() = default;
};
class DescribeCharacterSetResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> characterSet{};
  shared_ptr<string> engine{};

  DescribeCharacterSetResponseBodyData() {}

  explicit DescribeCharacterSetResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterSet) {
      res["CharacterSet"] = boost::any(*characterSet);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterSet") != m.end() && !m["CharacterSet"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CharacterSet"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CharacterSet"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      characterSet = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeCharacterSetResponseBodyData() = default;
};
class DescribeCharacterSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCharacterSetResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeCharacterSetResponseBody() {}

  explicit DescribeCharacterSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeCharacterSetResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeCharacterSetResponseBodyData>(model1);
      }
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


  virtual ~DescribeCharacterSetResponseBody() = default;
};
class DescribeCharacterSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCharacterSetResponseBody> body{};

  DescribeCharacterSetResponse() {}

  explicit DescribeCharacterSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCharacterSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCharacterSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCharacterSetResponse() = default;
};
class DescribeColdDataBasicInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeColdDataBasicInfoRequest() {}

  explicit DescribeColdDataBasicInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeColdDataBasicInfoRequest() = default;
};
class DescribeColdDataBasicInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> backupSetCount{};
  shared_ptr<double> backupSetSpaceSize{};
  shared_ptr<string> cloudProduct{};
  shared_ptr<double> currentSpaceSize{};
  shared_ptr<string> dataRedundancyType{};
  shared_ptr<bool> enableStatus{};
  shared_ptr<long> readAccessNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> volumeName{};
  shared_ptr<double> writeAccessNum{};

  DescribeColdDataBasicInfoResponseBodyData() {}

  explicit DescribeColdDataBasicInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupSetCount) {
      res["BackupSetCount"] = boost::any(*backupSetCount);
    }
    if (backupSetSpaceSize) {
      res["BackupSetSpaceSize"] = boost::any(*backupSetSpaceSize);
    }
    if (cloudProduct) {
      res["CloudProduct"] = boost::any(*cloudProduct);
    }
    if (currentSpaceSize) {
      res["CurrentSpaceSize"] = boost::any(*currentSpaceSize);
    }
    if (dataRedundancyType) {
      res["DataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    if (enableStatus) {
      res["EnableStatus"] = boost::any(*enableStatus);
    }
    if (readAccessNum) {
      res["ReadAccessNum"] = boost::any(*readAccessNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (volumeName) {
      res["VolumeName"] = boost::any(*volumeName);
    }
    if (writeAccessNum) {
      res["WriteAccessNum"] = boost::any(*writeAccessNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupSetCount") != m.end() && !m["BackupSetCount"].empty()) {
      backupSetCount = make_shared<long>(boost::any_cast<long>(m["BackupSetCount"]));
    }
    if (m.find("BackupSetSpaceSize") != m.end() && !m["BackupSetSpaceSize"].empty()) {
      backupSetSpaceSize = make_shared<double>(boost::any_cast<double>(m["BackupSetSpaceSize"]));
    }
    if (m.find("CloudProduct") != m.end() && !m["CloudProduct"].empty()) {
      cloudProduct = make_shared<string>(boost::any_cast<string>(m["CloudProduct"]));
    }
    if (m.find("CurrentSpaceSize") != m.end() && !m["CurrentSpaceSize"].empty()) {
      currentSpaceSize = make_shared<double>(boost::any_cast<double>(m["CurrentSpaceSize"]));
    }
    if (m.find("DataRedundancyType") != m.end() && !m["DataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["DataRedundancyType"]));
    }
    if (m.find("EnableStatus") != m.end() && !m["EnableStatus"].empty()) {
      enableStatus = make_shared<bool>(boost::any_cast<bool>(m["EnableStatus"]));
    }
    if (m.find("ReadAccessNum") != m.end() && !m["ReadAccessNum"].empty()) {
      readAccessNum = make_shared<long>(boost::any_cast<long>(m["ReadAccessNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VolumeName") != m.end() && !m["VolumeName"].empty()) {
      volumeName = make_shared<string>(boost::any_cast<string>(m["VolumeName"]));
    }
    if (m.find("WriteAccessNum") != m.end() && !m["WriteAccessNum"].empty()) {
      writeAccessNum = make_shared<double>(boost::any_cast<double>(m["WriteAccessNum"]));
    }
  }


  virtual ~DescribeColdDataBasicInfoResponseBodyData() = default;
};
class DescribeColdDataBasicInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeColdDataBasicInfoResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeColdDataBasicInfoResponseBody() {}

  explicit DescribeColdDataBasicInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeColdDataBasicInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeColdDataBasicInfoResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeColdDataBasicInfoResponseBody() = default;
};
class DescribeColdDataBasicInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeColdDataBasicInfoResponseBody> body{};

  DescribeColdDataBasicInfoResponse() {}

  explicit DescribeColdDataBasicInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeColdDataBasicInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeColdDataBasicInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeColdDataBasicInfoResponse() = default;
};
class DescribeDBInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};

  DescribeDBInstanceAttributeRequest() {}

  explicit DescribeDBInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeRequest() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<long> port{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcInstanceId{};

  DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes : public Darabonba::Model {
public:
  shared_ptr<string> computeNodeId{};
  shared_ptr<string> dataNodeId{};
  shared_ptr<string> id{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeNodeId) {
      res["ComputeNodeId"] = boost::any(*computeNodeId);
    }
    if (dataNodeId) {
      res["DataNodeId"] = boost::any(*dataNodeId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
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
    if (m.find("ComputeNodeId") != m.end() && !m["ComputeNodeId"].empty()) {
      computeNodeId = make_shared<string>(boost::any_cast<string>(m["ComputeNodeId"]));
    }
    if (m.find("DataNodeId") != m.end() && !m["DataNodeId"].empty()) {
      dataNodeId = make_shared<string>(boost::any_cast<string>(m["DataNodeId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList : public Darabonba::Model {
public:
  shared_ptr<string> memberName{};
  shared_ptr<string> role{};
  shared_ptr<string> status{};

  DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstance : public Darabonba::Model {
public:
  shared_ptr<bool> canNotCreateColumnar{};
  shared_ptr<string> cnNodeClassCode{};
  shared_ptr<long> cnNodeCount{};
  shared_ptr<string> columnarInstanceName{};
  shared_ptr<vector<string>> columnarReadDBInstances{};
  shared_ptr<string> commodityCode{};
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs>> connAddrs{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> cpuType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes>> DBNodes{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> description{};
  shared_ptr<bool> differentDNSpec{};
  shared_ptr<string> dnNodeClassCode{};
  shared_ptr<long> dnNodeCount{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> expired{};
  shared_ptr<string> gdnInstanceName{};
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList>> gdnMemberList{};
  shared_ptr<string> gdnRole{};
  shared_ptr<string> id{};
  shared_ptr<long> kindCode{};
  shared_ptr<vector<string>> LTSVersions{};
  shared_ptr<string> latestMinorVersion{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> network{};
  shared_ptr<string> payType{};
  shared_ptr<string> port{};
  shared_ptr<string> primaryInstanceId{};
  shared_ptr<string> primaryZone{};
  shared_ptr<vector<string>> readDBInstances{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> rightsSeparationEnabled{};
  shared_ptr<string> rightsSeparationStatus{};
  shared_ptr<string> secondaryZone{};
  shared_ptr<string> series{};
  shared_ptr<string> specCategory{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};
  shared_ptr<long> storageUsed{};
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet>> tagSet{};
  shared_ptr<string> tertiaryZone{};
  shared_ptr<string> topologyType{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstanceAttributeResponseBodyDBInstance() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canNotCreateColumnar) {
      res["CanNotCreateColumnar"] = boost::any(*canNotCreateColumnar);
    }
    if (cnNodeClassCode) {
      res["CnNodeClassCode"] = boost::any(*cnNodeClassCode);
    }
    if (cnNodeCount) {
      res["CnNodeCount"] = boost::any(*cnNodeCount);
    }
    if (columnarInstanceName) {
      res["ColumnarInstanceName"] = boost::any(*columnarInstanceName);
    }
    if (columnarReadDBInstances) {
      res["ColumnarReadDBInstances"] = boost::any(*columnarReadDBInstances);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (connAddrs) {
      vector<boost::any> temp1;
      for(auto item1:*connAddrs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnAddrs"] = boost::any(temp1);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (cpuType) {
      res["CpuType"] = boost::any(*cpuType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (DBNodes) {
      vector<boost::any> temp1;
      for(auto item1:*DBNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNodes"] = boost::any(temp1);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (differentDNSpec) {
      res["DifferentDNSpec"] = boost::any(*differentDNSpec);
    }
    if (dnNodeClassCode) {
      res["DnNodeClassCode"] = boost::any(*dnNodeClassCode);
    }
    if (dnNodeCount) {
      res["DnNodeCount"] = boost::any(*dnNodeCount);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (gdnInstanceName) {
      res["GdnInstanceName"] = boost::any(*gdnInstanceName);
    }
    if (gdnMemberList) {
      vector<boost::any> temp1;
      for(auto item1:*gdnMemberList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GdnMemberList"] = boost::any(temp1);
    }
    if (gdnRole) {
      res["GdnRole"] = boost::any(*gdnRole);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (kindCode) {
      res["KindCode"] = boost::any(*kindCode);
    }
    if (LTSVersions) {
      res["LTSVersions"] = boost::any(*LTSVersions);
    }
    if (latestMinorVersion) {
      res["LatestMinorVersion"] = boost::any(*latestMinorVersion);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (primaryInstanceId) {
      res["PrimaryInstanceId"] = boost::any(*primaryInstanceId);
    }
    if (primaryZone) {
      res["PrimaryZone"] = boost::any(*primaryZone);
    }
    if (readDBInstances) {
      res["ReadDBInstances"] = boost::any(*readDBInstances);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (rightsSeparationEnabled) {
      res["RightsSeparationEnabled"] = boost::any(*rightsSeparationEnabled);
    }
    if (rightsSeparationStatus) {
      res["RightsSeparationStatus"] = boost::any(*rightsSeparationStatus);
    }
    if (secondaryZone) {
      res["SecondaryZone"] = boost::any(*secondaryZone);
    }
    if (series) {
      res["Series"] = boost::any(*series);
    }
    if (specCategory) {
      res["SpecCategory"] = boost::any(*specCategory);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (tagSet) {
      vector<boost::any> temp1;
      for(auto item1:*tagSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagSet"] = boost::any(temp1);
    }
    if (tertiaryZone) {
      res["TertiaryZone"] = boost::any(*tertiaryZone);
    }
    if (topologyType) {
      res["TopologyType"] = boost::any(*topologyType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanNotCreateColumnar") != m.end() && !m["CanNotCreateColumnar"].empty()) {
      canNotCreateColumnar = make_shared<bool>(boost::any_cast<bool>(m["CanNotCreateColumnar"]));
    }
    if (m.find("CnNodeClassCode") != m.end() && !m["CnNodeClassCode"].empty()) {
      cnNodeClassCode = make_shared<string>(boost::any_cast<string>(m["CnNodeClassCode"]));
    }
    if (m.find("CnNodeCount") != m.end() && !m["CnNodeCount"].empty()) {
      cnNodeCount = make_shared<long>(boost::any_cast<long>(m["CnNodeCount"]));
    }
    if (m.find("ColumnarInstanceName") != m.end() && !m["ColumnarInstanceName"].empty()) {
      columnarInstanceName = make_shared<string>(boost::any_cast<string>(m["ColumnarInstanceName"]));
    }
    if (m.find("ColumnarReadDBInstances") != m.end() && !m["ColumnarReadDBInstances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ColumnarReadDBInstances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ColumnarReadDBInstances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columnarReadDBInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ConnAddrs") != m.end() && !m["ConnAddrs"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnAddrs"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnAddrs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connAddrs = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceConnAddrs>>(expect1);
      }
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("CpuType") != m.end() && !m["CpuType"].empty()) {
      cpuType = make_shared<string>(boost::any_cast<string>(m["CpuType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("DBNodes") != m.end() && !m["DBNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNodes"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNodes = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceDBNodes>>(expect1);
      }
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DifferentDNSpec") != m.end() && !m["DifferentDNSpec"].empty()) {
      differentDNSpec = make_shared<bool>(boost::any_cast<bool>(m["DifferentDNSpec"]));
    }
    if (m.find("DnNodeClassCode") != m.end() && !m["DnNodeClassCode"].empty()) {
      dnNodeClassCode = make_shared<string>(boost::any_cast<string>(m["DnNodeClassCode"]));
    }
    if (m.find("DnNodeCount") != m.end() && !m["DnNodeCount"].empty()) {
      dnNodeCount = make_shared<long>(boost::any_cast<long>(m["DnNodeCount"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("GdnInstanceName") != m.end() && !m["GdnInstanceName"].empty()) {
      gdnInstanceName = make_shared<string>(boost::any_cast<string>(m["GdnInstanceName"]));
    }
    if (m.find("GdnMemberList") != m.end() && !m["GdnMemberList"].empty()) {
      if (typeid(vector<boost::any>) == m["GdnMemberList"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GdnMemberList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gdnMemberList = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceGdnMemberList>>(expect1);
      }
    }
    if (m.find("GdnRole") != m.end() && !m["GdnRole"].empty()) {
      gdnRole = make_shared<string>(boost::any_cast<string>(m["GdnRole"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("KindCode") != m.end() && !m["KindCode"].empty()) {
      kindCode = make_shared<long>(boost::any_cast<long>(m["KindCode"]));
    }
    if (m.find("LTSVersions") != m.end() && !m["LTSVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LTSVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LTSVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      LTSVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LatestMinorVersion") != m.end() && !m["LatestMinorVersion"].empty()) {
      latestMinorVersion = make_shared<string>(boost::any_cast<string>(m["LatestMinorVersion"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("PrimaryInstanceId") != m.end() && !m["PrimaryInstanceId"].empty()) {
      primaryInstanceId = make_shared<string>(boost::any_cast<string>(m["PrimaryInstanceId"]));
    }
    if (m.find("PrimaryZone") != m.end() && !m["PrimaryZone"].empty()) {
      primaryZone = make_shared<string>(boost::any_cast<string>(m["PrimaryZone"]));
    }
    if (m.find("ReadDBInstances") != m.end() && !m["ReadDBInstances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReadDBInstances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReadDBInstances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readDBInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RightsSeparationEnabled") != m.end() && !m["RightsSeparationEnabled"].empty()) {
      rightsSeparationEnabled = make_shared<bool>(boost::any_cast<bool>(m["RightsSeparationEnabled"]));
    }
    if (m.find("RightsSeparationStatus") != m.end() && !m["RightsSeparationStatus"].empty()) {
      rightsSeparationStatus = make_shared<string>(boost::any_cast<string>(m["RightsSeparationStatus"]));
    }
    if (m.find("SecondaryZone") != m.end() && !m["SecondaryZone"].empty()) {
      secondaryZone = make_shared<string>(boost::any_cast<string>(m["SecondaryZone"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      series = make_shared<string>(boost::any_cast<string>(m["Series"]));
    }
    if (m.find("SpecCategory") != m.end() && !m["SpecCategory"].empty()) {
      specCategory = make_shared<string>(boost::any_cast<string>(m["SpecCategory"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("TagSet") != m.end() && !m["TagSet"].empty()) {
      if (typeid(vector<boost::any>) == m["TagSet"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagSet = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstanceTagSet>>(expect1);
      }
    }
    if (m.find("TertiaryZone") != m.end() && !m["TertiaryZone"].empty()) {
      tertiaryZone = make_shared<string>(boost::any_cast<string>(m["TertiaryZone"]));
    }
    if (m.find("TopologyType") != m.end() && !m["TopologyType"].empty()) {
      topologyType = make_shared<string>(boost::any_cast<string>(m["TopologyType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstance() = default;
};
class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceAttributeResponseBodyDBInstance> DBInstance{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceAttributeResponseBody() {}

  explicit DescribeDBInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstance) {
      res["DBInstance"] = DBInstance ? boost::any(DBInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstance"].type()) {
        DescribeDBInstanceAttributeResponseBodyDBInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstance"]));
        DBInstance = make_shared<DescribeDBInstanceAttributeResponseBodyDBInstance>(model1);
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
class DescribeDBInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceConfigRequest() {}

  explicit DescribeDBInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceConfigRequest() = default;
};
class DescribeDBInstanceConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> configValue{};
  shared_ptr<string> dbInstanceName{};

  DescribeDBInstanceConfigResponseBodyData() {}

  explicit DescribeDBInstanceConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (dbInstanceName) {
      res["DbInstanceName"] = boost::any(*dbInstanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("DbInstanceName") != m.end() && !m["DbInstanceName"].empty()) {
      dbInstanceName = make_shared<string>(boost::any_cast<string>(m["DbInstanceName"]));
    }
  }


  virtual ~DescribeDBInstanceConfigResponseBodyData() = default;
};
class DescribeDBInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceConfigResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceConfigResponseBody() {}

  explicit DescribeDBInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBInstanceConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBInstanceConfigResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceConfigResponseBody() = default;
};
class DescribeDBInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceConfigResponseBody> body{};

  DescribeDBInstanceConfigResponse() {}

  explicit DescribeDBInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceConfigResponse() = default;
};
class DescribeDBInstanceHARequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceHARequest() {}

  explicit DescribeDBInstanceHARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceHARequest() = default;
};
class DescribeDBInstanceHAResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> primaryAzoneId{};
  shared_ptr<string> primaryRegionId{};
  shared_ptr<string> secondaryAzoneId{};
  shared_ptr<string> secondaryRegionId{};
  shared_ptr<string> topologyType{};

  DescribeDBInstanceHAResponseBodyData() {}

  explicit DescribeDBInstanceHAResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (primaryAzoneId) {
      res["PrimaryAzoneId"] = boost::any(*primaryAzoneId);
    }
    if (primaryRegionId) {
      res["PrimaryRegionId"] = boost::any(*primaryRegionId);
    }
    if (secondaryAzoneId) {
      res["SecondaryAzoneId"] = boost::any(*secondaryAzoneId);
    }
    if (secondaryRegionId) {
      res["SecondaryRegionId"] = boost::any(*secondaryRegionId);
    }
    if (topologyType) {
      res["TopologyType"] = boost::any(*topologyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrimaryAzoneId") != m.end() && !m["PrimaryAzoneId"].empty()) {
      primaryAzoneId = make_shared<string>(boost::any_cast<string>(m["PrimaryAzoneId"]));
    }
    if (m.find("PrimaryRegionId") != m.end() && !m["PrimaryRegionId"].empty()) {
      primaryRegionId = make_shared<string>(boost::any_cast<string>(m["PrimaryRegionId"]));
    }
    if (m.find("SecondaryAzoneId") != m.end() && !m["SecondaryAzoneId"].empty()) {
      secondaryAzoneId = make_shared<string>(boost::any_cast<string>(m["SecondaryAzoneId"]));
    }
    if (m.find("SecondaryRegionId") != m.end() && !m["SecondaryRegionId"].empty()) {
      secondaryRegionId = make_shared<string>(boost::any_cast<string>(m["SecondaryRegionId"]));
    }
    if (m.find("TopologyType") != m.end() && !m["TopologyType"].empty()) {
      topologyType = make_shared<string>(boost::any_cast<string>(m["TopologyType"]));
    }
  }


  virtual ~DescribeDBInstanceHAResponseBodyData() = default;
};
class DescribeDBInstanceHAResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceHAResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDBInstanceHAResponseBody() {}

  explicit DescribeDBInstanceHAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBInstanceHAResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBInstanceHAResponseBodyData>(model1);
      }
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


  virtual ~DescribeDBInstanceHAResponseBody() = default;
};
class DescribeDBInstanceHAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceHAResponseBody> body{};

  DescribeDBInstanceHAResponse() {}

  explicit DescribeDBInstanceHAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceHAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceHAResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceHAResponse() = default;
};
class DescribeDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceSSLRequest() {}

  explicit DescribeDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceSSLRequest() = default;
};
class DescribeDBInstanceSSLResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> certCommonName{};
  shared_ptr<bool> SSLEnabled{};
  shared_ptr<string> SSLExpiredTime{};

  DescribeDBInstanceSSLResponseBodyData() {}

  explicit DescribeDBInstanceSSLResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certCommonName) {
      res["CertCommonName"] = boost::any(*certCommonName);
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
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<bool>(boost::any_cast<bool>(m["SSLEnabled"]));
    }
    if (m.find("SSLExpiredTime") != m.end() && !m["SSLExpiredTime"].empty()) {
      SSLExpiredTime = make_shared<string>(boost::any_cast<string>(m["SSLExpiredTime"]));
    }
  }


  virtual ~DescribeDBInstanceSSLResponseBodyData() = default;
};
class DescribeDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceSSLResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceSSLResponseBody() {}

  explicit DescribeDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBInstanceSSLResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBInstanceSSLResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class DescribeDBInstanceTDERequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceTDERequest() {}

  explicit DescribeDBInstanceTDERequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceTDERequest() = default;
};
class DescribeDBInstanceTDEResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> TDEStatus{};

  DescribeDBInstanceTDEResponseBodyData() {}

  explicit DescribeDBInstanceTDEResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (TDEStatus) {
      res["TDEStatus"] = boost::any(*TDEStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TDEStatus") != m.end() && !m["TDEStatus"].empty()) {
      TDEStatus = make_shared<string>(boost::any_cast<string>(m["TDEStatus"]));
    }
  }


  virtual ~DescribeDBInstanceTDEResponseBodyData() = default;
};
class DescribeDBInstanceTDEResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceTDEResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceTDEResponseBody() {}

  explicit DescribeDBInstanceTDEResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBInstanceTDEResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBInstanceTDEResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceTDEResponseBody() = default;
};
class DescribeDBInstanceTDEResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceTDEResponseBody> body{};

  DescribeDBInstanceTDEResponse() {}

  explicit DescribeDBInstanceTDEResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceTDEResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceTDEResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceTDEResponse() = default;
};
class DescribeDBInstanceTopologyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> endTime{};
  shared_ptr<bool> minuteSimple{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeDBInstanceTopologyRequest() {}

  explicit DescribeDBInstanceTopologyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (minuteSimple) {
      res["MinuteSimple"] = boost::any(*minuteSimple);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MinuteSimple") != m.end() && !m["MinuteSimple"].empty()) {
      minuteSimple = make_shared<bool>(boost::any_cast<bool>(m["MinuteSimple"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyRequest() = default;
};
class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems : public Darabonba::Model {
public:
  shared_ptr<bool> activated{};
  shared_ptr<string> azone{};
  shared_ptr<string> characterType{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> phyInstanceName{};
  shared_ptr<string> region{};
  shared_ptr<string> role{};

  DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems() {}

  explicit DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activated) {
      res["Activated"] = boost::any(*activated);
    }
    if (azone) {
      res["Azone"] = boost::any(*azone);
    }
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (phyInstanceName) {
      res["PhyInstanceName"] = boost::any(*phyInstanceName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Activated") != m.end() && !m["Activated"].empty()) {
      activated = make_shared<bool>(boost::any_cast<bool>(m["Activated"]));
    }
    if (m.find("Azone") != m.end() && !m["Azone"].empty()) {
      azone = make_shared<string>(boost::any_cast<string>(m["Azone"]));
    }
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("PhyInstanceName") != m.end() && !m["PhyInstanceName"].empty()) {
      phyInstanceName = make_shared<string>(boost::any_cast<string>(m["PhyInstanceName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems() = default;
};
class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList : public Darabonba::Model {
public:
  shared_ptr<string> azone{};
  shared_ptr<string> role{};

  DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList() {}

  explicit DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (azone) {
      res["Azone"] = boost::any(*azone);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Azone") != m.end() && !m["Azone"].empty()) {
      azone = make_shared<string>(boost::any_cast<string>(m["Azone"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList() = default;
};
class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<long> DBInstanceNetType{};
  shared_ptr<string> port{};

  DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp() {}

  explicit DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceNetType) {
      res["DBInstanceNetType"] = boost::any(*DBInstanceNetType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceNetType") != m.end() && !m["DBInstanceNetType"].empty()) {
      DBInstanceNetType = make_shared<long>(boost::any_cast<long>(m["DBInstanceNetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp() = default;
};
class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems : public Darabonba::Model {
public:
  shared_ptr<bool> activated{};
  shared_ptr<string> azone{};
  shared_ptr<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList>> azoneRoleList{};
  shared_ptr<string> characterType{};
  shared_ptr<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp>> connectionIp{};
  shared_ptr<long> DBInstanceConnType{};
  shared_ptr<string> DBInstanceCreateTime{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> DBInstanceStatus{};
  shared_ptr<string> DBInstanceStatusDescription{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<long> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxIops{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> phyInstanceName{};
  shared_ptr<string> region{};
  shared_ptr<string> role{};
  shared_ptr<string> status{};
  shared_ptr<string> storageUsed{};
  shared_ptr<string> version{};

  DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems() {}

  explicit DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activated) {
      res["Activated"] = boost::any(*activated);
    }
    if (azone) {
      res["Azone"] = boost::any(*azone);
    }
    if (azoneRoleList) {
      vector<boost::any> temp1;
      for(auto item1:*azoneRoleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AzoneRoleList"] = boost::any(temp1);
    }
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (connectionIp) {
      vector<boost::any> temp1;
      for(auto item1:*connectionIp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionIp"] = boost::any(temp1);
    }
    if (DBInstanceConnType) {
      res["DBInstanceConnType"] = boost::any(*DBInstanceConnType);
    }
    if (DBInstanceCreateTime) {
      res["DBInstanceCreateTime"] = boost::any(*DBInstanceCreateTime);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceStatusDescription) {
      res["DBInstanceStatusDescription"] = boost::any(*DBInstanceStatusDescription);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
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
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxIops) {
      res["MaxIops"] = boost::any(*maxIops);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (phyInstanceName) {
      res["PhyInstanceName"] = boost::any(*phyInstanceName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Activated") != m.end() && !m["Activated"].empty()) {
      activated = make_shared<bool>(boost::any_cast<bool>(m["Activated"]));
    }
    if (m.find("Azone") != m.end() && !m["Azone"].empty()) {
      azone = make_shared<string>(boost::any_cast<string>(m["Azone"]));
    }
    if (m.find("AzoneRoleList") != m.end() && !m["AzoneRoleList"].empty()) {
      if (typeid(vector<boost::any>) == m["AzoneRoleList"].type()) {
        vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AzoneRoleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        azoneRoleList = make_shared<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList>>(expect1);
      }
    }
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("ConnectionIp") != m.end() && !m["ConnectionIp"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionIp"].type()) {
        vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionIp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionIp = make_shared<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp>>(expect1);
      }
    }
    if (m.find("DBInstanceConnType") != m.end() && !m["DBInstanceConnType"].empty()) {
      DBInstanceConnType = make_shared<long>(boost::any_cast<long>(m["DBInstanceConnType"]));
    }
    if (m.find("DBInstanceCreateTime") != m.end() && !m["DBInstanceCreateTime"].empty()) {
      DBInstanceCreateTime = make_shared<string>(boost::any_cast<string>(m["DBInstanceCreateTime"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<long>(boost::any_cast<long>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceStatusDescription") != m.end() && !m["DBInstanceStatusDescription"].empty()) {
      DBInstanceStatusDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatusDescription"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<long>(boost::any_cast<long>(m["LockMode"]));
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
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxIops") != m.end() && !m["MaxIops"].empty()) {
      maxIops = make_shared<long>(boost::any_cast<long>(m["MaxIops"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("PhyInstanceName") != m.end() && !m["PhyInstanceName"].empty()) {
      phyInstanceName = make_shared<string>(boost::any_cast<string>(m["PhyInstanceName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<string>(boost::any_cast<string>(m["StorageUsed"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems() = default;
};
class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceConnType{};
  shared_ptr<string> DBInstanceCreateTime{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> DBInstanceStatus{};
  shared_ptr<string> DBInstanceStatusDescription{};
  shared_ptr<long> DBInstanceStorage{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems>> historyItems{};
  shared_ptr<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems>> items{};
  shared_ptr<long> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};

  DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology() {}

  explicit DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceConnType) {
      res["DBInstanceConnType"] = boost::any(*DBInstanceConnType);
    }
    if (DBInstanceCreateTime) {
      res["DBInstanceCreateTime"] = boost::any(*DBInstanceCreateTime);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceStatusDescription) {
      res["DBInstanceStatusDescription"] = boost::any(*DBInstanceStatusDescription);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (historyItems) {
      vector<boost::any> temp1;
      for(auto item1:*historyItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryItems"] = boost::any(temp1);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceConnType") != m.end() && !m["DBInstanceConnType"].empty()) {
      DBInstanceConnType = make_shared<string>(boost::any_cast<string>(m["DBInstanceConnType"]));
    }
    if (m.find("DBInstanceCreateTime") != m.end() && !m["DBInstanceCreateTime"].empty()) {
      DBInstanceCreateTime = make_shared<string>(boost::any_cast<string>(m["DBInstanceCreateTime"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<long>(boost::any_cast<long>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceStatusDescription") != m.end() && !m["DBInstanceStatusDescription"].empty()) {
      DBInstanceStatusDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatusDescription"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<long>(boost::any_cast<long>(m["DBInstanceStorage"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("HistoryItems") != m.end() && !m["HistoryItems"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryItems"].type()) {
        vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyItems = make_shared<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems>>(expect1);
      }
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItems>>(expect1);
      }
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<long>(boost::any_cast<long>(m["LockMode"]));
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
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology() = default;
};
class DescribeDBInstanceTopologyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology> logicInstanceTopology{};

  DescribeDBInstanceTopologyResponseBodyData() {}

  explicit DescribeDBInstanceTopologyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicInstanceTopology) {
      res["LogicInstanceTopology"] = logicInstanceTopology ? boost::any(logicInstanceTopology->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicInstanceTopology") != m.end() && !m["LogicInstanceTopology"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogicInstanceTopology"].type()) {
        DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogicInstanceTopology"]));
        logicInstanceTopology = make_shared<DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopology>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBodyData() = default;
};
class DescribeDBInstanceTopologyResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceTopologyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceTopologyResponseBody() {}

  explicit DescribeDBInstanceTopologyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBInstanceTopologyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBInstanceTopologyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceTopologyResponseBody() = default;
};
class DescribeDBInstanceTopologyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceTopologyResponseBody> body{};

  DescribeDBInstanceTopologyResponse() {}

  explicit DescribeDBInstanceTopologyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceTopologyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceTopologyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceTopologyResponse() = default;
};
class DescribeDBInstanceViaEndpointRequest : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> regionId{};

  DescribeDBInstanceViaEndpointRequest() {}

  explicit DescribeDBInstanceViaEndpointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBInstanceViaEndpointRequest() = default;
};
class DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<long> port{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcInstanceId{};

  DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs() {}

  explicit DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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


  virtual ~DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs() = default;
};
class DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes : public Darabonba::Model {
public:
  shared_ptr<string> computeNodeId{};
  shared_ptr<string> dataNodeId{};
  shared_ptr<string> id{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes() {}

  explicit DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeNodeId) {
      res["ComputeNodeId"] = boost::any(*computeNodeId);
    }
    if (dataNodeId) {
      res["DataNodeId"] = boost::any(*dataNodeId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
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
    if (m.find("ComputeNodeId") != m.end() && !m["ComputeNodeId"].empty()) {
      computeNodeId = make_shared<string>(boost::any_cast<string>(m["ComputeNodeId"]));
    }
    if (m.find("DataNodeId") != m.end() && !m["DataNodeId"].empty()) {
      dataNodeId = make_shared<string>(boost::any_cast<string>(m["DataNodeId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes() = default;
};
class DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet() {}

  explicit DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet() = default;
};
class DescribeDBInstanceViaEndpointResponseBodyDBInstance : public Darabonba::Model {
public:
  shared_ptr<string> cnNodeClassCode{};
  shared_ptr<long> cnNodeCount{};
  shared_ptr<string> commodityCode{};
  shared_ptr<vector<DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs>> connAddrs{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<vector<DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes>> DBNodes{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> dnNodeClassCode{};
  shared_ptr<long> dnNodeCount{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> expired{};
  shared_ptr<string> id{};
  shared_ptr<long> kindCode{};
  shared_ptr<vector<string>> LTSVersions{};
  shared_ptr<string> latestMinorVersion{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> network{};
  shared_ptr<string> payType{};
  shared_ptr<string> port{};
  shared_ptr<vector<string>> readDBInstances{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> rightsSeparationEnabled{};
  shared_ptr<string> rightsSeparationStatus{};
  shared_ptr<string> series{};
  shared_ptr<string> status{};
  shared_ptr<long> storageUsed{};
  shared_ptr<vector<DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet>> tagSet{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstanceViaEndpointResponseBodyDBInstance() {}

  explicit DescribeDBInstanceViaEndpointResponseBodyDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnNodeClassCode) {
      res["CnNodeClassCode"] = boost::any(*cnNodeClassCode);
    }
    if (cnNodeCount) {
      res["CnNodeCount"] = boost::any(*cnNodeCount);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (connAddrs) {
      vector<boost::any> temp1;
      for(auto item1:*connAddrs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnAddrs"] = boost::any(temp1);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (DBNodes) {
      vector<boost::any> temp1;
      for(auto item1:*DBNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBNodes"] = boost::any(temp1);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dnNodeClassCode) {
      res["DnNodeClassCode"] = boost::any(*dnNodeClassCode);
    }
    if (dnNodeCount) {
      res["DnNodeCount"] = boost::any(*dnNodeCount);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (kindCode) {
      res["KindCode"] = boost::any(*kindCode);
    }
    if (LTSVersions) {
      res["LTSVersions"] = boost::any(*LTSVersions);
    }
    if (latestMinorVersion) {
      res["LatestMinorVersion"] = boost::any(*latestMinorVersion);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (readDBInstances) {
      res["ReadDBInstances"] = boost::any(*readDBInstances);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (rightsSeparationEnabled) {
      res["RightsSeparationEnabled"] = boost::any(*rightsSeparationEnabled);
    }
    if (rightsSeparationStatus) {
      res["RightsSeparationStatus"] = boost::any(*rightsSeparationStatus);
    }
    if (series) {
      res["Series"] = boost::any(*series);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (tagSet) {
      vector<boost::any> temp1;
      for(auto item1:*tagSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagSet"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CnNodeClassCode") != m.end() && !m["CnNodeClassCode"].empty()) {
      cnNodeClassCode = make_shared<string>(boost::any_cast<string>(m["CnNodeClassCode"]));
    }
    if (m.find("CnNodeCount") != m.end() && !m["CnNodeCount"].empty()) {
      cnNodeCount = make_shared<long>(boost::any_cast<long>(m["CnNodeCount"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ConnAddrs") != m.end() && !m["ConnAddrs"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnAddrs"].type()) {
        vector<DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnAddrs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connAddrs = make_shared<vector<DescribeDBInstanceViaEndpointResponseBodyDBInstanceConnAddrs>>(expect1);
      }
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("DBNodes") != m.end() && !m["DBNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["DBNodes"].type()) {
        vector<DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBNodes = make_shared<vector<DescribeDBInstanceViaEndpointResponseBodyDBInstanceDBNodes>>(expect1);
      }
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DnNodeClassCode") != m.end() && !m["DnNodeClassCode"].empty()) {
      dnNodeClassCode = make_shared<string>(boost::any_cast<string>(m["DnNodeClassCode"]));
    }
    if (m.find("DnNodeCount") != m.end() && !m["DnNodeCount"].empty()) {
      dnNodeCount = make_shared<long>(boost::any_cast<long>(m["DnNodeCount"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("KindCode") != m.end() && !m["KindCode"].empty()) {
      kindCode = make_shared<long>(boost::any_cast<long>(m["KindCode"]));
    }
    if (m.find("LTSVersions") != m.end() && !m["LTSVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LTSVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LTSVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      LTSVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LatestMinorVersion") != m.end() && !m["LatestMinorVersion"].empty()) {
      latestMinorVersion = make_shared<string>(boost::any_cast<string>(m["LatestMinorVersion"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ReadDBInstances") != m.end() && !m["ReadDBInstances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReadDBInstances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReadDBInstances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readDBInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RightsSeparationEnabled") != m.end() && !m["RightsSeparationEnabled"].empty()) {
      rightsSeparationEnabled = make_shared<bool>(boost::any_cast<bool>(m["RightsSeparationEnabled"]));
    }
    if (m.find("RightsSeparationStatus") != m.end() && !m["RightsSeparationStatus"].empty()) {
      rightsSeparationStatus = make_shared<string>(boost::any_cast<string>(m["RightsSeparationStatus"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      series = make_shared<string>(boost::any_cast<string>(m["Series"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("TagSet") != m.end() && !m["TagSet"].empty()) {
      if (typeid(vector<boost::any>) == m["TagSet"].type()) {
        vector<DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagSet = make_shared<vector<DescribeDBInstanceViaEndpointResponseBodyDBInstanceTagSet>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstanceViaEndpointResponseBodyDBInstance() = default;
};
class DescribeDBInstanceViaEndpointResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceViaEndpointResponseBodyDBInstance> DBInstance{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceViaEndpointResponseBody() {}

  explicit DescribeDBInstanceViaEndpointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstance) {
      res["DBInstance"] = DBInstance ? boost::any(DBInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstance"].type()) {
        DescribeDBInstanceViaEndpointResponseBodyDBInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstance"]));
        DBInstance = make_shared<DescribeDBInstanceViaEndpointResponseBodyDBInstance>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceViaEndpointResponseBody() = default;
};
class DescribeDBInstanceViaEndpointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceViaEndpointResponseBody> body{};

  DescribeDBInstanceViaEndpointResponse() {}

  explicit DescribeDBInstanceViaEndpointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceViaEndpointResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceViaEndpointResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceViaEndpointResponse() = default;
};
class DescribeDBInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbVersion{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> mustHasCdc{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> series{};
  shared_ptr<string> tags{};

  DescribeDBInstancesRequest() {}

  explicit DescribeDBInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbVersion) {
      res["DbVersion"] = boost::any(*dbVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mustHasCdc) {
      res["MustHasCdc"] = boost::any(*mustHasCdc);
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
    if (series) {
      res["Series"] = boost::any(*series);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbVersion") != m.end() && !m["DbVersion"].empty()) {
      dbVersion = make_shared<string>(boost::any_cast<string>(m["DbVersion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MustHasCdc") != m.end() && !m["MustHasCdc"].empty()) {
      mustHasCdc = make_shared<bool>(boost::any_cast<bool>(m["MustHasCdc"]));
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
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      series = make_shared<string>(boost::any_cast<string>(m["Series"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~DescribeDBInstancesRequest() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesNodes : public Darabonba::Model {
public:
  shared_ptr<string> classCode{};
  shared_ptr<string> id{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstancesResponseBodyDBInstancesNodes() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classCode) {
      res["ClassCode"] = boost::any(*classCode);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("ClassCode") != m.end() && !m["ClassCode"].empty()) {
      classCode = make_shared<string>(boost::any_cast<string>(m["ClassCode"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstancesNodes() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesTagSet : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesResponseBodyDBInstancesTagSet() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesTagSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstancesResponseBodyDBInstancesTagSet() = default;
};
class DescribeDBInstancesResponseBodyDBInstances : public Darabonba::Model {
public:
  shared_ptr<string> cdcInstanceName{};
  shared_ptr<string> cnNodeClassCode{};
  shared_ptr<long> cnNodeCount{};
  shared_ptr<string> columnarInstanceName{};
  shared_ptr<vector<string>> columnarReadDBInstances{};
  shared_ptr<string> commodityCode{};
  shared_ptr<bool> containBinlogX{};
  shared_ptr<string> cpuType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> dnNodeClassCode{};
  shared_ptr<long> dnNodeCount{};
  shared_ptr<string> engine{};
  shared_ptr<string> expireTime{};
  shared_ptr<bool> expired{};
  shared_ptr<string> id{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> network{};
  shared_ptr<string> nodeClass{};
  shared_ptr<long> nodeCount{};
  shared_ptr<vector<DescribeDBInstancesResponseBodyDBInstancesNodes>> nodes{};
  shared_ptr<string> payType{};
  shared_ptr<string> primaryInstanceId{};
  shared_ptr<string> primaryZone{};
  shared_ptr<vector<string>> readDBInstances{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> secondaryZone{};
  shared_ptr<string> series{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};
  shared_ptr<long> storageUsed{};
  shared_ptr<bool> supportBinlogX{};
  shared_ptr<vector<DescribeDBInstancesResponseBodyDBInstancesTagSet>> tagSet{};
  shared_ptr<string> tertiaryZone{};
  shared_ptr<string> topologyType{};
  shared_ptr<string> type{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> gdnRole{};
  shared_ptr<bool> isInGdn{};

  DescribeDBInstancesResponseBodyDBInstances() {}

  explicit DescribeDBInstancesResponseBodyDBInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdcInstanceName) {
      res["CdcInstanceName"] = boost::any(*cdcInstanceName);
    }
    if (cnNodeClassCode) {
      res["CnNodeClassCode"] = boost::any(*cnNodeClassCode);
    }
    if (cnNodeCount) {
      res["CnNodeCount"] = boost::any(*cnNodeCount);
    }
    if (columnarInstanceName) {
      res["ColumnarInstanceName"] = boost::any(*columnarInstanceName);
    }
    if (columnarReadDBInstances) {
      res["ColumnarReadDBInstances"] = boost::any(*columnarReadDBInstances);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (containBinlogX) {
      res["ContainBinlogX"] = boost::any(*containBinlogX);
    }
    if (cpuType) {
      res["CpuType"] = boost::any(*cpuType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dnNodeClassCode) {
      res["DnNodeClassCode"] = boost::any(*dnNodeClassCode);
    }
    if (dnNodeCount) {
      res["DnNodeCount"] = boost::any(*dnNodeCount);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (primaryInstanceId) {
      res["PrimaryInstanceId"] = boost::any(*primaryInstanceId);
    }
    if (primaryZone) {
      res["PrimaryZone"] = boost::any(*primaryZone);
    }
    if (readDBInstances) {
      res["ReadDBInstances"] = boost::any(*readDBInstances);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (secondaryZone) {
      res["SecondaryZone"] = boost::any(*secondaryZone);
    }
    if (series) {
      res["Series"] = boost::any(*series);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (supportBinlogX) {
      res["SupportBinlogX"] = boost::any(*supportBinlogX);
    }
    if (tagSet) {
      vector<boost::any> temp1;
      for(auto item1:*tagSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagSet"] = boost::any(temp1);
    }
    if (tertiaryZone) {
      res["TertiaryZone"] = boost::any(*tertiaryZone);
    }
    if (topologyType) {
      res["TopologyType"] = boost::any(*topologyType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (gdnRole) {
      res["gdnRole"] = boost::any(*gdnRole);
    }
    if (isInGdn) {
      res["isInGdn"] = boost::any(*isInGdn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdcInstanceName") != m.end() && !m["CdcInstanceName"].empty()) {
      cdcInstanceName = make_shared<string>(boost::any_cast<string>(m["CdcInstanceName"]));
    }
    if (m.find("CnNodeClassCode") != m.end() && !m["CnNodeClassCode"].empty()) {
      cnNodeClassCode = make_shared<string>(boost::any_cast<string>(m["CnNodeClassCode"]));
    }
    if (m.find("CnNodeCount") != m.end() && !m["CnNodeCount"].empty()) {
      cnNodeCount = make_shared<long>(boost::any_cast<long>(m["CnNodeCount"]));
    }
    if (m.find("ColumnarInstanceName") != m.end() && !m["ColumnarInstanceName"].empty()) {
      columnarInstanceName = make_shared<string>(boost::any_cast<string>(m["ColumnarInstanceName"]));
    }
    if (m.find("ColumnarReadDBInstances") != m.end() && !m["ColumnarReadDBInstances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ColumnarReadDBInstances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ColumnarReadDBInstances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columnarReadDBInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ContainBinlogX") != m.end() && !m["ContainBinlogX"].empty()) {
      containBinlogX = make_shared<bool>(boost::any_cast<bool>(m["ContainBinlogX"]));
    }
    if (m.find("CpuType") != m.end() && !m["CpuType"].empty()) {
      cpuType = make_shared<string>(boost::any_cast<string>(m["CpuType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DnNodeClassCode") != m.end() && !m["DnNodeClassCode"].empty()) {
      dnNodeClassCode = make_shared<string>(boost::any_cast<string>(m["DnNodeClassCode"]));
    }
    if (m.find("DnNodeCount") != m.end() && !m["DnNodeCount"].empty()) {
      dnNodeCount = make_shared<long>(boost::any_cast<long>(m["DnNodeCount"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeDBInstancesResponseBodyDBInstancesNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyDBInstancesNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeDBInstancesResponseBodyDBInstancesNodes>>(expect1);
      }
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PrimaryInstanceId") != m.end() && !m["PrimaryInstanceId"].empty()) {
      primaryInstanceId = make_shared<string>(boost::any_cast<string>(m["PrimaryInstanceId"]));
    }
    if (m.find("PrimaryZone") != m.end() && !m["PrimaryZone"].empty()) {
      primaryZone = make_shared<string>(boost::any_cast<string>(m["PrimaryZone"]));
    }
    if (m.find("ReadDBInstances") != m.end() && !m["ReadDBInstances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReadDBInstances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReadDBInstances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      readDBInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecondaryZone") != m.end() && !m["SecondaryZone"].empty()) {
      secondaryZone = make_shared<string>(boost::any_cast<string>(m["SecondaryZone"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      series = make_shared<string>(boost::any_cast<string>(m["Series"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<long>(boost::any_cast<long>(m["StorageUsed"]));
    }
    if (m.find("SupportBinlogX") != m.end() && !m["SupportBinlogX"].empty()) {
      supportBinlogX = make_shared<bool>(boost::any_cast<bool>(m["SupportBinlogX"]));
    }
    if (m.find("TagSet") != m.end() && !m["TagSet"].empty()) {
      if (typeid(vector<boost::any>) == m["TagSet"].type()) {
        vector<DescribeDBInstancesResponseBodyDBInstancesTagSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyDBInstancesTagSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagSet = make_shared<vector<DescribeDBInstancesResponseBodyDBInstancesTagSet>>(expect1);
      }
    }
    if (m.find("TertiaryZone") != m.end() && !m["TertiaryZone"].empty()) {
      tertiaryZone = make_shared<string>(boost::any_cast<string>(m["TertiaryZone"]));
    }
    if (m.find("TopologyType") != m.end() && !m["TopologyType"].empty()) {
      topologyType = make_shared<string>(boost::any_cast<string>(m["TopologyType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("gdnRole") != m.end() && !m["gdnRole"].empty()) {
      gdnRole = make_shared<string>(boost::any_cast<string>(m["gdnRole"]));
    }
    if (m.find("isInGdn") != m.end() && !m["isInGdn"].empty()) {
      isInGdn = make_shared<bool>(boost::any_cast<bool>(m["isInGdn"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstances() = default;
};
class DescribeDBInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyDBInstances>> DBInstances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNumber{};

  DescribeDBInstancesResponseBody() {}

  explicit DescribeDBInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstances) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstances"] = boost::any(temp1);
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
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstances") != m.end() && !m["DBInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstances"].type()) {
        vector<DescribeDBInstancesResponseBodyDBInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyDBInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstances = make_shared<vector<DescribeDBInstancesResponseBodyDBInstances>>(expect1);
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
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<long>(boost::any_cast<long>(m["TotalNumber"]));
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
class DescribeDBNodePerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> characterType{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBNodeIds{};
  shared_ptr<string> DBNodeRole{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeDBNodePerformanceRequest() {}

  explicit DescribeDBNodePerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBNodeIds) {
      res["DBNodeIds"] = boost::any(*DBNodeIds);
    }
    if (DBNodeRole) {
      res["DBNodeRole"] = boost::any(*DBNodeRole);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBNodeIds") != m.end() && !m["DBNodeIds"].empty()) {
      DBNodeIds = make_shared<string>(boost::any_cast<string>(m["DBNodeIds"]));
    }
    if (m.find("DBNodeRole") != m.end() && !m["DBNodeRole"].empty()) {
      DBNodeRole = make_shared<string>(boost::any_cast<string>(m["DBNodeRole"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBNodePerformanceRequest() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue : public Darabonba::Model {
public:
  shared_ptr<long> timestamp{};
  shared_ptr<string> value{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>> performanceItemValue{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItemValue) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItemValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItemValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItemValue") != m.end() && !m["PerformanceItemValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItemValue"].type()) {
        vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItemValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItemValue = make_shared<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPointsPerformanceItemValue>>(expect1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem : public Darabonba::Model {
public:
  shared_ptr<string> DBNodeId{};
  shared_ptr<string> measurement{};
  shared_ptr<string> metricName{};
  shared_ptr<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints> points{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBNodeId) {
      res["DBNodeId"] = boost::any(*DBNodeId);
    }
    if (measurement) {
      res["Measurement"] = boost::any(*measurement);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (points) {
      res["Points"] = points ? boost::any(points->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBNodeId") != m.end() && !m["DBNodeId"].empty()) {
      DBNodeId = make_shared<string>(boost::any_cast<string>(m["DBNodeId"]));
    }
    if (m.find("Measurement") != m.end() && !m["Measurement"].empty()) {
      measurement = make_shared<string>(boost::any_cast<string>(m["Measurement"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      if (typeid(map<string, boost::any>) == m["Points"].type()) {
        DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Points"]));
        points = make_shared<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItemPoints>(model1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem() = default;
};
class DescribeDBNodePerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem>> performanceItem{};

  DescribeDBNodePerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeDBNodePerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceItem) {
      vector<boost::any> temp1;
      for(auto item1:*performanceItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceItem") != m.end() && !m["PerformanceItem"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceItem"].type()) {
        vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceItem = make_shared<vector<DescribeDBNodePerformanceResponseBodyPerformanceKeysPerformanceItem>>(expect1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeDBNodePerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDBNodePerformanceResponseBodyPerformanceKeys> performanceKeys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBNodePerformanceResponseBody() {}

  explicit DescribeDBNodePerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performanceKeys) {
      res["PerformanceKeys"] = performanceKeys ? boost::any(performanceKeys->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerformanceKeys"].type()) {
        DescribeDBNodePerformanceResponseBodyPerformanceKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerformanceKeys"]));
        performanceKeys = make_shared<DescribeDBNodePerformanceResponseBodyPerformanceKeys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBNodePerformanceResponseBody() = default;
};
class DescribeDBNodePerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBNodePerformanceResponseBody> body{};

  DescribeDBNodePerformanceResponse() {}

  explicit DescribeDBNodePerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBNodePerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBNodePerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBNodePerformanceResponse() = default;
};
class DescribeDbListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> regionId{};

  DescribeDbListRequest() {}

  explicit DescribeDbListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDbListRequest() = default;
};
class DescribeDbListResponseBodyDataAccounts : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};

  DescribeDbListResponseBodyDataAccounts() {}

  explicit DescribeDbListResponseBodyDataAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
  }


  virtual ~DescribeDbListResponseBodyDataAccounts() = default;
};
class DescribeDbListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDbListResponseBodyDataAccounts>> accounts{};
  shared_ptr<string> characterSetName{};
  shared_ptr<string> DBDescription{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBName{};

  DescribeDbListResponseBodyData() {}

  explicit DescribeDbListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      vector<boost::any> temp1;
      for(auto item1:*accounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Accounts"] = boost::any(temp1);
    }
    if (characterSetName) {
      res["CharacterSetName"] = boost::any(*characterSetName);
    }
    if (DBDescription) {
      res["DBDescription"] = boost::any(*DBDescription);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(vector<boost::any>) == m["Accounts"].type()) {
        vector<DescribeDbListResponseBodyDataAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Accounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDbListResponseBodyDataAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accounts = make_shared<vector<DescribeDbListResponseBodyDataAccounts>>(expect1);
      }
    }
    if (m.find("CharacterSetName") != m.end() && !m["CharacterSetName"].empty()) {
      characterSetName = make_shared<string>(boost::any_cast<string>(m["CharacterSetName"]));
    }
    if (m.find("DBDescription") != m.end() && !m["DBDescription"].empty()) {
      DBDescription = make_shared<string>(boost::any_cast<string>(m["DBDescription"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
  }


  virtual ~DescribeDbListResponseBodyData() = default;
};
class DescribeDbListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDbListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDbListResponseBody() {}

  explicit DescribeDbListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeDbListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDbListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeDbListResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeDbListResponseBody() = default;
};
class DescribeDbListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDbListResponseBody> body{};

  DescribeDbListResponse() {}

  explicit DescribeDbListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDbListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDbListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDbListResponse() = default;
};
class DescribeDistributeTableListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbName{};
  shared_ptr<string> regionId{};

  DescribeDistributeTableListRequest() {}

  explicit DescribeDistributeTableListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDistributeTableListRequest() = default;
};
class DescribeDistributeTableListResponseBodyDataTables : public Darabonba::Model {
public:
  shared_ptr<string> dbKey{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tableType{};
  shared_ptr<string> tbKey{};

  DescribeDistributeTableListResponseBodyDataTables() {}

  explicit DescribeDistributeTableListResponseBodyDataTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbKey) {
      res["DbKey"] = boost::any(*dbKey);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    if (tbKey) {
      res["TbKey"] = boost::any(*tbKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbKey") != m.end() && !m["DbKey"].empty()) {
      dbKey = make_shared<string>(boost::any_cast<string>(m["DbKey"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
    if (m.find("TbKey") != m.end() && !m["TbKey"].empty()) {
      tbKey = make_shared<string>(boost::any_cast<string>(m["TbKey"]));
    }
  }


  virtual ~DescribeDistributeTableListResponseBodyDataTables() = default;
};
class DescribeDistributeTableListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDistributeTableListResponseBodyDataTables>> tables{};

  DescribeDistributeTableListResponseBodyData() {}

  explicit DescribeDistributeTableListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<DescribeDistributeTableListResponseBodyDataTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDistributeTableListResponseBodyDataTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<DescribeDistributeTableListResponseBodyDataTables>>(expect1);
      }
    }
  }


  virtual ~DescribeDistributeTableListResponseBodyData() = default;
};
class DescribeDistributeTableListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDistributeTableListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDistributeTableListResponseBody() {}

  explicit DescribeDistributeTableListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDistributeTableListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDistributeTableListResponseBodyData>(model1);
      }
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


  virtual ~DescribeDistributeTableListResponseBody() = default;
};
class DescribeDistributeTableListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDistributeTableListResponseBody> body{};

  DescribeDistributeTableListResponse() {}

  explicit DescribeDistributeTableListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDistributeTableListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDistributeTableListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDistributeTableListResponse() = default;
};
class DescribeEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeEventsRequest() {}

  explicit DescribeEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeEventsRequest() = default;
};
class DescribeEventsResponseBodyEventItems : public Darabonba::Model {
public:
  shared_ptr<long> eventId{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventPayload{};
  shared_ptr<string> eventReason{};
  shared_ptr<string> eventRecordTime{};
  shared_ptr<string> eventTime{};
  shared_ptr<string> eventType{};
  shared_ptr<string> eventUserType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  DescribeEventsResponseBodyEventItems() {}

  explicit DescribeEventsResponseBodyEventItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventPayload) {
      res["EventPayload"] = boost::any(*eventPayload);
    }
    if (eventReason) {
      res["EventReason"] = boost::any(*eventReason);
    }
    if (eventRecordTime) {
      res["EventRecordTime"] = boost::any(*eventRecordTime);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (eventUserType) {
      res["EventUserType"] = boost::any(*eventUserType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<long>(boost::any_cast<long>(m["EventId"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventPayload") != m.end() && !m["EventPayload"].empty()) {
      eventPayload = make_shared<string>(boost::any_cast<string>(m["EventPayload"]));
    }
    if (m.find("EventReason") != m.end() && !m["EventReason"].empty()) {
      eventReason = make_shared<string>(boost::any_cast<string>(m["EventReason"]));
    }
    if (m.find("EventRecordTime") != m.end() && !m["EventRecordTime"].empty()) {
      eventRecordTime = make_shared<string>(boost::any_cast<string>(m["EventRecordTime"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["EventTime"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("EventUserType") != m.end() && !m["EventUserType"].empty()) {
      eventUserType = make_shared<string>(boost::any_cast<string>(m["EventUserType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeEventsResponseBodyEventItems() = default;
};
class DescribeEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEventsResponseBodyEventItems>> eventItems{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeEventsResponseBody() {}

  explicit DescribeEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventItems) {
      vector<boost::any> temp1;
      for(auto item1:*eventItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventItems"] = boost::any(temp1);
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
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventItems") != m.end() && !m["EventItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EventItems"].type()) {
        vector<DescribeEventsResponseBodyEventItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventsResponseBodyEventItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventItems = make_shared<vector<DescribeEventsResponseBodyEventItems>>(expect1);
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
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeEventsResponseBody() = default;
};
class DescribeEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEventsResponseBody> body{};

  DescribeEventsResponse() {}

  explicit DescribeEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventsResponse() = default;
};
class DescribeGdnInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterType{};
  shared_ptr<string> filterValue{};
  shared_ptr<string> GDNId{};
  shared_ptr<string> pageNum{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionId{};

  DescribeGdnInstancesRequest() {}

  explicit DescribeGdnInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterType) {
      res["FilterType"] = boost::any(*filterType);
    }
    if (filterValue) {
      res["FilterValue"] = boost::any(*filterValue);
    }
    if (GDNId) {
      res["GDNId"] = boost::any(*GDNId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (m.find("FilterType") != m.end() && !m["FilterType"].empty()) {
      filterType = make_shared<string>(boost::any_cast<string>(m["FilterType"]));
    }
    if (m.find("FilterValue") != m.end() && !m["FilterValue"].empty()) {
      filterValue = make_shared<string>(boost::any_cast<string>(m["FilterValue"]));
    }
    if (m.find("GDNId") != m.end() && !m["GDNId"].empty()) {
      GDNId = make_shared<string>(boost::any_cast<string>(m["GDNId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeGdnInstancesRequest() = default;
};
class DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList : public Darabonba::Model {
public:
  shared_ptr<string> classCode{};
  shared_ptr<string> cnNodeClassCode{};
  shared_ptr<string> cnNodeCount{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> dnNodeClassCode{};
  shared_ptr<string> dnNodeCount{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> memberName{};
  shared_ptr<string> payType{};
  shared_ptr<string> primaryZone{};
  shared_ptr<string> regionId{};
  shared_ptr<string> role{};
  shared_ptr<string> secondaryZone{};
  shared_ptr<string> secondsBehindMaster{};
  shared_ptr<string> status{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> tertiaryZone{};
  shared_ptr<string> zoneId{};

  DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList() {}

  explicit DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classCode) {
      res["ClassCode"] = boost::any(*classCode);
    }
    if (cnNodeClassCode) {
      res["CnNodeClassCode"] = boost::any(*cnNodeClassCode);
    }
    if (cnNodeCount) {
      res["CnNodeCount"] = boost::any(*cnNodeCount);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (dnNodeClassCode) {
      res["DnNodeClassCode"] = boost::any(*dnNodeClassCode);
    }
    if (dnNodeCount) {
      res["DnNodeCount"] = boost::any(*dnNodeCount);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (primaryZone) {
      res["PrimaryZone"] = boost::any(*primaryZone);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (secondaryZone) {
      res["SecondaryZone"] = boost::any(*secondaryZone);
    }
    if (secondsBehindMaster) {
      res["SecondsBehindMaster"] = boost::any(*secondsBehindMaster);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (tertiaryZone) {
      res["TertiaryZone"] = boost::any(*tertiaryZone);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassCode") != m.end() && !m["ClassCode"].empty()) {
      classCode = make_shared<string>(boost::any_cast<string>(m["ClassCode"]));
    }
    if (m.find("CnNodeClassCode") != m.end() && !m["CnNodeClassCode"].empty()) {
      cnNodeClassCode = make_shared<string>(boost::any_cast<string>(m["CnNodeClassCode"]));
    }
    if (m.find("CnNodeCount") != m.end() && !m["CnNodeCount"].empty()) {
      cnNodeCount = make_shared<string>(boost::any_cast<string>(m["CnNodeCount"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("DnNodeClassCode") != m.end() && !m["DnNodeClassCode"].empty()) {
      dnNodeClassCode = make_shared<string>(boost::any_cast<string>(m["DnNodeClassCode"]));
    }
    if (m.find("DnNodeCount") != m.end() && !m["DnNodeCount"].empty()) {
      dnNodeCount = make_shared<string>(boost::any_cast<string>(m["DnNodeCount"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PrimaryZone") != m.end() && !m["PrimaryZone"].empty()) {
      primaryZone = make_shared<string>(boost::any_cast<string>(m["PrimaryZone"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SecondaryZone") != m.end() && !m["SecondaryZone"].empty()) {
      secondaryZone = make_shared<string>(boost::any_cast<string>(m["SecondaryZone"]));
    }
    if (m.find("SecondsBehindMaster") != m.end() && !m["SecondsBehindMaster"].empty()) {
      secondsBehindMaster = make_shared<string>(boost::any_cast<string>(m["SecondsBehindMaster"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TertiaryZone") != m.end() && !m["TertiaryZone"].empty()) {
      tertiaryZone = make_shared<string>(boost::any_cast<string>(m["TertiaryZone"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList() = default;
};
class DescribeGdnInstancesResponseBodyDataGdnInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> gdnInstanceName{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<vector<DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList>> memberList{};
  shared_ptr<string> mysqlVersion{};
  shared_ptr<string> status{};
  shared_ptr<string> switchHistory{};

  DescribeGdnInstancesResponseBodyDataGdnInstanceList() {}

  explicit DescribeGdnInstancesResponseBodyDataGdnInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gdnInstanceName) {
      res["GdnInstanceName"] = boost::any(*gdnInstanceName);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (memberList) {
      vector<boost::any> temp1;
      for(auto item1:*memberList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MemberList"] = boost::any(temp1);
    }
    if (mysqlVersion) {
      res["MysqlVersion"] = boost::any(*mysqlVersion);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (switchHistory) {
      res["SwitchHistory"] = boost::any(*switchHistory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GdnInstanceName") != m.end() && !m["GdnInstanceName"].empty()) {
      gdnInstanceName = make_shared<string>(boost::any_cast<string>(m["GdnInstanceName"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("MemberList") != m.end() && !m["MemberList"].empty()) {
      if (typeid(vector<boost::any>) == m["MemberList"].type()) {
        vector<DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MemberList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        memberList = make_shared<vector<DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList>>(expect1);
      }
    }
    if (m.find("MysqlVersion") != m.end() && !m["MysqlVersion"].empty()) {
      mysqlVersion = make_shared<string>(boost::any_cast<string>(m["MysqlVersion"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SwitchHistory") != m.end() && !m["SwitchHistory"].empty()) {
      switchHistory = make_shared<string>(boost::any_cast<string>(m["SwitchHistory"]));
    }
  }


  virtual ~DescribeGdnInstancesResponseBodyDataGdnInstanceList() = default;
};
class DescribeGdnInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGdnInstancesResponseBodyDataGdnInstanceList>> gdnInstanceList{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalNumber{};

  DescribeGdnInstancesResponseBodyData() {}

  explicit DescribeGdnInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gdnInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*gdnInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GdnInstanceList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNumber) {
      res["TotalNumber"] = boost::any(*totalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GdnInstanceList") != m.end() && !m["GdnInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["GdnInstanceList"].type()) {
        vector<DescribeGdnInstancesResponseBodyDataGdnInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GdnInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGdnInstancesResponseBodyDataGdnInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gdnInstanceList = make_shared<vector<DescribeGdnInstancesResponseBodyDataGdnInstanceList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalNumber") != m.end() && !m["TotalNumber"].empty()) {
      totalNumber = make_shared<string>(boost::any_cast<string>(m["TotalNumber"]));
    }
  }


  virtual ~DescribeGdnInstancesResponseBodyData() = default;
};
class DescribeGdnInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGdnInstancesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGdnInstancesResponseBody() {}

  explicit DescribeGdnInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeGdnInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeGdnInstancesResponseBodyData>(model1);
      }
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


  virtual ~DescribeGdnInstancesResponseBody() = default;
};
class DescribeGdnInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGdnInstancesResponseBody> body{};

  DescribeGdnInstancesResponse() {}

  explicit DescribeGdnInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGdnInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGdnInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGdnInstancesResponse() = default;
};
class DescribeOpenBackupSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> restoreTime{};

  DescribeOpenBackupSetRequest() {}

  explicit DescribeOpenBackupSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
  }


  virtual ~DescribeOpenBackupSetRequest() = default;
};
class DescribeOpenBackupSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<boost::any> data{};
  shared_ptr<string> requestId{};

  DescribeOpenBackupSetResponseBody() {}

  explicit DescribeOpenBackupSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeOpenBackupSetResponseBody() = default;
};
class DescribeOpenBackupSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOpenBackupSetResponseBody> body{};

  DescribeOpenBackupSetResponse() {}

  explicit DescribeOpenBackupSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeOpenBackupSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOpenBackupSetResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOpenBackupSetResponse() = default;
};
class DescribeParameterTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> paramLevel{};
  shared_ptr<string> regionId{};

  DescribeParameterTemplatesRequest() {}

  explicit DescribeParameterTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (paramLevel) {
      res["ParamLevel"] = boost::any(*paramLevel);
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
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ParamLevel") != m.end() && !m["ParamLevel"].empty()) {
      paramLevel = make_shared<string>(boost::any_cast<string>(m["ParamLevel"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeParameterTemplatesRequest() = default;
};
class DescribeParameterTemplatesResponseBodyDataParameters : public Darabonba::Model {
public:
  shared_ptr<string> checkingCode{};
  shared_ptr<long> dynamic{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};
  shared_ptr<long> revisable{};

  DescribeParameterTemplatesResponseBodyDataParameters() {}

  explicit DescribeParameterTemplatesResponseBodyDataParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (dynamic) {
      res["Dynamic"] = boost::any(*dynamic);
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
    if (revisable) {
      res["Revisable"] = boost::any(*revisable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("Dynamic") != m.end() && !m["Dynamic"].empty()) {
      dynamic = make_shared<long>(boost::any_cast<long>(m["Dynamic"]));
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
    if (m.find("Revisable") != m.end() && !m["Revisable"].empty()) {
      revisable = make_shared<long>(boost::any_cast<long>(m["Revisable"]));
    }
  }


  virtual ~DescribeParameterTemplatesResponseBodyDataParameters() = default;
};
class DescribeParameterTemplatesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<long> parameterCount{};
  shared_ptr<vector<DescribeParameterTemplatesResponseBodyDataParameters>> parameters{};

  DescribeParameterTemplatesResponseBodyData() {}

  explicit DescribeParameterTemplatesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (parameterCount) {
      res["ParameterCount"] = boost::any(*parameterCount);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ParameterCount") != m.end() && !m["ParameterCount"].empty()) {
      parameterCount = make_shared<long>(boost::any_cast<long>(m["ParameterCount"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<DescribeParameterTemplatesResponseBodyDataParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParameterTemplatesResponseBodyDataParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<DescribeParameterTemplatesResponseBodyDataParameters>>(expect1);
      }
    }
  }


  virtual ~DescribeParameterTemplatesResponseBodyData() = default;
};
class DescribeParameterTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeParameterTemplatesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeParameterTemplatesResponseBody() {}

  explicit DescribeParameterTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeParameterTemplatesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeParameterTemplatesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeParameterTemplatesResponseBody() = default;
};
class DescribeParameterTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeParameterTemplatesResponseBody> body{};

  DescribeParameterTemplatesResponse() {}

  explicit DescribeParameterTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeParameterTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParameterTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParameterTemplatesResponse() = default;
};
class DescribeParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> paramLevel{};
  shared_ptr<string> regionId{};

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
    if (paramLevel) {
      res["ParamLevel"] = boost::any(*paramLevel);
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
    if (m.find("ParamLevel") != m.end() && !m["ParamLevel"].empty()) {
      paramLevel = make_shared<string>(boost::any_cast<string>(m["ParamLevel"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeParametersRequest() = default;
};
class DescribeParametersResponseBodyDataConfigParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParametersResponseBodyDataConfigParameters() {}

  explicit DescribeParametersResponseBodyDataConfigParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~DescribeParametersResponseBodyDataConfigParameters() = default;
};
class DescribeParametersResponseBodyDataRunningParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParametersResponseBodyDataRunningParameters() {}

  explicit DescribeParametersResponseBodyDataRunningParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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


  virtual ~DescribeParametersResponseBodyDataRunningParameters() = default;
};
class DescribeParametersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParametersResponseBodyDataConfigParameters>> configParameters{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<vector<DescribeParametersResponseBodyDataRunningParameters>> runningParameters{};

  DescribeParametersResponseBodyData() {}

  explicit DescribeParametersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configParameters) {
      vector<boost::any> temp1;
      for(auto item1:*configParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigParameters"] = boost::any(temp1);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (runningParameters) {
      vector<boost::any> temp1;
      for(auto item1:*runningParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RunningParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigParameters") != m.end() && !m["ConfigParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigParameters"].type()) {
        vector<DescribeParametersResponseBodyDataConfigParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyDataConfigParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configParameters = make_shared<vector<DescribeParametersResponseBodyDataConfigParameters>>(expect1);
      }
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RunningParameters") != m.end() && !m["RunningParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["RunningParameters"].type()) {
        vector<DescribeParametersResponseBodyDataRunningParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RunningParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyDataRunningParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runningParameters = make_shared<vector<DescribeParametersResponseBodyDataRunningParameters>>(expect1);
      }
    }
  }


  virtual ~DescribeParametersResponseBodyData() = default;
};
class DescribeParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeParametersResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeParametersResponseBody() {}

  explicit DescribeParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeParametersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeParametersResponseBodyData>(model1);
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
  shared_ptr<bool> supportPolarx10{};
  shared_ptr<bool> supportPolarx20{};
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
    if (supportPolarx10) {
      res["SupportPolarx10"] = boost::any(*supportPolarx10);
    }
    if (supportPolarx20) {
      res["SupportPolarx20"] = boost::any(*supportPolarx20);
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
    if (m.find("SupportPolarx10") != m.end() && !m["SupportPolarx10"].empty()) {
      supportPolarx10 = make_shared<bool>(boost::any_cast<bool>(m["SupportPolarx10"]));
    }
    if (m.find("SupportPolarx20") != m.end() && !m["SupportPolarx20"].empty()) {
      supportPolarx20 = make_shared<bool>(boost::any_cast<bool>(m["SupportPolarx20"]));
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
  shared_ptr<long> code{};
  shared_ptr<long> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class DescribeScaleOutMigrateTaskListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeScaleOutMigrateTaskListRequest() {}

  explicit DescribeScaleOutMigrateTaskListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeScaleOutMigrateTaskListRequest() = default;
};
class DescribeScaleOutMigrateTaskListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> progress{};
  shared_ptr<string> requestId{};

  DescribeScaleOutMigrateTaskListResponseBody() {}

  explicit DescribeScaleOutMigrateTaskListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeScaleOutMigrateTaskListResponseBody() = default;
};
class DescribeScaleOutMigrateTaskListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScaleOutMigrateTaskListResponseBody> body{};

  DescribeScaleOutMigrateTaskListResponse() {}

  explicit DescribeScaleOutMigrateTaskListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeScaleOutMigrateTaskListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScaleOutMigrateTaskListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScaleOutMigrateTaskListResponse() = default;
};
class DescribeSecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeSecurityIpsRequest() {}

  explicit DescribeSecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeSecurityIpsRequest() = default;
};
class DescribeSecurityIpsResponseBodyDataGroupItems : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> securityIPList{};

  DescribeSecurityIpsResponseBodyDataGroupItems() {}

  explicit DescribeSecurityIpsResponseBodyDataGroupItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~DescribeSecurityIpsResponseBodyDataGroupItems() = default;
};
class DescribeSecurityIpsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<vector<DescribeSecurityIpsResponseBodyDataGroupItems>> groupItems{};

  DescribeSecurityIpsResponseBodyData() {}

  explicit DescribeSecurityIpsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (groupItems) {
      vector<boost::any> temp1;
      for(auto item1:*groupItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("GroupItems") != m.end() && !m["GroupItems"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupItems"].type()) {
        vector<DescribeSecurityIpsResponseBodyDataGroupItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecurityIpsResponseBodyDataGroupItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupItems = make_shared<vector<DescribeSecurityIpsResponseBodyDataGroupItems>>(expect1);
      }
    }
  }


  virtual ~DescribeSecurityIpsResponseBodyData() = default;
};
class DescribeSecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSecurityIpsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeSecurityIpsResponseBody() {}

  explicit DescribeSecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeSecurityIpsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeSecurityIpsResponseBodyData>(model1);
      }
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


  virtual ~DescribeSecurityIpsResponseBody() = default;
};
class DescribeSecurityIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSecurityIpsResponseBody> body{};

  DescribeSecurityIpsResponse() {}

  explicit DescribeSecurityIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSecurityIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecurityIpsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecurityIpsResponse() = default;
};
class DescribeSlowLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> characterType{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> DBNodeIds{};
  shared_ptr<string> endTime{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeSlowLogRecordsRequest() {}

  explicit DescribeSlowLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (DBNodeIds) {
      res["DBNodeIds"] = boost::any(*DBNodeIds);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("DBNodeIds") != m.end() && !m["DBNodeIds"].empty()) {
      DBNodeIds = make_shared<string>(boost::any_cast<string>(m["DBNodeIds"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeSlowLogRecordsRequest() = default;
};
class DescribeSlowLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> CNname{};
  shared_ptr<string> DBName{};
  shared_ptr<string> extension{};
  shared_ptr<string> fail{};
  shared_ptr<string> frows{};
  shared_ptr<string> hostAddress{};
  shared_ptr<string> insName{};
  shared_ptr<string> isBind{};
  shared_ptr<string> lockTimeMS{};
  shared_ptr<string> params{};
  shared_ptr<string> parseRowCounts{};
  shared_ptr<string> queryStartTime{};
  shared_ptr<string> queryTime{};
  shared_ptr<string> queryTimeMS{};
  shared_ptr<string> returnRowCounts{};
  shared_ptr<string> rows{};
  shared_ptr<string> SCNT{};
  shared_ptr<string> SQLHash{};
  shared_ptr<string> SQLText{};
  shared_ptr<string> sqlType{};
  shared_ptr<string> templateId{};
  shared_ptr<string> tooLong{};
  shared_ptr<string> traceId{};
  shared_ptr<string> transactionPolicy{};
  shared_ptr<string> trxId{};
  shared_ptr<string> WT{};

  DescribeSlowLogRecordsResponseBodyItems() {}

  explicit DescribeSlowLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CNname) {
      res["CNname"] = boost::any(*CNname);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    if (fail) {
      res["Fail"] = boost::any(*fail);
    }
    if (frows) {
      res["Frows"] = boost::any(*frows);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (isBind) {
      res["IsBind"] = boost::any(*isBind);
    }
    if (lockTimeMS) {
      res["LockTimeMS"] = boost::any(*lockTimeMS);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (parseRowCounts) {
      res["ParseRowCounts"] = boost::any(*parseRowCounts);
    }
    if (queryStartTime) {
      res["QueryStartTime"] = boost::any(*queryStartTime);
    }
    if (queryTime) {
      res["QueryTime"] = boost::any(*queryTime);
    }
    if (queryTimeMS) {
      res["QueryTimeMS"] = boost::any(*queryTimeMS);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (SCNT) {
      res["SCNT"] = boost::any(*SCNT);
    }
    if (SQLHash) {
      res["SQLHash"] = boost::any(*SQLHash);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (tooLong) {
      res["TooLong"] = boost::any(*tooLong);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (transactionPolicy) {
      res["TransactionPolicy"] = boost::any(*transactionPolicy);
    }
    if (trxId) {
      res["TrxId"] = boost::any(*trxId);
    }
    if (WT) {
      res["WT"] = boost::any(*WT);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CNname") != m.end() && !m["CNname"].empty()) {
      CNname = make_shared<string>(boost::any_cast<string>(m["CNname"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      extension = make_shared<string>(boost::any_cast<string>(m["Extension"]));
    }
    if (m.find("Fail") != m.end() && !m["Fail"].empty()) {
      fail = make_shared<string>(boost::any_cast<string>(m["Fail"]));
    }
    if (m.find("Frows") != m.end() && !m["Frows"].empty()) {
      frows = make_shared<string>(boost::any_cast<string>(m["Frows"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("IsBind") != m.end() && !m["IsBind"].empty()) {
      isBind = make_shared<string>(boost::any_cast<string>(m["IsBind"]));
    }
    if (m.find("LockTimeMS") != m.end() && !m["LockTimeMS"].empty()) {
      lockTimeMS = make_shared<string>(boost::any_cast<string>(m["LockTimeMS"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("ParseRowCounts") != m.end() && !m["ParseRowCounts"].empty()) {
      parseRowCounts = make_shared<string>(boost::any_cast<string>(m["ParseRowCounts"]));
    }
    if (m.find("QueryStartTime") != m.end() && !m["QueryStartTime"].empty()) {
      queryStartTime = make_shared<string>(boost::any_cast<string>(m["QueryStartTime"]));
    }
    if (m.find("QueryTime") != m.end() && !m["QueryTime"].empty()) {
      queryTime = make_shared<string>(boost::any_cast<string>(m["QueryTime"]));
    }
    if (m.find("QueryTimeMS") != m.end() && !m["QueryTimeMS"].empty()) {
      queryTimeMS = make_shared<string>(boost::any_cast<string>(m["QueryTimeMS"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<string>(boost::any_cast<string>(m["ReturnRowCounts"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      rows = make_shared<string>(boost::any_cast<string>(m["Rows"]));
    }
    if (m.find("SCNT") != m.end() && !m["SCNT"].empty()) {
      SCNT = make_shared<string>(boost::any_cast<string>(m["SCNT"]));
    }
    if (m.find("SQLHash") != m.end() && !m["SQLHash"].empty()) {
      SQLHash = make_shared<string>(boost::any_cast<string>(m["SQLHash"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TooLong") != m.end() && !m["TooLong"].empty()) {
      tooLong = make_shared<string>(boost::any_cast<string>(m["TooLong"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("TransactionPolicy") != m.end() && !m["TransactionPolicy"].empty()) {
      transactionPolicy = make_shared<string>(boost::any_cast<string>(m["TransactionPolicy"]));
    }
    if (m.find("TrxId") != m.end() && !m["TrxId"].empty()) {
      trxId = make_shared<string>(boost::any_cast<string>(m["TrxId"]));
    }
    if (m.find("WT") != m.end() && !m["WT"].empty()) {
      WT = make_shared<string>(boost::any_cast<string>(m["WT"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItems() = default;
};
class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<vector<DescribeSlowLogRecordsResponseBodyItems>> items{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeSlowLogRecordsResponseBody() {}

  explicit DescribeSlowLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSlowLogRecordsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogRecordsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSlowLogRecordsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<string>(boost::any_cast<string>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBody() = default;
};
class DescribeSlowLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlowLogRecordsResponseBody> body{};

  DescribeSlowLogRecordsResponse() {}

  explicit DescribeSlowLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSlowLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponse() = default;
};
class DescribeTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tagKey{};

  DescribeTagsRequest() {}

  explicit DescribeTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~DescribeTagsRequest() = default;
};
class DescribeTagsResponseBodyTagInfos : public Darabonba::Model {
public:
  shared_ptr<vector<string>> DBInstanceIds{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeTagsResponseBodyTagInfos() {}

  explicit DescribeTagsResponseBodyTagInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceIds) {
      res["DBInstanceIds"] = boost::any(*DBInstanceIds);
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
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~DescribeTagsResponseBodyTagInfos() = default;
};
class DescribeTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeTagsResponseBodyTagInfos>> tagInfos{};

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
    if (tagInfos) {
      vector<boost::any> temp1;
      for(auto item1:*tagInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagInfos") != m.end() && !m["TagInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["TagInfos"].type()) {
        vector<DescribeTagsResponseBodyTagInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTagsResponseBodyTagInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagInfos = make_shared<vector<DescribeTagsResponseBodyTagInfos>>(expect1);
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
class DescribeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribeTasksRequest() {}

  explicit DescribeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeTasksRequest() = default;
};
class DescribeTasksResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> DBName{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> progress{};
  shared_ptr<string> progressInfo{};
  shared_ptr<string> scaleOutToken{};
  shared_ptr<string> status{};
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskErrorCode{};
  shared_ptr<string> taskErrorMessage{};
  shared_ptr<string> taskId{};

  DescribeTasksResponseBodyItems() {}

  explicit DescribeTasksResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (progressInfo) {
      res["ProgressInfo"] = boost::any(*progressInfo);
    }
    if (scaleOutToken) {
      res["ScaleOutToken"] = boost::any(*scaleOutToken);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    if (taskErrorCode) {
      res["TaskErrorCode"] = boost::any(*taskErrorCode);
    }
    if (taskErrorMessage) {
      res["TaskErrorMessage"] = boost::any(*taskErrorMessage);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("ProgressInfo") != m.end() && !m["ProgressInfo"].empty()) {
      progressInfo = make_shared<string>(boost::any_cast<string>(m["ProgressInfo"]));
    }
    if (m.find("ScaleOutToken") != m.end() && !m["ScaleOutToken"].empty()) {
      scaleOutToken = make_shared<string>(boost::any_cast<string>(m["ScaleOutToken"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
    if (m.find("TaskErrorCode") != m.end() && !m["TaskErrorCode"].empty()) {
      taskErrorCode = make_shared<string>(boost::any_cast<string>(m["TaskErrorCode"]));
    }
    if (m.find("TaskErrorMessage") != m.end() && !m["TaskErrorMessage"].empty()) {
      taskErrorMessage = make_shared<string>(boost::any_cast<string>(m["TaskErrorMessage"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeTasksResponseBodyItems() = default;
};
class DescribeTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTasksResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeTasksResponseBody() {}

  explicit DescribeTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeTasksResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTasksResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeTasksResponseBodyItems>>(expect1);
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


  virtual ~DescribeTasksResponseBody() = default;
};
class DescribeTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTasksResponseBody> body{};

  DescribeTasksResponse() {}

  explicit DescribeTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTasksResponse() = default;
};
class DescribeUserEncryptionKeyListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  DescribeUserEncryptionKeyListRequest() {}

  explicit DescribeUserEncryptionKeyListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListRequest() = default;
};
class DescribeUserEncryptionKeyListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keyIds{};

  DescribeUserEncryptionKeyListResponseBodyData() {}

  explicit DescribeUserEncryptionKeyListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyIds) {
      res["KeyIds"] = boost::any(*keyIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyIds") != m.end() && !m["KeyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponseBodyData() = default;
};
class DescribeUserEncryptionKeyListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeUserEncryptionKeyListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeUserEncryptionKeyListResponseBody() {}

  explicit DescribeUserEncryptionKeyListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeUserEncryptionKeyListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeUserEncryptionKeyListResponseBodyData>(model1);
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
class DisableRightsSeparationRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbaAccountName{};
  shared_ptr<string> dbaAccountPassword{};
  shared_ptr<string> regionId{};

  DisableRightsSeparationRequest() {}

  explicit DisableRightsSeparationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbaAccountName) {
      res["DbaAccountName"] = boost::any(*dbaAccountName);
    }
    if (dbaAccountPassword) {
      res["DbaAccountPassword"] = boost::any(*dbaAccountPassword);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbaAccountName") != m.end() && !m["DbaAccountName"].empty()) {
      dbaAccountName = make_shared<string>(boost::any_cast<string>(m["DbaAccountName"]));
    }
    if (m.find("DbaAccountPassword") != m.end() && !m["DbaAccountPassword"].empty()) {
      dbaAccountPassword = make_shared<string>(boost::any_cast<string>(m["DbaAccountPassword"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DisableRightsSeparationRequest() = default;
};
class DisableRightsSeparationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableRightsSeparationResponseBody() {}

  explicit DisableRightsSeparationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableRightsSeparationResponseBody() = default;
};
class DisableRightsSeparationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableRightsSeparationResponseBody> body{};

  DisableRightsSeparationResponse() {}

  explicit DisableRightsSeparationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableRightsSeparationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableRightsSeparationResponseBody>(model1);
      }
    }
  }


  virtual ~DisableRightsSeparationResponse() = default;
};
class EnableRightsSeparationRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditAccountDescription{};
  shared_ptr<string> auditAccountName{};
  shared_ptr<string> auditAccountPassword{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityAccountDescription{};
  shared_ptr<string> securityAccountName{};
  shared_ptr<string> securityAccountPassword{};

  EnableRightsSeparationRequest() {}

  explicit EnableRightsSeparationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditAccountDescription) {
      res["AuditAccountDescription"] = boost::any(*auditAccountDescription);
    }
    if (auditAccountName) {
      res["AuditAccountName"] = boost::any(*auditAccountName);
    }
    if (auditAccountPassword) {
      res["AuditAccountPassword"] = boost::any(*auditAccountPassword);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityAccountDescription) {
      res["SecurityAccountDescription"] = boost::any(*securityAccountDescription);
    }
    if (securityAccountName) {
      res["SecurityAccountName"] = boost::any(*securityAccountName);
    }
    if (securityAccountPassword) {
      res["SecurityAccountPassword"] = boost::any(*securityAccountPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditAccountDescription") != m.end() && !m["AuditAccountDescription"].empty()) {
      auditAccountDescription = make_shared<string>(boost::any_cast<string>(m["AuditAccountDescription"]));
    }
    if (m.find("AuditAccountName") != m.end() && !m["AuditAccountName"].empty()) {
      auditAccountName = make_shared<string>(boost::any_cast<string>(m["AuditAccountName"]));
    }
    if (m.find("AuditAccountPassword") != m.end() && !m["AuditAccountPassword"].empty()) {
      auditAccountPassword = make_shared<string>(boost::any_cast<string>(m["AuditAccountPassword"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityAccountDescription") != m.end() && !m["SecurityAccountDescription"].empty()) {
      securityAccountDescription = make_shared<string>(boost::any_cast<string>(m["SecurityAccountDescription"]));
    }
    if (m.find("SecurityAccountName") != m.end() && !m["SecurityAccountName"].empty()) {
      securityAccountName = make_shared<string>(boost::any_cast<string>(m["SecurityAccountName"]));
    }
    if (m.find("SecurityAccountPassword") != m.end() && !m["SecurityAccountPassword"].empty()) {
      securityAccountPassword = make_shared<string>(boost::any_cast<string>(m["SecurityAccountPassword"]));
    }
  }


  virtual ~EnableRightsSeparationRequest() = default;
};
class EnableRightsSeparationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableRightsSeparationResponseBody() {}

  explicit EnableRightsSeparationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableRightsSeparationResponseBody() = default;
};
class EnableRightsSeparationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableRightsSeparationResponseBody> body{};

  EnableRightsSeparationResponse() {}

  explicit EnableRightsSeparationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableRightsSeparationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableRightsSeparationResponseBody>(model1);
      }
    }
  }


  virtual ~EnableRightsSeparationResponse() = default;
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
  shared_ptr<string> regionId{};
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
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

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
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyAccountDescriptionRequest() = default;
};
class ModifyAccountDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyAccountDescriptionResponseBody() {}

  explicit ModifyAccountDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class ModifyAccountPrivilegeRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPrivilege{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityAccountName{};
  shared_ptr<string> securityAccountPassword{};

  ModifyAccountPrivilegeRequest() {}

  explicit ModifyAccountPrivilegeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPrivilege) {
      res["AccountPrivilege"] = boost::any(*accountPrivilege);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityAccountName) {
      res["SecurityAccountName"] = boost::any(*securityAccountName);
    }
    if (securityAccountPassword) {
      res["SecurityAccountPassword"] = boost::any(*securityAccountPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPrivilege") != m.end() && !m["AccountPrivilege"].empty()) {
      accountPrivilege = make_shared<string>(boost::any_cast<string>(m["AccountPrivilege"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityAccountName") != m.end() && !m["SecurityAccountName"].empty()) {
      securityAccountName = make_shared<string>(boost::any_cast<string>(m["SecurityAccountName"]));
    }
    if (m.find("SecurityAccountPassword") != m.end() && !m["SecurityAccountPassword"].empty()) {
      securityAccountPassword = make_shared<string>(boost::any_cast<string>(m["SecurityAccountPassword"]));
    }
  }


  virtual ~ModifyAccountPrivilegeRequest() = default;
};
class ModifyAccountPrivilegeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyAccountPrivilegeResponseBody() {}

  explicit ModifyAccountPrivilegeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyAccountPrivilegeResponseBody() = default;
};
class ModifyAccountPrivilegeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccountPrivilegeResponseBody> body{};

  ModifyAccountPrivilegeResponse() {}

  explicit ModifyAccountPrivilegeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAccountPrivilegeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountPrivilegeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountPrivilegeResponse() = default;
};
class ModifyActiveOperationMaintainConfRequest : public Darabonba::Model {
public:
  shared_ptr<string> cycleTime{};
  shared_ptr<string> cycleType{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> regionId{};
  shared_ptr<long> status{};

  ModifyActiveOperationMaintainConfRequest() {}

  explicit ModifyActiveOperationMaintainConfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cycleTime) {
      res["CycleTime"] = boost::any(*cycleTime);
    }
    if (cycleType) {
      res["CycleType"] = boost::any(*cycleType);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CycleTime") != m.end() && !m["CycleTime"].empty()) {
      cycleTime = make_shared<string>(boost::any_cast<string>(m["CycleTime"]));
    }
    if (m.find("CycleType") != m.end() && !m["CycleType"].empty()) {
      cycleType = make_shared<string>(boost::any_cast<string>(m["CycleType"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ModifyActiveOperationMaintainConfRequest() = default;
};
class ModifyActiveOperationMaintainConfResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyActiveOperationMaintainConfResponseBody() {}

  explicit ModifyActiveOperationMaintainConfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyActiveOperationMaintainConfResponseBody() = default;
};
class ModifyActiveOperationMaintainConfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyActiveOperationMaintainConfResponseBody> body{};

  ModifyActiveOperationMaintainConfResponse() {}

  explicit ModifyActiveOperationMaintainConfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyActiveOperationMaintainConfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyActiveOperationMaintainConfResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyActiveOperationMaintainConfResponse() = default;
};
class ModifyActiveOperationTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<long> immediateStart{};
  shared_ptr<string> regionId{};
  shared_ptr<string> switchTime{};

  ModifyActiveOperationTasksRequest() {}

  explicit ModifyActiveOperationTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (immediateStart) {
      res["ImmediateStart"] = boost::any(*immediateStart);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("ImmediateStart") != m.end() && !m["ImmediateStart"].empty()) {
      immediateStart = make_shared<long>(boost::any_cast<long>(m["ImmediateStart"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
  }


  virtual ~ModifyActiveOperationTasksRequest() = default;
};
class ModifyActiveOperationTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> requestId{};

  ModifyActiveOperationTasksResponseBody() {}

  explicit ModifyActiveOperationTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyActiveOperationTasksResponseBody() = default;
};
class ModifyActiveOperationTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyActiveOperationTasksResponseBody> body{};

  ModifyActiveOperationTasksResponse() {}

  explicit ModifyActiveOperationTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyActiveOperationTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyActiveOperationTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyActiveOperationTasksResponse() = default;
};
class ModifyDBInstanceClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> cnClass{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dnClass{};
  shared_ptr<string> dnStorageSpace{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> specifiedDNScale{};
  shared_ptr<string> specifiedDNSpecMapJson{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> switchTimeMode{};
  shared_ptr<string> targetDBInstanceClass{};

  ModifyDBInstanceClassRequest() {}

  explicit ModifyDBInstanceClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cnClass) {
      res["CnClass"] = boost::any(*cnClass);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dnClass) {
      res["DnClass"] = boost::any(*dnClass);
    }
    if (dnStorageSpace) {
      res["DnStorageSpace"] = boost::any(*dnStorageSpace);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (specifiedDNScale) {
      res["SpecifiedDNScale"] = boost::any(*specifiedDNScale);
    }
    if (specifiedDNSpecMapJson) {
      res["SpecifiedDNSpecMapJson"] = boost::any(*specifiedDNSpecMapJson);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    if (switchTimeMode) {
      res["SwitchTimeMode"] = boost::any(*switchTimeMode);
    }
    if (targetDBInstanceClass) {
      res["TargetDBInstanceClass"] = boost::any(*targetDBInstanceClass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CnClass") != m.end() && !m["CnClass"].empty()) {
      cnClass = make_shared<string>(boost::any_cast<string>(m["CnClass"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DnClass") != m.end() && !m["DnClass"].empty()) {
      dnClass = make_shared<string>(boost::any_cast<string>(m["DnClass"]));
    }
    if (m.find("DnStorageSpace") != m.end() && !m["DnStorageSpace"].empty()) {
      dnStorageSpace = make_shared<string>(boost::any_cast<string>(m["DnStorageSpace"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SpecifiedDNScale") != m.end() && !m["SpecifiedDNScale"].empty()) {
      specifiedDNScale = make_shared<bool>(boost::any_cast<bool>(m["SpecifiedDNScale"]));
    }
    if (m.find("SpecifiedDNSpecMapJson") != m.end() && !m["SpecifiedDNSpecMapJson"].empty()) {
      specifiedDNSpecMapJson = make_shared<string>(boost::any_cast<string>(m["SpecifiedDNSpecMapJson"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("SwitchTimeMode") != m.end() && !m["SwitchTimeMode"].empty()) {
      switchTimeMode = make_shared<string>(boost::any_cast<string>(m["SwitchTimeMode"]));
    }
    if (m.find("TargetDBInstanceClass") != m.end() && !m["TargetDBInstanceClass"].empty()) {
      targetDBInstanceClass = make_shared<string>(boost::any_cast<string>(m["TargetDBInstanceClass"]));
    }
  }


  virtual ~ModifyDBInstanceClassRequest() = default;
};
class ModifyDBInstanceClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyDBInstanceClassResponseBody() {}

  explicit ModifyDBInstanceClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceClassResponseBody() = default;
};
class ModifyDBInstanceClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceClassResponseBody> body{};

  ModifyDBInstanceClassResponse() {}

  explicit ModifyDBInstanceClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceClassResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceClassResponse() = default;
};
class ModifyDBInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> configValue{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  ModifyDBInstanceConfigRequest() {}

  explicit ModifyDBInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["ConfigName"] = boost::any(*configName);
    }
    if (configValue) {
      res["ConfigValue"] = boost::any(*configValue);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigName") != m.end() && !m["ConfigName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["ConfigName"]));
    }
    if (m.find("ConfigValue") != m.end() && !m["ConfigValue"].empty()) {
      configValue = make_shared<string>(boost::any_cast<string>(m["ConfigValue"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDBInstanceConfigRequest() = default;
};
class ModifyDBInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceConfigResponseBody() {}

  explicit ModifyDBInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> newPort{};
  shared_ptr<string> newPrefix{};
  shared_ptr<string> regionId{};

  ModifyDBInstanceConnectionStringRequest() {}

  explicit ModifyDBInstanceConnectionStringRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (newPort) {
      res["NewPort"] = boost::any(*newPort);
    }
    if (newPrefix) {
      res["NewPrefix"] = boost::any(*newPrefix);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("NewPort") != m.end() && !m["NewPort"].empty()) {
      newPort = make_shared<string>(boost::any_cast<string>(m["NewPort"]));
    }
    if (m.find("NewPrefix") != m.end() && !m["NewPrefix"].empty()) {
      newPrefix = make_shared<string>(boost::any_cast<string>(m["NewPrefix"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDBInstanceConnectionStringRequest() = default;
};
class ModifyDBInstanceConnectionStringResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBInstanceNetType{};
  shared_ptr<string> port{};

  ModifyDBInstanceConnectionStringResponseBodyData() {}

  explicit ModifyDBInstanceConnectionStringResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBInstanceNetType) {
      res["DBInstanceNetType"] = boost::any(*DBInstanceNetType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBInstanceNetType") != m.end() && !m["DBInstanceNetType"].empty()) {
      DBInstanceNetType = make_shared<string>(boost::any_cast<string>(m["DBInstanceNetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~ModifyDBInstanceConnectionStringResponseBodyData() = default;
};
class ModifyDBInstanceConnectionStringResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ModifyDBInstanceConnectionStringResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyDBInstanceConnectionStringResponseBody() {}

  explicit ModifyDBInstanceConnectionStringResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyDBInstanceConnectionStringResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyDBInstanceConnectionStringResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
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
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

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
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class ModifyDatabaseDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> dbDescription{};
  shared_ptr<string> dbName{};
  shared_ptr<string> regionId{};

  ModifyDatabaseDescriptionRequest() {}

  explicit ModifyDatabaseDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (dbDescription) {
      res["DbDescription"] = boost::any(*dbDescription);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DbDescription") != m.end() && !m["DbDescription"].empty()) {
      dbDescription = make_shared<string>(boost::any_cast<string>(m["DbDescription"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyDatabaseDescriptionRequest() = default;
};
class ModifyDatabaseDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyDatabaseDescriptionResponseBody() {}

  explicit ModifyDatabaseDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyDatabaseDescriptionResponseBody() = default;
};
class ModifyDatabaseDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDatabaseDescriptionResponseBody> body{};

  ModifyDatabaseDescriptionResponse() {}

  explicit ModifyDatabaseDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDatabaseDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDatabaseDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDatabaseDescriptionResponse() = default;
};
class ModifyParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> paramLevel{};
  shared_ptr<string> parameterGroupId{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};

  ModifyParameterRequest() {}

  explicit ModifyParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (paramLevel) {
      res["ParamLevel"] = boost::any(*paramLevel);
    }
    if (parameterGroupId) {
      res["ParameterGroupId"] = boost::any(*parameterGroupId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("ParamLevel") != m.end() && !m["ParamLevel"].empty()) {
      paramLevel = make_shared<string>(boost::any_cast<string>(m["ParamLevel"]));
    }
    if (m.find("ParameterGroupId") != m.end() && !m["ParameterGroupId"].empty()) {
      parameterGroupId = make_shared<string>(boost::any_cast<string>(m["ParameterGroupId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyParameterRequest() = default;
};
class ModifyParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyParameterResponseBody() {}

  explicit ModifyParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyParameterResponseBody() = default;
};
class ModifyParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyParameterResponseBody> body{};

  ModifyParameterResponse() {}

  explicit ModifyParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyParameterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyParameterResponse() = default;
};
class ModifySecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> modifyMode{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityIPList{};

  ModifySecurityIpsRequest() {}

  explicit ModifySecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~ModifySecurityIpsRequest() = default;
};
class ModifySecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifySecurityIpsResponseBody() {}

  explicit ModifySecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class ReleaseColdDataVolumeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  ReleaseColdDataVolumeRequest() {}

  explicit ReleaseColdDataVolumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ReleaseColdDataVolumeRequest() = default;
};
class ReleaseColdDataVolumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseColdDataVolumeResponseBody() {}

  explicit ReleaseColdDataVolumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseColdDataVolumeResponseBody() = default;
};
class ReleaseColdDataVolumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseColdDataVolumeResponseBody> body{};

  ReleaseColdDataVolumeResponse() {}

  explicit ReleaseColdDataVolumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleaseColdDataVolumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseColdDataVolumeResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseColdDataVolumeResponse() = default;
};
class ReleaseInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentConnectionString{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  ReleaseInstancePublicConnectionRequest() {}

  explicit ReleaseInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityAccountName{};
  shared_ptr<string> securityAccountPassword{};

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
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityAccountName) {
      res["SecurityAccountName"] = boost::any(*securityAccountName);
    }
    if (securityAccountPassword) {
      res["SecurityAccountPassword"] = boost::any(*securityAccountPassword);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityAccountName") != m.end() && !m["SecurityAccountName"].empty()) {
      securityAccountName = make_shared<string>(boost::any_cast<string>(m["SecurityAccountName"]));
    }
    if (m.find("SecurityAccountPassword") != m.end() && !m["SecurityAccountPassword"].empty()) {
      securityAccountPassword = make_shared<string>(boost::any_cast<string>(m["SecurityAccountPassword"]));
    }
  }


  virtual ~ResetAccountPasswordRequest() = default;
};
class ResetAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResetAccountPasswordResponseBody() {}

  explicit ResetAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class RestartDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};

  RestartDBInstanceRequest() {}

  explicit RestartDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class SwitchDBInstanceHARequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> switchTimeMode{};
  shared_ptr<string> targetPrimaryAzoneId{};
  shared_ptr<string> targetPrimaryRegionId{};

  SwitchDBInstanceHARequest() {}

  explicit SwitchDBInstanceHARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
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
    if (targetPrimaryAzoneId) {
      res["TargetPrimaryAzoneId"] = boost::any(*targetPrimaryAzoneId);
    }
    if (targetPrimaryRegionId) {
      res["TargetPrimaryRegionId"] = boost::any(*targetPrimaryRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
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
    if (m.find("TargetPrimaryAzoneId") != m.end() && !m["TargetPrimaryAzoneId"].empty()) {
      targetPrimaryAzoneId = make_shared<string>(boost::any_cast<string>(m["TargetPrimaryAzoneId"]));
    }
    if (m.find("TargetPrimaryRegionId") != m.end() && !m["TargetPrimaryRegionId"].empty()) {
      targetPrimaryRegionId = make_shared<string>(boost::any_cast<string>(m["TargetPrimaryRegionId"]));
    }
  }


  virtual ~SwitchDBInstanceHARequest() = default;
};
class SwitchDBInstanceHAResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SwitchDBInstanceHAResponseBody() {}

  explicit SwitchDBInstanceHAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SwitchDBInstanceHAResponseBody() = default;
};
class SwitchDBInstanceHAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchDBInstanceHAResponseBody> body{};

  SwitchDBInstanceHAResponse() {}

  explicit SwitchDBInstanceHAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SwitchDBInstanceHAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchDBInstanceHAResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchDBInstanceHAResponse() = default;
};
class SwitchGdnMemberRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> switchMode{};
  shared_ptr<long> taskTimeout{};

  SwitchGdnMemberRoleRequest() {}

  explicit SwitchGdnMemberRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (switchMode) {
      res["SwitchMode"] = boost::any(*switchMode);
    }
    if (taskTimeout) {
      res["TaskTimeout"] = boost::any(*taskTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SwitchMode") != m.end() && !m["SwitchMode"].empty()) {
      switchMode = make_shared<string>(boost::any_cast<string>(m["SwitchMode"]));
    }
    if (m.find("TaskTimeout") != m.end() && !m["TaskTimeout"].empty()) {
      taskTimeout = make_shared<long>(boost::any_cast<long>(m["TaskTimeout"]));
    }
  }


  virtual ~SwitchGdnMemberRoleRequest() = default;
};
class SwitchGdnMemberRoleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  SwitchGdnMemberRoleResponseBodyData() {}

  explicit SwitchGdnMemberRoleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~SwitchGdnMemberRoleResponseBodyData() = default;
};
class SwitchGdnMemberRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<SwitchGdnMemberRoleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SwitchGdnMemberRoleResponseBody() {}

  explicit SwitchGdnMemberRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SwitchGdnMemberRoleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SwitchGdnMemberRoleResponseBodyData>(model1);
      }
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


  virtual ~SwitchGdnMemberRoleResponseBody() = default;
};
class SwitchGdnMemberRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchGdnMemberRoleResponseBody> body{};

  SwitchGdnMemberRoleResponse() {}

  explicit SwitchGdnMemberRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SwitchGdnMemberRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchGdnMemberRoleResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchGdnMemberRoleResponse() = default;
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
  shared_ptr<string> regionId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
  shared_ptr<string> regionId{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
class UpdateBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupPeriod{};
  shared_ptr<string> backupPlanBegin{};
  shared_ptr<long> backupSetRetention{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupWay{};
  shared_ptr<long> coldDataBackupInterval{};
  shared_ptr<long> coldDataBackupRetention{};
  shared_ptr<long> crossRegionDataBackupRetention{};
  shared_ptr<long> crossRegionLogBackupRetention{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> destCrossRegion{};
  shared_ptr<long> forceCleanOnHighSpaceUsage{};
  shared_ptr<bool> isCrossRegionDataBackupEnabled{};
  shared_ptr<bool> isCrossRegionLogBackupEnabled{};
  shared_ptr<long> isEnabled{};
  shared_ptr<long> localLogRetention{};
  shared_ptr<long> localLogRetentionNumber{};
  shared_ptr<long> logLocalRetentionSpace{};
  shared_ptr<string> regionId{};
  shared_ptr<long> removeLogRetention{};

  UpdateBackupPolicyRequest() {}

  explicit UpdateBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanBegin) {
      res["BackupPlanBegin"] = boost::any(*backupPlanBegin);
    }
    if (backupSetRetention) {
      res["BackupSetRetention"] = boost::any(*backupSetRetention);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupWay) {
      res["BackupWay"] = boost::any(*backupWay);
    }
    if (coldDataBackupInterval) {
      res["ColdDataBackupInterval"] = boost::any(*coldDataBackupInterval);
    }
    if (coldDataBackupRetention) {
      res["ColdDataBackupRetention"] = boost::any(*coldDataBackupRetention);
    }
    if (crossRegionDataBackupRetention) {
      res["CrossRegionDataBackupRetention"] = boost::any(*crossRegionDataBackupRetention);
    }
    if (crossRegionLogBackupRetention) {
      res["CrossRegionLogBackupRetention"] = boost::any(*crossRegionLogBackupRetention);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (destCrossRegion) {
      res["DestCrossRegion"] = boost::any(*destCrossRegion);
    }
    if (forceCleanOnHighSpaceUsage) {
      res["ForceCleanOnHighSpaceUsage"] = boost::any(*forceCleanOnHighSpaceUsage);
    }
    if (isCrossRegionDataBackupEnabled) {
      res["IsCrossRegionDataBackupEnabled"] = boost::any(*isCrossRegionDataBackupEnabled);
    }
    if (isCrossRegionLogBackupEnabled) {
      res["IsCrossRegionLogBackupEnabled"] = boost::any(*isCrossRegionLogBackupEnabled);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (localLogRetention) {
      res["LocalLogRetention"] = boost::any(*localLogRetention);
    }
    if (localLogRetentionNumber) {
      res["LocalLogRetentionNumber"] = boost::any(*localLogRetentionNumber);
    }
    if (logLocalRetentionSpace) {
      res["LogLocalRetentionSpace"] = boost::any(*logLocalRetentionSpace);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (removeLogRetention) {
      res["RemoveLogRetention"] = boost::any(*removeLogRetention);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanBegin") != m.end() && !m["BackupPlanBegin"].empty()) {
      backupPlanBegin = make_shared<string>(boost::any_cast<string>(m["BackupPlanBegin"]));
    }
    if (m.find("BackupSetRetention") != m.end() && !m["BackupSetRetention"].empty()) {
      backupSetRetention = make_shared<long>(boost::any_cast<long>(m["BackupSetRetention"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupWay") != m.end() && !m["BackupWay"].empty()) {
      backupWay = make_shared<string>(boost::any_cast<string>(m["BackupWay"]));
    }
    if (m.find("ColdDataBackupInterval") != m.end() && !m["ColdDataBackupInterval"].empty()) {
      coldDataBackupInterval = make_shared<long>(boost::any_cast<long>(m["ColdDataBackupInterval"]));
    }
    if (m.find("ColdDataBackupRetention") != m.end() && !m["ColdDataBackupRetention"].empty()) {
      coldDataBackupRetention = make_shared<long>(boost::any_cast<long>(m["ColdDataBackupRetention"]));
    }
    if (m.find("CrossRegionDataBackupRetention") != m.end() && !m["CrossRegionDataBackupRetention"].empty()) {
      crossRegionDataBackupRetention = make_shared<long>(boost::any_cast<long>(m["CrossRegionDataBackupRetention"]));
    }
    if (m.find("CrossRegionLogBackupRetention") != m.end() && !m["CrossRegionLogBackupRetention"].empty()) {
      crossRegionLogBackupRetention = make_shared<long>(boost::any_cast<long>(m["CrossRegionLogBackupRetention"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DestCrossRegion") != m.end() && !m["DestCrossRegion"].empty()) {
      destCrossRegion = make_shared<string>(boost::any_cast<string>(m["DestCrossRegion"]));
    }
    if (m.find("ForceCleanOnHighSpaceUsage") != m.end() && !m["ForceCleanOnHighSpaceUsage"].empty()) {
      forceCleanOnHighSpaceUsage = make_shared<long>(boost::any_cast<long>(m["ForceCleanOnHighSpaceUsage"]));
    }
    if (m.find("IsCrossRegionDataBackupEnabled") != m.end() && !m["IsCrossRegionDataBackupEnabled"].empty()) {
      isCrossRegionDataBackupEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsCrossRegionDataBackupEnabled"]));
    }
    if (m.find("IsCrossRegionLogBackupEnabled") != m.end() && !m["IsCrossRegionLogBackupEnabled"].empty()) {
      isCrossRegionLogBackupEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsCrossRegionLogBackupEnabled"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<long>(boost::any_cast<long>(m["IsEnabled"]));
    }
    if (m.find("LocalLogRetention") != m.end() && !m["LocalLogRetention"].empty()) {
      localLogRetention = make_shared<long>(boost::any_cast<long>(m["LocalLogRetention"]));
    }
    if (m.find("LocalLogRetentionNumber") != m.end() && !m["LocalLogRetentionNumber"].empty()) {
      localLogRetentionNumber = make_shared<long>(boost::any_cast<long>(m["LocalLogRetentionNumber"]));
    }
    if (m.find("LogLocalRetentionSpace") != m.end() && !m["LogLocalRetentionSpace"].empty()) {
      logLocalRetentionSpace = make_shared<long>(boost::any_cast<long>(m["LogLocalRetentionSpace"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RemoveLogRetention") != m.end() && !m["RemoveLogRetention"].empty()) {
      removeLogRetention = make_shared<long>(boost::any_cast<long>(m["RemoveLogRetention"]));
    }
  }


  virtual ~UpdateBackupPolicyRequest() = default;
};
class UpdateBackupPolicyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> backupPeriod{};
  shared_ptr<string> backupPlanBegin{};
  shared_ptr<long> backupSetRetention{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupWay{};
  shared_ptr<long> coldDataBackupInterval{};
  shared_ptr<long> coldDataBackupRetention{};
  shared_ptr<long> crossRegionDataBackupRetention{};
  shared_ptr<long> crossRegionLogBackupRetention{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> destCrossRegion{};
  shared_ptr<long> forceCleanOnHighSpaceUsage{};
  shared_ptr<bool> isCrossRegionDataBackupEnabled{};
  shared_ptr<bool> isCrossRegionLogBackupEnabled{};
  shared_ptr<long> isEnabled{};
  shared_ptr<long> localLogRetention{};
  shared_ptr<long> localLogRetentionNumber{};
  shared_ptr<long> logLocalRetentionSpace{};
  shared_ptr<long> removeLogRetention{};

  UpdateBackupPolicyResponseBodyData() {}

  explicit UpdateBackupPolicyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupPeriod) {
      res["BackupPeriod"] = boost::any(*backupPeriod);
    }
    if (backupPlanBegin) {
      res["BackupPlanBegin"] = boost::any(*backupPlanBegin);
    }
    if (backupSetRetention) {
      res["BackupSetRetention"] = boost::any(*backupSetRetention);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupWay) {
      res["BackupWay"] = boost::any(*backupWay);
    }
    if (coldDataBackupInterval) {
      res["ColdDataBackupInterval"] = boost::any(*coldDataBackupInterval);
    }
    if (coldDataBackupRetention) {
      res["ColdDataBackupRetention"] = boost::any(*coldDataBackupRetention);
    }
    if (crossRegionDataBackupRetention) {
      res["CrossRegionDataBackupRetention"] = boost::any(*crossRegionDataBackupRetention);
    }
    if (crossRegionLogBackupRetention) {
      res["CrossRegionLogBackupRetention"] = boost::any(*crossRegionLogBackupRetention);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (destCrossRegion) {
      res["DestCrossRegion"] = boost::any(*destCrossRegion);
    }
    if (forceCleanOnHighSpaceUsage) {
      res["ForceCleanOnHighSpaceUsage"] = boost::any(*forceCleanOnHighSpaceUsage);
    }
    if (isCrossRegionDataBackupEnabled) {
      res["IsCrossRegionDataBackupEnabled"] = boost::any(*isCrossRegionDataBackupEnabled);
    }
    if (isCrossRegionLogBackupEnabled) {
      res["IsCrossRegionLogBackupEnabled"] = boost::any(*isCrossRegionLogBackupEnabled);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (localLogRetention) {
      res["LocalLogRetention"] = boost::any(*localLogRetention);
    }
    if (localLogRetentionNumber) {
      res["LocalLogRetentionNumber"] = boost::any(*localLogRetentionNumber);
    }
    if (logLocalRetentionSpace) {
      res["LogLocalRetentionSpace"] = boost::any(*logLocalRetentionSpace);
    }
    if (removeLogRetention) {
      res["RemoveLogRetention"] = boost::any(*removeLogRetention);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupPeriod") != m.end() && !m["BackupPeriod"].empty()) {
      backupPeriod = make_shared<string>(boost::any_cast<string>(m["BackupPeriod"]));
    }
    if (m.find("BackupPlanBegin") != m.end() && !m["BackupPlanBegin"].empty()) {
      backupPlanBegin = make_shared<string>(boost::any_cast<string>(m["BackupPlanBegin"]));
    }
    if (m.find("BackupSetRetention") != m.end() && !m["BackupSetRetention"].empty()) {
      backupSetRetention = make_shared<long>(boost::any_cast<long>(m["BackupSetRetention"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupWay") != m.end() && !m["BackupWay"].empty()) {
      backupWay = make_shared<string>(boost::any_cast<string>(m["BackupWay"]));
    }
    if (m.find("ColdDataBackupInterval") != m.end() && !m["ColdDataBackupInterval"].empty()) {
      coldDataBackupInterval = make_shared<long>(boost::any_cast<long>(m["ColdDataBackupInterval"]));
    }
    if (m.find("ColdDataBackupRetention") != m.end() && !m["ColdDataBackupRetention"].empty()) {
      coldDataBackupRetention = make_shared<long>(boost::any_cast<long>(m["ColdDataBackupRetention"]));
    }
    if (m.find("CrossRegionDataBackupRetention") != m.end() && !m["CrossRegionDataBackupRetention"].empty()) {
      crossRegionDataBackupRetention = make_shared<long>(boost::any_cast<long>(m["CrossRegionDataBackupRetention"]));
    }
    if (m.find("CrossRegionLogBackupRetention") != m.end() && !m["CrossRegionLogBackupRetention"].empty()) {
      crossRegionLogBackupRetention = make_shared<long>(boost::any_cast<long>(m["CrossRegionLogBackupRetention"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DestCrossRegion") != m.end() && !m["DestCrossRegion"].empty()) {
      destCrossRegion = make_shared<string>(boost::any_cast<string>(m["DestCrossRegion"]));
    }
    if (m.find("ForceCleanOnHighSpaceUsage") != m.end() && !m["ForceCleanOnHighSpaceUsage"].empty()) {
      forceCleanOnHighSpaceUsage = make_shared<long>(boost::any_cast<long>(m["ForceCleanOnHighSpaceUsage"]));
    }
    if (m.find("IsCrossRegionDataBackupEnabled") != m.end() && !m["IsCrossRegionDataBackupEnabled"].empty()) {
      isCrossRegionDataBackupEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsCrossRegionDataBackupEnabled"]));
    }
    if (m.find("IsCrossRegionLogBackupEnabled") != m.end() && !m["IsCrossRegionLogBackupEnabled"].empty()) {
      isCrossRegionLogBackupEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsCrossRegionLogBackupEnabled"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<long>(boost::any_cast<long>(m["IsEnabled"]));
    }
    if (m.find("LocalLogRetention") != m.end() && !m["LocalLogRetention"].empty()) {
      localLogRetention = make_shared<long>(boost::any_cast<long>(m["LocalLogRetention"]));
    }
    if (m.find("LocalLogRetentionNumber") != m.end() && !m["LocalLogRetentionNumber"].empty()) {
      localLogRetentionNumber = make_shared<long>(boost::any_cast<long>(m["LocalLogRetentionNumber"]));
    }
    if (m.find("LogLocalRetentionSpace") != m.end() && !m["LogLocalRetentionSpace"].empty()) {
      logLocalRetentionSpace = make_shared<long>(boost::any_cast<long>(m["LogLocalRetentionSpace"]));
    }
    if (m.find("RemoveLogRetention") != m.end() && !m["RemoveLogRetention"].empty()) {
      removeLogRetention = make_shared<long>(boost::any_cast<long>(m["RemoveLogRetention"]));
    }
  }


  virtual ~UpdateBackupPolicyResponseBodyData() = default;
};
class UpdateBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateBackupPolicyResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateBackupPolicyResponseBody() {}

  explicit UpdateBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateBackupPolicyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateBackupPolicyResponseBodyData>(model1);
      }
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


  virtual ~UpdateBackupPolicyResponseBody() = default;
};
class UpdateBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBackupPolicyResponseBody> body{};

  UpdateBackupPolicyResponse() {}

  explicit UpdateBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBackupPolicyResponse() = default;
};
class UpdateDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> certCommonName{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<bool> enableSSL{};
  shared_ptr<string> regionId{};

  UpdateDBInstanceSSLRequest() {}

  explicit UpdateDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certCommonName) {
      res["CertCommonName"] = boost::any(*certCommonName);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (enableSSL) {
      res["EnableSSL"] = boost::any(*enableSSL);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertCommonName") != m.end() && !m["CertCommonName"].empty()) {
      certCommonName = make_shared<string>(boost::any_cast<string>(m["CertCommonName"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EnableSSL") != m.end() && !m["EnableSSL"].empty()) {
      enableSSL = make_shared<bool>(boost::any_cast<bool>(m["EnableSSL"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateDBInstanceSSLRequest() = default;
};
class UpdateDBInstanceSSLResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};

  UpdateDBInstanceSSLResponseBodyData() {}

  explicit UpdateDBInstanceSSLResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~UpdateDBInstanceSSLResponseBodyData() = default;
};
class UpdateDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateDBInstanceSSLResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateDBInstanceSSLResponseBody() {}

  explicit UpdateDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateDBInstanceSSLResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateDBInstanceSSLResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDBInstanceSSLResponseBody() = default;
};
class UpdateDBInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDBInstanceSSLResponseBody> body{};

  UpdateDBInstanceSSLResponse() {}

  explicit UpdateDBInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDBInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDBInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDBInstanceSSLResponse() = default;
};
class UpdateDBInstanceTDERequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> regionId{};
  shared_ptr<string> roleArn{};
  shared_ptr<long> TDEStatus{};

  UpdateDBInstanceTDERequest() {}

  explicit UpdateDBInstanceTDERequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (TDEStatus) {
      res["TDEStatus"] = boost::any(*TDEStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("TDEStatus") != m.end() && !m["TDEStatus"].empty()) {
      TDEStatus = make_shared<long>(boost::any_cast<long>(m["TDEStatus"]));
    }
  }


  virtual ~UpdateDBInstanceTDERequest() = default;
};
class UpdateDBInstanceTDEResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  UpdateDBInstanceTDEResponseBodyData() {}

  explicit UpdateDBInstanceTDEResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateDBInstanceTDEResponseBodyData() = default;
};
class UpdateDBInstanceTDEResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateDBInstanceTDEResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateDBInstanceTDEResponseBody() {}

  explicit UpdateDBInstanceTDEResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateDBInstanceTDEResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateDBInstanceTDEResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDBInstanceTDEResponseBody() = default;
};
class UpdateDBInstanceTDEResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDBInstanceTDEResponseBody> body{};

  UpdateDBInstanceTDEResponse() {}

  explicit UpdateDBInstanceTDEResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDBInstanceTDEResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDBInstanceTDEResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDBInstanceTDEResponse() = default;
};
class UpdatePolarDBXInstanceNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> addDNSpec{};
  shared_ptr<long> CNNodeCount{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<long> DNNodeCount{};
  shared_ptr<long> dbInstanceNodeCount{};
  shared_ptr<string> deleteDNIds{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storagePoolName{};

  UpdatePolarDBXInstanceNodeRequest() {}

  explicit UpdatePolarDBXInstanceNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addDNSpec) {
      res["AddDNSpec"] = boost::any(*addDNSpec);
    }
    if (CNNodeCount) {
      res["CNNodeCount"] = boost::any(*CNNodeCount);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DNNodeCount) {
      res["DNNodeCount"] = boost::any(*DNNodeCount);
    }
    if (dbInstanceNodeCount) {
      res["DbInstanceNodeCount"] = boost::any(*dbInstanceNodeCount);
    }
    if (deleteDNIds) {
      res["DeleteDNIds"] = boost::any(*deleteDNIds);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (storagePoolName) {
      res["StoragePoolName"] = boost::any(*storagePoolName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddDNSpec") != m.end() && !m["AddDNSpec"].empty()) {
      addDNSpec = make_shared<string>(boost::any_cast<string>(m["AddDNSpec"]));
    }
    if (m.find("CNNodeCount") != m.end() && !m["CNNodeCount"].empty()) {
      CNNodeCount = make_shared<long>(boost::any_cast<long>(m["CNNodeCount"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DNNodeCount") != m.end() && !m["DNNodeCount"].empty()) {
      DNNodeCount = make_shared<long>(boost::any_cast<long>(m["DNNodeCount"]));
    }
    if (m.find("DbInstanceNodeCount") != m.end() && !m["DbInstanceNodeCount"].empty()) {
      dbInstanceNodeCount = make_shared<long>(boost::any_cast<long>(m["DbInstanceNodeCount"]));
    }
    if (m.find("DeleteDNIds") != m.end() && !m["DeleteDNIds"].empty()) {
      deleteDNIds = make_shared<string>(boost::any_cast<string>(m["DeleteDNIds"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StoragePoolName") != m.end() && !m["StoragePoolName"].empty()) {
      storagePoolName = make_shared<string>(boost::any_cast<string>(m["StoragePoolName"]));
    }
  }


  virtual ~UpdatePolarDBXInstanceNodeRequest() = default;
};
class UpdatePolarDBXInstanceNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  UpdatePolarDBXInstanceNodeResponseBody() {}

  explicit UpdatePolarDBXInstanceNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePolarDBXInstanceNodeResponseBody() = default;
};
class UpdatePolarDBXInstanceNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePolarDBXInstanceNodeResponseBody> body{};

  UpdatePolarDBXInstanceNodeResponse() {}

  explicit UpdatePolarDBXInstanceNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePolarDBXInstanceNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePolarDBXInstanceNodeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePolarDBXInstanceNodeResponse() = default;
};
class UpgradeDBInstanceKernelVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> switchMode{};

  UpgradeDBInstanceKernelVersionRequest() {}

  explicit UpgradeDBInstanceKernelVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (switchMode) {
      res["SwitchMode"] = boost::any(*switchMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SwitchMode") != m.end() && !m["SwitchMode"].empty()) {
      switchMode = make_shared<string>(boost::any_cast<string>(m["SwitchMode"]));
    }
  }


  virtual ~UpgradeDBInstanceKernelVersionRequest() = default;
};
class UpgradeDBInstanceKernelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> targetMinorVersion{};
  shared_ptr<string> taskId{};

  UpgradeDBInstanceKernelVersionResponseBody() {}

  explicit UpgradeDBInstanceKernelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (targetMinorVersion) {
      res["TargetMinorVersion"] = boost::any(*targetMinorVersion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TargetMinorVersion") != m.end() && !m["TargetMinorVersion"].empty()) {
      targetMinorVersion = make_shared<string>(boost::any_cast<string>(m["TargetMinorVersion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpgradeDBInstanceKernelVersionResponseBody() = default;
};
class UpgradeDBInstanceKernelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeDBInstanceKernelVersionResponseBody> body{};

  UpgradeDBInstanceKernelVersionResponse() {}

  explicit UpgradeDBInstanceKernelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeDBInstanceKernelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBInstanceKernelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBInstanceKernelVersionResponse() = default;
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
  AlignStoragePrimaryAzoneResponse alignStoragePrimaryAzoneWithOptions(shared_ptr<AlignStoragePrimaryAzoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AlignStoragePrimaryAzoneResponse alignStoragePrimaryAzone(shared_ptr<AlignStoragePrimaryAzoneRequest> request);
  AllocateColdDataVolumeResponse allocateColdDataVolumeWithOptions(shared_ptr<AllocateColdDataVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateColdDataVolumeResponse allocateColdDataVolume(shared_ptr<AllocateColdDataVolumeRequest> request);
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request);
  CancelActiveOperationTasksResponse cancelActiveOperationTasksWithOptions(shared_ptr<CancelActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelActiveOperationTasksResponse cancelActiveOperationTasks(shared_ptr<CancelActiveOperationTasksRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(shared_ptr<CheckCloudResourceAuthorizedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(shared_ptr<CheckCloudResourceAuthorizedRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateBackupResponse createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupResponse createBackup(shared_ptr<CreateBackupRequest> request);
  CreateDBResponse createDBWithOptions(shared_ptr<CreateDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBResponse createDB(shared_ptr<CreateDBRequest> request);
  CreateDBInstanceResponse createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBInstanceResponse createDBInstance(shared_ptr<CreateDBInstanceRequest> request);
  CreateSuperAccountResponse createSuperAccountWithOptions(shared_ptr<CreateSuperAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSuperAccountResponse createSuperAccount(shared_ptr<CreateSuperAccountRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteDBResponse deleteDBWithOptions(shared_ptr<DeleteDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBResponse deleteDB(shared_ptr<DeleteDBRequest> request);
  DeleteDBInstanceResponse deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBInstanceResponse deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request);
  DescribeAccountListResponse describeAccountListWithOptions(shared_ptr<DescribeAccountListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountListResponse describeAccountList(shared_ptr<DescribeAccountListRequest> request);
  DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConfWithOptions(shared_ptr<DescribeActiveOperationMaintainConfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeActiveOperationMaintainConfResponse describeActiveOperationMaintainConf(shared_ptr<DescribeActiveOperationMaintainConfRequest> request);
  DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCountWithOptions(shared_ptr<DescribeActiveOperationTaskCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCount(shared_ptr<DescribeActiveOperationTaskCountRequest> request);
  DescribeActiveOperationTasksResponse describeActiveOperationTasksWithOptions(shared_ptr<DescribeActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeActiveOperationTasksResponse describeActiveOperationTasks(shared_ptr<DescribeActiveOperationTasksRequest> request);
  DescribeArchiveTableListResponse describeArchiveTableListWithOptions(shared_ptr<DescribeArchiveTableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeArchiveTableListResponse describeArchiveTableList(shared_ptr<DescribeArchiveTableListRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupSetResponse describeBackupSetWithOptions(shared_ptr<DescribeBackupSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupSetResponse describeBackupSet(shared_ptr<DescribeBackupSetRequest> request);
  DescribeBackupSetListResponse describeBackupSetListWithOptions(shared_ptr<DescribeBackupSetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupSetListResponse describeBackupSetList(shared_ptr<DescribeBackupSetListRequest> request);
  DescribeBinaryLogListResponse describeBinaryLogListWithOptions(shared_ptr<DescribeBinaryLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBinaryLogListResponse describeBinaryLogList(shared_ptr<DescribeBinaryLogListRequest> request);
  DescribeCdcInfoResponse describeCdcInfoWithOptions(shared_ptr<DescribeCdcInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCdcInfoResponse describeCdcInfo(shared_ptr<DescribeCdcInfoRequest> request);
  DescribeCharacterSetResponse describeCharacterSetWithOptions(shared_ptr<DescribeCharacterSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCharacterSetResponse describeCharacterSet(shared_ptr<DescribeCharacterSetRequest> request);
  DescribeColdDataBasicInfoResponse describeColdDataBasicInfoWithOptions(shared_ptr<DescribeColdDataBasicInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeColdDataBasicInfoResponse describeColdDataBasicInfo(shared_ptr<DescribeColdDataBasicInfoRequest> request);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request);
  DescribeDBInstanceConfigResponse describeDBInstanceConfigWithOptions(shared_ptr<DescribeDBInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceConfigResponse describeDBInstanceConfig(shared_ptr<DescribeDBInstanceConfigRequest> request);
  DescribeDBInstanceHAResponse describeDBInstanceHAWithOptions(shared_ptr<DescribeDBInstanceHARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceHAResponse describeDBInstanceHA(shared_ptr<DescribeDBInstanceHARequest> request);
  DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceSSLResponse describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request);
  DescribeDBInstanceTDEResponse describeDBInstanceTDEWithOptions(shared_ptr<DescribeDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceTDEResponse describeDBInstanceTDE(shared_ptr<DescribeDBInstanceTDERequest> request);
  DescribeDBInstanceTopologyResponse describeDBInstanceTopologyWithOptions(shared_ptr<DescribeDBInstanceTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceTopologyResponse describeDBInstanceTopology(shared_ptr<DescribeDBInstanceTopologyRequest> request);
  DescribeDBInstanceViaEndpointResponse describeDBInstanceViaEndpointWithOptions(shared_ptr<DescribeDBInstanceViaEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceViaEndpointResponse describeDBInstanceViaEndpoint(shared_ptr<DescribeDBInstanceViaEndpointRequest> request);
  DescribeDBInstancesResponse describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancesResponse describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request);
  DescribeDBNodePerformanceResponse describeDBNodePerformanceWithOptions(shared_ptr<DescribeDBNodePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBNodePerformanceResponse describeDBNodePerformance(shared_ptr<DescribeDBNodePerformanceRequest> request);
  DescribeDbListResponse describeDbListWithOptions(shared_ptr<DescribeDbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDbListResponse describeDbList(shared_ptr<DescribeDbListRequest> request);
  DescribeDistributeTableListResponse describeDistributeTableListWithOptions(shared_ptr<DescribeDistributeTableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDistributeTableListResponse describeDistributeTableList(shared_ptr<DescribeDistributeTableListRequest> request);
  DescribeEventsResponse describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventsResponse describeEvents(shared_ptr<DescribeEventsRequest> request);
  DescribeGdnInstancesResponse describeGdnInstancesWithOptions(shared_ptr<DescribeGdnInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGdnInstancesResponse describeGdnInstances(shared_ptr<DescribeGdnInstancesRequest> request);
  DescribeOpenBackupSetResponse describeOpenBackupSetWithOptions(shared_ptr<DescribeOpenBackupSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOpenBackupSetResponse describeOpenBackupSet(shared_ptr<DescribeOpenBackupSetRequest> request);
  DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(shared_ptr<DescribeParameterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParameterTemplatesResponse describeParameterTemplates(shared_ptr<DescribeParameterTemplatesRequest> request);
  DescribeParametersResponse describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParametersResponse describeParameters(shared_ptr<DescribeParametersRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeScaleOutMigrateTaskListResponse describeScaleOutMigrateTaskListWithOptions(shared_ptr<DescribeScaleOutMigrateTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScaleOutMigrateTaskListResponse describeScaleOutMigrateTaskList(shared_ptr<DescribeScaleOutMigrateTaskListRequest> request);
  DescribeSecurityIpsResponse describeSecurityIpsWithOptions(shared_ptr<DescribeSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityIpsResponse describeSecurityIps(shared_ptr<DescribeSecurityIpsRequest> request);
  DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogRecordsResponse describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request);
  DescribeTagsResponse describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTagsResponse describeTags(shared_ptr<DescribeTagsRequest> request);
  DescribeTasksResponse describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTasksResponse describeTasks(shared_ptr<DescribeTasksRequest> request);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(shared_ptr<DescribeUserEncryptionKeyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(shared_ptr<DescribeUserEncryptionKeyListRequest> request);
  DisableRightsSeparationResponse disableRightsSeparationWithOptions(shared_ptr<DisableRightsSeparationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableRightsSeparationResponse disableRightsSeparation(shared_ptr<DisableRightsSeparationRequest> request);
  EnableRightsSeparationResponse enableRightsSeparationWithOptions(shared_ptr<EnableRightsSeparationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableRightsSeparationResponse enableRightsSeparation(shared_ptr<EnableRightsSeparationRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyAccountPrivilegeResponse modifyAccountPrivilegeWithOptions(shared_ptr<ModifyAccountPrivilegeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountPrivilegeResponse modifyAccountPrivilege(shared_ptr<ModifyAccountPrivilegeRequest> request);
  ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConfWithOptions(shared_ptr<ModifyActiveOperationMaintainConfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyActiveOperationMaintainConfResponse modifyActiveOperationMaintainConf(shared_ptr<ModifyActiveOperationMaintainConfRequest> request);
  ModifyActiveOperationTasksResponse modifyActiveOperationTasksWithOptions(shared_ptr<ModifyActiveOperationTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyActiveOperationTasksResponse modifyActiveOperationTasks(shared_ptr<ModifyActiveOperationTasksRequest> request);
  ModifyDBInstanceClassResponse modifyDBInstanceClassWithOptions(shared_ptr<ModifyDBInstanceClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceClassResponse modifyDBInstanceClass(shared_ptr<ModifyDBInstanceClassRequest> request);
  ModifyDBInstanceConfigResponse modifyDBInstanceConfigWithOptions(shared_ptr<ModifyDBInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceConfigResponse modifyDBInstanceConfig(shared_ptr<ModifyDBInstanceConfigRequest> request);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(shared_ptr<ModifyDBInstanceConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(shared_ptr<ModifyDBInstanceConnectionStringRequest> request);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request);
  ModifyDatabaseDescriptionResponse modifyDatabaseDescriptionWithOptions(shared_ptr<ModifyDatabaseDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDatabaseDescriptionResponse modifyDatabaseDescription(shared_ptr<ModifyDatabaseDescriptionRequest> request);
  ModifyParameterResponse modifyParameterWithOptions(shared_ptr<ModifyParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyParameterResponse modifyParameter(shared_ptr<ModifyParameterRequest> request);
  ModifySecurityIpsResponse modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityIpsResponse modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request);
  ReleaseColdDataVolumeResponse releaseColdDataVolumeWithOptions(shared_ptr<ReleaseColdDataVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseColdDataVolumeResponse releaseColdDataVolume(shared_ptr<ReleaseColdDataVolumeRequest> request);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  RestartDBInstanceResponse restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartDBInstanceResponse restartDBInstance(shared_ptr<RestartDBInstanceRequest> request);
  SwitchDBInstanceHAResponse switchDBInstanceHAWithOptions(shared_ptr<SwitchDBInstanceHARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchDBInstanceHAResponse switchDBInstanceHA(shared_ptr<SwitchDBInstanceHARequest> request);
  SwitchGdnMemberRoleResponse switchGdnMemberRoleWithOptions(shared_ptr<SwitchGdnMemberRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchGdnMemberRoleResponse switchGdnMemberRole(shared_ptr<SwitchGdnMemberRoleRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateBackupPolicyResponse updateBackupPolicyWithOptions(shared_ptr<UpdateBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBackupPolicyResponse updateBackupPolicy(shared_ptr<UpdateBackupPolicyRequest> request);
  UpdateDBInstanceSSLResponse updateDBInstanceSSLWithOptions(shared_ptr<UpdateDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDBInstanceSSLResponse updateDBInstanceSSL(shared_ptr<UpdateDBInstanceSSLRequest> request);
  UpdateDBInstanceTDEResponse updateDBInstanceTDEWithOptions(shared_ptr<UpdateDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDBInstanceTDEResponse updateDBInstanceTDE(shared_ptr<UpdateDBInstanceTDERequest> request);
  UpdatePolarDBXInstanceNodeResponse updatePolarDBXInstanceNodeWithOptions(shared_ptr<UpdatePolarDBXInstanceNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePolarDBXInstanceNodeResponse updatePolarDBXInstanceNode(shared_ptr<UpdatePolarDBXInstanceNodeRequest> request);
  UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersionWithOptions(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersion(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Polardbx20200202

#endif
