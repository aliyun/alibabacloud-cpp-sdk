// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ECI20180808_H_
#define ALIBABACLOUD_ECI20180808_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eci20180808 {
class CommitContainerRequestAcrRegistryInfo : public Darabonba::Model {
public:
  shared_ptr<string> arnService{};
  shared_ptr<string> arnUser{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  CommitContainerRequestAcrRegistryInfo() {}

  explicit CommitContainerRequestAcrRegistryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arnService) {
      res["ArnService"] = boost::any(*arnService);
    }
    if (arnUser) {
      res["ArnUser"] = boost::any(*arnUser);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArnService") != m.end() && !m["ArnService"].empty()) {
      arnService = make_shared<string>(boost::any_cast<string>(m["ArnService"]));
    }
    if (m.find("ArnUser") != m.end() && !m["ArnUser"].empty()) {
      arnUser = make_shared<string>(boost::any_cast<string>(m["ArnUser"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CommitContainerRequestAcrRegistryInfo() = default;
};
class CommitContainerRequestArn : public Darabonba::Model {
public:
  shared_ptr<string> roleArn{};
  shared_ptr<string> roleType{};

  CommitContainerRequestArn() {}

  explicit CommitContainerRequestArn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~CommitContainerRequestArn() = default;
};
class CommitContainerRequestImage : public Darabonba::Model {
public:
  shared_ptr<string> author{};
  shared_ptr<string> message{};
  shared_ptr<string> repository{};
  shared_ptr<string> tag{};

  CommitContainerRequestImage() {}

  explicit CommitContainerRequestImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (author) {
      res["Author"] = boost::any(*author);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Author") != m.end() && !m["Author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["Author"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~CommitContainerRequestImage() = default;
};
class CommitContainerRequest : public Darabonba::Model {
public:
  shared_ptr<CommitContainerRequestAcrRegistryInfo> acrRegistryInfo{};
  shared_ptr<CommitContainerRequestArn> arn{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> containerName{};
  shared_ptr<CommitContainerRequestImage> image{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CommitContainerRequest() {}

  explicit CommitContainerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acrRegistryInfo) {
      res["AcrRegistryInfo"] = acrRegistryInfo ? boost::any(acrRegistryInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (arn) {
      res["Arn"] = arn ? boost::any(arn->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (image) {
      res["Image"] = image ? boost::any(image->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AcrRegistryInfo") != m.end() && !m["AcrRegistryInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AcrRegistryInfo"].type()) {
        CommitContainerRequestAcrRegistryInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AcrRegistryInfo"]));
        acrRegistryInfo = make_shared<CommitContainerRequestAcrRegistryInfo>(model1);
      }
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      if (typeid(map<string, boost::any>) == m["Arn"].type()) {
        CommitContainerRequestArn model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Arn"]));
        arn = make_shared<CommitContainerRequestArn>(model1);
      }
    }
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      if (typeid(map<string, boost::any>) == m["Image"].type()) {
        CommitContainerRequestImage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Image"]));
        image = make_shared<CommitContainerRequestImage>(model1);
      }
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


  virtual ~CommitContainerRequest() = default;
};
class CommitContainerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CommitContainerResponseBody() {}

  explicit CommitContainerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CommitContainerResponseBody() = default;
};
class CommitContainerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CommitContainerResponseBody> body{};

  CommitContainerResponse() {}

  explicit CommitContainerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CommitContainerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CommitContainerResponseBody>(model1);
      }
    }
  }


  virtual ~CommitContainerResponse() = default;
};
class CopyDataCacheRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CopyDataCacheRequestTag() {}

  explicit CopyDataCacheRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CopyDataCacheRequestTag() = default;
};
class CopyDataCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataCacheId{};
  shared_ptr<string> destinationRegionId{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> path{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> retentionDays{};
  shared_ptr<vector<CopyDataCacheRequestTag>> tag{};

  CopyDataCacheRequest() {}

  explicit CopyDataCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataCacheId) {
      res["DataCacheId"] = boost::any(*dataCacheId);
    }
    if (destinationRegionId) {
      res["DestinationRegionId"] = boost::any(*destinationRegionId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
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
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
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
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataCacheId") != m.end() && !m["DataCacheId"].empty()) {
      dataCacheId = make_shared<string>(boost::any_cast<string>(m["DataCacheId"]));
    }
    if (m.find("DestinationRegionId") != m.end() && !m["DestinationRegionId"].empty()) {
      destinationRegionId = make_shared<string>(boost::any_cast<string>(m["DestinationRegionId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
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
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CopyDataCacheRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CopyDataCacheRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CopyDataCacheRequestTag>>(expect1);
      }
    }
  }


  virtual ~CopyDataCacheRequest() = default;
};
class CopyDataCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataCacheId{};
  shared_ptr<string> requestId{};

  CopyDataCacheResponseBody() {}

  explicit CopyDataCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCacheId) {
      res["DataCacheId"] = boost::any(*dataCacheId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCacheId") != m.end() && !m["DataCacheId"].empty()) {
      dataCacheId = make_shared<string>(boost::any_cast<string>(m["DataCacheId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CopyDataCacheResponseBody() = default;
};
class CopyDataCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CopyDataCacheResponseBody> body{};

  CopyDataCacheResponse() {}

  explicit CopyDataCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CopyDataCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CopyDataCacheResponseBody>(model1);
      }
    }
  }


  virtual ~CopyDataCacheResponse() = default;
};
class CreateContainerGroupRequestDnsConfigOption : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateContainerGroupRequestDnsConfigOption() {}

  explicit CreateContainerGroupRequestDnsConfigOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateContainerGroupRequestDnsConfigOption() = default;
};
class CreateContainerGroupRequestDnsConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> nameServer{};
  shared_ptr<vector<CreateContainerGroupRequestDnsConfigOption>> option{};
  shared_ptr<vector<string>> search{};

  CreateContainerGroupRequestDnsConfig() {}

  explicit CreateContainerGroupRequestDnsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nameServer) {
      res["NameServer"] = boost::any(*nameServer);
    }
    if (option) {
      vector<boost::any> temp1;
      for(auto item1:*option){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Option"] = boost::any(temp1);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NameServer") != m.end() && !m["NameServer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NameServer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NameServer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nameServer = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      if (typeid(vector<boost::any>) == m["Option"].type()) {
        vector<CreateContainerGroupRequestDnsConfigOption> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Option"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestDnsConfigOption model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        option = make_shared<vector<CreateContainerGroupRequestDnsConfigOption>>(expect1);
      }
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Search"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Search"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      search = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateContainerGroupRequestDnsConfig() = default;
};
class CreateContainerGroupRequestHostSecurityContextSysctl : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateContainerGroupRequestHostSecurityContextSysctl() {}

  explicit CreateContainerGroupRequestHostSecurityContextSysctl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateContainerGroupRequestHostSecurityContextSysctl() = default;
};
class CreateContainerGroupRequestHostSecurityContext : public Darabonba::Model {
public:
  shared_ptr<vector<CreateContainerGroupRequestHostSecurityContextSysctl>> sysctl{};

  CreateContainerGroupRequestHostSecurityContext() {}

  explicit CreateContainerGroupRequestHostSecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sysctl) {
      vector<boost::any> temp1;
      for(auto item1:*sysctl){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sysctl"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sysctl") != m.end() && !m["Sysctl"].empty()) {
      if (typeid(vector<boost::any>) == m["Sysctl"].type()) {
        vector<CreateContainerGroupRequestHostSecurityContextSysctl> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sysctl"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestHostSecurityContextSysctl model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sysctl = make_shared<vector<CreateContainerGroupRequestHostSecurityContextSysctl>>(expect1);
      }
    }
  }


  virtual ~CreateContainerGroupRequestHostSecurityContext() = default;
};
class CreateContainerGroupRequestSecurityContextSysctl : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateContainerGroupRequestSecurityContextSysctl() {}

  explicit CreateContainerGroupRequestSecurityContextSysctl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateContainerGroupRequestSecurityContextSysctl() = default;
};
class CreateContainerGroupRequestSecurityContext : public Darabonba::Model {
public:
  shared_ptr<vector<CreateContainerGroupRequestSecurityContextSysctl>> sysctl{};

  CreateContainerGroupRequestSecurityContext() {}

  explicit CreateContainerGroupRequestSecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sysctl) {
      vector<boost::any> temp1;
      for(auto item1:*sysctl){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sysctl"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sysctl") != m.end() && !m["Sysctl"].empty()) {
      if (typeid(vector<boost::any>) == m["Sysctl"].type()) {
        vector<CreateContainerGroupRequestSecurityContextSysctl> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sysctl"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestSecurityContextSysctl model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sysctl = make_shared<vector<CreateContainerGroupRequestSecurityContextSysctl>>(expect1);
      }
    }
  }


  virtual ~CreateContainerGroupRequestSecurityContext() = default;
};
class CreateContainerGroupRequestAcrRegistryInfo : public Darabonba::Model {
public:
  shared_ptr<string> arnService{};
  shared_ptr<string> arnUser{};
  shared_ptr<vector<string>> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionId{};

  CreateContainerGroupRequestAcrRegistryInfo() {}

