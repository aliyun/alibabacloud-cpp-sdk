// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EHPC20170714_H_
#define ALIBABACLOUD_EHPC20170714_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EHPC20170714 {
class AddNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> computeSpotPriceLimit{};
  shared_ptr<string> computeSpotStrategy{};
  shared_ptr<long> count{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};

  AddNodesRequest() {}

  explicit AddNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (computeSpotPriceLimit) {
      res["ComputeSpotPriceLimit"] = boost::any(*computeSpotPriceLimit);
    }
    if (computeSpotStrategy) {
      res["ComputeSpotStrategy"] = boost::any(*computeSpotStrategy);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ComputeSpotPriceLimit") != m.end() && !m["ComputeSpotPriceLimit"].empty()) {
      computeSpotPriceLimit = make_shared<string>(boost::any_cast<string>(m["ComputeSpotPriceLimit"]));
    }
    if (m.find("ComputeSpotStrategy") != m.end() && !m["ComputeSpotStrategy"].empty()) {
      computeSpotStrategy = make_shared<string>(boost::any_cast<string>(m["ComputeSpotStrategy"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
  }


  virtual ~AddNodesRequest() = default;
};
class AddNodesResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};

  AddNodesResponseBodyInstanceIds() {}

  explicit AddNodesResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~AddNodesResponseBodyInstanceIds() = default;
};
class AddNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddNodesResponseBodyInstanceIds> instanceIds{};
  shared_ptr<string> requestId{};

  AddNodesResponseBody() {}

  explicit AddNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        AddNodesResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<AddNodesResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddNodesResponseBody() = default;
};
class AddNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddNodesResponseBody> body{};

  AddNodesResponse() {}

  explicit AddNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddNodesResponseBody>(model1);
      }
    }
  }


  virtual ~AddNodesResponse() = default;
};
class AddUsersRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> group{};
  shared_ptr<string> name{};
  shared_ptr<string> password{};

  AddUsersRequestUser() {}

  explicit AddUsersRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
  }


  virtual ~AddUsersRequestUser() = default;
};
class AddUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> releaseInstance{};
  shared_ptr<vector<AddUsersRequestUser>> user{};

  AddUsersRequest() {}

  explicit AddUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (releaseInstance) {
      res["ReleaseInstance"] = boost::any(*releaseInstance);
    }
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ReleaseInstance") != m.end() && !m["ReleaseInstance"].empty()) {
      releaseInstance = make_shared<bool>(boost::any_cast<bool>(m["ReleaseInstance"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<AddUsersRequestUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddUsersRequestUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<AddUsersRequestUser>>(expect1);
      }
    }
  }


  virtual ~AddUsersRequest() = default;
};
class AddUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUsersResponseBody() {}

  explicit AddUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUsersResponseBody() = default;
};
class AddUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUsersResponseBody> body{};

  AddUsersResponse() {}

  explicit AddUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUsersResponseBody>(model1);
      }
    }
  }


  virtual ~AddUsersResponse() = default;
};
class CreateClusterRequestEcsOrderCompute : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  CreateClusterRequestEcsOrderCompute() {}

  explicit CreateClusterRequestEcsOrderCompute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateClusterRequestEcsOrderCompute() = default;
};
class CreateClusterRequestEcsOrderLogin : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  CreateClusterRequestEcsOrderLogin() {}

  explicit CreateClusterRequestEcsOrderLogin(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateClusterRequestEcsOrderLogin() = default;
};
class CreateClusterRequestEcsOrderManager : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  CreateClusterRequestEcsOrderManager() {}

  explicit CreateClusterRequestEcsOrderManager(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateClusterRequestEcsOrderManager() = default;
};
class CreateClusterRequestEcsOrder : public Darabonba::Model {
public:
  shared_ptr<CreateClusterRequestEcsOrderCompute> compute{};
  shared_ptr<CreateClusterRequestEcsOrderLogin> login{};
  shared_ptr<CreateClusterRequestEcsOrderManager> manager{};

  CreateClusterRequestEcsOrder() {}

  explicit CreateClusterRequestEcsOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!compute) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("compute is required.")));
    }
    if (!login) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("login is required.")));
    }
    if (!manager) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("manager is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compute) {
      res["Compute"] = compute ? boost::any(compute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (login) {
      res["Login"] = login ? boost::any(login->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (manager) {
      res["Manager"] = manager ? boost::any(manager->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compute") != m.end() && !m["Compute"].empty()) {
      if (typeid(map<string, boost::any>) == m["Compute"].type()) {
        CreateClusterRequestEcsOrderCompute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Compute"]));
        compute = make_shared<CreateClusterRequestEcsOrderCompute>(model1);
      }
    }
    if (m.find("Login") != m.end() && !m["Login"].empty()) {
      if (typeid(map<string, boost::any>) == m["Login"].type()) {
        CreateClusterRequestEcsOrderLogin model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Login"]));
        login = make_shared<CreateClusterRequestEcsOrderLogin>(model1);
      }
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      if (typeid(map<string, boost::any>) == m["Manager"].type()) {
        CreateClusterRequestEcsOrderManager model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Manager"]));
        manager = make_shared<CreateClusterRequestEcsOrderManager>(model1);
      }
    }
  }


  virtual ~CreateClusterRequestEcsOrder() = default;
};
class CreateClusterRequestApplication : public Darabonba::Model {
public:
  shared_ptr<string> tag{};

  CreateClusterRequestApplication() {}

  explicit CreateClusterRequestApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~CreateClusterRequestApplication() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<CreateClusterRequestEcsOrder> ecsOrder{};
  shared_ptr<string> accountType{};
  shared_ptr<vector<CreateClusterRequestApplication>> application{};
  shared_ptr<string> computeSpotPriceLimit{};
  shared_ptr<string> computeSpotStrategy{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsChargeType{};
  shared_ptr<string> ehpcVersion{};
  shared_ptr<bool> haEnable{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> name{};
  shared_ptr<string> osTag{};
  shared_ptr<string> password{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<string> sccClusterId{};
  shared_ptr<string> schedulerType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityGroupName{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsOrder) {
      res["EcsOrder"] = ecsOrder ? boost::any(ecsOrder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (application) {
      vector<boost::any> temp1;
      for(auto item1:*application){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Application"] = boost::any(temp1);
    }
    if (computeSpotPriceLimit) {
      res["ComputeSpotPriceLimit"] = boost::any(*computeSpotPriceLimit);
    }
    if (computeSpotStrategy) {
      res["ComputeSpotStrategy"] = boost::any(*computeSpotStrategy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecsChargeType) {
      res["EcsChargeType"] = boost::any(*ecsChargeType);
    }
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    if (haEnable) {
      res["HaEnable"] = boost::any(*haEnable);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (sccClusterId) {
      res["SccClusterId"] = boost::any(*sccClusterId);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (securityGroupName) {
      res["SecurityGroupName"] = boost::any(*securityGroupName);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
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
    if (m.find("EcsOrder") != m.end() && !m["EcsOrder"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsOrder"].type()) {
        CreateClusterRequestEcsOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsOrder"]));
        ecsOrder = make_shared<CreateClusterRequestEcsOrder>(model1);
      }
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(vector<boost::any>) == m["Application"].type()) {
        vector<CreateClusterRequestApplication> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Application"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestApplication model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        application = make_shared<vector<CreateClusterRequestApplication>>(expect1);
      }
    }
    if (m.find("ComputeSpotPriceLimit") != m.end() && !m["ComputeSpotPriceLimit"].empty()) {
      computeSpotPriceLimit = make_shared<string>(boost::any_cast<string>(m["ComputeSpotPriceLimit"]));
    }
    if (m.find("ComputeSpotStrategy") != m.end() && !m["ComputeSpotStrategy"].empty()) {
      computeSpotStrategy = make_shared<string>(boost::any_cast<string>(m["ComputeSpotStrategy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcsChargeType") != m.end() && !m["EcsChargeType"].empty()) {
      ecsChargeType = make_shared<string>(boost::any_cast<string>(m["EcsChargeType"]));
    }
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
    if (m.find("HaEnable") != m.end() && !m["HaEnable"].empty()) {
      haEnable = make_shared<bool>(boost::any_cast<bool>(m["HaEnable"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("SccClusterId") != m.end() && !m["SccClusterId"].empty()) {
      sccClusterId = make_shared<string>(boost::any_cast<string>(m["SccClusterId"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SecurityGroupName") != m.end() && !m["SecurityGroupName"].empty()) {
      securityGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityGroupName"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class CreateJobTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> commandLine{};
  shared_ptr<string> name{};
  shared_ptr<string> packagePath{};
  shared_ptr<long> priority{};
  shared_ptr<bool> reRunable{};
  shared_ptr<string> regionId{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> stderrRedirectPath{};
  shared_ptr<string> stdoutRedirectPath{};
  shared_ptr<string> variables{};

  CreateJobTemplateRequest() {}

  explicit CreateJobTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packagePath) {
      res["PackagePath"] = boost::any(*packagePath);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reRunable) {
      res["ReRunable"] = boost::any(*reRunable);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (stderrRedirectPath) {
      res["StderrRedirectPath"] = boost::any(*stderrRedirectPath);
    }
    if (stdoutRedirectPath) {
      res["StdoutRedirectPath"] = boost::any(*stdoutRedirectPath);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackagePath") != m.end() && !m["PackagePath"].empty()) {
      packagePath = make_shared<string>(boost::any_cast<string>(m["PackagePath"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReRunable") != m.end() && !m["ReRunable"].empty()) {
      reRunable = make_shared<bool>(boost::any_cast<bool>(m["ReRunable"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("StderrRedirectPath") != m.end() && !m["StderrRedirectPath"].empty()) {
      stderrRedirectPath = make_shared<string>(boost::any_cast<string>(m["StderrRedirectPath"]));
    }
    if (m.find("StdoutRedirectPath") != m.end() && !m["StdoutRedirectPath"].empty()) {
      stdoutRedirectPath = make_shared<string>(boost::any_cast<string>(m["StdoutRedirectPath"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
  }


  virtual ~CreateJobTemplateRequest() = default;
};
class CreateJobTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  CreateJobTemplateResponseBody() {}

  explicit CreateJobTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateJobTemplateResponseBody() = default;
};
class CreateJobTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateJobTemplateResponseBody> body{};

  CreateJobTemplateResponse() {}

  explicit CreateJobTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateJobTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateJobTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateJobTemplateResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> releaseInstance{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (releaseInstance) {
      res["ReleaseInstance"] = boost::any(*releaseInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ReleaseInstance") != m.end() && !m["ReleaseInstance"].empty()) {
      releaseInstance = make_shared<string>(boost::any_cast<string>(m["ReleaseInstance"]));
    }
  }


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteClusterResponseBody() {}

  explicit DeleteClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClusterResponseBody() = default;
};
class DeleteClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClusterResponseBody> body{};

  DeleteClusterResponse() {}

  explicit DeleteClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClusterResponse() = default;
};
class DeleteJobTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> templates{};

  DeleteJobTemplatesRequest() {}

  explicit DeleteJobTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templates) {
      res["Templates"] = boost::any(*templates);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      templates = make_shared<string>(boost::any_cast<string>(m["Templates"]));
    }
  }


  virtual ~DeleteJobTemplatesRequest() = default;
};
class DeleteJobTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteJobTemplatesResponseBody() {}

  explicit DeleteJobTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteJobTemplatesResponseBody() = default;
};
class DeleteJobTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteJobTemplatesResponseBody> body{};

  DeleteJobTemplatesResponse() {}

  explicit DeleteJobTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteJobTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteJobTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteJobTemplatesResponse() = default;
};
class DeleteJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobs{};

  DeleteJobsRequest() {}

  explicit DeleteJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobs) {
      res["Jobs"] = boost::any(*jobs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      jobs = make_shared<string>(boost::any_cast<string>(m["Jobs"]));
    }
  }


  virtual ~DeleteJobsRequest() = default;
};
class DeleteJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteJobsResponseBody() {}

  explicit DeleteJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteJobsResponseBody() = default;
};
class DeleteJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteJobsResponseBody> body{};

  DeleteJobsResponse() {}

  explicit DeleteJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteJobsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteJobsResponse() = default;
};
class DeleteNodesRequestInstance : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteNodesRequestInstance() {}

  explicit DeleteNodesRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DeleteNodesRequestInstance() = default;
};
class DeleteNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<DeleteNodesRequestInstance>> instance{};
  shared_ptr<bool> releaseInstance{};

  DeleteNodesRequest() {}

  explicit DeleteNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    if (releaseInstance) {
      res["ReleaseInstance"] = boost::any(*releaseInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<DeleteNodesRequestInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteNodesRequestInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<DeleteNodesRequestInstance>>(expect1);
      }
    }
    if (m.find("ReleaseInstance") != m.end() && !m["ReleaseInstance"].empty()) {
      releaseInstance = make_shared<bool>(boost::any_cast<bool>(m["ReleaseInstance"]));
    }
  }


  virtual ~DeleteNodesRequest() = default;
};
class DeleteNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNodesResponseBody() {}

  explicit DeleteNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNodesResponseBody() = default;
};
class DeleteNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNodesResponseBody> body{};

  DeleteNodesResponse() {}

  explicit DeleteNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNodesResponse() = default;
};
class DeleteUsersRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DeleteUsersRequestUser() {}

  explicit DeleteUsersRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUsersRequestUser() = default;
};
class DeleteUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<DeleteUsersRequestUser>> user{};

  DeleteUsersRequest() {}

  explicit DeleteUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<DeleteUsersRequestUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteUsersRequestUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<DeleteUsersRequestUser>>(expect1);
      }
    }
  }


  virtual ~DeleteUsersRequest() = default;
};
class DeleteUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUsersResponseBody() {}

  explicit DeleteUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUsersResponseBody() = default;
};
class DeleteUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUsersResponseBody> body{};

  DeleteUsersResponse() {}

  explicit DeleteUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUsersResponse() = default;
};
class DescribeClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeClusterRequest() {}

  explicit DescribeClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeClusterRequest() = default;
};
class DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> tag{};
  shared_ptr<string> version{};

  DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo() {}

  explicit DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo() = default;
};
class DescribeClusterResponseBodyClusterInfoApplications : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo>> applicationInfo{};

  DescribeClusterResponseBodyClusterInfoApplications() {}

  explicit DescribeClusterResponseBodyClusterInfoApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationInfo) {
      vector<boost::any> temp1;
      for(auto item1:*applicationInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationInfo") != m.end() && !m["ApplicationInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationInfo"].type()) {
        vector<DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationInfo = make_shared<vector<DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoApplications() = default;
};
class DescribeClusterResponseBodyClusterInfoEcsInfoCompute : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  DescribeClusterResponseBodyClusterInfoEcsInfoCompute() {}

  explicit DescribeClusterResponseBodyClusterInfoEcsInfoCompute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoEcsInfoCompute() = default;
};
class DescribeClusterResponseBodyClusterInfoEcsInfoLogin : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  DescribeClusterResponseBodyClusterInfoEcsInfoLogin() {}

  explicit DescribeClusterResponseBodyClusterInfoEcsInfoLogin(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoEcsInfoLogin() = default;
};
class DescribeClusterResponseBodyClusterInfoEcsInfoManager : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  DescribeClusterResponseBodyClusterInfoEcsInfoManager() {}

  explicit DescribeClusterResponseBodyClusterInfoEcsInfoManager(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoEcsInfoManager() = default;
};
class DescribeClusterResponseBodyClusterInfoEcsInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterResponseBodyClusterInfoEcsInfoCompute> compute{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoEcsInfoLogin> login{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoEcsInfoManager> manager{};

  DescribeClusterResponseBodyClusterInfoEcsInfo() {}

  explicit DescribeClusterResponseBodyClusterInfoEcsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compute) {
      res["Compute"] = compute ? boost::any(compute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (login) {
      res["Login"] = login ? boost::any(login->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (manager) {
      res["Manager"] = manager ? boost::any(manager->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compute") != m.end() && !m["Compute"].empty()) {
      if (typeid(map<string, boost::any>) == m["Compute"].type()) {
        DescribeClusterResponseBodyClusterInfoEcsInfoCompute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Compute"]));
        compute = make_shared<DescribeClusterResponseBodyClusterInfoEcsInfoCompute>(model1);
      }
    }
    if (m.find("Login") != m.end() && !m["Login"].empty()) {
      if (typeid(map<string, boost::any>) == m["Login"].type()) {
        DescribeClusterResponseBodyClusterInfoEcsInfoLogin model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Login"]));
        login = make_shared<DescribeClusterResponseBodyClusterInfoEcsInfoLogin>(model1);
      }
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      if (typeid(map<string, boost::any>) == m["Manager"].type()) {
        DescribeClusterResponseBodyClusterInfoEcsInfoManager model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Manager"]));
        manager = make_shared<DescribeClusterResponseBodyClusterInfoEcsInfoManager>(model1);
      }
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoEcsInfo() = default;
};
class DescribeClusterResponseBodyClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoApplications> applications{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsChargeType{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoEcsInfo> ecsInfo{};
  shared_ptr<bool> haEnable{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> name{};
  shared_ptr<string> osTag{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<string> sccClusterId{};
  shared_ptr<string> schedulerType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};

  DescribeClusterResponseBodyClusterInfo() {}

  explicit DescribeClusterResponseBodyClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (applications) {
      res["Applications"] = applications ? boost::any(applications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecsChargeType) {
      res["EcsChargeType"] = boost::any(*ecsChargeType);
    }
    if (ecsInfo) {
      res["EcsInfo"] = ecsInfo ? boost::any(ecsInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (haEnable) {
      res["HaEnable"] = boost::any(*haEnable);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (sccClusterId) {
      res["SccClusterId"] = boost::any(*sccClusterId);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applications"].type()) {
        DescribeClusterResponseBodyClusterInfoApplications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applications"]));
        applications = make_shared<DescribeClusterResponseBodyClusterInfoApplications>(model1);
      }
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcsChargeType") != m.end() && !m["EcsChargeType"].empty()) {
      ecsChargeType = make_shared<string>(boost::any_cast<string>(m["EcsChargeType"]));
    }
    if (m.find("EcsInfo") != m.end() && !m["EcsInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsInfo"].type()) {
        DescribeClusterResponseBodyClusterInfoEcsInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsInfo"]));
        ecsInfo = make_shared<DescribeClusterResponseBodyClusterInfoEcsInfo>(model1);
      }
    }
    if (m.find("HaEnable") != m.end() && !m["HaEnable"].empty()) {
      haEnable = make_shared<bool>(boost::any_cast<bool>(m["HaEnable"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("SccClusterId") != m.end() && !m["SccClusterId"].empty()) {
      sccClusterId = make_shared<string>(boost::any_cast<string>(m["SccClusterId"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfo() = default;
};
class DescribeClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterResponseBodyClusterInfo> clusterInfo{};
  shared_ptr<string> requestId{};

  DescribeClusterResponseBody() {}

  explicit DescribeClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterInfo) {
      res["ClusterInfo"] = clusterInfo ? boost::any(clusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterInfo"].type()) {
        DescribeClusterResponseBodyClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterInfo"]));
        clusterInfo = make_shared<DescribeClusterResponseBodyClusterInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterResponseBody() = default;
};
class DescribeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClusterResponseBody> body{};

  DescribeClusterResponse() {}

  explicit DescribeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterResponse() = default;
};
class EditJobTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> commandLine{};
  shared_ptr<string> name{};
  shared_ptr<string> packagePath{};
  shared_ptr<long> priority{};
  shared_ptr<bool> reRunable{};
  shared_ptr<string> regionId{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> stderrRedirectPath{};
  shared_ptr<string> stdoutRedirectPath{};
  shared_ptr<string> templateId{};
  shared_ptr<string> variables{};

  EditJobTemplateRequest() {}

  explicit EditJobTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packagePath) {
      res["PackagePath"] = boost::any(*packagePath);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reRunable) {
      res["ReRunable"] = boost::any(*reRunable);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (stderrRedirectPath) {
      res["StderrRedirectPath"] = boost::any(*stderrRedirectPath);
    }
    if (stdoutRedirectPath) {
      res["StdoutRedirectPath"] = boost::any(*stdoutRedirectPath);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackagePath") != m.end() && !m["PackagePath"].empty()) {
      packagePath = make_shared<string>(boost::any_cast<string>(m["PackagePath"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReRunable") != m.end() && !m["ReRunable"].empty()) {
      reRunable = make_shared<bool>(boost::any_cast<bool>(m["ReRunable"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("StderrRedirectPath") != m.end() && !m["StderrRedirectPath"].empty()) {
      stderrRedirectPath = make_shared<string>(boost::any_cast<string>(m["StderrRedirectPath"]));
    }
    if (m.find("StdoutRedirectPath") != m.end() && !m["StdoutRedirectPath"].empty()) {
      stdoutRedirectPath = make_shared<string>(boost::any_cast<string>(m["StdoutRedirectPath"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
  }


  virtual ~EditJobTemplateRequest() = default;
};
class EditJobTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  EditJobTemplateResponseBody() {}

  explicit EditJobTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~EditJobTemplateResponseBody() = default;
};
class EditJobTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EditJobTemplateResponseBody> body{};

  EditJobTemplateResponse() {}

  explicit EditJobTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EditJobTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditJobTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~EditJobTemplateResponse() = default;
};
class GetAutoScaleConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  GetAutoScaleConfigRequest() {}

  explicit GetAutoScaleConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~GetAutoScaleConfigRequest() = default;
};
class GetAutoScaleConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<bool> enableAutoGrow{};
  shared_ptr<bool> enableAutoShrink{};
  shared_ptr<string> excludeNodes{};
  shared_ptr<long> extraNodesGrowRatio{};
  shared_ptr<long> growIntervalInMinutes{};
  shared_ptr<long> growRatio{};
  shared_ptr<long> growTimeoutInMinutes{};
  shared_ptr<long> maxNodesInCluster{};
  shared_ptr<string> requestId{};
  shared_ptr<long> shrinkIdleTimes{};
  shared_ptr<long> shrinkIntervalInMinutes{};
  shared_ptr<string> uid{};

  GetAutoScaleConfigResponseBody() {}

  explicit GetAutoScaleConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (enableAutoGrow) {
      res["EnableAutoGrow"] = boost::any(*enableAutoGrow);
    }
    if (enableAutoShrink) {
      res["EnableAutoShrink"] = boost::any(*enableAutoShrink);
    }
    if (excludeNodes) {
      res["ExcludeNodes"] = boost::any(*excludeNodes);
    }
    if (extraNodesGrowRatio) {
      res["ExtraNodesGrowRatio"] = boost::any(*extraNodesGrowRatio);
    }
    if (growIntervalInMinutes) {
      res["GrowIntervalInMinutes"] = boost::any(*growIntervalInMinutes);
    }
    if (growRatio) {
      res["GrowRatio"] = boost::any(*growRatio);
    }
    if (growTimeoutInMinutes) {
      res["GrowTimeoutInMinutes"] = boost::any(*growTimeoutInMinutes);
    }
    if (maxNodesInCluster) {
      res["MaxNodesInCluster"] = boost::any(*maxNodesInCluster);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (shrinkIdleTimes) {
      res["ShrinkIdleTimes"] = boost::any(*shrinkIdleTimes);
    }
    if (shrinkIntervalInMinutes) {
      res["ShrinkIntervalInMinutes"] = boost::any(*shrinkIntervalInMinutes);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("EnableAutoGrow") != m.end() && !m["EnableAutoGrow"].empty()) {
      enableAutoGrow = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoGrow"]));
    }
    if (m.find("EnableAutoShrink") != m.end() && !m["EnableAutoShrink"].empty()) {
      enableAutoShrink = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoShrink"]));
    }
    if (m.find("ExcludeNodes") != m.end() && !m["ExcludeNodes"].empty()) {
      excludeNodes = make_shared<string>(boost::any_cast<string>(m["ExcludeNodes"]));
    }
    if (m.find("ExtraNodesGrowRatio") != m.end() && !m["ExtraNodesGrowRatio"].empty()) {
      extraNodesGrowRatio = make_shared<long>(boost::any_cast<long>(m["ExtraNodesGrowRatio"]));
    }
    if (m.find("GrowIntervalInMinutes") != m.end() && !m["GrowIntervalInMinutes"].empty()) {
      growIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowIntervalInMinutes"]));
    }
    if (m.find("GrowRatio") != m.end() && !m["GrowRatio"].empty()) {
      growRatio = make_shared<long>(boost::any_cast<long>(m["GrowRatio"]));
    }
    if (m.find("GrowTimeoutInMinutes") != m.end() && !m["GrowTimeoutInMinutes"].empty()) {
      growTimeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowTimeoutInMinutes"]));
    }
    if (m.find("MaxNodesInCluster") != m.end() && !m["MaxNodesInCluster"].empty()) {
      maxNodesInCluster = make_shared<long>(boost::any_cast<long>(m["MaxNodesInCluster"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShrinkIdleTimes") != m.end() && !m["ShrinkIdleTimes"].empty()) {
      shrinkIdleTimes = make_shared<long>(boost::any_cast<long>(m["ShrinkIdleTimes"]));
    }
    if (m.find("ShrinkIntervalInMinutes") != m.end() && !m["ShrinkIntervalInMinutes"].empty()) {
      shrinkIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["ShrinkIntervalInMinutes"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetAutoScaleConfigResponseBody() = default;
};
class GetAutoScaleConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAutoScaleConfigResponseBody> body{};

  GetAutoScaleConfigResponse() {}

  explicit GetAutoScaleConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAutoScaleConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAutoScaleConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetAutoScaleConfigResponse() = default;
};
class ListClusterLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListClusterLogsRequest() {}

  explicit ListClusterLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListClusterLogsRequest() = default;
};
class ListClusterLogsResponseBodyLogsLogInfo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> level{};
  shared_ptr<string> message{};
  shared_ptr<string> operation{};

  ListClusterLogsResponseBodyLogsLogInfo() {}

  explicit ListClusterLogsResponseBodyLogsLogInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
  }


  virtual ~ListClusterLogsResponseBodyLogsLogInfo() = default;
};
class ListClusterLogsResponseBodyLogs : public Darabonba::Model {
public:
  shared_ptr<vector<ListClusterLogsResponseBodyLogsLogInfo>> logInfo{};

  ListClusterLogsResponseBodyLogs() {}

  explicit ListClusterLogsResponseBodyLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logInfo) {
      vector<boost::any> temp1;
      for(auto item1:*logInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogInfo") != m.end() && !m["LogInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["LogInfo"].type()) {
        vector<ListClusterLogsResponseBodyLogsLogInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterLogsResponseBodyLogsLogInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logInfo = make_shared<vector<ListClusterLogsResponseBodyLogsLogInfo>>(expect1);
      }
    }
  }


  virtual ~ListClusterLogsResponseBodyLogs() = default;
};
class ListClusterLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<ListClusterLogsResponseBodyLogs> logs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListClusterLogsResponseBody() {}

  explicit ListClusterLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (logs) {
      res["Logs"] = logs ? boost::any(logs->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Logs"].type()) {
        ListClusterLogsResponseBodyLogs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Logs"]));
        logs = make_shared<ListClusterLogsResponseBodyLogs>(model1);
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


  virtual ~ListClusterLogsResponseBody() = default;
};
class ListClusterLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterLogsResponseBody> body{};

  ListClusterLogsResponse() {}

  explicit ListClusterLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClusterLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterLogsResponse() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimpleComputes : public Darabonba::Model {
public:
  shared_ptr<long> exceptionCount{};
  shared_ptr<long> normalCount{};
  shared_ptr<long> total{};

  ListClustersResponseBodyClustersClusterInfoSimpleComputes() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimpleComputes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionCount) {
      res["ExceptionCount"] = boost::any(*exceptionCount);
    }
    if (normalCount) {
      res["NormalCount"] = boost::any(*normalCount);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExceptionCount") != m.end() && !m["ExceptionCount"].empty()) {
      exceptionCount = make_shared<long>(boost::any_cast<long>(m["ExceptionCount"]));
    }
    if (m.find("NormalCount") != m.end() && !m["NormalCount"].empty()) {
      normalCount = make_shared<long>(boost::any_cast<long>(m["NormalCount"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoSimpleComputes() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimpleManagers : public Darabonba::Model {
public:
  shared_ptr<long> exceptionCount{};
  shared_ptr<long> normalCount{};
  shared_ptr<long> total{};

  ListClustersResponseBodyClustersClusterInfoSimpleManagers() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimpleManagers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionCount) {
      res["ExceptionCount"] = boost::any(*exceptionCount);
    }
    if (normalCount) {
      res["NormalCount"] = boost::any(*normalCount);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExceptionCount") != m.end() && !m["ExceptionCount"].empty()) {
      exceptionCount = make_shared<long>(boost::any_cast<long>(m["ExceptionCount"]));
    }
    if (m.find("NormalCount") != m.end() && !m["NormalCount"].empty()) {
      normalCount = make_shared<long>(boost::any_cast<long>(m["NormalCount"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoSimpleManagers() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimpleTotalResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListClustersResponseBodyClustersClusterInfoSimpleTotalResources() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimpleTotalResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoSimpleTotalResources() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimpleUsedResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListClustersResponseBodyClustersClusterInfoSimpleUsedResources() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimpleUsedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoSimpleUsedResources() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimple : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoSimpleComputes> computes{};
  shared_ptr<long> count{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> loginNodes{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoSimpleManagers> managers{};
  shared_ptr<string> name{};
  shared_ptr<string> osTag{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schedulerType{};
  shared_ptr<string> status{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoSimpleTotalResources> totalResources{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoSimpleUsedResources> usedResources{};
  shared_ptr<string> zoneId{};

  ListClustersResponseBodyClustersClusterInfoSimple() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimple(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (computes) {
      res["Computes"] = computes ? boost::any(computes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (loginNodes) {
      res["LoginNodes"] = boost::any(*loginNodes);
    }
    if (managers) {
      res["Managers"] = managers ? boost::any(managers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalResources) {
      res["TotalResources"] = totalResources ? boost::any(totalResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usedResources) {
      res["UsedResources"] = usedResources ? boost::any(usedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Computes") != m.end() && !m["Computes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Computes"].type()) {
        ListClustersResponseBodyClustersClusterInfoSimpleComputes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Computes"]));
        computes = make_shared<ListClustersResponseBodyClustersClusterInfoSimpleComputes>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("LoginNodes") != m.end() && !m["LoginNodes"].empty()) {
      loginNodes = make_shared<string>(boost::any_cast<string>(m["LoginNodes"]));
    }
    if (m.find("Managers") != m.end() && !m["Managers"].empty()) {
      if (typeid(map<string, boost::any>) == m["Managers"].type()) {
        ListClustersResponseBodyClustersClusterInfoSimpleManagers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Managers"]));
        managers = make_shared<ListClustersResponseBodyClustersClusterInfoSimpleManagers>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalResources") != m.end() && !m["TotalResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalResources"].type()) {
        ListClustersResponseBodyClustersClusterInfoSimpleTotalResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalResources"]));
        totalResources = make_shared<ListClustersResponseBodyClustersClusterInfoSimpleTotalResources>(model1);
      }
    }
    if (m.find("UsedResources") != m.end() && !m["UsedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedResources"].type()) {
        ListClustersResponseBodyClustersClusterInfoSimpleUsedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedResources"]));
        usedResources = make_shared<ListClustersResponseBodyClustersClusterInfoSimpleUsedResources>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoSimple() = default;
};
class ListClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersResponseBodyClustersClusterInfoSimple>> clusterInfoSimple{};

  ListClustersResponseBodyClusters() {}

  explicit ListClustersResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterInfoSimple) {
      vector<boost::any> temp1;
      for(auto item1:*clusterInfoSimple){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterInfoSimple"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterInfoSimple") != m.end() && !m["ClusterInfoSimple"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterInfoSimple"].type()) {
        vector<ListClustersResponseBodyClustersClusterInfoSimple> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterInfoSimple"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClustersClusterInfoSimple model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterInfoSimple = make_shared<vector<ListClustersResponseBodyClustersClusterInfoSimple>>(expect1);
      }
    }
  }


  virtual ~ListClustersResponseBodyClusters() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListClustersResponseBodyClusters> clusters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      res["Clusters"] = clusters ? boost::any(clusters->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Clusters"].type()) {
        ListClustersResponseBodyClusters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Clusters"]));
        clusters = make_shared<ListClustersResponseBodyClusters>(model1);
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


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersResponse() = default;
};
class ListCurrentClientVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clientVersion{};
  shared_ptr<string> requestId{};

  ListCurrentClientVersionResponseBody() {}

  explicit ListCurrentClientVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCurrentClientVersionResponseBody() = default;
};
class ListCurrentClientVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCurrentClientVersionResponseBody> body{};

  ListCurrentClientVersionResponse() {}

  explicit ListCurrentClientVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCurrentClientVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCurrentClientVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ListCurrentClientVersionResponse() = default;
};
class ListCustomImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseOsTag{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> regionId{};

  ListCustomImagesRequest() {}

  explicit ListCustomImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseOsTag) {
      res["BaseOsTag"] = boost::any(*baseOsTag);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseOsTag") != m.end() && !m["BaseOsTag"].empty()) {
      baseOsTag = make_shared<string>(boost::any_cast<string>(m["BaseOsTag"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListCustomImagesRequest() = default;
};
class ListCustomImagesResponseBodyImagesImageInfoBaseOsTag : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> osTag{};
  shared_ptr<string> platform{};
  shared_ptr<string> version{};

  ListCustomImagesResponseBodyImagesImageInfoBaseOsTag() {}

  explicit ListCustomImagesResponseBodyImagesImageInfoBaseOsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListCustomImagesResponseBodyImagesImageInfoBaseOsTag() = default;
};
class ListCustomImagesResponseBodyImagesImageInfo : public Darabonba::Model {
public:
  shared_ptr<ListCustomImagesResponseBodyImagesImageInfoBaseOsTag> baseOsTag{};
  shared_ptr<string> description{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageOwnerAlias{};

  ListCustomImagesResponseBodyImagesImageInfo() {}

  explicit ListCustomImagesResponseBodyImagesImageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseOsTag) {
      res["BaseOsTag"] = baseOsTag ? boost::any(baseOsTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseOsTag") != m.end() && !m["BaseOsTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["BaseOsTag"].type()) {
        ListCustomImagesResponseBodyImagesImageInfoBaseOsTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BaseOsTag"]));
        baseOsTag = make_shared<ListCustomImagesResponseBodyImagesImageInfoBaseOsTag>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
  }


  virtual ~ListCustomImagesResponseBodyImagesImageInfo() = default;
};
class ListCustomImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<vector<ListCustomImagesResponseBodyImagesImageInfo>> imageInfo{};

  ListCustomImagesResponseBodyImages() {}

  explicit ListCustomImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageInfo) {
      vector<boost::any> temp1;
      for(auto item1:*imageInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageInfo") != m.end() && !m["ImageInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageInfo"].type()) {
        vector<ListCustomImagesResponseBodyImagesImageInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCustomImagesResponseBodyImagesImageInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageInfo = make_shared<vector<ListCustomImagesResponseBodyImagesImageInfo>>(expect1);
      }
    }
  }


  virtual ~ListCustomImagesResponseBodyImages() = default;
};
class ListCustomImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCustomImagesResponseBodyImages> images{};
  shared_ptr<string> requestId{};

  ListCustomImagesResponseBody() {}

  explicit ListCustomImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      res["Images"] = images ? boost::any(images->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(map<string, boost::any>) == m["Images"].type()) {
        ListCustomImagesResponseBodyImages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Images"]));
        images = make_shared<ListCustomImagesResponseBodyImages>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCustomImagesResponseBody() = default;
};
class ListCustomImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCustomImagesResponseBody> body{};

  ListCustomImagesResponse() {}

  explicit ListCustomImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCustomImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCustomImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCustomImagesResponse() = default;
};
class ListImagesResponseBodyOsTagsOsInfo : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> osTag{};
  shared_ptr<string> platform{};
  shared_ptr<string> version{};

  ListImagesResponseBodyOsTagsOsInfo() {}

  explicit ListImagesResponseBodyOsTagsOsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListImagesResponseBodyOsTagsOsInfo() = default;
};
class ListImagesResponseBodyOsTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListImagesResponseBodyOsTagsOsInfo>> osInfo{};

  ListImagesResponseBodyOsTags() {}

  explicit ListImagesResponseBodyOsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (osInfo) {
      vector<boost::any> temp1;
      for(auto item1:*osInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OsInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OsInfo") != m.end() && !m["OsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["OsInfo"].type()) {
        vector<ListImagesResponseBodyOsTagsOsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyOsTagsOsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        osInfo = make_shared<vector<ListImagesResponseBodyOsTagsOsInfo>>(expect1);
      }
    }
  }


  virtual ~ListImagesResponseBodyOsTags() = default;
};
class ListImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListImagesResponseBodyOsTags> osTags{};
  shared_ptr<string> requestId{};

  ListImagesResponseBody() {}

  explicit ListImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (osTags) {
      res["OsTags"] = osTags ? boost::any(osTags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OsTags") != m.end() && !m["OsTags"].empty()) {
      if (typeid(map<string, boost::any>) == m["OsTags"].type()) {
        ListImagesResponseBodyOsTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OsTags"]));
        osTags = make_shared<ListImagesResponseBodyOsTags>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListImagesResponseBody() = default;
};
class ListImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListImagesResponseBody> body{};

  ListImagesResponse() {}

  explicit ListImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListImagesResponse() = default;
};
class ListJobTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListJobTemplatesRequest() {}

  explicit ListJobTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
  }


  virtual ~ListJobTemplatesRequest() = default;
};
class ListJobTemplatesResponseBodyTemplatesJobTemplates : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> commandLine{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> packagePath{};
  shared_ptr<long> priority{};
  shared_ptr<bool> reRunable{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> stderrRedirectPath{};
  shared_ptr<string> stdoutRedirectPath{};
  shared_ptr<string> variables{};

  ListJobTemplatesResponseBodyTemplatesJobTemplates() {}

  explicit ListJobTemplatesResponseBodyTemplatesJobTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packagePath) {
      res["PackagePath"] = boost::any(*packagePath);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reRunable) {
      res["ReRunable"] = boost::any(*reRunable);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (stderrRedirectPath) {
      res["StderrRedirectPath"] = boost::any(*stderrRedirectPath);
    }
    if (stdoutRedirectPath) {
      res["StdoutRedirectPath"] = boost::any(*stdoutRedirectPath);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackagePath") != m.end() && !m["PackagePath"].empty()) {
      packagePath = make_shared<string>(boost::any_cast<string>(m["PackagePath"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReRunable") != m.end() && !m["ReRunable"].empty()) {
      reRunable = make_shared<bool>(boost::any_cast<bool>(m["ReRunable"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("StderrRedirectPath") != m.end() && !m["StderrRedirectPath"].empty()) {
      stderrRedirectPath = make_shared<string>(boost::any_cast<string>(m["StderrRedirectPath"]));
    }
    if (m.find("StdoutRedirectPath") != m.end() && !m["StdoutRedirectPath"].empty()) {
      stdoutRedirectPath = make_shared<string>(boost::any_cast<string>(m["StdoutRedirectPath"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
  }


  virtual ~ListJobTemplatesResponseBodyTemplatesJobTemplates() = default;
};
class ListJobTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobTemplatesResponseBodyTemplatesJobTemplates>> jobTemplates{};

  ListJobTemplatesResponseBodyTemplates() {}

  explicit ListJobTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*jobTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobTemplates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobTemplates") != m.end() && !m["JobTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["JobTemplates"].type()) {
        vector<ListJobTemplatesResponseBodyTemplatesJobTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobTemplatesResponseBodyTemplatesJobTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobTemplates = make_shared<vector<ListJobTemplatesResponseBodyTemplatesJobTemplates>>(expect1);
      }
    }
  }


  virtual ~ListJobTemplatesResponseBodyTemplates() = default;
};
class ListJobTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListJobTemplatesResponseBodyTemplates> templates{};
  shared_ptr<long> totalCount{};

  ListJobTemplatesResponseBody() {}

  explicit ListJobTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templates) {
      res["Templates"] = templates ? boost::any(templates->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(map<string, boost::any>) == m["Templates"].type()) {
        ListJobTemplatesResponseBodyTemplates model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Templates"]));
        templates = make_shared<ListJobTemplatesResponseBodyTemplates>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListJobTemplatesResponseBody() = default;
};
class ListJobTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobTemplatesResponseBody> body{};

  ListJobTemplatesResponse() {}

  explicit ListJobTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListJobTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobTemplatesResponse() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> rerunable{};
  shared_ptr<string> state{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (rerunable) {
      res["Rerunable"] = boost::any(*rerunable);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Rerunable") != m.end() && !m["Rerunable"].empty()) {
      rerunable = make_shared<string>(boost::any_cast<string>(m["Rerunable"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsResponseBodyJobsJobInfoResources : public Darabonba::Model {
public:
  shared_ptr<long> cores{};
  shared_ptr<long> nodes{};

  ListJobsResponseBodyJobsJobInfoResources() {}

  explicit ListJobsResponseBodyJobsJobInfoResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<long>(boost::any_cast<long>(m["Cores"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<long>(boost::any_cast<long>(m["Nodes"]));
    }
  }


  virtual ~ListJobsResponseBodyJobsJobInfoResources() = default;
};
class ListJobsResponseBodyJobsJobInfo : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> comment{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<long> priority{};
  shared_ptr<ListJobsResponseBodyJobsJobInfoResources> resources{};
  shared_ptr<string> shellPath{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> stderr{};
  shared_ptr<string> stdout{};
  shared_ptr<string> submitTime{};

  ListJobsResponseBodyJobsJobInfo() {}

  explicit ListJobsResponseBodyJobsJobInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (shellPath) {
      res["ShellPath"] = boost::any(*shellPath);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (stderr) {
      res["Stderr"] = boost::any(*stderr);
    }
    if (stdout) {
      res["Stdout"] = boost::any(*stdout);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["LastModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        ListJobsResponseBodyJobsJobInfoResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<ListJobsResponseBodyJobsJobInfoResources>(model1);
      }
    }
    if (m.find("ShellPath") != m.end() && !m["ShellPath"].empty()) {
      shellPath = make_shared<string>(boost::any_cast<string>(m["ShellPath"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Stderr") != m.end() && !m["Stderr"].empty()) {
      stderr = make_shared<string>(boost::any_cast<string>(m["Stderr"]));
    }
    if (m.find("Stdout") != m.end() && !m["Stdout"].empty()) {
      stdout = make_shared<string>(boost::any_cast<string>(m["Stdout"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~ListJobsResponseBodyJobsJobInfo() = default;
};
class ListJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobsResponseBodyJobsJobInfo>> jobInfo{};

  ListJobsResponseBodyJobs() {}

  explicit ListJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInfo) {
      vector<boost::any> temp1;
      for(auto item1:*jobInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobInfo") != m.end() && !m["JobInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["JobInfo"].type()) {
        vector<ListJobsResponseBodyJobsJobInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobsResponseBodyJobsJobInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobInfo = make_shared<vector<ListJobsResponseBodyJobsJobInfo>>(expect1);
      }
    }
  }


  virtual ~ListJobsResponseBodyJobs() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListJobsResponseBodyJobs> jobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListJobsResponseBody() {}

  explicit ListJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobs) {
      res["Jobs"] = jobs ? boost::any(jobs->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Jobs"].type()) {
        ListJobsResponseBodyJobs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Jobs"]));
        jobs = make_shared<ListJobsResponseBodyJobs>(model1);
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


  virtual ~ListJobsResponseBody() = default;
};
class ListJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobsResponseBody> body{};

  ListJobsResponse() {}

  explicit ListJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobsResponse() = default;
};
class ListNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> hostName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> role{};

  ListNodesRequest() {}

  explicit ListNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~ListNodesRequest() = default;
};
class ListNodesResponseBodyNodesNodeInfoTotalResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListNodesResponseBodyNodesNodeInfoTotalResources() {}

  explicit ListNodesResponseBodyNodesNodeInfoTotalResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
  }


  virtual ~ListNodesResponseBodyNodesNodeInfoTotalResources() = default;
};
class ListNodesResponseBodyNodesNodeInfoUsedResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListNodesResponseBodyNodesNodeInfoUsedResources() {}

  explicit ListNodesResponseBodyNodesNodeInfoUsedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
  }


  virtual ~ListNodesResponseBodyNodesNodeInfoUsedResources() = default;
};
class ListNodesResponseBodyNodesNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> addTime{};
  shared_ptr<bool> createdByEhpc{};
  shared_ptr<bool> expired{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> regionId{};
  shared_ptr<string> role{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> status{};
  shared_ptr<ListNodesResponseBodyNodesNodeInfoTotalResources> totalResources{};
  shared_ptr<ListNodesResponseBodyNodesNodeInfoUsedResources> usedResources{};

  ListNodesResponseBodyNodesNodeInfo() {}

  explicit ListNodesResponseBodyNodesNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTime) {
      res["AddTime"] = boost::any(*addTime);
    }
    if (createdByEhpc) {
      res["CreatedByEhpc"] = boost::any(*createdByEhpc);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalResources) {
      res["TotalResources"] = totalResources ? boost::any(totalResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usedResources) {
      res["UsedResources"] = usedResources ? boost::any(usedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddTime") != m.end() && !m["AddTime"].empty()) {
      addTime = make_shared<string>(boost::any_cast<string>(m["AddTime"]));
    }
    if (m.find("CreatedByEhpc") != m.end() && !m["CreatedByEhpc"].empty()) {
      createdByEhpc = make_shared<bool>(boost::any_cast<bool>(m["CreatedByEhpc"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalResources") != m.end() && !m["TotalResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalResources"].type()) {
        ListNodesResponseBodyNodesNodeInfoTotalResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalResources"]));
        totalResources = make_shared<ListNodesResponseBodyNodesNodeInfoTotalResources>(model1);
      }
    }
    if (m.find("UsedResources") != m.end() && !m["UsedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedResources"].type()) {
        ListNodesResponseBodyNodesNodeInfoUsedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedResources"]));
        usedResources = make_shared<ListNodesResponseBodyNodesNodeInfoUsedResources>(model1);
      }
    }
  }


  virtual ~ListNodesResponseBodyNodesNodeInfo() = default;
};
class ListNodesResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyNodesNodeInfo>> nodeInfo{};

  ListNodesResponseBodyNodes() {}

  explicit ListNodesResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfo"].type()) {
        vector<ListNodesResponseBodyNodesNodeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyNodesNodeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfo = make_shared<vector<ListNodesResponseBodyNodesNodeInfo>>(expect1);
      }
    }
  }


  virtual ~ListNodesResponseBodyNodes() = default;
};
class ListNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNodesResponseBodyNodes> nodes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNodesResponseBody() {}

  explicit ListNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      res["Nodes"] = nodes ? boost::any(nodes->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nodes"].type()) {
        ListNodesResponseBodyNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nodes"]));
        nodes = make_shared<ListNodesResponseBodyNodes>(model1);
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


  virtual ~ListNodesResponseBody() = default;
};
class ListNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodesResponseBody> body{};

  ListNodesResponse() {}

  explicit ListNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesResponse() = default;
};
class ListNodesNoPagingRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> hostName{};
  shared_ptr<bool> onlyDetached{};
  shared_ptr<string> role{};

  ListNodesNoPagingRequest() {}

  explicit ListNodesNoPagingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (onlyDetached) {
      res["OnlyDetached"] = boost::any(*onlyDetached);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("OnlyDetached") != m.end() && !m["OnlyDetached"].empty()) {
      onlyDetached = make_shared<bool>(boost::any_cast<bool>(m["OnlyDetached"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~ListNodesNoPagingRequest() = default;
};
class ListNodesNoPagingResponseBodyNodesNodeInfoTotalResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListNodesNoPagingResponseBodyNodesNodeInfoTotalResources() {}

  explicit ListNodesNoPagingResponseBodyNodesNodeInfoTotalResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
  }


  virtual ~ListNodesNoPagingResponseBodyNodesNodeInfoTotalResources() = default;
};
class ListNodesNoPagingResponseBodyNodesNodeInfoUsedResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListNodesNoPagingResponseBodyNodesNodeInfoUsedResources() {}

  explicit ListNodesNoPagingResponseBodyNodesNodeInfoUsedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
  }


  virtual ~ListNodesNoPagingResponseBodyNodesNodeInfoUsedResources() = default;
};
class ListNodesNoPagingResponseBodyNodesNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> addTime{};
  shared_ptr<bool> createdByEhpc{};
  shared_ptr<bool> expired{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> regionId{};
  shared_ptr<string> role{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> status{};
  shared_ptr<ListNodesNoPagingResponseBodyNodesNodeInfoTotalResources> totalResources{};
  shared_ptr<ListNodesNoPagingResponseBodyNodesNodeInfoUsedResources> usedResources{};

  ListNodesNoPagingResponseBodyNodesNodeInfo() {}

  explicit ListNodesNoPagingResponseBodyNodesNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTime) {
      res["AddTime"] = boost::any(*addTime);
    }
    if (createdByEhpc) {
      res["CreatedByEhpc"] = boost::any(*createdByEhpc);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalResources) {
      res["TotalResources"] = totalResources ? boost::any(totalResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usedResources) {
      res["UsedResources"] = usedResources ? boost::any(usedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddTime") != m.end() && !m["AddTime"].empty()) {
      addTime = make_shared<string>(boost::any_cast<string>(m["AddTime"]));
    }
    if (m.find("CreatedByEhpc") != m.end() && !m["CreatedByEhpc"].empty()) {
      createdByEhpc = make_shared<bool>(boost::any_cast<bool>(m["CreatedByEhpc"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalResources") != m.end() && !m["TotalResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalResources"].type()) {
        ListNodesNoPagingResponseBodyNodesNodeInfoTotalResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalResources"]));
        totalResources = make_shared<ListNodesNoPagingResponseBodyNodesNodeInfoTotalResources>(model1);
      }
    }
    if (m.find("UsedResources") != m.end() && !m["UsedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedResources"].type()) {
        ListNodesNoPagingResponseBodyNodesNodeInfoUsedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedResources"]));
        usedResources = make_shared<ListNodesNoPagingResponseBodyNodesNodeInfoUsedResources>(model1);
      }
    }
  }


  virtual ~ListNodesNoPagingResponseBodyNodesNodeInfo() = default;
};
class ListNodesNoPagingResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesNoPagingResponseBodyNodesNodeInfo>> nodeInfo{};

  ListNodesNoPagingResponseBodyNodes() {}

  explicit ListNodesNoPagingResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfo"].type()) {
        vector<ListNodesNoPagingResponseBodyNodesNodeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesNoPagingResponseBodyNodesNodeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfo = make_shared<vector<ListNodesNoPagingResponseBodyNodesNodeInfo>>(expect1);
      }
    }
  }


  virtual ~ListNodesNoPagingResponseBodyNodes() = default;
};
class ListNodesNoPagingResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNodesNoPagingResponseBodyNodes> nodes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNodesNoPagingResponseBody() {}

  explicit ListNodesNoPagingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      res["Nodes"] = nodes ? boost::any(nodes->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nodes"].type()) {
        ListNodesNoPagingResponseBodyNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nodes"]));
        nodes = make_shared<ListNodesNoPagingResponseBodyNodes>(model1);
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


  virtual ~ListNodesNoPagingResponseBody() = default;
};
class ListNodesNoPagingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodesNoPagingResponseBody> body{};

  ListNodesNoPagingResponse() {}

  explicit ListNodesNoPagingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodesNoPagingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesNoPagingResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesNoPagingResponse() = default;
};
class ListPreferredEcsTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> zoneId{};

  ListPreferredEcsTypesRequest() {}

  explicit ListPreferredEcsTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListPreferredEcsTypesRequest() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceTypeId{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypeId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypeId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypeId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceTypeId{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypeId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypeId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypeId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceTypeId{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypeId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypeId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypeId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles : public Darabonba::Model {
public:
  shared_ptr<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute> compute{};
  shared_ptr<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin> login{};
  shared_ptr<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager> manager{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compute) {
      res["Compute"] = compute ? boost::any(compute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (login) {
      res["Login"] = login ? boost::any(login->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (manager) {
      res["Manager"] = manager ? boost::any(manager->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compute") != m.end() && !m["Compute"].empty()) {
      if (typeid(map<string, boost::any>) == m["Compute"].type()) {
        ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Compute"]));
        compute = make_shared<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute>(model1);
      }
    }
    if (m.find("Login") != m.end() && !m["Login"].empty()) {
      if (typeid(map<string, boost::any>) == m["Login"].type()) {
        ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Login"]));
        login = make_shared<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin>(model1);
      }
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      if (typeid(map<string, boost::any>) == m["Manager"].type()) {
        ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Manager"]));
        manager = make_shared<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager>(model1);
      }
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfo : public Darabonba::Model {
public:
  shared_ptr<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles> roles{};
  shared_ptr<string> seriesId{};
  shared_ptr<string> seriesName{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfo() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roles) {
      res["Roles"] = roles ? boost::any(roles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (seriesId) {
      res["SeriesId"] = boost::any(*seriesId);
    }
    if (seriesName) {
      res["SeriesName"] = boost::any(*seriesName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roles"].type()) {
        ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roles"]));
        roles = make_shared<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles>(model1);
      }
    }
    if (m.find("SeriesId") != m.end() && !m["SeriesId"].empty()) {
      seriesId = make_shared<string>(boost::any_cast<string>(m["SeriesId"]));
    }
    if (m.find("SeriesName") != m.end() && !m["SeriesName"].empty()) {
      seriesName = make_shared<string>(boost::any_cast<string>(m["SeriesName"]));
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfo() = default;
};
class ListPreferredEcsTypesResponseBodySeries : public Darabonba::Model {
public:
  shared_ptr<vector<ListPreferredEcsTypesResponseBodySeriesSeriesInfo>> seriesInfo{};

  ListPreferredEcsTypesResponseBodySeries() {}

  explicit ListPreferredEcsTypesResponseBodySeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (seriesInfo) {
      vector<boost::any> temp1;
      for(auto item1:*seriesInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SeriesInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeriesInfo") != m.end() && !m["SeriesInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SeriesInfo"].type()) {
        vector<ListPreferredEcsTypesResponseBodySeriesSeriesInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SeriesInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPreferredEcsTypesResponseBodySeriesSeriesInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        seriesInfo = make_shared<vector<ListPreferredEcsTypesResponseBodySeriesSeriesInfo>>(expect1);
      }
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeries() = default;
};
class ListPreferredEcsTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListPreferredEcsTypesResponseBodySeries> series{};
  shared_ptr<bool> supportSpotInstance{};

  ListPreferredEcsTypesResponseBody() {}

  explicit ListPreferredEcsTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (series) {
      res["Series"] = series ? boost::any(series->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (supportSpotInstance) {
      res["SupportSpotInstance"] = boost::any(*supportSpotInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(map<string, boost::any>) == m["Series"].type()) {
        ListPreferredEcsTypesResponseBodySeries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Series"]));
        series = make_shared<ListPreferredEcsTypesResponseBodySeries>(model1);
      }
    }
    if (m.find("SupportSpotInstance") != m.end() && !m["SupportSpotInstance"].empty()) {
      supportSpotInstance = make_shared<bool>(boost::any_cast<bool>(m["SupportSpotInstance"]));
    }
  }


  virtual ~ListPreferredEcsTypesResponseBody() = default;
};
class ListPreferredEcsTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPreferredEcsTypesResponseBody> body{};

  ListPreferredEcsTypesResponse() {}

  explicit ListPreferredEcsTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPreferredEcsTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPreferredEcsTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPreferredEcsTypesResponse() = default;
};
class ListRegionsResponseBodyRegionsRegionInfo : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegionsRegionInfo() {}

  explicit ListRegionsResponseBodyRegionsRegionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListRegionsResponseBodyRegionsRegionInfo() = default;
};
class ListRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegionsResponseBodyRegionsRegionInfo>> regionInfo{};

  ListRegionsResponseBodyRegions() {}

  explicit ListRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionInfo) {
      vector<boost::any> temp1;
      for(auto item1:*regionInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionInfo") != m.end() && !m["RegionInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionInfo"].type()) {
        vector<ListRegionsResponseBodyRegionsRegionInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegionsRegionInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionInfo = make_shared<vector<ListRegionsResponseBodyRegionsRegionInfo>>(expect1);
      }
    }
  }


  virtual ~ListRegionsResponseBodyRegions() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<ListRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListSoftwaresRequest : public Darabonba::Model {
public:
  shared_ptr<string> ehpcVersion{};

  ListSoftwaresRequest() {}

  explicit ListSoftwaresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
  }


  virtual ~ListSoftwaresRequest() = default;
};
class ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> required{};
  shared_ptr<string> tag{};
  shared_ptr<string> version{};

  ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo() {}

  explicit ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo() = default;
};
class ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications : public Darabonba::Model {
public:
  shared_ptr<vector<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo>> applicationInfo{};

  ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications() {}

  explicit ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationInfo) {
      vector<boost::any> temp1;
      for(auto item1:*applicationInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationInfo") != m.end() && !m["ApplicationInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationInfo"].type()) {
        vector<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationInfo = make_shared<vector<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo>>(expect1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications() = default;
};
class ListSoftwaresResponseBodySoftwaresSoftwareInfo : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> accountVersion{};
  shared_ptr<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications> applications{};
  shared_ptr<string> ehpcVersion{};
  shared_ptr<string> osTag{};
  shared_ptr<string> schedulerType{};
  shared_ptr<string> schedulerVersion{};

  ListSoftwaresResponseBodySoftwaresSoftwareInfo() {}

  explicit ListSoftwaresResponseBodySoftwaresSoftwareInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountVersion) {
      res["AccountVersion"] = boost::any(*accountVersion);
    }
    if (applications) {
      res["Applications"] = applications ? boost::any(applications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
    }
    if (schedulerVersion) {
      res["SchedulerVersion"] = boost::any(*schedulerVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountVersion") != m.end() && !m["AccountVersion"].empty()) {
      accountVersion = make_shared<string>(boost::any_cast<string>(m["AccountVersion"]));
    }
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applications"].type()) {
        ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applications"]));
        applications = make_shared<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications>(model1);
      }
    }
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
    if (m.find("SchedulerVersion") != m.end() && !m["SchedulerVersion"].empty()) {
      schedulerVersion = make_shared<string>(boost::any_cast<string>(m["SchedulerVersion"]));
    }
  }


  virtual ~ListSoftwaresResponseBodySoftwaresSoftwareInfo() = default;
};
class ListSoftwaresResponseBodySoftwares : public Darabonba::Model {
public:
  shared_ptr<vector<ListSoftwaresResponseBodySoftwaresSoftwareInfo>> softwareInfo{};

  ListSoftwaresResponseBodySoftwares() {}

  explicit ListSoftwaresResponseBodySoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (softwareInfo) {
      vector<boost::any> temp1;
      for(auto item1:*softwareInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SoftwareInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SoftwareInfo") != m.end() && !m["SoftwareInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SoftwareInfo"].type()) {
        vector<ListSoftwaresResponseBodySoftwaresSoftwareInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SoftwareInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSoftwaresResponseBodySoftwaresSoftwareInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwareInfo = make_shared<vector<ListSoftwaresResponseBodySoftwaresSoftwareInfo>>(expect1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBodySoftwares() = default;
};
class ListSoftwaresResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSoftwaresResponseBodySoftwares> softwares{};

  ListSoftwaresResponseBody() {}

  explicit ListSoftwaresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (softwares) {
      res["Softwares"] = softwares ? boost::any(softwares->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(map<string, boost::any>) == m["Softwares"].type()) {
        ListSoftwaresResponseBodySoftwares model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Softwares"]));
        softwares = make_shared<ListSoftwaresResponseBodySoftwares>(model1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBody() = default;
};
class ListSoftwaresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSoftwaresResponseBody> body{};

  ListSoftwaresResponse() {}

  explicit ListSoftwaresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSoftwaresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSoftwaresResponseBody>(model1);
      }
    }
  }


  virtual ~ListSoftwaresResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyUsersUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> addTime{};
  shared_ptr<string> group{};
  shared_ptr<string> name{};

  ListUsersResponseBodyUsersUserInfo() {}

  explicit ListUsersResponseBodyUsersUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTime) {
      res["AddTime"] = boost::any(*addTime);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddTime") != m.end() && !m["AddTime"].empty()) {
      addTime = make_shared<string>(boost::any_cast<string>(m["AddTime"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListUsersResponseBodyUsersUserInfo() = default;
};
class ListUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersResponseBodyUsersUserInfo>> userInfo{};

  ListUsersResponseBodyUsers() {}

  explicit ListUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      vector<boost::any> temp1;
      for(auto item1:*userInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["UserInfo"].type()) {
        vector<ListUsersResponseBodyUsersUserInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyUsersUserInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userInfo = make_shared<vector<ListUsersResponseBodyUsersUserInfo>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBodyUsers() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<ListUsersResponseBodyUsers> users{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
class ListVolumesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListVolumesRequest() {}

  explicit ListVolumesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVolumesRequest() = default;
};
class ListVolumesResponseBodyVolumesVolumeInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};

  ListVolumesResponseBodyVolumesVolumeInfo() {}

  explicit ListVolumesResponseBodyVolumesVolumeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
  }


  virtual ~ListVolumesResponseBodyVolumesVolumeInfo() = default;
};
class ListVolumesResponseBodyVolumes : public Darabonba::Model {
public:
  shared_ptr<vector<ListVolumesResponseBodyVolumesVolumeInfo>> volumeInfo{};

  ListVolumesResponseBodyVolumes() {}

  explicit ListVolumesResponseBodyVolumes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (volumeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*volumeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VolumeInfo") != m.end() && !m["VolumeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeInfo"].type()) {
        vector<ListVolumesResponseBodyVolumesVolumeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVolumesResponseBodyVolumesVolumeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeInfo = make_shared<vector<ListVolumesResponseBodyVolumesVolumeInfo>>(expect1);
      }
    }
  }


  virtual ~ListVolumesResponseBodyVolumes() = default;
};
class ListVolumesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<ListVolumesResponseBodyVolumes> volumes{};

  ListVolumesResponseBody() {}

  explicit ListVolumesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (volumes) {
      res["Volumes"] = volumes ? boost::any(volumes->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Volumes") != m.end() && !m["Volumes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Volumes"].type()) {
        ListVolumesResponseBodyVolumes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Volumes"]));
        volumes = make_shared<ListVolumesResponseBodyVolumes>(model1);
      }
    }
  }


  virtual ~ListVolumesResponseBody() = default;
};
class ListVolumesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVolumesResponseBody> body{};

  ListVolumesResponse() {}

  explicit ListVolumesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVolumesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVolumesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVolumesResponse() = default;
};
class ModifyClusterAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  ModifyClusterAttributesRequest() {}

  explicit ModifyClusterAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyClusterAttributesRequest() = default;
};
class ModifyClusterAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterAttributesResponseBody() {}

  explicit ModifyClusterAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterAttributesResponseBody() = default;
};
class ModifyClusterAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterAttributesResponseBody> body{};

  ModifyClusterAttributesResponse() {}

  explicit ModifyClusterAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClusterAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterAttributesResponse() = default;
};
class ModifyUserGroupsRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> group{};
  shared_ptr<string> name{};

  ModifyUserGroupsRequestUser() {}

  explicit ModifyUserGroupsRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyUserGroupsRequestUser() = default;
};
class ModifyUserGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<ModifyUserGroupsRequestUser>> user{};

  ModifyUserGroupsRequest() {}

  explicit ModifyUserGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<ModifyUserGroupsRequestUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyUserGroupsRequestUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ModifyUserGroupsRequestUser>>(expect1);
      }
    }
  }


  virtual ~ModifyUserGroupsRequest() = default;
};
class ModifyUserGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserGroupsResponseBody() {}

  explicit ModifyUserGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUserGroupsResponseBody() = default;
};
class ModifyUserGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyUserGroupsResponseBody> body{};

  ModifyUserGroupsResponse() {}

  explicit ModifyUserGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyUserGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserGroupsResponse() = default;
};
class ModifyUserPasswordsRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> password{};

  ModifyUserPasswordsRequestUser() {}

  explicit ModifyUserPasswordsRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
  }


  virtual ~ModifyUserPasswordsRequestUser() = default;
};
class ModifyUserPasswordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<ModifyUserPasswordsRequestUser>> user{};

  ModifyUserPasswordsRequest() {}

  explicit ModifyUserPasswordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<ModifyUserPasswordsRequestUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyUserPasswordsRequestUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ModifyUserPasswordsRequestUser>>(expect1);
      }
    }
  }


  virtual ~ModifyUserPasswordsRequest() = default;
};
class ModifyUserPasswordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserPasswordsResponseBody() {}

  explicit ModifyUserPasswordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUserPasswordsResponseBody() = default;
};
class ModifyUserPasswordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyUserPasswordsResponseBody> body{};

  ModifyUserPasswordsResponse() {}

  explicit ModifyUserPasswordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyUserPasswordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserPasswordsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserPasswordsResponse() = default;
};
class RerunJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobs{};

  RerunJobsRequest() {}

  explicit RerunJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobs) {
      res["Jobs"] = boost::any(*jobs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      jobs = make_shared<string>(boost::any_cast<string>(m["Jobs"]));
    }
  }


  virtual ~RerunJobsRequest() = default;
};
class RerunJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RerunJobsResponseBody() {}

  explicit RerunJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RerunJobsResponseBody() = default;
};
class RerunJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RerunJobsResponseBody> body{};

  RerunJobsResponse() {}

  explicit RerunJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RerunJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RerunJobsResponseBody>(model1);
      }
    }
  }


  virtual ~RerunJobsResponse() = default;
};
class ResetNodesRequestInstance : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  ResetNodesRequestInstance() {}

  explicit ResetNodesRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ResetNodesRequestInstance() = default;
};
class ResetNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<ResetNodesRequestInstance>> instance{};

  ResetNodesRequest() {}

  explicit ResetNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<ResetNodesRequestInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResetNodesRequestInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<ResetNodesRequestInstance>>(expect1);
      }
    }
  }


  virtual ~ResetNodesRequest() = default;
};
class ResetNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetNodesResponseBody() {}

  explicit ResetNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetNodesResponseBody() = default;
};
class ResetNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetNodesResponseBody> body{};

  ResetNodesResponse() {}

  explicit ResetNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ResetNodesResponse() = default;
};
class SetAutoScaleConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> enableAutoGrow{};
  shared_ptr<bool> enableAutoShrink{};
  shared_ptr<string> excludeNodes{};
  shared_ptr<long> extraNodesGrowRatio{};
  shared_ptr<long> growIntervalInMinutes{};
  shared_ptr<long> growRatio{};
  shared_ptr<long> growTimeoutInMinutes{};
  shared_ptr<long> maxNodesInCluster{};
  shared_ptr<long> shrinkIdleTimes{};
  shared_ptr<long> shrinkIntervalInMinutes{};

  SetAutoScaleConfigRequest() {}

  explicit SetAutoScaleConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (enableAutoGrow) {
      res["EnableAutoGrow"] = boost::any(*enableAutoGrow);
    }
    if (enableAutoShrink) {
      res["EnableAutoShrink"] = boost::any(*enableAutoShrink);
    }
    if (excludeNodes) {
      res["ExcludeNodes"] = boost::any(*excludeNodes);
    }
    if (extraNodesGrowRatio) {
      res["ExtraNodesGrowRatio"] = boost::any(*extraNodesGrowRatio);
    }
    if (growIntervalInMinutes) {
      res["GrowIntervalInMinutes"] = boost::any(*growIntervalInMinutes);
    }
    if (growRatio) {
      res["GrowRatio"] = boost::any(*growRatio);
    }
    if (growTimeoutInMinutes) {
      res["GrowTimeoutInMinutes"] = boost::any(*growTimeoutInMinutes);
    }
    if (maxNodesInCluster) {
      res["MaxNodesInCluster"] = boost::any(*maxNodesInCluster);
    }
    if (shrinkIdleTimes) {
      res["ShrinkIdleTimes"] = boost::any(*shrinkIdleTimes);
    }
    if (shrinkIntervalInMinutes) {
      res["ShrinkIntervalInMinutes"] = boost::any(*shrinkIntervalInMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EnableAutoGrow") != m.end() && !m["EnableAutoGrow"].empty()) {
      enableAutoGrow = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoGrow"]));
    }
    if (m.find("EnableAutoShrink") != m.end() && !m["EnableAutoShrink"].empty()) {
      enableAutoShrink = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoShrink"]));
    }
    if (m.find("ExcludeNodes") != m.end() && !m["ExcludeNodes"].empty()) {
      excludeNodes = make_shared<string>(boost::any_cast<string>(m["ExcludeNodes"]));
    }
    if (m.find("ExtraNodesGrowRatio") != m.end() && !m["ExtraNodesGrowRatio"].empty()) {
      extraNodesGrowRatio = make_shared<long>(boost::any_cast<long>(m["ExtraNodesGrowRatio"]));
    }
    if (m.find("GrowIntervalInMinutes") != m.end() && !m["GrowIntervalInMinutes"].empty()) {
      growIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowIntervalInMinutes"]));
    }
    if (m.find("GrowRatio") != m.end() && !m["GrowRatio"].empty()) {
      growRatio = make_shared<long>(boost::any_cast<long>(m["GrowRatio"]));
    }
    if (m.find("GrowTimeoutInMinutes") != m.end() && !m["GrowTimeoutInMinutes"].empty()) {
      growTimeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowTimeoutInMinutes"]));
    }
    if (m.find("MaxNodesInCluster") != m.end() && !m["MaxNodesInCluster"].empty()) {
      maxNodesInCluster = make_shared<long>(boost::any_cast<long>(m["MaxNodesInCluster"]));
    }
    if (m.find("ShrinkIdleTimes") != m.end() && !m["ShrinkIdleTimes"].empty()) {
      shrinkIdleTimes = make_shared<long>(boost::any_cast<long>(m["ShrinkIdleTimes"]));
    }
    if (m.find("ShrinkIntervalInMinutes") != m.end() && !m["ShrinkIntervalInMinutes"].empty()) {
      shrinkIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["ShrinkIntervalInMinutes"]));
    }
  }


  virtual ~SetAutoScaleConfigRequest() = default;
};
class SetAutoScaleConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetAutoScaleConfigResponseBody() {}

  explicit SetAutoScaleConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetAutoScaleConfigResponseBody() = default;
};
class SetAutoScaleConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetAutoScaleConfigResponseBody> body{};

  SetAutoScaleConfigResponse() {}

  explicit SetAutoScaleConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetAutoScaleConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAutoScaleConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SetAutoScaleConfigResponse() = default;
};
class SetJobUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> runasUserPassword{};

  SetJobUserRequest() {}

  explicit SetJobUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (runasUserPassword) {
      res["RunasUserPassword"] = boost::any(*runasUserPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("RunasUserPassword") != m.end() && !m["RunasUserPassword"].empty()) {
      runasUserPassword = make_shared<string>(boost::any_cast<string>(m["RunasUserPassword"]));
    }
  }


  virtual ~SetJobUserRequest() = default;
};
class SetJobUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetJobUserResponseBody() {}

  explicit SetJobUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetJobUserResponseBody() = default;
};
class SetJobUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetJobUserResponseBody> body{};

  SetJobUserResponse() {}

  explicit SetJobUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetJobUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetJobUserResponseBody>(model1);
      }
    }
  }


  virtual ~SetJobUserResponse() = default;
};
class StopJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobs{};

  StopJobsRequest() {}

  explicit StopJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobs) {
      res["Jobs"] = boost::any(*jobs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      jobs = make_shared<string>(boost::any_cast<string>(m["Jobs"]));
    }
  }


  virtual ~StopJobsRequest() = default;
};
class StopJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopJobsResponseBody() {}

  explicit StopJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopJobsResponseBody() = default;
};
class StopJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopJobsResponseBody> body{};

  StopJobsResponse() {}

  explicit StopJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopJobsResponseBody>(model1);
      }
    }
  }


  virtual ~StopJobsResponse() = default;
};
class SubmitJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> commandLine{};
  shared_ptr<string> name{};
  shared_ptr<string> packagePath{};
  shared_ptr<long> priority{};
  shared_ptr<bool> reRunable{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> runasUserPassword{};
  shared_ptr<string> stderrRedirectPath{};
  shared_ptr<string> stdoutRedirectPath{};
  shared_ptr<string> variables{};

  SubmitJobRequest() {}

  explicit SubmitJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packagePath) {
      res["PackagePath"] = boost::any(*packagePath);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reRunable) {
      res["ReRunable"] = boost::any(*reRunable);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (runasUserPassword) {
      res["RunasUserPassword"] = boost::any(*runasUserPassword);
    }
    if (stderrRedirectPath) {
      res["StderrRedirectPath"] = boost::any(*stderrRedirectPath);
    }
    if (stdoutRedirectPath) {
      res["StdoutRedirectPath"] = boost::any(*stdoutRedirectPath);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackagePath") != m.end() && !m["PackagePath"].empty()) {
      packagePath = make_shared<string>(boost::any_cast<string>(m["PackagePath"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReRunable") != m.end() && !m["ReRunable"].empty()) {
      reRunable = make_shared<bool>(boost::any_cast<bool>(m["ReRunable"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("RunasUserPassword") != m.end() && !m["RunasUserPassword"].empty()) {
      runasUserPassword = make_shared<string>(boost::any_cast<string>(m["RunasUserPassword"]));
    }
    if (m.find("StderrRedirectPath") != m.end() && !m["StderrRedirectPath"].empty()) {
      stderrRedirectPath = make_shared<string>(boost::any_cast<string>(m["StderrRedirectPath"]));
    }
    if (m.find("StdoutRedirectPath") != m.end() && !m["StdoutRedirectPath"].empty()) {
      stdoutRedirectPath = make_shared<string>(boost::any_cast<string>(m["StdoutRedirectPath"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
  }


  virtual ~SubmitJobRequest() = default;
};
class SubmitJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  SubmitJobResponseBody() {}

  explicit SubmitJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitJobResponseBody() = default;
};
class SubmitJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitJobResponseBody> body{};

  SubmitJobResponse() {}

  explicit SubmitJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitJobResponse() = default;
};
class UpgradeClientRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientVersion{};
  shared_ptr<string> clusterId{};

  UpgradeClientRequest() {}

  explicit UpgradeClientRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~UpgradeClientRequest() = default;
};
class UpgradeClientResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeClientResponseBody() {}

  explicit UpgradeClientResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeClientResponseBody() = default;
};
class UpgradeClientResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeClientResponseBody> body{};

  UpgradeClientResponse() {}

  explicit UpgradeClientResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeClientResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeClientResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeClientResponse() = default;
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
  AddNodesResponse addNodesWithOptions(shared_ptr<AddNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddNodesResponse addNodes(shared_ptr<AddNodesRequest> request);
  AddUsersResponse addUsersWithOptions(shared_ptr<AddUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUsersResponse addUsers(shared_ptr<AddUsersRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateJobTemplateResponse createJobTemplateWithOptions(shared_ptr<CreateJobTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobTemplateResponse createJobTemplate(shared_ptr<CreateJobTemplateRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DeleteJobTemplatesResponse deleteJobTemplatesWithOptions(shared_ptr<DeleteJobTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobTemplatesResponse deleteJobTemplates(shared_ptr<DeleteJobTemplatesRequest> request);
  DeleteJobsResponse deleteJobsWithOptions(shared_ptr<DeleteJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobsResponse deleteJobs(shared_ptr<DeleteJobsRequest> request);
  DeleteNodesResponse deleteNodesWithOptions(shared_ptr<DeleteNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNodesResponse deleteNodes(shared_ptr<DeleteNodesRequest> request);
  DeleteUsersResponse deleteUsersWithOptions(shared_ptr<DeleteUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUsersResponse deleteUsers(shared_ptr<DeleteUsersRequest> request);
  DescribeClusterResponse describeClusterWithOptions(shared_ptr<DescribeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterResponse describeCluster(shared_ptr<DescribeClusterRequest> request);
  EditJobTemplateResponse editJobTemplateWithOptions(shared_ptr<EditJobTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditJobTemplateResponse editJobTemplate(shared_ptr<EditJobTemplateRequest> request);
  GetAutoScaleConfigResponse getAutoScaleConfigWithOptions(shared_ptr<GetAutoScaleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAutoScaleConfigResponse getAutoScaleConfig(shared_ptr<GetAutoScaleConfigRequest> request);
  ListClusterLogsResponse listClusterLogsWithOptions(shared_ptr<ListClusterLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterLogsResponse listClusterLogs(shared_ptr<ListClusterLogsRequest> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListCurrentClientVersionResponse listCurrentClientVersionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCurrentClientVersionResponse listCurrentClientVersion();
  ListCustomImagesResponse listCustomImagesWithOptions(shared_ptr<ListCustomImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCustomImagesResponse listCustomImages(shared_ptr<ListCustomImagesRequest> request);
  ListImagesResponse listImagesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesResponse listImages();
  ListJobTemplatesResponse listJobTemplatesWithOptions(shared_ptr<ListJobTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobTemplatesResponse listJobTemplates(shared_ptr<ListJobTemplatesRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<ListJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<ListJobsRequest> request);
  ListNodesResponse listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesResponse listNodes(shared_ptr<ListNodesRequest> request);
  ListNodesNoPagingResponse listNodesNoPagingWithOptions(shared_ptr<ListNodesNoPagingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesNoPagingResponse listNodesNoPaging(shared_ptr<ListNodesNoPagingRequest> request);
  ListPreferredEcsTypesResponse listPreferredEcsTypesWithOptions(shared_ptr<ListPreferredEcsTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPreferredEcsTypesResponse listPreferredEcsTypes(shared_ptr<ListPreferredEcsTypesRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ListSoftwaresResponse listSoftwaresWithOptions(shared_ptr<ListSoftwaresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSoftwaresResponse listSoftwares(shared_ptr<ListSoftwaresRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListVolumesResponse listVolumesWithOptions(shared_ptr<ListVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVolumesResponse listVolumes(shared_ptr<ListVolumesRequest> request);
  ModifyClusterAttributesResponse modifyClusterAttributesWithOptions(shared_ptr<ModifyClusterAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterAttributesResponse modifyClusterAttributes(shared_ptr<ModifyClusterAttributesRequest> request);
  ModifyUserGroupsResponse modifyUserGroupsWithOptions(shared_ptr<ModifyUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserGroupsResponse modifyUserGroups(shared_ptr<ModifyUserGroupsRequest> request);
  ModifyUserPasswordsResponse modifyUserPasswordsWithOptions(shared_ptr<ModifyUserPasswordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserPasswordsResponse modifyUserPasswords(shared_ptr<ModifyUserPasswordsRequest> request);
  RerunJobsResponse rerunJobsWithOptions(shared_ptr<RerunJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RerunJobsResponse rerunJobs(shared_ptr<RerunJobsRequest> request);
  ResetNodesResponse resetNodesWithOptions(shared_ptr<ResetNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetNodesResponse resetNodes(shared_ptr<ResetNodesRequest> request);
  SetAutoScaleConfigResponse setAutoScaleConfigWithOptions(shared_ptr<SetAutoScaleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAutoScaleConfigResponse setAutoScaleConfig(shared_ptr<SetAutoScaleConfigRequest> request);
  SetJobUserResponse setJobUserWithOptions(shared_ptr<SetJobUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetJobUserResponse setJobUser(shared_ptr<SetJobUserRequest> request);
  StopJobsResponse stopJobsWithOptions(shared_ptr<StopJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopJobsResponse stopJobs(shared_ptr<StopJobsRequest> request);
  SubmitJobResponse submitJobWithOptions(shared_ptr<SubmitJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitJobResponse submitJob(shared_ptr<SubmitJobRequest> request);
  UpgradeClientResponse upgradeClientWithOptions(shared_ptr<UpgradeClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeClientResponse upgradeClient(shared_ptr<UpgradeClientRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EHPC20170714

#endif
