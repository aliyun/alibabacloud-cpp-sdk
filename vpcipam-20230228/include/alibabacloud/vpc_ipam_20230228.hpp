// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VPCIPAM20230228_H_
#define ALIBABACLOUD_VPCIPAM20230228_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_VpcIpam20230228 {
class AddIpamPoolCidrRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> regionId{};

  AddIpamPoolCidrRequest() {}

  explicit AddIpamPoolCidrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AddIpamPoolCidrRequest() = default;
};
class AddIpamPoolCidrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddIpamPoolCidrResponseBody() {}

  explicit AddIpamPoolCidrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddIpamPoolCidrResponseBody() = default;
};
class AddIpamPoolCidrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddIpamPoolCidrResponseBody> body{};

  AddIpamPoolCidrResponse() {}

  explicit AddIpamPoolCidrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddIpamPoolCidrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddIpamPoolCidrResponseBody>(model1);
      }
    }
  }


  virtual ~AddIpamPoolCidrResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
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
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
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
class CreateIpamRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateIpamRequestTag() {}

  explicit CreateIpamRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateIpamRequestTag() = default;
};
class CreateIpamRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamDescription{};
  shared_ptr<string> ipamName{};
  shared_ptr<vector<string>> operatingRegionList{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<CreateIpamRequestTag>> tag{};

  CreateIpamRequest() {}

  explicit CreateIpamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamDescription) {
      res["IpamDescription"] = boost::any(*ipamDescription);
    }
    if (ipamName) {
      res["IpamName"] = boost::any(*ipamName);
    }
    if (operatingRegionList) {
      res["OperatingRegionList"] = boost::any(*operatingRegionList);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamDescription") != m.end() && !m["IpamDescription"].empty()) {
      ipamDescription = make_shared<string>(boost::any_cast<string>(m["IpamDescription"]));
    }
    if (m.find("IpamName") != m.end() && !m["IpamName"].empty()) {
      ipamName = make_shared<string>(boost::any_cast<string>(m["IpamName"]));
    }
    if (m.find("OperatingRegionList") != m.end() && !m["OperatingRegionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperatingRegionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperatingRegionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operatingRegionList = make_shared<vector<string>>(toVec1);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateIpamRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateIpamRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateIpamRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateIpamRequest() = default;
};
class CreateIpamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> defaultResourceDiscoveryAssociationId{};
  shared_ptr<string> defaultResourceDiscoveryId{};
  shared_ptr<string> ipamId{};
  shared_ptr<string> privateDefaultScopeId{};
  shared_ptr<string> publicDefaultScopeId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> resourceDiscoveryAssociationCount{};

  CreateIpamResponseBody() {}

  explicit CreateIpamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultResourceDiscoveryAssociationId) {
      res["DefaultResourceDiscoveryAssociationId"] = boost::any(*defaultResourceDiscoveryAssociationId);
    }
    if (defaultResourceDiscoveryId) {
      res["DefaultResourceDiscoveryId"] = boost::any(*defaultResourceDiscoveryId);
    }
    if (ipamId) {
      res["IpamId"] = boost::any(*ipamId);
    }
    if (privateDefaultScopeId) {
      res["PrivateDefaultScopeId"] = boost::any(*privateDefaultScopeId);
    }
    if (publicDefaultScopeId) {
      res["PublicDefaultScopeId"] = boost::any(*publicDefaultScopeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceDiscoveryAssociationCount) {
      res["ResourceDiscoveryAssociationCount"] = boost::any(*resourceDiscoveryAssociationCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultResourceDiscoveryAssociationId") != m.end() && !m["DefaultResourceDiscoveryAssociationId"].empty()) {
      defaultResourceDiscoveryAssociationId = make_shared<string>(boost::any_cast<string>(m["DefaultResourceDiscoveryAssociationId"]));
    }
    if (m.find("DefaultResourceDiscoveryId") != m.end() && !m["DefaultResourceDiscoveryId"].empty()) {
      defaultResourceDiscoveryId = make_shared<string>(boost::any_cast<string>(m["DefaultResourceDiscoveryId"]));
    }
    if (m.find("IpamId") != m.end() && !m["IpamId"].empty()) {
      ipamId = make_shared<string>(boost::any_cast<string>(m["IpamId"]));
    }
    if (m.find("PrivateDefaultScopeId") != m.end() && !m["PrivateDefaultScopeId"].empty()) {
      privateDefaultScopeId = make_shared<string>(boost::any_cast<string>(m["PrivateDefaultScopeId"]));
    }
    if (m.find("PublicDefaultScopeId") != m.end() && !m["PublicDefaultScopeId"].empty()) {
      publicDefaultScopeId = make_shared<string>(boost::any_cast<string>(m["PublicDefaultScopeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceDiscoveryAssociationCount") != m.end() && !m["ResourceDiscoveryAssociationCount"].empty()) {
      resourceDiscoveryAssociationCount = make_shared<long>(boost::any_cast<long>(m["ResourceDiscoveryAssociationCount"]));
    }
  }


  virtual ~CreateIpamResponseBody() = default;
};
class CreateIpamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIpamResponseBody> body{};

  CreateIpamResponse() {}

  explicit CreateIpamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIpamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIpamResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIpamResponse() = default;
};
class CreateIpamPoolRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateIpamPoolRequestTag() {}

  explicit CreateIpamPoolRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateIpamPoolRequestTag() = default;
};
class CreateIpamPoolRequest : public Darabonba::Model {
public:
  shared_ptr<long> allocationDefaultCidrMask{};
  shared_ptr<long> allocationMaxCidrMask{};
  shared_ptr<long> allocationMinCidrMask{};
  shared_ptr<bool> autoImport{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> ipamPoolDescription{};
  shared_ptr<string> ipamPoolName{};
  shared_ptr<string> ipamScopeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolRegionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceIpamPoolId{};
  shared_ptr<vector<CreateIpamPoolRequestTag>> tag{};

  CreateIpamPoolRequest() {}

  explicit CreateIpamPoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationDefaultCidrMask) {
      res["AllocationDefaultCidrMask"] = boost::any(*allocationDefaultCidrMask);
    }
    if (allocationMaxCidrMask) {
      res["AllocationMaxCidrMask"] = boost::any(*allocationMaxCidrMask);
    }
    if (allocationMinCidrMask) {
      res["AllocationMinCidrMask"] = boost::any(*allocationMinCidrMask);
    }
    if (autoImport) {
      res["AutoImport"] = boost::any(*autoImport);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (ipamPoolDescription) {
      res["IpamPoolDescription"] = boost::any(*ipamPoolDescription);
    }
    if (ipamPoolName) {
      res["IpamPoolName"] = boost::any(*ipamPoolName);
    }
    if (ipamScopeId) {
      res["IpamScopeId"] = boost::any(*ipamScopeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolRegionId) {
      res["PoolRegionId"] = boost::any(*poolRegionId);
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
    if (sourceIpamPoolId) {
      res["SourceIpamPoolId"] = boost::any(*sourceIpamPoolId);
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
    if (m.find("AllocationDefaultCidrMask") != m.end() && !m["AllocationDefaultCidrMask"].empty()) {
      allocationDefaultCidrMask = make_shared<long>(boost::any_cast<long>(m["AllocationDefaultCidrMask"]));
    }
    if (m.find("AllocationMaxCidrMask") != m.end() && !m["AllocationMaxCidrMask"].empty()) {
      allocationMaxCidrMask = make_shared<long>(boost::any_cast<long>(m["AllocationMaxCidrMask"]));
    }
    if (m.find("AllocationMinCidrMask") != m.end() && !m["AllocationMinCidrMask"].empty()) {
      allocationMinCidrMask = make_shared<long>(boost::any_cast<long>(m["AllocationMinCidrMask"]));
    }
    if (m.find("AutoImport") != m.end() && !m["AutoImport"].empty()) {
      autoImport = make_shared<bool>(boost::any_cast<bool>(m["AutoImport"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("IpamPoolDescription") != m.end() && !m["IpamPoolDescription"].empty()) {
      ipamPoolDescription = make_shared<string>(boost::any_cast<string>(m["IpamPoolDescription"]));
    }
    if (m.find("IpamPoolName") != m.end() && !m["IpamPoolName"].empty()) {
      ipamPoolName = make_shared<string>(boost::any_cast<string>(m["IpamPoolName"]));
    }
    if (m.find("IpamScopeId") != m.end() && !m["IpamScopeId"].empty()) {
      ipamScopeId = make_shared<string>(boost::any_cast<string>(m["IpamScopeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolRegionId") != m.end() && !m["PoolRegionId"].empty()) {
      poolRegionId = make_shared<string>(boost::any_cast<string>(m["PoolRegionId"]));
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
    if (m.find("SourceIpamPoolId") != m.end() && !m["SourceIpamPoolId"].empty()) {
      sourceIpamPoolId = make_shared<string>(boost::any_cast<string>(m["SourceIpamPoolId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateIpamPoolRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateIpamPoolRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateIpamPoolRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateIpamPoolRequest() = default;
};
class CreateIpamPoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> requestId{};

  CreateIpamPoolResponseBody() {}

  explicit CreateIpamPoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateIpamPoolResponseBody() = default;
};
class CreateIpamPoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIpamPoolResponseBody> body{};

  CreateIpamPoolResponse() {}

  explicit CreateIpamPoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIpamPoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIpamPoolResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIpamPoolResponse() = default;
};
class CreateIpamPoolAllocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<long> cidrMask{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> regionId{};

  CreateIpamPoolAllocationRequest() {}

  explicit CreateIpamPoolAllocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (cidrMask) {
      res["CidrMask"] = boost::any(*cidrMask);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CidrMask") != m.end() && !m["CidrMask"].empty()) {
      cidrMask = make_shared<long>(boost::any_cast<long>(m["CidrMask"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateIpamPoolAllocationRequest() = default;
};
class CreateIpamPoolAllocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> ipamPoolAllocationId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sourceCidr{};

  CreateIpamPoolAllocationResponseBody() {}

  explicit CreateIpamPoolAllocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (ipamPoolAllocationId) {
      res["IpamPoolAllocationId"] = boost::any(*ipamPoolAllocationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sourceCidr) {
      res["SourceCidr"] = boost::any(*sourceCidr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("IpamPoolAllocationId") != m.end() && !m["IpamPoolAllocationId"].empty()) {
      ipamPoolAllocationId = make_shared<string>(boost::any_cast<string>(m["IpamPoolAllocationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SourceCidr") != m.end() && !m["SourceCidr"].empty()) {
      sourceCidr = make_shared<string>(boost::any_cast<string>(m["SourceCidr"]));
    }
  }


  virtual ~CreateIpamPoolAllocationResponseBody() = default;
};
class CreateIpamPoolAllocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIpamPoolAllocationResponseBody> body{};

  CreateIpamPoolAllocationResponse() {}

  explicit CreateIpamPoolAllocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIpamPoolAllocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIpamPoolAllocationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIpamPoolAllocationResponse() = default;
};
class CreateIpamScopeRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateIpamScopeRequestTag() {}

  explicit CreateIpamScopeRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateIpamScopeRequestTag() = default;
};
class CreateIpamScopeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamId{};
  shared_ptr<string> ipamScopeDescription{};
  shared_ptr<string> ipamScopeName{};
  shared_ptr<string> ipamScopeType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<CreateIpamScopeRequestTag>> tag{};

  CreateIpamScopeRequest() {}

  explicit CreateIpamScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamId) {
      res["IpamId"] = boost::any(*ipamId);
    }
    if (ipamScopeDescription) {
      res["IpamScopeDescription"] = boost::any(*ipamScopeDescription);
    }
    if (ipamScopeName) {
      res["IpamScopeName"] = boost::any(*ipamScopeName);
    }
    if (ipamScopeType) {
      res["IpamScopeType"] = boost::any(*ipamScopeType);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamId") != m.end() && !m["IpamId"].empty()) {
      ipamId = make_shared<string>(boost::any_cast<string>(m["IpamId"]));
    }
    if (m.find("IpamScopeDescription") != m.end() && !m["IpamScopeDescription"].empty()) {
      ipamScopeDescription = make_shared<string>(boost::any_cast<string>(m["IpamScopeDescription"]));
    }
    if (m.find("IpamScopeName") != m.end() && !m["IpamScopeName"].empty()) {
      ipamScopeName = make_shared<string>(boost::any_cast<string>(m["IpamScopeName"]));
    }
    if (m.find("IpamScopeType") != m.end() && !m["IpamScopeType"].empty()) {
      ipamScopeType = make_shared<string>(boost::any_cast<string>(m["IpamScopeType"]));
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateIpamScopeRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateIpamScopeRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateIpamScopeRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateIpamScopeRequest() = default;
};
class CreateIpamScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ipamScopeId{};
  shared_ptr<string> requestId{};

  CreateIpamScopeResponseBody() {}

  explicit CreateIpamScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipamScopeId) {
      res["IpamScopeId"] = boost::any(*ipamScopeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpamScopeId") != m.end() && !m["IpamScopeId"].empty()) {
      ipamScopeId = make_shared<string>(boost::any_cast<string>(m["IpamScopeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateIpamScopeResponseBody() = default;
};
class CreateIpamScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIpamScopeResponseBody> body{};

  CreateIpamScopeResponse() {}

  explicit CreateIpamScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateIpamScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIpamScopeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIpamScopeResponse() = default;
};
class DeleteIpamRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteIpamRequest() {}

  explicit DeleteIpamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamId) {
      res["IpamId"] = boost::any(*ipamId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamId") != m.end() && !m["IpamId"].empty()) {
      ipamId = make_shared<string>(boost::any_cast<string>(m["IpamId"]));
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


  virtual ~DeleteIpamRequest() = default;
};
class DeleteIpamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIpamResponseBody() {}

  explicit DeleteIpamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIpamResponseBody() = default;
};
class DeleteIpamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIpamResponseBody> body{};

  DeleteIpamResponse() {}

  explicit DeleteIpamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIpamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIpamResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIpamResponse() = default;
};
class DeleteIpamPoolRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteIpamPoolRequest() {}

  explicit DeleteIpamPoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
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


  virtual ~DeleteIpamPoolRequest() = default;
};
class DeleteIpamPoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIpamPoolResponseBody() {}

  explicit DeleteIpamPoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIpamPoolResponseBody() = default;
};
class DeleteIpamPoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIpamPoolResponseBody> body{};

  DeleteIpamPoolResponse() {}

  explicit DeleteIpamPoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIpamPoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIpamPoolResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIpamPoolResponse() = default;
};
class DeleteIpamPoolAllocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamPoolAllocationId{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> regionId{};

  DeleteIpamPoolAllocationRequest() {}

  explicit DeleteIpamPoolAllocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamPoolAllocationId) {
      res["IpamPoolAllocationId"] = boost::any(*ipamPoolAllocationId);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamPoolAllocationId") != m.end() && !m["IpamPoolAllocationId"].empty()) {
      ipamPoolAllocationId = make_shared<string>(boost::any_cast<string>(m["IpamPoolAllocationId"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteIpamPoolAllocationRequest() = default;
};
class DeleteIpamPoolAllocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIpamPoolAllocationResponseBody() {}

  explicit DeleteIpamPoolAllocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIpamPoolAllocationResponseBody() = default;
};
class DeleteIpamPoolAllocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIpamPoolAllocationResponseBody> body{};

  DeleteIpamPoolAllocationResponse() {}

  explicit DeleteIpamPoolAllocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIpamPoolAllocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIpamPoolAllocationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIpamPoolAllocationResponse() = default;
};
class DeleteIpamPoolCidrRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> regionId{};

  DeleteIpamPoolCidrRequest() {}

  explicit DeleteIpamPoolCidrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteIpamPoolCidrRequest() = default;
};
class DeleteIpamPoolCidrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIpamPoolCidrResponseBody() {}

  explicit DeleteIpamPoolCidrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIpamPoolCidrResponseBody() = default;
};
class DeleteIpamPoolCidrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIpamPoolCidrResponseBody> body{};

  DeleteIpamPoolCidrResponse() {}

  explicit DeleteIpamPoolCidrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIpamPoolCidrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIpamPoolCidrResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIpamPoolCidrResponse() = default;
};
class DeleteIpamScopeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamScopeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteIpamScopeRequest() {}

  explicit DeleteIpamScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamScopeId) {
      res["IpamScopeId"] = boost::any(*ipamScopeId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamScopeId") != m.end() && !m["IpamScopeId"].empty()) {
      ipamScopeId = make_shared<string>(boost::any_cast<string>(m["IpamScopeId"]));
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


  virtual ~DeleteIpamScopeRequest() = default;
};
class DeleteIpamScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteIpamScopeResponseBody() {}

  explicit DeleteIpamScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteIpamScopeResponseBody() = default;
};
class DeleteIpamScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIpamScopeResponseBody> body{};

  DeleteIpamScopeResponse() {}

  explicit DeleteIpamScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIpamScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIpamScopeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIpamScopeResponse() = default;
};
class GetVpcIpamServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetVpcIpamServiceStatusRequest() {}

  explicit GetVpcIpamServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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


  virtual ~GetVpcIpamServiceStatusRequest() = default;
};
class GetVpcIpamServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> requestId{};

  GetVpcIpamServiceStatusResponseBody() {}

  explicit GetVpcIpamServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVpcIpamServiceStatusResponseBody() = default;
};
class GetVpcIpamServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVpcIpamServiceStatusResponseBody> body{};

  GetVpcIpamServiceStatusResponse() {}

  explicit GetVpcIpamServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetVpcIpamServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVpcIpamServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetVpcIpamServiceStatusResponse() = default;
};
class ListIpamPoolAllocationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<vector<string>> ipamPoolAllocationIds{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListIpamPoolAllocationsRequest() {}

  explicit ListIpamPoolAllocationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (ipamPoolAllocationIds) {
      res["IpamPoolAllocationIds"] = boost::any(*ipamPoolAllocationIds);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("IpamPoolAllocationIds") != m.end() && !m["IpamPoolAllocationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpamPoolAllocationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpamPoolAllocationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipamPoolAllocationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListIpamPoolAllocationsRequest() = default;
};
class ListIpamPoolAllocationsResponseBodyIpamPoolAllocations : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> ipamPoolAllocationId{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sourceCidr{};
  shared_ptr<string> status{};

  ListIpamPoolAllocationsResponseBodyIpamPoolAllocations() {}

  explicit ListIpamPoolAllocationsResponseBodyIpamPoolAllocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (ipamPoolAllocationId) {
      res["IpamPoolAllocationId"] = boost::any(*ipamPoolAllocationId);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sourceCidr) {
      res["SourceCidr"] = boost::any(*sourceCidr);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("IpamPoolAllocationId") != m.end() && !m["IpamPoolAllocationId"].empty()) {
      ipamPoolAllocationId = make_shared<string>(boost::any_cast<string>(m["IpamPoolAllocationId"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SourceCidr") != m.end() && !m["SourceCidr"].empty()) {
      sourceCidr = make_shared<string>(boost::any_cast<string>(m["SourceCidr"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListIpamPoolAllocationsResponseBodyIpamPoolAllocations() = default;
};
class ListIpamPoolAllocationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListIpamPoolAllocationsResponseBodyIpamPoolAllocations>> ipamPoolAllocations{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListIpamPoolAllocationsResponseBody() {}

  explicit ListIpamPoolAllocationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ipamPoolAllocations) {
      vector<boost::any> temp1;
      for(auto item1:*ipamPoolAllocations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpamPoolAllocations"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("IpamPoolAllocations") != m.end() && !m["IpamPoolAllocations"].empty()) {
      if (typeid(vector<boost::any>) == m["IpamPoolAllocations"].type()) {
        vector<ListIpamPoolAllocationsResponseBodyIpamPoolAllocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpamPoolAllocations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamPoolAllocationsResponseBodyIpamPoolAllocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipamPoolAllocations = make_shared<vector<ListIpamPoolAllocationsResponseBodyIpamPoolAllocations>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIpamPoolAllocationsResponseBody() = default;
};
class ListIpamPoolAllocationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIpamPoolAllocationsResponseBody> body{};

  ListIpamPoolAllocationsResponse() {}

  explicit ListIpamPoolAllocationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIpamPoolAllocationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIpamPoolAllocationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIpamPoolAllocationsResponse() = default;
};
class ListIpamPoolCidrsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListIpamPoolCidrsRequest() {}

  explicit ListIpamPoolCidrsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListIpamPoolCidrsRequest() = default;
};
class ListIpamPoolCidrsResponseBodyIpamPoolCidrs : public Darabonba::Model {
public:
  shared_ptr<string> cidr{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> status{};

  ListIpamPoolCidrsResponseBodyIpamPoolCidrs() {}

  explicit ListIpamPoolCidrsResponseBodyIpamPoolCidrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListIpamPoolCidrsResponseBodyIpamPoolCidrs() = default;
};
class ListIpamPoolCidrsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListIpamPoolCidrsResponseBodyIpamPoolCidrs>> ipamPoolCidrs{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListIpamPoolCidrsResponseBody() {}

  explicit ListIpamPoolCidrsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ipamPoolCidrs) {
      vector<boost::any> temp1;
      for(auto item1:*ipamPoolCidrs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpamPoolCidrs"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("IpamPoolCidrs") != m.end() && !m["IpamPoolCidrs"].empty()) {
      if (typeid(vector<boost::any>) == m["IpamPoolCidrs"].type()) {
        vector<ListIpamPoolCidrsResponseBodyIpamPoolCidrs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpamPoolCidrs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamPoolCidrsResponseBodyIpamPoolCidrs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipamPoolCidrs = make_shared<vector<ListIpamPoolCidrsResponseBodyIpamPoolCidrs>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIpamPoolCidrsResponseBody() = default;
};
class ListIpamPoolCidrsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIpamPoolCidrsResponseBody> body{};

  ListIpamPoolCidrsResponse() {}

  explicit ListIpamPoolCidrsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIpamPoolCidrsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIpamPoolCidrsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIpamPoolCidrsResponse() = default;
};
class ListIpamPoolsRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListIpamPoolsRequestTags() {}

  explicit ListIpamPoolsRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListIpamPoolsRequestTags() = default;
};
class ListIpamPoolsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipamPoolIds{};
  shared_ptr<string> ipamPoolName{};
  shared_ptr<string> ipamScopeId{};
  shared_ptr<bool> isShared{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> poolRegionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceIpamPoolId{};
  shared_ptr<vector<ListIpamPoolsRequestTags>> tags{};

  ListIpamPoolsRequest() {}

  explicit ListIpamPoolsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipamPoolIds) {
      res["IpamPoolIds"] = boost::any(*ipamPoolIds);
    }
    if (ipamPoolName) {
      res["IpamPoolName"] = boost::any(*ipamPoolName);
    }
    if (ipamScopeId) {
      res["IpamScopeId"] = boost::any(*ipamScopeId);
    }
    if (isShared) {
      res["IsShared"] = boost::any(*isShared);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolRegionId) {
      res["PoolRegionId"] = boost::any(*poolRegionId);
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
    if (sourceIpamPoolId) {
      res["SourceIpamPoolId"] = boost::any(*sourceIpamPoolId);
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
    if (m.find("IpamPoolIds") != m.end() && !m["IpamPoolIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpamPoolIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpamPoolIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipamPoolIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpamPoolName") != m.end() && !m["IpamPoolName"].empty()) {
      ipamPoolName = make_shared<string>(boost::any_cast<string>(m["IpamPoolName"]));
    }
    if (m.find("IpamScopeId") != m.end() && !m["IpamScopeId"].empty()) {
      ipamScopeId = make_shared<string>(boost::any_cast<string>(m["IpamScopeId"]));
    }
    if (m.find("IsShared") != m.end() && !m["IsShared"].empty()) {
      isShared = make_shared<bool>(boost::any_cast<bool>(m["IsShared"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolRegionId") != m.end() && !m["PoolRegionId"].empty()) {
      poolRegionId = make_shared<string>(boost::any_cast<string>(m["PoolRegionId"]));
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
    if (m.find("SourceIpamPoolId") != m.end() && !m["SourceIpamPoolId"].empty()) {
      sourceIpamPoolId = make_shared<string>(boost::any_cast<string>(m["SourceIpamPoolId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListIpamPoolsRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamPoolsRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListIpamPoolsRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListIpamPoolsRequest() = default;
};
class ListIpamPoolsResponseBodyIpamPoolsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListIpamPoolsResponseBodyIpamPoolsTags() {}

  explicit ListIpamPoolsResponseBodyIpamPoolsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListIpamPoolsResponseBodyIpamPoolsTags() = default;
};
class ListIpamPoolsResponseBodyIpamPools : public Darabonba::Model {
public:
  shared_ptr<long> allocationDefaultCidrMask{};
  shared_ptr<long> allocationMaxCidrMask{};
  shared_ptr<long> allocationMinCidrMask{};
  shared_ptr<bool> autoImport{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> hasSubPool{};
  shared_ptr<string> ipVersion{};
  shared_ptr<string> ipamId{};
  shared_ptr<string> ipamPoolDescription{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> ipamPoolName{};
  shared_ptr<string> ipamRegionId{};
  shared_ptr<string> ipamScopeId{};
  shared_ptr<string> ipamScopeType{};
  shared_ptr<bool> isShared{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> poolDepth{};
  shared_ptr<string> poolRegionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sourceIpamPoolId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListIpamPoolsResponseBodyIpamPoolsTags>> tags{};

  ListIpamPoolsResponseBodyIpamPools() {}

  explicit ListIpamPoolsResponseBodyIpamPools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationDefaultCidrMask) {
      res["AllocationDefaultCidrMask"] = boost::any(*allocationDefaultCidrMask);
    }
    if (allocationMaxCidrMask) {
      res["AllocationMaxCidrMask"] = boost::any(*allocationMaxCidrMask);
    }
    if (allocationMinCidrMask) {
      res["AllocationMinCidrMask"] = boost::any(*allocationMinCidrMask);
    }
    if (autoImport) {
      res["AutoImport"] = boost::any(*autoImport);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (hasSubPool) {
      res["HasSubPool"] = boost::any(*hasSubPool);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (ipamId) {
      res["IpamId"] = boost::any(*ipamId);
    }
    if (ipamPoolDescription) {
      res["IpamPoolDescription"] = boost::any(*ipamPoolDescription);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (ipamPoolName) {
      res["IpamPoolName"] = boost::any(*ipamPoolName);
    }
    if (ipamRegionId) {
      res["IpamRegionId"] = boost::any(*ipamRegionId);
    }
    if (ipamScopeId) {
      res["IpamScopeId"] = boost::any(*ipamScopeId);
    }
    if (ipamScopeType) {
      res["IpamScopeType"] = boost::any(*ipamScopeType);
    }
    if (isShared) {
      res["IsShared"] = boost::any(*isShared);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolDepth) {
      res["PoolDepth"] = boost::any(*poolDepth);
    }
    if (poolRegionId) {
      res["PoolRegionId"] = boost::any(*poolRegionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sourceIpamPoolId) {
      res["SourceIpamPoolId"] = boost::any(*sourceIpamPoolId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationDefaultCidrMask") != m.end() && !m["AllocationDefaultCidrMask"].empty()) {
      allocationDefaultCidrMask = make_shared<long>(boost::any_cast<long>(m["AllocationDefaultCidrMask"]));
    }
    if (m.find("AllocationMaxCidrMask") != m.end() && !m["AllocationMaxCidrMask"].empty()) {
      allocationMaxCidrMask = make_shared<long>(boost::any_cast<long>(m["AllocationMaxCidrMask"]));
    }
    if (m.find("AllocationMinCidrMask") != m.end() && !m["AllocationMinCidrMask"].empty()) {
      allocationMinCidrMask = make_shared<long>(boost::any_cast<long>(m["AllocationMinCidrMask"]));
    }
    if (m.find("AutoImport") != m.end() && !m["AutoImport"].empty()) {
      autoImport = make_shared<bool>(boost::any_cast<bool>(m["AutoImport"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("HasSubPool") != m.end() && !m["HasSubPool"].empty()) {
      hasSubPool = make_shared<bool>(boost::any_cast<bool>(m["HasSubPool"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("IpamId") != m.end() && !m["IpamId"].empty()) {
      ipamId = make_shared<string>(boost::any_cast<string>(m["IpamId"]));
    }
    if (m.find("IpamPoolDescription") != m.end() && !m["IpamPoolDescription"].empty()) {
      ipamPoolDescription = make_shared<string>(boost::any_cast<string>(m["IpamPoolDescription"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("IpamPoolName") != m.end() && !m["IpamPoolName"].empty()) {
      ipamPoolName = make_shared<string>(boost::any_cast<string>(m["IpamPoolName"]));
    }
    if (m.find("IpamRegionId") != m.end() && !m["IpamRegionId"].empty()) {
      ipamRegionId = make_shared<string>(boost::any_cast<string>(m["IpamRegionId"]));
    }
    if (m.find("IpamScopeId") != m.end() && !m["IpamScopeId"].empty()) {
      ipamScopeId = make_shared<string>(boost::any_cast<string>(m["IpamScopeId"]));
    }
    if (m.find("IpamScopeType") != m.end() && !m["IpamScopeType"].empty()) {
      ipamScopeType = make_shared<string>(boost::any_cast<string>(m["IpamScopeType"]));
    }
    if (m.find("IsShared") != m.end() && !m["IsShared"].empty()) {
      isShared = make_shared<bool>(boost::any_cast<bool>(m["IsShared"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolDepth") != m.end() && !m["PoolDepth"].empty()) {
      poolDepth = make_shared<long>(boost::any_cast<long>(m["PoolDepth"]));
    }
    if (m.find("PoolRegionId") != m.end() && !m["PoolRegionId"].empty()) {
      poolRegionId = make_shared<string>(boost::any_cast<string>(m["PoolRegionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SourceIpamPoolId") != m.end() && !m["SourceIpamPoolId"].empty()) {
      sourceIpamPoolId = make_shared<string>(boost::any_cast<string>(m["SourceIpamPoolId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListIpamPoolsResponseBodyIpamPoolsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamPoolsResponseBodyIpamPoolsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListIpamPoolsResponseBodyIpamPoolsTags>>(expect1);
      }
    }
  }


  virtual ~ListIpamPoolsResponseBodyIpamPools() = default;
};
class ListIpamPoolsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListIpamPoolsResponseBodyIpamPools>> ipamPools{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListIpamPoolsResponseBody() {}

  explicit ListIpamPoolsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ipamPools) {
      vector<boost::any> temp1;
      for(auto item1:*ipamPools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpamPools"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("IpamPools") != m.end() && !m["IpamPools"].empty()) {
      if (typeid(vector<boost::any>) == m["IpamPools"].type()) {
        vector<ListIpamPoolsResponseBodyIpamPools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpamPools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamPoolsResponseBodyIpamPools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipamPools = make_shared<vector<ListIpamPoolsResponseBodyIpamPools>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIpamPoolsResponseBody() = default;
};
class ListIpamPoolsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIpamPoolsResponseBody> body{};

  ListIpamPoolsResponse() {}

  explicit ListIpamPoolsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIpamPoolsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIpamPoolsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIpamPoolsResponse() = default;
};
class ListIpamResourceCidrsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> ipamScopeId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> vpcId{};

  ListIpamResourceCidrsRequest() {}

  explicit ListIpamResourceCidrsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (ipamScopeId) {
      res["IpamScopeId"] = boost::any(*ipamScopeId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("IpamScopeId") != m.end() && !m["IpamScopeId"].empty()) {
      ipamScopeId = make_shared<string>(boost::any_cast<string>(m["IpamScopeId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListIpamResourceCidrsRequest() = default;
};
class ListIpamResourceCidrsResponseBodyIpamResourceCidrs : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> cidr{};
  shared_ptr<string> complianceStatus{};
  shared_ptr<string> ipUsage{};
  shared_ptr<string> ipamAllocationId{};
  shared_ptr<string> ipamId{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> ipamScopeId{};
  shared_ptr<string> managementStatus{};
  shared_ptr<string> overlapStatus{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sourceCidr{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};

  ListIpamResourceCidrsResponseBodyIpamResourceCidrs() {}

  explicit ListIpamResourceCidrsResponseBodyIpamResourceCidrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (cidr) {
      res["Cidr"] = boost::any(*cidr);
    }
    if (complianceStatus) {
      res["ComplianceStatus"] = boost::any(*complianceStatus);
    }
    if (ipUsage) {
      res["IpUsage"] = boost::any(*ipUsage);
    }
    if (ipamAllocationId) {
      res["IpamAllocationId"] = boost::any(*ipamAllocationId);
    }
    if (ipamId) {
      res["IpamId"] = boost::any(*ipamId);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (ipamScopeId) {
      res["IpamScopeId"] = boost::any(*ipamScopeId);
    }
    if (managementStatus) {
      res["ManagementStatus"] = boost::any(*managementStatus);
    }
    if (overlapStatus) {
      res["OverlapStatus"] = boost::any(*overlapStatus);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sourceCidr) {
      res["SourceCidr"] = boost::any(*sourceCidr);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Cidr") != m.end() && !m["Cidr"].empty()) {
      cidr = make_shared<string>(boost::any_cast<string>(m["Cidr"]));
    }
    if (m.find("ComplianceStatus") != m.end() && !m["ComplianceStatus"].empty()) {
      complianceStatus = make_shared<string>(boost::any_cast<string>(m["ComplianceStatus"]));
    }
    if (m.find("IpUsage") != m.end() && !m["IpUsage"].empty()) {
      ipUsage = make_shared<string>(boost::any_cast<string>(m["IpUsage"]));
    }
    if (m.find("IpamAllocationId") != m.end() && !m["IpamAllocationId"].empty()) {
      ipamAllocationId = make_shared<string>(boost::any_cast<string>(m["IpamAllocationId"]));
    }
    if (m.find("IpamId") != m.end() && !m["IpamId"].empty()) {
      ipamId = make_shared<string>(boost::any_cast<string>(m["IpamId"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("IpamScopeId") != m.end() && !m["IpamScopeId"].empty()) {
      ipamScopeId = make_shared<string>(boost::any_cast<string>(m["IpamScopeId"]));
    }
    if (m.find("ManagementStatus") != m.end() && !m["ManagementStatus"].empty()) {
      managementStatus = make_shared<string>(boost::any_cast<string>(m["ManagementStatus"]));
    }
    if (m.find("OverlapStatus") != m.end() && !m["OverlapStatus"].empty()) {
      overlapStatus = make_shared<string>(boost::any_cast<string>(m["OverlapStatus"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SourceCidr") != m.end() && !m["SourceCidr"].empty()) {
      sourceCidr = make_shared<string>(boost::any_cast<string>(m["SourceCidr"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListIpamResourceCidrsResponseBodyIpamResourceCidrs() = default;
};
class ListIpamResourceCidrsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListIpamResourceCidrsResponseBodyIpamResourceCidrs>> ipamResourceCidrs{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListIpamResourceCidrsResponseBody() {}

  explicit ListIpamResourceCidrsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ipamResourceCidrs) {
      vector<boost::any> temp1;
      for(auto item1:*ipamResourceCidrs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpamResourceCidrs"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("IpamResourceCidrs") != m.end() && !m["IpamResourceCidrs"].empty()) {
      if (typeid(vector<boost::any>) == m["IpamResourceCidrs"].type()) {
        vector<ListIpamResourceCidrsResponseBodyIpamResourceCidrs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpamResourceCidrs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamResourceCidrsResponseBodyIpamResourceCidrs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipamResourceCidrs = make_shared<vector<ListIpamResourceCidrsResponseBodyIpamResourceCidrs>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIpamResourceCidrsResponseBody() = default;
};
class ListIpamResourceCidrsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIpamResourceCidrsResponseBody> body{};

  ListIpamResourceCidrsResponse() {}

  explicit ListIpamResourceCidrsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIpamResourceCidrsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIpamResourceCidrsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIpamResourceCidrsResponse() = default;
};
class ListIpamScopesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListIpamScopesRequestTags() {}

  explicit ListIpamScopesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListIpamScopesRequestTags() = default;
};
class ListIpamScopesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ipamId{};
  shared_ptr<vector<string>> ipamScopeIds{};
  shared_ptr<string> ipamScopeName{};
  shared_ptr<string> ipamScopeType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<ListIpamScopesRequestTags>> tags{};

  ListIpamScopesRequest() {}

  explicit ListIpamScopesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipamId) {
      res["IpamId"] = boost::any(*ipamId);
    }
    if (ipamScopeIds) {
      res["IpamScopeIds"] = boost::any(*ipamScopeIds);
    }
    if (ipamScopeName) {
      res["IpamScopeName"] = boost::any(*ipamScopeName);
    }
    if (ipamScopeType) {
      res["IpamScopeType"] = boost::any(*ipamScopeType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("IpamId") != m.end() && !m["IpamId"].empty()) {
      ipamId = make_shared<string>(boost::any_cast<string>(m["IpamId"]));
    }
    if (m.find("IpamScopeIds") != m.end() && !m["IpamScopeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpamScopeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpamScopeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipamScopeIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpamScopeName") != m.end() && !m["IpamScopeName"].empty()) {
      ipamScopeName = make_shared<string>(boost::any_cast<string>(m["IpamScopeName"]));
    }
    if (m.find("IpamScopeType") != m.end() && !m["IpamScopeType"].empty()) {
      ipamScopeType = make_shared<string>(boost::any_cast<string>(m["IpamScopeType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListIpamScopesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamScopesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListIpamScopesRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListIpamScopesRequest() = default;
};
class ListIpamScopesResponseBodyIpamScopesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListIpamScopesResponseBodyIpamScopesTags() {}

  explicit ListIpamScopesResponseBodyIpamScopesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListIpamScopesResponseBodyIpamScopesTags() = default;
};
class ListIpamScopesResponseBodyIpamScopes : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> ipamId{};
  shared_ptr<string> ipamScopeDescription{};
  shared_ptr<string> ipamScopeId{};
  shared_ptr<string> ipamScopeName{};
  shared_ptr<string> ipamScopeType{};
  shared_ptr<bool> isDefault{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> poolCount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListIpamScopesResponseBodyIpamScopesTags>> tags{};

  ListIpamScopesResponseBodyIpamScopes() {}

  explicit ListIpamScopesResponseBodyIpamScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (ipamId) {
      res["IpamId"] = boost::any(*ipamId);
    }
    if (ipamScopeDescription) {
      res["IpamScopeDescription"] = boost::any(*ipamScopeDescription);
    }
    if (ipamScopeId) {
      res["IpamScopeId"] = boost::any(*ipamScopeId);
    }
    if (ipamScopeName) {
      res["IpamScopeName"] = boost::any(*ipamScopeName);
    }
    if (ipamScopeType) {
      res["IpamScopeType"] = boost::any(*ipamScopeType);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (poolCount) {
      res["PoolCount"] = boost::any(*poolCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IpamId") != m.end() && !m["IpamId"].empty()) {
      ipamId = make_shared<string>(boost::any_cast<string>(m["IpamId"]));
    }
    if (m.find("IpamScopeDescription") != m.end() && !m["IpamScopeDescription"].empty()) {
      ipamScopeDescription = make_shared<string>(boost::any_cast<string>(m["IpamScopeDescription"]));
    }
    if (m.find("IpamScopeId") != m.end() && !m["IpamScopeId"].empty()) {
      ipamScopeId = make_shared<string>(boost::any_cast<string>(m["IpamScopeId"]));
    }
    if (m.find("IpamScopeName") != m.end() && !m["IpamScopeName"].empty()) {
      ipamScopeName = make_shared<string>(boost::any_cast<string>(m["IpamScopeName"]));
    }
    if (m.find("IpamScopeType") != m.end() && !m["IpamScopeType"].empty()) {
      ipamScopeType = make_shared<string>(boost::any_cast<string>(m["IpamScopeType"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PoolCount") != m.end() && !m["PoolCount"].empty()) {
      poolCount = make_shared<long>(boost::any_cast<long>(m["PoolCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListIpamScopesResponseBodyIpamScopesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamScopesResponseBodyIpamScopesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListIpamScopesResponseBodyIpamScopesTags>>(expect1);
      }
    }
  }


  virtual ~ListIpamScopesResponseBodyIpamScopes() = default;
};
class ListIpamScopesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListIpamScopesResponseBodyIpamScopes>> ipamScopes{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListIpamScopesResponseBody() {}

  explicit ListIpamScopesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ipamScopes) {
      vector<boost::any> temp1;
      for(auto item1:*ipamScopes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpamScopes"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("IpamScopes") != m.end() && !m["IpamScopes"].empty()) {
      if (typeid(vector<boost::any>) == m["IpamScopes"].type()) {
        vector<ListIpamScopesResponseBodyIpamScopes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpamScopes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamScopesResponseBodyIpamScopes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipamScopes = make_shared<vector<ListIpamScopesResponseBodyIpamScopes>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIpamScopesResponseBody() = default;
};
class ListIpamScopesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIpamScopesResponseBody> body{};

  ListIpamScopesResponse() {}

  explicit ListIpamScopesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIpamScopesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIpamScopesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIpamScopesResponse() = default;
};
class ListIpamsRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListIpamsRequestTags() {}

  explicit ListIpamsRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListIpamsRequestTags() = default;
};
class ListIpamsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ipamIds{};
  shared_ptr<string> ipamName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<ListIpamsRequestTags>> tags{};

  ListIpamsRequest() {}

  explicit ListIpamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipamIds) {
      res["IpamIds"] = boost::any(*ipamIds);
    }
    if (ipamName) {
      res["IpamName"] = boost::any(*ipamName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("IpamIds") != m.end() && !m["IpamIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpamIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpamIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipamIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpamName") != m.end() && !m["IpamName"].empty()) {
      ipamName = make_shared<string>(boost::any_cast<string>(m["IpamName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListIpamsRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamsRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListIpamsRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListIpamsRequest() = default;
};
class ListIpamsResponseBodyIpamsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListIpamsResponseBodyIpamsTags() {}

  explicit ListIpamsResponseBodyIpamsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListIpamsResponseBodyIpamsTags() = default;
};
class ListIpamsResponseBodyIpams : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> defaultResourceDiscoveryAssociationId{};
  shared_ptr<string> defaultResourceDiscoveryId{};
  shared_ptr<string> ipamDescription{};
  shared_ptr<string> ipamId{};
  shared_ptr<string> ipamName{};
  shared_ptr<string> ipamStatus{};
  shared_ptr<vector<string>> operatingRegionList{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> privateDefaultScopeId{};
  shared_ptr<string> publicDefaultScopeId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceDiscoveryAssociationCount{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> scopeCount{};
  shared_ptr<vector<ListIpamsResponseBodyIpamsTags>> tags{};

  ListIpamsResponseBodyIpams() {}

  explicit ListIpamsResponseBodyIpams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultResourceDiscoveryAssociationId) {
      res["DefaultResourceDiscoveryAssociationId"] = boost::any(*defaultResourceDiscoveryAssociationId);
    }
    if (defaultResourceDiscoveryId) {
      res["DefaultResourceDiscoveryId"] = boost::any(*defaultResourceDiscoveryId);
    }
    if (ipamDescription) {
      res["IpamDescription"] = boost::any(*ipamDescription);
    }
    if (ipamId) {
      res["IpamId"] = boost::any(*ipamId);
    }
    if (ipamName) {
      res["IpamName"] = boost::any(*ipamName);
    }
    if (ipamStatus) {
      res["IpamStatus"] = boost::any(*ipamStatus);
    }
    if (operatingRegionList) {
      res["OperatingRegionList"] = boost::any(*operatingRegionList);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (privateDefaultScopeId) {
      res["PrivateDefaultScopeId"] = boost::any(*privateDefaultScopeId);
    }
    if (publicDefaultScopeId) {
      res["PublicDefaultScopeId"] = boost::any(*publicDefaultScopeId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceDiscoveryAssociationCount) {
      res["ResourceDiscoveryAssociationCount"] = boost::any(*resourceDiscoveryAssociationCount);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scopeCount) {
      res["ScopeCount"] = boost::any(*scopeCount);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultResourceDiscoveryAssociationId") != m.end() && !m["DefaultResourceDiscoveryAssociationId"].empty()) {
      defaultResourceDiscoveryAssociationId = make_shared<string>(boost::any_cast<string>(m["DefaultResourceDiscoveryAssociationId"]));
    }
    if (m.find("DefaultResourceDiscoveryId") != m.end() && !m["DefaultResourceDiscoveryId"].empty()) {
      defaultResourceDiscoveryId = make_shared<string>(boost::any_cast<string>(m["DefaultResourceDiscoveryId"]));
    }
    if (m.find("IpamDescription") != m.end() && !m["IpamDescription"].empty()) {
      ipamDescription = make_shared<string>(boost::any_cast<string>(m["IpamDescription"]));
    }
    if (m.find("IpamId") != m.end() && !m["IpamId"].empty()) {
      ipamId = make_shared<string>(boost::any_cast<string>(m["IpamId"]));
    }
    if (m.find("IpamName") != m.end() && !m["IpamName"].empty()) {
      ipamName = make_shared<string>(boost::any_cast<string>(m["IpamName"]));
    }
    if (m.find("IpamStatus") != m.end() && !m["IpamStatus"].empty()) {
      ipamStatus = make_shared<string>(boost::any_cast<string>(m["IpamStatus"]));
    }
    if (m.find("OperatingRegionList") != m.end() && !m["OperatingRegionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperatingRegionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperatingRegionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operatingRegionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PrivateDefaultScopeId") != m.end() && !m["PrivateDefaultScopeId"].empty()) {
      privateDefaultScopeId = make_shared<string>(boost::any_cast<string>(m["PrivateDefaultScopeId"]));
    }
    if (m.find("PublicDefaultScopeId") != m.end() && !m["PublicDefaultScopeId"].empty()) {
      publicDefaultScopeId = make_shared<string>(boost::any_cast<string>(m["PublicDefaultScopeId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceDiscoveryAssociationCount") != m.end() && !m["ResourceDiscoveryAssociationCount"].empty()) {
      resourceDiscoveryAssociationCount = make_shared<long>(boost::any_cast<long>(m["ResourceDiscoveryAssociationCount"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ScopeCount") != m.end() && !m["ScopeCount"].empty()) {
      scopeCount = make_shared<long>(boost::any_cast<long>(m["ScopeCount"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListIpamsResponseBodyIpamsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamsResponseBodyIpamsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListIpamsResponseBodyIpamsTags>>(expect1);
      }
    }
  }


  virtual ~ListIpamsResponseBodyIpams() = default;
};
class ListIpamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListIpamsResponseBodyIpams>> ipams{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListIpamsResponseBody() {}

  explicit ListIpamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (ipams) {
      vector<boost::any> temp1;
      for(auto item1:*ipams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ipams"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Ipams") != m.end() && !m["Ipams"].empty()) {
      if (typeid(vector<boost::any>) == m["Ipams"].type()) {
        vector<ListIpamsResponseBodyIpams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ipams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIpamsResponseBodyIpams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipams = make_shared<vector<ListIpamsResponseBodyIpams>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIpamsResponseBody() = default;
};
class ListIpamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIpamsResponseBody> body{};

  ListIpamsResponse() {}

  explicit ListIpamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIpamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIpamsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIpamsResponse() = default;
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
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
class OpenVpcIpamServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  OpenVpcIpamServiceRequest() {}

  explicit OpenVpcIpamServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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


  virtual ~OpenVpcIpamServiceRequest() = default;
};
class OpenVpcIpamServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  OpenVpcIpamServiceResponseBody() {}

  explicit OpenVpcIpamServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~OpenVpcIpamServiceResponseBody() = default;
};
class OpenVpcIpamServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenVpcIpamServiceResponseBody> body{};

  OpenVpcIpamServiceResponse() {}

  explicit OpenVpcIpamServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OpenVpcIpamServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenVpcIpamServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenVpcIpamServiceResponse() = default;
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
class UpdateIpamRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addOperatingRegion{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamDescription{};
  shared_ptr<string> ipamId{};
  shared_ptr<string> ipamName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> removeOperatingRegion{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateIpamRequest() {}

  explicit UpdateIpamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addOperatingRegion) {
      res["AddOperatingRegion"] = boost::any(*addOperatingRegion);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamDescription) {
      res["IpamDescription"] = boost::any(*ipamDescription);
    }
    if (ipamId) {
      res["IpamId"] = boost::any(*ipamId);
    }
    if (ipamName) {
      res["IpamName"] = boost::any(*ipamName);
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
    if (removeOperatingRegion) {
      res["RemoveOperatingRegion"] = boost::any(*removeOperatingRegion);
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
    if (m.find("AddOperatingRegion") != m.end() && !m["AddOperatingRegion"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AddOperatingRegion"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AddOperatingRegion"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addOperatingRegion = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamDescription") != m.end() && !m["IpamDescription"].empty()) {
      ipamDescription = make_shared<string>(boost::any_cast<string>(m["IpamDescription"]));
    }
    if (m.find("IpamId") != m.end() && !m["IpamId"].empty()) {
      ipamId = make_shared<string>(boost::any_cast<string>(m["IpamId"]));
    }
    if (m.find("IpamName") != m.end() && !m["IpamName"].empty()) {
      ipamName = make_shared<string>(boost::any_cast<string>(m["IpamName"]));
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
    if (m.find("RemoveOperatingRegion") != m.end() && !m["RemoveOperatingRegion"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RemoveOperatingRegion"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RemoveOperatingRegion"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      removeOperatingRegion = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateIpamRequest() = default;
};
class UpdateIpamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateIpamResponseBody() {}

  explicit UpdateIpamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateIpamResponseBody() = default;
};
class UpdateIpamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateIpamResponseBody> body{};

  UpdateIpamResponse() {}

  explicit UpdateIpamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIpamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIpamResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIpamResponse() = default;
};
class UpdateIpamPoolRequest : public Darabonba::Model {
public:
  shared_ptr<long> allocationDefaultCidrMask{};
  shared_ptr<long> allocationMaxCidrMask{};
  shared_ptr<long> allocationMinCidrMask{};
  shared_ptr<bool> autoImport{};
  shared_ptr<bool> clearAllocationDefaultCidrMask{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamPoolDescription{};
  shared_ptr<string> ipamPoolId{};
  shared_ptr<string> ipamPoolName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateIpamPoolRequest() {}

  explicit UpdateIpamPoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationDefaultCidrMask) {
      res["AllocationDefaultCidrMask"] = boost::any(*allocationDefaultCidrMask);
    }
    if (allocationMaxCidrMask) {
      res["AllocationMaxCidrMask"] = boost::any(*allocationMaxCidrMask);
    }
    if (allocationMinCidrMask) {
      res["AllocationMinCidrMask"] = boost::any(*allocationMinCidrMask);
    }
    if (autoImport) {
      res["AutoImport"] = boost::any(*autoImport);
    }
    if (clearAllocationDefaultCidrMask) {
      res["ClearAllocationDefaultCidrMask"] = boost::any(*clearAllocationDefaultCidrMask);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamPoolDescription) {
      res["IpamPoolDescription"] = boost::any(*ipamPoolDescription);
    }
    if (ipamPoolId) {
      res["IpamPoolId"] = boost::any(*ipamPoolId);
    }
    if (ipamPoolName) {
      res["IpamPoolName"] = boost::any(*ipamPoolName);
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
    if (m.find("AllocationDefaultCidrMask") != m.end() && !m["AllocationDefaultCidrMask"].empty()) {
      allocationDefaultCidrMask = make_shared<long>(boost::any_cast<long>(m["AllocationDefaultCidrMask"]));
    }
    if (m.find("AllocationMaxCidrMask") != m.end() && !m["AllocationMaxCidrMask"].empty()) {
      allocationMaxCidrMask = make_shared<long>(boost::any_cast<long>(m["AllocationMaxCidrMask"]));
    }
    if (m.find("AllocationMinCidrMask") != m.end() && !m["AllocationMinCidrMask"].empty()) {
      allocationMinCidrMask = make_shared<long>(boost::any_cast<long>(m["AllocationMinCidrMask"]));
    }
    if (m.find("AutoImport") != m.end() && !m["AutoImport"].empty()) {
      autoImport = make_shared<bool>(boost::any_cast<bool>(m["AutoImport"]));
    }
    if (m.find("ClearAllocationDefaultCidrMask") != m.end() && !m["ClearAllocationDefaultCidrMask"].empty()) {
      clearAllocationDefaultCidrMask = make_shared<bool>(boost::any_cast<bool>(m["ClearAllocationDefaultCidrMask"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamPoolDescription") != m.end() && !m["IpamPoolDescription"].empty()) {
      ipamPoolDescription = make_shared<string>(boost::any_cast<string>(m["IpamPoolDescription"]));
    }
    if (m.find("IpamPoolId") != m.end() && !m["IpamPoolId"].empty()) {
      ipamPoolId = make_shared<string>(boost::any_cast<string>(m["IpamPoolId"]));
    }
    if (m.find("IpamPoolName") != m.end() && !m["IpamPoolName"].empty()) {
      ipamPoolName = make_shared<string>(boost::any_cast<string>(m["IpamPoolName"]));
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


  virtual ~UpdateIpamPoolRequest() = default;
};
class UpdateIpamPoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateIpamPoolResponseBody() {}

  explicit UpdateIpamPoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateIpamPoolResponseBody() = default;
};
class UpdateIpamPoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateIpamPoolResponseBody> body{};

  UpdateIpamPoolResponse() {}

  explicit UpdateIpamPoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIpamPoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIpamPoolResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIpamPoolResponse() = default;
};
class UpdateIpamScopeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ipamScopeDescription{};
  shared_ptr<string> ipamScopeId{};
  shared_ptr<string> ipamScopeName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateIpamScopeRequest() {}

  explicit UpdateIpamScopeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ipamScopeDescription) {
      res["IpamScopeDescription"] = boost::any(*ipamScopeDescription);
    }
    if (ipamScopeId) {
      res["IpamScopeId"] = boost::any(*ipamScopeId);
    }
    if (ipamScopeName) {
      res["IpamScopeName"] = boost::any(*ipamScopeName);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IpamScopeDescription") != m.end() && !m["IpamScopeDescription"].empty()) {
      ipamScopeDescription = make_shared<string>(boost::any_cast<string>(m["IpamScopeDescription"]));
    }
    if (m.find("IpamScopeId") != m.end() && !m["IpamScopeId"].empty()) {
      ipamScopeId = make_shared<string>(boost::any_cast<string>(m["IpamScopeId"]));
    }
    if (m.find("IpamScopeName") != m.end() && !m["IpamScopeName"].empty()) {
      ipamScopeName = make_shared<string>(boost::any_cast<string>(m["IpamScopeName"]));
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


  virtual ~UpdateIpamScopeRequest() = default;
};
class UpdateIpamScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateIpamScopeResponseBody() {}

  explicit UpdateIpamScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateIpamScopeResponseBody() = default;
};
class UpdateIpamScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateIpamScopeResponseBody> body{};

  UpdateIpamScopeResponse() {}

  explicit UpdateIpamScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIpamScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIpamScopeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIpamScopeResponse() = default;
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
  AddIpamPoolCidrResponse addIpamPoolCidrWithOptions(shared_ptr<AddIpamPoolCidrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddIpamPoolCidrResponse addIpamPoolCidr(shared_ptr<AddIpamPoolCidrRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateIpamResponse createIpamWithOptions(shared_ptr<CreateIpamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIpamResponse createIpam(shared_ptr<CreateIpamRequest> request);
  CreateIpamPoolResponse createIpamPoolWithOptions(shared_ptr<CreateIpamPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIpamPoolResponse createIpamPool(shared_ptr<CreateIpamPoolRequest> request);
  CreateIpamPoolAllocationResponse createIpamPoolAllocationWithOptions(shared_ptr<CreateIpamPoolAllocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIpamPoolAllocationResponse createIpamPoolAllocation(shared_ptr<CreateIpamPoolAllocationRequest> request);
  CreateIpamScopeResponse createIpamScopeWithOptions(shared_ptr<CreateIpamScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIpamScopeResponse createIpamScope(shared_ptr<CreateIpamScopeRequest> request);
  DeleteIpamResponse deleteIpamWithOptions(shared_ptr<DeleteIpamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIpamResponse deleteIpam(shared_ptr<DeleteIpamRequest> request);
  DeleteIpamPoolResponse deleteIpamPoolWithOptions(shared_ptr<DeleteIpamPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIpamPoolResponse deleteIpamPool(shared_ptr<DeleteIpamPoolRequest> request);
  DeleteIpamPoolAllocationResponse deleteIpamPoolAllocationWithOptions(shared_ptr<DeleteIpamPoolAllocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIpamPoolAllocationResponse deleteIpamPoolAllocation(shared_ptr<DeleteIpamPoolAllocationRequest> request);
  DeleteIpamPoolCidrResponse deleteIpamPoolCidrWithOptions(shared_ptr<DeleteIpamPoolCidrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIpamPoolCidrResponse deleteIpamPoolCidr(shared_ptr<DeleteIpamPoolCidrRequest> request);
  DeleteIpamScopeResponse deleteIpamScopeWithOptions(shared_ptr<DeleteIpamScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIpamScopeResponse deleteIpamScope(shared_ptr<DeleteIpamScopeRequest> request);
  GetVpcIpamServiceStatusResponse getVpcIpamServiceStatusWithOptions(shared_ptr<GetVpcIpamServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVpcIpamServiceStatusResponse getVpcIpamServiceStatus(shared_ptr<GetVpcIpamServiceStatusRequest> request);
  ListIpamPoolAllocationsResponse listIpamPoolAllocationsWithOptions(shared_ptr<ListIpamPoolAllocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIpamPoolAllocationsResponse listIpamPoolAllocations(shared_ptr<ListIpamPoolAllocationsRequest> request);
  ListIpamPoolCidrsResponse listIpamPoolCidrsWithOptions(shared_ptr<ListIpamPoolCidrsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIpamPoolCidrsResponse listIpamPoolCidrs(shared_ptr<ListIpamPoolCidrsRequest> request);
  ListIpamPoolsResponse listIpamPoolsWithOptions(shared_ptr<ListIpamPoolsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIpamPoolsResponse listIpamPools(shared_ptr<ListIpamPoolsRequest> request);
  ListIpamResourceCidrsResponse listIpamResourceCidrsWithOptions(shared_ptr<ListIpamResourceCidrsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIpamResourceCidrsResponse listIpamResourceCidrs(shared_ptr<ListIpamResourceCidrsRequest> request);
  ListIpamScopesResponse listIpamScopesWithOptions(shared_ptr<ListIpamScopesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIpamScopesResponse listIpamScopes(shared_ptr<ListIpamScopesRequest> request);
  ListIpamsResponse listIpamsWithOptions(shared_ptr<ListIpamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIpamsResponse listIpams(shared_ptr<ListIpamsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  OpenVpcIpamServiceResponse openVpcIpamServiceWithOptions(shared_ptr<OpenVpcIpamServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenVpcIpamServiceResponse openVpcIpamService(shared_ptr<OpenVpcIpamServiceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateIpamResponse updateIpamWithOptions(shared_ptr<UpdateIpamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIpamResponse updateIpam(shared_ptr<UpdateIpamRequest> request);
  UpdateIpamPoolResponse updateIpamPoolWithOptions(shared_ptr<UpdateIpamPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIpamPoolResponse updateIpamPool(shared_ptr<UpdateIpamPoolRequest> request);
  UpdateIpamScopeResponse updateIpamScopeWithOptions(shared_ptr<UpdateIpamScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIpamScopeResponse updateIpamScope(shared_ptr<UpdateIpamScopeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_VpcIpam20230228

#endif