  explicit CreateContainerGroupRequestAcrRegistryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arnService) {
      res["ArnService"] = boost::any(*arnService);
    }
    if (arnUser) {
      res["ArnUser"] = boost::any(*arnUser);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArnService") != m.end() && !m["ArnService"].empty()) {
      arnService = make_shared<string>(boost::any_cast<string>(m["ArnService"]));
    }
    if (m.find("ArnUser") != m.end() && !m["ArnUser"].empty()) {
      arnUser = make_shared<string>(boost::any_cast<string>(m["ArnUser"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Domain"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domain = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateContainerGroupRequestAcrRegistryInfo() = default;
};
class CreateContainerGroupRequestContainerLivenessProbeExec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> command{};

  CreateContainerGroupRequestContainerLivenessProbeExec() {}

  explicit CreateContainerGroupRequestContainerLivenessProbeExec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateContainerGroupRequestContainerLivenessProbeExec() = default;
};
class CreateContainerGroupRequestContainerLivenessProbeHttpGet : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<long> port{};
  shared_ptr<string> scheme{};

  CreateContainerGroupRequestContainerLivenessProbeHttpGet() {}

  explicit CreateContainerGroupRequestContainerLivenessProbeHttpGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerLivenessProbeHttpGet() = default;
};
class CreateContainerGroupRequestContainerLivenessProbeTcpSocket : public Darabonba::Model {
public:
  shared_ptr<long> port{};

  CreateContainerGroupRequestContainerLivenessProbeTcpSocket() {}

  explicit CreateContainerGroupRequestContainerLivenessProbeTcpSocket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerLivenessProbeTcpSocket() = default;
};
class CreateContainerGroupRequestContainerLivenessProbe : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestContainerLivenessProbeExec> exec{};
  shared_ptr<long> failureThreshold{};
  shared_ptr<CreateContainerGroupRequestContainerLivenessProbeHttpGet> httpGet{};
  shared_ptr<long> initialDelaySeconds{};
  shared_ptr<long> periodSeconds{};
  shared_ptr<long> successThreshold{};
  shared_ptr<CreateContainerGroupRequestContainerLivenessProbeTcpSocket> tcpSocket{};
  shared_ptr<long> timeoutSeconds{};

  CreateContainerGroupRequestContainerLivenessProbe() {}

  explicit CreateContainerGroupRequestContainerLivenessProbe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exec) {
      res["Exec"] = exec ? boost::any(exec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (failureThreshold) {
      res["FailureThreshold"] = boost::any(*failureThreshold);
    }
    if (httpGet) {
      res["HttpGet"] = httpGet ? boost::any(httpGet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initialDelaySeconds) {
      res["InitialDelaySeconds"] = boost::any(*initialDelaySeconds);
    }
    if (periodSeconds) {
      res["PeriodSeconds"] = boost::any(*periodSeconds);
    }
    if (successThreshold) {
      res["SuccessThreshold"] = boost::any(*successThreshold);
    }
    if (tcpSocket) {
      res["TcpSocket"] = tcpSocket ? boost::any(tcpSocket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeoutSeconds) {
      res["TimeoutSeconds"] = boost::any(*timeoutSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exec") != m.end() && !m["Exec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exec"].type()) {
        CreateContainerGroupRequestContainerLivenessProbeExec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exec"]));
        exec = make_shared<CreateContainerGroupRequestContainerLivenessProbeExec>(model1);
      }
    }
    if (m.find("FailureThreshold") != m.end() && !m["FailureThreshold"].empty()) {
      failureThreshold = make_shared<long>(boost::any_cast<long>(m["FailureThreshold"]));
    }
    if (m.find("HttpGet") != m.end() && !m["HttpGet"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpGet"].type()) {
        CreateContainerGroupRequestContainerLivenessProbeHttpGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpGet"]));
        httpGet = make_shared<CreateContainerGroupRequestContainerLivenessProbeHttpGet>(model1);
      }
    }
    if (m.find("InitialDelaySeconds") != m.end() && !m["InitialDelaySeconds"].empty()) {
      initialDelaySeconds = make_shared<long>(boost::any_cast<long>(m["InitialDelaySeconds"]));
    }
    if (m.find("PeriodSeconds") != m.end() && !m["PeriodSeconds"].empty()) {
      periodSeconds = make_shared<long>(boost::any_cast<long>(m["PeriodSeconds"]));
    }
    if (m.find("SuccessThreshold") != m.end() && !m["SuccessThreshold"].empty()) {
      successThreshold = make_shared<long>(boost::any_cast<long>(m["SuccessThreshold"]));
    }
    if (m.find("TcpSocket") != m.end() && !m["TcpSocket"].empty()) {
      if (typeid(map<string, boost::any>) == m["TcpSocket"].type()) {
        CreateContainerGroupRequestContainerLivenessProbeTcpSocket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TcpSocket"]));
        tcpSocket = make_shared<CreateContainerGroupRequestContainerLivenessProbeTcpSocket>(model1);
      }
    }
    if (m.find("TimeoutSeconds") != m.end() && !m["TimeoutSeconds"].empty()) {
      timeoutSeconds = make_shared<long>(boost::any_cast<long>(m["TimeoutSeconds"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerLivenessProbe() = default;
};
class CreateContainerGroupRequestContainerReadinessProbeExec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> command{};

  CreateContainerGroupRequestContainerReadinessProbeExec() {}

  explicit CreateContainerGroupRequestContainerReadinessProbeExec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateContainerGroupRequestContainerReadinessProbeExec() = default;
};
class CreateContainerGroupRequestContainerReadinessProbeHttpGet : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<long> port{};
  shared_ptr<string> scheme{};

  CreateContainerGroupRequestContainerReadinessProbeHttpGet() {}

  explicit CreateContainerGroupRequestContainerReadinessProbeHttpGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerReadinessProbeHttpGet() = default;
};
class CreateContainerGroupRequestContainerReadinessProbeTcpSocket : public Darabonba::Model {
public:
  shared_ptr<long> port{};

  CreateContainerGroupRequestContainerReadinessProbeTcpSocket() {}

  explicit CreateContainerGroupRequestContainerReadinessProbeTcpSocket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerReadinessProbeTcpSocket() = default;
};
class CreateContainerGroupRequestContainerReadinessProbe : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestContainerReadinessProbeExec> exec{};
  shared_ptr<long> failureThreshold{};
  shared_ptr<CreateContainerGroupRequestContainerReadinessProbeHttpGet> httpGet{};
  shared_ptr<long> initialDelaySeconds{};
  shared_ptr<long> periodSeconds{};
  shared_ptr<long> successThreshold{};
  shared_ptr<CreateContainerGroupRequestContainerReadinessProbeTcpSocket> tcpSocket{};
  shared_ptr<long> timeoutSeconds{};

  CreateContainerGroupRequestContainerReadinessProbe() {}

  explicit CreateContainerGroupRequestContainerReadinessProbe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exec) {
      res["Exec"] = exec ? boost::any(exec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (failureThreshold) {
      res["FailureThreshold"] = boost::any(*failureThreshold);
    }
    if (httpGet) {
      res["HttpGet"] = httpGet ? boost::any(httpGet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initialDelaySeconds) {
      res["InitialDelaySeconds"] = boost::any(*initialDelaySeconds);
    }
    if (periodSeconds) {
      res["PeriodSeconds"] = boost::any(*periodSeconds);
    }
    if (successThreshold) {
      res["SuccessThreshold"] = boost::any(*successThreshold);
    }
    if (tcpSocket) {
      res["TcpSocket"] = tcpSocket ? boost::any(tcpSocket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeoutSeconds) {
      res["TimeoutSeconds"] = boost::any(*timeoutSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exec") != m.end() && !m["Exec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exec"].type()) {
        CreateContainerGroupRequestContainerReadinessProbeExec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exec"]));
        exec = make_shared<CreateContainerGroupRequestContainerReadinessProbeExec>(model1);
      }
    }
    if (m.find("FailureThreshold") != m.end() && !m["FailureThreshold"].empty()) {
      failureThreshold = make_shared<long>(boost::any_cast<long>(m["FailureThreshold"]));
    }
    if (m.find("HttpGet") != m.end() && !m["HttpGet"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpGet"].type()) {
        CreateContainerGroupRequestContainerReadinessProbeHttpGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpGet"]));
        httpGet = make_shared<CreateContainerGroupRequestContainerReadinessProbeHttpGet>(model1);
      }
    }
    if (m.find("InitialDelaySeconds") != m.end() && !m["InitialDelaySeconds"].empty()) {
      initialDelaySeconds = make_shared<long>(boost::any_cast<long>(m["InitialDelaySeconds"]));
    }
    if (m.find("PeriodSeconds") != m.end() && !m["PeriodSeconds"].empty()) {
      periodSeconds = make_shared<long>(boost::any_cast<long>(m["PeriodSeconds"]));
    }
    if (m.find("SuccessThreshold") != m.end() && !m["SuccessThreshold"].empty()) {
      successThreshold = make_shared<long>(boost::any_cast<long>(m["SuccessThreshold"]));
    }
    if (m.find("TcpSocket") != m.end() && !m["TcpSocket"].empty()) {
      if (typeid(map<string, boost::any>) == m["TcpSocket"].type()) {
        CreateContainerGroupRequestContainerReadinessProbeTcpSocket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TcpSocket"]));
        tcpSocket = make_shared<CreateContainerGroupRequestContainerReadinessProbeTcpSocket>(model1);
      }
    }
    if (m.find("TimeoutSeconds") != m.end() && !m["TimeoutSeconds"].empty()) {
      timeoutSeconds = make_shared<long>(boost::any_cast<long>(m["TimeoutSeconds"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerReadinessProbe() = default;
};
class CreateContainerGroupRequestContainerSecurityContextCapability : public Darabonba::Model {
public:
  shared_ptr<vector<string>> add{};

  CreateContainerGroupRequestContainerSecurityContextCapability() {}

  explicit CreateContainerGroupRequestContainerSecurityContextCapability(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (add) {
      res["Add"] = boost::any(*add);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Add") != m.end() && !m["Add"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Add"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Add"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      add = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateContainerGroupRequestContainerSecurityContextCapability() = default;
};
class CreateContainerGroupRequestContainerSecurityContext : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestContainerSecurityContextCapability> capability{};
  shared_ptr<bool> readOnlyRootFilesystem{};
  shared_ptr<long> runAsUser{};

  CreateContainerGroupRequestContainerSecurityContext() {}

  explicit CreateContainerGroupRequestContainerSecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capability) {
      res["Capability"] = capability ? boost::any(capability->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readOnlyRootFilesystem) {
      res["ReadOnlyRootFilesystem"] = boost::any(*readOnlyRootFilesystem);
    }
    if (runAsUser) {
      res["RunAsUser"] = boost::any(*runAsUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capability") != m.end() && !m["Capability"].empty()) {
      if (typeid(map<string, boost::any>) == m["Capability"].type()) {
        CreateContainerGroupRequestContainerSecurityContextCapability model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Capability"]));
        capability = make_shared<CreateContainerGroupRequestContainerSecurityContextCapability>(model1);
      }
    }
    if (m.find("ReadOnlyRootFilesystem") != m.end() && !m["ReadOnlyRootFilesystem"].empty()) {
      readOnlyRootFilesystem = make_shared<bool>(boost::any_cast<bool>(m["ReadOnlyRootFilesystem"]));
    }
    if (m.find("RunAsUser") != m.end() && !m["RunAsUser"].empty()) {
      runAsUser = make_shared<long>(boost::any_cast<long>(m["RunAsUser"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerSecurityContext() = default;
};
class CreateContainerGroupRequestContainerEnvironmentVarFieldRef : public Darabonba::Model {
public:
  shared_ptr<string> fieldPath{};

  CreateContainerGroupRequestContainerEnvironmentVarFieldRef() {}

  explicit CreateContainerGroupRequestContainerEnvironmentVarFieldRef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldPath) {
      res["FieldPath"] = boost::any(*fieldPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldPath") != m.end() && !m["FieldPath"].empty()) {
      fieldPath = make_shared<string>(boost::any_cast<string>(m["FieldPath"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerEnvironmentVarFieldRef() = default;
};
class CreateContainerGroupRequestContainerEnvironmentVar : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestContainerEnvironmentVarFieldRef> fieldRef{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateContainerGroupRequestContainerEnvironmentVar() {}

  explicit CreateContainerGroupRequestContainerEnvironmentVar(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldRef) {
      res["FieldRef"] = fieldRef ? boost::any(fieldRef->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldRef") != m.end() && !m["FieldRef"].empty()) {
      if (typeid(map<string, boost::any>) == m["FieldRef"].type()) {
        CreateContainerGroupRequestContainerEnvironmentVarFieldRef model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FieldRef"]));
        fieldRef = make_shared<CreateContainerGroupRequestContainerEnvironmentVarFieldRef>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerEnvironmentVar() = default;
};
class CreateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeader : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeader() {}

  explicit CreateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeader() = default;
};
class CreateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader() {}

  explicit CreateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader() = default;
};
class CreateContainerGroupRequestContainerPort : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  CreateContainerGroupRequestContainerPort() {}

  explicit CreateContainerGroupRequestContainerPort(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerPort() = default;
};
class CreateContainerGroupRequestContainerVolumeMount : public Darabonba::Model {
public:
  shared_ptr<string> mountPath{};
  shared_ptr<string> mountPropagation{};
  shared_ptr<string> name{};
  shared_ptr<bool> readOnly{};
  shared_ptr<string> subPath{};

  CreateContainerGroupRequestContainerVolumeMount() {}

  explicit CreateContainerGroupRequestContainerVolumeMount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (mountPropagation) {
      res["MountPropagation"] = boost::any(*mountPropagation);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (readOnly) {
      res["ReadOnly"] = boost::any(*readOnly);
    }
    if (subPath) {
      res["SubPath"] = boost::any(*subPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("MountPropagation") != m.end() && !m["MountPropagation"].empty()) {
      mountPropagation = make_shared<string>(boost::any_cast<string>(m["MountPropagation"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ReadOnly") != m.end() && !m["ReadOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["ReadOnly"]));
    }
    if (m.find("SubPath") != m.end() && !m["SubPath"].empty()) {
      subPath = make_shared<string>(boost::any_cast<string>(m["SubPath"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainerVolumeMount() = default;
};
class CreateContainerGroupRequestContainer : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestContainerLivenessProbe> livenessProbe{};
  shared_ptr<CreateContainerGroupRequestContainerReadinessProbe> readinessProbe{};
  shared_ptr<CreateContainerGroupRequestContainerSecurityContext> securityContext{};
  shared_ptr<vector<string>> arg{};
  shared_ptr<vector<string>> command{};
  shared_ptr<double> cpu{};
  shared_ptr<vector<CreateContainerGroupRequestContainerEnvironmentVar>> environmentVar{};
  shared_ptr<bool> environmentVarHide{};
  shared_ptr<long> gpu{};
  shared_ptr<string> image{};
  shared_ptr<string> imagePullPolicy{};
  shared_ptr<vector<string>> lifecyclePostStartHandlerExec{};
  shared_ptr<string> lifecyclePostStartHandlerHttpGetHost{};
  shared_ptr<vector<CreateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeader>> lifecyclePostStartHandlerHttpGetHttpHeader{};
  shared_ptr<string> lifecyclePostStartHandlerHttpGetPath{};
  shared_ptr<long> lifecyclePostStartHandlerHttpGetPort{};
  shared_ptr<string> lifecyclePostStartHandlerHttpGetScheme{};
  shared_ptr<string> lifecyclePostStartHandlerTcpSocketHost{};
  shared_ptr<long> lifecyclePostStartHandlerTcpSocketPort{};
  shared_ptr<vector<string>> lifecyclePreStopHandlerExec{};
  shared_ptr<string> lifecyclePreStopHandlerHttpGetHost{};
  shared_ptr<vector<CreateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader>> lifecyclePreStopHandlerHttpGetHttpHeader{};
  shared_ptr<string> lifecyclePreStopHandlerHttpGetPath{};
  shared_ptr<long> lifecyclePreStopHandlerHttpGetPort{};
  shared_ptr<string> lifecyclePreStopHandlerHttpGetScheme{};
  shared_ptr<string> lifecyclePreStopHandlerTcpSocketHost{};
  shared_ptr<long> lifecyclePreStopHandlerTcpSocketPort{};
  shared_ptr<double> memory{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateContainerGroupRequestContainerPort>> port{};
  shared_ptr<bool> securityContextPrivileged{};
  shared_ptr<long> securityContextRunAsGroup{};
  shared_ptr<bool> securityContextRunAsNonRoot{};
  shared_ptr<bool> stdin{};
  shared_ptr<bool> stdinOnce{};
  shared_ptr<string> terminationMessagePath{};
  shared_ptr<string> terminationMessagePolicy{};
  shared_ptr<bool> tty{};
  shared_ptr<vector<CreateContainerGroupRequestContainerVolumeMount>> volumeMount{};
  shared_ptr<string> workingDir{};

  CreateContainerGroupRequestContainer() {}

  explicit CreateContainerGroupRequestContainer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (livenessProbe) {
      res["LivenessProbe"] = livenessProbe ? boost::any(livenessProbe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readinessProbe) {
      res["ReadinessProbe"] = readinessProbe ? boost::any(readinessProbe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityContext) {
      res["SecurityContext"] = securityContext ? boost::any(securityContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (environmentVar) {
      vector<boost::any> temp1;
      for(auto item1:*environmentVar){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnvironmentVar"] = boost::any(temp1);
    }
    if (environmentVarHide) {
      res["EnvironmentVarHide"] = boost::any(*environmentVarHide);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imagePullPolicy) {
      res["ImagePullPolicy"] = boost::any(*imagePullPolicy);
    }
    if (lifecyclePostStartHandlerExec) {
      res["LifecyclePostStartHandlerExec"] = boost::any(*lifecyclePostStartHandlerExec);
    }
    if (lifecyclePostStartHandlerHttpGetHost) {
      res["LifecyclePostStartHandlerHttpGetHost"] = boost::any(*lifecyclePostStartHandlerHttpGetHost);
    }
    if (lifecyclePostStartHandlerHttpGetHttpHeader) {
      vector<boost::any> temp1;
      for(auto item1:*lifecyclePostStartHandlerHttpGetHttpHeader){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecyclePostStartHandlerHttpGetHttpHeader"] = boost::any(temp1);
    }
    if (lifecyclePostStartHandlerHttpGetPath) {
      res["LifecyclePostStartHandlerHttpGetPath"] = boost::any(*lifecyclePostStartHandlerHttpGetPath);
    }
    if (lifecyclePostStartHandlerHttpGetPort) {
      res["LifecyclePostStartHandlerHttpGetPort"] = boost::any(*lifecyclePostStartHandlerHttpGetPort);
    }
    if (lifecyclePostStartHandlerHttpGetScheme) {
      res["LifecyclePostStartHandlerHttpGetScheme"] = boost::any(*lifecyclePostStartHandlerHttpGetScheme);
    }
    if (lifecyclePostStartHandlerTcpSocketHost) {
      res["LifecyclePostStartHandlerTcpSocketHost"] = boost::any(*lifecyclePostStartHandlerTcpSocketHost);
    }
    if (lifecyclePostStartHandlerTcpSocketPort) {
      res["LifecyclePostStartHandlerTcpSocketPort"] = boost::any(*lifecyclePostStartHandlerTcpSocketPort);
    }
    if (lifecyclePreStopHandlerExec) {
      res["LifecyclePreStopHandlerExec"] = boost::any(*lifecyclePreStopHandlerExec);
    }
    if (lifecyclePreStopHandlerHttpGetHost) {
      res["LifecyclePreStopHandlerHttpGetHost"] = boost::any(*lifecyclePreStopHandlerHttpGetHost);
    }
    if (lifecyclePreStopHandlerHttpGetHttpHeader) {
      vector<boost::any> temp1;
      for(auto item1:*lifecyclePreStopHandlerHttpGetHttpHeader){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecyclePreStopHandlerHttpGetHttpHeader"] = boost::any(temp1);
    }
    if (lifecyclePreStopHandlerHttpGetPath) {
      res["LifecyclePreStopHandlerHttpGetPath"] = boost::any(*lifecyclePreStopHandlerHttpGetPath);
    }
    if (lifecyclePreStopHandlerHttpGetPort) {
      res["LifecyclePreStopHandlerHttpGetPort"] = boost::any(*lifecyclePreStopHandlerHttpGetPort);
    }
    if (lifecyclePreStopHandlerHttpGetScheme) {
      res["LifecyclePreStopHandlerHttpGetScheme"] = boost::any(*lifecyclePreStopHandlerHttpGetScheme);
    }
    if (lifecyclePreStopHandlerTcpSocketHost) {
      res["LifecyclePreStopHandlerTcpSocketHost"] = boost::any(*lifecyclePreStopHandlerTcpSocketHost);
    }
    if (lifecyclePreStopHandlerTcpSocketPort) {
      res["LifecyclePreStopHandlerTcpSocketPort"] = boost::any(*lifecyclePreStopHandlerTcpSocketPort);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (port) {
      vector<boost::any> temp1;
      for(auto item1:*port){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Port"] = boost::any(temp1);
    }
    if (securityContextPrivileged) {
      res["SecurityContextPrivileged"] = boost::any(*securityContextPrivileged);
    }
    if (securityContextRunAsGroup) {
      res["SecurityContextRunAsGroup"] = boost::any(*securityContextRunAsGroup);
    }
    if (securityContextRunAsNonRoot) {
      res["SecurityContextRunAsNonRoot"] = boost::any(*securityContextRunAsNonRoot);
    }
    if (stdin) {
      res["Stdin"] = boost::any(*stdin);
    }
    if (stdinOnce) {
      res["StdinOnce"] = boost::any(*stdinOnce);
    }
    if (terminationMessagePath) {
      res["TerminationMessagePath"] = boost::any(*terminationMessagePath);
    }
    if (terminationMessagePolicy) {
      res["TerminationMessagePolicy"] = boost::any(*terminationMessagePolicy);
    }
    if (tty) {
      res["Tty"] = boost::any(*tty);
    }
    if (volumeMount) {
      vector<boost::any> temp1;
      for(auto item1:*volumeMount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeMount"] = boost::any(temp1);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LivenessProbe") != m.end() && !m["LivenessProbe"].empty()) {
      if (typeid(map<string, boost::any>) == m["LivenessProbe"].type()) {
        CreateContainerGroupRequestContainerLivenessProbe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LivenessProbe"]));
        livenessProbe = make_shared<CreateContainerGroupRequestContainerLivenessProbe>(model1);
      }
    }
    if (m.find("ReadinessProbe") != m.end() && !m["ReadinessProbe"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReadinessProbe"].type()) {
        CreateContainerGroupRequestContainerReadinessProbe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReadinessProbe"]));
        readinessProbe = make_shared<CreateContainerGroupRequestContainerReadinessProbe>(model1);
      }
    }
    if (m.find("SecurityContext") != m.end() && !m["SecurityContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityContext"].type()) {
        CreateContainerGroupRequestContainerSecurityContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityContext"]));
        securityContext = make_shared<CreateContainerGroupRequestContainerSecurityContext>(model1);
      }
    }
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Arg"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Arg"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      arg = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("EnvironmentVar") != m.end() && !m["EnvironmentVar"].empty()) {
      if (typeid(vector<boost::any>) == m["EnvironmentVar"].type()) {
        vector<CreateContainerGroupRequestContainerEnvironmentVar> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnvironmentVar"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestContainerEnvironmentVar model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environmentVar = make_shared<vector<CreateContainerGroupRequestContainerEnvironmentVar>>(expect1);
      }
    }
    if (m.find("EnvironmentVarHide") != m.end() && !m["EnvironmentVarHide"].empty()) {
      environmentVarHide = make_shared<bool>(boost::any_cast<bool>(m["EnvironmentVarHide"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImagePullPolicy") != m.end() && !m["ImagePullPolicy"].empty()) {
      imagePullPolicy = make_shared<string>(boost::any_cast<string>(m["ImagePullPolicy"]));
    }
    if (m.find("LifecyclePostStartHandlerExec") != m.end() && !m["LifecyclePostStartHandlerExec"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LifecyclePostStartHandlerExec"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LifecyclePostStartHandlerExec"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lifecyclePostStartHandlerExec = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LifecyclePostStartHandlerHttpGetHost") != m.end() && !m["LifecyclePostStartHandlerHttpGetHost"].empty()) {
      lifecyclePostStartHandlerHttpGetHost = make_shared<string>(boost::any_cast<string>(m["LifecyclePostStartHandlerHttpGetHost"]));
    }
    if (m.find("LifecyclePostStartHandlerHttpGetHttpHeader") != m.end() && !m["LifecyclePostStartHandlerHttpGetHttpHeader"].empty()) {
      if (typeid(vector<boost::any>) == m["LifecyclePostStartHandlerHttpGetHttpHeader"].type()) {
        vector<CreateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeader> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LifecyclePostStartHandlerHttpGetHttpHeader"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeader model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lifecyclePostStartHandlerHttpGetHttpHeader = make_shared<vector<CreateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeader>>(expect1);
      }
    }
    if (m.find("LifecyclePostStartHandlerHttpGetPath") != m.end() && !m["LifecyclePostStartHandlerHttpGetPath"].empty()) {
      lifecyclePostStartHandlerHttpGetPath = make_shared<string>(boost::any_cast<string>(m["LifecyclePostStartHandlerHttpGetPath"]));
    }
    if (m.find("LifecyclePostStartHandlerHttpGetPort") != m.end() && !m["LifecyclePostStartHandlerHttpGetPort"].empty()) {
      lifecyclePostStartHandlerHttpGetPort = make_shared<long>(boost::any_cast<long>(m["LifecyclePostStartHandlerHttpGetPort"]));
    }
    if (m.find("LifecyclePostStartHandlerHttpGetScheme") != m.end() && !m["LifecyclePostStartHandlerHttpGetScheme"].empty()) {
      lifecyclePostStartHandlerHttpGetScheme = make_shared<string>(boost::any_cast<string>(m["LifecyclePostStartHandlerHttpGetScheme"]));
    }
    if (m.find("LifecyclePostStartHandlerTcpSocketHost") != m.end() && !m["LifecyclePostStartHandlerTcpSocketHost"].empty()) {
      lifecyclePostStartHandlerTcpSocketHost = make_shared<string>(boost::any_cast<string>(m["LifecyclePostStartHandlerTcpSocketHost"]));
    }
    if (m.find("LifecyclePostStartHandlerTcpSocketPort") != m.end() && !m["LifecyclePostStartHandlerTcpSocketPort"].empty()) {
      lifecyclePostStartHandlerTcpSocketPort = make_shared<long>(boost::any_cast<long>(m["LifecyclePostStartHandlerTcpSocketPort"]));
    }
    if (m.find("LifecyclePreStopHandlerExec") != m.end() && !m["LifecyclePreStopHandlerExec"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LifecyclePreStopHandlerExec"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LifecyclePreStopHandlerExec"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lifecyclePreStopHandlerExec = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LifecyclePreStopHandlerHttpGetHost") != m.end() && !m["LifecyclePreStopHandlerHttpGetHost"].empty()) {
      lifecyclePreStopHandlerHttpGetHost = make_shared<string>(boost::any_cast<string>(m["LifecyclePreStopHandlerHttpGetHost"]));
    }
    if (m.find("LifecyclePreStopHandlerHttpGetHttpHeader") != m.end() && !m["LifecyclePreStopHandlerHttpGetHttpHeader"].empty()) {
      if (typeid(vector<boost::any>) == m["LifecyclePreStopHandlerHttpGetHttpHeader"].type()) {
        vector<CreateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LifecyclePreStopHandlerHttpGetHttpHeader"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lifecyclePreStopHandlerHttpGetHttpHeader = make_shared<vector<CreateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader>>(expect1);
      }
    }
    if (m.find("LifecyclePreStopHandlerHttpGetPath") != m.end() && !m["LifecyclePreStopHandlerHttpGetPath"].empty()) {
      lifecyclePreStopHandlerHttpGetPath = make_shared<string>(boost::any_cast<string>(m["LifecyclePreStopHandlerHttpGetPath"]));
    }
    if (m.find("LifecyclePreStopHandlerHttpGetPort") != m.end() && !m["LifecyclePreStopHandlerHttpGetPort"].empty()) {
      lifecyclePreStopHandlerHttpGetPort = make_shared<long>(boost::any_cast<long>(m["LifecyclePreStopHandlerHttpGetPort"]));
    }
    if (m.find("LifecyclePreStopHandlerHttpGetScheme") != m.end() && !m["LifecyclePreStopHandlerHttpGetScheme"].empty()) {
      lifecyclePreStopHandlerHttpGetScheme = make_shared<string>(boost::any_cast<string>(m["LifecyclePreStopHandlerHttpGetScheme"]));
    }
    if (m.find("LifecyclePreStopHandlerTcpSocketHost") != m.end() && !m["LifecyclePreStopHandlerTcpSocketHost"].empty()) {
      lifecyclePreStopHandlerTcpSocketHost = make_shared<string>(boost::any_cast<string>(m["LifecyclePreStopHandlerTcpSocketHost"]));
    }
    if (m.find("LifecyclePreStopHandlerTcpSocketPort") != m.end() && !m["LifecyclePreStopHandlerTcpSocketPort"].empty()) {
      lifecyclePreStopHandlerTcpSocketPort = make_shared<long>(boost::any_cast<long>(m["LifecyclePreStopHandlerTcpSocketPort"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      if (typeid(vector<boost::any>) == m["Port"].type()) {
        vector<CreateContainerGroupRequestContainerPort> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Port"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestContainerPort model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        port = make_shared<vector<CreateContainerGroupRequestContainerPort>>(expect1);
      }
    }
    if (m.find("SecurityContextPrivileged") != m.end() && !m["SecurityContextPrivileged"].empty()) {
      securityContextPrivileged = make_shared<bool>(boost::any_cast<bool>(m["SecurityContextPrivileged"]));
    }
    if (m.find("SecurityContextRunAsGroup") != m.end() && !m["SecurityContextRunAsGroup"].empty()) {
      securityContextRunAsGroup = make_shared<long>(boost::any_cast<long>(m["SecurityContextRunAsGroup"]));
    }
    if (m.find("SecurityContextRunAsNonRoot") != m.end() && !m["SecurityContextRunAsNonRoot"].empty()) {
      securityContextRunAsNonRoot = make_shared<bool>(boost::any_cast<bool>(m["SecurityContextRunAsNonRoot"]));
    }
    if (m.find("Stdin") != m.end() && !m["Stdin"].empty()) {
      stdin = make_shared<bool>(boost::any_cast<bool>(m["Stdin"]));
    }
    if (m.find("StdinOnce") != m.end() && !m["StdinOnce"].empty()) {
      stdinOnce = make_shared<bool>(boost::any_cast<bool>(m["StdinOnce"]));
    }
    if (m.find("TerminationMessagePath") != m.end() && !m["TerminationMessagePath"].empty()) {
      terminationMessagePath = make_shared<string>(boost::any_cast<string>(m["TerminationMessagePath"]));
    }
    if (m.find("TerminationMessagePolicy") != m.end() && !m["TerminationMessagePolicy"].empty()) {
      terminationMessagePolicy = make_shared<string>(boost::any_cast<string>(m["TerminationMessagePolicy"]));
    }
    if (m.find("Tty") != m.end() && !m["Tty"].empty()) {
      tty = make_shared<bool>(boost::any_cast<bool>(m["Tty"]));
    }
    if (m.find("VolumeMount") != m.end() && !m["VolumeMount"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeMount"].type()) {
        vector<CreateContainerGroupRequestContainerVolumeMount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeMount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestContainerVolumeMount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeMount = make_shared<vector<CreateContainerGroupRequestContainerVolumeMount>>(expect1);
      }
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~CreateContainerGroupRequestContainer() = default;
};
class CreateContainerGroupRequestHostAliase : public Darabonba::Model {
public:
  shared_ptr<vector<string>> hostname{};
  shared_ptr<string> ip{};

  CreateContainerGroupRequestHostAliase() {}

  explicit CreateContainerGroupRequestHostAliase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Hostname"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Hostname"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hostname = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~CreateContainerGroupRequestHostAliase() = default;
};
class CreateContainerGroupRequestImageRegistryCredential : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> server{};
  shared_ptr<string> userName{};

  CreateContainerGroupRequestImageRegistryCredential() {}

  explicit CreateContainerGroupRequestImageRegistryCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (server) {
      res["Server"] = boost::any(*server);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Server") != m.end() && !m["Server"].empty()) {
      server = make_shared<string>(boost::any_cast<string>(m["Server"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateContainerGroupRequestImageRegistryCredential() = default;
};
class CreateContainerGroupRequestInitContainerSecurityContextCapability : public Darabonba::Model {
public:
  shared_ptr<vector<string>> add{};

  CreateContainerGroupRequestInitContainerSecurityContextCapability() {}

  explicit CreateContainerGroupRequestInitContainerSecurityContextCapability(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (add) {
      res["Add"] = boost::any(*add);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Add") != m.end() && !m["Add"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Add"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Add"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      add = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateContainerGroupRequestInitContainerSecurityContextCapability() = default;
};
class CreateContainerGroupRequestInitContainerSecurityContext : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestInitContainerSecurityContextCapability> capability{};
  shared_ptr<bool> readOnlyRootFilesystem{};
  shared_ptr<long> runAsUser{};

  CreateContainerGroupRequestInitContainerSecurityContext() {}

  explicit CreateContainerGroupRequestInitContainerSecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capability) {
      res["Capability"] = capability ? boost::any(capability->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readOnlyRootFilesystem) {
      res["ReadOnlyRootFilesystem"] = boost::any(*readOnlyRootFilesystem);
    }
    if (runAsUser) {
      res["RunAsUser"] = boost::any(*runAsUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capability") != m.end() && !m["Capability"].empty()) {
      if (typeid(map<string, boost::any>) == m["Capability"].type()) {
        CreateContainerGroupRequestInitContainerSecurityContextCapability model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Capability"]));
        capability = make_shared<CreateContainerGroupRequestInitContainerSecurityContextCapability>(model1);
      }
    }
    if (m.find("ReadOnlyRootFilesystem") != m.end() && !m["ReadOnlyRootFilesystem"].empty()) {
      readOnlyRootFilesystem = make_shared<bool>(boost::any_cast<bool>(m["ReadOnlyRootFilesystem"]));
    }
    if (m.find("RunAsUser") != m.end() && !m["RunAsUser"].empty()) {
      runAsUser = make_shared<long>(boost::any_cast<long>(m["RunAsUser"]));
    }
  }


  virtual ~CreateContainerGroupRequestInitContainerSecurityContext() = default;
};
class CreateContainerGroupRequestInitContainerEnvironmentVarFieldRef : public Darabonba::Model {
public:
  shared_ptr<string> fieldPath{};

  CreateContainerGroupRequestInitContainerEnvironmentVarFieldRef() {}

  explicit CreateContainerGroupRequestInitContainerEnvironmentVarFieldRef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldPath) {
      res["FieldPath"] = boost::any(*fieldPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldPath") != m.end() && !m["FieldPath"].empty()) {
      fieldPath = make_shared<string>(boost::any_cast<string>(m["FieldPath"]));
    }
  }


  virtual ~CreateContainerGroupRequestInitContainerEnvironmentVarFieldRef() = default;
};
class CreateContainerGroupRequestInitContainerEnvironmentVar : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestInitContainerEnvironmentVarFieldRef> fieldRef{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateContainerGroupRequestInitContainerEnvironmentVar() {}

  explicit CreateContainerGroupRequestInitContainerEnvironmentVar(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldRef) {
      res["FieldRef"] = fieldRef ? boost::any(fieldRef->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldRef") != m.end() && !m["FieldRef"].empty()) {
      if (typeid(map<string, boost::any>) == m["FieldRef"].type()) {
        CreateContainerGroupRequestInitContainerEnvironmentVarFieldRef model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FieldRef"]));
        fieldRef = make_shared<CreateContainerGroupRequestInitContainerEnvironmentVarFieldRef>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateContainerGroupRequestInitContainerEnvironmentVar() = default;
};
class CreateContainerGroupRequestInitContainerPort : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  CreateContainerGroupRequestInitContainerPort() {}

  explicit CreateContainerGroupRequestInitContainerPort(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~CreateContainerGroupRequestInitContainerPort() = default;
};
class CreateContainerGroupRequestInitContainerVolumeMount : public Darabonba::Model {
public:
  shared_ptr<string> mountPath{};
  shared_ptr<string> mountPropagation{};
  shared_ptr<string> name{};
  shared_ptr<bool> readOnly{};
  shared_ptr<string> subPath{};

  CreateContainerGroupRequestInitContainerVolumeMount() {}

  explicit CreateContainerGroupRequestInitContainerVolumeMount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (mountPropagation) {
      res["MountPropagation"] = boost::any(*mountPropagation);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (readOnly) {
      res["ReadOnly"] = boost::any(*readOnly);
    }
    if (subPath) {
      res["SubPath"] = boost::any(*subPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("MountPropagation") != m.end() && !m["MountPropagation"].empty()) {
      mountPropagation = make_shared<string>(boost::any_cast<string>(m["MountPropagation"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ReadOnly") != m.end() && !m["ReadOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["ReadOnly"]));
    }
    if (m.find("SubPath") != m.end() && !m["SubPath"].empty()) {
      subPath = make_shared<string>(boost::any_cast<string>(m["SubPath"]));
    }
  }


  virtual ~CreateContainerGroupRequestInitContainerVolumeMount() = default;
};
class CreateContainerGroupRequestInitContainer : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestInitContainerSecurityContext> securityContext{};
  shared_ptr<vector<string>> arg{};
  shared_ptr<vector<string>> command{};
  shared_ptr<double> cpu{};
  shared_ptr<vector<CreateContainerGroupRequestInitContainerEnvironmentVar>> environmentVar{};
  shared_ptr<long> gpu{};
  shared_ptr<string> image{};
  shared_ptr<string> imagePullPolicy{};
  shared_ptr<double> memory{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateContainerGroupRequestInitContainerPort>> port{};
  shared_ptr<string> terminationMessagePath{};
  shared_ptr<string> terminationMessagePolicy{};
  shared_ptr<vector<CreateContainerGroupRequestInitContainerVolumeMount>> volumeMount{};
  shared_ptr<string> workingDir{};

  CreateContainerGroupRequestInitContainer() {}

  explicit CreateContainerGroupRequestInitContainer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityContext) {
      res["SecurityContext"] = securityContext ? boost::any(securityContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (environmentVar) {
      vector<boost::any> temp1;
      for(auto item1:*environmentVar){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnvironmentVar"] = boost::any(temp1);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imagePullPolicy) {
      res["ImagePullPolicy"] = boost::any(*imagePullPolicy);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (port) {
      vector<boost::any> temp1;
      for(auto item1:*port){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Port"] = boost::any(temp1);
    }
    if (terminationMessagePath) {
      res["TerminationMessagePath"] = boost::any(*terminationMessagePath);
    }
    if (terminationMessagePolicy) {
      res["TerminationMessagePolicy"] = boost::any(*terminationMessagePolicy);
    }
    if (volumeMount) {
      vector<boost::any> temp1;
      for(auto item1:*volumeMount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeMount"] = boost::any(temp1);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityContext") != m.end() && !m["SecurityContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityContext"].type()) {
        CreateContainerGroupRequestInitContainerSecurityContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityContext"]));
        securityContext = make_shared<CreateContainerGroupRequestInitContainerSecurityContext>(model1);
      }
    }
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Arg"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Arg"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      arg = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("EnvironmentVar") != m.end() && !m["EnvironmentVar"].empty()) {
      if (typeid(vector<boost::any>) == m["EnvironmentVar"].type()) {
        vector<CreateContainerGroupRequestInitContainerEnvironmentVar> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnvironmentVar"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestInitContainerEnvironmentVar model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environmentVar = make_shared<vector<CreateContainerGroupRequestInitContainerEnvironmentVar>>(expect1);
      }
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImagePullPolicy") != m.end() && !m["ImagePullPolicy"].empty()) {
      imagePullPolicy = make_shared<string>(boost::any_cast<string>(m["ImagePullPolicy"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      if (typeid(vector<boost::any>) == m["Port"].type()) {
        vector<CreateContainerGroupRequestInitContainerPort> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Port"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestInitContainerPort model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        port = make_shared<vector<CreateContainerGroupRequestInitContainerPort>>(expect1);
      }
    }
    if (m.find("TerminationMessagePath") != m.end() && !m["TerminationMessagePath"].empty()) {
      terminationMessagePath = make_shared<string>(boost::any_cast<string>(m["TerminationMessagePath"]));
    }
    if (m.find("TerminationMessagePolicy") != m.end() && !m["TerminationMessagePolicy"].empty()) {
      terminationMessagePolicy = make_shared<string>(boost::any_cast<string>(m["TerminationMessagePolicy"]));
    }
    if (m.find("VolumeMount") != m.end() && !m["VolumeMount"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeMount"].type()) {
        vector<CreateContainerGroupRequestInitContainerVolumeMount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeMount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestInitContainerVolumeMount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeMount = make_shared<vector<CreateContainerGroupRequestInitContainerVolumeMount>>(expect1);
      }
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~CreateContainerGroupRequestInitContainer() = default;
};
class CreateContainerGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateContainerGroupRequestTag() {}

  explicit CreateContainerGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateContainerGroupRequestTag() = default;
};
class CreateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> mode{};
  shared_ptr<string> path{};

  CreateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath() {}

  explicit CreateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<long>(boost::any_cast<long>(m["Mode"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~CreateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath() = default;
};
class CreateContainerGroupRequestVolumeConfigFileVolume : public Darabonba::Model {
public:
  shared_ptr<vector<CreateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath>> configFileToPath{};
  shared_ptr<long> defaultMode{};

  CreateContainerGroupRequestVolumeConfigFileVolume() {}

  explicit CreateContainerGroupRequestVolumeConfigFileVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileToPath) {
      vector<boost::any> temp1;
      for(auto item1:*configFileToPath){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigFileToPath"] = boost::any(temp1);
    }
    if (defaultMode) {
      res["DefaultMode"] = boost::any(*defaultMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigFileToPath") != m.end() && !m["ConfigFileToPath"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigFileToPath"].type()) {
        vector<CreateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigFileToPath"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configFileToPath = make_shared<vector<CreateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath>>(expect1);
      }
    }
    if (m.find("DefaultMode") != m.end() && !m["DefaultMode"].empty()) {
      defaultMode = make_shared<long>(boost::any_cast<long>(m["DefaultMode"]));
    }
  }


  virtual ~CreateContainerGroupRequestVolumeConfigFileVolume() = default;
};
class CreateContainerGroupRequestVolumeDiskVolume : public Darabonba::Model {
public:
  shared_ptr<string> diskId{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> fsType{};

  CreateContainerGroupRequestVolumeDiskVolume() {}

  explicit CreateContainerGroupRequestVolumeDiskVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (fsType) {
      res["FsType"] = boost::any(*fsType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("FsType") != m.end() && !m["FsType"].empty()) {
      fsType = make_shared<string>(boost::any_cast<string>(m["FsType"]));
    }
  }


  virtual ~CreateContainerGroupRequestVolumeDiskVolume() = default;
};
class CreateContainerGroupRequestVolumeEmptyDirVolume : public Darabonba::Model {
public:
  shared_ptr<string> medium{};
  shared_ptr<string> sizeLimit{};

  CreateContainerGroupRequestVolumeEmptyDirVolume() {}

  explicit CreateContainerGroupRequestVolumeEmptyDirVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (sizeLimit) {
      res["SizeLimit"] = boost::any(*sizeLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("SizeLimit") != m.end() && !m["SizeLimit"].empty()) {
      sizeLimit = make_shared<string>(boost::any_cast<string>(m["SizeLimit"]));
    }
  }


  virtual ~CreateContainerGroupRequestVolumeEmptyDirVolume() = default;
};
class CreateContainerGroupRequestVolumeFlexVolume : public Darabonba::Model {
public:
  shared_ptr<string> driver{};
  shared_ptr<string> fsType{};
  shared_ptr<string> options{};

  CreateContainerGroupRequestVolumeFlexVolume() {}

  explicit CreateContainerGroupRequestVolumeFlexVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (driver) {
      res["Driver"] = boost::any(*driver);
    }
    if (fsType) {
      res["FsType"] = boost::any(*fsType);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Driver") != m.end() && !m["Driver"].empty()) {
      driver = make_shared<string>(boost::any_cast<string>(m["Driver"]));
    }
    if (m.find("FsType") != m.end() && !m["FsType"].empty()) {
      fsType = make_shared<string>(boost::any_cast<string>(m["FsType"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
  }


  virtual ~CreateContainerGroupRequestVolumeFlexVolume() = default;
};
class CreateContainerGroupRequestVolumeHostPathVolume : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> type{};

  CreateContainerGroupRequestVolumeHostPathVolume() {}

  explicit CreateContainerGroupRequestVolumeHostPathVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateContainerGroupRequestVolumeHostPathVolume() = default;
};
class CreateContainerGroupRequestVolumeNFSVolume : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<bool> readOnly{};
  shared_ptr<string> server{};

  CreateContainerGroupRequestVolumeNFSVolume() {}

  explicit CreateContainerGroupRequestVolumeNFSVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (readOnly) {
      res["ReadOnly"] = boost::any(*readOnly);
    }
    if (server) {
      res["Server"] = boost::any(*server);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ReadOnly") != m.end() && !m["ReadOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["ReadOnly"]));
    }
    if (m.find("Server") != m.end() && !m["Server"].empty()) {
      server = make_shared<string>(boost::any_cast<string>(m["Server"]));
    }
  }


  virtual ~CreateContainerGroupRequestVolumeNFSVolume() = default;
};
class CreateContainerGroupRequestVolume : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestVolumeConfigFileVolume> configFileVolume{};
  shared_ptr<CreateContainerGroupRequestVolumeDiskVolume> diskVolume{};
  shared_ptr<CreateContainerGroupRequestVolumeEmptyDirVolume> emptyDirVolume{};
  shared_ptr<CreateContainerGroupRequestVolumeFlexVolume> flexVolume{};
  shared_ptr<CreateContainerGroupRequestVolumeHostPathVolume> hostPathVolume{};
  shared_ptr<CreateContainerGroupRequestVolumeNFSVolume> NFSVolume{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateContainerGroupRequestVolume() {}

  explicit CreateContainerGroupRequestVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileVolume) {
      res["ConfigFileVolume"] = configFileVolume ? boost::any(configFileVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (diskVolume) {
      res["DiskVolume"] = diskVolume ? boost::any(diskVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (emptyDirVolume) {
      res["EmptyDirVolume"] = emptyDirVolume ? boost::any(emptyDirVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flexVolume) {
      res["FlexVolume"] = flexVolume ? boost::any(flexVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostPathVolume) {
      res["HostPathVolume"] = hostPathVolume ? boost::any(hostPathVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (NFSVolume) {
      res["NFSVolume"] = NFSVolume ? boost::any(NFSVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigFileVolume") != m.end() && !m["ConfigFileVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigFileVolume"].type()) {
        CreateContainerGroupRequestVolumeConfigFileVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigFileVolume"]));
        configFileVolume = make_shared<CreateContainerGroupRequestVolumeConfigFileVolume>(model1);
      }
    }
    if (m.find("DiskVolume") != m.end() && !m["DiskVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["DiskVolume"].type()) {
        CreateContainerGroupRequestVolumeDiskVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DiskVolume"]));
        diskVolume = make_shared<CreateContainerGroupRequestVolumeDiskVolume>(model1);
      }
    }
    if (m.find("EmptyDirVolume") != m.end() && !m["EmptyDirVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["EmptyDirVolume"].type()) {
        CreateContainerGroupRequestVolumeEmptyDirVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EmptyDirVolume"]));
        emptyDirVolume = make_shared<CreateContainerGroupRequestVolumeEmptyDirVolume>(model1);
      }
    }
    if (m.find("FlexVolume") != m.end() && !m["FlexVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlexVolume"].type()) {
        CreateContainerGroupRequestVolumeFlexVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlexVolume"]));
        flexVolume = make_shared<CreateContainerGroupRequestVolumeFlexVolume>(model1);
      }
    }
    if (m.find("HostPathVolume") != m.end() && !m["HostPathVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostPathVolume"].type()) {
        CreateContainerGroupRequestVolumeHostPathVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostPathVolume"]));
        hostPathVolume = make_shared<CreateContainerGroupRequestVolumeHostPathVolume>(model1);
      }
    }
    if (m.find("NFSVolume") != m.end() && !m["NFSVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["NFSVolume"].type()) {
        CreateContainerGroupRequestVolumeNFSVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NFSVolume"]));
        NFSVolume = make_shared<CreateContainerGroupRequestVolumeNFSVolume>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateContainerGroupRequestVolume() = default;
};
class CreateContainerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<CreateContainerGroupRequestDnsConfig> dnsConfig{};
  shared_ptr<CreateContainerGroupRequestHostSecurityContext> hostSecurityContext{};
  shared_ptr<CreateContainerGroupRequestSecurityContext> securityContext{};
  shared_ptr<vector<CreateContainerGroupRequestAcrRegistryInfo>> acrRegistryInfo{};
  shared_ptr<long> activeDeadlineSeconds{};
  shared_ptr<bool> autoCreateEip{};
  shared_ptr<bool> autoMatchImageCache{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> computeCategory{};
  shared_ptr<vector<CreateContainerGroupRequestContainer>> container{};
  shared_ptr<string> containerGroupName{};
  shared_ptr<bool> containerResourceView{};
  shared_ptr<string> corePattern{};
  shared_ptr<double> cpu{};
  shared_ptr<string> cpuArchitecture{};
  shared_ptr<long> cpuOptionsCore{};
  shared_ptr<string> cpuOptionsNuma{};
  shared_ptr<long> cpuOptionsThreadsPerCore{};
  shared_ptr<string> dataCacheBucket{};
  shared_ptr<bool> dataCacheBurstingEnabled{};
  shared_ptr<string> dataCachePL{};
  shared_ptr<long> dataCacheProvisionedIops{};
  shared_ptr<string> dnsPolicy{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> egressBandwidth{};
  shared_ptr<long> eipBandwidth{};
  shared_ptr<string> eipCommonBandwidthPackage{};
  shared_ptr<string> eipISP{};
  shared_ptr<string> eipInstanceId{};
  shared_ptr<long> ephemeralStorage{};
  shared_ptr<string> fixedIp{};
  shared_ptr<long> fixedIpRetainHour{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<vector<CreateContainerGroupRequestHostAliase>> hostAliase{};
  shared_ptr<string> hostName{};
  shared_ptr<string> imageAccelerateMode{};
  shared_ptr<vector<CreateContainerGroupRequestImageRegistryCredential>> imageRegistryCredential{};
  shared_ptr<string> imageSnapshotId{};
  shared_ptr<long> ingressBandwidth{};
  shared_ptr<vector<CreateContainerGroupRequestInitContainer>> initContainer{};
  shared_ptr<string> insecureRegistry{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> ipv6AddressCount{};
  shared_ptr<string> ipv6GatewayBandwidth{};
  shared_ptr<bool> ipv6GatewayBandwidthEnable{};
  shared_ptr<long> maxPendingMinute{};
  shared_ptr<double> memory{};
  shared_ptr<vector<string>> ntpServer{};
  shared_ptr<string> osType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> plainHttpRegistry{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> restartPolicy{};
  shared_ptr<string> scheduleStrategy{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<bool> shareProcessNamespace{};
  shared_ptr<long> spotDuration{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<bool> strictSpot{};
  shared_ptr<vector<CreateContainerGroupRequestTag>> tag{};
  shared_ptr<long> terminationGracePeriodSeconds{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<vector<CreateContainerGroupRequestVolume>> volume{};
  shared_ptr<string> zoneId{};

  CreateContainerGroupRequest() {}

  explicit CreateContainerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsConfig) {
      res["DnsConfig"] = dnsConfig ? boost::any(dnsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostSecurityContext) {
      res["HostSecurityContext"] = hostSecurityContext ? boost::any(hostSecurityContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityContext) {
      res["SecurityContext"] = securityContext ? boost::any(securityContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (acrRegistryInfo) {
      vector<boost::any> temp1;
      for(auto item1:*acrRegistryInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AcrRegistryInfo"] = boost::any(temp1);
    }
    if (activeDeadlineSeconds) {
      res["ActiveDeadlineSeconds"] = boost::any(*activeDeadlineSeconds);
    }
    if (autoCreateEip) {
      res["AutoCreateEip"] = boost::any(*autoCreateEip);
    }
    if (autoMatchImageCache) {
      res["AutoMatchImageCache"] = boost::any(*autoMatchImageCache);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (computeCategory) {
      res["ComputeCategory"] = boost::any(*computeCategory);
    }
    if (container) {
      vector<boost::any> temp1;
      for(auto item1:*container){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Container"] = boost::any(temp1);
    }
    if (containerGroupName) {
      res["ContainerGroupName"] = boost::any(*containerGroupName);
    }
    if (containerResourceView) {
      res["ContainerResourceView"] = boost::any(*containerResourceView);
    }
    if (corePattern) {
      res["CorePattern"] = boost::any(*corePattern);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (cpuArchitecture) {
      res["CpuArchitecture"] = boost::any(*cpuArchitecture);
    }
    if (cpuOptionsCore) {
      res["CpuOptionsCore"] = boost::any(*cpuOptionsCore);
    }
    if (cpuOptionsNuma) {
      res["CpuOptionsNuma"] = boost::any(*cpuOptionsNuma);
    }
    if (cpuOptionsThreadsPerCore) {
      res["CpuOptionsThreadsPerCore"] = boost::any(*cpuOptionsThreadsPerCore);
    }
    if (dataCacheBucket) {
      res["DataCacheBucket"] = boost::any(*dataCacheBucket);
    }
    if (dataCacheBurstingEnabled) {
      res["DataCacheBurstingEnabled"] = boost::any(*dataCacheBurstingEnabled);
    }
    if (dataCachePL) {
      res["DataCachePL"] = boost::any(*dataCachePL);
    }
    if (dataCacheProvisionedIops) {
      res["DataCacheProvisionedIops"] = boost::any(*dataCacheProvisionedIops);
    }
    if (dnsPolicy) {
      res["DnsPolicy"] = boost::any(*dnsPolicy);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (egressBandwidth) {
      res["EgressBandwidth"] = boost::any(*egressBandwidth);
    }
    if (eipBandwidth) {
      res["EipBandwidth"] = boost::any(*eipBandwidth);
    }
    if (eipCommonBandwidthPackage) {
      res["EipCommonBandwidthPackage"] = boost::any(*eipCommonBandwidthPackage);
    }
    if (eipISP) {
      res["EipISP"] = boost::any(*eipISP);
    }
    if (eipInstanceId) {
      res["EipInstanceId"] = boost::any(*eipInstanceId);
    }
    if (ephemeralStorage) {
      res["EphemeralStorage"] = boost::any(*ephemeralStorage);
    }
    if (fixedIp) {
      res["FixedIp"] = boost::any(*fixedIp);
    }
    if (fixedIpRetainHour) {
      res["FixedIpRetainHour"] = boost::any(*fixedIpRetainHour);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (hostAliase) {
      vector<boost::any> temp1;
      for(auto item1:*hostAliase){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAliase"] = boost::any(temp1);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (imageAccelerateMode) {
      res["ImageAccelerateMode"] = boost::any(*imageAccelerateMode);
    }
    if (imageRegistryCredential) {
      vector<boost::any> temp1;
      for(auto item1:*imageRegistryCredential){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageRegistryCredential"] = boost::any(temp1);
    }
    if (imageSnapshotId) {
      res["ImageSnapshotId"] = boost::any(*imageSnapshotId);
    }
    if (ingressBandwidth) {
      res["IngressBandwidth"] = boost::any(*ingressBandwidth);
    }
    if (initContainer) {
      vector<boost::any> temp1;
      for(auto item1:*initContainer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InitContainer"] = boost::any(temp1);
    }
    if (insecureRegistry) {
      res["InsecureRegistry"] = boost::any(*insecureRegistry);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ipv6AddressCount) {
      res["Ipv6AddressCount"] = boost::any(*ipv6AddressCount);
    }
    if (ipv6GatewayBandwidth) {
      res["Ipv6GatewayBandwidth"] = boost::any(*ipv6GatewayBandwidth);
    }
    if (ipv6GatewayBandwidthEnable) {
      res["Ipv6GatewayBandwidthEnable"] = boost::any(*ipv6GatewayBandwidthEnable);
    }
    if (maxPendingMinute) {
      res["MaxPendingMinute"] = boost::any(*maxPendingMinute);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (ntpServer) {
      res["NtpServer"] = boost::any(*ntpServer);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (plainHttpRegistry) {
      res["PlainHttpRegistry"] = boost::any(*plainHttpRegistry);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
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
    if (restartPolicy) {
      res["RestartPolicy"] = boost::any(*restartPolicy);
    }
    if (scheduleStrategy) {
      res["ScheduleStrategy"] = boost::any(*scheduleStrategy);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (shareProcessNamespace) {
      res["ShareProcessNamespace"] = boost::any(*shareProcessNamespace);
    }
    if (spotDuration) {
      res["SpotDuration"] = boost::any(*spotDuration);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (strictSpot) {
      res["StrictSpot"] = boost::any(*strictSpot);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (terminationGracePeriodSeconds) {
      res["TerminationGracePeriodSeconds"] = boost::any(*terminationGracePeriodSeconds);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (volume) {
      vector<boost::any> temp1;
      for(auto item1:*volume){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Volume"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsConfig") != m.end() && !m["DnsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DnsConfig"].type()) {
        CreateContainerGroupRequestDnsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DnsConfig"]));
        dnsConfig = make_shared<CreateContainerGroupRequestDnsConfig>(model1);
      }
    }
    if (m.find("HostSecurityContext") != m.end() && !m["HostSecurityContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostSecurityContext"].type()) {
        CreateContainerGroupRequestHostSecurityContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostSecurityContext"]));
        hostSecurityContext = make_shared<CreateContainerGroupRequestHostSecurityContext>(model1);
      }
    }
    if (m.find("SecurityContext") != m.end() && !m["SecurityContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityContext"].type()) {
        CreateContainerGroupRequestSecurityContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityContext"]));
        securityContext = make_shared<CreateContainerGroupRequestSecurityContext>(model1);
      }
    }
    if (m.find("AcrRegistryInfo") != m.end() && !m["AcrRegistryInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AcrRegistryInfo"].type()) {
        vector<CreateContainerGroupRequestAcrRegistryInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AcrRegistryInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestAcrRegistryInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        acrRegistryInfo = make_shared<vector<CreateContainerGroupRequestAcrRegistryInfo>>(expect1);
      }
    }
    if (m.find("ActiveDeadlineSeconds") != m.end() && !m["ActiveDeadlineSeconds"].empty()) {
      activeDeadlineSeconds = make_shared<long>(boost::any_cast<long>(m["ActiveDeadlineSeconds"]));
    }
    if (m.find("AutoCreateEip") != m.end() && !m["AutoCreateEip"].empty()) {
      autoCreateEip = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateEip"]));
    }
    if (m.find("AutoMatchImageCache") != m.end() && !m["AutoMatchImageCache"].empty()) {
      autoMatchImageCache = make_shared<bool>(boost::any_cast<bool>(m["AutoMatchImageCache"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ComputeCategory") != m.end() && !m["ComputeCategory"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ComputeCategory"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ComputeCategory"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      computeCategory = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Container") != m.end() && !m["Container"].empty()) {
      if (typeid(vector<boost::any>) == m["Container"].type()) {
        vector<CreateContainerGroupRequestContainer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Container"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestContainer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        container = make_shared<vector<CreateContainerGroupRequestContainer>>(expect1);
      }
    }
    if (m.find("ContainerGroupName") != m.end() && !m["ContainerGroupName"].empty()) {
      containerGroupName = make_shared<string>(boost::any_cast<string>(m["ContainerGroupName"]));
    }
    if (m.find("ContainerResourceView") != m.end() && !m["ContainerResourceView"].empty()) {
      containerResourceView = make_shared<bool>(boost::any_cast<bool>(m["ContainerResourceView"]));
    }
    if (m.find("CorePattern") != m.end() && !m["CorePattern"].empty()) {
      corePattern = make_shared<string>(boost::any_cast<string>(m["CorePattern"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("CpuArchitecture") != m.end() && !m["CpuArchitecture"].empty()) {
      cpuArchitecture = make_shared<string>(boost::any_cast<string>(m["CpuArchitecture"]));
    }
    if (m.find("CpuOptionsCore") != m.end() && !m["CpuOptionsCore"].empty()) {
      cpuOptionsCore = make_shared<long>(boost::any_cast<long>(m["CpuOptionsCore"]));
    }
    if (m.find("CpuOptionsNuma") != m.end() && !m["CpuOptionsNuma"].empty()) {
      cpuOptionsNuma = make_shared<string>(boost::any_cast<string>(m["CpuOptionsNuma"]));
    }
    if (m.find("CpuOptionsThreadsPerCore") != m.end() && !m["CpuOptionsThreadsPerCore"].empty()) {
      cpuOptionsThreadsPerCore = make_shared<long>(boost::any_cast<long>(m["CpuOptionsThreadsPerCore"]));
    }
    if (m.find("DataCacheBucket") != m.end() && !m["DataCacheBucket"].empty()) {
      dataCacheBucket = make_shared<string>(boost::any_cast<string>(m["DataCacheBucket"]));
    }
    if (m.find("DataCacheBurstingEnabled") != m.end() && !m["DataCacheBurstingEnabled"].empty()) {
      dataCacheBurstingEnabled = make_shared<bool>(boost::any_cast<bool>(m["DataCacheBurstingEnabled"]));
    }
    if (m.find("DataCachePL") != m.end() && !m["DataCachePL"].empty()) {
      dataCachePL = make_shared<string>(boost::any_cast<string>(m["DataCachePL"]));
    }
    if (m.find("DataCacheProvisionedIops") != m.end() && !m["DataCacheProvisionedIops"].empty()) {
      dataCacheProvisionedIops = make_shared<long>(boost::any_cast<long>(m["DataCacheProvisionedIops"]));
    }
    if (m.find("DnsPolicy") != m.end() && !m["DnsPolicy"].empty()) {
      dnsPolicy = make_shared<string>(boost::any_cast<string>(m["DnsPolicy"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EgressBandwidth") != m.end() && !m["EgressBandwidth"].empty()) {
      egressBandwidth = make_shared<long>(boost::any_cast<long>(m["EgressBandwidth"]));
    }
    if (m.find("EipBandwidth") != m.end() && !m["EipBandwidth"].empty()) {
      eipBandwidth = make_shared<long>(boost::any_cast<long>(m["EipBandwidth"]));
    }
    if (m.find("EipCommonBandwidthPackage") != m.end() && !m["EipCommonBandwidthPackage"].empty()) {
      eipCommonBandwidthPackage = make_shared<string>(boost::any_cast<string>(m["EipCommonBandwidthPackage"]));
    }
    if (m.find("EipISP") != m.end() && !m["EipISP"].empty()) {
      eipISP = make_shared<string>(boost::any_cast<string>(m["EipISP"]));
    }
    if (m.find("EipInstanceId") != m.end() && !m["EipInstanceId"].empty()) {
      eipInstanceId = make_shared<string>(boost::any_cast<string>(m["EipInstanceId"]));
    }
    if (m.find("EphemeralStorage") != m.end() && !m["EphemeralStorage"].empty()) {
      ephemeralStorage = make_shared<long>(boost::any_cast<long>(m["EphemeralStorage"]));
    }
    if (m.find("FixedIp") != m.end() && !m["FixedIp"].empty()) {
      fixedIp = make_shared<string>(boost::any_cast<string>(m["FixedIp"]));
    }
    if (m.find("FixedIpRetainHour") != m.end() && !m["FixedIpRetainHour"].empty()) {
      fixedIpRetainHour = make_shared<long>(boost::any_cast<long>(m["FixedIpRetainHour"]));
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("HostAliase") != m.end() && !m["HostAliase"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAliase"].type()) {
        vector<CreateContainerGroupRequestHostAliase> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAliase"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestHostAliase model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAliase = make_shared<vector<CreateContainerGroupRequestHostAliase>>(expect1);
      }
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ImageAccelerateMode") != m.end() && !m["ImageAccelerateMode"].empty()) {
      imageAccelerateMode = make_shared<string>(boost::any_cast<string>(m["ImageAccelerateMode"]));
    }
    if (m.find("ImageRegistryCredential") != m.end() && !m["ImageRegistryCredential"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageRegistryCredential"].type()) {
        vector<CreateContainerGroupRequestImageRegistryCredential> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageRegistryCredential"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestImageRegistryCredential model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageRegistryCredential = make_shared<vector<CreateContainerGroupRequestImageRegistryCredential>>(expect1);
      }
    }
    if (m.find("ImageSnapshotId") != m.end() && !m["ImageSnapshotId"].empty()) {
      imageSnapshotId = make_shared<string>(boost::any_cast<string>(m["ImageSnapshotId"]));
    }
    if (m.find("IngressBandwidth") != m.end() && !m["IngressBandwidth"].empty()) {
      ingressBandwidth = make_shared<long>(boost::any_cast<long>(m["IngressBandwidth"]));
    }
    if (m.find("InitContainer") != m.end() && !m["InitContainer"].empty()) {
      if (typeid(vector<boost::any>) == m["InitContainer"].type()) {
        vector<CreateContainerGroupRequestInitContainer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InitContainer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestInitContainer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        initContainer = make_shared<vector<CreateContainerGroupRequestInitContainer>>(expect1);
      }
    }
    if (m.find("InsecureRegistry") != m.end() && !m["InsecureRegistry"].empty()) {
      insecureRegistry = make_shared<string>(boost::any_cast<string>(m["InsecureRegistry"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Ipv6AddressCount") != m.end() && !m["Ipv6AddressCount"].empty()) {
      ipv6AddressCount = make_shared<long>(boost::any_cast<long>(m["Ipv6AddressCount"]));
    }
    if (m.find("Ipv6GatewayBandwidth") != m.end() && !m["Ipv6GatewayBandwidth"].empty()) {
      ipv6GatewayBandwidth = make_shared<string>(boost::any_cast<string>(m["Ipv6GatewayBandwidth"]));
    }
    if (m.find("Ipv6GatewayBandwidthEnable") != m.end() && !m["Ipv6GatewayBandwidthEnable"].empty()) {
      ipv6GatewayBandwidthEnable = make_shared<bool>(boost::any_cast<bool>(m["Ipv6GatewayBandwidthEnable"]));
    }
    if (m.find("MaxPendingMinute") != m.end() && !m["MaxPendingMinute"].empty()) {
      maxPendingMinute = make_shared<long>(boost::any_cast<long>(m["MaxPendingMinute"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("NtpServer") != m.end() && !m["NtpServer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NtpServer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NtpServer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ntpServer = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlainHttpRegistry") != m.end() && !m["PlainHttpRegistry"].empty()) {
      plainHttpRegistry = make_shared<string>(boost::any_cast<string>(m["PlainHttpRegistry"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
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
    if (m.find("RestartPolicy") != m.end() && !m["RestartPolicy"].empty()) {
      restartPolicy = make_shared<string>(boost::any_cast<string>(m["RestartPolicy"]));
    }
    if (m.find("ScheduleStrategy") != m.end() && !m["ScheduleStrategy"].empty()) {
      scheduleStrategy = make_shared<string>(boost::any_cast<string>(m["ScheduleStrategy"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("ShareProcessNamespace") != m.end() && !m["ShareProcessNamespace"].empty()) {
      shareProcessNamespace = make_shared<bool>(boost::any_cast<bool>(m["ShareProcessNamespace"]));
    }
    if (m.find("SpotDuration") != m.end() && !m["SpotDuration"].empty()) {
      spotDuration = make_shared<long>(boost::any_cast<long>(m["SpotDuration"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("StrictSpot") != m.end() && !m["StrictSpot"].empty()) {
      strictSpot = make_shared<bool>(boost::any_cast<bool>(m["StrictSpot"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateContainerGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateContainerGroupRequestTag>>(expect1);
      }
    }
    if (m.find("TerminationGracePeriodSeconds") != m.end() && !m["TerminationGracePeriodSeconds"].empty()) {
      terminationGracePeriodSeconds = make_shared<long>(boost::any_cast<long>(m["TerminationGracePeriodSeconds"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      if (typeid(vector<boost::any>) == m["Volume"].type()) {
        vector<CreateContainerGroupRequestVolume> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Volume"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateContainerGroupRequestVolume model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volume = make_shared<vector<CreateContainerGroupRequestVolume>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateContainerGroupRequest() = default;
};
class CreateContainerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> requestId{};

  CreateContainerGroupResponseBody() {}

  explicit CreateContainerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateContainerGroupResponseBody() = default;
};
class CreateContainerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateContainerGroupResponseBody> body{};

  CreateContainerGroupResponse() {}

  explicit CreateContainerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateContainerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateContainerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateContainerGroupResponse() = default;
};
class CreateDataCacheRequestDataSource : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> options{};
  shared_ptr<string> type{};

  CreateDataCacheRequestDataSource() {}

  explicit CreateDataCacheRequestDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Options"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      options = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDataCacheRequestDataSource() = default;
};
class CreateDataCacheRequestEipCreateParam : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> commonBandwidthPackage{};
  shared_ptr<string> ISP{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> publicIpAddressPoolId{};

  CreateDataCacheRequestEipCreateParam() {}

  explicit CreateDataCacheRequestEipCreateParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (commonBandwidthPackage) {
      res["CommonBandwidthPackage"] = boost::any(*commonBandwidthPackage);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (publicIpAddressPoolId) {
      res["PublicIpAddressPoolId"] = boost::any(*publicIpAddressPoolId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("CommonBandwidthPackage") != m.end() && !m["CommonBandwidthPackage"].empty()) {
      commonBandwidthPackage = make_shared<string>(boost::any_cast<string>(m["CommonBandwidthPackage"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("PublicIpAddressPoolId") != m.end() && !m["PublicIpAddressPoolId"].empty()) {
      publicIpAddressPoolId = make_shared<string>(boost::any_cast<string>(m["PublicIpAddressPoolId"]));
    }
  }


  virtual ~CreateDataCacheRequestEipCreateParam() = default;
};
class CreateDataCacheRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDataCacheRequestTag() {}

  explicit CreateDataCacheRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDataCacheRequestTag() = default;
};
class CreateDataCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> clientToken{};
  shared_ptr<CreateDataCacheRequestDataSource> dataSource{};
  shared_ptr<CreateDataCacheRequestEipCreateParam> eipCreateParam{};
  shared_ptr<string> eipInstanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> path{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<long> size{};
  shared_ptr<vector<CreateDataCacheRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};

  CreateDataCacheRequest() {}

  explicit CreateDataCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eipCreateParam) {
      res["EipCreateParam"] = eipCreateParam ? boost::any(eipCreateParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eipInstanceId) {
      res["EipInstanceId"] = boost::any(*eipInstanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
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
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        CreateDataCacheRequestDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<CreateDataCacheRequestDataSource>(model1);
      }
    }
    if (m.find("EipCreateParam") != m.end() && !m["EipCreateParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["EipCreateParam"].type()) {
        CreateDataCacheRequestEipCreateParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EipCreateParam"]));
        eipCreateParam = make_shared<CreateDataCacheRequestEipCreateParam>(model1);
      }
    }
    if (m.find("EipInstanceId") != m.end() && !m["EipInstanceId"].empty()) {
      eipInstanceId = make_shared<string>(boost::any_cast<string>(m["EipInstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
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
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateDataCacheRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDataCacheRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateDataCacheRequestTag>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateDataCacheRequest() = default;
};
class CreateDataCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataCacheId{};
  shared_ptr<string> requestId{};

  CreateDataCacheResponseBody() {}

  explicit CreateDataCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCacheId) {
      res["DataCacheId"] = boost::any(*dataCacheId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataCacheId") != m.end() && !m["DataCacheId"].empty()) {
      dataCacheId = make_shared<string>(boost::any_cast<string>(m["DataCacheId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDataCacheResponseBody() = default;
};
class CreateDataCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataCacheResponseBody> body{};

  CreateDataCacheResponse() {}

  explicit CreateDataCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDataCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataCacheResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataCacheResponse() = default;
};
class CreateImageCacheRequestAcrRegistryInfo : public Darabonba::Model {
public:
  shared_ptr<string> arnService{};
  shared_ptr<string> arnUser{};
  shared_ptr<vector<string>> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionId{};

  CreateImageCacheRequestAcrRegistryInfo() {}

  explicit CreateImageCacheRequestAcrRegistryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arnService) {
      res["ArnService"] = boost::any(*arnService);
    }
    if (arnUser) {
      res["ArnUser"] = boost::any(*arnUser);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArnService") != m.end() && !m["ArnService"].empty()) {
      arnService = make_shared<string>(boost::any_cast<string>(m["ArnService"]));
    }
    if (m.find("ArnUser") != m.end() && !m["ArnUser"].empty()) {
      arnUser = make_shared<string>(boost::any_cast<string>(m["ArnUser"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Domain"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domain = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateImageCacheRequestAcrRegistryInfo() = default;
};
class CreateImageCacheRequestImageRegistryCredential : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> server{};
  shared_ptr<string> userName{};

  CreateImageCacheRequestImageRegistryCredential() {}

  explicit CreateImageCacheRequestImageRegistryCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (server) {
      res["Server"] = boost::any(*server);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Server") != m.end() && !m["Server"].empty()) {
      server = make_shared<string>(boost::any_cast<string>(m["Server"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateImageCacheRequestImageRegistryCredential() = default;
};
class CreateImageCacheRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateImageCacheRequestTag() {}

  explicit CreateImageCacheRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateImageCacheRequestTag() = default;
};
class CreateImageCacheRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateImageCacheRequestAcrRegistryInfo>> acrRegistryInfo{};
  shared_ptr<string> annotations{};
  shared_ptr<bool> autoMatchImageCache{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> eipInstanceId{};
  shared_ptr<string> eliminationStrategy{};
  shared_ptr<bool> flash{};
  shared_ptr<long> flashCopyCount{};
  shared_ptr<vector<string>> image{};
  shared_ptr<string> imageCacheName{};
  shared_ptr<long> imageCacheSize{};
  shared_ptr<vector<CreateImageCacheRequestImageRegistryCredential>> imageRegistryCredential{};
  shared_ptr<string> insecureRegistry{};
  shared_ptr<string> osType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> plainHttpRegistry{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<long> standardCopyCount{};
  shared_ptr<vector<CreateImageCacheRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateImageCacheRequest() {}

  explicit CreateImageCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acrRegistryInfo) {
      vector<boost::any> temp1;
      for(auto item1:*acrRegistryInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AcrRegistryInfo"] = boost::any(temp1);
    }
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (autoMatchImageCache) {
      res["AutoMatchImageCache"] = boost::any(*autoMatchImageCache);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (eipInstanceId) {
      res["EipInstanceId"] = boost::any(*eipInstanceId);
    }
    if (eliminationStrategy) {
      res["EliminationStrategy"] = boost::any(*eliminationStrategy);
    }
    if (flash) {
      res["Flash"] = boost::any(*flash);
    }
    if (flashCopyCount) {
      res["FlashCopyCount"] = boost::any(*flashCopyCount);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imageCacheName) {
      res["ImageCacheName"] = boost::any(*imageCacheName);
    }
    if (imageCacheSize) {
      res["ImageCacheSize"] = boost::any(*imageCacheSize);
    }
    if (imageRegistryCredential) {
      vector<boost::any> temp1;
      for(auto item1:*imageRegistryCredential){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageRegistryCredential"] = boost::any(temp1);
    }
    if (insecureRegistry) {
      res["InsecureRegistry"] = boost::any(*insecureRegistry);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (plainHttpRegistry) {
      res["PlainHttpRegistry"] = boost::any(*plainHttpRegistry);
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
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (standardCopyCount) {
      res["StandardCopyCount"] = boost::any(*standardCopyCount);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
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
    if (m.find("AcrRegistryInfo") != m.end() && !m["AcrRegistryInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AcrRegistryInfo"].type()) {
        vector<CreateImageCacheRequestAcrRegistryInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AcrRegistryInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateImageCacheRequestAcrRegistryInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        acrRegistryInfo = make_shared<vector<CreateImageCacheRequestAcrRegistryInfo>>(expect1);
      }
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["Annotations"]));
    }
    if (m.find("AutoMatchImageCache") != m.end() && !m["AutoMatchImageCache"].empty()) {
      autoMatchImageCache = make_shared<bool>(boost::any_cast<bool>(m["AutoMatchImageCache"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EipInstanceId") != m.end() && !m["EipInstanceId"].empty()) {
      eipInstanceId = make_shared<string>(boost::any_cast<string>(m["EipInstanceId"]));
    }
    if (m.find("EliminationStrategy") != m.end() && !m["EliminationStrategy"].empty()) {
      eliminationStrategy = make_shared<string>(boost::any_cast<string>(m["EliminationStrategy"]));
    }
    if (m.find("Flash") != m.end() && !m["Flash"].empty()) {
      flash = make_shared<bool>(boost::any_cast<bool>(m["Flash"]));
    }
    if (m.find("FlashCopyCount") != m.end() && !m["FlashCopyCount"].empty()) {
      flashCopyCount = make_shared<long>(boost::any_cast<long>(m["FlashCopyCount"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Image"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Image"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      image = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageCacheName") != m.end() && !m["ImageCacheName"].empty()) {
      imageCacheName = make_shared<string>(boost::any_cast<string>(m["ImageCacheName"]));
    }
    if (m.find("ImageCacheSize") != m.end() && !m["ImageCacheSize"].empty()) {
      imageCacheSize = make_shared<long>(boost::any_cast<long>(m["ImageCacheSize"]));
    }
    if (m.find("ImageRegistryCredential") != m.end() && !m["ImageRegistryCredential"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageRegistryCredential"].type()) {
        vector<CreateImageCacheRequestImageRegistryCredential> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageRegistryCredential"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateImageCacheRequestImageRegistryCredential model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageRegistryCredential = make_shared<vector<CreateImageCacheRequestImageRegistryCredential>>(expect1);
      }
    }
    if (m.find("InsecureRegistry") != m.end() && !m["InsecureRegistry"].empty()) {
      insecureRegistry = make_shared<string>(boost::any_cast<string>(m["InsecureRegistry"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlainHttpRegistry") != m.end() && !m["PlainHttpRegistry"].empty()) {
      plainHttpRegistry = make_shared<string>(boost::any_cast<string>(m["PlainHttpRegistry"]));
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
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("StandardCopyCount") != m.end() && !m["StandardCopyCount"].empty()) {
      standardCopyCount = make_shared<long>(boost::any_cast<long>(m["StandardCopyCount"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateImageCacheRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateImageCacheRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateImageCacheRequestTag>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateImageCacheRequest() = default;
};
class CreateImageCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> imageCacheId{};
  shared_ptr<string> requestId{};

  CreateImageCacheResponseBody() {}

  explicit CreateImageCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (imageCacheId) {
      res["ImageCacheId"] = boost::any(*imageCacheId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("ImageCacheId") != m.end() && !m["ImageCacheId"].empty()) {
      imageCacheId = make_shared<string>(boost::any_cast<string>(m["ImageCacheId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateImageCacheResponseBody() = default;
};
class CreateImageCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateImageCacheResponseBody> body{};

  CreateImageCacheResponse() {}

  explicit CreateImageCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateImageCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageCacheResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageCacheResponse() = default;
};
class CreateInstanceOpsTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> opsType{};
  shared_ptr<string> opsValue{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateInstanceOpsTaskRequest() {}

  explicit CreateInstanceOpsTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (opsType) {
      res["OpsType"] = boost::any(*opsType);
    }
    if (opsValue) {
      res["OpsValue"] = boost::any(*opsValue);
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
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("OpsType") != m.end() && !m["OpsType"].empty()) {
      opsType = make_shared<string>(boost::any_cast<string>(m["OpsType"]));
    }
    if (m.find("OpsValue") != m.end() && !m["OpsValue"].empty()) {
      opsValue = make_shared<string>(boost::any_cast<string>(m["OpsValue"]));
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


  virtual ~CreateInstanceOpsTaskRequest() = default;
};
class CreateInstanceOpsTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  CreateInstanceOpsTaskResponseBody() {}

  explicit CreateInstanceOpsTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~CreateInstanceOpsTaskResponseBody() = default;
};
class CreateInstanceOpsTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceOpsTaskResponseBody> body{};

  CreateInstanceOpsTaskResponse() {}

  explicit CreateInstanceOpsTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateInstanceOpsTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceOpsTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceOpsTaskResponse() = default;
};
class CreateVirtualNodeRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateVirtualNodeRequestTag() {}

  explicit CreateVirtualNodeRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateVirtualNodeRequestTag() = default;
};
class CreateVirtualNodeRequestTaint : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateVirtualNodeRequestTaint() {}

  explicit CreateVirtualNodeRequestTaint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["Effect"] = boost::any(*effect);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Effect") != m.end() && !m["Effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["Effect"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateVirtualNodeRequestTaint() = default;
};
class CreateVirtualNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterDNS{};
  shared_ptr<string> clusterDomain{};
  shared_ptr<string> customResources{};
  shared_ptr<string> eipInstanceId{};
  shared_ptr<bool> enablePublicNetwork{};
  shared_ptr<string> kubeConfig{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<CreateVirtualNodeRequestTag>> tag{};
  shared_ptr<vector<CreateVirtualNodeRequestTaint>> taint{};
  shared_ptr<bool> tlsBootstrapEnabled{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> virtualNodeName{};
  shared_ptr<string> zoneId{};

  CreateVirtualNodeRequest() {}

  explicit CreateVirtualNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterDNS) {
      res["ClusterDNS"] = boost::any(*clusterDNS);
    }
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (customResources) {
      res["CustomResources"] = boost::any(*customResources);
    }
    if (eipInstanceId) {
      res["EipInstanceId"] = boost::any(*eipInstanceId);
    }
    if (enablePublicNetwork) {
      res["EnablePublicNetwork"] = boost::any(*enablePublicNetwork);
    }
    if (kubeConfig) {
      res["KubeConfig"] = boost::any(*kubeConfig);
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
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (taint) {
      vector<boost::any> temp1;
      for(auto item1:*taint){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Taint"] = boost::any(temp1);
    }
    if (tlsBootstrapEnabled) {
      res["TlsBootstrapEnabled"] = boost::any(*tlsBootstrapEnabled);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (virtualNodeName) {
      res["VirtualNodeName"] = boost::any(*virtualNodeName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterDNS") != m.end() && !m["ClusterDNS"].empty()) {
      clusterDNS = make_shared<string>(boost::any_cast<string>(m["ClusterDNS"]));
    }
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("CustomResources") != m.end() && !m["CustomResources"].empty()) {
      customResources = make_shared<string>(boost::any_cast<string>(m["CustomResources"]));
    }
    if (m.find("EipInstanceId") != m.end() && !m["EipInstanceId"].empty()) {
      eipInstanceId = make_shared<string>(boost::any_cast<string>(m["EipInstanceId"]));
    }
    if (m.find("EnablePublicNetwork") != m.end() && !m["EnablePublicNetwork"].empty()) {
      enablePublicNetwork = make_shared<bool>(boost::any_cast<bool>(m["EnablePublicNetwork"]));
    }
    if (m.find("KubeConfig") != m.end() && !m["KubeConfig"].empty()) {
      kubeConfig = make_shared<string>(boost::any_cast<string>(m["KubeConfig"]));
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
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateVirtualNodeRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVirtualNodeRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateVirtualNodeRequestTag>>(expect1);
      }
    }
    if (m.find("Taint") != m.end() && !m["Taint"].empty()) {
      if (typeid(vector<boost::any>) == m["Taint"].type()) {
        vector<CreateVirtualNodeRequestTaint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Taint"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVirtualNodeRequestTaint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taint = make_shared<vector<CreateVirtualNodeRequestTaint>>(expect1);
      }
    }
    if (m.find("TlsBootstrapEnabled") != m.end() && !m["TlsBootstrapEnabled"].empty()) {
      tlsBootstrapEnabled = make_shared<bool>(boost::any_cast<bool>(m["TlsBootstrapEnabled"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VirtualNodeName") != m.end() && !m["VirtualNodeName"].empty()) {
      virtualNodeName = make_shared<string>(boost::any_cast<string>(m["VirtualNodeName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateVirtualNodeRequest() = default;
};
class CreateVirtualNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> virtualNodeId{};

  CreateVirtualNodeResponseBody() {}

  explicit CreateVirtualNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (virtualNodeId) {
      res["VirtualNodeId"] = boost::any(*virtualNodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VirtualNodeId") != m.end() && !m["VirtualNodeId"].empty()) {
      virtualNodeId = make_shared<string>(boost::any_cast<string>(m["VirtualNodeId"]));
    }
  }


  virtual ~CreateVirtualNodeResponseBody() = default;
};
class CreateVirtualNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVirtualNodeResponseBody> body{};

  CreateVirtualNodeResponse() {}

  explicit CreateVirtualNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVirtualNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVirtualNodeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVirtualNodeResponse() = default;
};
class DeleteContainerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<bool> force{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteContainerGroupRequest() {}

  explicit DeleteContainerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (force) {
      res["Force"] = boost::any(*force);
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
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
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


  virtual ~DeleteContainerGroupRequest() = default;
};
class DeleteContainerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteContainerGroupResponseBody() {}

  explicit DeleteContainerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteContainerGroupResponseBody() = default;
};
class DeleteContainerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteContainerGroupResponseBody> body{};

  DeleteContainerGroupResponse() {}

  explicit DeleteContainerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteContainerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteContainerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteContainerGroupResponse() = default;
};
class DeleteDataCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataCacheId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> path{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDataCacheRequest() {}

  explicit DeleteDataCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataCacheId) {
      res["DataCacheId"] = boost::any(*dataCacheId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
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
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataCacheId") != m.end() && !m["DataCacheId"].empty()) {
      dataCacheId = make_shared<string>(boost::any_cast<string>(m["DataCacheId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
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


  virtual ~DeleteDataCacheRequest() = default;
};
class DeleteDataCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDataCacheResponseBody() {}

  explicit DeleteDataCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDataCacheResponseBody() = default;
};
class DeleteDataCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataCacheResponseBody> body{};

  DeleteDataCacheResponse() {}

  explicit DeleteDataCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDataCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataCacheResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataCacheResponse() = default;
};
class DeleteImageCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> imageCacheId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteImageCacheRequest() {}

  explicit DeleteImageCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (imageCacheId) {
      res["ImageCacheId"] = boost::any(*imageCacheId);
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
    if (m.find("ImageCacheId") != m.end() && !m["ImageCacheId"].empty()) {
      imageCacheId = make_shared<string>(boost::any_cast<string>(m["ImageCacheId"]));
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


  virtual ~DeleteImageCacheRequest() = default;
};
class DeleteImageCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteImageCacheResponseBody() {}

  explicit DeleteImageCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteImageCacheResponseBody() = default;
};
class DeleteImageCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteImageCacheResponseBody> body{};

  DeleteImageCacheResponse() {}

  explicit DeleteImageCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteImageCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImageCacheResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImageCacheResponse() = default;
};
class DeleteVirtualNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> virtualNodeId{};

  DeleteVirtualNodeRequest() {}

  explicit DeleteVirtualNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualNodeId) {
      res["VirtualNodeId"] = boost::any(*virtualNodeId);
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
    if (m.find("VirtualNodeId") != m.end() && !m["VirtualNodeId"].empty()) {
      virtualNodeId = make_shared<string>(boost::any_cast<string>(m["VirtualNodeId"]));
    }
  }


  virtual ~DeleteVirtualNodeRequest() = default;
};
class DeleteVirtualNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVirtualNodeResponseBody() {}

  explicit DeleteVirtualNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVirtualNodeResponseBody() = default;
};
class DeleteVirtualNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVirtualNodeResponseBody> body{};

  DeleteVirtualNodeResponse() {}

  explicit DeleteVirtualNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVirtualNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVirtualNodeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVirtualNodeResponse() = default;
};
class DescribeAvailableResourceRequestDestinationResource : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<double> cores{};
  shared_ptr<double> memory{};
  shared_ptr<string> value{};

  DescribeAvailableResourceRequestDestinationResource() {}

  explicit DescribeAvailableResourceRequestDestinationResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<double>(boost::any_cast<double>(m["Cores"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeAvailableResourceRequestDestinationResource() = default;
};
class DescribeAvailableResourceRequestSpotResource : public Darabonba::Model {
public:
  shared_ptr<long> spotDuration{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};

  DescribeAvailableResourceRequestSpotResource() {}

  explicit DescribeAvailableResourceRequestSpotResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spotDuration) {
      res["SpotDuration"] = boost::any(*spotDuration);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpotDuration") != m.end() && !m["SpotDuration"].empty()) {
      spotDuration = make_shared<long>(boost::any_cast<long>(m["SpotDuration"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
  }


  virtual ~DescribeAvailableResourceRequestSpotResource() = default;
};
class DescribeAvailableResourceRequest : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceRequestDestinationResource> destinationResource{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<DescribeAvailableResourceRequestSpotResource> spotResource{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourceRequest() {}

  explicit DescribeAvailableResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationResource) {
      res["DestinationResource"] = destinationResource ? boost::any(destinationResource->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (spotResource) {
      res["SpotResource"] = spotResource ? boost::any(spotResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationResource") != m.end() && !m["DestinationResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DestinationResource"].type()) {
        DescribeAvailableResourceRequestDestinationResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DestinationResource"]));
        destinationResource = make_shared<DescribeAvailableResourceRequestDestinationResource>(model1);
      }
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
    if (m.find("SpotResource") != m.end() && !m["SpotResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpotResource"].type()) {
        DescribeAvailableResourceRequestSpotResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpotResource"]));
        spotResource = make_shared<DescribeAvailableResourceRequestSpotResource>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourceRequest() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource : public Darabonba::Model {
public:
  shared_ptr<string> statusCategory{};
  shared_ptr<string> value{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (statusCategory) {
      res["StatusCategory"] = boost::any(*statusCategory);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StatusCategory") != m.end() && !m["StatusCategory"].empty()) {
      statusCategory = make_shared<string>(boost::any_cast<string>(m["StatusCategory"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource>> supportedResource{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResources() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedResource) {
      vector<boost::any> temp1;
      for(auto item1:*supportedResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedResource") != m.end() && !m["SupportedResource"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedResource"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedResource = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResourcesSupportedResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResources() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResources> supportedResources{};
  shared_ptr<string> type{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedResources) {
      res["SupportedResources"] = supportedResources ? boost::any(supportedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedResources") != m.end() && !m["SupportedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedResources"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedResources"]));
        supportedResources = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResourceSupportedResources>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource>> availableResource{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableResource) {
      vector<boost::any> temp1;
      for(auto item1:*availableResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableResource") != m.end() && !m["AvailableResource"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableResource"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableResource = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResourcesAvailableResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources> availableResources{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableResources) {
      res["AvailableResources"] = availableResources ? boost::any(availableResources->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AvailableResources") != m.end() && !m["AvailableResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableResources"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableResources"]));
        availableResources = make_shared<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZoneAvailableResources>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone>> availableZone{};

  DescribeAvailableResourceResponseBodyAvailableZones() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZone) {
      vector<boost::any> temp1;
      for(auto item1:*availableZone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableZone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZone") != m.end() && !m["AvailableZone"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableZone"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZone = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZonesAvailableZone>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZones() = default;
};
class DescribeAvailableResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZones> availableZones{};
  shared_ptr<string> requestId{};

  DescribeAvailableResourceResponseBody() {}

  explicit DescribeAvailableResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZones) {
      res["AvailableZones"] = availableZones ? boost::any(availableZones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZones") != m.end() && !m["AvailableZones"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableZones"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableZones"]));
        availableZones = make_shared<DescribeAvailableResourceResponseBodyAvailableZones>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBody() = default;
};
class DescribeAvailableResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAvailableResourceResponseBody> body{};

  DescribeAvailableResourceResponse() {}

  explicit DescribeAvailableResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAvailableResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponse() = default;
};
class DescribeCommitContainerTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<string>> taskId{};
  shared_ptr<string> taskStatus{};

  DescribeCommitContainerTaskRequest() {}

  explicit DescribeCommitContainerTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~DescribeCommitContainerTaskRequest() = default;
};
class DescribeCommitContainerTaskResponseBodyCommitTasksCommitPhaseInfos : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> phase{};
  shared_ptr<string> recordTime{};
  shared_ptr<string> status{};

  DescribeCommitContainerTaskResponseBodyCommitTasksCommitPhaseInfos() {}

  explicit DescribeCommitContainerTaskResponseBodyCommitTasksCommitPhaseInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phase) {
      res["Phase"] = boost::any(*phase);
    }
    if (recordTime) {
      res["RecordTime"] = boost::any(*recordTime);
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
    if (m.find("Phase") != m.end() && !m["Phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["Phase"]));
    }
    if (m.find("RecordTime") != m.end() && !m["RecordTime"].empty()) {
      recordTime = make_shared<string>(boost::any_cast<string>(m["RecordTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCommitContainerTaskResponseBodyCommitTasksCommitPhaseInfos() = default;
};
class DescribeCommitContainerTaskResponseBodyCommitTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCommitContainerTaskResponseBodyCommitTasksCommitPhaseInfos>> commitPhaseInfos{};
  shared_ptr<string> containerName{};
  shared_ptr<string> statusMessage{};
  shared_ptr<string> taskCreationTime{};
  shared_ptr<string> taskFinishedTime{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskProgress{};
  shared_ptr<string> taskStatus{};

  DescribeCommitContainerTaskResponseBodyCommitTasks() {}

  explicit DescribeCommitContainerTaskResponseBodyCommitTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commitPhaseInfos) {
      vector<boost::any> temp1;
      for(auto item1:*commitPhaseInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CommitPhaseInfos"] = boost::any(temp1);
    }
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (taskCreationTime) {
      res["TaskCreationTime"] = boost::any(*taskCreationTime);
    }
    if (taskFinishedTime) {
      res["TaskFinishedTime"] = boost::any(*taskFinishedTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskProgress) {
      res["TaskProgress"] = boost::any(*taskProgress);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommitPhaseInfos") != m.end() && !m["CommitPhaseInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["CommitPhaseInfos"].type()) {
        vector<DescribeCommitContainerTaskResponseBodyCommitTasksCommitPhaseInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CommitPhaseInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCommitContainerTaskResponseBodyCommitTasksCommitPhaseInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commitPhaseInfos = make_shared<vector<DescribeCommitContainerTaskResponseBodyCommitTasksCommitPhaseInfos>>(expect1);
      }
    }
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("TaskCreationTime") != m.end() && !m["TaskCreationTime"].empty()) {
      taskCreationTime = make_shared<string>(boost::any_cast<string>(m["TaskCreationTime"]));
    }
    if (m.find("TaskFinishedTime") != m.end() && !m["TaskFinishedTime"].empty()) {
      taskFinishedTime = make_shared<string>(boost::any_cast<string>(m["TaskFinishedTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskProgress") != m.end() && !m["TaskProgress"].empty()) {
      taskProgress = make_shared<string>(boost::any_cast<string>(m["TaskProgress"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~DescribeCommitContainerTaskResponseBodyCommitTasks() = default;
};
class DescribeCommitContainerTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCommitContainerTaskResponseBodyCommitTasks>> commitTasks{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCommitContainerTaskResponseBody() {}

  explicit DescribeCommitContainerTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commitTasks) {
      vector<boost::any> temp1;
      for(auto item1:*commitTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CommitTasks"] = boost::any(temp1);
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
    if (m.find("CommitTasks") != m.end() && !m["CommitTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["CommitTasks"].type()) {
        vector<DescribeCommitContainerTaskResponseBodyCommitTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CommitTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCommitContainerTaskResponseBodyCommitTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commitTasks = make_shared<vector<DescribeCommitContainerTaskResponseBodyCommitTasks>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
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


  virtual ~DescribeCommitContainerTaskResponseBody() = default;
};
class DescribeCommitContainerTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCommitContainerTaskResponseBody> body{};

  DescribeCommitContainerTaskResponse() {}

  explicit DescribeCommitContainerTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCommitContainerTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCommitContainerTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCommitContainerTaskResponse() = default;
};
class DescribeContainerGroupEventsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeContainerGroupEventsRequestTag() {}

  explicit DescribeContainerGroupEventsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeContainerGroupEventsRequestTag() = default;
};
class DescribeContainerGroupEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupIds{};
  shared_ptr<string> eventSource{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> sinceSecond{};
  shared_ptr<vector<DescribeContainerGroupEventsRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeContainerGroupEventsRequest() {}

  explicit DescribeContainerGroupEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupIds) {
      res["ContainerGroupIds"] = boost::any(*containerGroupIds);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sinceSecond) {
      res["SinceSecond"] = boost::any(*sinceSecond);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
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
    if (m.find("ContainerGroupIds") != m.end() && !m["ContainerGroupIds"].empty()) {
      containerGroupIds = make_shared<string>(boost::any_cast<string>(m["ContainerGroupIds"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SinceSecond") != m.end() && !m["SinceSecond"].empty()) {
      sinceSecond = make_shared<long>(boost::any_cast<long>(m["SinceSecond"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeContainerGroupEventsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupEventsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeContainerGroupEventsRequestTag>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeContainerGroupEventsRequest() = default;
};
class DescribeContainerGroupEventsResponseBodyDataEventsMetadata : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};

  DescribeContainerGroupEventsResponseBodyDataEventsMetadata() {}

  explicit DescribeContainerGroupEventsResponseBodyDataEventsMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
  }


  virtual ~DescribeContainerGroupEventsResponseBodyDataEventsMetadata() = default;
};
class DescribeContainerGroupEventsResponseBodyDataEventsSource : public Darabonba::Model {
public:
  shared_ptr<string> component{};
  shared_ptr<string> host{};

  DescribeContainerGroupEventsResponseBodyDataEventsSource() {}

  explicit DescribeContainerGroupEventsResponseBodyDataEventsSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (component) {
      res["Component"] = boost::any(*component);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Component") != m.end() && !m["Component"].empty()) {
      component = make_shared<string>(boost::any_cast<string>(m["Component"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
  }


  virtual ~DescribeContainerGroupEventsResponseBodyDataEventsSource() = default;
};
class DescribeContainerGroupEventsResponseBodyDataEventsInvolvedObject : public Darabonba::Model {
public:
  shared_ptr<string> apiVersion{};
  shared_ptr<string> kind{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> uid{};

  DescribeContainerGroupEventsResponseBodyDataEventsInvolvedObject() {}

  explicit DescribeContainerGroupEventsResponseBodyDataEventsInvolvedObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiVersion) {
      res["ApiVersion"] = boost::any(*apiVersion);
    }
    if (kind) {
      res["Kind"] = boost::any(*kind);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiVersion") != m.end() && !m["ApiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["ApiVersion"]));
    }
    if (m.find("Kind") != m.end() && !m["Kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["Kind"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DescribeContainerGroupEventsResponseBodyDataEventsInvolvedObject() = default;
};
class DescribeContainerGroupEventsResponseBodyDataEvents : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> firstTimestamp{};
  shared_ptr<string> lastTimestamp{};
  shared_ptr<string> message{};
  shared_ptr<DescribeContainerGroupEventsResponseBodyDataEventsMetadata> metadata{};
  shared_ptr<string> reason{};
  shared_ptr<string> reportingComponent{};
  shared_ptr<string> reportingInstance{};
  shared_ptr<DescribeContainerGroupEventsResponseBodyDataEventsSource> source{};
  shared_ptr<string> type{};
  shared_ptr<DescribeContainerGroupEventsResponseBodyDataEventsInvolvedObject> involvedObject{};

  DescribeContainerGroupEventsResponseBodyDataEvents() {}

  explicit DescribeContainerGroupEventsResponseBodyDataEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (firstTimestamp) {
      res["FirstTimestamp"] = boost::any(*firstTimestamp);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (metadata) {
      res["Metadata"] = metadata ? boost::any(metadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (reportingComponent) {
      res["ReportingComponent"] = boost::any(*reportingComponent);
    }
    if (reportingInstance) {
      res["ReportingInstance"] = boost::any(*reportingInstance);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (involvedObject) {
      res["involvedObject"] = involvedObject ? boost::any(involvedObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("FirstTimestamp") != m.end() && !m["FirstTimestamp"].empty()) {
      firstTimestamp = make_shared<string>(boost::any_cast<string>(m["FirstTimestamp"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<string>(boost::any_cast<string>(m["LastTimestamp"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metadata"].type()) {
        DescribeContainerGroupEventsResponseBodyDataEventsMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metadata"]));
        metadata = make_shared<DescribeContainerGroupEventsResponseBodyDataEventsMetadata>(model1);
      }
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("ReportingComponent") != m.end() && !m["ReportingComponent"].empty()) {
      reportingComponent = make_shared<string>(boost::any_cast<string>(m["ReportingComponent"]));
    }
    if (m.find("ReportingInstance") != m.end() && !m["ReportingInstance"].empty()) {
      reportingInstance = make_shared<string>(boost::any_cast<string>(m["ReportingInstance"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        DescribeContainerGroupEventsResponseBodyDataEventsSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<DescribeContainerGroupEventsResponseBodyDataEventsSource>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("involvedObject") != m.end() && !m["involvedObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["involvedObject"].type()) {
        DescribeContainerGroupEventsResponseBodyDataEventsInvolvedObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["involvedObject"]));
        involvedObject = make_shared<DescribeContainerGroupEventsResponseBodyDataEventsInvolvedObject>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupEventsResponseBodyDataEvents() = default;
};
class DescribeContainerGroupEventsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> annotations{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<vector<DescribeContainerGroupEventsResponseBodyDataEvents>> events{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> uuid{};

  DescribeContainerGroupEventsResponseBodyData() {}

  explicit DescribeContainerGroupEventsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (uuid) {
      res["uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["Annotations"]));
    }
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeContainerGroupEventsResponseBodyDataEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupEventsResponseBodyDataEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeContainerGroupEventsResponseBodyDataEvents>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("uuid") != m.end() && !m["uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["uuid"]));
    }
  }


  virtual ~DescribeContainerGroupEventsResponseBodyData() = default;
};
class DescribeContainerGroupEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupEventsResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeContainerGroupEventsResponseBody() {}

  explicit DescribeContainerGroupEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeContainerGroupEventsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupEventsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeContainerGroupEventsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeContainerGroupEventsResponseBody() = default;
};
class DescribeContainerGroupEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeContainerGroupEventsResponseBody> body{};

  DescribeContainerGroupEventsResponse() {}

  explicit DescribeContainerGroupEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeContainerGroupEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeContainerGroupEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupEventsResponse() = default;
};
class DescribeContainerGroupMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribeContainerGroupMetricRequest() {}

  explicit DescribeContainerGroupMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
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
    if (period) {
      res["Period"] = boost::any(*period);
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
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
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
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
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


  virtual ~DescribeContainerGroupMetricRequest() = default;
};
class DescribeContainerGroupMetricResponseBodyRecordsCPU : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> load{};
  shared_ptr<long> usageCoreNanoSeconds{};
  shared_ptr<long> usageNanoCores{};

  DescribeContainerGroupMetricResponseBodyRecordsCPU() {}

  explicit DescribeContainerGroupMetricResponseBodyRecordsCPU(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (load) {
      res["Load"] = boost::any(*load);
    }
    if (usageCoreNanoSeconds) {
      res["UsageCoreNanoSeconds"] = boost::any(*usageCoreNanoSeconds);
    }
    if (usageNanoCores) {
      res["UsageNanoCores"] = boost::any(*usageNanoCores);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Load") != m.end() && !m["Load"].empty()) {
      load = make_shared<long>(boost::any_cast<long>(m["Load"]));
    }
    if (m.find("UsageCoreNanoSeconds") != m.end() && !m["UsageCoreNanoSeconds"].empty()) {
      usageCoreNanoSeconds = make_shared<long>(boost::any_cast<long>(m["UsageCoreNanoSeconds"]));
    }
    if (m.find("UsageNanoCores") != m.end() && !m["UsageNanoCores"].empty()) {
      usageNanoCores = make_shared<long>(boost::any_cast<long>(m["UsageNanoCores"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecordsCPU() = default;
};
class DescribeContainerGroupMetricResponseBodyRecordsContainersCPU : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> load{};
  shared_ptr<long> usageCoreNanoSeconds{};
  shared_ptr<long> usageNanoCores{};

  DescribeContainerGroupMetricResponseBodyRecordsContainersCPU() {}

  explicit DescribeContainerGroupMetricResponseBodyRecordsContainersCPU(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (load) {
      res["Load"] = boost::any(*load);
    }
    if (usageCoreNanoSeconds) {
      res["UsageCoreNanoSeconds"] = boost::any(*usageCoreNanoSeconds);
    }
    if (usageNanoCores) {
      res["UsageNanoCores"] = boost::any(*usageNanoCores);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Load") != m.end() && !m["Load"].empty()) {
      load = make_shared<long>(boost::any_cast<long>(m["Load"]));
    }
    if (m.find("UsageCoreNanoSeconds") != m.end() && !m["UsageCoreNanoSeconds"].empty()) {
      usageCoreNanoSeconds = make_shared<long>(boost::any_cast<long>(m["UsageCoreNanoSeconds"]));
    }
    if (m.find("UsageNanoCores") != m.end() && !m["UsageNanoCores"].empty()) {
      usageNanoCores = make_shared<long>(boost::any_cast<long>(m["UsageNanoCores"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecordsContainersCPU() = default;
};
class DescribeContainerGroupMetricResponseBodyRecordsContainersMemory : public Darabonba::Model {
public:
  shared_ptr<long> availableBytes{};
  shared_ptr<long> cache{};
  shared_ptr<long> rss{};
  shared_ptr<long> usageBytes{};
  shared_ptr<long> workingSet{};

  DescribeContainerGroupMetricResponseBodyRecordsContainersMemory() {}

  explicit DescribeContainerGroupMetricResponseBodyRecordsContainersMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableBytes) {
      res["AvailableBytes"] = boost::any(*availableBytes);
    }
    if (cache) {
      res["Cache"] = boost::any(*cache);
    }
    if (rss) {
      res["Rss"] = boost::any(*rss);
    }
    if (usageBytes) {
      res["UsageBytes"] = boost::any(*usageBytes);
    }
    if (workingSet) {
      res["WorkingSet"] = boost::any(*workingSet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableBytes") != m.end() && !m["AvailableBytes"].empty()) {
      availableBytes = make_shared<long>(boost::any_cast<long>(m["AvailableBytes"]));
    }
    if (m.find("Cache") != m.end() && !m["Cache"].empty()) {
      cache = make_shared<long>(boost::any_cast<long>(m["Cache"]));
    }
    if (m.find("Rss") != m.end() && !m["Rss"].empty()) {
      rss = make_shared<long>(boost::any_cast<long>(m["Rss"]));
    }
    if (m.find("UsageBytes") != m.end() && !m["UsageBytes"].empty()) {
      usageBytes = make_shared<long>(boost::any_cast<long>(m["UsageBytes"]));
    }
    if (m.find("WorkingSet") != m.end() && !m["WorkingSet"].empty()) {
      workingSet = make_shared<long>(boost::any_cast<long>(m["WorkingSet"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecordsContainersMemory() = default;
};
class DescribeContainerGroupMetricResponseBodyRecordsContainers : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupMetricResponseBodyRecordsContainersCPU> CPU{};
  shared_ptr<DescribeContainerGroupMetricResponseBodyRecordsContainersMemory> memory{};
  shared_ptr<string> name{};

  DescribeContainerGroupMetricResponseBodyRecordsContainers() {}

  explicit DescribeContainerGroupMetricResponseBodyRecordsContainers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = CPU ? boost::any(CPU->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memory) {
      res["Memory"] = memory ? boost::any(memory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      if (typeid(map<string, boost::any>) == m["CPU"].type()) {
        DescribeContainerGroupMetricResponseBodyRecordsContainersCPU model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CPU"]));
        CPU = make_shared<DescribeContainerGroupMetricResponseBodyRecordsContainersCPU>(model1);
      }
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Memory"].type()) {
        DescribeContainerGroupMetricResponseBodyRecordsContainersMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Memory"]));
        memory = make_shared<DescribeContainerGroupMetricResponseBodyRecordsContainersMemory>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecordsContainers() = default;
};
class DescribeContainerGroupMetricResponseBodyRecordsDisk : public Darabonba::Model {
public:
  shared_ptr<string> device{};
  shared_ptr<long> readBytes{};
  shared_ptr<long> readIO{};
  shared_ptr<long> writeBytes{};
  shared_ptr<long> writeIO{};

  DescribeContainerGroupMetricResponseBodyRecordsDisk() {}

  explicit DescribeContainerGroupMetricResponseBodyRecordsDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (readBytes) {
      res["ReadBytes"] = boost::any(*readBytes);
    }
    if (readIO) {
      res["ReadIO"] = boost::any(*readIO);
    }
    if (writeBytes) {
      res["WriteBytes"] = boost::any(*writeBytes);
    }
    if (writeIO) {
      res["WriteIO"] = boost::any(*writeIO);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("ReadBytes") != m.end() && !m["ReadBytes"].empty()) {
      readBytes = make_shared<long>(boost::any_cast<long>(m["ReadBytes"]));
    }
    if (m.find("ReadIO") != m.end() && !m["ReadIO"].empty()) {
      readIO = make_shared<long>(boost::any_cast<long>(m["ReadIO"]));
    }
    if (m.find("WriteBytes") != m.end() && !m["WriteBytes"].empty()) {
      writeBytes = make_shared<long>(boost::any_cast<long>(m["WriteBytes"]));
    }
    if (m.find("WriteIO") != m.end() && !m["WriteIO"].empty()) {
      writeIO = make_shared<long>(boost::any_cast<long>(m["WriteIO"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecordsDisk() = default;
};
class DescribeContainerGroupMetricResponseBodyRecordsFilesystem : public Darabonba::Model {
public:
  shared_ptr<long> available{};
  shared_ptr<long> capacity{};
  shared_ptr<string> category{};
  shared_ptr<string> fsName{};
  shared_ptr<long> usage{};

  DescribeContainerGroupMetricResponseBodyRecordsFilesystem() {}

  explicit DescribeContainerGroupMetricResponseBodyRecordsFilesystem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (available) {
      res["Available"] = boost::any(*available);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (fsName) {
      res["FsName"] = boost::any(*fsName);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Available") != m.end() && !m["Available"].empty()) {
      available = make_shared<long>(boost::any_cast<long>(m["Available"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("FsName") != m.end() && !m["FsName"].empty()) {
      fsName = make_shared<string>(boost::any_cast<string>(m["FsName"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<long>(boost::any_cast<long>(m["Usage"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecordsFilesystem() = default;
};
class DescribeContainerGroupMetricResponseBodyRecordsMemory : public Darabonba::Model {
public:
  shared_ptr<long> availableBytes{};
  shared_ptr<long> cache{};
  shared_ptr<long> rss{};
  shared_ptr<long> usageBytes{};
  shared_ptr<long> workingSet{};

  DescribeContainerGroupMetricResponseBodyRecordsMemory() {}

  explicit DescribeContainerGroupMetricResponseBodyRecordsMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableBytes) {
      res["AvailableBytes"] = boost::any(*availableBytes);
    }
    if (cache) {
      res["Cache"] = boost::any(*cache);
    }
    if (rss) {
      res["Rss"] = boost::any(*rss);
    }
    if (usageBytes) {
      res["UsageBytes"] = boost::any(*usageBytes);
    }
    if (workingSet) {
      res["WorkingSet"] = boost::any(*workingSet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableBytes") != m.end() && !m["AvailableBytes"].empty()) {
      availableBytes = make_shared<long>(boost::any_cast<long>(m["AvailableBytes"]));
    }
    if (m.find("Cache") != m.end() && !m["Cache"].empty()) {
      cache = make_shared<long>(boost::any_cast<long>(m["Cache"]));
    }
    if (m.find("Rss") != m.end() && !m["Rss"].empty()) {
      rss = make_shared<long>(boost::any_cast<long>(m["Rss"]));
    }
    if (m.find("UsageBytes") != m.end() && !m["UsageBytes"].empty()) {
      usageBytes = make_shared<long>(boost::any_cast<long>(m["UsageBytes"]));
    }
    if (m.find("WorkingSet") != m.end() && !m["WorkingSet"].empty()) {
      workingSet = make_shared<long>(boost::any_cast<long>(m["WorkingSet"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecordsMemory() = default;
};
class DescribeContainerGroupMetricResponseBodyRecordsNetworkInterfaces : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> rxBytes{};
  shared_ptr<long> rxDrops{};
  shared_ptr<long> rxErrors{};
  shared_ptr<long> rxPackets{};
  shared_ptr<long> txBytes{};
  shared_ptr<long> txDrops{};
  shared_ptr<long> txErrors{};
  shared_ptr<long> txPackets{};

  DescribeContainerGroupMetricResponseBodyRecordsNetworkInterfaces() {}

  explicit DescribeContainerGroupMetricResponseBodyRecordsNetworkInterfaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (rxBytes) {
      res["RxBytes"] = boost::any(*rxBytes);
    }
    if (rxDrops) {
      res["RxDrops"] = boost::any(*rxDrops);
    }
    if (rxErrors) {
      res["RxErrors"] = boost::any(*rxErrors);
    }
    if (rxPackets) {
      res["RxPackets"] = boost::any(*rxPackets);
    }
    if (txBytes) {
      res["TxBytes"] = boost::any(*txBytes);
    }
    if (txDrops) {
      res["TxDrops"] = boost::any(*txDrops);
    }
    if (txErrors) {
      res["TxErrors"] = boost::any(*txErrors);
    }
    if (txPackets) {
      res["TxPackets"] = boost::any(*txPackets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RxBytes") != m.end() && !m["RxBytes"].empty()) {
      rxBytes = make_shared<long>(boost::any_cast<long>(m["RxBytes"]));
    }
    if (m.find("RxDrops") != m.end() && !m["RxDrops"].empty()) {
      rxDrops = make_shared<long>(boost::any_cast<long>(m["RxDrops"]));
    }
    if (m.find("RxErrors") != m.end() && !m["RxErrors"].empty()) {
      rxErrors = make_shared<long>(boost::any_cast<long>(m["RxErrors"]));
    }
    if (m.find("RxPackets") != m.end() && !m["RxPackets"].empty()) {
      rxPackets = make_shared<long>(boost::any_cast<long>(m["RxPackets"]));
    }
    if (m.find("TxBytes") != m.end() && !m["TxBytes"].empty()) {
      txBytes = make_shared<long>(boost::any_cast<long>(m["TxBytes"]));
    }
    if (m.find("TxDrops") != m.end() && !m["TxDrops"].empty()) {
      txDrops = make_shared<long>(boost::any_cast<long>(m["TxDrops"]));
    }
    if (m.find("TxErrors") != m.end() && !m["TxErrors"].empty()) {
      txErrors = make_shared<long>(boost::any_cast<long>(m["TxErrors"]));
    }
    if (m.find("TxPackets") != m.end() && !m["TxPackets"].empty()) {
      txPackets = make_shared<long>(boost::any_cast<long>(m["TxPackets"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecordsNetworkInterfaces() = default;
};
class DescribeContainerGroupMetricResponseBodyRecordsNetwork : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupMetricResponseBodyRecordsNetworkInterfaces>> interfaces{};

  DescribeContainerGroupMetricResponseBodyRecordsNetwork() {}

  explicit DescribeContainerGroupMetricResponseBodyRecordsNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (interfaces) {
      vector<boost::any> temp1;
      for(auto item1:*interfaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Interfaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Interfaces") != m.end() && !m["Interfaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Interfaces"].type()) {
        vector<DescribeContainerGroupMetricResponseBodyRecordsNetworkInterfaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Interfaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupMetricResponseBodyRecordsNetworkInterfaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        interfaces = make_shared<vector<DescribeContainerGroupMetricResponseBodyRecordsNetworkInterfaces>>(expect1);
      }
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecordsNetwork() = default;
};
class DescribeContainerGroupMetricResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupMetricResponseBodyRecordsCPU> CPU{};
  shared_ptr<vector<DescribeContainerGroupMetricResponseBodyRecordsContainers>> containers{};
  shared_ptr<vector<DescribeContainerGroupMetricResponseBodyRecordsDisk>> disk{};
  shared_ptr<vector<DescribeContainerGroupMetricResponseBodyRecordsFilesystem>> filesystem{};
  shared_ptr<DescribeContainerGroupMetricResponseBodyRecordsMemory> memory{};
  shared_ptr<DescribeContainerGroupMetricResponseBodyRecordsNetwork> network{};
  shared_ptr<string> timestamp{};

  DescribeContainerGroupMetricResponseBodyRecords() {}

  explicit DescribeContainerGroupMetricResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = CPU ? boost::any(CPU->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (containers) {
      vector<boost::any> temp1;
      for(auto item1:*containers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Containers"] = boost::any(temp1);
    }
    if (disk) {
      vector<boost::any> temp1;
      for(auto item1:*disk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disk"] = boost::any(temp1);
    }
    if (filesystem) {
      vector<boost::any> temp1;
      for(auto item1:*filesystem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filesystem"] = boost::any(temp1);
    }
    if (memory) {
      res["Memory"] = memory ? boost::any(memory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      if (typeid(map<string, boost::any>) == m["CPU"].type()) {
        DescribeContainerGroupMetricResponseBodyRecordsCPU model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CPU"]));
        CPU = make_shared<DescribeContainerGroupMetricResponseBodyRecordsCPU>(model1);
      }
    }
    if (m.find("Containers") != m.end() && !m["Containers"].empty()) {
      if (typeid(vector<boost::any>) == m["Containers"].type()) {
        vector<DescribeContainerGroupMetricResponseBodyRecordsContainers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Containers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupMetricResponseBodyRecordsContainers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containers = make_shared<vector<DescribeContainerGroupMetricResponseBodyRecordsContainers>>(expect1);
      }
    }
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      if (typeid(vector<boost::any>) == m["Disk"].type()) {
        vector<DescribeContainerGroupMetricResponseBodyRecordsDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupMetricResponseBodyRecordsDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disk = make_shared<vector<DescribeContainerGroupMetricResponseBodyRecordsDisk>>(expect1);
      }
    }
    if (m.find("Filesystem") != m.end() && !m["Filesystem"].empty()) {
      if (typeid(vector<boost::any>) == m["Filesystem"].type()) {
        vector<DescribeContainerGroupMetricResponseBodyRecordsFilesystem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filesystem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupMetricResponseBodyRecordsFilesystem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filesystem = make_shared<vector<DescribeContainerGroupMetricResponseBodyRecordsFilesystem>>(expect1);
      }
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Memory"].type()) {
        DescribeContainerGroupMetricResponseBodyRecordsMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Memory"]));
        memory = make_shared<DescribeContainerGroupMetricResponseBodyRecordsMemory>(model1);
      }
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        DescribeContainerGroupMetricResponseBodyRecordsNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<DescribeContainerGroupMetricResponseBodyRecordsNetwork>(model1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBodyRecords() = default;
};
class DescribeContainerGroupMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<vector<DescribeContainerGroupMetricResponseBodyRecords>> records{};
  shared_ptr<string> requestId{};

  DescribeContainerGroupMetricResponseBody() {}

  explicit DescribeContainerGroupMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
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
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribeContainerGroupMetricResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupMetricResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeContainerGroupMetricResponseBodyRecords>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeContainerGroupMetricResponseBody() = default;
};
class DescribeContainerGroupMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeContainerGroupMetricResponseBody> body{};

  DescribeContainerGroupMetricResponse() {}

  explicit DescribeContainerGroupMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeContainerGroupMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeContainerGroupMetricResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupMetricResponse() = default;
};
class DescribeContainerGroupPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> computeCategory{};
  shared_ptr<double> cpu{};
  shared_ptr<long> ephemeralStorage{};
  shared_ptr<string> instanceType{};
  shared_ptr<double> memory{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> spotDuration{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> zoneId{};

  DescribeContainerGroupPriceRequest() {}

  explicit DescribeContainerGroupPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeCategory) {
      res["ComputeCategory"] = boost::any(*computeCategory);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (ephemeralStorage) {
      res["EphemeralStorage"] = boost::any(*ephemeralStorage);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
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
    if (spotDuration) {
      res["SpotDuration"] = boost::any(*spotDuration);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComputeCategory") != m.end() && !m["ComputeCategory"].empty()) {
      computeCategory = make_shared<string>(boost::any_cast<string>(m["ComputeCategory"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("EphemeralStorage") != m.end() && !m["EphemeralStorage"].empty()) {
      ephemeralStorage = make_shared<long>(boost::any_cast<long>(m["EphemeralStorage"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
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
    if (m.find("SpotDuration") != m.end() && !m["SpotDuration"].empty()) {
      spotDuration = make_shared<long>(boost::any_cast<long>(m["SpotDuration"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeContainerGroupPriceRequest() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRulesRule() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRulesRule() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRulesRule>> rule{};

  DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRules() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRules() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo : public Darabonba::Model {
public:
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<string> resource{};
  shared_ptr<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRules> rules{};
  shared_ptr<double> tradePrice{};

  DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoRules>(model1);
      }
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>> detailInfo{};

  DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfos() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailInfo) {
      vector<boost::any> temp1;
      for(auto item1:*detailInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailInfo") != m.end() && !m["DetailInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailInfo"].type()) {
        vector<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailInfo = make_shared<vector<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfosDetailInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfos() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfoPrice : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfos> detailInfos{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  DescribeContainerGroupPriceResponseBodyPriceInfoPrice() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfoPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (detailInfos) {
      res["DetailInfos"] = detailInfos ? boost::any(detailInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DetailInfos") != m.end() && !m["DetailInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetailInfos"].type()) {
        DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetailInfos"]));
        detailInfos = make_shared<DescribeContainerGroupPriceResponseBodyPriceInfoPriceDetailInfos>(model1);
      }
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfoPrice() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfoRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  DescribeContainerGroupPriceResponseBodyPriceInfoRulesRule() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfoRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfoRulesRule() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfoRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupPriceResponseBodyPriceInfoRulesRule>> rule{};

  DescribeContainerGroupPriceResponseBodyPriceInfoRules() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfoRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribeContainerGroupPriceResponseBodyPriceInfoRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupPriceResponseBodyPriceInfoRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribeContainerGroupPriceResponseBodyPriceInfoRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfoRules() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfoSpotPricesSpotPrice : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<double> originPrice{};
  shared_ptr<double> spotPrice{};
  shared_ptr<string> zoneId{};

  DescribeContainerGroupPriceResponseBodyPriceInfoSpotPricesSpotPrice() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfoSpotPricesSpotPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (originPrice) {
      res["OriginPrice"] = boost::any(*originPrice);
    }
    if (spotPrice) {
      res["SpotPrice"] = boost::any(*spotPrice);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OriginPrice") != m.end() && !m["OriginPrice"].empty()) {
      originPrice = make_shared<double>(boost::any_cast<double>(m["OriginPrice"]));
    }
    if (m.find("SpotPrice") != m.end() && !m["SpotPrice"].empty()) {
      spotPrice = make_shared<double>(boost::any_cast<double>(m["SpotPrice"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfoSpotPricesSpotPrice() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfoSpotPrices : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupPriceResponseBodyPriceInfoSpotPricesSpotPrice>> spotPrice{};

  DescribeContainerGroupPriceResponseBodyPriceInfoSpotPrices() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfoSpotPrices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spotPrice) {
      vector<boost::any> temp1;
      for(auto item1:*spotPrice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpotPrice"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpotPrice") != m.end() && !m["SpotPrice"].empty()) {
      if (typeid(vector<boost::any>) == m["SpotPrice"].type()) {
        vector<DescribeContainerGroupPriceResponseBodyPriceInfoSpotPricesSpotPrice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpotPrice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupPriceResponseBodyPriceInfoSpotPricesSpotPrice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPrice = make_shared<vector<DescribeContainerGroupPriceResponseBodyPriceInfoSpotPricesSpotPrice>>(expect1);
      }
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfoSpotPrices() = default;
};
class DescribeContainerGroupPriceResponseBodyPriceInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupPriceResponseBodyPriceInfoPrice> price{};
  shared_ptr<DescribeContainerGroupPriceResponseBodyPriceInfoRules> rules{};
  shared_ptr<DescribeContainerGroupPriceResponseBodyPriceInfoSpotPrices> spotPrices{};

  DescribeContainerGroupPriceResponseBodyPriceInfo() {}

  explicit DescribeContainerGroupPriceResponseBodyPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["Price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spotPrices) {
      res["SpotPrices"] = spotPrices ? boost::any(spotPrices->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      if (typeid(map<string, boost::any>) == m["Price"].type()) {
        DescribeContainerGroupPriceResponseBodyPriceInfoPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Price"]));
        price = make_shared<DescribeContainerGroupPriceResponseBodyPriceInfoPrice>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribeContainerGroupPriceResponseBodyPriceInfoRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribeContainerGroupPriceResponseBodyPriceInfoRules>(model1);
      }
    }
    if (m.find("SpotPrices") != m.end() && !m["SpotPrices"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpotPrices"].type()) {
        DescribeContainerGroupPriceResponseBodyPriceInfoSpotPrices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpotPrices"]));
        spotPrices = make_shared<DescribeContainerGroupPriceResponseBodyPriceInfoSpotPrices>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBodyPriceInfo() = default;
};
class DescribeContainerGroupPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupPriceResponseBodyPriceInfo> priceInfo{};
  shared_ptr<string> requestId{};

  DescribeContainerGroupPriceResponseBody() {}

  explicit DescribeContainerGroupPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priceInfo) {
      res["PriceInfo"] = priceInfo ? boost::any(priceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceInfo"].type()) {
        DescribeContainerGroupPriceResponseBodyPriceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceInfo"]));
        priceInfo = make_shared<DescribeContainerGroupPriceResponseBodyPriceInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeContainerGroupPriceResponseBody() = default;
};
class DescribeContainerGroupPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeContainerGroupPriceResponseBody> body{};

  DescribeContainerGroupPriceResponse() {}

  explicit DescribeContainerGroupPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeContainerGroupPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeContainerGroupPriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupPriceResponse() = default;
};
class DescribeContainerGroupStatusRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeContainerGroupStatusRequestTag() {}

  explicit DescribeContainerGroupStatusRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeContainerGroupStatusRequestTag() = default;
};
class DescribeContainerGroupStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupIds{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> sinceSecond{};
  shared_ptr<vector<DescribeContainerGroupStatusRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeContainerGroupStatusRequest() {}

  explicit DescribeContainerGroupStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupIds) {
      res["ContainerGroupIds"] = boost::any(*containerGroupIds);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sinceSecond) {
      res["SinceSecond"] = boost::any(*sinceSecond);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
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
    if (m.find("ContainerGroupIds") != m.end() && !m["ContainerGroupIds"].empty()) {
      containerGroupIds = make_shared<string>(boost::any_cast<string>(m["ContainerGroupIds"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SinceSecond") != m.end() && !m["SinceSecond"].empty()) {
      sinceSecond = make_shared<long>(boost::any_cast<long>(m["SinceSecond"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeContainerGroupStatusRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupStatusRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeContainerGroupStatusRequestTag>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeContainerGroupStatusRequest() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusConditions : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<string> lastTransitionTime{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusConditions() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (lastTransitionTime) {
      res["lastTransitionTime"] = boost::any(*lastTransitionTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("lastTransitionTime") != m.end() && !m["lastTransitionTime"].empty()) {
      lastTransitionTime = make_shared<string>(boost::any_cast<string>(m["lastTransitionTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusConditions() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateRunning : public Darabonba::Model {
public:
  shared_ptr<string> startedAtstartedAt{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateRunning() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateRunning(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startedAtstartedAt) {
      res["StartedAtstartedAt"] = boost::any(*startedAtstartedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartedAtstartedAt") != m.end() && !m["StartedAtstartedAt"].empty()) {
      startedAtstartedAt = make_shared<string>(boost::any_cast<string>(m["StartedAtstartedAt"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateRunning() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateTerminated : public Darabonba::Model {
public:
  shared_ptr<string> containerID{};
  shared_ptr<long> exitCode{};
  shared_ptr<string> finishedAt{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<long> signal{};
  shared_ptr<string> startedAt{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateTerminated() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateTerminated(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerID) {
      res["ContainerID"] = boost::any(*containerID);
    }
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (finishedAt) {
      res["FinishedAt"] = boost::any(*finishedAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (signal) {
      res["Signal"] = boost::any(*signal);
    }
    if (startedAt) {
      res["StartedAt"] = boost::any(*startedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerID") != m.end() && !m["ContainerID"].empty()) {
      containerID = make_shared<string>(boost::any_cast<string>(m["ContainerID"]));
    }
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("FinishedAt") != m.end() && !m["FinishedAt"].empty()) {
      finishedAt = make_shared<string>(boost::any_cast<string>(m["FinishedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Signal") != m.end() && !m["Signal"].empty()) {
      signal = make_shared<long>(boost::any_cast<long>(m["Signal"]));
    }
    if (m.find("StartedAt") != m.end() && !m["StartedAt"].empty()) {
      startedAt = make_shared<string>(boost::any_cast<string>(m["StartedAt"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateTerminated() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateWaiting : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> reason{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateWaiting() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateWaiting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateWaiting() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastState : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateRunning> running{};
  shared_ptr<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateTerminated> terminated{};
  shared_ptr<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateWaiting> waiting{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastState() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (running) {
      res["Running"] = running ? boost::any(running->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (terminated) {
      res["Terminated"] = terminated ? boost::any(terminated->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (waiting) {
      res["Waiting"] = waiting ? boost::any(waiting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Running") != m.end() && !m["Running"].empty()) {
      if (typeid(map<string, boost::any>) == m["Running"].type()) {
        DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateRunning model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Running"]));
        running = make_shared<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateRunning>(model1);
      }
    }
    if (m.find("Terminated") != m.end() && !m["Terminated"].empty()) {
      if (typeid(map<string, boost::any>) == m["Terminated"].type()) {
        DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateTerminated model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Terminated"]));
        terminated = make_shared<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateTerminated>(model1);
      }
    }
    if (m.find("Waiting") != m.end() && !m["Waiting"].empty()) {
      if (typeid(map<string, boost::any>) == m["Waiting"].type()) {
        DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateWaiting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Waiting"]));
        waiting = make_shared<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastStateWaiting>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastState() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateRunning : public Darabonba::Model {
public:
  shared_ptr<string> startedAtstartedAt{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateRunning() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateRunning(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startedAtstartedAt) {
      res["StartedAtstartedAt"] = boost::any(*startedAtstartedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartedAtstartedAt") != m.end() && !m["StartedAtstartedAt"].empty()) {
      startedAtstartedAt = make_shared<string>(boost::any_cast<string>(m["StartedAtstartedAt"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateRunning() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateTerminated : public Darabonba::Model {
public:
  shared_ptr<string> containerID{};
  shared_ptr<long> exitCode{};
  shared_ptr<string> finishedAt{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<long> signal{};
  shared_ptr<string> startedAt{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateTerminated() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateTerminated(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerID) {
      res["ContainerID"] = boost::any(*containerID);
    }
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (finishedAt) {
      res["FinishedAt"] = boost::any(*finishedAt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (signal) {
      res["Signal"] = boost::any(*signal);
    }
    if (startedAt) {
      res["StartedAt"] = boost::any(*startedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerID") != m.end() && !m["ContainerID"].empty()) {
      containerID = make_shared<string>(boost::any_cast<string>(m["ContainerID"]));
    }
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("FinishedAt") != m.end() && !m["FinishedAt"].empty()) {
      finishedAt = make_shared<string>(boost::any_cast<string>(m["FinishedAt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Signal") != m.end() && !m["Signal"].empty()) {
      signal = make_shared<long>(boost::any_cast<long>(m["Signal"]));
    }
    if (m.find("StartedAt") != m.end() && !m["StartedAt"].empty()) {
      startedAt = make_shared<string>(boost::any_cast<string>(m["StartedAt"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateTerminated() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateWaiting : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> reason{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateWaiting() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateWaiting(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateWaiting() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesState : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateRunning> running{};
  shared_ptr<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateTerminated> terminated{};
  shared_ptr<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateWaiting> waiting{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesState() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (running) {
      res["Running"] = running ? boost::any(running->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (terminated) {
      res["Terminated"] = terminated ? boost::any(terminated->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (waiting) {
      res["Waiting"] = waiting ? boost::any(waiting->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Running") != m.end() && !m["Running"].empty()) {
      if (typeid(map<string, boost::any>) == m["Running"].type()) {
        DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateRunning model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Running"]));
        running = make_shared<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateRunning>(model1);
      }
    }
    if (m.find("Terminated") != m.end() && !m["Terminated"].empty()) {
      if (typeid(map<string, boost::any>) == m["Terminated"].type()) {
        DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateTerminated model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Terminated"]));
        terminated = make_shared<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateTerminated>(model1);
      }
    }
    if (m.find("Waiting") != m.end() && !m["Waiting"].empty()) {
      if (typeid(map<string, boost::any>) == m["Waiting"].type()) {
        DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateWaiting model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Waiting"]));
        waiting = make_shared<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesStateWaiting>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesState() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatuses : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> imageID{};
  shared_ptr<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastState> lastState{};
  shared_ptr<string> name{};
  shared_ptr<bool> ready{};
  shared_ptr<long> restartCount{};
  shared_ptr<bool> started{};
  shared_ptr<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesState> state{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatuses() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatuses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imageID) {
      res["ImageID"] = boost::any(*imageID);
    }
    if (lastState) {
      res["LastState"] = lastState ? boost::any(lastState->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ready) {
      res["Ready"] = boost::any(*ready);
    }
    if (restartCount) {
      res["RestartCount"] = boost::any(*restartCount);
    }
    if (started) {
      res["Started"] = boost::any(*started);
    }
    if (state) {
      res["State"] = state ? boost::any(state->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImageID") != m.end() && !m["ImageID"].empty()) {
      imageID = make_shared<string>(boost::any_cast<string>(m["ImageID"]));
    }
    if (m.find("LastState") != m.end() && !m["LastState"].empty()) {
      if (typeid(map<string, boost::any>) == m["LastState"].type()) {
        DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastState model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LastState"]));
        lastState = make_shared<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesLastState>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Ready") != m.end() && !m["Ready"].empty()) {
      ready = make_shared<bool>(boost::any_cast<bool>(m["Ready"]));
    }
    if (m.find("RestartCount") != m.end() && !m["RestartCount"].empty()) {
      restartCount = make_shared<long>(boost::any_cast<long>(m["RestartCount"]));
    }
    if (m.find("Started") != m.end() && !m["Started"].empty()) {
      started = make_shared<bool>(boost::any_cast<bool>(m["Started"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      if (typeid(map<string, boost::any>) == m["State"].type()) {
        DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesState model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["State"]));
        state = make_shared<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatusesState>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatuses() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatusPodIps : public Darabonba::Model {
public:
  shared_ptr<string> ip{};

  DescribeContainerGroupStatusResponseBodyDataPodStatusPodIps() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatusPodIps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatusPodIps() = default;
};
class DescribeContainerGroupStatusResponseBodyDataPodStatus : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupStatusResponseBodyDataPodStatusConditions>> conditions{};
  shared_ptr<vector<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatuses>> containerStatuses{};
  shared_ptr<string> hostIp{};
  shared_ptr<string> phase{};
  shared_ptr<string> podIp{};
  shared_ptr<vector<DescribeContainerGroupStatusResponseBodyDataPodStatusPodIps>> podIps{};
  shared_ptr<string> qosClass{};
  shared_ptr<string> startTime{};

  DescribeContainerGroupStatusResponseBodyDataPodStatus() {}

  explicit DescribeContainerGroupStatusResponseBodyDataPodStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conditions"] = boost::any(temp1);
    }
    if (containerStatuses) {
      vector<boost::any> temp1;
      for(auto item1:*containerStatuses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContainerStatuses"] = boost::any(temp1);
    }
    if (hostIp) {
      res["HostIp"] = boost::any(*hostIp);
    }
    if (phase) {
      res["Phase"] = boost::any(*phase);
    }
    if (podIp) {
      res["PodIp"] = boost::any(*podIp);
    }
    if (podIps) {
      vector<boost::any> temp1;
      for(auto item1:*podIps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PodIps"] = boost::any(temp1);
    }
    if (qosClass) {
      res["QosClass"] = boost::any(*qosClass);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["Conditions"].type()) {
        vector<DescribeContainerGroupStatusResponseBodyDataPodStatusConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupStatusResponseBodyDataPodStatusConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<DescribeContainerGroupStatusResponseBodyDataPodStatusConditions>>(expect1);
      }
    }
    if (m.find("ContainerStatuses") != m.end() && !m["ContainerStatuses"].empty()) {
      if (typeid(vector<boost::any>) == m["ContainerStatuses"].type()) {
        vector<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatuses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContainerStatuses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatuses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containerStatuses = make_shared<vector<DescribeContainerGroupStatusResponseBodyDataPodStatusContainerStatuses>>(expect1);
      }
    }
    if (m.find("HostIp") != m.end() && !m["HostIp"].empty()) {
      hostIp = make_shared<string>(boost::any_cast<string>(m["HostIp"]));
    }
    if (m.find("Phase") != m.end() && !m["Phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["Phase"]));
    }
    if (m.find("PodIp") != m.end() && !m["PodIp"].empty()) {
      podIp = make_shared<string>(boost::any_cast<string>(m["PodIp"]));
    }
    if (m.find("PodIps") != m.end() && !m["PodIps"].empty()) {
      if (typeid(vector<boost::any>) == m["PodIps"].type()) {
        vector<DescribeContainerGroupStatusResponseBodyDataPodStatusPodIps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PodIps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupStatusResponseBodyDataPodStatusPodIps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        podIps = make_shared<vector<DescribeContainerGroupStatusResponseBodyDataPodStatusPodIps>>(expect1);
      }
    }
    if (m.find("QosClass") != m.end() && !m["QosClass"].empty()) {
      qosClass = make_shared<string>(boost::any_cast<string>(m["QosClass"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyDataPodStatus() = default;
};
class DescribeContainerGroupStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> annotations{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<DescribeContainerGroupStatusResponseBodyDataPodStatus> podStatus{};
  shared_ptr<string> status{};
  shared_ptr<string> uuid{};

  DescribeContainerGroupStatusResponseBodyData() {}

  explicit DescribeContainerGroupStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (podStatus) {
      res["PodStatus"] = podStatus ? boost::any(podStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uuid) {
      res["uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["Annotations"]));
    }
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("PodStatus") != m.end() && !m["PodStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["PodStatus"].type()) {
        DescribeContainerGroupStatusResponseBodyDataPodStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PodStatus"]));
        podStatus = make_shared<DescribeContainerGroupStatusResponseBodyDataPodStatus>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("uuid") != m.end() && !m["uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["uuid"]));
    }
  }


  virtual ~DescribeContainerGroupStatusResponseBodyData() = default;
};
class DescribeContainerGroupStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupStatusResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeContainerGroupStatusResponseBody() {}

  explicit DescribeContainerGroupStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeContainerGroupStatusResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupStatusResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeContainerGroupStatusResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeContainerGroupStatusResponseBody() = default;
};
class DescribeContainerGroupStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeContainerGroupStatusResponseBody> body{};

  DescribeContainerGroupStatusResponse() {}

  explicit DescribeContainerGroupStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeContainerGroupStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeContainerGroupStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupStatusResponse() = default;
};
class DescribeContainerGroupsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeContainerGroupsRequestTag() {}

  explicit DescribeContainerGroupsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeContainerGroupsRequestTag() = default;
};
class DescribeContainerGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> computeCategory{};
  shared_ptr<string> containerGroupIds{};
  shared_ptr<string> containerGroupName{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeContainerGroupsRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<bool> withEvent{};
  shared_ptr<string> zoneId{};

  DescribeContainerGroupsRequest() {}

  explicit DescribeContainerGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeCategory) {
      res["ComputeCategory"] = boost::any(*computeCategory);
    }
    if (containerGroupIds) {
      res["ContainerGroupIds"] = boost::any(*containerGroupIds);
    }
    if (containerGroupName) {
      res["ContainerGroupName"] = boost::any(*containerGroupName);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (withEvent) {
      res["WithEvent"] = boost::any(*withEvent);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComputeCategory") != m.end() && !m["ComputeCategory"].empty()) {
      computeCategory = make_shared<string>(boost::any_cast<string>(m["ComputeCategory"]));
    }
    if (m.find("ContainerGroupIds") != m.end() && !m["ContainerGroupIds"].empty()) {
      containerGroupIds = make_shared<string>(boost::any_cast<string>(m["ContainerGroupIds"]));
    }
    if (m.find("ContainerGroupName") != m.end() && !m["ContainerGroupName"].empty()) {
      containerGroupName = make_shared<string>(boost::any_cast<string>(m["ContainerGroupName"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
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
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeContainerGroupsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeContainerGroupsRequestTag>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("WithEvent") != m.end() && !m["WithEvent"].empty()) {
      withEvent = make_shared<bool>(boost::any_cast<bool>(m["WithEvent"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeContainerGroupsRequest() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersCurrentState : public Darabonba::Model {
public:
  shared_ptr<string> detailStatus{};
  shared_ptr<long> exitCode{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<long> signal{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersCurrentState() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersCurrentState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailStatus) {
      res["DetailStatus"] = boost::any(*detailStatus);
    }
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (signal) {
      res["Signal"] = boost::any(*signal);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailStatus") != m.end() && !m["DetailStatus"].empty()) {
      detailStatus = make_shared<string>(boost::any_cast<string>(m["DetailStatus"]));
    }
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Signal") != m.end() && !m["Signal"].empty()) {
      signal = make_shared<long>(boost::any_cast<long>(m["Signal"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersCurrentState() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFromFieldRef : public Darabonba::Model {
public:
  shared_ptr<string> fieldPath{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFromFieldRef() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFromFieldRef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldPath) {
      res["FieldPath"] = boost::any(*fieldPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldPath") != m.end() && !m["FieldPath"].empty()) {
      fieldPath = make_shared<string>(boost::any_cast<string>(m["FieldPath"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFromFieldRef() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFrom : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFromFieldRef> fieldRef{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFrom() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFrom(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldRef) {
      res["FieldRef"] = fieldRef ? boost::any(fieldRef->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldRef") != m.end() && !m["FieldRef"].empty()) {
      if (typeid(map<string, boost::any>) == m["FieldRef"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFromFieldRef model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FieldRef"]));
        fieldRef = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFromFieldRef>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFrom() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVars : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFrom> valueFrom{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVars() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVars(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (valueFrom) {
      res["ValueFrom"] = valueFrom ? boost::any(valueFrom->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ValueFrom") != m.end() && !m["ValueFrom"].empty()) {
      if (typeid(map<string, boost::any>) == m["ValueFrom"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFrom model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ValueFrom"]));
        valueFrom = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVarsValueFrom>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVars() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeHttpGet : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<long> port{};
  shared_ptr<string> scheme{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeHttpGet() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeHttpGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeHttpGet() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeTcpSocket : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<long> port{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeTcpSocket() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeTcpSocket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeTcpSocket() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbe : public Darabonba::Model {
public:
  shared_ptr<vector<string>> execs{};
  shared_ptr<long> failureThreshold{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeHttpGet> httpGet{};
  shared_ptr<long> initialDelaySeconds{};
  shared_ptr<long> periodSeconds{};
  shared_ptr<long> successThreshold{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeTcpSocket> tcpSocket{};
  shared_ptr<long> timeoutSeconds{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbe() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (execs) {
      res["Execs"] = boost::any(*execs);
    }
    if (failureThreshold) {
      res["FailureThreshold"] = boost::any(*failureThreshold);
    }
    if (httpGet) {
      res["HttpGet"] = httpGet ? boost::any(httpGet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initialDelaySeconds) {
      res["InitialDelaySeconds"] = boost::any(*initialDelaySeconds);
    }
    if (periodSeconds) {
      res["PeriodSeconds"] = boost::any(*periodSeconds);
    }
    if (successThreshold) {
      res["SuccessThreshold"] = boost::any(*successThreshold);
    }
    if (tcpSocket) {
      res["TcpSocket"] = tcpSocket ? boost::any(tcpSocket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeoutSeconds) {
      res["TimeoutSeconds"] = boost::any(*timeoutSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Execs") != m.end() && !m["Execs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Execs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Execs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      execs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FailureThreshold") != m.end() && !m["FailureThreshold"].empty()) {
      failureThreshold = make_shared<long>(boost::any_cast<long>(m["FailureThreshold"]));
    }
    if (m.find("HttpGet") != m.end() && !m["HttpGet"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpGet"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeHttpGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpGet"]));
        httpGet = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeHttpGet>(model1);
      }
    }
    if (m.find("InitialDelaySeconds") != m.end() && !m["InitialDelaySeconds"].empty()) {
      initialDelaySeconds = make_shared<long>(boost::any_cast<long>(m["InitialDelaySeconds"]));
    }
    if (m.find("PeriodSeconds") != m.end() && !m["PeriodSeconds"].empty()) {
      periodSeconds = make_shared<long>(boost::any_cast<long>(m["PeriodSeconds"]));
    }
    if (m.find("SuccessThreshold") != m.end() && !m["SuccessThreshold"].empty()) {
      successThreshold = make_shared<long>(boost::any_cast<long>(m["SuccessThreshold"]));
    }
    if (m.find("TcpSocket") != m.end() && !m["TcpSocket"].empty()) {
      if (typeid(map<string, boost::any>) == m["TcpSocket"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeTcpSocket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TcpSocket"]));
        tcpSocket = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbeTcpSocket>(model1);
      }
    }
    if (m.find("TimeoutSeconds") != m.end() && !m["TimeoutSeconds"].empty()) {
      timeoutSeconds = make_shared<long>(boost::any_cast<long>(m["TimeoutSeconds"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbe() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersPorts : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersPorts() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersPorts() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersPreviousState : public Darabonba::Model {
public:
  shared_ptr<string> detailStatus{};
  shared_ptr<long> exitCode{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<long> signal{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersPreviousState() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersPreviousState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailStatus) {
      res["DetailStatus"] = boost::any(*detailStatus);
    }
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (signal) {
      res["Signal"] = boost::any(*signal);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailStatus") != m.end() && !m["DetailStatus"].empty()) {
      detailStatus = make_shared<string>(boost::any_cast<string>(m["DetailStatus"]));
    }
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Signal") != m.end() && !m["Signal"].empty()) {
      signal = make_shared<long>(boost::any_cast<long>(m["Signal"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersPreviousState() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeHttpGet : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<long> port{};
  shared_ptr<string> scheme{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeHttpGet() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeHttpGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeHttpGet() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeTcpSocket : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<long> port{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeTcpSocket() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeTcpSocket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeTcpSocket() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbe : public Darabonba::Model {
public:
  shared_ptr<vector<string>> execs{};
  shared_ptr<long> failureThreshold{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeHttpGet> httpGet{};
  shared_ptr<long> initialDelaySeconds{};
  shared_ptr<long> periodSeconds{};
  shared_ptr<long> successThreshold{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeTcpSocket> tcpSocket{};
  shared_ptr<long> timeoutSeconds{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbe() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (execs) {
      res["Execs"] = boost::any(*execs);
    }
    if (failureThreshold) {
      res["FailureThreshold"] = boost::any(*failureThreshold);
    }
    if (httpGet) {
      res["HttpGet"] = httpGet ? boost::any(httpGet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initialDelaySeconds) {
      res["InitialDelaySeconds"] = boost::any(*initialDelaySeconds);
    }
    if (periodSeconds) {
      res["PeriodSeconds"] = boost::any(*periodSeconds);
    }
    if (successThreshold) {
      res["SuccessThreshold"] = boost::any(*successThreshold);
    }
    if (tcpSocket) {
      res["TcpSocket"] = tcpSocket ? boost::any(tcpSocket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeoutSeconds) {
      res["TimeoutSeconds"] = boost::any(*timeoutSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Execs") != m.end() && !m["Execs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Execs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Execs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      execs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FailureThreshold") != m.end() && !m["FailureThreshold"].empty()) {
      failureThreshold = make_shared<long>(boost::any_cast<long>(m["FailureThreshold"]));
    }
    if (m.find("HttpGet") != m.end() && !m["HttpGet"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpGet"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeHttpGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpGet"]));
        httpGet = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeHttpGet>(model1);
      }
    }
    if (m.find("InitialDelaySeconds") != m.end() && !m["InitialDelaySeconds"].empty()) {
      initialDelaySeconds = make_shared<long>(boost::any_cast<long>(m["InitialDelaySeconds"]));
    }
    if (m.find("PeriodSeconds") != m.end() && !m["PeriodSeconds"].empty()) {
      periodSeconds = make_shared<long>(boost::any_cast<long>(m["PeriodSeconds"]));
    }
    if (m.find("SuccessThreshold") != m.end() && !m["SuccessThreshold"].empty()) {
      successThreshold = make_shared<long>(boost::any_cast<long>(m["SuccessThreshold"]));
    }
    if (m.find("TcpSocket") != m.end() && !m["TcpSocket"].empty()) {
      if (typeid(map<string, boost::any>) == m["TcpSocket"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeTcpSocket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TcpSocket"]));
        tcpSocket = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbeTcpSocket>(model1);
      }
    }
    if (m.find("TimeoutSeconds") != m.end() && !m["TimeoutSeconds"].empty()) {
      timeoutSeconds = make_shared<long>(boost::any_cast<long>(m["TimeoutSeconds"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbe() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContextCapability : public Darabonba::Model {
public:
  shared_ptr<vector<string>> adds{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContextCapability() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContextCapability(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adds) {
      res["Adds"] = boost::any(*adds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Adds") != m.end() && !m["Adds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Adds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Adds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContextCapability() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContext : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContextCapability> capability{};
  shared_ptr<bool> readOnlyRootFilesystem{};
  shared_ptr<long> runAsUser{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContext() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capability) {
      res["Capability"] = capability ? boost::any(capability->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readOnlyRootFilesystem) {
      res["ReadOnlyRootFilesystem"] = boost::any(*readOnlyRootFilesystem);
    }
    if (runAsUser) {
      res["RunAsUser"] = boost::any(*runAsUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capability") != m.end() && !m["Capability"].empty()) {
      if (typeid(map<string, boost::any>) == m["Capability"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContextCapability model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Capability"]));
        capability = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContextCapability>(model1);
      }
    }
    if (m.find("ReadOnlyRootFilesystem") != m.end() && !m["ReadOnlyRootFilesystem"].empty()) {
      readOnlyRootFilesystem = make_shared<bool>(boost::any_cast<bool>(m["ReadOnlyRootFilesystem"]));
    }
    if (m.find("RunAsUser") != m.end() && !m["RunAsUser"].empty()) {
      runAsUser = make_shared<long>(boost::any_cast<long>(m["RunAsUser"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContext() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainersVolumeMounts : public Darabonba::Model {
public:
  shared_ptr<string> mountPath{};
  shared_ptr<string> mountPropagation{};
  shared_ptr<string> name{};
  shared_ptr<bool> readOnly{};
  shared_ptr<string> subPath{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainersVolumeMounts() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainersVolumeMounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (mountPropagation) {
      res["MountPropagation"] = boost::any(*mountPropagation);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (readOnly) {
      res["ReadOnly"] = boost::any(*readOnly);
    }
    if (subPath) {
      res["SubPath"] = boost::any(*subPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("MountPropagation") != m.end() && !m["MountPropagation"].empty()) {
      mountPropagation = make_shared<string>(boost::any_cast<string>(m["MountPropagation"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ReadOnly") != m.end() && !m["ReadOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["ReadOnly"]));
    }
    if (m.find("SubPath") != m.end() && !m["SubPath"].empty()) {
      subPath = make_shared<string>(boost::any_cast<string>(m["SubPath"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainersVolumeMounts() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsContainers : public Darabonba::Model {
public:
  shared_ptr<vector<string>> args{};
  shared_ptr<vector<string>> commands{};
  shared_ptr<double> cpu{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersCurrentState> currentState{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVars>> environmentVars{};
  shared_ptr<long> gpu{};
  shared_ptr<string> image{};
  shared_ptr<string> imagePullPolicy{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbe> livenessProbe{};
  shared_ptr<double> memory{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsContainersPorts>> ports{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersPreviousState> previousState{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbe> readinessProbe{};
  shared_ptr<bool> ready{};
  shared_ptr<long> restartCount{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContext> securityContext{};
  shared_ptr<bool> stdin{};
  shared_ptr<bool> stdinOnce{};
  shared_ptr<bool> tty{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsContainersVolumeMounts>> volumeMounts{};
  shared_ptr<string> workingDir{};

  DescribeContainerGroupsResponseBodyContainerGroupsContainers() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsContainers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (commands) {
      res["Commands"] = boost::any(*commands);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (currentState) {
      res["CurrentState"] = currentState ? boost::any(currentState->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (environmentVars) {
      vector<boost::any> temp1;
      for(auto item1:*environmentVars){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnvironmentVars"] = boost::any(temp1);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imagePullPolicy) {
      res["ImagePullPolicy"] = boost::any(*imagePullPolicy);
    }
    if (livenessProbe) {
      res["LivenessProbe"] = livenessProbe ? boost::any(livenessProbe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ports"] = boost::any(temp1);
    }
    if (previousState) {
      res["PreviousState"] = previousState ? boost::any(previousState->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readinessProbe) {
      res["ReadinessProbe"] = readinessProbe ? boost::any(readinessProbe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ready) {
      res["Ready"] = boost::any(*ready);
    }
    if (restartCount) {
      res["RestartCount"] = boost::any(*restartCount);
    }
    if (securityContext) {
      res["SecurityContext"] = securityContext ? boost::any(securityContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stdin) {
      res["Stdin"] = boost::any(*stdin);
    }
    if (stdinOnce) {
      res["StdinOnce"] = boost::any(*stdinOnce);
    }
    if (tty) {
      res["Tty"] = boost::any(*tty);
    }
    if (volumeMounts) {
      vector<boost::any> temp1;
      for(auto item1:*volumeMounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeMounts"] = boost::any(temp1);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Args"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Args"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      args = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Commands") != m.end() && !m["Commands"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Commands"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Commands"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      commands = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("CurrentState") != m.end() && !m["CurrentState"].empty()) {
      if (typeid(map<string, boost::any>) == m["CurrentState"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersCurrentState model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CurrentState"]));
        currentState = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersCurrentState>(model1);
      }
    }
    if (m.find("EnvironmentVars") != m.end() && !m["EnvironmentVars"].empty()) {
      if (typeid(vector<boost::any>) == m["EnvironmentVars"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVars> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnvironmentVars"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVars model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environmentVars = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsContainersEnvironmentVars>>(expect1);
      }
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImagePullPolicy") != m.end() && !m["ImagePullPolicy"].empty()) {
      imagePullPolicy = make_shared<string>(boost::any_cast<string>(m["ImagePullPolicy"]));
    }
    if (m.find("LivenessProbe") != m.end() && !m["LivenessProbe"].empty()) {
      if (typeid(map<string, boost::any>) == m["LivenessProbe"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LivenessProbe"]));
        livenessProbe = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersLivenessProbe>(model1);
      }
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      if (typeid(vector<boost::any>) == m["Ports"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsContainersPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsContainersPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsContainersPorts>>(expect1);
      }
    }
    if (m.find("PreviousState") != m.end() && !m["PreviousState"].empty()) {
      if (typeid(map<string, boost::any>) == m["PreviousState"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersPreviousState model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PreviousState"]));
        previousState = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersPreviousState>(model1);
      }
    }
    if (m.find("ReadinessProbe") != m.end() && !m["ReadinessProbe"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReadinessProbe"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReadinessProbe"]));
        readinessProbe = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersReadinessProbe>(model1);
      }
    }
    if (m.find("Ready") != m.end() && !m["Ready"].empty()) {
      ready = make_shared<bool>(boost::any_cast<bool>(m["Ready"]));
    }
    if (m.find("RestartCount") != m.end() && !m["RestartCount"].empty()) {
      restartCount = make_shared<long>(boost::any_cast<long>(m["RestartCount"]));
    }
    if (m.find("SecurityContext") != m.end() && !m["SecurityContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityContext"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityContext"]));
        securityContext = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsContainersSecurityContext>(model1);
      }
    }
    if (m.find("Stdin") != m.end() && !m["Stdin"].empty()) {
      stdin = make_shared<bool>(boost::any_cast<bool>(m["Stdin"]));
    }
    if (m.find("StdinOnce") != m.end() && !m["StdinOnce"].empty()) {
      stdinOnce = make_shared<bool>(boost::any_cast<bool>(m["StdinOnce"]));
    }
    if (m.find("Tty") != m.end() && !m["Tty"].empty()) {
      tty = make_shared<bool>(boost::any_cast<bool>(m["Tty"]));
    }
    if (m.find("VolumeMounts") != m.end() && !m["VolumeMounts"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeMounts"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsContainersVolumeMounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeMounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsContainersVolumeMounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeMounts = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsContainersVolumeMounts>>(expect1);
      }
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsContainers() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsDnsConfigOptions : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DescribeContainerGroupsResponseBodyContainerGroupsDnsConfigOptions() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsDnsConfigOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsDnsConfigOptions() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsDnsConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> nameServers{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsDnsConfigOptions>> options{};
  shared_ptr<vector<string>> searches{};

  DescribeContainerGroupsResponseBodyContainerGroupsDnsConfig() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsDnsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nameServers) {
      res["NameServers"] = boost::any(*nameServers);
    }
    if (options) {
      vector<boost::any> temp1;
      for(auto item1:*options){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Options"] = boost::any(temp1);
    }
    if (searches) {
      res["Searches"] = boost::any(*searches);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NameServers") != m.end() && !m["NameServers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NameServers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NameServers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nameServers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsDnsConfigOptions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Options"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsDnsConfigOptions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        options = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsDnsConfigOptions>>(expect1);
      }
    }
    if (m.find("Searches") != m.end() && !m["Searches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Searches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Searches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      searches = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsDnsConfig() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContextSysctls : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContextSysctls() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContextSysctls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContextSysctls() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContext : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContextSysctls>> sysctls{};

  DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContext() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sysctls) {
      vector<boost::any> temp1;
      for(auto item1:*sysctls){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sysctls"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sysctls") != m.end() && !m["Sysctls"].empty()) {
      if (typeid(vector<boost::any>) == m["Sysctls"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContextSysctls> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sysctls"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContextSysctls model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sysctls = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContextSysctls>>(expect1);
      }
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContext() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsEvents : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> firstTimestamp{};
  shared_ptr<string> lastTimestamp{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> reason{};
  shared_ptr<string> type{};

  DescribeContainerGroupsResponseBodyContainerGroupsEvents() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (firstTimestamp) {
      res["FirstTimestamp"] = boost::any(*firstTimestamp);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("FirstTimestamp") != m.end() && !m["FirstTimestamp"].empty()) {
      firstTimestamp = make_shared<string>(boost::any_cast<string>(m["FirstTimestamp"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<string>(boost::any_cast<string>(m["LastTimestamp"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsEvents() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsHostAliases : public Darabonba::Model {
public:
  shared_ptr<vector<string>> hostnames{};
  shared_ptr<string> ip{};

  DescribeContainerGroupsResponseBodyContainerGroupsHostAliases() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsHostAliases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostnames) {
      res["Hostnames"] = boost::any(*hostnames);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hostnames") != m.end() && !m["Hostnames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Hostnames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Hostnames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hostnames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsHostAliases() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainersCurrentState : public Darabonba::Model {
public:
  shared_ptr<string> detailStatus{};
  shared_ptr<long> exitCode{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<long> signal{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainersCurrentState() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainersCurrentState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailStatus) {
      res["DetailStatus"] = boost::any(*detailStatus);
    }
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (signal) {
      res["Signal"] = boost::any(*signal);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailStatus") != m.end() && !m["DetailStatus"].empty()) {
      detailStatus = make_shared<string>(boost::any_cast<string>(m["DetailStatus"]));
    }
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Signal") != m.end() && !m["Signal"].empty()) {
      signal = make_shared<long>(boost::any_cast<long>(m["Signal"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainersCurrentState() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFromFieldRef : public Darabonba::Model {
public:
  shared_ptr<string> fieldPath{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFromFieldRef() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFromFieldRef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldPath) {
      res["FieldPath"] = boost::any(*fieldPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldPath") != m.end() && !m["FieldPath"].empty()) {
      fieldPath = make_shared<string>(boost::any_cast<string>(m["FieldPath"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFromFieldRef() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFrom : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFromFieldRef> fieldRef{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFrom() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFrom(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldRef) {
      res["FieldRef"] = fieldRef ? boost::any(fieldRef->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldRef") != m.end() && !m["FieldRef"].empty()) {
      if (typeid(map<string, boost::any>) == m["FieldRef"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFromFieldRef model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FieldRef"]));
        fieldRef = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFromFieldRef>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFrom() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVars : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFrom> valueFrom{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVars() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVars(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (valueFrom) {
      res["ValueFrom"] = valueFrom ? boost::any(valueFrom->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ValueFrom") != m.end() && !m["ValueFrom"].empty()) {
      if (typeid(map<string, boost::any>) == m["ValueFrom"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFrom model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ValueFrom"]));
        valueFrom = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVarsValueFrom>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVars() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPorts : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPorts() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPorts() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPreviousState : public Darabonba::Model {
public:
  shared_ptr<string> detailStatus{};
  shared_ptr<long> exitCode{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<long> signal{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPreviousState() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPreviousState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailStatus) {
      res["DetailStatus"] = boost::any(*detailStatus);
    }
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (signal) {
      res["Signal"] = boost::any(*signal);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailStatus") != m.end() && !m["DetailStatus"].empty()) {
      detailStatus = make_shared<string>(boost::any_cast<string>(m["DetailStatus"]));
    }
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Signal") != m.end() && !m["Signal"].empty()) {
      signal = make_shared<long>(boost::any_cast<long>(m["Signal"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPreviousState() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContextCapability : public Darabonba::Model {
public:
  shared_ptr<vector<string>> adds{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContextCapability() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContextCapability(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adds) {
      res["Adds"] = boost::any(*adds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Adds") != m.end() && !m["Adds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Adds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Adds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContextCapability() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContext : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContextCapability> capability{};
  shared_ptr<bool> readOnlyRootFilesystem{};
  shared_ptr<long> runAsUser{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContext() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capability) {
      res["Capability"] = capability ? boost::any(capability->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readOnlyRootFilesystem) {
      res["ReadOnlyRootFilesystem"] = boost::any(*readOnlyRootFilesystem);
    }
    if (runAsUser) {
      res["RunAsUser"] = boost::any(*runAsUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capability") != m.end() && !m["Capability"].empty()) {
      if (typeid(map<string, boost::any>) == m["Capability"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContextCapability model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Capability"]));
        capability = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContextCapability>(model1);
      }
    }
    if (m.find("ReadOnlyRootFilesystem") != m.end() && !m["ReadOnlyRootFilesystem"].empty()) {
      readOnlyRootFilesystem = make_shared<bool>(boost::any_cast<bool>(m["ReadOnlyRootFilesystem"]));
    }
    if (m.find("RunAsUser") != m.end() && !m["RunAsUser"].empty()) {
      runAsUser = make_shared<long>(boost::any_cast<long>(m["RunAsUser"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContext() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainersVolumeMounts : public Darabonba::Model {
public:
  shared_ptr<string> mountPath{};
  shared_ptr<string> mountPropagation{};
  shared_ptr<string> name{};
  shared_ptr<bool> readOnly{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainersVolumeMounts() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainersVolumeMounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (mountPropagation) {
      res["MountPropagation"] = boost::any(*mountPropagation);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (readOnly) {
      res["ReadOnly"] = boost::any(*readOnly);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("MountPropagation") != m.end() && !m["MountPropagation"].empty()) {
      mountPropagation = make_shared<string>(boost::any_cast<string>(m["MountPropagation"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ReadOnly") != m.end() && !m["ReadOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["ReadOnly"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainersVolumeMounts() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsInitContainers : public Darabonba::Model {
public:
  shared_ptr<vector<string>> args{};
  shared_ptr<vector<string>> command{};
  shared_ptr<double> cpu{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersCurrentState> currentState{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVars>> environmentVars{};
  shared_ptr<long> gpu{};
  shared_ptr<string> image{};
  shared_ptr<string> imagePullPolicy{};
  shared_ptr<double> memory{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPorts>> ports{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPreviousState> previousState{};
  shared_ptr<bool> ready{};
  shared_ptr<long> restartCount{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContext> securityContext{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersVolumeMounts>> volumeMounts{};
  shared_ptr<string> workingDir{};

  DescribeContainerGroupsResponseBodyContainerGroupsInitContainers() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsInitContainers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (currentState) {
      res["CurrentState"] = currentState ? boost::any(currentState->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (environmentVars) {
      vector<boost::any> temp1;
      for(auto item1:*environmentVars){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnvironmentVars"] = boost::any(temp1);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imagePullPolicy) {
      res["ImagePullPolicy"] = boost::any(*imagePullPolicy);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ports"] = boost::any(temp1);
    }
    if (previousState) {
      res["PreviousState"] = previousState ? boost::any(previousState->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ready) {
      res["Ready"] = boost::any(*ready);
    }
    if (restartCount) {
      res["RestartCount"] = boost::any(*restartCount);
    }
    if (securityContext) {
      res["SecurityContext"] = securityContext ? boost::any(securityContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (volumeMounts) {
      vector<boost::any> temp1;
      for(auto item1:*volumeMounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeMounts"] = boost::any(temp1);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Args"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Args"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      args = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("CurrentState") != m.end() && !m["CurrentState"].empty()) {
      if (typeid(map<string, boost::any>) == m["CurrentState"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsInitContainersCurrentState model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CurrentState"]));
        currentState = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersCurrentState>(model1);
      }
    }
    if (m.find("EnvironmentVars") != m.end() && !m["EnvironmentVars"].empty()) {
      if (typeid(vector<boost::any>) == m["EnvironmentVars"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVars> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnvironmentVars"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVars model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environmentVars = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersEnvironmentVars>>(expect1);
      }
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImagePullPolicy") != m.end() && !m["ImagePullPolicy"].empty()) {
      imagePullPolicy = make_shared<string>(boost::any_cast<string>(m["ImagePullPolicy"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      if (typeid(vector<boost::any>) == m["Ports"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPorts>>(expect1);
      }
    }
    if (m.find("PreviousState") != m.end() && !m["PreviousState"].empty()) {
      if (typeid(map<string, boost::any>) == m["PreviousState"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPreviousState model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PreviousState"]));
        previousState = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersPreviousState>(model1);
      }
    }
    if (m.find("Ready") != m.end() && !m["Ready"].empty()) {
      ready = make_shared<bool>(boost::any_cast<bool>(m["Ready"]));
    }
    if (m.find("RestartCount") != m.end() && !m["RestartCount"].empty()) {
      restartCount = make_shared<long>(boost::any_cast<long>(m["RestartCount"]));
    }
    if (m.find("SecurityContext") != m.end() && !m["SecurityContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityContext"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityContext"]));
        securityContext = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersSecurityContext>(model1);
      }
    }
    if (m.find("VolumeMounts") != m.end() && !m["VolumeMounts"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeMounts"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersVolumeMounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeMounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsInitContainersVolumeMounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeMounts = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainersVolumeMounts>>(expect1);
      }
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsInitContainers() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeContainerGroupsResponseBodyContainerGroupsTags() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsTags() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsVolumesConfigFileVolumeConfigFileToPaths : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> path{};

  DescribeContainerGroupsResponseBodyContainerGroupsVolumesConfigFileVolumeConfigFileToPaths() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsVolumesConfigFileVolumeConfigFileToPaths(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsVolumesConfigFileVolumeConfigFileToPaths() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroupsVolumes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsVolumesConfigFileVolumeConfigFileToPaths>> configFileVolumeConfigFileToPaths{};
  shared_ptr<string> diskVolumeDiskId{};
  shared_ptr<string> diskVolumeFsType{};
  shared_ptr<string> emptyDirVolumeMedium{};
  shared_ptr<string> emptyDirVolumeSizeLimit{};
  shared_ptr<string> flexVolumeDriver{};
  shared_ptr<string> flexVolumeFsType{};
  shared_ptr<string> flexVolumeOptions{};
  shared_ptr<string> NFSVolumePath{};
  shared_ptr<bool> NFSVolumeReadOnly{};
  shared_ptr<string> NFSVolumeServer{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DescribeContainerGroupsResponseBodyContainerGroupsVolumes() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroupsVolumes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileVolumeConfigFileToPaths) {
      vector<boost::any> temp1;
      for(auto item1:*configFileVolumeConfigFileToPaths){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigFileVolumeConfigFileToPaths"] = boost::any(temp1);
    }
    if (diskVolumeDiskId) {
      res["DiskVolumeDiskId"] = boost::any(*diskVolumeDiskId);
    }
    if (diskVolumeFsType) {
      res["DiskVolumeFsType"] = boost::any(*diskVolumeFsType);
    }
    if (emptyDirVolumeMedium) {
      res["EmptyDirVolumeMedium"] = boost::any(*emptyDirVolumeMedium);
    }
    if (emptyDirVolumeSizeLimit) {
      res["EmptyDirVolumeSizeLimit"] = boost::any(*emptyDirVolumeSizeLimit);
    }
    if (flexVolumeDriver) {
      res["FlexVolumeDriver"] = boost::any(*flexVolumeDriver);
    }
    if (flexVolumeFsType) {
      res["FlexVolumeFsType"] = boost::any(*flexVolumeFsType);
    }
    if (flexVolumeOptions) {
      res["FlexVolumeOptions"] = boost::any(*flexVolumeOptions);
    }
    if (NFSVolumePath) {
      res["NFSVolumePath"] = boost::any(*NFSVolumePath);
    }
    if (NFSVolumeReadOnly) {
      res["NFSVolumeReadOnly"] = boost::any(*NFSVolumeReadOnly);
    }
    if (NFSVolumeServer) {
      res["NFSVolumeServer"] = boost::any(*NFSVolumeServer);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigFileVolumeConfigFileToPaths") != m.end() && !m["ConfigFileVolumeConfigFileToPaths"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigFileVolumeConfigFileToPaths"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsVolumesConfigFileVolumeConfigFileToPaths> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigFileVolumeConfigFileToPaths"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsVolumesConfigFileVolumeConfigFileToPaths model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configFileVolumeConfigFileToPaths = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsVolumesConfigFileVolumeConfigFileToPaths>>(expect1);
      }
    }
    if (m.find("DiskVolumeDiskId") != m.end() && !m["DiskVolumeDiskId"].empty()) {
      diskVolumeDiskId = make_shared<string>(boost::any_cast<string>(m["DiskVolumeDiskId"]));
    }
    if (m.find("DiskVolumeFsType") != m.end() && !m["DiskVolumeFsType"].empty()) {
      diskVolumeFsType = make_shared<string>(boost::any_cast<string>(m["DiskVolumeFsType"]));
    }
    if (m.find("EmptyDirVolumeMedium") != m.end() && !m["EmptyDirVolumeMedium"].empty()) {
      emptyDirVolumeMedium = make_shared<string>(boost::any_cast<string>(m["EmptyDirVolumeMedium"]));
    }
    if (m.find("EmptyDirVolumeSizeLimit") != m.end() && !m["EmptyDirVolumeSizeLimit"].empty()) {
      emptyDirVolumeSizeLimit = make_shared<string>(boost::any_cast<string>(m["EmptyDirVolumeSizeLimit"]));
    }
    if (m.find("FlexVolumeDriver") != m.end() && !m["FlexVolumeDriver"].empty()) {
      flexVolumeDriver = make_shared<string>(boost::any_cast<string>(m["FlexVolumeDriver"]));
    }
    if (m.find("FlexVolumeFsType") != m.end() && !m["FlexVolumeFsType"].empty()) {
      flexVolumeFsType = make_shared<string>(boost::any_cast<string>(m["FlexVolumeFsType"]));
    }
    if (m.find("FlexVolumeOptions") != m.end() && !m["FlexVolumeOptions"].empty()) {
      flexVolumeOptions = make_shared<string>(boost::any_cast<string>(m["FlexVolumeOptions"]));
    }
    if (m.find("NFSVolumePath") != m.end() && !m["NFSVolumePath"].empty()) {
      NFSVolumePath = make_shared<string>(boost::any_cast<string>(m["NFSVolumePath"]));
    }
    if (m.find("NFSVolumeReadOnly") != m.end() && !m["NFSVolumeReadOnly"].empty()) {
      NFSVolumeReadOnly = make_shared<bool>(boost::any_cast<bool>(m["NFSVolumeReadOnly"]));
    }
    if (m.find("NFSVolumeServer") != m.end() && !m["NFSVolumeServer"].empty()) {
      NFSVolumeServer = make_shared<string>(boost::any_cast<string>(m["NFSVolumeServer"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroupsVolumes() = default;
};
class DescribeContainerGroupsResponseBodyContainerGroups : public Darabonba::Model {
public:
  shared_ptr<string> computeCategory{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> containerGroupName{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsContainers>> containers{};
  shared_ptr<double> cpu{};
  shared_ptr<string> creationTime{};
  shared_ptr<long> discount{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsDnsConfig> dnsConfig{};
  shared_ptr<string> dnsPolicy{};
  shared_ptr<DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContext> eciSecurityContext{};
  shared_ptr<string> eniInstanceId{};
  shared_ptr<long> ephemeralStorage{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsEvents>> events{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> failedTime{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsHostAliases>> hostAliases{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainers>> initContainers{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> intranetIp{};
  shared_ptr<string> ipv6Address{};
  shared_ptr<double> memory{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> restartPolicy{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> status{};
  shared_ptr<string> succeededTime{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsTags>> tags{};
  shared_ptr<string> tenantEniInstanceId{};
  shared_ptr<string> tenantEniIp{};
  shared_ptr<string> tenantSecurityGroupId{};
  shared_ptr<string> tenantVSwitchId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroupsVolumes>> volumes{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeContainerGroupsResponseBodyContainerGroups() {}

  explicit DescribeContainerGroupsResponseBodyContainerGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeCategory) {
      res["ComputeCategory"] = boost::any(*computeCategory);
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (containerGroupName) {
      res["ContainerGroupName"] = boost::any(*containerGroupName);
    }
    if (containers) {
      vector<boost::any> temp1;
      for(auto item1:*containers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Containers"] = boost::any(temp1);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (discount) {
      res["Discount"] = boost::any(*discount);
    }
    if (dnsConfig) {
      res["DnsConfig"] = dnsConfig ? boost::any(dnsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dnsPolicy) {
      res["DnsPolicy"] = boost::any(*dnsPolicy);
    }
    if (eciSecurityContext) {
      res["EciSecurityContext"] = eciSecurityContext ? boost::any(eciSecurityContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eniInstanceId) {
      res["EniInstanceId"] = boost::any(*eniInstanceId);
    }
    if (ephemeralStorage) {
      res["EphemeralStorage"] = boost::any(*ephemeralStorage);
    }
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (failedTime) {
      res["FailedTime"] = boost::any(*failedTime);
    }
    if (hostAliases) {
      vector<boost::any> temp1;
      for(auto item1:*hostAliases){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostAliases"] = boost::any(temp1);
    }
    if (initContainers) {
      vector<boost::any> temp1;
      for(auto item1:*initContainers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InitContainers"] = boost::any(temp1);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (ipv6Address) {
      res["Ipv6Address"] = boost::any(*ipv6Address);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (restartPolicy) {
      res["RestartPolicy"] = boost::any(*restartPolicy);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (succeededTime) {
      res["SucceededTime"] = boost::any(*succeededTime);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantEniInstanceId) {
      res["TenantEniInstanceId"] = boost::any(*tenantEniInstanceId);
    }
    if (tenantEniIp) {
      res["TenantEniIp"] = boost::any(*tenantEniIp);
    }
    if (tenantSecurityGroupId) {
      res["TenantSecurityGroupId"] = boost::any(*tenantSecurityGroupId);
    }
    if (tenantVSwitchId) {
      res["TenantVSwitchId"] = boost::any(*tenantVSwitchId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (volumes) {
      vector<boost::any> temp1;
      for(auto item1:*volumes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Volumes"] = boost::any(temp1);
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
    if (m.find("ComputeCategory") != m.end() && !m["ComputeCategory"].empty()) {
      computeCategory = make_shared<string>(boost::any_cast<string>(m["ComputeCategory"]));
    }
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("ContainerGroupName") != m.end() && !m["ContainerGroupName"].empty()) {
      containerGroupName = make_shared<string>(boost::any_cast<string>(m["ContainerGroupName"]));
    }
    if (m.find("Containers") != m.end() && !m["Containers"].empty()) {
      if (typeid(vector<boost::any>) == m["Containers"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsContainers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Containers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsContainers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containers = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsContainers>>(expect1);
      }
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Discount") != m.end() && !m["Discount"].empty()) {
      discount = make_shared<long>(boost::any_cast<long>(m["Discount"]));
    }
    if (m.find("DnsConfig") != m.end() && !m["DnsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DnsConfig"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsDnsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DnsConfig"]));
        dnsConfig = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsDnsConfig>(model1);
      }
    }
    if (m.find("DnsPolicy") != m.end() && !m["DnsPolicy"].empty()) {
      dnsPolicy = make_shared<string>(boost::any_cast<string>(m["DnsPolicy"]));
    }
    if (m.find("EciSecurityContext") != m.end() && !m["EciSecurityContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["EciSecurityContext"].type()) {
        DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EciSecurityContext"]));
        eciSecurityContext = make_shared<DescribeContainerGroupsResponseBodyContainerGroupsEciSecurityContext>(model1);
      }
    }
    if (m.find("EniInstanceId") != m.end() && !m["EniInstanceId"].empty()) {
      eniInstanceId = make_shared<string>(boost::any_cast<string>(m["EniInstanceId"]));
    }
    if (m.find("EphemeralStorage") != m.end() && !m["EphemeralStorage"].empty()) {
      ephemeralStorage = make_shared<long>(boost::any_cast<long>(m["EphemeralStorage"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsEvents>>(expect1);
      }
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("FailedTime") != m.end() && !m["FailedTime"].empty()) {
      failedTime = make_shared<string>(boost::any_cast<string>(m["FailedTime"]));
    }
    if (m.find("HostAliases") != m.end() && !m["HostAliases"].empty()) {
      if (typeid(vector<boost::any>) == m["HostAliases"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsHostAliases> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostAliases"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsHostAliases model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostAliases = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsHostAliases>>(expect1);
      }
    }
    if (m.find("InitContainers") != m.end() && !m["InitContainers"].empty()) {
      if (typeid(vector<boost::any>) == m["InitContainers"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InitContainers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsInitContainers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        initContainers = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsInitContainers>>(expect1);
      }
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("Ipv6Address") != m.end() && !m["Ipv6Address"].empty()) {
      ipv6Address = make_shared<string>(boost::any_cast<string>(m["Ipv6Address"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RestartPolicy") != m.end() && !m["RestartPolicy"].empty()) {
      restartPolicy = make_shared<string>(boost::any_cast<string>(m["RestartPolicy"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SucceededTime") != m.end() && !m["SucceededTime"].empty()) {
      succeededTime = make_shared<string>(boost::any_cast<string>(m["SucceededTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsTags>>(expect1);
      }
    }
    if (m.find("TenantEniInstanceId") != m.end() && !m["TenantEniInstanceId"].empty()) {
      tenantEniInstanceId = make_shared<string>(boost::any_cast<string>(m["TenantEniInstanceId"]));
    }
    if (m.find("TenantEniIp") != m.end() && !m["TenantEniIp"].empty()) {
      tenantEniIp = make_shared<string>(boost::any_cast<string>(m["TenantEniIp"]));
    }
    if (m.find("TenantSecurityGroupId") != m.end() && !m["TenantSecurityGroupId"].empty()) {
      tenantSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["TenantSecurityGroupId"]));
    }
    if (m.find("TenantVSwitchId") != m.end() && !m["TenantVSwitchId"].empty()) {
      tenantVSwitchId = make_shared<string>(boost::any_cast<string>(m["TenantVSwitchId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("Volumes") != m.end() && !m["Volumes"].empty()) {
      if (typeid(vector<boost::any>) == m["Volumes"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroupsVolumes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Volumes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroupsVolumes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumes = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroupsVolumes>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeContainerGroupsResponseBodyContainerGroups() = default;
};
class DescribeContainerGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeContainerGroupsResponseBodyContainerGroups>> containerGroups{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeContainerGroupsResponseBody() {}

  explicit DescribeContainerGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroups) {
      vector<boost::any> temp1;
      for(auto item1:*containerGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContainerGroups"] = boost::any(temp1);
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
    if (m.find("ContainerGroups") != m.end() && !m["ContainerGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ContainerGroups"].type()) {
        vector<DescribeContainerGroupsResponseBodyContainerGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContainerGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeContainerGroupsResponseBodyContainerGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containerGroups = make_shared<vector<DescribeContainerGroupsResponseBodyContainerGroups>>(expect1);
      }
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


  virtual ~DescribeContainerGroupsResponseBody() = default;
};
class DescribeContainerGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeContainerGroupsResponseBody> body{};

  DescribeContainerGroupsResponse() {}

  explicit DescribeContainerGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeContainerGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeContainerGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeContainerGroupsResponse() = default;
};
class DescribeContainerLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> containerName{};
  shared_ptr<bool> lastTime{};
  shared_ptr<long> limitBytes{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sinceSeconds{};
  shared_ptr<string> startTime{};
  shared_ptr<long> tail{};
  shared_ptr<bool> timestamps{};

  DescribeContainerLogRequest() {}

  explicit DescribeContainerLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (lastTime) {
      res["LastTime"] = boost::any(*lastTime);
    }
    if (limitBytes) {
      res["LimitBytes"] = boost::any(*limitBytes);
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
    if (sinceSeconds) {
      res["SinceSeconds"] = boost::any(*sinceSeconds);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tail) {
      res["Tail"] = boost::any(*tail);
    }
    if (timestamps) {
      res["Timestamps"] = boost::any(*timestamps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("LastTime") != m.end() && !m["LastTime"].empty()) {
      lastTime = make_shared<bool>(boost::any_cast<bool>(m["LastTime"]));
    }
    if (m.find("LimitBytes") != m.end() && !m["LimitBytes"].empty()) {
      limitBytes = make_shared<long>(boost::any_cast<long>(m["LimitBytes"]));
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
    if (m.find("SinceSeconds") != m.end() && !m["SinceSeconds"].empty()) {
      sinceSeconds = make_shared<long>(boost::any_cast<long>(m["SinceSeconds"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Tail") != m.end() && !m["Tail"].empty()) {
      tail = make_shared<long>(boost::any_cast<long>(m["Tail"]));
    }
    if (m.find("Timestamps") != m.end() && !m["Timestamps"].empty()) {
      timestamps = make_shared<bool>(boost::any_cast<bool>(m["Timestamps"]));
    }
  }


  virtual ~DescribeContainerLogRequest() = default;
};
class DescribeContainerLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> containerName{};
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};

  DescribeContainerLogResponseBody() {}

  explicit DescribeContainerLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeContainerLogResponseBody() = default;
};
class DescribeContainerLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeContainerLogResponseBody> body{};

  DescribeContainerLogResponse() {}

  explicit DescribeContainerLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeContainerLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeContainerLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeContainerLogResponse() = default;
};
class DescribeDataCachesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDataCachesRequestTag() {}

  explicit DescribeDataCachesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDataCachesRequestTag() = default;
};
class DescribeDataCachesRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<vector<string>> dataCacheId{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> path{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<DescribeDataCachesRequestTag>> tag{};

  DescribeDataCachesRequest() {}

  explicit DescribeDataCachesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (dataCacheId) {
      res["DataCacheId"] = boost::any(*dataCacheId);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (path) {
      res["Path"] = boost::any(*path);
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
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("DataCacheId") != m.end() && !m["DataCacheId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataCacheId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataCacheId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataCacheId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
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
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
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
        vector<DescribeDataCachesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataCachesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDataCachesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDataCachesRequest() = default;
};
class DescribeDataCachesResponseBodyDataCachesDataSource : public Darabonba::Model {
public:
  shared_ptr<string> options{};
  shared_ptr<string> type{};

  DescribeDataCachesResponseBodyDataCachesDataSource() {}

  explicit DescribeDataCachesResponseBodyDataCachesDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDataCachesResponseBodyDataCachesDataSource() = default;
};
class DescribeDataCachesResponseBodyDataCachesEvents : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> firstTimestamp{};
  shared_ptr<string> lastTimestamp{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> reason{};
  shared_ptr<string> type{};

  DescribeDataCachesResponseBodyDataCachesEvents() {}

  explicit DescribeDataCachesResponseBodyDataCachesEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (firstTimestamp) {
      res["FirstTimestamp"] = boost::any(*firstTimestamp);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("FirstTimestamp") != m.end() && !m["FirstTimestamp"].empty()) {
      firstTimestamp = make_shared<string>(boost::any_cast<string>(m["FirstTimestamp"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<string>(boost::any_cast<string>(m["LastTimestamp"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeDataCachesResponseBodyDataCachesEvents() = default;
};
class DescribeDataCachesResponseBodyDataCachesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDataCachesResponseBodyDataCachesTags() {}

  explicit DescribeDataCachesResponseBodyDataCachesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDataCachesResponseBodyDataCachesTags() = default;
};
class DescribeDataCachesResponseBodyDataCaches : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> dataCacheId{};
  shared_ptr<DescribeDataCachesResponseBodyDataCachesDataSource> dataSource{};
  shared_ptr<vector<DescribeDataCachesResponseBodyDataCachesEvents>> events{};
  shared_ptr<string> expireDateTime{};
  shared_ptr<string> flashSnapshotId{};
  shared_ptr<string> lastMatchedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> path{};
  shared_ptr<string> progress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> size{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeDataCachesResponseBodyDataCachesTags>> tags{};

  DescribeDataCachesResponseBodyDataCaches() {}

  explicit DescribeDataCachesResponseBodyDataCaches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (dataCacheId) {
      res["DataCacheId"] = boost::any(*dataCacheId);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (expireDateTime) {
      res["ExpireDateTime"] = boost::any(*expireDateTime);
    }
    if (flashSnapshotId) {
      res["FlashSnapshotId"] = boost::any(*flashSnapshotId);
    }
    if (lastMatchedTime) {
      res["LastMatchedTime"] = boost::any(*lastMatchedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
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
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DataCacheId") != m.end() && !m["DataCacheId"].empty()) {
      dataCacheId = make_shared<string>(boost::any_cast<string>(m["DataCacheId"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        DescribeDataCachesResponseBodyDataCachesDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<DescribeDataCachesResponseBodyDataCachesDataSource>(model1);
      }
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeDataCachesResponseBodyDataCachesEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataCachesResponseBodyDataCachesEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeDataCachesResponseBodyDataCachesEvents>>(expect1);
      }
    }
    if (m.find("ExpireDateTime") != m.end() && !m["ExpireDateTime"].empty()) {
      expireDateTime = make_shared<string>(boost::any_cast<string>(m["ExpireDateTime"]));
    }
    if (m.find("FlashSnapshotId") != m.end() && !m["FlashSnapshotId"].empty()) {
      flashSnapshotId = make_shared<string>(boost::any_cast<string>(m["FlashSnapshotId"]));
    }
    if (m.find("LastMatchedTime") != m.end() && !m["LastMatchedTime"].empty()) {
      lastMatchedTime = make_shared<string>(boost::any_cast<string>(m["LastMatchedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDataCachesResponseBodyDataCachesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataCachesResponseBodyDataCachesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDataCachesResponseBodyDataCachesTags>>(expect1);
      }
    }
  }


  virtual ~DescribeDataCachesResponseBodyDataCaches() = default;
};
class DescribeDataCachesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDataCachesResponseBodyDataCaches>> dataCaches{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDataCachesResponseBody() {}

  explicit DescribeDataCachesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCaches) {
      vector<boost::any> temp1;
      for(auto item1:*dataCaches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataCaches"] = boost::any(temp1);
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
    if (m.find("DataCaches") != m.end() && !m["DataCaches"].empty()) {
      if (typeid(vector<boost::any>) == m["DataCaches"].type()) {
        vector<DescribeDataCachesResponseBodyDataCaches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataCaches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataCachesResponseBodyDataCaches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataCaches = make_shared<vector<DescribeDataCachesResponseBodyDataCaches>>(expect1);
      }
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


  virtual ~DescribeDataCachesResponseBody() = default;
};
class DescribeDataCachesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataCachesResponseBody> body{};

  DescribeDataCachesResponse() {}

  explicit DescribeDataCachesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDataCachesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataCachesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataCachesResponse() = default;
};
class DescribeImageCachesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeImageCachesRequestTag() {}

  explicit DescribeImageCachesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeImageCachesRequestTag() = default;
};
class DescribeImageCachesRequest : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> imageCacheId{};
  shared_ptr<string> imageCacheName{};
  shared_ptr<bool> imageFullMatch{};
  shared_ptr<long> imageMatchCountRequest{};
  shared_ptr<long> limit{};
  shared_ptr<vector<string>> matchImage{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<vector<DescribeImageCachesRequestTag>> tag{};

  DescribeImageCachesRequest() {}

  explicit DescribeImageCachesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imageCacheId) {
      res["ImageCacheId"] = boost::any(*imageCacheId);
    }
    if (imageCacheName) {
      res["ImageCacheName"] = boost::any(*imageCacheName);
    }
    if (imageFullMatch) {
      res["ImageFullMatch"] = boost::any(*imageFullMatch);
    }
    if (imageMatchCountRequest) {
      res["ImageMatchCountRequest"] = boost::any(*imageMatchCountRequest);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (matchImage) {
      res["MatchImage"] = boost::any(*matchImage);
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
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
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
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImageCacheId") != m.end() && !m["ImageCacheId"].empty()) {
      imageCacheId = make_shared<string>(boost::any_cast<string>(m["ImageCacheId"]));
    }
    if (m.find("ImageCacheName") != m.end() && !m["ImageCacheName"].empty()) {
      imageCacheName = make_shared<string>(boost::any_cast<string>(m["ImageCacheName"]));
    }
    if (m.find("ImageFullMatch") != m.end() && !m["ImageFullMatch"].empty()) {
      imageFullMatch = make_shared<bool>(boost::any_cast<bool>(m["ImageFullMatch"]));
    }
    if (m.find("ImageMatchCountRequest") != m.end() && !m["ImageMatchCountRequest"].empty()) {
      imageMatchCountRequest = make_shared<long>(boost::any_cast<long>(m["ImageMatchCountRequest"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("MatchImage") != m.end() && !m["MatchImage"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MatchImage"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MatchImage"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      matchImage = make_shared<vector<string>>(toVec1);
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
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeImageCachesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageCachesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeImageCachesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeImageCachesRequest() = default;
};
class DescribeImageCachesResponseBodyImageCachesEvents : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> firstTimestamp{};
  shared_ptr<string> lastTimestamp{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> reason{};
  shared_ptr<string> type{};

  DescribeImageCachesResponseBodyImageCachesEvents() {}

  explicit DescribeImageCachesResponseBodyImageCachesEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (firstTimestamp) {
      res["FirstTimestamp"] = boost::any(*firstTimestamp);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("FirstTimestamp") != m.end() && !m["FirstTimestamp"].empty()) {
      firstTimestamp = make_shared<string>(boost::any_cast<string>(m["FirstTimestamp"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<string>(boost::any_cast<string>(m["LastTimestamp"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeImageCachesResponseBodyImageCachesEvents() = default;
};
class DescribeImageCachesResponseBodyImageCachesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeImageCachesResponseBodyImageCachesTags() {}

  explicit DescribeImageCachesResponseBodyImageCachesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeImageCachesResponseBodyImageCachesTags() = default;
};
class DescribeImageCachesResponseBodyImageCaches : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> eliminationStrategy{};
  shared_ptr<vector<DescribeImageCachesResponseBodyImageCachesEvents>> events{};
  shared_ptr<string> expireDateTime{};
  shared_ptr<string> flashSnapshotId{};
  shared_ptr<string> imageCacheId{};
  shared_ptr<string> imageCacheName{};
  shared_ptr<long> imageCacheSize{};
  shared_ptr<vector<string>> images{};
  shared_ptr<string> lastMatchedTime{};
  shared_ptr<string> progress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeImageCachesResponseBodyImageCachesTags>> tags{};

  DescribeImageCachesResponseBodyImageCaches() {}

  explicit DescribeImageCachesResponseBodyImageCaches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (eliminationStrategy) {
      res["EliminationStrategy"] = boost::any(*eliminationStrategy);
    }
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (expireDateTime) {
      res["ExpireDateTime"] = boost::any(*expireDateTime);
    }
    if (flashSnapshotId) {
      res["FlashSnapshotId"] = boost::any(*flashSnapshotId);
    }
    if (imageCacheId) {
      res["ImageCacheId"] = boost::any(*imageCacheId);
    }
    if (imageCacheName) {
      res["ImageCacheName"] = boost::any(*imageCacheName);
    }
    if (imageCacheSize) {
      res["ImageCacheSize"] = boost::any(*imageCacheSize);
    }
    if (images) {
      res["Images"] = boost::any(*images);
    }
    if (lastMatchedTime) {
      res["LastMatchedTime"] = boost::any(*lastMatchedTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
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
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("EliminationStrategy") != m.end() && !m["EliminationStrategy"].empty()) {
      eliminationStrategy = make_shared<string>(boost::any_cast<string>(m["EliminationStrategy"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeImageCachesResponseBodyImageCachesEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageCachesResponseBodyImageCachesEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeImageCachesResponseBodyImageCachesEvents>>(expect1);
      }
    }
    if (m.find("ExpireDateTime") != m.end() && !m["ExpireDateTime"].empty()) {
      expireDateTime = make_shared<string>(boost::any_cast<string>(m["ExpireDateTime"]));
    }
    if (m.find("FlashSnapshotId") != m.end() && !m["FlashSnapshotId"].empty()) {
      flashSnapshotId = make_shared<string>(boost::any_cast<string>(m["FlashSnapshotId"]));
    }
    if (m.find("ImageCacheId") != m.end() && !m["ImageCacheId"].empty()) {
      imageCacheId = make_shared<string>(boost::any_cast<string>(m["ImageCacheId"]));
    }
    if (m.find("ImageCacheName") != m.end() && !m["ImageCacheName"].empty()) {
      imageCacheName = make_shared<string>(boost::any_cast<string>(m["ImageCacheName"]));
    }
    if (m.find("ImageCacheSize") != m.end() && !m["ImageCacheSize"].empty()) {
      imageCacheSize = make_shared<long>(boost::any_cast<long>(m["ImageCacheSize"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Images"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      images = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LastMatchedTime") != m.end() && !m["LastMatchedTime"].empty()) {
      lastMatchedTime = make_shared<string>(boost::any_cast<string>(m["LastMatchedTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeImageCachesResponseBodyImageCachesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageCachesResponseBodyImageCachesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeImageCachesResponseBodyImageCachesTags>>(expect1);
      }
    }
  }


  virtual ~DescribeImageCachesResponseBodyImageCaches() = default;
};
class DescribeImageCachesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeImageCachesResponseBodyImageCaches>> imageCaches{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeImageCachesResponseBody() {}

  explicit DescribeImageCachesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageCaches) {
      vector<boost::any> temp1;
      for(auto item1:*imageCaches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageCaches"] = boost::any(temp1);
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
    if (m.find("ImageCaches") != m.end() && !m["ImageCaches"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageCaches"].type()) {
        vector<DescribeImageCachesResponseBodyImageCaches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageCaches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageCachesResponseBodyImageCaches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageCaches = make_shared<vector<DescribeImageCachesResponseBodyImageCaches>>(expect1);
      }
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


  virtual ~DescribeImageCachesResponseBody() = default;
};
class DescribeImageCachesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeImageCachesResponseBody> body{};

  DescribeImageCachesResponse() {}

  explicit DescribeImageCachesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeImageCachesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageCachesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageCachesResponse() = default;
};
class DescribeInstanceOpsRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> opsType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeInstanceOpsRecordsRequest() {}

  explicit DescribeInstanceOpsRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (opsType) {
      res["OpsType"] = boost::any(*opsType);
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
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("OpsType") != m.end() && !m["OpsType"].empty()) {
      opsType = make_shared<string>(boost::any_cast<string>(m["OpsType"]));
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


  virtual ~DescribeInstanceOpsRecordsRequest() = default;
};
class DescribeInstanceOpsRecordsResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> opsStatus{};
  shared_ptr<string> opsType{};
  shared_ptr<string> resultContent{};
  shared_ptr<string> resultType{};

  DescribeInstanceOpsRecordsResponseBodyRecords() {}

  explicit DescribeInstanceOpsRecordsResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (opsStatus) {
      res["OpsStatus"] = boost::any(*opsStatus);
    }
    if (opsType) {
      res["OpsType"] = boost::any(*opsType);
    }
    if (resultContent) {
      res["ResultContent"] = boost::any(*resultContent);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
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
    if (m.find("OpsStatus") != m.end() && !m["OpsStatus"].empty()) {
      opsStatus = make_shared<string>(boost::any_cast<string>(m["OpsStatus"]));
    }
    if (m.find("OpsType") != m.end() && !m["OpsType"].empty()) {
      opsType = make_shared<string>(boost::any_cast<string>(m["OpsType"]));
    }
    if (m.find("ResultContent") != m.end() && !m["ResultContent"].empty()) {
      resultContent = make_shared<string>(boost::any_cast<string>(m["ResultContent"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
  }


  virtual ~DescribeInstanceOpsRecordsResponseBodyRecords() = default;
};
class DescribeInstanceOpsRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceOpsRecordsResponseBodyRecords>> records{};
  shared_ptr<string> requestId{};

  DescribeInstanceOpsRecordsResponseBody() {}

  explicit DescribeInstanceOpsRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeInstanceOpsRecordsResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceOpsRecordsResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeInstanceOpsRecordsResponseBodyRecords>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceOpsRecordsResponseBody() = default;
};
class DescribeInstanceOpsRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceOpsRecordsResponseBody> body{};

  DescribeInstanceOpsRecordsResponse() {}

  explicit DescribeInstanceOpsRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstanceOpsRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceOpsRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceOpsRecordsResponse() = default;
};
class DescribeMultiContainerGroupMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupIds{};
  shared_ptr<string> metricType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeMultiContainerGroupMetricRequest() {}

  explicit DescribeMultiContainerGroupMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupIds) {
      res["ContainerGroupIds"] = boost::any(*containerGroupIds);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerGroupIds") != m.end() && !m["ContainerGroupIds"].empty()) {
      containerGroupIds = make_shared<string>(boost::any_cast<string>(m["ContainerGroupIds"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
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
  }


  virtual ~DescribeMultiContainerGroupMetricRequest() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsCPU : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> load{};
  shared_ptr<long> usageCoreNanoSeconds{};
  shared_ptr<long> usageNanoCores{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsCPU() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsCPU(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (load) {
      res["Load"] = boost::any(*load);
    }
    if (usageCoreNanoSeconds) {
      res["UsageCoreNanoSeconds"] = boost::any(*usageCoreNanoSeconds);
    }
    if (usageNanoCores) {
      res["UsageNanoCores"] = boost::any(*usageNanoCores);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Load") != m.end() && !m["Load"].empty()) {
      load = make_shared<long>(boost::any_cast<long>(m["Load"]));
    }
    if (m.find("UsageCoreNanoSeconds") != m.end() && !m["UsageCoreNanoSeconds"].empty()) {
      usageCoreNanoSeconds = make_shared<long>(boost::any_cast<long>(m["UsageCoreNanoSeconds"]));
    }
    if (m.find("UsageNanoCores") != m.end() && !m["UsageNanoCores"].empty()) {
      usageNanoCores = make_shared<long>(boost::any_cast<long>(m["UsageNanoCores"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsCPU() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersCPU : public Darabonba::Model {
public:
  shared_ptr<long> limit{};
  shared_ptr<long> load{};
  shared_ptr<long> usageCoreNanoSeconds{};
  shared_ptr<long> usageNanoCores{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersCPU() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersCPU(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (load) {
      res["Load"] = boost::any(*load);
    }
    if (usageCoreNanoSeconds) {
      res["UsageCoreNanoSeconds"] = boost::any(*usageCoreNanoSeconds);
    }
    if (usageNanoCores) {
      res["UsageNanoCores"] = boost::any(*usageNanoCores);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Load") != m.end() && !m["Load"].empty()) {
      load = make_shared<long>(boost::any_cast<long>(m["Load"]));
    }
    if (m.find("UsageCoreNanoSeconds") != m.end() && !m["UsageCoreNanoSeconds"].empty()) {
      usageCoreNanoSeconds = make_shared<long>(boost::any_cast<long>(m["UsageCoreNanoSeconds"]));
    }
    if (m.find("UsageNanoCores") != m.end() && !m["UsageNanoCores"].empty()) {
      usageNanoCores = make_shared<long>(boost::any_cast<long>(m["UsageNanoCores"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersCPU() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersMemory : public Darabonba::Model {
public:
  shared_ptr<long> availableBytes{};
  shared_ptr<long> cache{};
  shared_ptr<long> rss{};
  shared_ptr<long> usageBytes{};
  shared_ptr<long> workingSet{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersMemory() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableBytes) {
      res["AvailableBytes"] = boost::any(*availableBytes);
    }
    if (cache) {
      res["Cache"] = boost::any(*cache);
    }
    if (rss) {
      res["Rss"] = boost::any(*rss);
    }
    if (usageBytes) {
      res["UsageBytes"] = boost::any(*usageBytes);
    }
    if (workingSet) {
      res["WorkingSet"] = boost::any(*workingSet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableBytes") != m.end() && !m["AvailableBytes"].empty()) {
      availableBytes = make_shared<long>(boost::any_cast<long>(m["AvailableBytes"]));
    }
    if (m.find("Cache") != m.end() && !m["Cache"].empty()) {
      cache = make_shared<long>(boost::any_cast<long>(m["Cache"]));
    }
    if (m.find("Rss") != m.end() && !m["Rss"].empty()) {
      rss = make_shared<long>(boost::any_cast<long>(m["Rss"]));
    }
    if (m.find("UsageBytes") != m.end() && !m["UsageBytes"].empty()) {
      usageBytes = make_shared<long>(boost::any_cast<long>(m["UsageBytes"]));
    }
    if (m.find("WorkingSet") != m.end() && !m["WorkingSet"].empty()) {
      workingSet = make_shared<long>(boost::any_cast<long>(m["WorkingSet"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersMemory() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainers : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersCPU> CPU{};
  shared_ptr<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersMemory> memory{};
  shared_ptr<string> name{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainers() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = CPU ? boost::any(CPU->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (memory) {
      res["Memory"] = memory ? boost::any(memory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      if (typeid(map<string, boost::any>) == m["CPU"].type()) {
        DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersCPU model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CPU"]));
        CPU = make_shared<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersCPU>(model1);
      }
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Memory"].type()) {
        DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Memory"]));
        memory = make_shared<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainersMemory>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainers() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsDisk : public Darabonba::Model {
public:
  shared_ptr<string> device{};
  shared_ptr<long> readBytes{};
  shared_ptr<long> readIo{};
  shared_ptr<long> writeBytes{};
  shared_ptr<long> writeIo{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsDisk() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (readBytes) {
      res["ReadBytes"] = boost::any(*readBytes);
    }
    if (readIo) {
      res["ReadIo"] = boost::any(*readIo);
    }
    if (writeBytes) {
      res["WriteBytes"] = boost::any(*writeBytes);
    }
    if (writeIo) {
      res["WriteIo"] = boost::any(*writeIo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("ReadBytes") != m.end() && !m["ReadBytes"].empty()) {
      readBytes = make_shared<long>(boost::any_cast<long>(m["ReadBytes"]));
    }
    if (m.find("ReadIo") != m.end() && !m["ReadIo"].empty()) {
      readIo = make_shared<long>(boost::any_cast<long>(m["ReadIo"]));
    }
    if (m.find("WriteBytes") != m.end() && !m["WriteBytes"].empty()) {
      writeBytes = make_shared<long>(boost::any_cast<long>(m["WriteBytes"]));
    }
    if (m.find("WriteIo") != m.end() && !m["WriteIo"].empty()) {
      writeIo = make_shared<long>(boost::any_cast<long>(m["WriteIo"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsDisk() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsFilesystem : public Darabonba::Model {
public:
  shared_ptr<long> available{};
  shared_ptr<long> capacity{};
  shared_ptr<string> fsName{};
  shared_ptr<long> usage{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsFilesystem() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsFilesystem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (available) {
      res["Available"] = boost::any(*available);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (fsName) {
      res["FsName"] = boost::any(*fsName);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Available") != m.end() && !m["Available"].empty()) {
      available = make_shared<long>(boost::any_cast<long>(m["Available"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("FsName") != m.end() && !m["FsName"].empty()) {
      fsName = make_shared<string>(boost::any_cast<string>(m["FsName"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<long>(boost::any_cast<long>(m["Usage"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsFilesystem() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsMemory : public Darabonba::Model {
public:
  shared_ptr<long> availableBytes{};
  shared_ptr<long> cache{};
  shared_ptr<long> rss{};
  shared_ptr<long> usageBytes{};
  shared_ptr<long> workingSet{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsMemory() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableBytes) {
      res["AvailableBytes"] = boost::any(*availableBytes);
    }
    if (cache) {
      res["Cache"] = boost::any(*cache);
    }
    if (rss) {
      res["Rss"] = boost::any(*rss);
    }
    if (usageBytes) {
      res["UsageBytes"] = boost::any(*usageBytes);
    }
    if (workingSet) {
      res["WorkingSet"] = boost::any(*workingSet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableBytes") != m.end() && !m["AvailableBytes"].empty()) {
      availableBytes = make_shared<long>(boost::any_cast<long>(m["AvailableBytes"]));
    }
    if (m.find("Cache") != m.end() && !m["Cache"].empty()) {
      cache = make_shared<long>(boost::any_cast<long>(m["Cache"]));
    }
    if (m.find("Rss") != m.end() && !m["Rss"].empty()) {
      rss = make_shared<long>(boost::any_cast<long>(m["Rss"]));
    }
    if (m.find("UsageBytes") != m.end() && !m["UsageBytes"].empty()) {
      usageBytes = make_shared<long>(boost::any_cast<long>(m["UsageBytes"]));
    }
    if (m.find("WorkingSet") != m.end() && !m["WorkingSet"].empty()) {
      workingSet = make_shared<long>(boost::any_cast<long>(m["WorkingSet"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsMemory() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetworkInterfaces : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> rxBytes{};
  shared_ptr<long> rxDrops{};
  shared_ptr<long> rxErrors{};
  shared_ptr<long> rxPackets{};
  shared_ptr<long> txBytes{};
  shared_ptr<long> txDrops{};
  shared_ptr<long> txErrors{};
  shared_ptr<long> txPackets{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetworkInterfaces() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetworkInterfaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (rxBytes) {
      res["RxBytes"] = boost::any(*rxBytes);
    }
    if (rxDrops) {
      res["RxDrops"] = boost::any(*rxDrops);
    }
    if (rxErrors) {
      res["RxErrors"] = boost::any(*rxErrors);
    }
    if (rxPackets) {
      res["RxPackets"] = boost::any(*rxPackets);
    }
    if (txBytes) {
      res["TxBytes"] = boost::any(*txBytes);
    }
    if (txDrops) {
      res["TxDrops"] = boost::any(*txDrops);
    }
    if (txErrors) {
      res["TxErrors"] = boost::any(*txErrors);
    }
    if (txPackets) {
      res["TxPackets"] = boost::any(*txPackets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RxBytes") != m.end() && !m["RxBytes"].empty()) {
      rxBytes = make_shared<long>(boost::any_cast<long>(m["RxBytes"]));
    }
    if (m.find("RxDrops") != m.end() && !m["RxDrops"].empty()) {
      rxDrops = make_shared<long>(boost::any_cast<long>(m["RxDrops"]));
    }
    if (m.find("RxErrors") != m.end() && !m["RxErrors"].empty()) {
      rxErrors = make_shared<long>(boost::any_cast<long>(m["RxErrors"]));
    }
    if (m.find("RxPackets") != m.end() && !m["RxPackets"].empty()) {
      rxPackets = make_shared<long>(boost::any_cast<long>(m["RxPackets"]));
    }
    if (m.find("TxBytes") != m.end() && !m["TxBytes"].empty()) {
      txBytes = make_shared<long>(boost::any_cast<long>(m["TxBytes"]));
    }
    if (m.find("TxDrops") != m.end() && !m["TxDrops"].empty()) {
      txDrops = make_shared<long>(boost::any_cast<long>(m["TxDrops"]));
    }
    if (m.find("TxErrors") != m.end() && !m["TxErrors"].empty()) {
      txErrors = make_shared<long>(boost::any_cast<long>(m["TxErrors"]));
    }
    if (m.find("TxPackets") != m.end() && !m["TxPackets"].empty()) {
      txPackets = make_shared<long>(boost::any_cast<long>(m["TxPackets"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetworkInterfaces() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetwork : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetworkInterfaces>> interfaces{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetwork() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (interfaces) {
      vector<boost::any> temp1;
      for(auto item1:*interfaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Interfaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Interfaces") != m.end() && !m["Interfaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Interfaces"].type()) {
        vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetworkInterfaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Interfaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetworkInterfaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        interfaces = make_shared<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetworkInterfaces>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetwork() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecords : public Darabonba::Model {
public:
  shared_ptr<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsCPU> CPU{};
  shared_ptr<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainers>> containers{};
  shared_ptr<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsDisk>> disk{};
  shared_ptr<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsFilesystem>> filesystem{};
  shared_ptr<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsMemory> memory{};
  shared_ptr<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetwork> network{};
  shared_ptr<string> timestamp{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecords() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = CPU ? boost::any(CPU->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (containers) {
      vector<boost::any> temp1;
      for(auto item1:*containers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Containers"] = boost::any(temp1);
    }
    if (disk) {
      vector<boost::any> temp1;
      for(auto item1:*disk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disk"] = boost::any(temp1);
    }
    if (filesystem) {
      vector<boost::any> temp1;
      for(auto item1:*filesystem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filesystem"] = boost::any(temp1);
    }
    if (memory) {
      res["Memory"] = memory ? boost::any(memory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      if (typeid(map<string, boost::any>) == m["CPU"].type()) {
        DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsCPU model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CPU"]));
        CPU = make_shared<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsCPU>(model1);
      }
    }
    if (m.find("Containers") != m.end() && !m["Containers"].empty()) {
      if (typeid(vector<boost::any>) == m["Containers"].type()) {
        vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Containers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containers = make_shared<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsContainers>>(expect1);
      }
    }
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      if (typeid(vector<boost::any>) == m["Disk"].type()) {
        vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disk = make_shared<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsDisk>>(expect1);
      }
    }
    if (m.find("Filesystem") != m.end() && !m["Filesystem"].empty()) {
      if (typeid(vector<boost::any>) == m["Filesystem"].type()) {
        vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsFilesystem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filesystem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsFilesystem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filesystem = make_shared<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsFilesystem>>(expect1);
      }
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Memory"].type()) {
        DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Memory"]));
        memory = make_shared<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsMemory>(model1);
      }
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecordsNetwork>(model1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecords() = default;
};
class DescribeMultiContainerGroupMetricResponseBodyMonitorDatas : public Darabonba::Model {
public:
  shared_ptr<string> containerGroupId{};
  shared_ptr<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecords>> records{};

  DescribeMultiContainerGroupMetricResponseBodyMonitorDatas() {}

  explicit DescribeMultiContainerGroupMetricResponseBodyMonitorDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatasRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBodyMonitorDatas() = default;
};
class DescribeMultiContainerGroupMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatas>> monitorDatas{};
  shared_ptr<string> requestId{};

  DescribeMultiContainerGroupMetricResponseBody() {}

  explicit DescribeMultiContainerGroupMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (monitorDatas) {
      vector<boost::any> temp1;
      for(auto item1:*monitorDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MonitorDatas"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MonitorDatas") != m.end() && !m["MonitorDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["MonitorDatas"].type()) {
        vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MonitorDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMultiContainerGroupMetricResponseBodyMonitorDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        monitorDatas = make_shared<vector<DescribeMultiContainerGroupMetricResponseBodyMonitorDatas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponseBody() = default;
};
class DescribeMultiContainerGroupMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMultiContainerGroupMetricResponseBody> body{};

  DescribeMultiContainerGroupMetricResponse() {}

  explicit DescribeMultiContainerGroupMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMultiContainerGroupMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMultiContainerGroupMetricResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMultiContainerGroupMetricResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> recommendZones{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> unavailableZones{};
  shared_ptr<vector<string>> zones{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recommendZones) {
      res["RecommendZones"] = boost::any(*recommendZones);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (unavailableZones) {
      res["UnavailableZones"] = boost::any(*unavailableZones);
    }
    if (zones) {
      res["Zones"] = boost::any(*zones);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecommendZones") != m.end() && !m["RecommendZones"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RecommendZones"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecommendZones"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      recommendZones = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UnavailableZones") != m.end() && !m["UnavailableZones"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnavailableZones"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnavailableZones"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unavailableZones = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Zones"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zones = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
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
class DescribeVirtualNodesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeVirtualNodesRequestTag() {}

  explicit DescribeVirtualNodesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeVirtualNodesRequestTag() = default;
};
class DescribeVirtualNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeVirtualNodesRequestTag>> tag{};
  shared_ptr<string> virtualNodeIds{};
  shared_ptr<string> virtualNodeName{};

  DescribeVirtualNodesRequest() {}

  explicit DescribeVirtualNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (virtualNodeIds) {
      res["VirtualNodeIds"] = boost::any(*virtualNodeIds);
    }
    if (virtualNodeName) {
      res["VirtualNodeName"] = boost::any(*virtualNodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeVirtualNodesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVirtualNodesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeVirtualNodesRequestTag>>(expect1);
      }
    }
    if (m.find("VirtualNodeIds") != m.end() && !m["VirtualNodeIds"].empty()) {
      virtualNodeIds = make_shared<string>(boost::any_cast<string>(m["VirtualNodeIds"]));
    }
    if (m.find("VirtualNodeName") != m.end() && !m["VirtualNodeName"].empty()) {
      virtualNodeName = make_shared<string>(boost::any_cast<string>(m["VirtualNodeName"]));
    }
  }


  virtual ~DescribeVirtualNodesRequest() = default;
};
class DescribeVirtualNodesResponseBodyVirtualNodesEvents : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> firstTimestamp{};
  shared_ptr<string> lastTimestamp{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> reason{};
  shared_ptr<string> type{};

  DescribeVirtualNodesResponseBodyVirtualNodesEvents() {}

  explicit DescribeVirtualNodesResponseBodyVirtualNodesEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (firstTimestamp) {
      res["FirstTimestamp"] = boost::any(*firstTimestamp);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("FirstTimestamp") != m.end() && !m["FirstTimestamp"].empty()) {
      firstTimestamp = make_shared<string>(boost::any_cast<string>(m["FirstTimestamp"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<string>(boost::any_cast<string>(m["LastTimestamp"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeVirtualNodesResponseBodyVirtualNodesEvents() = default;
};
class DescribeVirtualNodesResponseBodyVirtualNodesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeVirtualNodesResponseBodyVirtualNodesTags() {}

  explicit DescribeVirtualNodesResponseBodyVirtualNodesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeVirtualNodesResponseBodyVirtualNodesTags() = default;
};
class DescribeVirtualNodesResponseBodyVirtualNodes : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<vector<DescribeVirtualNodesResponseBodyVirtualNodesEvents>> events{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> intranetIp{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeVirtualNodesResponseBodyVirtualNodesTags>> tags{};
  shared_ptr<string> virtualNodeId{};
  shared_ptr<string> virtualNodeName{};
  shared_ptr<string> virtualNodeSecurityGroupId{};
  shared_ptr<string> virtualNodeVSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeVirtualNodesResponseBodyVirtualNodes() {}

  explicit DescribeVirtualNodesResponseBodyVirtualNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (intranetIp) {
      res["IntranetIp"] = boost::any(*intranetIp);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (virtualNodeId) {
      res["VirtualNodeId"] = boost::any(*virtualNodeId);
    }
    if (virtualNodeName) {
      res["VirtualNodeName"] = boost::any(*virtualNodeName);
    }
    if (virtualNodeSecurityGroupId) {
      res["VirtualNodeSecurityGroupId"] = boost::any(*virtualNodeSecurityGroupId);
    }
    if (virtualNodeVSwitchId) {
      res["VirtualNodeVSwitchId"] = boost::any(*virtualNodeVSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeVirtualNodesResponseBodyVirtualNodesEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVirtualNodesResponseBodyVirtualNodesEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeVirtualNodesResponseBodyVirtualNodesEvents>>(expect1);
      }
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IntranetIp") != m.end() && !m["IntranetIp"].empty()) {
      intranetIp = make_shared<string>(boost::any_cast<string>(m["IntranetIp"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeVirtualNodesResponseBodyVirtualNodesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVirtualNodesResponseBodyVirtualNodesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeVirtualNodesResponseBodyVirtualNodesTags>>(expect1);
      }
    }
    if (m.find("VirtualNodeId") != m.end() && !m["VirtualNodeId"].empty()) {
      virtualNodeId = make_shared<string>(boost::any_cast<string>(m["VirtualNodeId"]));
    }
    if (m.find("VirtualNodeName") != m.end() && !m["VirtualNodeName"].empty()) {
      virtualNodeName = make_shared<string>(boost::any_cast<string>(m["VirtualNodeName"]));
    }
    if (m.find("VirtualNodeSecurityGroupId") != m.end() && !m["VirtualNodeSecurityGroupId"].empty()) {
      virtualNodeSecurityGroupId = make_shared<string>(boost::any_cast<string>(m["VirtualNodeSecurityGroupId"]));
    }
    if (m.find("VirtualNodeVSwitchId") != m.end() && !m["VirtualNodeVSwitchId"].empty()) {
      virtualNodeVSwitchId = make_shared<string>(boost::any_cast<string>(m["VirtualNodeVSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeVirtualNodesResponseBodyVirtualNodes() = default;
};
class DescribeVirtualNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeVirtualNodesResponseBodyVirtualNodes>> virtualNodes{};

  DescribeVirtualNodesResponseBody() {}

  explicit DescribeVirtualNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (virtualNodes) {
      vector<boost::any> temp1;
      for(auto item1:*virtualNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualNodes"] = boost::any(temp1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VirtualNodes") != m.end() && !m["VirtualNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["VirtualNodes"].type()) {
        vector<DescribeVirtualNodesResponseBodyVirtualNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VirtualNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVirtualNodesResponseBodyVirtualNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        virtualNodes = make_shared<vector<DescribeVirtualNodesResponseBodyVirtualNodes>>(expect1);
      }
    }
  }


  virtual ~DescribeVirtualNodesResponseBody() = default;
};
class DescribeVirtualNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVirtualNodesResponseBody> body{};

  DescribeVirtualNodesResponse() {}

  explicit DescribeVirtualNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVirtualNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVirtualNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVirtualNodesResponse() = default;
};
class ExecContainerCommandRequest : public Darabonba::Model {
public:
  shared_ptr<string> command{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> containerName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> stdin{};
  shared_ptr<bool> sync{};
  shared_ptr<bool> TTY{};

  ExecContainerCommandRequest() {}

  explicit ExecContainerCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
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
    if (stdin) {
      res["Stdin"] = boost::any(*stdin);
    }
    if (sync) {
      res["Sync"] = boost::any(*sync);
    }
    if (TTY) {
      res["TTY"] = boost::any(*TTY);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
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
    if (m.find("Stdin") != m.end() && !m["Stdin"].empty()) {
      stdin = make_shared<bool>(boost::any_cast<bool>(m["Stdin"]));
    }
    if (m.find("Sync") != m.end() && !m["Sync"].empty()) {
      sync = make_shared<bool>(boost::any_cast<bool>(m["Sync"]));
    }
    if (m.find("TTY") != m.end() && !m["TTY"].empty()) {
      TTY = make_shared<bool>(boost::any_cast<bool>(m["TTY"]));
    }
  }


  virtual ~ExecContainerCommandRequest() = default;
};
class ExecContainerCommandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<string> syncResponse{};
  shared_ptr<string> webSocketUri{};

  ExecContainerCommandResponseBody() {}

  explicit ExecContainerCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpUrl) {
      res["HttpUrl"] = boost::any(*httpUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (syncResponse) {
      res["SyncResponse"] = boost::any(*syncResponse);
    }
    if (webSocketUri) {
      res["WebSocketUri"] = boost::any(*webSocketUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpUrl") != m.end() && !m["HttpUrl"].empty()) {
      httpUrl = make_shared<string>(boost::any_cast<string>(m["HttpUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SyncResponse") != m.end() && !m["SyncResponse"].empty()) {
      syncResponse = make_shared<string>(boost::any_cast<string>(m["SyncResponse"]));
    }
    if (m.find("WebSocketUri") != m.end() && !m["WebSocketUri"].empty()) {
      webSocketUri = make_shared<string>(boost::any_cast<string>(m["WebSocketUri"]));
    }
  }


  virtual ~ExecContainerCommandResponseBody() = default;
};
class ExecContainerCommandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecContainerCommandResponseBody> body{};

  ExecContainerCommandResponse() {}

  explicit ExecContainerCommandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExecContainerCommandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecContainerCommandResponseBody>(model1);
      }
    }
  }


  virtual ~ExecContainerCommandResponse() = default;
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
  shared_ptr<string> limit{};
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
    if (limit) {
      res["Limit"] = boost::any(*limit);
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
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<string>(boost::any_cast<string>(m["Limit"]));
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
class ListUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListUsageRequest() {}

  explicit ListUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListUsageRequest() = default;
};
class ListUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> attributes{};
  shared_ptr<string> requestId{};

  ListUsageResponseBody() {}

  explicit ListUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Attributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attributes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUsageResponseBody() = default;
};
class ListUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsageResponseBody> body{};

  ListUsageResponse() {}

  explicit ListUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsageResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsageResponse() = default;
};
class ResizeContainerGroupVolumeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<long> newSize{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> volumeName{};

  ResizeContainerGroupVolumeRequest() {}

  explicit ResizeContainerGroupVolumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (newSize) {
      res["NewSize"] = boost::any(*newSize);
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
    if (volumeName) {
      res["VolumeName"] = boost::any(*volumeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("NewSize") != m.end() && !m["NewSize"].empty()) {
      newSize = make_shared<long>(boost::any_cast<long>(m["NewSize"]));
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
    if (m.find("VolumeName") != m.end() && !m["VolumeName"].empty()) {
      volumeName = make_shared<string>(boost::any_cast<string>(m["VolumeName"]));
    }
  }


  virtual ~ResizeContainerGroupVolumeRequest() = default;
};
class ResizeContainerGroupVolumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResizeContainerGroupVolumeResponseBody() {}

  explicit ResizeContainerGroupVolumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResizeContainerGroupVolumeResponseBody() = default;
};
class ResizeContainerGroupVolumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResizeContainerGroupVolumeResponseBody> body{};

  ResizeContainerGroupVolumeResponse() {}

  explicit ResizeContainerGroupVolumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResizeContainerGroupVolumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResizeContainerGroupVolumeResponseBody>(model1);
      }
    }
  }


  virtual ~ResizeContainerGroupVolumeResponse() = default;
};
class RestartContainerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RestartContainerGroupRequest() {}

  explicit RestartContainerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
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
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
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


  virtual ~RestartContainerGroupRequest() = default;
};
class RestartContainerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartContainerGroupResponseBody() {}

  explicit RestartContainerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartContainerGroupResponseBody() = default;
};
class RestartContainerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartContainerGroupResponseBody> body{};

  RestartContainerGroupResponse() {}

  explicit RestartContainerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartContainerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartContainerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RestartContainerGroupResponse() = default;
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
  shared_ptr<string> clientToken{};
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
class UpdateContainerGroupRequestDnsConfigOption : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  UpdateContainerGroupRequestDnsConfigOption() {}

  explicit UpdateContainerGroupRequestDnsConfigOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateContainerGroupRequestDnsConfigOption() = default;
};
class UpdateContainerGroupRequestDnsConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> nameServer{};
  shared_ptr<vector<UpdateContainerGroupRequestDnsConfigOption>> option{};
  shared_ptr<vector<string>> search{};

  UpdateContainerGroupRequestDnsConfig() {}

  explicit UpdateContainerGroupRequestDnsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nameServer) {
      res["NameServer"] = boost::any(*nameServer);
    }
    if (option) {
      vector<boost::any> temp1;
      for(auto item1:*option){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Option"] = boost::any(temp1);
    }
    if (search) {
      res["Search"] = boost::any(*search);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NameServer") != m.end() && !m["NameServer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NameServer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NameServer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nameServer = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      if (typeid(vector<boost::any>) == m["Option"].type()) {
        vector<UpdateContainerGroupRequestDnsConfigOption> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Option"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestDnsConfigOption model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        option = make_shared<vector<UpdateContainerGroupRequestDnsConfigOption>>(expect1);
      }
    }
    if (m.find("Search") != m.end() && !m["Search"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Search"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Search"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      search = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateContainerGroupRequestDnsConfig() = default;
};
class UpdateContainerGroupRequestAcrRegistryInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionId{};

  UpdateContainerGroupRequestAcrRegistryInfo() {}

  explicit UpdateContainerGroupRequestAcrRegistryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Domain"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domain = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateContainerGroupRequestAcrRegistryInfo() = default;
};
class UpdateContainerGroupRequestContainerLivenessProbeExec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> command{};

  UpdateContainerGroupRequestContainerLivenessProbeExec() {}

  explicit UpdateContainerGroupRequestContainerLivenessProbeExec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateContainerGroupRequestContainerLivenessProbeExec() = default;
};
class UpdateContainerGroupRequestContainerLivenessProbeHttpGet : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<long> port{};
  shared_ptr<string> scheme{};

  UpdateContainerGroupRequestContainerLivenessProbeHttpGet() {}

  explicit UpdateContainerGroupRequestContainerLivenessProbeHttpGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerLivenessProbeHttpGet() = default;
};
class UpdateContainerGroupRequestContainerLivenessProbeTcpSocket : public Darabonba::Model {
public:
  shared_ptr<long> port{};

  UpdateContainerGroupRequestContainerLivenessProbeTcpSocket() {}

  explicit UpdateContainerGroupRequestContainerLivenessProbeTcpSocket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerLivenessProbeTcpSocket() = default;
};
class UpdateContainerGroupRequestContainerLivenessProbe : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestContainerLivenessProbeExec> exec{};
  shared_ptr<long> failureThreshold{};
  shared_ptr<UpdateContainerGroupRequestContainerLivenessProbeHttpGet> httpGet{};
  shared_ptr<long> initialDelaySeconds{};
  shared_ptr<long> periodSeconds{};
  shared_ptr<long> successThreshold{};
  shared_ptr<UpdateContainerGroupRequestContainerLivenessProbeTcpSocket> tcpSocket{};
  shared_ptr<long> timeoutSeconds{};

  UpdateContainerGroupRequestContainerLivenessProbe() {}

  explicit UpdateContainerGroupRequestContainerLivenessProbe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exec) {
      res["Exec"] = exec ? boost::any(exec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (failureThreshold) {
      res["FailureThreshold"] = boost::any(*failureThreshold);
    }
    if (httpGet) {
      res["HttpGet"] = httpGet ? boost::any(httpGet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initialDelaySeconds) {
      res["InitialDelaySeconds"] = boost::any(*initialDelaySeconds);
    }
    if (periodSeconds) {
      res["PeriodSeconds"] = boost::any(*periodSeconds);
    }
    if (successThreshold) {
      res["SuccessThreshold"] = boost::any(*successThreshold);
    }
    if (tcpSocket) {
      res["TcpSocket"] = tcpSocket ? boost::any(tcpSocket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeoutSeconds) {
      res["TimeoutSeconds"] = boost::any(*timeoutSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exec") != m.end() && !m["Exec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exec"].type()) {
        UpdateContainerGroupRequestContainerLivenessProbeExec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exec"]));
        exec = make_shared<UpdateContainerGroupRequestContainerLivenessProbeExec>(model1);
      }
    }
    if (m.find("FailureThreshold") != m.end() && !m["FailureThreshold"].empty()) {
      failureThreshold = make_shared<long>(boost::any_cast<long>(m["FailureThreshold"]));
    }
    if (m.find("HttpGet") != m.end() && !m["HttpGet"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpGet"].type()) {
        UpdateContainerGroupRequestContainerLivenessProbeHttpGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpGet"]));
        httpGet = make_shared<UpdateContainerGroupRequestContainerLivenessProbeHttpGet>(model1);
      }
    }
    if (m.find("InitialDelaySeconds") != m.end() && !m["InitialDelaySeconds"].empty()) {
      initialDelaySeconds = make_shared<long>(boost::any_cast<long>(m["InitialDelaySeconds"]));
    }
    if (m.find("PeriodSeconds") != m.end() && !m["PeriodSeconds"].empty()) {
      periodSeconds = make_shared<long>(boost::any_cast<long>(m["PeriodSeconds"]));
    }
    if (m.find("SuccessThreshold") != m.end() && !m["SuccessThreshold"].empty()) {
      successThreshold = make_shared<long>(boost::any_cast<long>(m["SuccessThreshold"]));
    }
    if (m.find("TcpSocket") != m.end() && !m["TcpSocket"].empty()) {
      if (typeid(map<string, boost::any>) == m["TcpSocket"].type()) {
        UpdateContainerGroupRequestContainerLivenessProbeTcpSocket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TcpSocket"]));
        tcpSocket = make_shared<UpdateContainerGroupRequestContainerLivenessProbeTcpSocket>(model1);
      }
    }
    if (m.find("TimeoutSeconds") != m.end() && !m["TimeoutSeconds"].empty()) {
      timeoutSeconds = make_shared<long>(boost::any_cast<long>(m["TimeoutSeconds"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerLivenessProbe() = default;
};
class UpdateContainerGroupRequestContainerReadinessProbeExec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> command{};

  UpdateContainerGroupRequestContainerReadinessProbeExec() {}

  explicit UpdateContainerGroupRequestContainerReadinessProbeExec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateContainerGroupRequestContainerReadinessProbeExec() = default;
};
class UpdateContainerGroupRequestContainerReadinessProbeHttpGet : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<long> port{};
  shared_ptr<string> scheme{};

  UpdateContainerGroupRequestContainerReadinessProbeHttpGet() {}

  explicit UpdateContainerGroupRequestContainerReadinessProbeHttpGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerReadinessProbeHttpGet() = default;
};
class UpdateContainerGroupRequestContainerReadinessProbeTcpSocket : public Darabonba::Model {
public:
  shared_ptr<long> port{};

  UpdateContainerGroupRequestContainerReadinessProbeTcpSocket() {}

  explicit UpdateContainerGroupRequestContainerReadinessProbeTcpSocket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerReadinessProbeTcpSocket() = default;
};
class UpdateContainerGroupRequestContainerReadinessProbe : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestContainerReadinessProbeExec> exec{};
  shared_ptr<long> failureThreshold{};
  shared_ptr<UpdateContainerGroupRequestContainerReadinessProbeHttpGet> httpGet{};
  shared_ptr<long> initialDelaySeconds{};
  shared_ptr<long> periodSeconds{};
  shared_ptr<long> successThreshold{};
  shared_ptr<UpdateContainerGroupRequestContainerReadinessProbeTcpSocket> tcpSocket{};
  shared_ptr<long> timeoutSeconds{};

  UpdateContainerGroupRequestContainerReadinessProbe() {}

  explicit UpdateContainerGroupRequestContainerReadinessProbe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exec) {
      res["Exec"] = exec ? boost::any(exec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (failureThreshold) {
      res["FailureThreshold"] = boost::any(*failureThreshold);
    }
    if (httpGet) {
      res["HttpGet"] = httpGet ? boost::any(httpGet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (initialDelaySeconds) {
      res["InitialDelaySeconds"] = boost::any(*initialDelaySeconds);
    }
    if (periodSeconds) {
      res["PeriodSeconds"] = boost::any(*periodSeconds);
    }
    if (successThreshold) {
      res["SuccessThreshold"] = boost::any(*successThreshold);
    }
    if (tcpSocket) {
      res["TcpSocket"] = tcpSocket ? boost::any(tcpSocket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeoutSeconds) {
      res["TimeoutSeconds"] = boost::any(*timeoutSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exec") != m.end() && !m["Exec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exec"].type()) {
        UpdateContainerGroupRequestContainerReadinessProbeExec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exec"]));
        exec = make_shared<UpdateContainerGroupRequestContainerReadinessProbeExec>(model1);
      }
    }
    if (m.find("FailureThreshold") != m.end() && !m["FailureThreshold"].empty()) {
      failureThreshold = make_shared<long>(boost::any_cast<long>(m["FailureThreshold"]));
    }
    if (m.find("HttpGet") != m.end() && !m["HttpGet"].empty()) {
      if (typeid(map<string, boost::any>) == m["HttpGet"].type()) {
        UpdateContainerGroupRequestContainerReadinessProbeHttpGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HttpGet"]));
        httpGet = make_shared<UpdateContainerGroupRequestContainerReadinessProbeHttpGet>(model1);
      }
    }
    if (m.find("InitialDelaySeconds") != m.end() && !m["InitialDelaySeconds"].empty()) {
      initialDelaySeconds = make_shared<long>(boost::any_cast<long>(m["InitialDelaySeconds"]));
    }
    if (m.find("PeriodSeconds") != m.end() && !m["PeriodSeconds"].empty()) {
      periodSeconds = make_shared<long>(boost::any_cast<long>(m["PeriodSeconds"]));
    }
    if (m.find("SuccessThreshold") != m.end() && !m["SuccessThreshold"].empty()) {
      successThreshold = make_shared<long>(boost::any_cast<long>(m["SuccessThreshold"]));
    }
    if (m.find("TcpSocket") != m.end() && !m["TcpSocket"].empty()) {
      if (typeid(map<string, boost::any>) == m["TcpSocket"].type()) {
        UpdateContainerGroupRequestContainerReadinessProbeTcpSocket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TcpSocket"]));
        tcpSocket = make_shared<UpdateContainerGroupRequestContainerReadinessProbeTcpSocket>(model1);
      }
    }
    if (m.find("TimeoutSeconds") != m.end() && !m["TimeoutSeconds"].empty()) {
      timeoutSeconds = make_shared<long>(boost::any_cast<long>(m["TimeoutSeconds"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerReadinessProbe() = default;
};
class UpdateContainerGroupRequestContainerSecurityContextCapability : public Darabonba::Model {
public:
  shared_ptr<vector<string>> add{};

  UpdateContainerGroupRequestContainerSecurityContextCapability() {}

  explicit UpdateContainerGroupRequestContainerSecurityContextCapability(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (add) {
      res["Add"] = boost::any(*add);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Add") != m.end() && !m["Add"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Add"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Add"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      add = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateContainerGroupRequestContainerSecurityContextCapability() = default;
};
class UpdateContainerGroupRequestContainerSecurityContext : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestContainerSecurityContextCapability> capability{};
  shared_ptr<bool> readOnlyRootFilesystem{};
  shared_ptr<long> runAsUser{};

  UpdateContainerGroupRequestContainerSecurityContext() {}

  explicit UpdateContainerGroupRequestContainerSecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capability) {
      res["Capability"] = capability ? boost::any(capability->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readOnlyRootFilesystem) {
      res["ReadOnlyRootFilesystem"] = boost::any(*readOnlyRootFilesystem);
    }
    if (runAsUser) {
      res["RunAsUser"] = boost::any(*runAsUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capability") != m.end() && !m["Capability"].empty()) {
      if (typeid(map<string, boost::any>) == m["Capability"].type()) {
        UpdateContainerGroupRequestContainerSecurityContextCapability model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Capability"]));
        capability = make_shared<UpdateContainerGroupRequestContainerSecurityContextCapability>(model1);
      }
    }
    if (m.find("ReadOnlyRootFilesystem") != m.end() && !m["ReadOnlyRootFilesystem"].empty()) {
      readOnlyRootFilesystem = make_shared<bool>(boost::any_cast<bool>(m["ReadOnlyRootFilesystem"]));
    }
    if (m.find("RunAsUser") != m.end() && !m["RunAsUser"].empty()) {
      runAsUser = make_shared<long>(boost::any_cast<long>(m["RunAsUser"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerSecurityContext() = default;
};
class UpdateContainerGroupRequestContainerEnvironmentVarFieldRef : public Darabonba::Model {
public:
  shared_ptr<string> fieldPath{};

  UpdateContainerGroupRequestContainerEnvironmentVarFieldRef() {}

  explicit UpdateContainerGroupRequestContainerEnvironmentVarFieldRef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldPath) {
      res["FieldPath"] = boost::any(*fieldPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldPath") != m.end() && !m["FieldPath"].empty()) {
      fieldPath = make_shared<string>(boost::any_cast<string>(m["FieldPath"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerEnvironmentVarFieldRef() = default;
};
class UpdateContainerGroupRequestContainerEnvironmentVar : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestContainerEnvironmentVarFieldRef> fieldRef{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateContainerGroupRequestContainerEnvironmentVar() {}

  explicit UpdateContainerGroupRequestContainerEnvironmentVar(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldRef) {
      res["FieldRef"] = fieldRef ? boost::any(fieldRef->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldRef") != m.end() && !m["FieldRef"].empty()) {
      if (typeid(map<string, boost::any>) == m["FieldRef"].type()) {
        UpdateContainerGroupRequestContainerEnvironmentVarFieldRef model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FieldRef"]));
        fieldRef = make_shared<UpdateContainerGroupRequestContainerEnvironmentVarFieldRef>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerEnvironmentVar() = default;
};
class UpdateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeaders : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  UpdateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeaders() {}

  explicit UpdateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeaders() = default;
};
class UpdateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  UpdateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader() {}

  explicit UpdateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader() = default;
};
class UpdateContainerGroupRequestContainerPort : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  UpdateContainerGroupRequestContainerPort() {}

  explicit UpdateContainerGroupRequestContainerPort(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerPort() = default;
};
class UpdateContainerGroupRequestContainerVolumeMount : public Darabonba::Model {
public:
  shared_ptr<string> mountPath{};
  shared_ptr<string> mountPropagation{};
  shared_ptr<string> name{};
  shared_ptr<bool> readOnly{};
  shared_ptr<string> subPath{};

  UpdateContainerGroupRequestContainerVolumeMount() {}

  explicit UpdateContainerGroupRequestContainerVolumeMount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (mountPropagation) {
      res["MountPropagation"] = boost::any(*mountPropagation);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (readOnly) {
      res["ReadOnly"] = boost::any(*readOnly);
    }
    if (subPath) {
      res["SubPath"] = boost::any(*subPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("MountPropagation") != m.end() && !m["MountPropagation"].empty()) {
      mountPropagation = make_shared<string>(boost::any_cast<string>(m["MountPropagation"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ReadOnly") != m.end() && !m["ReadOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["ReadOnly"]));
    }
    if (m.find("SubPath") != m.end() && !m["SubPath"].empty()) {
      subPath = make_shared<string>(boost::any_cast<string>(m["SubPath"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainerVolumeMount() = default;
};
class UpdateContainerGroupRequestContainer : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestContainerLivenessProbe> livenessProbe{};
  shared_ptr<UpdateContainerGroupRequestContainerReadinessProbe> readinessProbe{};
  shared_ptr<UpdateContainerGroupRequestContainerSecurityContext> securityContext{};
  shared_ptr<vector<string>> arg{};
  shared_ptr<vector<string>> command{};
  shared_ptr<double> cpu{};
  shared_ptr<vector<UpdateContainerGroupRequestContainerEnvironmentVar>> environmentVar{};
  shared_ptr<long> gpu{};
  shared_ptr<string> image{};
  shared_ptr<string> imagePullPolicy{};
  shared_ptr<vector<string>> lifecyclePostStartHandlerExec{};
  shared_ptr<string> lifecyclePostStartHandlerHttpGetHost{};
  shared_ptr<vector<UpdateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeaders>> lifecyclePostStartHandlerHttpGetHttpHeaders{};
  shared_ptr<string> lifecyclePostStartHandlerHttpGetPath{};
  shared_ptr<long> lifecyclePostStartHandlerHttpGetPort{};
  shared_ptr<string> lifecyclePostStartHandlerHttpGetScheme{};
  shared_ptr<string> lifecyclePostStartHandlerTcpSocketHost{};
  shared_ptr<long> lifecyclePostStartHandlerTcpSocketPort{};
  shared_ptr<vector<string>> lifecyclePreStopHandlerExec{};
  shared_ptr<string> lifecyclePreStopHandlerHttpGetHost{};
  shared_ptr<vector<UpdateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader>> lifecyclePreStopHandlerHttpGetHttpHeader{};
  shared_ptr<string> lifecyclePreStopHandlerHttpGetPath{};
  shared_ptr<long> lifecyclePreStopHandlerHttpGetPort{};
  shared_ptr<string> lifecyclePreStopHandlerHttpGetScheme{};
  shared_ptr<string> lifecyclePreStopHandlerTcpSocketHost{};
  shared_ptr<long> lifecyclePreStopHandlerTcpSocketPort{};
  shared_ptr<double> memory{};
  shared_ptr<string> name{};
  shared_ptr<vector<UpdateContainerGroupRequestContainerPort>> port{};
  shared_ptr<bool> stdin{};
  shared_ptr<bool> stdinOnce{};
  shared_ptr<bool> tty{};
  shared_ptr<vector<UpdateContainerGroupRequestContainerVolumeMount>> volumeMount{};
  shared_ptr<string> workingDir{};

  UpdateContainerGroupRequestContainer() {}

  explicit UpdateContainerGroupRequestContainer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (livenessProbe) {
      res["LivenessProbe"] = livenessProbe ? boost::any(livenessProbe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readinessProbe) {
      res["ReadinessProbe"] = readinessProbe ? boost::any(readinessProbe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityContext) {
      res["SecurityContext"] = securityContext ? boost::any(securityContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (environmentVar) {
      vector<boost::any> temp1;
      for(auto item1:*environmentVar){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnvironmentVar"] = boost::any(temp1);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imagePullPolicy) {
      res["ImagePullPolicy"] = boost::any(*imagePullPolicy);
    }
    if (lifecyclePostStartHandlerExec) {
      res["LifecyclePostStartHandlerExec"] = boost::any(*lifecyclePostStartHandlerExec);
    }
    if (lifecyclePostStartHandlerHttpGetHost) {
      res["LifecyclePostStartHandlerHttpGetHost"] = boost::any(*lifecyclePostStartHandlerHttpGetHost);
    }
    if (lifecyclePostStartHandlerHttpGetHttpHeaders) {
      vector<boost::any> temp1;
      for(auto item1:*lifecyclePostStartHandlerHttpGetHttpHeaders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecyclePostStartHandlerHttpGetHttpHeaders"] = boost::any(temp1);
    }
    if (lifecyclePostStartHandlerHttpGetPath) {
      res["LifecyclePostStartHandlerHttpGetPath"] = boost::any(*lifecyclePostStartHandlerHttpGetPath);
    }
    if (lifecyclePostStartHandlerHttpGetPort) {
      res["LifecyclePostStartHandlerHttpGetPort"] = boost::any(*lifecyclePostStartHandlerHttpGetPort);
    }
    if (lifecyclePostStartHandlerHttpGetScheme) {
      res["LifecyclePostStartHandlerHttpGetScheme"] = boost::any(*lifecyclePostStartHandlerHttpGetScheme);
    }
    if (lifecyclePostStartHandlerTcpSocketHost) {
      res["LifecyclePostStartHandlerTcpSocketHost"] = boost::any(*lifecyclePostStartHandlerTcpSocketHost);
    }
    if (lifecyclePostStartHandlerTcpSocketPort) {
      res["LifecyclePostStartHandlerTcpSocketPort"] = boost::any(*lifecyclePostStartHandlerTcpSocketPort);
    }
    if (lifecyclePreStopHandlerExec) {
      res["LifecyclePreStopHandlerExec"] = boost::any(*lifecyclePreStopHandlerExec);
    }
    if (lifecyclePreStopHandlerHttpGetHost) {
      res["LifecyclePreStopHandlerHttpGetHost"] = boost::any(*lifecyclePreStopHandlerHttpGetHost);
    }
    if (lifecyclePreStopHandlerHttpGetHttpHeader) {
      vector<boost::any> temp1;
      for(auto item1:*lifecyclePreStopHandlerHttpGetHttpHeader){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecyclePreStopHandlerHttpGetHttpHeader"] = boost::any(temp1);
    }
    if (lifecyclePreStopHandlerHttpGetPath) {
      res["LifecyclePreStopHandlerHttpGetPath"] = boost::any(*lifecyclePreStopHandlerHttpGetPath);
    }
    if (lifecyclePreStopHandlerHttpGetPort) {
      res["LifecyclePreStopHandlerHttpGetPort"] = boost::any(*lifecyclePreStopHandlerHttpGetPort);
    }
    if (lifecyclePreStopHandlerHttpGetScheme) {
      res["LifecyclePreStopHandlerHttpGetScheme"] = boost::any(*lifecyclePreStopHandlerHttpGetScheme);
    }
    if (lifecyclePreStopHandlerTcpSocketHost) {
      res["LifecyclePreStopHandlerTcpSocketHost"] = boost::any(*lifecyclePreStopHandlerTcpSocketHost);
    }
    if (lifecyclePreStopHandlerTcpSocketPort) {
      res["LifecyclePreStopHandlerTcpSocketPort"] = boost::any(*lifecyclePreStopHandlerTcpSocketPort);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (port) {
      vector<boost::any> temp1;
      for(auto item1:*port){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Port"] = boost::any(temp1);
    }
    if (stdin) {
      res["Stdin"] = boost::any(*stdin);
    }
    if (stdinOnce) {
      res["StdinOnce"] = boost::any(*stdinOnce);
    }
    if (tty) {
      res["Tty"] = boost::any(*tty);
    }
    if (volumeMount) {
      vector<boost::any> temp1;
      for(auto item1:*volumeMount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeMount"] = boost::any(temp1);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LivenessProbe") != m.end() && !m["LivenessProbe"].empty()) {
      if (typeid(map<string, boost::any>) == m["LivenessProbe"].type()) {
        UpdateContainerGroupRequestContainerLivenessProbe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LivenessProbe"]));
        livenessProbe = make_shared<UpdateContainerGroupRequestContainerLivenessProbe>(model1);
      }
    }
    if (m.find("ReadinessProbe") != m.end() && !m["ReadinessProbe"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReadinessProbe"].type()) {
        UpdateContainerGroupRequestContainerReadinessProbe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReadinessProbe"]));
        readinessProbe = make_shared<UpdateContainerGroupRequestContainerReadinessProbe>(model1);
      }
    }
    if (m.find("SecurityContext") != m.end() && !m["SecurityContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityContext"].type()) {
        UpdateContainerGroupRequestContainerSecurityContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityContext"]));
        securityContext = make_shared<UpdateContainerGroupRequestContainerSecurityContext>(model1);
      }
    }
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Arg"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Arg"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      arg = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("EnvironmentVar") != m.end() && !m["EnvironmentVar"].empty()) {
      if (typeid(vector<boost::any>) == m["EnvironmentVar"].type()) {
        vector<UpdateContainerGroupRequestContainerEnvironmentVar> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnvironmentVar"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestContainerEnvironmentVar model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environmentVar = make_shared<vector<UpdateContainerGroupRequestContainerEnvironmentVar>>(expect1);
      }
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImagePullPolicy") != m.end() && !m["ImagePullPolicy"].empty()) {
      imagePullPolicy = make_shared<string>(boost::any_cast<string>(m["ImagePullPolicy"]));
    }
    if (m.find("LifecyclePostStartHandlerExec") != m.end() && !m["LifecyclePostStartHandlerExec"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LifecyclePostStartHandlerExec"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LifecyclePostStartHandlerExec"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lifecyclePostStartHandlerExec = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LifecyclePostStartHandlerHttpGetHost") != m.end() && !m["LifecyclePostStartHandlerHttpGetHost"].empty()) {
      lifecyclePostStartHandlerHttpGetHost = make_shared<string>(boost::any_cast<string>(m["LifecyclePostStartHandlerHttpGetHost"]));
    }
    if (m.find("LifecyclePostStartHandlerHttpGetHttpHeaders") != m.end() && !m["LifecyclePostStartHandlerHttpGetHttpHeaders"].empty()) {
      if (typeid(vector<boost::any>) == m["LifecyclePostStartHandlerHttpGetHttpHeaders"].type()) {
        vector<UpdateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LifecyclePostStartHandlerHttpGetHttpHeaders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lifecyclePostStartHandlerHttpGetHttpHeaders = make_shared<vector<UpdateContainerGroupRequestContainerLifecyclePostStartHandlerHttpGetHttpHeaders>>(expect1);
      }
    }
    if (m.find("LifecyclePostStartHandlerHttpGetPath") != m.end() && !m["LifecyclePostStartHandlerHttpGetPath"].empty()) {
      lifecyclePostStartHandlerHttpGetPath = make_shared<string>(boost::any_cast<string>(m["LifecyclePostStartHandlerHttpGetPath"]));
    }
    if (m.find("LifecyclePostStartHandlerHttpGetPort") != m.end() && !m["LifecyclePostStartHandlerHttpGetPort"].empty()) {
      lifecyclePostStartHandlerHttpGetPort = make_shared<long>(boost::any_cast<long>(m["LifecyclePostStartHandlerHttpGetPort"]));
    }
    if (m.find("LifecyclePostStartHandlerHttpGetScheme") != m.end() && !m["LifecyclePostStartHandlerHttpGetScheme"].empty()) {
      lifecyclePostStartHandlerHttpGetScheme = make_shared<string>(boost::any_cast<string>(m["LifecyclePostStartHandlerHttpGetScheme"]));
    }
    if (m.find("LifecyclePostStartHandlerTcpSocketHost") != m.end() && !m["LifecyclePostStartHandlerTcpSocketHost"].empty()) {
      lifecyclePostStartHandlerTcpSocketHost = make_shared<string>(boost::any_cast<string>(m["LifecyclePostStartHandlerTcpSocketHost"]));
    }
    if (m.find("LifecyclePostStartHandlerTcpSocketPort") != m.end() && !m["LifecyclePostStartHandlerTcpSocketPort"].empty()) {
      lifecyclePostStartHandlerTcpSocketPort = make_shared<long>(boost::any_cast<long>(m["LifecyclePostStartHandlerTcpSocketPort"]));
    }
    if (m.find("LifecyclePreStopHandlerExec") != m.end() && !m["LifecyclePreStopHandlerExec"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LifecyclePreStopHandlerExec"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LifecyclePreStopHandlerExec"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lifecyclePreStopHandlerExec = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LifecyclePreStopHandlerHttpGetHost") != m.end() && !m["LifecyclePreStopHandlerHttpGetHost"].empty()) {
      lifecyclePreStopHandlerHttpGetHost = make_shared<string>(boost::any_cast<string>(m["LifecyclePreStopHandlerHttpGetHost"]));
    }
    if (m.find("LifecyclePreStopHandlerHttpGetHttpHeader") != m.end() && !m["LifecyclePreStopHandlerHttpGetHttpHeader"].empty()) {
      if (typeid(vector<boost::any>) == m["LifecyclePreStopHandlerHttpGetHttpHeader"].type()) {
        vector<UpdateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LifecyclePreStopHandlerHttpGetHttpHeader"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lifecyclePreStopHandlerHttpGetHttpHeader = make_shared<vector<UpdateContainerGroupRequestContainerLifecyclePreStopHandlerHttpGetHttpHeader>>(expect1);
      }
    }
    if (m.find("LifecyclePreStopHandlerHttpGetPath") != m.end() && !m["LifecyclePreStopHandlerHttpGetPath"].empty()) {
      lifecyclePreStopHandlerHttpGetPath = make_shared<string>(boost::any_cast<string>(m["LifecyclePreStopHandlerHttpGetPath"]));
    }
    if (m.find("LifecyclePreStopHandlerHttpGetPort") != m.end() && !m["LifecyclePreStopHandlerHttpGetPort"].empty()) {
      lifecyclePreStopHandlerHttpGetPort = make_shared<long>(boost::any_cast<long>(m["LifecyclePreStopHandlerHttpGetPort"]));
    }
    if (m.find("LifecyclePreStopHandlerHttpGetScheme") != m.end() && !m["LifecyclePreStopHandlerHttpGetScheme"].empty()) {
      lifecyclePreStopHandlerHttpGetScheme = make_shared<string>(boost::any_cast<string>(m["LifecyclePreStopHandlerHttpGetScheme"]));
    }
    if (m.find("LifecyclePreStopHandlerTcpSocketHost") != m.end() && !m["LifecyclePreStopHandlerTcpSocketHost"].empty()) {
      lifecyclePreStopHandlerTcpSocketHost = make_shared<string>(boost::any_cast<string>(m["LifecyclePreStopHandlerTcpSocketHost"]));
    }
    if (m.find("LifecyclePreStopHandlerTcpSocketPort") != m.end() && !m["LifecyclePreStopHandlerTcpSocketPort"].empty()) {
      lifecyclePreStopHandlerTcpSocketPort = make_shared<long>(boost::any_cast<long>(m["LifecyclePreStopHandlerTcpSocketPort"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      if (typeid(vector<boost::any>) == m["Port"].type()) {
        vector<UpdateContainerGroupRequestContainerPort> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Port"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestContainerPort model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        port = make_shared<vector<UpdateContainerGroupRequestContainerPort>>(expect1);
      }
    }
    if (m.find("Stdin") != m.end() && !m["Stdin"].empty()) {
      stdin = make_shared<bool>(boost::any_cast<bool>(m["Stdin"]));
    }
    if (m.find("StdinOnce") != m.end() && !m["StdinOnce"].empty()) {
      stdinOnce = make_shared<bool>(boost::any_cast<bool>(m["StdinOnce"]));
    }
    if (m.find("Tty") != m.end() && !m["Tty"].empty()) {
      tty = make_shared<bool>(boost::any_cast<bool>(m["Tty"]));
    }
    if (m.find("VolumeMount") != m.end() && !m["VolumeMount"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeMount"].type()) {
        vector<UpdateContainerGroupRequestContainerVolumeMount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeMount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestContainerVolumeMount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeMount = make_shared<vector<UpdateContainerGroupRequestContainerVolumeMount>>(expect1);
      }
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~UpdateContainerGroupRequestContainer() = default;
};
class UpdateContainerGroupRequestImageRegistryCredential : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> server{};
  shared_ptr<string> userName{};

  UpdateContainerGroupRequestImageRegistryCredential() {}

  explicit UpdateContainerGroupRequestImageRegistryCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (server) {
      res["Server"] = boost::any(*server);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Server") != m.end() && !m["Server"].empty()) {
      server = make_shared<string>(boost::any_cast<string>(m["Server"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~UpdateContainerGroupRequestImageRegistryCredential() = default;
};
class UpdateContainerGroupRequestInitContainerSecurityContextCapability : public Darabonba::Model {
public:
  shared_ptr<vector<string>> add{};

  UpdateContainerGroupRequestInitContainerSecurityContextCapability() {}

  explicit UpdateContainerGroupRequestInitContainerSecurityContextCapability(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (add) {
      res["Add"] = boost::any(*add);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Add") != m.end() && !m["Add"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Add"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Add"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      add = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateContainerGroupRequestInitContainerSecurityContextCapability() = default;
};
class UpdateContainerGroupRequestInitContainerSecurityContext : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestInitContainerSecurityContextCapability> capability{};
  shared_ptr<bool> readOnlyRootFilesystem{};
  shared_ptr<long> runAsUser{};

  UpdateContainerGroupRequestInitContainerSecurityContext() {}

  explicit UpdateContainerGroupRequestInitContainerSecurityContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capability) {
      res["Capability"] = capability ? boost::any(capability->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (readOnlyRootFilesystem) {
      res["ReadOnlyRootFilesystem"] = boost::any(*readOnlyRootFilesystem);
    }
    if (runAsUser) {
      res["RunAsUser"] = boost::any(*runAsUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capability") != m.end() && !m["Capability"].empty()) {
      if (typeid(map<string, boost::any>) == m["Capability"].type()) {
        UpdateContainerGroupRequestInitContainerSecurityContextCapability model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Capability"]));
        capability = make_shared<UpdateContainerGroupRequestInitContainerSecurityContextCapability>(model1);
      }
    }
    if (m.find("ReadOnlyRootFilesystem") != m.end() && !m["ReadOnlyRootFilesystem"].empty()) {
      readOnlyRootFilesystem = make_shared<bool>(boost::any_cast<bool>(m["ReadOnlyRootFilesystem"]));
    }
    if (m.find("RunAsUser") != m.end() && !m["RunAsUser"].empty()) {
      runAsUser = make_shared<long>(boost::any_cast<long>(m["RunAsUser"]));
    }
  }


  virtual ~UpdateContainerGroupRequestInitContainerSecurityContext() = default;
};
class UpdateContainerGroupRequestInitContainerEnvironmentVarFieldRef : public Darabonba::Model {
public:
  shared_ptr<string> fieldPath{};

  UpdateContainerGroupRequestInitContainerEnvironmentVarFieldRef() {}

  explicit UpdateContainerGroupRequestInitContainerEnvironmentVarFieldRef(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldPath) {
      res["FieldPath"] = boost::any(*fieldPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldPath") != m.end() && !m["FieldPath"].empty()) {
      fieldPath = make_shared<string>(boost::any_cast<string>(m["FieldPath"]));
    }
  }


  virtual ~UpdateContainerGroupRequestInitContainerEnvironmentVarFieldRef() = default;
};
class UpdateContainerGroupRequestInitContainerEnvironmentVar : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestInitContainerEnvironmentVarFieldRef> fieldRef{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateContainerGroupRequestInitContainerEnvironmentVar() {}

  explicit UpdateContainerGroupRequestInitContainerEnvironmentVar(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldRef) {
      res["FieldRef"] = fieldRef ? boost::any(fieldRef->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldRef") != m.end() && !m["FieldRef"].empty()) {
      if (typeid(map<string, boost::any>) == m["FieldRef"].type()) {
        UpdateContainerGroupRequestInitContainerEnvironmentVarFieldRef model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FieldRef"]));
        fieldRef = make_shared<UpdateContainerGroupRequestInitContainerEnvironmentVarFieldRef>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateContainerGroupRequestInitContainerEnvironmentVar() = default;
};
class UpdateContainerGroupRequestInitContainerPort : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  UpdateContainerGroupRequestInitContainerPort() {}

  explicit UpdateContainerGroupRequestInitContainerPort(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~UpdateContainerGroupRequestInitContainerPort() = default;
};
class UpdateContainerGroupRequestInitContainerVolumeMount : public Darabonba::Model {
public:
  shared_ptr<string> mountPath{};
  shared_ptr<string> mountPropagation{};
  shared_ptr<string> name{};
  shared_ptr<bool> readOnly{};
  shared_ptr<string> subPath{};

  UpdateContainerGroupRequestInitContainerVolumeMount() {}

  explicit UpdateContainerGroupRequestInitContainerVolumeMount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (mountPropagation) {
      res["MountPropagation"] = boost::any(*mountPropagation);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (readOnly) {
      res["ReadOnly"] = boost::any(*readOnly);
    }
    if (subPath) {
      res["SubPath"] = boost::any(*subPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("MountPropagation") != m.end() && !m["MountPropagation"].empty()) {
      mountPropagation = make_shared<string>(boost::any_cast<string>(m["MountPropagation"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ReadOnly") != m.end() && !m["ReadOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["ReadOnly"]));
    }
    if (m.find("SubPath") != m.end() && !m["SubPath"].empty()) {
      subPath = make_shared<string>(boost::any_cast<string>(m["SubPath"]));
    }
  }


  virtual ~UpdateContainerGroupRequestInitContainerVolumeMount() = default;
};
class UpdateContainerGroupRequestInitContainer : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestInitContainerSecurityContext> securityContext{};
  shared_ptr<vector<string>> arg{};
  shared_ptr<vector<string>> command{};
  shared_ptr<double> cpu{};
  shared_ptr<vector<UpdateContainerGroupRequestInitContainerEnvironmentVar>> environmentVar{};
  shared_ptr<long> gpu{};
  shared_ptr<string> image{};
  shared_ptr<string> imagePullPolicy{};
  shared_ptr<double> memory{};
  shared_ptr<string> name{};
  shared_ptr<vector<UpdateContainerGroupRequestInitContainerPort>> port{};
  shared_ptr<bool> stdin{};
  shared_ptr<bool> stdinOnce{};
  shared_ptr<bool> tty{};
  shared_ptr<vector<UpdateContainerGroupRequestInitContainerVolumeMount>> volumeMount{};
  shared_ptr<string> workingDir{};

  UpdateContainerGroupRequestInitContainer() {}

  explicit UpdateContainerGroupRequestInitContainer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityContext) {
      res["SecurityContext"] = securityContext ? boost::any(securityContext->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (arg) {
      res["Arg"] = boost::any(*arg);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (environmentVar) {
      vector<boost::any> temp1;
      for(auto item1:*environmentVar){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnvironmentVar"] = boost::any(temp1);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imagePullPolicy) {
      res["ImagePullPolicy"] = boost::any(*imagePullPolicy);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (port) {
      vector<boost::any> temp1;
      for(auto item1:*port){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Port"] = boost::any(temp1);
    }
    if (stdin) {
      res["Stdin"] = boost::any(*stdin);
    }
    if (stdinOnce) {
      res["StdinOnce"] = boost::any(*stdinOnce);
    }
    if (tty) {
      res["Tty"] = boost::any(*tty);
    }
    if (volumeMount) {
      vector<boost::any> temp1;
      for(auto item1:*volumeMount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeMount"] = boost::any(temp1);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityContext") != m.end() && !m["SecurityContext"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityContext"].type()) {
        UpdateContainerGroupRequestInitContainerSecurityContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityContext"]));
        securityContext = make_shared<UpdateContainerGroupRequestInitContainerSecurityContext>(model1);
      }
    }
    if (m.find("Arg") != m.end() && !m["Arg"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Arg"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Arg"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      arg = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("EnvironmentVar") != m.end() && !m["EnvironmentVar"].empty()) {
      if (typeid(vector<boost::any>) == m["EnvironmentVar"].type()) {
        vector<UpdateContainerGroupRequestInitContainerEnvironmentVar> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnvironmentVar"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestInitContainerEnvironmentVar model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environmentVar = make_shared<vector<UpdateContainerGroupRequestInitContainerEnvironmentVar>>(expect1);
      }
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImagePullPolicy") != m.end() && !m["ImagePullPolicy"].empty()) {
      imagePullPolicy = make_shared<string>(boost::any_cast<string>(m["ImagePullPolicy"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      if (typeid(vector<boost::any>) == m["Port"].type()) {
        vector<UpdateContainerGroupRequestInitContainerPort> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Port"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestInitContainerPort model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        port = make_shared<vector<UpdateContainerGroupRequestInitContainerPort>>(expect1);
      }
    }
    if (m.find("Stdin") != m.end() && !m["Stdin"].empty()) {
      stdin = make_shared<bool>(boost::any_cast<bool>(m["Stdin"]));
    }
    if (m.find("StdinOnce") != m.end() && !m["StdinOnce"].empty()) {
      stdinOnce = make_shared<bool>(boost::any_cast<bool>(m["StdinOnce"]));
    }
    if (m.find("Tty") != m.end() && !m["Tty"].empty()) {
      tty = make_shared<bool>(boost::any_cast<bool>(m["Tty"]));
    }
    if (m.find("VolumeMount") != m.end() && !m["VolumeMount"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeMount"].type()) {
        vector<UpdateContainerGroupRequestInitContainerVolumeMount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeMount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestInitContainerVolumeMount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeMount = make_shared<vector<UpdateContainerGroupRequestInitContainerVolumeMount>>(expect1);
      }
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~UpdateContainerGroupRequestInitContainer() = default;
};
class UpdateContainerGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateContainerGroupRequestTag() {}

  explicit UpdateContainerGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateContainerGroupRequestTag() = default;
};
class UpdateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> path{};

  UpdateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath() {}

  explicit UpdateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~UpdateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath() = default;
};
class UpdateContainerGroupRequestVolumeConfigFileVolume : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath>> configFileToPath{};

  UpdateContainerGroupRequestVolumeConfigFileVolume() {}

  explicit UpdateContainerGroupRequestVolumeConfigFileVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileToPath) {
      vector<boost::any> temp1;
      for(auto item1:*configFileToPath){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigFileToPath"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigFileToPath") != m.end() && !m["ConfigFileToPath"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigFileToPath"].type()) {
        vector<UpdateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigFileToPath"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configFileToPath = make_shared<vector<UpdateContainerGroupRequestVolumeConfigFileVolumeConfigFileToPath>>(expect1);
      }
    }
  }


  virtual ~UpdateContainerGroupRequestVolumeConfigFileVolume() = default;
};
class UpdateContainerGroupRequestVolumeEmptyDirVolume : public Darabonba::Model {
public:
  shared_ptr<string> medium{};
  shared_ptr<string> sizeLimit{};

  UpdateContainerGroupRequestVolumeEmptyDirVolume() {}

  explicit UpdateContainerGroupRequestVolumeEmptyDirVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (medium) {
      res["Medium"] = boost::any(*medium);
    }
    if (sizeLimit) {
      res["SizeLimit"] = boost::any(*sizeLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Medium") != m.end() && !m["Medium"].empty()) {
      medium = make_shared<string>(boost::any_cast<string>(m["Medium"]));
    }
    if (m.find("SizeLimit") != m.end() && !m["SizeLimit"].empty()) {
      sizeLimit = make_shared<string>(boost::any_cast<string>(m["SizeLimit"]));
    }
  }


  virtual ~UpdateContainerGroupRequestVolumeEmptyDirVolume() = default;
};
class UpdateContainerGroupRequestVolumeFlexVolume : public Darabonba::Model {
public:
  shared_ptr<string> driver{};
  shared_ptr<string> fsType{};
  shared_ptr<string> options{};

  UpdateContainerGroupRequestVolumeFlexVolume() {}

  explicit UpdateContainerGroupRequestVolumeFlexVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (driver) {
      res["Driver"] = boost::any(*driver);
    }
    if (fsType) {
      res["FsType"] = boost::any(*fsType);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Driver") != m.end() && !m["Driver"].empty()) {
      driver = make_shared<string>(boost::any_cast<string>(m["Driver"]));
    }
    if (m.find("FsType") != m.end() && !m["FsType"].empty()) {
      fsType = make_shared<string>(boost::any_cast<string>(m["FsType"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
  }


  virtual ~UpdateContainerGroupRequestVolumeFlexVolume() = default;
};
class UpdateContainerGroupRequestVolumeHostPathVolume : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> type{};

  UpdateContainerGroupRequestVolumeHostPathVolume() {}

  explicit UpdateContainerGroupRequestVolumeHostPathVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateContainerGroupRequestVolumeHostPathVolume() = default;
};
class UpdateContainerGroupRequestVolumeNFSVolume : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<bool> readOnly{};
  shared_ptr<string> server{};

  UpdateContainerGroupRequestVolumeNFSVolume() {}

  explicit UpdateContainerGroupRequestVolumeNFSVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (readOnly) {
      res["ReadOnly"] = boost::any(*readOnly);
    }
    if (server) {
      res["Server"] = boost::any(*server);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ReadOnly") != m.end() && !m["ReadOnly"].empty()) {
      readOnly = make_shared<bool>(boost::any_cast<bool>(m["ReadOnly"]));
    }
    if (m.find("Server") != m.end() && !m["Server"].empty()) {
      server = make_shared<string>(boost::any_cast<string>(m["Server"]));
    }
  }


  virtual ~UpdateContainerGroupRequestVolumeNFSVolume() = default;
};
class UpdateContainerGroupRequestVolume : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestVolumeConfigFileVolume> configFileVolume{};
  shared_ptr<UpdateContainerGroupRequestVolumeEmptyDirVolume> emptyDirVolume{};
  shared_ptr<UpdateContainerGroupRequestVolumeFlexVolume> flexVolume{};
  shared_ptr<UpdateContainerGroupRequestVolumeHostPathVolume> hostPathVolume{};
  shared_ptr<UpdateContainerGroupRequestVolumeNFSVolume> NFSVolume{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateContainerGroupRequestVolume() {}

  explicit UpdateContainerGroupRequestVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configFileVolume) {
      res["ConfigFileVolume"] = configFileVolume ? boost::any(configFileVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (emptyDirVolume) {
      res["EmptyDirVolume"] = emptyDirVolume ? boost::any(emptyDirVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flexVolume) {
      res["FlexVolume"] = flexVolume ? boost::any(flexVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hostPathVolume) {
      res["HostPathVolume"] = hostPathVolume ? boost::any(hostPathVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (NFSVolume) {
      res["NFSVolume"] = NFSVolume ? boost::any(NFSVolume->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigFileVolume") != m.end() && !m["ConfigFileVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigFileVolume"].type()) {
        UpdateContainerGroupRequestVolumeConfigFileVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigFileVolume"]));
        configFileVolume = make_shared<UpdateContainerGroupRequestVolumeConfigFileVolume>(model1);
      }
    }
    if (m.find("EmptyDirVolume") != m.end() && !m["EmptyDirVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["EmptyDirVolume"].type()) {
        UpdateContainerGroupRequestVolumeEmptyDirVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EmptyDirVolume"]));
        emptyDirVolume = make_shared<UpdateContainerGroupRequestVolumeEmptyDirVolume>(model1);
      }
    }
    if (m.find("FlexVolume") != m.end() && !m["FlexVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["FlexVolume"].type()) {
        UpdateContainerGroupRequestVolumeFlexVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FlexVolume"]));
        flexVolume = make_shared<UpdateContainerGroupRequestVolumeFlexVolume>(model1);
      }
    }
    if (m.find("HostPathVolume") != m.end() && !m["HostPathVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostPathVolume"].type()) {
        UpdateContainerGroupRequestVolumeHostPathVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostPathVolume"]));
        hostPathVolume = make_shared<UpdateContainerGroupRequestVolumeHostPathVolume>(model1);
      }
    }
    if (m.find("NFSVolume") != m.end() && !m["NFSVolume"].empty()) {
      if (typeid(map<string, boost::any>) == m["NFSVolume"].type()) {
        UpdateContainerGroupRequestVolumeNFSVolume model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NFSVolume"]));
        NFSVolume = make_shared<UpdateContainerGroupRequestVolumeNFSVolume>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateContainerGroupRequestVolume() = default;
};
class UpdateContainerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateContainerGroupRequestDnsConfig> dnsConfig{};
  shared_ptr<vector<UpdateContainerGroupRequestAcrRegistryInfo>> acrRegistryInfo{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<UpdateContainerGroupRequestContainer>> container{};
  shared_ptr<string> containerGroupId{};
  shared_ptr<double> cpu{};
  shared_ptr<vector<UpdateContainerGroupRequestImageRegistryCredential>> imageRegistryCredential{};
  shared_ptr<vector<UpdateContainerGroupRequestInitContainer>> initContainer{};
  shared_ptr<double> memory{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> restartPolicy{};
  shared_ptr<vector<UpdateContainerGroupRequestTag>> tag{};
  shared_ptr<string> updateType{};
  shared_ptr<vector<UpdateContainerGroupRequestVolume>> volume{};

  UpdateContainerGroupRequest() {}

  explicit UpdateContainerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsConfig) {
      res["DnsConfig"] = dnsConfig ? boost::any(dnsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (acrRegistryInfo) {
      vector<boost::any> temp1;
      for(auto item1:*acrRegistryInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AcrRegistryInfo"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (container) {
      vector<boost::any> temp1;
      for(auto item1:*container){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Container"] = boost::any(temp1);
    }
    if (containerGroupId) {
      res["ContainerGroupId"] = boost::any(*containerGroupId);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (imageRegistryCredential) {
      vector<boost::any> temp1;
      for(auto item1:*imageRegistryCredential){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageRegistryCredential"] = boost::any(temp1);
    }
    if (initContainer) {
      vector<boost::any> temp1;
      for(auto item1:*initContainer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InitContainer"] = boost::any(temp1);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
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
    if (restartPolicy) {
      res["RestartPolicy"] = boost::any(*restartPolicy);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (updateType) {
      res["UpdateType"] = boost::any(*updateType);
    }
    if (volume) {
      vector<boost::any> temp1;
      for(auto item1:*volume){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Volume"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsConfig") != m.end() && !m["DnsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DnsConfig"].type()) {
        UpdateContainerGroupRequestDnsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DnsConfig"]));
        dnsConfig = make_shared<UpdateContainerGroupRequestDnsConfig>(model1);
      }
    }
    if (m.find("AcrRegistryInfo") != m.end() && !m["AcrRegistryInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AcrRegistryInfo"].type()) {
        vector<UpdateContainerGroupRequestAcrRegistryInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AcrRegistryInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestAcrRegistryInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        acrRegistryInfo = make_shared<vector<UpdateContainerGroupRequestAcrRegistryInfo>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Container") != m.end() && !m["Container"].empty()) {
      if (typeid(vector<boost::any>) == m["Container"].type()) {
        vector<UpdateContainerGroupRequestContainer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Container"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestContainer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        container = make_shared<vector<UpdateContainerGroupRequestContainer>>(expect1);
      }
    }
    if (m.find("ContainerGroupId") != m.end() && !m["ContainerGroupId"].empty()) {
      containerGroupId = make_shared<string>(boost::any_cast<string>(m["ContainerGroupId"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("ImageRegistryCredential") != m.end() && !m["ImageRegistryCredential"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageRegistryCredential"].type()) {
        vector<UpdateContainerGroupRequestImageRegistryCredential> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageRegistryCredential"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestImageRegistryCredential model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageRegistryCredential = make_shared<vector<UpdateContainerGroupRequestImageRegistryCredential>>(expect1);
      }
    }
    if (m.find("InitContainer") != m.end() && !m["InitContainer"].empty()) {
      if (typeid(vector<boost::any>) == m["InitContainer"].type()) {
        vector<UpdateContainerGroupRequestInitContainer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InitContainer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestInitContainer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        initContainer = make_shared<vector<UpdateContainerGroupRequestInitContainer>>(expect1);
      }
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
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
    if (m.find("RestartPolicy") != m.end() && !m["RestartPolicy"].empty()) {
      restartPolicy = make_shared<string>(boost::any_cast<string>(m["RestartPolicy"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<UpdateContainerGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<UpdateContainerGroupRequestTag>>(expect1);
      }
    }
    if (m.find("UpdateType") != m.end() && !m["UpdateType"].empty()) {
      updateType = make_shared<string>(boost::any_cast<string>(m["UpdateType"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      if (typeid(vector<boost::any>) == m["Volume"].type()) {
        vector<UpdateContainerGroupRequestVolume> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Volume"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateContainerGroupRequestVolume model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volume = make_shared<vector<UpdateContainerGroupRequestVolume>>(expect1);
      }
    }
  }


  virtual ~UpdateContainerGroupRequest() = default;
};
class UpdateContainerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateContainerGroupResponseBody() {}

  explicit UpdateContainerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateContainerGroupResponseBody() = default;
};
class UpdateContainerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateContainerGroupResponseBody> body{};

  UpdateContainerGroupResponse() {}

  explicit UpdateContainerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateContainerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateContainerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateContainerGroupResponse() = default;
};
class UpdateDataCacheRequestDataSource : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> options{};
  shared_ptr<string> type{};

  UpdateDataCacheRequestDataSource() {}

  explicit UpdateDataCacheRequestDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Options"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      options = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateDataCacheRequestDataSource() = default;
};
class UpdateDataCacheRequestEipCreateParam : public Darabonba::Model {
public:
  shared_ptr<long> bandwidth{};
  shared_ptr<string> commonBandwidthPackage{};
  shared_ptr<string> ISP{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> publicIpAddressPoolId{};

  UpdateDataCacheRequestEipCreateParam() {}

  explicit UpdateDataCacheRequestEipCreateParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (commonBandwidthPackage) {
      res["CommonBandwidthPackage"] = boost::any(*commonBandwidthPackage);
    }
    if (ISP) {
      res["ISP"] = boost::any(*ISP);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (publicIpAddressPoolId) {
      res["PublicIpAddressPoolId"] = boost::any(*publicIpAddressPoolId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<long>(boost::any_cast<long>(m["Bandwidth"]));
    }
    if (m.find("CommonBandwidthPackage") != m.end() && !m["CommonBandwidthPackage"].empty()) {
      commonBandwidthPackage = make_shared<string>(boost::any_cast<string>(m["CommonBandwidthPackage"]));
    }
    if (m.find("ISP") != m.end() && !m["ISP"].empty()) {
      ISP = make_shared<string>(boost::any_cast<string>(m["ISP"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("PublicIpAddressPoolId") != m.end() && !m["PublicIpAddressPoolId"].empty()) {
      publicIpAddressPoolId = make_shared<string>(boost::any_cast<string>(m["PublicIpAddressPoolId"]));
    }
  }


  virtual ~UpdateDataCacheRequestEipCreateParam() = default;
};
class UpdateDataCacheRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateDataCacheRequestTag() {}

  explicit UpdateDataCacheRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDataCacheRequestTag() = default;
};
class UpdateDataCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dataCacheId{};
  shared_ptr<UpdateDataCacheRequestDataSource> dataSource{};
  shared_ptr<UpdateDataCacheRequestEipCreateParam> eipCreateParam{};
  shared_ptr<string> eipInstanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<long> size{};
  shared_ptr<vector<UpdateDataCacheRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};

  UpdateDataCacheRequest() {}

  explicit UpdateDataCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dataCacheId) {
      res["DataCacheId"] = boost::any(*dataCacheId);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eipCreateParam) {
      res["EipCreateParam"] = eipCreateParam ? boost::any(eipCreateParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eipInstanceId) {
      res["EipInstanceId"] = boost::any(*eipInstanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DataCacheId") != m.end() && !m["DataCacheId"].empty()) {
      dataCacheId = make_shared<string>(boost::any_cast<string>(m["DataCacheId"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        UpdateDataCacheRequestDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<UpdateDataCacheRequestDataSource>(model1);
      }
    }
    if (m.find("EipCreateParam") != m.end() && !m["EipCreateParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["EipCreateParam"].type()) {
        UpdateDataCacheRequestEipCreateParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EipCreateParam"]));
        eipCreateParam = make_shared<UpdateDataCacheRequestEipCreateParam>(model1);
      }
    }
    if (m.find("EipInstanceId") != m.end() && !m["EipInstanceId"].empty()) {
      eipInstanceId = make_shared<string>(boost::any_cast<string>(m["EipInstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<UpdateDataCacheRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDataCacheRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<UpdateDataCacheRequestTag>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~UpdateDataCacheRequest() = default;
};
class UpdateDataCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDataCacheResponseBody() {}

  explicit UpdateDataCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDataCacheResponseBody() = default;
};
class UpdateDataCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDataCacheResponseBody> body{};

  UpdateDataCacheResponse() {}

  explicit UpdateDataCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDataCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDataCacheResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDataCacheResponse() = default;
};
class UpdateImageCacheRequestAcrRegistryInfo : public Darabonba::Model {
public:
  shared_ptr<vector<string>> domain{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionId{};

  UpdateImageCacheRequestAcrRegistryInfo() {}

  explicit UpdateImageCacheRequestAcrRegistryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Domain"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Domain"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domain = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateImageCacheRequestAcrRegistryInfo() = default;
};
class UpdateImageCacheRequestImageRegistryCredential : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> server{};
  shared_ptr<string> userName{};

  UpdateImageCacheRequestImageRegistryCredential() {}

  explicit UpdateImageCacheRequestImageRegistryCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (server) {
      res["Server"] = boost::any(*server);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Server") != m.end() && !m["Server"].empty()) {
      server = make_shared<string>(boost::any_cast<string>(m["Server"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~UpdateImageCacheRequestImageRegistryCredential() = default;
};
class UpdateImageCacheRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateImageCacheRequestTag() {}

  explicit UpdateImageCacheRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateImageCacheRequestTag() = default;
};
class UpdateImageCacheRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateImageCacheRequestAcrRegistryInfo>> acrRegistryInfo{};
  shared_ptr<bool> autoMatchImageCache{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> eipInstanceId{};
  shared_ptr<string> eliminationStrategy{};
  shared_ptr<bool> flash{};
  shared_ptr<long> flashCopyCount{};
  shared_ptr<vector<string>> image{};
  shared_ptr<string> imageCacheId{};
  shared_ptr<string> imageCacheName{};
  shared_ptr<long> imageCacheSize{};
  shared_ptr<vector<UpdateImageCacheRequestImageRegistryCredential>> imageRegistryCredential{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> retentionDays{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<long> standardCopyCount{};
  shared_ptr<vector<UpdateImageCacheRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};

  UpdateImageCacheRequest() {}

  explicit UpdateImageCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acrRegistryInfo) {
      vector<boost::any> temp1;
      for(auto item1:*acrRegistryInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AcrRegistryInfo"] = boost::any(temp1);
    }
    if (autoMatchImageCache) {
      res["AutoMatchImageCache"] = boost::any(*autoMatchImageCache);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (eipInstanceId) {
      res["EipInstanceId"] = boost::any(*eipInstanceId);
    }
    if (eliminationStrategy) {
      res["EliminationStrategy"] = boost::any(*eliminationStrategy);
    }
    if (flash) {
      res["Flash"] = boost::any(*flash);
    }
    if (flashCopyCount) {
      res["FlashCopyCount"] = boost::any(*flashCopyCount);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imageCacheId) {
      res["ImageCacheId"] = boost::any(*imageCacheId);
    }
    if (imageCacheName) {
      res["ImageCacheName"] = boost::any(*imageCacheName);
    }
    if (imageCacheSize) {
      res["ImageCacheSize"] = boost::any(*imageCacheSize);
    }
    if (imageRegistryCredential) {
      vector<boost::any> temp1;
      for(auto item1:*imageRegistryCredential){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageRegistryCredential"] = boost::any(temp1);
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
    if (retentionDays) {
      res["RetentionDays"] = boost::any(*retentionDays);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (standardCopyCount) {
      res["StandardCopyCount"] = boost::any(*standardCopyCount);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcrRegistryInfo") != m.end() && !m["AcrRegistryInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AcrRegistryInfo"].type()) {
        vector<UpdateImageCacheRequestAcrRegistryInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AcrRegistryInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateImageCacheRequestAcrRegistryInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        acrRegistryInfo = make_shared<vector<UpdateImageCacheRequestAcrRegistryInfo>>(expect1);
      }
    }
    if (m.find("AutoMatchImageCache") != m.end() && !m["AutoMatchImageCache"].empty()) {
      autoMatchImageCache = make_shared<bool>(boost::any_cast<bool>(m["AutoMatchImageCache"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("EipInstanceId") != m.end() && !m["EipInstanceId"].empty()) {
      eipInstanceId = make_shared<string>(boost::any_cast<string>(m["EipInstanceId"]));
    }
    if (m.find("EliminationStrategy") != m.end() && !m["EliminationStrategy"].empty()) {
      eliminationStrategy = make_shared<string>(boost::any_cast<string>(m["EliminationStrategy"]));
    }
    if (m.find("Flash") != m.end() && !m["Flash"].empty()) {
      flash = make_shared<bool>(boost::any_cast<bool>(m["Flash"]));
    }
    if (m.find("FlashCopyCount") != m.end() && !m["FlashCopyCount"].empty()) {
      flashCopyCount = make_shared<long>(boost::any_cast<long>(m["FlashCopyCount"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Image"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Image"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      image = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageCacheId") != m.end() && !m["ImageCacheId"].empty()) {
      imageCacheId = make_shared<string>(boost::any_cast<string>(m["ImageCacheId"]));
    }
    if (m.find("ImageCacheName") != m.end() && !m["ImageCacheName"].empty()) {
      imageCacheName = make_shared<string>(boost::any_cast<string>(m["ImageCacheName"]));
    }
    if (m.find("ImageCacheSize") != m.end() && !m["ImageCacheSize"].empty()) {
      imageCacheSize = make_shared<long>(boost::any_cast<long>(m["ImageCacheSize"]));
    }
    if (m.find("ImageRegistryCredential") != m.end() && !m["ImageRegistryCredential"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageRegistryCredential"].type()) {
        vector<UpdateImageCacheRequestImageRegistryCredential> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageRegistryCredential"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateImageCacheRequestImageRegistryCredential model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageRegistryCredential = make_shared<vector<UpdateImageCacheRequestImageRegistryCredential>>(expect1);
      }
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
    if (m.find("RetentionDays") != m.end() && !m["RetentionDays"].empty()) {
      retentionDays = make_shared<long>(boost::any_cast<long>(m["RetentionDays"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("StandardCopyCount") != m.end() && !m["StandardCopyCount"].empty()) {
      standardCopyCount = make_shared<long>(boost::any_cast<long>(m["StandardCopyCount"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<UpdateImageCacheRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateImageCacheRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<UpdateImageCacheRequestTag>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~UpdateImageCacheRequest() = default;
};
class UpdateImageCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateImageCacheResponseBody() {}

  explicit UpdateImageCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateImageCacheResponseBody() = default;
};
class UpdateImageCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateImageCacheResponseBody> body{};

  UpdateImageCacheResponse() {}

  explicit UpdateImageCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateImageCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateImageCacheResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateImageCacheResponse() = default;
};
class UpdateVirtualNodeRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateVirtualNodeRequestTag() {}

  explicit UpdateVirtualNodeRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateVirtualNodeRequestTag() = default;
};
class UpdateVirtualNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterDNS{};
  shared_ptr<string> clusterDomain{};
  shared_ptr<string> customResources{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<UpdateVirtualNodeRequestTag>> tag{};
  shared_ptr<string> virtualNodeId{};
  shared_ptr<string> virtualNodeName{};

  UpdateVirtualNodeRequest() {}

  explicit UpdateVirtualNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterDNS) {
      res["ClusterDNS"] = boost::any(*clusterDNS);
    }
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (customResources) {
      res["CustomResources"] = boost::any(*customResources);
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
    if (virtualNodeId) {
      res["VirtualNodeId"] = boost::any(*virtualNodeId);
    }
    if (virtualNodeName) {
      res["VirtualNodeName"] = boost::any(*virtualNodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterDNS") != m.end() && !m["ClusterDNS"].empty()) {
      clusterDNS = make_shared<string>(boost::any_cast<string>(m["ClusterDNS"]));
    }
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("CustomResources") != m.end() && !m["CustomResources"].empty()) {
      customResources = make_shared<string>(boost::any_cast<string>(m["CustomResources"]));
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
        vector<UpdateVirtualNodeRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateVirtualNodeRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<UpdateVirtualNodeRequestTag>>(expect1);
      }
    }
    if (m.find("VirtualNodeId") != m.end() && !m["VirtualNodeId"].empty()) {
      virtualNodeId = make_shared<string>(boost::any_cast<string>(m["VirtualNodeId"]));
    }
    if (m.find("VirtualNodeName") != m.end() && !m["VirtualNodeName"].empty()) {
      virtualNodeName = make_shared<string>(boost::any_cast<string>(m["VirtualNodeName"]));
    }
  }


  virtual ~UpdateVirtualNodeRequest() = default;
};
class UpdateVirtualNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateVirtualNodeResponseBody() {}

  explicit UpdateVirtualNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateVirtualNodeResponseBody() = default;
};
class UpdateVirtualNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVirtualNodeResponseBody> body{};

  UpdateVirtualNodeResponse() {}

  explicit UpdateVirtualNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateVirtualNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVirtualNodeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVirtualNodeResponse() = default;
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
  CommitContainerResponse commitContainerWithOptions(shared_ptr<CommitContainerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CommitContainerResponse commitContainer(shared_ptr<CommitContainerRequest> request);
  CopyDataCacheResponse copyDataCacheWithOptions(shared_ptr<CopyDataCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CopyDataCacheResponse copyDataCache(shared_ptr<CopyDataCacheRequest> request);
  CreateContainerGroupResponse createContainerGroupWithOptions(shared_ptr<CreateContainerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateContainerGroupResponse createContainerGroup(shared_ptr<CreateContainerGroupRequest> request);
  CreateDataCacheResponse createDataCacheWithOptions(shared_ptr<CreateDataCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataCacheResponse createDataCache(shared_ptr<CreateDataCacheRequest> request);
  CreateImageCacheResponse createImageCacheWithOptions(shared_ptr<CreateImageCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageCacheResponse createImageCache(shared_ptr<CreateImageCacheRequest> request);
  CreateInstanceOpsTaskResponse createInstanceOpsTaskWithOptions(shared_ptr<CreateInstanceOpsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceOpsTaskResponse createInstanceOpsTask(shared_ptr<CreateInstanceOpsTaskRequest> request);
  CreateVirtualNodeResponse createVirtualNodeWithOptions(shared_ptr<CreateVirtualNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVirtualNodeResponse createVirtualNode(shared_ptr<CreateVirtualNodeRequest> request);
  DeleteContainerGroupResponse deleteContainerGroupWithOptions(shared_ptr<DeleteContainerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteContainerGroupResponse deleteContainerGroup(shared_ptr<DeleteContainerGroupRequest> request);
  DeleteDataCacheResponse deleteDataCacheWithOptions(shared_ptr<DeleteDataCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataCacheResponse deleteDataCache(shared_ptr<DeleteDataCacheRequest> request);
  DeleteImageCacheResponse deleteImageCacheWithOptions(shared_ptr<DeleteImageCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageCacheResponse deleteImageCache(shared_ptr<DeleteImageCacheRequest> request);
  DeleteVirtualNodeResponse deleteVirtualNodeWithOptions(shared_ptr<DeleteVirtualNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualNodeResponse deleteVirtualNode(shared_ptr<DeleteVirtualNodeRequest> request);
  DescribeAvailableResourceResponse describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableResourceResponse describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request);
  DescribeCommitContainerTaskResponse describeCommitContainerTaskWithOptions(shared_ptr<DescribeCommitContainerTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCommitContainerTaskResponse describeCommitContainerTask(shared_ptr<DescribeCommitContainerTaskRequest> request);
  DescribeContainerGroupEventsResponse describeContainerGroupEventsWithOptions(shared_ptr<DescribeContainerGroupEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeContainerGroupEventsResponse describeContainerGroupEvents(shared_ptr<DescribeContainerGroupEventsRequest> request);
  DescribeContainerGroupMetricResponse describeContainerGroupMetricWithOptions(shared_ptr<DescribeContainerGroupMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeContainerGroupMetricResponse describeContainerGroupMetric(shared_ptr<DescribeContainerGroupMetricRequest> request);
  DescribeContainerGroupPriceResponse describeContainerGroupPriceWithOptions(shared_ptr<DescribeContainerGroupPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeContainerGroupPriceResponse describeContainerGroupPrice(shared_ptr<DescribeContainerGroupPriceRequest> request);
  DescribeContainerGroupStatusResponse describeContainerGroupStatusWithOptions(shared_ptr<DescribeContainerGroupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeContainerGroupStatusResponse describeContainerGroupStatus(shared_ptr<DescribeContainerGroupStatusRequest> request);
  DescribeContainerGroupsResponse describeContainerGroupsWithOptions(shared_ptr<DescribeContainerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeContainerGroupsResponse describeContainerGroups(shared_ptr<DescribeContainerGroupsRequest> request);
  DescribeContainerLogResponse describeContainerLogWithOptions(shared_ptr<DescribeContainerLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeContainerLogResponse describeContainerLog(shared_ptr<DescribeContainerLogRequest> request);
  DescribeDataCachesResponse describeDataCachesWithOptions(shared_ptr<DescribeDataCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataCachesResponse describeDataCaches(shared_ptr<DescribeDataCachesRequest> request);
  DescribeImageCachesResponse describeImageCachesWithOptions(shared_ptr<DescribeImageCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageCachesResponse describeImageCaches(shared_ptr<DescribeImageCachesRequest> request);
  DescribeInstanceOpsRecordsResponse describeInstanceOpsRecordsWithOptions(shared_ptr<DescribeInstanceOpsRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceOpsRecordsResponse describeInstanceOpsRecords(shared_ptr<DescribeInstanceOpsRecordsRequest> request);
  DescribeMultiContainerGroupMetricResponse describeMultiContainerGroupMetricWithOptions(shared_ptr<DescribeMultiContainerGroupMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMultiContainerGroupMetricResponse describeMultiContainerGroupMetric(shared_ptr<DescribeMultiContainerGroupMetricRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeVirtualNodesResponse describeVirtualNodesWithOptions(shared_ptr<DescribeVirtualNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVirtualNodesResponse describeVirtualNodes(shared_ptr<DescribeVirtualNodesRequest> request);
  ExecContainerCommandResponse execContainerCommandWithOptions(shared_ptr<ExecContainerCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecContainerCommandResponse execContainerCommand(shared_ptr<ExecContainerCommandRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListUsageResponse listUsageWithOptions(shared_ptr<ListUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsageResponse listUsage(shared_ptr<ListUsageRequest> request);
  ResizeContainerGroupVolumeResponse resizeContainerGroupVolumeWithOptions(shared_ptr<ResizeContainerGroupVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResizeContainerGroupVolumeResponse resizeContainerGroupVolume(shared_ptr<ResizeContainerGroupVolumeRequest> request);
  RestartContainerGroupResponse restartContainerGroupWithOptions(shared_ptr<RestartContainerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartContainerGroupResponse restartContainerGroup(shared_ptr<RestartContainerGroupRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateContainerGroupResponse updateContainerGroupWithOptions(shared_ptr<UpdateContainerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateContainerGroupResponse updateContainerGroup(shared_ptr<UpdateContainerGroupRequest> request);
  UpdateDataCacheResponse updateDataCacheWithOptions(shared_ptr<UpdateDataCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDataCacheResponse updateDataCache(shared_ptr<UpdateDataCacheRequest> request);
  UpdateImageCacheResponse updateImageCacheWithOptions(shared_ptr<UpdateImageCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateImageCacheResponse updateImageCache(shared_ptr<UpdateImageCacheRequest> request);
  UpdateVirtualNodeResponse updateVirtualNodeWithOptions(shared_ptr<UpdateVirtualNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVirtualNodeResponse updateVirtualNode(shared_ptr<UpdateVirtualNodeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eci20180808

#endif
