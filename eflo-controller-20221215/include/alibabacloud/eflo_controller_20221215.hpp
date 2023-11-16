// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EFLO-CONTROLLER20221215_H_
#define ALIBABACLOUD_EFLO-CONTROLLER20221215_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eflo-controller20221215 {
class ApproveOperationRequest : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> operationType{};

  ApproveOperationRequest() {}

  explicit ApproveOperationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
  }


  virtual ~ApproveOperationRequest() = default;
};
class ApproveOperationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};

  ApproveOperationResponseBody() {}

  explicit ApproveOperationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ApproveOperationResponseBody() = default;
};
class ApproveOperationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApproveOperationResponseBody> body{};

  ApproveOperationResponse() {}

  explicit ApproveOperationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApproveOperationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApproveOperationResponseBody>(model1);
      }
    }
  }


  virtual ~ApproveOperationResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceRegionId{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class CreateClusterRequestComponentsComponentConfig : public Darabonba::Model {
public:
  shared_ptr<boost::any> basicArgs{};
  shared_ptr<vector<boost::any>> nodeUnits{};

  CreateClusterRequestComponentsComponentConfig() {}

  explicit CreateClusterRequestComponentsComponentConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicArgs) {
      res["BasicArgs"] = boost::any(*basicArgs);
    }
    if (nodeUnits) {
      res["NodeUnits"] = boost::any(*nodeUnits);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicArgs") != m.end() && !m["BasicArgs"].empty()) {
      basicArgs = make_shared<boost::any>(boost::any_cast<boost::any>(m["BasicArgs"]));
    }
    if (m.find("NodeUnits") != m.end() && !m["NodeUnits"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["NodeUnits"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeUnits"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      nodeUnits = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~CreateClusterRequestComponentsComponentConfig() = default;
};
class CreateClusterRequestComponents : public Darabonba::Model {
public:
  shared_ptr<CreateClusterRequestComponentsComponentConfig> componentConfig{};
  shared_ptr<string> componentType{};

  CreateClusterRequestComponents() {}

  explicit CreateClusterRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentConfig) {
      res["ComponentConfig"] = componentConfig ? boost::any(componentConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (componentType) {
      res["ComponentType"] = boost::any(*componentType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentConfig") != m.end() && !m["ComponentConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComponentConfig"].type()) {
        CreateClusterRequestComponentsComponentConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComponentConfig"]));
        componentConfig = make_shared<CreateClusterRequestComponentsComponentConfig>(model1);
      }
    }
    if (m.find("ComponentType") != m.end() && !m["ComponentType"].empty()) {
      componentType = make_shared<string>(boost::any_cast<string>(m["ComponentType"]));
    }
  }


  virtual ~CreateClusterRequestComponents() = default;
};
class CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> subnet{};

  CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds() {}

  explicit CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subnet) {
      res["Subnet"] = boost::any(*subnet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Subnet") != m.end() && !m["Subnet"].empty()) {
      subnet = make_shared<string>(boost::any_cast<string>(m["Subnet"]));
    }
  }


  virtual ~CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds() = default;
};
class CreateClusterRequestNetworksIpAllocationPolicyBondPolicy : public Darabonba::Model {
public:
  shared_ptr<string> bondDefaultSubnet{};
  shared_ptr<vector<CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds>> bonds{};

  CreateClusterRequestNetworksIpAllocationPolicyBondPolicy() {}

  explicit CreateClusterRequestNetworksIpAllocationPolicyBondPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bondDefaultSubnet) {
      res["BondDefaultSubnet"] = boost::any(*bondDefaultSubnet);
    }
    if (bonds) {
      vector<boost::any> temp1;
      for(auto item1:*bonds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bonds"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BondDefaultSubnet") != m.end() && !m["BondDefaultSubnet"].empty()) {
      bondDefaultSubnet = make_shared<string>(boost::any_cast<string>(m["BondDefaultSubnet"]));
    }
    if (m.find("Bonds") != m.end() && !m["Bonds"].empty()) {
      if (typeid(vector<boost::any>) == m["Bonds"].type()) {
        vector<CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bonds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bonds = make_shared<vector<CreateClusterRequestNetworksIpAllocationPolicyBondPolicyBonds>>(expect1);
      }
    }
  }


  virtual ~CreateClusterRequestNetworksIpAllocationPolicyBondPolicy() = default;
};
class CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> subnet{};

  CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds() {}

  explicit CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subnet) {
      res["Subnet"] = boost::any(*subnet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Subnet") != m.end() && !m["Subnet"].empty()) {
      subnet = make_shared<string>(boost::any_cast<string>(m["Subnet"]));
    }
  }


  virtual ~CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds() = default;
};
class CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy : public Darabonba::Model {
public:
  shared_ptr<vector<CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds>> bonds{};
  shared_ptr<string> machineType{};

  CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy() {}

  explicit CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bonds) {
      vector<boost::any> temp1;
      for(auto item1:*bonds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bonds"] = boost::any(temp1);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bonds") != m.end() && !m["Bonds"].empty()) {
      if (typeid(vector<boost::any>) == m["Bonds"].type()) {
        vector<CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bonds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bonds = make_shared<vector<CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicyBonds>>(expect1);
      }
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
  }


  virtual ~CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy() = default;
};
class CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> subnet{};

  CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds() {}

  explicit CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subnet) {
      res["Subnet"] = boost::any(*subnet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Subnet") != m.end() && !m["Subnet"].empty()) {
      subnet = make_shared<string>(boost::any_cast<string>(m["Subnet"]));
    }
  }


  virtual ~CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds() = default;
};
class CreateClusterRequestNetworksIpAllocationPolicyNodePolicy : public Darabonba::Model {
public:
  shared_ptr<vector<CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds>> bonds{};
  shared_ptr<string> nodeId{};

  CreateClusterRequestNetworksIpAllocationPolicyNodePolicy() {}

  explicit CreateClusterRequestNetworksIpAllocationPolicyNodePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bonds) {
      vector<boost::any> temp1;
      for(auto item1:*bonds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bonds"] = boost::any(temp1);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bonds") != m.end() && !m["Bonds"].empty()) {
      if (typeid(vector<boost::any>) == m["Bonds"].type()) {
        vector<CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bonds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bonds = make_shared<vector<CreateClusterRequestNetworksIpAllocationPolicyNodePolicyBonds>>(expect1);
      }
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~CreateClusterRequestNetworksIpAllocationPolicyNodePolicy() = default;
};
class CreateClusterRequestNetworksIpAllocationPolicy : public Darabonba::Model {
public:
  shared_ptr<CreateClusterRequestNetworksIpAllocationPolicyBondPolicy> bondPolicy{};
  shared_ptr<vector<CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy>> machineTypePolicy{};
  shared_ptr<vector<CreateClusterRequestNetworksIpAllocationPolicyNodePolicy>> nodePolicy{};

