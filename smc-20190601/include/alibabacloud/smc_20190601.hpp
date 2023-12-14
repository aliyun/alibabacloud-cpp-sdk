// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SMC20190601_H_
#define ALIBABACLOUD_SMC20190601_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Smc20190601 {
class CreateAccessTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> timeToLiveInDays{};

  CreateAccessTokenRequest() {}

  explicit CreateAccessTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (timeToLiveInDays) {
      res["TimeToLiveInDays"] = boost::any(*timeToLiveInDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("TimeToLiveInDays") != m.end() && !m["TimeToLiveInDays"].empty()) {
      timeToLiveInDays = make_shared<string>(boost::any_cast<string>(m["TimeToLiveInDays"]));
    }
  }


  virtual ~CreateAccessTokenRequest() = default;
};
class CreateAccessTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessTokenCode{};
  shared_ptr<string> accessTokenId{};
  shared_ptr<string> requestId{};

  CreateAccessTokenResponseBody() {}

  explicit CreateAccessTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenCode) {
      res["AccessTokenCode"] = boost::any(*accessTokenCode);
    }
    if (accessTokenId) {
      res["AccessTokenId"] = boost::any(*accessTokenId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenCode") != m.end() && !m["AccessTokenCode"].empty()) {
      accessTokenCode = make_shared<string>(boost::any_cast<string>(m["AccessTokenCode"]));
    }
    if (m.find("AccessTokenId") != m.end() && !m["AccessTokenId"].empty()) {
      accessTokenId = make_shared<string>(boost::any_cast<string>(m["AccessTokenId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccessTokenResponseBody() = default;
};
class CreateAccessTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessTokenResponseBody> body{};

  CreateAccessTokenResponse() {}

  explicit CreateAccessTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessTokenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessTokenResponse() = default;
};
class CreateReplicationJobRequestDataDiskPart : public Darabonba::Model {
public:
  shared_ptr<bool> block{};
  shared_ptr<string> device{};
  shared_ptr<long> sizeBytes{};

  CreateReplicationJobRequestDataDiskPart() {}

  explicit CreateReplicationJobRequestDataDiskPart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (block) {
      res["Block"] = boost::any(*block);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (sizeBytes) {
      res["SizeBytes"] = boost::any(*sizeBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Block") != m.end() && !m["Block"].empty()) {
      block = make_shared<bool>(boost::any_cast<bool>(m["Block"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("SizeBytes") != m.end() && !m["SizeBytes"].empty()) {
      sizeBytes = make_shared<long>(boost::any_cast<long>(m["SizeBytes"]));
    }
  }


  virtual ~CreateReplicationJobRequestDataDiskPart() = default;
};
class CreateReplicationJobRequestDataDisk : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<vector<CreateReplicationJobRequestDataDiskPart>> part{};
  shared_ptr<long> size{};

  CreateReplicationJobRequestDataDisk() {}

  explicit CreateReplicationJobRequestDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (part) {
      vector<boost::any> temp1;
      for(auto item1:*part){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Part"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      if (typeid(vector<boost::any>) == m["Part"].type()) {
        vector<CreateReplicationJobRequestDataDiskPart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Part"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateReplicationJobRequestDataDiskPart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        part = make_shared<vector<CreateReplicationJobRequestDataDiskPart>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~CreateReplicationJobRequestDataDisk() = default;
};
class CreateReplicationJobRequestSystemDiskPart : public Darabonba::Model {
public:
  shared_ptr<bool> block{};
  shared_ptr<string> device{};
  shared_ptr<long> sizeBytes{};

  CreateReplicationJobRequestSystemDiskPart() {}

  explicit CreateReplicationJobRequestSystemDiskPart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (block) {
      res["Block"] = boost::any(*block);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (sizeBytes) {
      res["SizeBytes"] = boost::any(*sizeBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Block") != m.end() && !m["Block"].empty()) {
      block = make_shared<bool>(boost::any_cast<bool>(m["Block"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("SizeBytes") != m.end() && !m["SizeBytes"].empty()) {
      sizeBytes = make_shared<long>(boost::any_cast<long>(m["SizeBytes"]));
    }
  }


  virtual ~CreateReplicationJobRequestSystemDiskPart() = default;
};
class CreateReplicationJobRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateReplicationJobRequestTag() {}

  explicit CreateReplicationJobRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateReplicationJobRequestTag() = default;
};
class CreateReplicationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> containerNamespace{};
  shared_ptr<string> containerRepository{};
  shared_ptr<string> containerTag{};
  shared_ptr<vector<CreateReplicationJobRequestDataDisk>> dataDisk{};
  shared_ptr<string> description{};
  shared_ptr<long> frequency{};
  shared_ptr<string> imageName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceRamRole{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> jobType{};
  shared_ptr<string> launchTemplateId{};
  shared_ptr<string> launchTemplateVersion{};
  shared_ptr<string> licenseType{};
  shared_ptr<long> maxNumberOfImageToKeep{};
  shared_ptr<string> name{};
  shared_ptr<long> netMode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicationParameters{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<bool> runOnce{};
  shared_ptr<string> scheduledStartTime{};
  shared_ptr<string> sourceId{};
  shared_ptr<vector<CreateReplicationJobRequestSystemDiskPart>> systemDiskPart{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<vector<CreateReplicationJobRequestTag>> tag{};
  shared_ptr<string> targetType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> validTime{};
  shared_ptr<string> vpcId{};

  CreateReplicationJobRequest() {}

  explicit CreateReplicationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (containerNamespace) {
      res["ContainerNamespace"] = boost::any(*containerNamespace);
    }
    if (containerRepository) {
      res["ContainerRepository"] = boost::any(*containerRepository);
    }
    if (containerTag) {
      res["ContainerTag"] = boost::any(*containerTag);
    }
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceRamRole) {
      res["InstanceRamRole"] = boost::any(*instanceRamRole);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (launchTemplateId) {
      res["LaunchTemplateId"] = boost::any(*launchTemplateId);
    }
    if (launchTemplateVersion) {
      res["LaunchTemplateVersion"] = boost::any(*launchTemplateVersion);
    }
    if (licenseType) {
      res["LicenseType"] = boost::any(*licenseType);
    }
    if (maxNumberOfImageToKeep) {
      res["MaxNumberOfImageToKeep"] = boost::any(*maxNumberOfImageToKeep);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (netMode) {
      res["NetMode"] = boost::any(*netMode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicationParameters) {
      res["ReplicationParameters"] = boost::any(*replicationParameters);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (runOnce) {
      res["RunOnce"] = boost::any(*runOnce);
    }
    if (scheduledStartTime) {
      res["ScheduledStartTime"] = boost::any(*scheduledStartTime);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (systemDiskPart) {
      vector<boost::any> temp1;
      for(auto item1:*systemDiskPart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemDiskPart"] = boost::any(temp1);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (validTime) {
      res["ValidTime"] = boost::any(*validTime);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ContainerNamespace") != m.end() && !m["ContainerNamespace"].empty()) {
      containerNamespace = make_shared<string>(boost::any_cast<string>(m["ContainerNamespace"]));
    }
    if (m.find("ContainerRepository") != m.end() && !m["ContainerRepository"].empty()) {
      containerRepository = make_shared<string>(boost::any_cast<string>(m["ContainerRepository"]));
    }
    if (m.find("ContainerTag") != m.end() && !m["ContainerTag"].empty()) {
      containerTag = make_shared<string>(boost::any_cast<string>(m["ContainerTag"]));
    }
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<CreateReplicationJobRequestDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateReplicationJobRequestDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<CreateReplicationJobRequestDataDisk>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<long>(boost::any_cast<long>(m["Frequency"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceRamRole") != m.end() && !m["InstanceRamRole"].empty()) {
      instanceRamRole = make_shared<string>(boost::any_cast<string>(m["InstanceRamRole"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<long>(boost::any_cast<long>(m["JobType"]));
    }
    if (m.find("LaunchTemplateId") != m.end() && !m["LaunchTemplateId"].empty()) {
      launchTemplateId = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateId"]));
    }
    if (m.find("LaunchTemplateVersion") != m.end() && !m["LaunchTemplateVersion"].empty()) {
      launchTemplateVersion = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateVersion"]));
    }
    if (m.find("LicenseType") != m.end() && !m["LicenseType"].empty()) {
      licenseType = make_shared<string>(boost::any_cast<string>(m["LicenseType"]));
    }
    if (m.find("MaxNumberOfImageToKeep") != m.end() && !m["MaxNumberOfImageToKeep"].empty()) {
      maxNumberOfImageToKeep = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfImageToKeep"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetMode") != m.end() && !m["NetMode"].empty()) {
      netMode = make_shared<long>(boost::any_cast<long>(m["NetMode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicationParameters") != m.end() && !m["ReplicationParameters"].empty()) {
      replicationParameters = make_shared<string>(boost::any_cast<string>(m["ReplicationParameters"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RunOnce") != m.end() && !m["RunOnce"].empty()) {
      runOnce = make_shared<bool>(boost::any_cast<bool>(m["RunOnce"]));
    }
    if (m.find("ScheduledStartTime") != m.end() && !m["ScheduledStartTime"].empty()) {
      scheduledStartTime = make_shared<string>(boost::any_cast<string>(m["ScheduledStartTime"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SystemDiskPart") != m.end() && !m["SystemDiskPart"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemDiskPart"].type()) {
        vector<CreateReplicationJobRequestSystemDiskPart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemDiskPart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateReplicationJobRequestSystemDiskPart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemDiskPart = make_shared<vector<CreateReplicationJobRequestSystemDiskPart>>(expect1);
      }
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateReplicationJobRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateReplicationJobRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateReplicationJobRequestTag>>(expect1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ValidTime") != m.end() && !m["ValidTime"].empty()) {
      validTime = make_shared<string>(boost::any_cast<string>(m["ValidTime"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateReplicationJobRequest() = default;
};
class CreateReplicationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  CreateReplicationJobResponseBody() {}

  explicit CreateReplicationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateReplicationJobResponseBody() = default;
};
class CreateReplicationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateReplicationJobResponseBody> body{};

  CreateReplicationJobResponse() {}

  explicit CreateReplicationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateReplicationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateReplicationJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateReplicationJobResponse() = default;
};
class CutOverReplicationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<bool> syncData{};

  CutOverReplicationJobRequest() {}

  explicit CutOverReplicationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (syncData) {
      res["SyncData"] = boost::any(*syncData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("SyncData") != m.end() && !m["SyncData"].empty()) {
      syncData = make_shared<bool>(boost::any_cast<bool>(m["SyncData"]));
    }
  }


  virtual ~CutOverReplicationJobRequest() = default;
};
class CutOverReplicationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CutOverReplicationJobResponseBody() {}

  explicit CutOverReplicationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CutOverReplicationJobResponseBody() = default;
};
class CutOverReplicationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CutOverReplicationJobResponseBody> body{};

  CutOverReplicationJobResponse() {}

  explicit CutOverReplicationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CutOverReplicationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CutOverReplicationJobResponseBody>(model1);
      }
    }
  }


  virtual ~CutOverReplicationJobResponse() = default;
};
class DeleteAccessTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessTokenId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};

  DeleteAccessTokenRequest() {}

  explicit DeleteAccessTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenId) {
      res["AccessTokenId"] = boost::any(*accessTokenId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenId") != m.end() && !m["AccessTokenId"].empty()) {
      accessTokenId = make_shared<string>(boost::any_cast<string>(m["AccessTokenId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~DeleteAccessTokenRequest() = default;
};
class DeleteAccessTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccessTokenResponseBody() {}

  explicit DeleteAccessTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccessTokenResponseBody() = default;
};
class DeleteAccessTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessTokenResponseBody> body{};

  DeleteAccessTokenResponse() {}

  explicit DeleteAccessTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessTokenResponse() = default;
};
class DeleteReplicationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};

  DeleteReplicationJobRequest() {}

  explicit DeleteReplicationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~DeleteReplicationJobRequest() = default;
};
class DeleteReplicationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteReplicationJobResponseBody() {}

  explicit DeleteReplicationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteReplicationJobResponseBody() = default;
};
class DeleteReplicationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteReplicationJobResponseBody> body{};

  DeleteReplicationJobResponse() {}

  explicit DeleteReplicationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteReplicationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteReplicationJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteReplicationJobResponse() = default;
};
class DeleteSourceServerRequest : public Darabonba::Model {
public:
  shared_ptr<bool> force{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> sourceId{};

  DeleteSourceServerRequest() {}

  explicit DeleteSourceServerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
  }


  virtual ~DeleteSourceServerRequest() = default;
};
class DeleteSourceServerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSourceServerResponseBody() {}

  explicit DeleteSourceServerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSourceServerResponseBody() = default;
};
class DeleteSourceServerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSourceServerResponseBody> body{};

  DeleteSourceServerResponse() {}

  explicit DeleteSourceServerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSourceServerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSourceServerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSourceServerResponse() = default;
};
class DescribeReplicationJobsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeReplicationJobsRequestTag() {}

  explicit DescribeReplicationJobsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeReplicationJobsRequestTag() = default;
};
class DescribeReplicationJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessStatus{};
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<vector<string>> jobId{};
  shared_ptr<long> jobType{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<vector<string>> sourceId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeReplicationJobsRequestTag>> tag{};

  DescribeReplicationJobsRequest() {}

  explicit DescribeReplicationJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
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
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["JobId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<long>(boost::any_cast<long>(m["JobType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeReplicationJobsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicationJobsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeReplicationJobsRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeReplicationJobsRequest() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart : public Darabonba::Model {
public:
  shared_ptr<bool> block{};
  shared_ptr<string> device{};
  shared_ptr<long> sizeBytes{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (block) {
      res["Block"] = boost::any(*block);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (sizeBytes) {
      res["SizeBytes"] = boost::any(*sizeBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Block") != m.end() && !m["Block"].empty()) {
      block = make_shared<bool>(boost::any_cast<bool>(m["Block"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("SizeBytes") != m.end() && !m["SizeBytes"].empty()) {
      sizeBytes = make_shared<long>(boost::any_cast<long>(m["SizeBytes"]));
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart>> part{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (part) {
      vector<boost::any> temp1;
      for(auto item1:*part){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Part"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      if (typeid(vector<boost::any>) == m["Part"].type()) {
        vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Part"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        part = make_shared<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskPartsPart>>(expect1);
      }
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts> parts{};
  shared_ptr<long> size{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (parts) {
      res["Parts"] = parts ? boost::any(parts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Parts") != m.end() && !m["Parts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parts"].type()) {
        DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parts"]));
        parts = make_shared<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts>(model1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk>> dataDisk{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk>>(expect1);
      }
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> type{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun>> replicationJobRun{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (replicationJobRun) {
      vector<boost::any> temp1;
      for(auto item1:*replicationJobRun){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReplicationJobRun"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReplicationJobRun") != m.end() && !m["ReplicationJobRun"].empty()) {
      if (typeid(vector<boost::any>) == m["ReplicationJobRun"].type()) {
        vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReplicationJobRun"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        replicationJobRun = make_shared<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRunsReplicationJobRun>>(expect1);
      }
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart : public Darabonba::Model {
public:
  shared_ptr<bool> block{};
  shared_ptr<string> device{};
  shared_ptr<long> sizeBytes{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (block) {
      res["Block"] = boost::any(*block);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (sizeBytes) {
      res["SizeBytes"] = boost::any(*sizeBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Block") != m.end() && !m["Block"].empty()) {
      block = make_shared<bool>(boost::any_cast<bool>(m["Block"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("SizeBytes") != m.end() && !m["SizeBytes"].empty()) {
      sizeBytes = make_shared<long>(boost::any_cast<long>(m["SizeBytes"]));
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart>> systemDiskPart{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemDiskPart) {
      vector<boost::any> temp1;
      for(auto item1:*systemDiskPart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemDiskPart"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemDiskPart") != m.end() && !m["SystemDiskPart"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemDiskPart"].type()) {
        vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemDiskPart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemDiskPart = make_shared<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskPartsSystemDiskPart>>(expect1);
      }
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag>> tag{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob : public Darabonba::Model {
public:
  shared_ptr<string> businessStatus{};
  shared_ptr<string> containerNamespace{};
  shared_ptr<string> containerRepository{};
  shared_ptr<string> containerTag{};
  shared_ptr<string> creationTime{};
  shared_ptr<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks> dataDisks{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> frequency{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceRamRole{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> jobId{};
  shared_ptr<long> jobType{};
  shared_ptr<string> launchTemplateId{};
  shared_ptr<string> launchTemplateVersion{};
  shared_ptr<string> licenseType{};
  shared_ptr<long> maxNumberOfImageToKeep{};
  shared_ptr<string> name{};
  shared_ptr<long> netMode{};
  shared_ptr<double> progress{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns> replicationJobRuns{};
  shared_ptr<string> replicationParameters{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> runOnce{};
  shared_ptr<string> scheduledStartTime{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> statusInfo{};
  shared_ptr<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts> systemDiskParts{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags> tags{};
  shared_ptr<string> targetType{};
  shared_ptr<string> transitionInstanceId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> validTime{};
  shared_ptr<string> vpcId{};

  DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessStatus) {
      res["BusinessStatus"] = boost::any(*businessStatus);
    }
    if (containerNamespace) {
      res["ContainerNamespace"] = boost::any(*containerNamespace);
    }
    if (containerRepository) {
      res["ContainerRepository"] = boost::any(*containerRepository);
    }
    if (containerTag) {
      res["ContainerTag"] = boost::any(*containerTag);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (dataDisks) {
      res["DataDisks"] = dataDisks ? boost::any(dataDisks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceRamRole) {
      res["InstanceRamRole"] = boost::any(*instanceRamRole);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (launchTemplateId) {
      res["LaunchTemplateId"] = boost::any(*launchTemplateId);
    }
    if (launchTemplateVersion) {
      res["LaunchTemplateVersion"] = boost::any(*launchTemplateVersion);
    }
    if (licenseType) {
      res["LicenseType"] = boost::any(*licenseType);
    }
    if (maxNumberOfImageToKeep) {
      res["MaxNumberOfImageToKeep"] = boost::any(*maxNumberOfImageToKeep);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (netMode) {
      res["NetMode"] = boost::any(*netMode);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicationJobRuns) {
      res["ReplicationJobRuns"] = replicationJobRuns ? boost::any(replicationJobRuns->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (replicationParameters) {
      res["ReplicationParameters"] = boost::any(*replicationParameters);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (runOnce) {
      res["RunOnce"] = boost::any(*runOnce);
    }
    if (scheduledStartTime) {
      res["ScheduledStartTime"] = boost::any(*scheduledStartTime);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusInfo) {
      res["StatusInfo"] = boost::any(*statusInfo);
    }
    if (systemDiskParts) {
      res["SystemDiskParts"] = systemDiskParts ? boost::any(systemDiskParts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (transitionInstanceId) {
      res["TransitionInstanceId"] = boost::any(*transitionInstanceId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (validTime) {
      res["ValidTime"] = boost::any(*validTime);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessStatus") != m.end() && !m["BusinessStatus"].empty()) {
      businessStatus = make_shared<string>(boost::any_cast<string>(m["BusinessStatus"]));
    }
    if (m.find("ContainerNamespace") != m.end() && !m["ContainerNamespace"].empty()) {
      containerNamespace = make_shared<string>(boost::any_cast<string>(m["ContainerNamespace"]));
    }
    if (m.find("ContainerRepository") != m.end() && !m["ContainerRepository"].empty()) {
      containerRepository = make_shared<string>(boost::any_cast<string>(m["ContainerRepository"]));
    }
    if (m.find("ContainerTag") != m.end() && !m["ContainerTag"].empty()) {
      containerTag = make_shared<string>(boost::any_cast<string>(m["ContainerTag"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataDisks"].type()) {
        DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataDisks"]));
        dataDisks = make_shared<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisks>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<long>(boost::any_cast<long>(m["Frequency"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceRamRole") != m.end() && !m["InstanceRamRole"].empty()) {
      instanceRamRole = make_shared<string>(boost::any_cast<string>(m["InstanceRamRole"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<long>(boost::any_cast<long>(m["JobType"]));
    }
    if (m.find("LaunchTemplateId") != m.end() && !m["LaunchTemplateId"].empty()) {
      launchTemplateId = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateId"]));
    }
    if (m.find("LaunchTemplateVersion") != m.end() && !m["LaunchTemplateVersion"].empty()) {
      launchTemplateVersion = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateVersion"]));
    }
    if (m.find("LicenseType") != m.end() && !m["LicenseType"].empty()) {
      licenseType = make_shared<string>(boost::any_cast<string>(m["LicenseType"]));
    }
    if (m.find("MaxNumberOfImageToKeep") != m.end() && !m["MaxNumberOfImageToKeep"].empty()) {
      maxNumberOfImageToKeep = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfImageToKeep"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetMode") != m.end() && !m["NetMode"].empty()) {
      netMode = make_shared<long>(boost::any_cast<long>(m["NetMode"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["Progress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicationJobRuns") != m.end() && !m["ReplicationJobRuns"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReplicationJobRuns"].type()) {
        DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReplicationJobRuns"]));
        replicationJobRuns = make_shared<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobReplicationJobRuns>(model1);
      }
    }
    if (m.find("ReplicationParameters") != m.end() && !m["ReplicationParameters"].empty()) {
      replicationParameters = make_shared<string>(boost::any_cast<string>(m["ReplicationParameters"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RunOnce") != m.end() && !m["RunOnce"].empty()) {
      runOnce = make_shared<bool>(boost::any_cast<bool>(m["RunOnce"]));
    }
    if (m.find("ScheduledStartTime") != m.end() && !m["ScheduledStartTime"].empty()) {
      scheduledStartTime = make_shared<string>(boost::any_cast<string>(m["ScheduledStartTime"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusInfo") != m.end() && !m["StatusInfo"].empty()) {
      statusInfo = make_shared<string>(boost::any_cast<string>(m["StatusInfo"]));
    }
    if (m.find("SystemDiskParts") != m.end() && !m["SystemDiskParts"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDiskParts"].type()) {
        DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDiskParts"]));
        systemDiskParts = make_shared<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobSystemDiskParts>(model1);
      }
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobTags>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TransitionInstanceId") != m.end() && !m["TransitionInstanceId"].empty()) {
      transitionInstanceId = make_shared<string>(boost::any_cast<string>(m["TransitionInstanceId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ValidTime") != m.end() && !m["ValidTime"].empty()) {
      validTime = make_shared<string>(boost::any_cast<string>(m["ValidTime"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob() = default;
};
class DescribeReplicationJobsResponseBodyReplicationJobs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob>> replicationJob{};

  DescribeReplicationJobsResponseBodyReplicationJobs() {}

  explicit DescribeReplicationJobsResponseBodyReplicationJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (replicationJob) {
      vector<boost::any> temp1;
      for(auto item1:*replicationJob){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReplicationJob"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReplicationJob") != m.end() && !m["ReplicationJob"].empty()) {
      if (typeid(vector<boost::any>) == m["ReplicationJob"].type()) {
        vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReplicationJob"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        replicationJob = make_shared<vector<DescribeReplicationJobsResponseBodyReplicationJobsReplicationJob>>(expect1);
      }
    }
  }


  virtual ~DescribeReplicationJobsResponseBodyReplicationJobs() = default;
};
class DescribeReplicationJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribeReplicationJobsResponseBodyReplicationJobs> replicationJobs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeReplicationJobsResponseBody() {}

  explicit DescribeReplicationJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (replicationJobs) {
      res["ReplicationJobs"] = replicationJobs ? boost::any(replicationJobs->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ReplicationJobs") != m.end() && !m["ReplicationJobs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReplicationJobs"].type()) {
        DescribeReplicationJobsResponseBodyReplicationJobs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReplicationJobs"]));
        replicationJobs = make_shared<DescribeReplicationJobsResponseBodyReplicationJobs>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeReplicationJobsResponseBody() = default;
};
class DescribeReplicationJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeReplicationJobsResponseBody> body{};

  DescribeReplicationJobsResponse() {}

  explicit DescribeReplicationJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeReplicationJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeReplicationJobsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeReplicationJobsResponse() = default;
};
class DescribeSourceServersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeSourceServersRequestTag() {}

  explicit DescribeSourceServersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeSourceServersRequestTag() = default;
};
class DescribeSourceServersRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<vector<string>> sourceId{};
  shared_ptr<string> state{};
  shared_ptr<vector<DescribeSourceServersRequestTag>> tag{};

  DescribeSourceServersRequest() {}

  explicit DescribeSourceServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (state) {
      res["State"] = boost::any(*state);
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
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeSourceServersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSourceServersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeSourceServersRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeSourceServersRequest() = default;
};
class DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart : public Darabonba::Model {
public:
  shared_ptr<bool> canBlock{};
  shared_ptr<string> device{};
  shared_ptr<bool> need{};
  shared_ptr<string> path{};
  shared_ptr<long> sizeBytes{};

  DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart() {}

  explicit DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canBlock) {
      res["CanBlock"] = boost::any(*canBlock);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (need) {
      res["Need"] = boost::any(*need);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (sizeBytes) {
      res["SizeBytes"] = boost::any(*sizeBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanBlock") != m.end() && !m["CanBlock"].empty()) {
      canBlock = make_shared<bool>(boost::any_cast<bool>(m["CanBlock"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("Need") != m.end() && !m["Need"].empty()) {
      need = make_shared<bool>(boost::any_cast<bool>(m["Need"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("SizeBytes") != m.end() && !m["SizeBytes"].empty()) {
      sizeBytes = make_shared<long>(boost::any_cast<long>(m["SizeBytes"]));
    }
  }


  virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart() = default;
};
class DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart>> part{};

  DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts() {}

  explicit DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (part) {
      vector<boost::any> temp1;
      for(auto item1:*part){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Part"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      if (typeid(vector<boost::any>) == m["Part"].type()) {
        vector<DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Part"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        part = make_shared<vector<DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskPartsPart>>(expect1);
      }
    }
  }


  virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts() = default;
};
class DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts> parts{};
  shared_ptr<string> path{};
  shared_ptr<long> size{};

  DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk() {}

  explicit DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (parts) {
      res["Parts"] = parts ? boost::any(parts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Parts") != m.end() && !m["Parts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parts"].type()) {
        DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parts"]));
        parts = make_shared<DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts>(model1);
      }
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk() = default;
};
class DescribeSourceServersResponseBodySourceServersSourceServerDataDisks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk>> dataDisk{};

  DescribeSourceServersResponseBodySourceServersSourceServerDataDisks() {}

  explicit DescribeSourceServersResponseBodySourceServersSourceServerDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk>>(expect1);
      }
    }
  }


  virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDataDisks() = default;
};
class DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart : public Darabonba::Model {
public:
  shared_ptr<bool> canBlock{};
  shared_ptr<string> device{};
  shared_ptr<bool> need{};
  shared_ptr<string> path{};
  shared_ptr<long> sizeBytes{};

  DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart() {}

  explicit DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canBlock) {
      res["CanBlock"] = boost::any(*canBlock);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (need) {
      res["Need"] = boost::any(*need);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (sizeBytes) {
      res["SizeBytes"] = boost::any(*sizeBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanBlock") != m.end() && !m["CanBlock"].empty()) {
      canBlock = make_shared<bool>(boost::any_cast<bool>(m["CanBlock"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("Need") != m.end() && !m["Need"].empty()) {
      need = make_shared<bool>(boost::any_cast<bool>(m["Need"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("SizeBytes") != m.end() && !m["SizeBytes"].empty()) {
      sizeBytes = make_shared<long>(boost::any_cast<long>(m["SizeBytes"]));
    }
  }


  virtual ~DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart() = default;
};
class DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart>> systemDiskPart{};

  DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts() {}

  explicit DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemDiskPart) {
      vector<boost::any> temp1;
      for(auto item1:*systemDiskPart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemDiskPart"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemDiskPart") != m.end() && !m["SystemDiskPart"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemDiskPart"].type()) {
        vector<DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemDiskPart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemDiskPart = make_shared<vector<DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart>>(expect1);
      }
    }
  }


  virtual ~DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts() = default;
};
class DescribeSourceServersResponseBodySourceServersSourceServerTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeSourceServersResponseBodySourceServersSourceServerTagsTag() {}

  explicit DescribeSourceServersResponseBodySourceServersSourceServerTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeSourceServersResponseBodySourceServersSourceServerTagsTag() = default;
};
class DescribeSourceServersResponseBodySourceServersSourceServerTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSourceServersResponseBodySourceServersSourceServerTagsTag>> tag{};

  DescribeSourceServersResponseBodySourceServersSourceServerTags() {}

  explicit DescribeSourceServersResponseBodySourceServersSourceServerTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeSourceServersResponseBodySourceServersSourceServerTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSourceServersResponseBodySourceServersSourceServerTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeSourceServersResponseBodySourceServersSourceServerTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeSourceServersResponseBodySourceServersSourceServerTags() = default;
};
class DescribeSourceServersResponseBodySourceServersSourceServer : public Darabonba::Model {
public:
  shared_ptr<string> agentVersion{};
  shared_ptr<string> architecture{};
  shared_ptr<string> creationTime{};
  shared_ptr<DescribeSourceServersResponseBodySourceServersSourceServerDataDisks> dataDisks{};
  shared_ptr<string> description{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> heartbeatRate{};
  shared_ptr<string> jobId{};
  shared_ptr<long> kernelLevel{};
  shared_ptr<string> name{};
  shared_ptr<string> platform{};
  shared_ptr<string> replicationDriver{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> state{};
  shared_ptr<string> statusInfo{};
  shared_ptr<DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts> systemDiskParts{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> systemInfo{};
  shared_ptr<DescribeSourceServersResponseBodySourceServersSourceServerTags> tags{};

  DescribeSourceServersResponseBodySourceServersSourceServer() {}

  explicit DescribeSourceServersResponseBodySourceServersSourceServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentVersion) {
      res["AgentVersion"] = boost::any(*agentVersion);
    }
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (dataDisks) {
      res["DataDisks"] = dataDisks ? boost::any(dataDisks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (heartbeatRate) {
      res["HeartbeatRate"] = boost::any(*heartbeatRate);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (kernelLevel) {
      res["KernelLevel"] = boost::any(*kernelLevel);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (replicationDriver) {
      res["ReplicationDriver"] = boost::any(*replicationDriver);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (statusInfo) {
      res["StatusInfo"] = boost::any(*statusInfo);
    }
    if (systemDiskParts) {
      res["SystemDiskParts"] = systemDiskParts ? boost::any(systemDiskParts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (systemInfo) {
      res["SystemInfo"] = boost::any(*systemInfo);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentVersion") != m.end() && !m["AgentVersion"].empty()) {
      agentVersion = make_shared<string>(boost::any_cast<string>(m["AgentVersion"]));
    }
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataDisks"].type()) {
        DescribeSourceServersResponseBodySourceServersSourceServerDataDisks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataDisks"]));
        dataDisks = make_shared<DescribeSourceServersResponseBodySourceServersSourceServerDataDisks>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("HeartbeatRate") != m.end() && !m["HeartbeatRate"].empty()) {
      heartbeatRate = make_shared<long>(boost::any_cast<long>(m["HeartbeatRate"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("KernelLevel") != m.end() && !m["KernelLevel"].empty()) {
      kernelLevel = make_shared<long>(boost::any_cast<long>(m["KernelLevel"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("ReplicationDriver") != m.end() && !m["ReplicationDriver"].empty()) {
      replicationDriver = make_shared<string>(boost::any_cast<string>(m["ReplicationDriver"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StatusInfo") != m.end() && !m["StatusInfo"].empty()) {
      statusInfo = make_shared<string>(boost::any_cast<string>(m["StatusInfo"]));
    }
    if (m.find("SystemDiskParts") != m.end() && !m["SystemDiskParts"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDiskParts"].type()) {
        DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDiskParts"]));
        systemDiskParts = make_shared<DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskParts>(model1);
      }
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("SystemInfo") != m.end() && !m["SystemInfo"].empty()) {
      systemInfo = make_shared<string>(boost::any_cast<string>(m["SystemInfo"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeSourceServersResponseBodySourceServersSourceServerTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeSourceServersResponseBodySourceServersSourceServerTags>(model1);
      }
    }
  }


  virtual ~DescribeSourceServersResponseBodySourceServersSourceServer() = default;
};
class DescribeSourceServersResponseBodySourceServers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSourceServersResponseBodySourceServersSourceServer>> sourceServer{};

  DescribeSourceServersResponseBodySourceServers() {}

  explicit DescribeSourceServersResponseBodySourceServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceServer) {
      vector<boost::any> temp1;
      for(auto item1:*sourceServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceServer"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceServer") != m.end() && !m["SourceServer"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceServer"].type()) {
        vector<DescribeSourceServersResponseBodySourceServersSourceServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSourceServersResponseBodySourceServersSourceServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceServer = make_shared<vector<DescribeSourceServersResponseBodySourceServersSourceServer>>(expect1);
      }
    }
  }


  virtual ~DescribeSourceServersResponseBodySourceServers() = default;
};
class DescribeSourceServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSourceServersResponseBodySourceServers> sourceServers{};
  shared_ptr<long> totalCount{};

  DescribeSourceServersResponseBody() {}

  explicit DescribeSourceServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sourceServers) {
      res["SourceServers"] = sourceServers ? boost::any(sourceServers->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SourceServers") != m.end() && !m["SourceServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceServers"].type()) {
        DescribeSourceServersResponseBodySourceServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceServers"]));
        sourceServers = make_shared<DescribeSourceServersResponseBodySourceServers>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSourceServersResponseBody() = default;
};
class DescribeSourceServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSourceServersResponseBody> body{};

  DescribeSourceServersResponse() {}

  explicit DescribeSourceServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSourceServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSourceServersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSourceServersResponse() = default;
};
class DisableAccessTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessTokenId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};

  DisableAccessTokenRequest() {}

  explicit DisableAccessTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenId) {
      res["AccessTokenId"] = boost::any(*accessTokenId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenId") != m.end() && !m["AccessTokenId"].empty()) {
      accessTokenId = make_shared<string>(boost::any_cast<string>(m["AccessTokenId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~DisableAccessTokenRequest() = default;
};
class DisableAccessTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableAccessTokenResponseBody() {}

  explicit DisableAccessTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableAccessTokenResponseBody() = default;
};
class DisableAccessTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableAccessTokenResponseBody> body{};

  DisableAccessTokenResponse() {}

  explicit DisableAccessTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableAccessTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAccessTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAccessTokenResponse() = default;
};
class ListAccessTokensRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accessTokenId{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> status{};

  ListAccessTokensRequest() {}

  explicit ListAccessTokensRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenId) {
      res["AccessTokenId"] = boost::any(*accessTokenId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenId") != m.end() && !m["AccessTokenId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccessTokenId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccessTokenId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accessTokenId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAccessTokensRequest() = default;
};
class ListAccessTokensResponseBodyAccessTokensAccessToken : public Darabonba::Model {
public:
  shared_ptr<string> accessTokenId{};
  shared_ptr<string> count{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> registeredCount{};
  shared_ptr<string> status{};
  shared_ptr<string> timeToLiveInDays{};

  ListAccessTokensResponseBodyAccessTokensAccessToken() {}

  explicit ListAccessTokensResponseBodyAccessTokensAccessToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenId) {
      res["AccessTokenId"] = boost::any(*accessTokenId);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (registeredCount) {
      res["RegisteredCount"] = boost::any(*registeredCount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeToLiveInDays) {
      res["TimeToLiveInDays"] = boost::any(*timeToLiveInDays);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTokenId") != m.end() && !m["AccessTokenId"].empty()) {
      accessTokenId = make_shared<string>(boost::any_cast<string>(m["AccessTokenId"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegisteredCount") != m.end() && !m["RegisteredCount"].empty()) {
      registeredCount = make_shared<string>(boost::any_cast<string>(m["RegisteredCount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TimeToLiveInDays") != m.end() && !m["TimeToLiveInDays"].empty()) {
      timeToLiveInDays = make_shared<string>(boost::any_cast<string>(m["TimeToLiveInDays"]));
    }
  }


  virtual ~ListAccessTokensResponseBodyAccessTokensAccessToken() = default;
};
class ListAccessTokensResponseBodyAccessTokens : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccessTokensResponseBodyAccessTokensAccessToken>> accessToken{};

  ListAccessTokensResponseBodyAccessTokens() {}

  explicit ListAccessTokensResponseBodyAccessTokens(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      vector<boost::any> temp1;
      for(auto item1:*accessToken){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessToken"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessToken"].type()) {
        vector<ListAccessTokensResponseBodyAccessTokensAccessToken> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessToken"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessTokensResponseBodyAccessTokensAccessToken model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessToken = make_shared<vector<ListAccessTokensResponseBodyAccessTokensAccessToken>>(expect1);
      }
    }
  }


  virtual ~ListAccessTokensResponseBodyAccessTokens() = default;
};
class ListAccessTokensResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAccessTokensResponseBodyAccessTokens> accessTokens{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAccessTokensResponseBody() {}

  explicit ListAccessTokensResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokens) {
      res["AccessTokens"] = accessTokens ? boost::any(accessTokens->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessTokens") != m.end() && !m["AccessTokens"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessTokens"].type()) {
        ListAccessTokensResponseBodyAccessTokens model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessTokens"]));
        accessTokens = make_shared<ListAccessTokensResponseBodyAccessTokens>(model1);
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


  virtual ~ListAccessTokensResponseBody() = default;
};
class ListAccessTokensResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessTokensResponseBody> body{};

  ListAccessTokensResponse() {}

  explicit ListAccessTokensResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessTokensResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessTokensResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessTokensResponse() = default;
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
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
class ModifyReplicationJobAttributeRequestDataDiskPart : public Darabonba::Model {
public:
  shared_ptr<bool> block{};
  shared_ptr<string> device{};
  shared_ptr<long> sizeBytes{};

  ModifyReplicationJobAttributeRequestDataDiskPart() {}

  explicit ModifyReplicationJobAttributeRequestDataDiskPart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (block) {
      res["Block"] = boost::any(*block);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (sizeBytes) {
      res["SizeBytes"] = boost::any(*sizeBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Block") != m.end() && !m["Block"].empty()) {
      block = make_shared<bool>(boost::any_cast<bool>(m["Block"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("SizeBytes") != m.end() && !m["SizeBytes"].empty()) {
      sizeBytes = make_shared<long>(boost::any_cast<long>(m["SizeBytes"]));
    }
  }


  virtual ~ModifyReplicationJobAttributeRequestDataDiskPart() = default;
};
class ModifyReplicationJobAttributeRequestDataDisk : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<vector<ModifyReplicationJobAttributeRequestDataDiskPart>> part{};
  shared_ptr<long> size{};

  ModifyReplicationJobAttributeRequestDataDisk() {}

  explicit ModifyReplicationJobAttributeRequestDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (part) {
      vector<boost::any> temp1;
      for(auto item1:*part){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Part"] = boost::any(temp1);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Part") != m.end() && !m["Part"].empty()) {
      if (typeid(vector<boost::any>) == m["Part"].type()) {
        vector<ModifyReplicationJobAttributeRequestDataDiskPart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Part"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyReplicationJobAttributeRequestDataDiskPart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        part = make_shared<vector<ModifyReplicationJobAttributeRequestDataDiskPart>>(expect1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ModifyReplicationJobAttributeRequestDataDisk() = default;
};
class ModifyReplicationJobAttributeRequestSystemDiskPart : public Darabonba::Model {
public:
  shared_ptr<bool> block{};
  shared_ptr<string> device{};
  shared_ptr<long> sizeBytes{};

  ModifyReplicationJobAttributeRequestSystemDiskPart() {}

  explicit ModifyReplicationJobAttributeRequestSystemDiskPart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (block) {
      res["Block"] = boost::any(*block);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (sizeBytes) {
      res["SizeBytes"] = boost::any(*sizeBytes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Block") != m.end() && !m["Block"].empty()) {
      block = make_shared<bool>(boost::any_cast<bool>(m["Block"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("SizeBytes") != m.end() && !m["SizeBytes"].empty()) {
      sizeBytes = make_shared<long>(boost::any_cast<long>(m["SizeBytes"]));
    }
  }


  virtual ~ModifyReplicationJobAttributeRequestSystemDiskPart() = default;
};
class ModifyReplicationJobAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerNamespace{};
  shared_ptr<string> containerRepository{};
  shared_ptr<string> containerTag{};
  shared_ptr<vector<ModifyReplicationJobAttributeRequestDataDisk>> dataDisk{};
  shared_ptr<string> description{};
  shared_ptr<long> frequency{};
  shared_ptr<string> imageName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceRamRole{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> jobId{};
  shared_ptr<string> launchTemplateId{};
  shared_ptr<string> launchTemplateVersion{};
  shared_ptr<long> maxNumberOfImageToKeep{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scheduledStartTime{};
  shared_ptr<vector<ModifyReplicationJobAttributeRequestSystemDiskPart>> systemDiskPart{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> targetType{};
  shared_ptr<string> validTime{};

  ModifyReplicationJobAttributeRequest() {}

  explicit ModifyReplicationJobAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerNamespace) {
      res["ContainerNamespace"] = boost::any(*containerNamespace);
    }
    if (containerRepository) {
      res["ContainerRepository"] = boost::any(*containerRepository);
    }
    if (containerTag) {
      res["ContainerTag"] = boost::any(*containerTag);
    }
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceRamRole) {
      res["InstanceRamRole"] = boost::any(*instanceRamRole);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (launchTemplateId) {
      res["LaunchTemplateId"] = boost::any(*launchTemplateId);
    }
    if (launchTemplateVersion) {
      res["LaunchTemplateVersion"] = boost::any(*launchTemplateVersion);
    }
    if (maxNumberOfImageToKeep) {
      res["MaxNumberOfImageToKeep"] = boost::any(*maxNumberOfImageToKeep);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scheduledStartTime) {
      res["ScheduledStartTime"] = boost::any(*scheduledStartTime);
    }
    if (systemDiskPart) {
      vector<boost::any> temp1;
      for(auto item1:*systemDiskPart){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemDiskPart"] = boost::any(temp1);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (validTime) {
      res["ValidTime"] = boost::any(*validTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerNamespace") != m.end() && !m["ContainerNamespace"].empty()) {
      containerNamespace = make_shared<string>(boost::any_cast<string>(m["ContainerNamespace"]));
    }
    if (m.find("ContainerRepository") != m.end() && !m["ContainerRepository"].empty()) {
      containerRepository = make_shared<string>(boost::any_cast<string>(m["ContainerRepository"]));
    }
    if (m.find("ContainerTag") != m.end() && !m["ContainerTag"].empty()) {
      containerTag = make_shared<string>(boost::any_cast<string>(m["ContainerTag"]));
    }
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<ModifyReplicationJobAttributeRequestDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyReplicationJobAttributeRequestDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<ModifyReplicationJobAttributeRequestDataDisk>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<long>(boost::any_cast<long>(m["Frequency"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceRamRole") != m.end() && !m["InstanceRamRole"].empty()) {
      instanceRamRole = make_shared<string>(boost::any_cast<string>(m["InstanceRamRole"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("LaunchTemplateId") != m.end() && !m["LaunchTemplateId"].empty()) {
      launchTemplateId = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateId"]));
    }
    if (m.find("LaunchTemplateVersion") != m.end() && !m["LaunchTemplateVersion"].empty()) {
      launchTemplateVersion = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateVersion"]));
    }
    if (m.find("MaxNumberOfImageToKeep") != m.end() && !m["MaxNumberOfImageToKeep"].empty()) {
      maxNumberOfImageToKeep = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfImageToKeep"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScheduledStartTime") != m.end() && !m["ScheduledStartTime"].empty()) {
      scheduledStartTime = make_shared<string>(boost::any_cast<string>(m["ScheduledStartTime"]));
    }
    if (m.find("SystemDiskPart") != m.end() && !m["SystemDiskPart"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemDiskPart"].type()) {
        vector<ModifyReplicationJobAttributeRequestSystemDiskPart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemDiskPart"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyReplicationJobAttributeRequestSystemDiskPart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemDiskPart = make_shared<vector<ModifyReplicationJobAttributeRequestSystemDiskPart>>(expect1);
      }
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("ValidTime") != m.end() && !m["ValidTime"].empty()) {
      validTime = make_shared<string>(boost::any_cast<string>(m["ValidTime"]));
    }
  }


  virtual ~ModifyReplicationJobAttributeRequest() = default;
};
class ModifyReplicationJobAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyReplicationJobAttributeResponseBody() {}

  explicit ModifyReplicationJobAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyReplicationJobAttributeResponseBody() = default;
};
class ModifyReplicationJobAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyReplicationJobAttributeResponseBody> body{};

  ModifyReplicationJobAttributeResponse() {}

  explicit ModifyReplicationJobAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyReplicationJobAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyReplicationJobAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyReplicationJobAttributeResponse() = default;
};
class ModifySourceServerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> sourceId{};

  ModifySourceServerAttributeRequest() {}

  explicit ModifySourceServerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
  }


  virtual ~ModifySourceServerAttributeRequest() = default;
};
class ModifySourceServerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySourceServerAttributeResponseBody() {}

  explicit ModifySourceServerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySourceServerAttributeResponseBody() = default;
};
class ModifySourceServerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySourceServerAttributeResponseBody> body{};

  ModifySourceServerAttributeResponse() {}

  explicit ModifySourceServerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySourceServerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySourceServerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySourceServerAttributeResponse() = default;
};
class StartReplicationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};

  StartReplicationJobRequest() {}

  explicit StartReplicationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~StartReplicationJobRequest() = default;
};
class StartReplicationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartReplicationJobResponseBody() {}

  explicit StartReplicationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartReplicationJobResponseBody() = default;
};
class StartReplicationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartReplicationJobResponseBody> body{};

  StartReplicationJobResponse() {}

  explicit StartReplicationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartReplicationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartReplicationJobResponseBody>(model1);
      }
    }
  }


  virtual ~StartReplicationJobResponse() = default;
};
class StopReplicationJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};

  StopReplicationJobRequest() {}

  explicit StopReplicationJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~StopReplicationJobRequest() = default;
};
class StopReplicationJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopReplicationJobResponseBody() {}

  explicit StopReplicationJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopReplicationJobResponseBody() = default;
};
class StopReplicationJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopReplicationJobResponseBody> body{};

  StopReplicationJobResponse() {}

  explicit StopReplicationJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopReplicationJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopReplicationJobResponseBody>(model1);
      }
    }
  }


  virtual ~StopReplicationJobResponse() = default;
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
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
  CreateAccessTokenResponse createAccessTokenWithOptions(shared_ptr<CreateAccessTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessTokenResponse createAccessToken(shared_ptr<CreateAccessTokenRequest> request);
  CreateReplicationJobResponse createReplicationJobWithOptions(shared_ptr<CreateReplicationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateReplicationJobResponse createReplicationJob(shared_ptr<CreateReplicationJobRequest> request);
  CutOverReplicationJobResponse cutOverReplicationJobWithOptions(shared_ptr<CutOverReplicationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CutOverReplicationJobResponse cutOverReplicationJob(shared_ptr<CutOverReplicationJobRequest> request);
  DeleteAccessTokenResponse deleteAccessTokenWithOptions(shared_ptr<DeleteAccessTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessTokenResponse deleteAccessToken(shared_ptr<DeleteAccessTokenRequest> request);
  DeleteReplicationJobResponse deleteReplicationJobWithOptions(shared_ptr<DeleteReplicationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteReplicationJobResponse deleteReplicationJob(shared_ptr<DeleteReplicationJobRequest> request);
  DeleteSourceServerResponse deleteSourceServerWithOptions(shared_ptr<DeleteSourceServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSourceServerResponse deleteSourceServer(shared_ptr<DeleteSourceServerRequest> request);
  DescribeReplicationJobsResponse describeReplicationJobsWithOptions(shared_ptr<DescribeReplicationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeReplicationJobsResponse describeReplicationJobs(shared_ptr<DescribeReplicationJobsRequest> request);
  DescribeSourceServersResponse describeSourceServersWithOptions(shared_ptr<DescribeSourceServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSourceServersResponse describeSourceServers(shared_ptr<DescribeSourceServersRequest> request);
  DisableAccessTokenResponse disableAccessTokenWithOptions(shared_ptr<DisableAccessTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAccessTokenResponse disableAccessToken(shared_ptr<DisableAccessTokenRequest> request);
  ListAccessTokensResponse listAccessTokensWithOptions(shared_ptr<ListAccessTokensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessTokensResponse listAccessTokens(shared_ptr<ListAccessTokensRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyReplicationJobAttributeResponse modifyReplicationJobAttributeWithOptions(shared_ptr<ModifyReplicationJobAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyReplicationJobAttributeResponse modifyReplicationJobAttribute(shared_ptr<ModifyReplicationJobAttributeRequest> request);
  ModifySourceServerAttributeResponse modifySourceServerAttributeWithOptions(shared_ptr<ModifySourceServerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySourceServerAttributeResponse modifySourceServerAttribute(shared_ptr<ModifySourceServerAttributeRequest> request);
  StartReplicationJobResponse startReplicationJobWithOptions(shared_ptr<StartReplicationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartReplicationJobResponse startReplicationJob(shared_ptr<StartReplicationJobRequest> request);
  StopReplicationJobResponse stopReplicationJobWithOptions(shared_ptr<StopReplicationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopReplicationJobResponse stopReplicationJob(shared_ptr<StopReplicationJobRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Smc20190601

#endif