  CreateClusterRequestNetworksIpAllocationPolicy() {}

  explicit CreateClusterRequestNetworksIpAllocationPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bondPolicy) {
      res["BondPolicy"] = bondPolicy ? boost::any(bondPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (machineTypePolicy) {
      vector<boost::any> temp1;
      for(auto item1:*machineTypePolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MachineTypePolicy"] = boost::any(temp1);
    }
    if (nodePolicy) {
      vector<boost::any> temp1;
      for(auto item1:*nodePolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodePolicy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BondPolicy") != m.end() && !m["BondPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["BondPolicy"].type()) {
        CreateClusterRequestNetworksIpAllocationPolicyBondPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BondPolicy"]));
        bondPolicy = make_shared<CreateClusterRequestNetworksIpAllocationPolicyBondPolicy>(model1);
      }
    }
    if (m.find("MachineTypePolicy") != m.end() && !m["MachineTypePolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["MachineTypePolicy"].type()) {
        vector<CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MachineTypePolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        machineTypePolicy = make_shared<vector<CreateClusterRequestNetworksIpAllocationPolicyMachineTypePolicy>>(expect1);
      }
    }
    if (m.find("NodePolicy") != m.end() && !m["NodePolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["NodePolicy"].type()) {
        vector<CreateClusterRequestNetworksIpAllocationPolicyNodePolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodePolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNetworksIpAllocationPolicyNodePolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodePolicy = make_shared<vector<CreateClusterRequestNetworksIpAllocationPolicyNodePolicy>>(expect1);
      }
    }
  }


  virtual ~CreateClusterRequestNetworksIpAllocationPolicy() = default;
};
class CreateClusterRequestNetworksNewVpdInfoVpdSubnets : public Darabonba::Model {
public:
  shared_ptr<string> subnetCidr{};
  shared_ptr<string> subnetType{};
  shared_ptr<string> zoneId{};

  CreateClusterRequestNetworksNewVpdInfoVpdSubnets() {}

  explicit CreateClusterRequestNetworksNewVpdInfoVpdSubnets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subnetCidr) {
      res["SubnetCidr"] = boost::any(*subnetCidr);
    }
    if (subnetType) {
      res["SubnetType"] = boost::any(*subnetType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubnetCidr") != m.end() && !m["SubnetCidr"].empty()) {
      subnetCidr = make_shared<string>(boost::any_cast<string>(m["SubnetCidr"]));
    }
    if (m.find("SubnetType") != m.end() && !m["SubnetType"].empty()) {
      subnetType = make_shared<string>(boost::any_cast<string>(m["SubnetType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateClusterRequestNetworksNewVpdInfoVpdSubnets() = default;
};
class CreateClusterRequestNetworksNewVpdInfo : public Darabonba::Model {
public:
  shared_ptr<string> cenId{};
  shared_ptr<string> cloudLinkCidr{};
  shared_ptr<string> cloudLinkId{};
  shared_ptr<string> monitorVpcId{};
  shared_ptr<string> monitorVswitchId{};
  shared_ptr<string> vpdCidr{};
  shared_ptr<vector<CreateClusterRequestNetworksNewVpdInfoVpdSubnets>> vpdSubnets{};

  CreateClusterRequestNetworksNewVpdInfo() {}

  explicit CreateClusterRequestNetworksNewVpdInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (cloudLinkCidr) {
      res["CloudLinkCidr"] = boost::any(*cloudLinkCidr);
    }
    if (cloudLinkId) {
      res["CloudLinkId"] = boost::any(*cloudLinkId);
    }
    if (monitorVpcId) {
      res["MonitorVpcId"] = boost::any(*monitorVpcId);
    }
    if (monitorVswitchId) {
      res["MonitorVswitchId"] = boost::any(*monitorVswitchId);
    }
    if (vpdCidr) {
      res["VpdCidr"] = boost::any(*vpdCidr);
    }
    if (vpdSubnets) {
      vector<boost::any> temp1;
      for(auto item1:*vpdSubnets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpdSubnets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("CloudLinkCidr") != m.end() && !m["CloudLinkCidr"].empty()) {
      cloudLinkCidr = make_shared<string>(boost::any_cast<string>(m["CloudLinkCidr"]));
    }
    if (m.find("CloudLinkId") != m.end() && !m["CloudLinkId"].empty()) {
      cloudLinkId = make_shared<string>(boost::any_cast<string>(m["CloudLinkId"]));
    }
    if (m.find("MonitorVpcId") != m.end() && !m["MonitorVpcId"].empty()) {
      monitorVpcId = make_shared<string>(boost::any_cast<string>(m["MonitorVpcId"]));
    }
    if (m.find("MonitorVswitchId") != m.end() && !m["MonitorVswitchId"].empty()) {
      monitorVswitchId = make_shared<string>(boost::any_cast<string>(m["MonitorVswitchId"]));
    }
    if (m.find("VpdCidr") != m.end() && !m["VpdCidr"].empty()) {
      vpdCidr = make_shared<string>(boost::any_cast<string>(m["VpdCidr"]));
    }
    if (m.find("VpdSubnets") != m.end() && !m["VpdSubnets"].empty()) {
      if (typeid(vector<boost::any>) == m["VpdSubnets"].type()) {
        vector<CreateClusterRequestNetworksNewVpdInfoVpdSubnets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpdSubnets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNetworksNewVpdInfoVpdSubnets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpdSubnets = make_shared<vector<CreateClusterRequestNetworksNewVpdInfoVpdSubnets>>(expect1);
      }
    }
  }


  virtual ~CreateClusterRequestNetworksNewVpdInfo() = default;
};
class CreateClusterRequestNetworksVpdInfo : public Darabonba::Model {
public:
  shared_ptr<string> vpdId{};
  shared_ptr<vector<string>> vpdSubnets{};

  CreateClusterRequestNetworksVpdInfo() {}

  explicit CreateClusterRequestNetworksVpdInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    if (vpdSubnets) {
      res["VpdSubnets"] = boost::any(*vpdSubnets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
    if (m.find("VpdSubnets") != m.end() && !m["VpdSubnets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpdSubnets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpdSubnets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpdSubnets = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateClusterRequestNetworksVpdInfo() = default;
};
class CreateClusterRequestNetworks : public Darabonba::Model {
public:
  shared_ptr<vector<CreateClusterRequestNetworksIpAllocationPolicy>> ipAllocationPolicy{};
  shared_ptr<CreateClusterRequestNetworksNewVpdInfo> newVpdInfo{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchZoneId{};
  shared_ptr<CreateClusterRequestNetworksVpdInfo> vpdInfo{};

  CreateClusterRequestNetworks() {}

  explicit CreateClusterRequestNetworks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipAllocationPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*ipAllocationPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpAllocationPolicy"] = boost::any(temp1);
    }
    if (newVpdInfo) {
      res["NewVpdInfo"] = newVpdInfo ? boost::any(newVpdInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchZoneId) {
      res["VSwitchZoneId"] = boost::any(*vSwitchZoneId);
    }
    if (vpdInfo) {
      res["VpdInfo"] = vpdInfo ? boost::any(vpdInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpAllocationPolicy") != m.end() && !m["IpAllocationPolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["IpAllocationPolicy"].type()) {
        vector<CreateClusterRequestNetworksIpAllocationPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpAllocationPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNetworksIpAllocationPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipAllocationPolicy = make_shared<vector<CreateClusterRequestNetworksIpAllocationPolicy>>(expect1);
      }
    }
    if (m.find("NewVpdInfo") != m.end() && !m["NewVpdInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["NewVpdInfo"].type()) {
        CreateClusterRequestNetworksNewVpdInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NewVpdInfo"]));
        newVpdInfo = make_shared<CreateClusterRequestNetworksNewVpdInfo>(model1);
      }
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchZoneId") != m.end() && !m["VSwitchZoneId"].empty()) {
      vSwitchZoneId = make_shared<string>(boost::any_cast<string>(m["VSwitchZoneId"]));
    }
    if (m.find("VpdInfo") != m.end() && !m["VpdInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpdInfo"].type()) {
        CreateClusterRequestNetworksVpdInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpdInfo"]));
        vpdInfo = make_shared<CreateClusterRequestNetworksVpdInfo>(model1);
      }
    }
  }


  virtual ~CreateClusterRequestNetworks() = default;
};
class CreateClusterRequestNodeGroupsNodes : public Darabonba::Model {
public:
  shared_ptr<string> hostname{};
  shared_ptr<string> loginPassword{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateClusterRequestNodeGroupsNodes() {}

  explicit CreateClusterRequestNodeGroupsNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (loginPassword) {
      res["LoginPassword"] = boost::any(*loginPassword);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("LoginPassword") != m.end() && !m["LoginPassword"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["LoginPassword"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateClusterRequestNodeGroupsNodes() = default;
};
class CreateClusterRequestNodeGroups : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> machineType{};
  shared_ptr<string> nodeGroupDescription{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<vector<CreateClusterRequestNodeGroupsNodes>> nodes{};
  shared_ptr<string> userData{};
  shared_ptr<string> zoneId{};

  CreateClusterRequestNodeGroups() {}

  explicit CreateClusterRequestNodeGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (nodeGroupDescription) {
      res["NodeGroupDescription"] = boost::any(*nodeGroupDescription);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("NodeGroupDescription") != m.end() && !m["NodeGroupDescription"].empty()) {
      nodeGroupDescription = make_shared<string>(boost::any_cast<string>(m["NodeGroupDescription"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<CreateClusterRequestNodeGroupsNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNodeGroupsNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<CreateClusterRequestNodeGroupsNodes>>(expect1);
      }
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateClusterRequestNodeGroups() = default;
};
class CreateClusterRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateClusterRequestTag() {}

  explicit CreateClusterRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateClusterRequestTag() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<vector<CreateClusterRequestComponents>> components{};
  shared_ptr<string> hpnZone{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<CreateClusterRequestNetworks> networks{};
  shared_ptr<vector<string>> nimizVSwitches{};
  shared_ptr<vector<CreateClusterRequestNodeGroups>> nodeGroups{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateClusterRequestTag>> tag{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterDescription) {
      res["ClusterDescription"] = boost::any(*clusterDescription);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (networks) {
      res["Networks"] = networks ? boost::any(networks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nimizVSwitches) {
      res["NimizVSwitches"] = boost::any(*nimizVSwitches);
    }
    if (nodeGroups) {
      vector<boost::any> temp1;
      for(auto item1:*nodeGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeGroups"] = boost::any(temp1);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterDescription") != m.end() && !m["ClusterDescription"].empty()) {
      clusterDescription = make_shared<string>(boost::any_cast<string>(m["ClusterDescription"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<CreateClusterRequestComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<CreateClusterRequestComponents>>(expect1);
      }
    }
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("Networks") != m.end() && !m["Networks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Networks"].type()) {
        CreateClusterRequestNetworks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Networks"]));
        networks = make_shared<CreateClusterRequestNetworks>(model1);
      }
    }
    if (m.find("NimizVSwitches") != m.end() && !m["NimizVSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NimizVSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NimizVSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nimizVSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NodeGroups") != m.end() && !m["NodeGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeGroups"].type()) {
        vector<CreateClusterRequestNodeGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNodeGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeGroups = make_shared<vector<CreateClusterRequestNodeGroups>>(expect1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateClusterRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateClusterRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateClusterShrinkRequestTag() {}

  explicit CreateClusterShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateClusterShrinkRequestTag() = default;
};
class CreateClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> componentsShrink{};
  shared_ptr<string> hpnZone{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<string> networksShrink{};
  shared_ptr<string> nimizVSwitchesShrink{};
  shared_ptr<string> nodeGroupsShrink{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateClusterShrinkRequestTag>> tag{};

  CreateClusterShrinkRequest() {}

  explicit CreateClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterDescription) {
      res["ClusterDescription"] = boost::any(*clusterDescription);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (componentsShrink) {
      res["Components"] = boost::any(*componentsShrink);
    }
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (networksShrink) {
      res["Networks"] = boost::any(*networksShrink);
    }
    if (nimizVSwitchesShrink) {
      res["NimizVSwitches"] = boost::any(*nimizVSwitchesShrink);
    }
    if (nodeGroupsShrink) {
      res["NodeGroups"] = boost::any(*nodeGroupsShrink);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterDescription") != m.end() && !m["ClusterDescription"].empty()) {
      clusterDescription = make_shared<string>(boost::any_cast<string>(m["ClusterDescription"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      componentsShrink = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("Networks") != m.end() && !m["Networks"].empty()) {
      networksShrink = make_shared<string>(boost::any_cast<string>(m["Networks"]));
    }
    if (m.find("NimizVSwitches") != m.end() && !m["NimizVSwitches"].empty()) {
      nimizVSwitchesShrink = make_shared<string>(boost::any_cast<string>(m["NimizVSwitches"]));
    }
    if (m.find("NodeGroups") != m.end() && !m["NodeGroups"].empty()) {
      nodeGroupsShrink = make_shared<string>(boost::any_cast<string>(m["NodeGroups"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateClusterShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateClusterShrinkRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateClusterShrinkRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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
class DescribeClusterResponseBodyComponents : public Darabonba::Model {
public:
  shared_ptr<string> componentId{};
  shared_ptr<string> componentType{};

  DescribeClusterResponseBodyComponents() {}

  explicit DescribeClusterResponseBodyComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentId) {
      res["ComponentId"] = boost::any(*componentId);
    }
    if (componentType) {
      res["ComponentType"] = boost::any(*componentType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentId") != m.end() && !m["ComponentId"].empty()) {
      componentId = make_shared<string>(boost::any_cast<string>(m["ComponentId"]));
    }
    if (m.find("ComponentType") != m.end() && !m["ComponentType"].empty()) {
      componentType = make_shared<string>(boost::any_cast<string>(m["ComponentType"]));
    }
  }


  virtual ~DescribeClusterResponseBodyComponents() = default;
};
class DescribeClusterResponseBodyNetworks : public Darabonba::Model {
public:
  shared_ptr<string> vpdId{};

  DescribeClusterResponseBodyNetworks() {}

  explicit DescribeClusterResponseBodyNetworks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~DescribeClusterResponseBodyNetworks() = default;
};
class DescribeClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<vector<DescribeClusterResponseBodyComponents>> components{};
  shared_ptr<string> createTime{};
  shared_ptr<string> hpnZone{};
  shared_ptr<vector<DescribeClusterResponseBodyNetworks>> networks{};
  shared_ptr<long> nodeCount{};
  shared_ptr<long> nodeGroupCount{};
  shared_ptr<string> operatingState{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> vpcId{};

  DescribeClusterResponseBody() {}

  explicit DescribeClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterDescription) {
      res["ClusterDescription"] = boost::any(*clusterDescription);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (networks) {
      vector<boost::any> temp1;
      for(auto item1:*networks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Networks"] = boost::any(temp1);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeGroupCount) {
      res["NodeGroupCount"] = boost::any(*nodeGroupCount);
    }
    if (operatingState) {
      res["OperatingState"] = boost::any(*operatingState);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterDescription") != m.end() && !m["ClusterDescription"].empty()) {
      clusterDescription = make_shared<string>(boost::any_cast<string>(m["ClusterDescription"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<DescribeClusterResponseBodyComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterResponseBodyComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<DescribeClusterResponseBodyComponents>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("Networks") != m.end() && !m["Networks"].empty()) {
      if (typeid(vector<boost::any>) == m["Networks"].type()) {
        vector<DescribeClusterResponseBodyNetworks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Networks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterResponseBodyNetworks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networks = make_shared<vector<DescribeClusterResponseBodyNetworks>>(expect1);
      }
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("NodeGroupCount") != m.end() && !m["NodeGroupCount"].empty()) {
      nodeGroupCount = make_shared<long>(boost::any_cast<long>(m["NodeGroupCount"]));
    }
    if (m.find("OperatingState") != m.end() && !m["OperatingState"].empty()) {
      operatingState = make_shared<string>(boost::any_cast<string>(m["OperatingState"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
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
class DescribeNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};

  DescribeNodeRequest() {}

  explicit DescribeNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DescribeNodeRequest() = default;
};
class DescribeNodeResponseBodyNetworks : public Darabonba::Model {
public:
  shared_ptr<string> bondName{};
  shared_ptr<string> ip{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> vpdId{};

  DescribeNodeResponseBodyNetworks() {}

  explicit DescribeNodeResponseBodyNetworks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bondName) {
      res["BondName"] = boost::any(*bondName);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BondName") != m.end() && !m["BondName"].empty()) {
      bondName = make_shared<string>(boost::any_cast<string>(m["BondName"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~DescribeNodeResponseBodyNetworks() = default;
};
class DescribeNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> hostname{};
  shared_ptr<string> hpnZone{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> machineType{};
  shared_ptr<vector<DescribeNodeResponseBodyNetworks>> networks{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> operatingState{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sn{};
  shared_ptr<string> zoneId{};

  DescribeNodeResponseBody() {}

  explicit DescribeNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (networks) {
      vector<boost::any> temp1;
      for(auto item1:*networks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Networks"] = boost::any(temp1);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (operatingState) {
      res["OperatingState"] = boost::any(*operatingState);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("Networks") != m.end() && !m["Networks"].empty()) {
      if (typeid(vector<boost::any>) == m["Networks"].type()) {
        vector<DescribeNodeResponseBodyNetworks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Networks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNodeResponseBodyNetworks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networks = make_shared<vector<DescribeNodeResponseBodyNetworks>>(expect1);
      }
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OperatingState") != m.end() && !m["OperatingState"].empty()) {
      operatingState = make_shared<string>(boost::any_cast<string>(m["OperatingState"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeNodeResponseBody() = default;
};
class DescribeNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNodeResponseBody> body{};

  DescribeNodeResponse() {}

  explicit DescribeNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNodeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNodeResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  DescribeTaskRequest() {}

  explicit DescribeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeTaskRequest() = default;
};
class DescribeTaskResponseBodyStepsSubTasks : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> message{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskState{};
  shared_ptr<string> taskType{};
  shared_ptr<string> updateTime{};

  DescribeTaskResponseBodyStepsSubTasks() {}

  explicit DescribeTaskResponseBodyStepsSubTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskState) {
      res["TaskState"] = boost::any(*taskState);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskState") != m.end() && !m["TaskState"].empty()) {
      taskState = make_shared<string>(boost::any_cast<string>(m["TaskState"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeTaskResponseBodyStepsSubTasks() = default;
};
class DescribeTaskResponseBodySteps : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> stageTag{};
  shared_ptr<string> startTime{};
  shared_ptr<string> stepName{};
  shared_ptr<string> stepState{};
  shared_ptr<string> stepType{};
  shared_ptr<vector<DescribeTaskResponseBodyStepsSubTasks>> subTasks{};
  shared_ptr<string> updateTime{};

  DescribeTaskResponseBodySteps() {}

  explicit DescribeTaskResponseBodySteps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (stageTag) {
      res["StageTag"] = boost::any(*stageTag);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (stepName) {
      res["StepName"] = boost::any(*stepName);
    }
    if (stepState) {
      res["StepState"] = boost::any(*stepState);
    }
    if (stepType) {
      res["StepType"] = boost::any(*stepType);
    }
    if (subTasks) {
      vector<boost::any> temp1;
      for(auto item1:*subTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubTasks"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("StageTag") != m.end() && !m["StageTag"].empty()) {
      stageTag = make_shared<string>(boost::any_cast<string>(m["StageTag"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StepName") != m.end() && !m["StepName"].empty()) {
      stepName = make_shared<string>(boost::any_cast<string>(m["StepName"]));
    }
    if (m.find("StepState") != m.end() && !m["StepState"].empty()) {
      stepState = make_shared<string>(boost::any_cast<string>(m["StepState"]));
    }
    if (m.find("StepType") != m.end() && !m["StepType"].empty()) {
      stepType = make_shared<string>(boost::any_cast<string>(m["StepType"]));
    }
    if (m.find("SubTasks") != m.end() && !m["SubTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["SubTasks"].type()) {
        vector<DescribeTaskResponseBodyStepsSubTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTaskResponseBodyStepsSubTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subTasks = make_shared<vector<DescribeTaskResponseBodyStepsSubTasks>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeTaskResponseBodySteps() = default;
};
class DescribeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> message{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeTaskResponseBodySteps>> steps{};
  shared_ptr<string> taskState{};
  shared_ptr<string> taskType{};
  shared_ptr<string> updateTime{};

  DescribeTaskResponseBody() {}

  explicit DescribeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (steps) {
      vector<boost::any> temp1;
      for(auto item1:*steps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Steps"] = boost::any(temp1);
    }
    if (taskState) {
      res["TaskState"] = boost::any(*taskState);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Steps") != m.end() && !m["Steps"].empty()) {
      if (typeid(vector<boost::any>) == m["Steps"].type()) {
        vector<DescribeTaskResponseBodySteps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Steps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTaskResponseBodySteps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        steps = make_shared<vector<DescribeTaskResponseBodySteps>>(expect1);
      }
    }
    if (m.find("TaskState") != m.end() && !m["TaskState"].empty()) {
      taskState = make_shared<string>(boost::any_cast<string>(m["TaskState"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeTaskResponseBody() = default;
};
class DescribeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTaskResponseBody> body{};

  DescribeTaskResponse() {}

  explicit DescribeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTaskResponse() = default;
};
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  DescribeZonesResponseBodyZones() {}

  explicit DescribeZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZones() = default;
};
class DescribeZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeZonesResponseBodyZones>> zones{};

  DescribeZonesResponseBody() {}

  explicit DescribeZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<DescribeZonesResponseBodyZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<DescribeZonesResponseBodyZones>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBody() = default;
};
class DescribeZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeZonesResponseBody> body{};

  DescribeZonesResponse() {}

  explicit DescribeZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponse() = default;
};
class ExtendClusterRequestIpAllocationPolicyBondPolicyBonds : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> subnet{};

  ExtendClusterRequestIpAllocationPolicyBondPolicyBonds() {}

  explicit ExtendClusterRequestIpAllocationPolicyBondPolicyBonds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subnet) {
      res["Subnet"] = boost::any(*subnet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Subnet") != m.end() && !m["Subnet"].empty()) {
      subnet = make_shared<string>(boost::any_cast<string>(m["Subnet"]));
    }
  }


  virtual ~ExtendClusterRequestIpAllocationPolicyBondPolicyBonds() = default;
};
class ExtendClusterRequestIpAllocationPolicyBondPolicy : public Darabonba::Model {
public:
  shared_ptr<string> bondDefaultSubnet{};
  shared_ptr<vector<ExtendClusterRequestIpAllocationPolicyBondPolicyBonds>> bonds{};

  ExtendClusterRequestIpAllocationPolicyBondPolicy() {}

  explicit ExtendClusterRequestIpAllocationPolicyBondPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bondDefaultSubnet) {
      res["BondDefaultSubnet"] = boost::any(*bondDefaultSubnet);
    }
    if (bonds) {
      vector<boost::any> temp1;
      for(auto item1:*bonds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bonds"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BondDefaultSubnet") != m.end() && !m["BondDefaultSubnet"].empty()) {
      bondDefaultSubnet = make_shared<string>(boost::any_cast<string>(m["BondDefaultSubnet"]));
    }
    if (m.find("Bonds") != m.end() && !m["Bonds"].empty()) {
      if (typeid(vector<boost::any>) == m["Bonds"].type()) {
        vector<ExtendClusterRequestIpAllocationPolicyBondPolicyBonds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bonds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestIpAllocationPolicyBondPolicyBonds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bonds = make_shared<vector<ExtendClusterRequestIpAllocationPolicyBondPolicyBonds>>(expect1);
      }
    }
  }


  virtual ~ExtendClusterRequestIpAllocationPolicyBondPolicy() = default;
};
class ExtendClusterRequestIpAllocationPolicyMachineTypePolicyBonds : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> subnet{};

  ExtendClusterRequestIpAllocationPolicyMachineTypePolicyBonds() {}

  explicit ExtendClusterRequestIpAllocationPolicyMachineTypePolicyBonds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subnet) {
      res["Subnet"] = boost::any(*subnet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Subnet") != m.end() && !m["Subnet"].empty()) {
      subnet = make_shared<string>(boost::any_cast<string>(m["Subnet"]));
    }
  }


  virtual ~ExtendClusterRequestIpAllocationPolicyMachineTypePolicyBonds() = default;
};
class ExtendClusterRequestIpAllocationPolicyMachineTypePolicy : public Darabonba::Model {
public:
  shared_ptr<vector<ExtendClusterRequestIpAllocationPolicyMachineTypePolicyBonds>> bonds{};
  shared_ptr<string> machineType{};

  ExtendClusterRequestIpAllocationPolicyMachineTypePolicy() {}

  explicit ExtendClusterRequestIpAllocationPolicyMachineTypePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bonds) {
      vector<boost::any> temp1;
      for(auto item1:*bonds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bonds"] = boost::any(temp1);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bonds") != m.end() && !m["Bonds"].empty()) {
      if (typeid(vector<boost::any>) == m["Bonds"].type()) {
        vector<ExtendClusterRequestIpAllocationPolicyMachineTypePolicyBonds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bonds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestIpAllocationPolicyMachineTypePolicyBonds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bonds = make_shared<vector<ExtendClusterRequestIpAllocationPolicyMachineTypePolicyBonds>>(expect1);
      }
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
  }


  virtual ~ExtendClusterRequestIpAllocationPolicyMachineTypePolicy() = default;
};
class ExtendClusterRequestIpAllocationPolicyNodePolicyBonds : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> subnet{};

  ExtendClusterRequestIpAllocationPolicyNodePolicyBonds() {}

  explicit ExtendClusterRequestIpAllocationPolicyNodePolicyBonds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subnet) {
      res["Subnet"] = boost::any(*subnet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Subnet") != m.end() && !m["Subnet"].empty()) {
      subnet = make_shared<string>(boost::any_cast<string>(m["Subnet"]));
    }
  }


  virtual ~ExtendClusterRequestIpAllocationPolicyNodePolicyBonds() = default;
};
class ExtendClusterRequestIpAllocationPolicyNodePolicy : public Darabonba::Model {
public:
  shared_ptr<vector<ExtendClusterRequestIpAllocationPolicyNodePolicyBonds>> bonds{};
  shared_ptr<string> nodeId{};

  ExtendClusterRequestIpAllocationPolicyNodePolicy() {}

  explicit ExtendClusterRequestIpAllocationPolicyNodePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bonds) {
      vector<boost::any> temp1;
      for(auto item1:*bonds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bonds"] = boost::any(temp1);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bonds") != m.end() && !m["Bonds"].empty()) {
      if (typeid(vector<boost::any>) == m["Bonds"].type()) {
        vector<ExtendClusterRequestIpAllocationPolicyNodePolicyBonds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bonds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestIpAllocationPolicyNodePolicyBonds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bonds = make_shared<vector<ExtendClusterRequestIpAllocationPolicyNodePolicyBonds>>(expect1);
      }
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~ExtendClusterRequestIpAllocationPolicyNodePolicy() = default;
};
class ExtendClusterRequestIpAllocationPolicy : public Darabonba::Model {
public:
  shared_ptr<ExtendClusterRequestIpAllocationPolicyBondPolicy> bondPolicy{};
  shared_ptr<vector<ExtendClusterRequestIpAllocationPolicyMachineTypePolicy>> machineTypePolicy{};
  shared_ptr<vector<ExtendClusterRequestIpAllocationPolicyNodePolicy>> nodePolicy{};

  ExtendClusterRequestIpAllocationPolicy() {}

  explicit ExtendClusterRequestIpAllocationPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bondPolicy) {
      res["BondPolicy"] = bondPolicy ? boost::any(bondPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (machineTypePolicy) {
      vector<boost::any> temp1;
      for(auto item1:*machineTypePolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MachineTypePolicy"] = boost::any(temp1);
    }
    if (nodePolicy) {
      vector<boost::any> temp1;
      for(auto item1:*nodePolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodePolicy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BondPolicy") != m.end() && !m["BondPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["BondPolicy"].type()) {
        ExtendClusterRequestIpAllocationPolicyBondPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BondPolicy"]));
        bondPolicy = make_shared<ExtendClusterRequestIpAllocationPolicyBondPolicy>(model1);
      }
    }
    if (m.find("MachineTypePolicy") != m.end() && !m["MachineTypePolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["MachineTypePolicy"].type()) {
        vector<ExtendClusterRequestIpAllocationPolicyMachineTypePolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MachineTypePolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestIpAllocationPolicyMachineTypePolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        machineTypePolicy = make_shared<vector<ExtendClusterRequestIpAllocationPolicyMachineTypePolicy>>(expect1);
      }
    }
    if (m.find("NodePolicy") != m.end() && !m["NodePolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["NodePolicy"].type()) {
        vector<ExtendClusterRequestIpAllocationPolicyNodePolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodePolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestIpAllocationPolicyNodePolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodePolicy = make_shared<vector<ExtendClusterRequestIpAllocationPolicyNodePolicy>>(expect1);
      }
    }
  }


  virtual ~ExtendClusterRequestIpAllocationPolicy() = default;
};
class ExtendClusterRequestNodeGroupsNodes : public Darabonba::Model {
public:
  shared_ptr<string> hostname{};
  shared_ptr<string> loginPassword{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ExtendClusterRequestNodeGroupsNodes() {}

  explicit ExtendClusterRequestNodeGroupsNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (loginPassword) {
      res["LoginPassword"] = boost::any(*loginPassword);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("LoginPassword") != m.end() && !m["LoginPassword"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["LoginPassword"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ExtendClusterRequestNodeGroupsNodes() = default;
};
class ExtendClusterRequestNodeGroups : public Darabonba::Model {
public:
  shared_ptr<string> nodeGroupId{};
  shared_ptr<vector<ExtendClusterRequestNodeGroupsNodes>> nodes{};
  shared_ptr<string> userData{};
  shared_ptr<string> zoneId{};

  ExtendClusterRequestNodeGroups() {}

  explicit ExtendClusterRequestNodeGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ExtendClusterRequestNodeGroupsNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestNodeGroupsNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ExtendClusterRequestNodeGroupsNodes>>(expect1);
      }
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ExtendClusterRequestNodeGroups() = default;
};
class ExtendClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<vector<ExtendClusterRequestIpAllocationPolicy>> ipAllocationPolicy{};
  shared_ptr<vector<ExtendClusterRequestNodeGroups>> nodeGroups{};
  shared_ptr<string> vSwitchZoneId{};
  shared_ptr<vector<string>> vpdSubnets{};

  ExtendClusterRequest() {}

  explicit ExtendClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (ipAllocationPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*ipAllocationPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpAllocationPolicy"] = boost::any(temp1);
    }
    if (nodeGroups) {
      vector<boost::any> temp1;
      for(auto item1:*nodeGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeGroups"] = boost::any(temp1);
    }
    if (vSwitchZoneId) {
      res["VSwitchZoneId"] = boost::any(*vSwitchZoneId);
    }
    if (vpdSubnets) {
      res["VpdSubnets"] = boost::any(*vpdSubnets);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("IpAllocationPolicy") != m.end() && !m["IpAllocationPolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["IpAllocationPolicy"].type()) {
        vector<ExtendClusterRequestIpAllocationPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpAllocationPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestIpAllocationPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipAllocationPolicy = make_shared<vector<ExtendClusterRequestIpAllocationPolicy>>(expect1);
      }
    }
    if (m.find("NodeGroups") != m.end() && !m["NodeGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeGroups"].type()) {
        vector<ExtendClusterRequestNodeGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestNodeGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeGroups = make_shared<vector<ExtendClusterRequestNodeGroups>>(expect1);
      }
    }
    if (m.find("VSwitchZoneId") != m.end() && !m["VSwitchZoneId"].empty()) {
      vSwitchZoneId = make_shared<string>(boost::any_cast<string>(m["VSwitchZoneId"]));
    }
    if (m.find("VpdSubnets") != m.end() && !m["VpdSubnets"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpdSubnets"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpdSubnets"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpdSubnets = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ExtendClusterRequest() = default;
};
class ExtendClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<string> ipAllocationPolicyShrink{};
  shared_ptr<string> nodeGroupsShrink{};
  shared_ptr<string> vSwitchZoneId{};
  shared_ptr<string> vpdSubnetsShrink{};

  ExtendClusterShrinkRequest() {}

  explicit ExtendClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (ipAllocationPolicyShrink) {
      res["IpAllocationPolicy"] = boost::any(*ipAllocationPolicyShrink);
    }
    if (nodeGroupsShrink) {
      res["NodeGroups"] = boost::any(*nodeGroupsShrink);
    }
    if (vSwitchZoneId) {
      res["VSwitchZoneId"] = boost::any(*vSwitchZoneId);
    }
    if (vpdSubnetsShrink) {
      res["VpdSubnets"] = boost::any(*vpdSubnetsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("IpAllocationPolicy") != m.end() && !m["IpAllocationPolicy"].empty()) {
      ipAllocationPolicyShrink = make_shared<string>(boost::any_cast<string>(m["IpAllocationPolicy"]));
    }
    if (m.find("NodeGroups") != m.end() && !m["NodeGroups"].empty()) {
      nodeGroupsShrink = make_shared<string>(boost::any_cast<string>(m["NodeGroups"]));
    }
    if (m.find("VSwitchZoneId") != m.end() && !m["VSwitchZoneId"].empty()) {
      vSwitchZoneId = make_shared<string>(boost::any_cast<string>(m["VSwitchZoneId"]));
    }
    if (m.find("VpdSubnets") != m.end() && !m["VpdSubnets"].empty()) {
      vpdSubnetsShrink = make_shared<string>(boost::any_cast<string>(m["VpdSubnets"]));
    }
  }


  virtual ~ExtendClusterShrinkRequest() = default;
};
class ExtendClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ExtendClusterResponseBody() {}

  explicit ExtendClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExtendClusterResponseBody() = default;
};
class ExtendClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExtendClusterResponseBody> body{};

  ExtendClusterResponse() {}

  explicit ExtendClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtendClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtendClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ExtendClusterResponse() = default;
};
class ListClusterNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> nodeGroupId{};

  ListClusterNodesRequest() {}

  explicit ListClusterNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
  }


  virtual ~ListClusterNodesRequest() = default;
};
class ListClusterNodesResponseBodyNodesNetworks : public Darabonba::Model {
public:
  shared_ptr<string> bondName{};
  shared_ptr<string> ip{};
  shared_ptr<string> subnetId{};
  shared_ptr<string> vpdId{};

  ListClusterNodesResponseBodyNodesNetworks() {}

  explicit ListClusterNodesResponseBodyNodesNetworks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bondName) {
      res["BondName"] = boost::any(*bondName);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (subnetId) {
      res["SubnetId"] = boost::any(*subnetId);
    }
    if (vpdId) {
      res["VpdId"] = boost::any(*vpdId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BondName") != m.end() && !m["BondName"].empty()) {
      bondName = make_shared<string>(boost::any_cast<string>(m["BondName"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("SubnetId") != m.end() && !m["SubnetId"].empty()) {
      subnetId = make_shared<string>(boost::any_cast<string>(m["SubnetId"]));
    }
    if (m.find("VpdId") != m.end() && !m["VpdId"].empty()) {
      vpdId = make_shared<string>(boost::any_cast<string>(m["VpdId"]));
    }
  }


  virtual ~ListClusterNodesResponseBodyNodesNetworks() = default;
};
class ListClusterNodesResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> hostname{};
  shared_ptr<string> hpnZone{};
  shared_ptr<string> imageId{};
  shared_ptr<string> machineType{};
  shared_ptr<vector<ListClusterNodesResponseBodyNodesNetworks>> networks{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> operatingState{};
  shared_ptr<string> sn{};
  shared_ptr<string> zoneId{};

  ListClusterNodesResponseBodyNodes() {}

  explicit ListClusterNodesResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (networks) {
      vector<boost::any> temp1;
      for(auto item1:*networks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Networks"] = boost::any(temp1);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (operatingState) {
      res["OperatingState"] = boost::any(*operatingState);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("Networks") != m.end() && !m["Networks"].empty()) {
      if (typeid(vector<boost::any>) == m["Networks"].type()) {
        vector<ListClusterNodesResponseBodyNodesNetworks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Networks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterNodesResponseBodyNodesNetworks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networks = make_shared<vector<ListClusterNodesResponseBodyNodesNetworks>>(expect1);
      }
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OperatingState") != m.end() && !m["OperatingState"].empty()) {
      operatingState = make_shared<string>(boost::any_cast<string>(m["OperatingState"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListClusterNodesResponseBodyNodes() = default;
};
class ListClusterNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListClusterNodesResponseBodyNodes>> nodes{};
  shared_ptr<string> requestId{};

  ListClusterNodesResponseBody() {}

  explicit ListClusterNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ListClusterNodesResponseBodyNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterNodesResponseBodyNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListClusterNodesResponseBodyNodes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListClusterNodesResponseBody() = default;
};
class ListClusterNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterNodesResponseBody> body{};

  ListClusterNodesResponse() {}

  explicit ListClusterNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClusterNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterNodesResponse() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<boost::any> components{};
  shared_ptr<string> createTime{};
  shared_ptr<string> hpnZone{};
  shared_ptr<long> nodeCount{};
  shared_ptr<long> nodeGroupCount{};
  shared_ptr<string> operatingState{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> vpcId{};

  ListClustersResponseBodyClusters() {}

  explicit ListClustersResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterDescription) {
      res["ClusterDescription"] = boost::any(*clusterDescription);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (components) {
      res["Components"] = boost::any(*components);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeGroupCount) {
      res["NodeGroupCount"] = boost::any(*nodeGroupCount);
    }
    if (operatingState) {
      res["OperatingState"] = boost::any(*operatingState);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterDescription") != m.end() && !m["ClusterDescription"].empty()) {
      clusterDescription = make_shared<string>(boost::any_cast<string>(m["ClusterDescription"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<boost::any>(boost::any_cast<boost::any>(m["Components"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("NodeGroupCount") != m.end() && !m["NodeGroupCount"].empty()) {
      nodeGroupCount = make_shared<long>(boost::any_cast<long>(m["NodeGroupCount"]));
    }
    if (m.find("OperatingState") != m.end() && !m["OperatingState"].empty()) {
      operatingState = make_shared<string>(boost::any_cast<string>(m["OperatingState"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListClustersResponseBodyClusters() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersResponseBodyClusters>> clusters{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<ListClustersResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<ListClustersResponseBodyClusters>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class ListFreeNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> hpnZone{};
  shared_ptr<string> machineType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};

  ListFreeNodesRequest() {}

  explicit ListFreeNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListFreeNodesRequest() = default;
};
class ListFreeNodesResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> hpnZone{};
  shared_ptr<string> machineType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sn{};
  shared_ptr<string> zoneId{};

  ListFreeNodesResponseBodyNodes() {}

  explicit ListFreeNodesResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListFreeNodesResponseBodyNodes() = default;
};
class ListFreeNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListFreeNodesResponseBodyNodes>> nodes{};
  shared_ptr<string> requestId{};

  ListFreeNodesResponseBody() {}

  explicit ListFreeNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ListFreeNodesResponseBodyNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFreeNodesResponseBodyNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListFreeNodesResponseBodyNodes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFreeNodesResponseBody() = default;
};
class ListFreeNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFreeNodesResponseBody> body{};

  ListFreeNodesResponse() {}

  explicit ListFreeNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFreeNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFreeNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListFreeNodesResponse() = default;
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
class RebootNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<vector<string>> nodes{};

  RebootNodesRequest() {}

  explicit RebootNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Nodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RebootNodesRequest() = default;
};
class RebootNodesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<string> nodesShrink{};

  RebootNodesShrinkRequest() {}

  explicit RebootNodesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (nodesShrink) {
      res["Nodes"] = boost::any(*nodesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodesShrink = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
  }


  virtual ~RebootNodesShrinkRequest() = default;
};
class RebootNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  RebootNodesResponseBody() {}

  explicit RebootNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RebootNodesResponseBody() = default;
};
class RebootNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RebootNodesResponseBody> body{};

  RebootNodesResponse() {}

  explicit RebootNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebootNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebootNodesResponseBody>(model1);
      }
    }
  }


  virtual ~RebootNodesResponse() = default;
};
class ReimageNodesRequestNodes : public Darabonba::Model {
public:
  shared_ptr<string> hostname{};
  shared_ptr<string> imageId{};
  shared_ptr<string> loginPassword{};
  shared_ptr<string> nodeId{};

  ReimageNodesRequestNodes() {}

  explicit ReimageNodesRequestNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (loginPassword) {
      res["LoginPassword"] = boost::any(*loginPassword);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("LoginPassword") != m.end() && !m["LoginPassword"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["LoginPassword"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~ReimageNodesRequestNodes() = default;
};
class ReimageNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<vector<ReimageNodesRequestNodes>> nodes{};
  shared_ptr<string> userData{};

  ReimageNodesRequest() {}

  explicit ReimageNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ReimageNodesRequestNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReimageNodesRequestNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ReimageNodesRequestNodes>>(expect1);
      }
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~ReimageNodesRequest() = default;
};
class ReimageNodesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<string> nodesShrink{};
  shared_ptr<string> userData{};

  ReimageNodesShrinkRequest() {}

  explicit ReimageNodesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (nodesShrink) {
      res["Nodes"] = boost::any(*nodesShrink);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodesShrink = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~ReimageNodesShrinkRequest() = default;
};
class ReimageNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ReimageNodesResponseBody() {}

  explicit ReimageNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReimageNodesResponseBody() = default;
};
class ReimageNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReimageNodesResponseBody> body{};

  ReimageNodesResponse() {}

  explicit ReimageNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReimageNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReimageNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ReimageNodesResponse() = default;
};
class ShrinkClusterRequestNodeGroupsNodes : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};

  ShrinkClusterRequestNodeGroupsNodes() {}

  explicit ShrinkClusterRequestNodeGroupsNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~ShrinkClusterRequestNodeGroupsNodes() = default;
};
class ShrinkClusterRequestNodeGroups : public Darabonba::Model {
public:
  shared_ptr<string> nodeGroupId{};
  shared_ptr<vector<ShrinkClusterRequestNodeGroupsNodes>> nodes{};

  ShrinkClusterRequestNodeGroups() {}

  explicit ShrinkClusterRequestNodeGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ShrinkClusterRequestNodeGroupsNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ShrinkClusterRequestNodeGroupsNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ShrinkClusterRequestNodeGroupsNodes>>(expect1);
      }
    }
  }


  virtual ~ShrinkClusterRequestNodeGroups() = default;
};
class ShrinkClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<vector<ShrinkClusterRequestNodeGroups>> nodeGroups{};

  ShrinkClusterRequest() {}

  explicit ShrinkClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (nodeGroups) {
      vector<boost::any> temp1;
      for(auto item1:*nodeGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("NodeGroups") != m.end() && !m["NodeGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeGroups"].type()) {
        vector<ShrinkClusterRequestNodeGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ShrinkClusterRequestNodeGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeGroups = make_shared<vector<ShrinkClusterRequestNodeGroups>>(expect1);
      }
    }
  }


  virtual ~ShrinkClusterRequest() = default;
};
class ShrinkClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<string> nodeGroupsShrink{};

  ShrinkClusterShrinkRequest() {}

  explicit ShrinkClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (nodeGroupsShrink) {
      res["NodeGroups"] = boost::any(*nodeGroupsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("NodeGroups") != m.end() && !m["NodeGroups"].empty()) {
      nodeGroupsShrink = make_shared<string>(boost::any_cast<string>(m["NodeGroups"]));
    }
  }


  virtual ~ShrinkClusterShrinkRequest() = default;
};
class ShrinkClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ShrinkClusterResponseBody() {}

  explicit ShrinkClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ShrinkClusterResponseBody() = default;
};
class ShrinkClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ShrinkClusterResponseBody> body{};

  ShrinkClusterResponse() {}

  explicit ShrinkClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ShrinkClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ShrinkClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ShrinkClusterResponse() = default;
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
  ApproveOperationResponse approveOperationWithOptions(shared_ptr<ApproveOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApproveOperationResponse approveOperation(shared_ptr<ApproveOperationRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DescribeClusterResponse describeClusterWithOptions(shared_ptr<DescribeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterResponse describeCluster(shared_ptr<DescribeClusterRequest> request);
  DescribeNodeResponse describeNodeWithOptions(shared_ptr<DescribeNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNodeResponse describeNode(shared_ptr<DescribeNodeRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeTaskResponse describeTaskWithOptions(shared_ptr<DescribeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTaskResponse describeTask(shared_ptr<DescribeTaskRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  ExtendClusterResponse extendClusterWithOptions(shared_ptr<ExtendClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtendClusterResponse extendCluster(shared_ptr<ExtendClusterRequest> request);
  ListClusterNodesResponse listClusterNodesWithOptions(shared_ptr<ListClusterNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterNodesResponse listClusterNodes(shared_ptr<ListClusterNodesRequest> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListFreeNodesResponse listFreeNodesWithOptions(shared_ptr<ListFreeNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFreeNodesResponse listFreeNodes(shared_ptr<ListFreeNodesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  RebootNodesResponse rebootNodesWithOptions(shared_ptr<RebootNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebootNodesResponse rebootNodes(shared_ptr<RebootNodesRequest> request);
  ReimageNodesResponse reimageNodesWithOptions(shared_ptr<ReimageNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReimageNodesResponse reimageNodes(shared_ptr<ReimageNodesRequest> request);
  ShrinkClusterResponse shrinkClusterWithOptions(shared_ptr<ShrinkClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ShrinkClusterResponse shrinkCluster(shared_ptr<ShrinkClusterRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eflo-controller20221215

#endif
