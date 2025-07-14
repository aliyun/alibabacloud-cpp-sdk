// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EFLO-CONTROLLER20221215_H_
#define ALIBABACLOUD_EFLO-CONTROLLER20221215_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
  shared_ptr<string> resourceType{};

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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
class CloseSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};
  shared_ptr<string> sessionToken{};

  CloseSessionRequest() {}

  explicit CloseSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sessionToken) {
      res["SessionToken"] = boost::any(*sessionToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SessionToken") != m.end() && !m["SessionToken"].empty()) {
      sessionToken = make_shared<string>(boost::any_cast<string>(m["SessionToken"]));
    }
  }


  virtual ~CloseSessionRequest() = default;
};
class CloseSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> state{};

  CloseSessionResponseBody() {}

  explicit CloseSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~CloseSessionResponseBody() = default;
};
class CloseSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseSessionResponseBody> body{};

  CloseSessionResponse() {}

  explicit CloseSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CloseSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseSessionResponseBody>(model1);
      }
    }
  }


  virtual ~CloseSessionResponse() = default;
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
  shared_ptr<string> tailIpVersion{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchZoneId{};
  shared_ptr<string> vpcId{};
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
    if (tailIpVersion) {
      res["TailIpVersion"] = boost::any(*tailIpVersion);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchZoneId) {
      res["VSwitchZoneId"] = boost::any(*vSwitchZoneId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
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
    if (m.find("TailIpVersion") != m.end() && !m["TailIpVersion"].empty()) {
      tailIpVersion = make_shared<string>(boost::any_cast<string>(m["TailIpVersion"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchZoneId") != m.end() && !m["VSwitchZoneId"].empty()) {
      vSwitchZoneId = make_shared<string>(boost::any_cast<string>(m["VSwitchZoneId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
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
class CreateClusterRequestNodeGroupsNodesDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> deleteWithNode{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  CreateClusterRequestNodeGroupsNodesDataDisk() {}

  explicit CreateClusterRequestNodeGroupsNodesDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (deleteWithNode) {
      res["DeleteWithNode"] = boost::any(*deleteWithNode);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DeleteWithNode") != m.end() && !m["DeleteWithNode"].empty()) {
      deleteWithNode = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithNode"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~CreateClusterRequestNodeGroupsNodesDataDisk() = default;
};
class CreateClusterRequestNodeGroupsNodes : public Darabonba::Model {
public:
  shared_ptr<vector<CreateClusterRequestNodeGroupsNodesDataDisk>> dataDisk{};
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
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
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
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<CreateClusterRequestNodeGroupsNodesDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestNodeGroupsNodesDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<CreateClusterRequestNodeGroupsNodesDataDisk>>(expect1);
      }
    }
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
class CreateClusterRequestNodeGroupsSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  CreateClusterRequestNodeGroupsSystemDisk() {}

  explicit CreateClusterRequestNodeGroupsSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~CreateClusterRequestNodeGroupsSystemDisk() = default;
};
class CreateClusterRequestNodeGroups : public Darabonba::Model {
public:
  shared_ptr<bool> fileSystemMountEnabled{};
  shared_ptr<string> imageId{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> loginPassword{};
  shared_ptr<string> machineType{};
  shared_ptr<string> nodeGroupDescription{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<vector<CreateClusterRequestNodeGroupsNodes>> nodes{};
  shared_ptr<CreateClusterRequestNodeGroupsSystemDisk> systemDisk{};
  shared_ptr<string> userData{};
  shared_ptr<bool> virtualGpuEnabled{};
  shared_ptr<string> zoneId{};

  CreateClusterRequestNodeGroups() {}

  explicit CreateClusterRequestNodeGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemMountEnabled) {
      res["FileSystemMountEnabled"] = boost::any(*fileSystemMountEnabled);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (loginPassword) {
      res["LoginPassword"] = boost::any(*loginPassword);
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
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (virtualGpuEnabled) {
      res["VirtualGpuEnabled"] = boost::any(*virtualGpuEnabled);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemMountEnabled") != m.end() && !m["FileSystemMountEnabled"].empty()) {
      fileSystemMountEnabled = make_shared<bool>(boost::any_cast<bool>(m["FileSystemMountEnabled"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("LoginPassword") != m.end() && !m["LoginPassword"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["LoginPassword"]));
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
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        CreateClusterRequestNodeGroupsSystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<CreateClusterRequestNodeGroupsSystemDisk>(model1);
      }
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("VirtualGpuEnabled") != m.end() && !m["VirtualGpuEnabled"].empty()) {
      virtualGpuEnabled = make_shared<bool>(boost::any_cast<bool>(m["VirtualGpuEnabled"]));
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
  shared_ptr<bool> openEniJumboFrame{};
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
    if (openEniJumboFrame) {
      res["OpenEniJumboFrame"] = boost::any(*openEniJumboFrame);
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
    if (m.find("OpenEniJumboFrame") != m.end() && !m["OpenEniJumboFrame"].empty()) {
      openEniJumboFrame = make_shared<bool>(boost::any_cast<bool>(m["OpenEniJumboFrame"]));
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
  shared_ptr<bool> openEniJumboFrame{};
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
    if (openEniJumboFrame) {
      res["OpenEniJumboFrame"] = boost::any(*openEniJumboFrame);
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
    if (m.find("OpenEniJumboFrame") != m.end() && !m["OpenEniJumboFrame"].empty()) {
      openEniJumboFrame = make_shared<bool>(boost::any_cast<bool>(m["OpenEniJumboFrame"]));
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs : public Darabonba::Model {
public:
  shared_ptr<string> datetime{};
  shared_ptr<string> logContent{};

  CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs() {}

  explicit CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datetime) {
      res["Datetime"] = boost::any(*datetime);
    }
    if (logContent) {
      res["LogContent"] = boost::any(*logContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Datetime") != m.end() && !m["Datetime"].empty()) {
      datetime = make_shared<string>(boost::any_cast<string>(m["Datetime"]));
    }
    if (m.find("LogContent") != m.end() && !m["LogContent"].empty()) {
      logContent = make_shared<string>(boost::any_cast<string>(m["LogContent"]));
    }
  }


  virtual ~CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs() = default;
};
class CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs : public Darabonba::Model {
public:
  shared_ptr<string> aiInstance{};
  shared_ptr<vector<CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs>> logs{};
  shared_ptr<string> nodeId{};

  CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs() {}

  explicit CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiInstance) {
      res["AiInstance"] = boost::any(*aiInstance);
    }
    if (logs) {
      vector<boost::any> temp1;
      for(auto item1:*logs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Logs"] = boost::any(temp1);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AiInstance") != m.end() && !m["AiInstance"].empty()) {
      aiInstance = make_shared<string>(boost::any_cast<string>(m["AiInstance"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Logs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logs = make_shared<vector<CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs>>(expect1);
      }
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs() = default;
};
class CreateDiagnosticTaskRequestAiJobLogInfo : public Darabonba::Model {
public:
  shared_ptr<vector<CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs>> aiJobLogs{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  CreateDiagnosticTaskRequestAiJobLogInfo() {}

  explicit CreateDiagnosticTaskRequestAiJobLogInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiJobLogs) {
      vector<boost::any> temp1;
      for(auto item1:*aiJobLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AiJobLogs"] = boost::any(temp1);
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
    if (m.find("AiJobLogs") != m.end() && !m["AiJobLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["AiJobLogs"].type()) {
        vector<CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AiJobLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aiJobLogs = make_shared<vector<CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs>>(expect1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~CreateDiagnosticTaskRequestAiJobLogInfo() = default;
};
class CreateDiagnosticTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CreateDiagnosticTaskRequestAiJobLogInfo> aiJobLogInfo{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> diagnosticType{};
  shared_ptr<vector<string>> nodeIds{};

  CreateDiagnosticTaskRequest() {}

  explicit CreateDiagnosticTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiJobLogInfo) {
      res["AiJobLogInfo"] = aiJobLogInfo ? boost::any(aiJobLogInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (diagnosticType) {
      res["DiagnosticType"] = boost::any(*diagnosticType);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AiJobLogInfo") != m.end() && !m["AiJobLogInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AiJobLogInfo"].type()) {
        CreateDiagnosticTaskRequestAiJobLogInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AiJobLogInfo"]));
        aiJobLogInfo = make_shared<CreateDiagnosticTaskRequestAiJobLogInfo>(model1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DiagnosticType") != m.end() && !m["DiagnosticType"].empty()) {
      diagnosticType = make_shared<string>(boost::any_cast<string>(m["DiagnosticType"]));
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
  }


  virtual ~CreateDiagnosticTaskRequest() = default;
};
class CreateDiagnosticTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aiJobLogInfoShrink{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> diagnosticType{};
  shared_ptr<string> nodeIdsShrink{};

  CreateDiagnosticTaskShrinkRequest() {}

  explicit CreateDiagnosticTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiJobLogInfoShrink) {
      res["AiJobLogInfo"] = boost::any(*aiJobLogInfoShrink);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (diagnosticType) {
      res["DiagnosticType"] = boost::any(*diagnosticType);
    }
    if (nodeIdsShrink) {
      res["NodeIds"] = boost::any(*nodeIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AiJobLogInfo") != m.end() && !m["AiJobLogInfo"].empty()) {
      aiJobLogInfoShrink = make_shared<string>(boost::any_cast<string>(m["AiJobLogInfo"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DiagnosticType") != m.end() && !m["DiagnosticType"].empty()) {
      diagnosticType = make_shared<string>(boost::any_cast<string>(m["DiagnosticType"]));
    }
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      nodeIdsShrink = make_shared<string>(boost::any_cast<string>(m["NodeIds"]));
    }
  }


  virtual ~CreateDiagnosticTaskShrinkRequest() = default;
};
class CreateDiagnosticTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> diagnosticId{};
  shared_ptr<string> requestId{};

  CreateDiagnosticTaskResponseBody() {}

  explicit CreateDiagnosticTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diagnosticId) {
      res["DiagnosticId"] = boost::any(*diagnosticId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiagnosticId") != m.end() && !m["DiagnosticId"].empty()) {
      diagnosticId = make_shared<string>(boost::any_cast<string>(m["DiagnosticId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDiagnosticTaskResponseBody() = default;
};
class CreateDiagnosticTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDiagnosticTaskResponseBody> body{};

  CreateDiagnosticTaskResponse() {}

  explicit CreateDiagnosticTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDiagnosticTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDiagnosticTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDiagnosticTaskResponse() = default;
};
class CreateNetTestTaskRequestCommTestHosts : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  CreateNetTestTaskRequestCommTestHosts() {}

  explicit CreateNetTestTaskRequestCommTestHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~CreateNetTestTaskRequestCommTestHosts() = default;
};
class CreateNetTestTaskRequestCommTest : public Darabonba::Model {
public:
  shared_ptr<long> GPUNum{};
  shared_ptr<vector<CreateNetTestTaskRequestCommTestHosts>> hosts{};
  shared_ptr<string> model{};
  shared_ptr<string> type{};

  CreateNetTestTaskRequestCommTest() {}

  explicit CreateNetTestTaskRequestCommTest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GPUNum) {
      res["GPUNum"] = boost::any(*GPUNum);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GPUNum") != m.end() && !m["GPUNum"].empty()) {
      GPUNum = make_shared<long>(boost::any_cast<long>(m["GPUNum"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<CreateNetTestTaskRequestCommTestHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNetTestTaskRequestCommTestHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<CreateNetTestTaskRequestCommTestHosts>>(expect1);
      }
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateNetTestTaskRequestCommTest() = default;
};
class CreateNetTestTaskRequestDelayTestHosts : public Darabonba::Model {
public:
  shared_ptr<string> bond{};
  shared_ptr<string> IP{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  CreateNetTestTaskRequestDelayTestHosts() {}

  explicit CreateNetTestTaskRequestDelayTestHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bond) {
      res["Bond"] = boost::any(*bond);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bond") != m.end() && !m["Bond"].empty()) {
      bond = make_shared<string>(boost::any_cast<string>(m["Bond"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~CreateNetTestTaskRequestDelayTestHosts() = default;
};
class CreateNetTestTaskRequestDelayTest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateNetTestTaskRequestDelayTestHosts>> hosts{};

  CreateNetTestTaskRequestDelayTest() {}

  explicit CreateNetTestTaskRequestDelayTest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<CreateNetTestTaskRequestDelayTestHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNetTestTaskRequestDelayTestHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<CreateNetTestTaskRequestDelayTestHosts>>(expect1);
      }
    }
  }


  virtual ~CreateNetTestTaskRequestDelayTest() = default;
};
class CreateNetTestTaskRequestTrafficTestClients : public Darabonba::Model {
public:
  shared_ptr<string> bond{};
  shared_ptr<string> IP{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  CreateNetTestTaskRequestTrafficTestClients() {}

  explicit CreateNetTestTaskRequestTrafficTestClients(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bond) {
      res["Bond"] = boost::any(*bond);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bond") != m.end() && !m["Bond"].empty()) {
      bond = make_shared<string>(boost::any_cast<string>(m["Bond"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~CreateNetTestTaskRequestTrafficTestClients() = default;
};
class CreateNetTestTaskRequestTrafficTestServers : public Darabonba::Model {
public:
  shared_ptr<string> bond{};
  shared_ptr<string> IP{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  CreateNetTestTaskRequestTrafficTestServers() {}

  explicit CreateNetTestTaskRequestTrafficTestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bond) {
      res["Bond"] = boost::any(*bond);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bond") != m.end() && !m["Bond"].empty()) {
      bond = make_shared<string>(boost::any_cast<string>(m["Bond"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~CreateNetTestTaskRequestTrafficTestServers() = default;
};
class CreateNetTestTaskRequestTrafficTest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateNetTestTaskRequestTrafficTestClients>> clients{};
  shared_ptr<long> duration{};
  shared_ptr<bool> GDR{};
  shared_ptr<string> protocol{};
  shared_ptr<long> QP{};
  shared_ptr<vector<CreateNetTestTaskRequestTrafficTestServers>> servers{};
  shared_ptr<string> trafficModel{};

  CreateNetTestTaskRequestTrafficTest() {}

  explicit CreateNetTestTaskRequestTrafficTest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clients) {
      vector<boost::any> temp1;
      for(auto item1:*clients){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clients"] = boost::any(temp1);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (GDR) {
      res["GDR"] = boost::any(*GDR);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (QP) {
      res["QP"] = boost::any(*QP);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    if (trafficModel) {
      res["TrafficModel"] = boost::any(*trafficModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      if (typeid(vector<boost::any>) == m["Clients"].type()) {
        vector<CreateNetTestTaskRequestTrafficTestClients> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clients"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNetTestTaskRequestTrafficTestClients model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clients = make_shared<vector<CreateNetTestTaskRequestTrafficTestClients>>(expect1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("GDR") != m.end() && !m["GDR"].empty()) {
      GDR = make_shared<bool>(boost::any_cast<bool>(m["GDR"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("QP") != m.end() && !m["QP"].empty()) {
      QP = make_shared<long>(boost::any_cast<long>(m["QP"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<CreateNetTestTaskRequestTrafficTestServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNetTestTaskRequestTrafficTestServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<CreateNetTestTaskRequestTrafficTestServers>>(expect1);
      }
    }
    if (m.find("TrafficModel") != m.end() && !m["TrafficModel"].empty()) {
      trafficModel = make_shared<string>(boost::any_cast<string>(m["TrafficModel"]));
    }
  }


  virtual ~CreateNetTestTaskRequestTrafficTest() = default;
};
class CreateNetTestTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<CreateNetTestTaskRequestCommTest> commTest{};
  shared_ptr<CreateNetTestTaskRequestDelayTest> delayTest{};
  shared_ptr<string> netTestType{};
  shared_ptr<string> networkMode{};
  shared_ptr<string> port{};
  shared_ptr<CreateNetTestTaskRequestTrafficTest> trafficTest{};

  CreateNetTestTaskRequest() {}

  explicit CreateNetTestTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (commTest) {
      res["CommTest"] = commTest ? boost::any(commTest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (delayTest) {
      res["DelayTest"] = delayTest ? boost::any(delayTest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (netTestType) {
      res["NetTestType"] = boost::any(*netTestType);
    }
    if (networkMode) {
      res["NetworkMode"] = boost::any(*networkMode);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (trafficTest) {
      res["TrafficTest"] = trafficTest ? boost::any(trafficTest->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CommTest") != m.end() && !m["CommTest"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommTest"].type()) {
        CreateNetTestTaskRequestCommTest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommTest"]));
        commTest = make_shared<CreateNetTestTaskRequestCommTest>(model1);
      }
    }
    if (m.find("DelayTest") != m.end() && !m["DelayTest"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelayTest"].type()) {
        CreateNetTestTaskRequestDelayTest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelayTest"]));
        delayTest = make_shared<CreateNetTestTaskRequestDelayTest>(model1);
      }
    }
    if (m.find("NetTestType") != m.end() && !m["NetTestType"].empty()) {
      netTestType = make_shared<string>(boost::any_cast<string>(m["NetTestType"]));
    }
    if (m.find("NetworkMode") != m.end() && !m["NetworkMode"].empty()) {
      networkMode = make_shared<string>(boost::any_cast<string>(m["NetworkMode"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("TrafficTest") != m.end() && !m["TrafficTest"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficTest"].type()) {
        CreateNetTestTaskRequestTrafficTest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficTest"]));
        trafficTest = make_shared<CreateNetTestTaskRequestTrafficTest>(model1);
      }
    }
  }


  virtual ~CreateNetTestTaskRequest() = default;
};
class CreateNetTestTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> commTestShrink{};
  shared_ptr<string> delayTestShrink{};
  shared_ptr<string> netTestType{};
  shared_ptr<string> networkMode{};
  shared_ptr<string> port{};
  shared_ptr<string> trafficTestShrink{};

  CreateNetTestTaskShrinkRequest() {}

  explicit CreateNetTestTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (commTestShrink) {
      res["CommTest"] = boost::any(*commTestShrink);
    }
    if (delayTestShrink) {
      res["DelayTest"] = boost::any(*delayTestShrink);
    }
    if (netTestType) {
      res["NetTestType"] = boost::any(*netTestType);
    }
    if (networkMode) {
      res["NetworkMode"] = boost::any(*networkMode);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (trafficTestShrink) {
      res["TrafficTest"] = boost::any(*trafficTestShrink);
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
    if (m.find("CommTest") != m.end() && !m["CommTest"].empty()) {
      commTestShrink = make_shared<string>(boost::any_cast<string>(m["CommTest"]));
    }
    if (m.find("DelayTest") != m.end() && !m["DelayTest"].empty()) {
      delayTestShrink = make_shared<string>(boost::any_cast<string>(m["DelayTest"]));
    }
    if (m.find("NetTestType") != m.end() && !m["NetTestType"].empty()) {
      netTestType = make_shared<string>(boost::any_cast<string>(m["NetTestType"]));
    }
    if (m.find("NetworkMode") != m.end() && !m["NetworkMode"].empty()) {
      networkMode = make_shared<string>(boost::any_cast<string>(m["NetworkMode"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("TrafficTest") != m.end() && !m["TrafficTest"].empty()) {
      trafficTestShrink = make_shared<string>(boost::any_cast<string>(m["TrafficTest"]));
    }
  }


  virtual ~CreateNetTestTaskShrinkRequest() = default;
};
class CreateNetTestTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> testId{};

  CreateNetTestTaskResponseBody() {}

  explicit CreateNetTestTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (testId) {
      res["TestId"] = boost::any(*testId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TestId") != m.end() && !m["TestId"].empty()) {
      testId = make_shared<string>(boost::any_cast<string>(m["TestId"]));
    }
  }


  virtual ~CreateNetTestTaskResponseBody() = default;
};
class CreateNetTestTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNetTestTaskResponseBody> body{};

  CreateNetTestTaskResponse() {}

  explicit CreateNetTestTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNetTestTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNetTestTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNetTestTaskResponse() = default;
};
class CreateNodeGroupRequestNodeGroupSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  CreateNodeGroupRequestNodeGroupSystemDisk() {}

  explicit CreateNodeGroupRequestNodeGroupSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~CreateNodeGroupRequestNodeGroupSystemDisk() = default;
};
class CreateNodeGroupRequestNodeGroup : public Darabonba::Model {
public:
  shared_ptr<string> az{};
  shared_ptr<bool> fileSystemMountEnabled{};
  shared_ptr<string> imageId{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> loginPassword{};
  shared_ptr<string> machineType{};
  shared_ptr<string> nodeGroupDescription{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<CreateNodeGroupRequestNodeGroupSystemDisk> systemDisk{};
  shared_ptr<string> userData{};
  shared_ptr<bool> virtualGpuEnabled{};

  CreateNodeGroupRequestNodeGroup() {}

  explicit CreateNodeGroupRequestNodeGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (az) {
      res["Az"] = boost::any(*az);
    }
    if (fileSystemMountEnabled) {
      res["FileSystemMountEnabled"] = boost::any(*fileSystemMountEnabled);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (loginPassword) {
      res["LoginPassword"] = boost::any(*loginPassword);
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
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (virtualGpuEnabled) {
      res["VirtualGpuEnabled"] = boost::any(*virtualGpuEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Az") != m.end() && !m["Az"].empty()) {
      az = make_shared<string>(boost::any_cast<string>(m["Az"]));
    }
    if (m.find("FileSystemMountEnabled") != m.end() && !m["FileSystemMountEnabled"].empty()) {
      fileSystemMountEnabled = make_shared<bool>(boost::any_cast<bool>(m["FileSystemMountEnabled"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("LoginPassword") != m.end() && !m["LoginPassword"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["LoginPassword"]));
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
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        CreateNodeGroupRequestNodeGroupSystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<CreateNodeGroupRequestNodeGroupSystemDisk>(model1);
      }
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("VirtualGpuEnabled") != m.end() && !m["VirtualGpuEnabled"].empty()) {
      virtualGpuEnabled = make_shared<bool>(boost::any_cast<bool>(m["VirtualGpuEnabled"]));
    }
  }


  virtual ~CreateNodeGroupRequestNodeGroup() = default;
};
class CreateNodeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<CreateNodeGroupRequestNodeGroup> nodeGroup{};
  shared_ptr<map<string, boost::any>> nodeUnit{};

  CreateNodeGroupRequest() {}

  explicit CreateNodeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (nodeGroup) {
      res["NodeGroup"] = nodeGroup ? boost::any(nodeGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeUnit) {
      res["NodeUnit"] = boost::any(*nodeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NodeGroup") != m.end() && !m["NodeGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeGroup"].type()) {
        CreateNodeGroupRequestNodeGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeGroup"]));
        nodeGroup = make_shared<CreateNodeGroupRequestNodeGroup>(model1);
      }
    }
    if (m.find("NodeUnit") != m.end() && !m["NodeUnit"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["NodeUnit"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nodeUnit = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateNodeGroupRequest() = default;
};
class CreateNodeGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> nodeGroupShrink{};
  shared_ptr<string> nodeUnitShrink{};

  CreateNodeGroupShrinkRequest() {}

  explicit CreateNodeGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (nodeGroupShrink) {
      res["NodeGroup"] = boost::any(*nodeGroupShrink);
    }
    if (nodeUnitShrink) {
      res["NodeUnit"] = boost::any(*nodeUnitShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("NodeGroup") != m.end() && !m["NodeGroup"].empty()) {
      nodeGroupShrink = make_shared<string>(boost::any_cast<string>(m["NodeGroup"]));
    }
    if (m.find("NodeUnit") != m.end() && !m["NodeUnit"].empty()) {
      nodeUnitShrink = make_shared<string>(boost::any_cast<string>(m["NodeUnit"]));
    }
  }


  virtual ~CreateNodeGroupShrinkRequest() = default;
};
class CreateNodeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<string> requestId{};

  CreateNodeGroupResponseBody() {}

  explicit CreateNodeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeGroupName) {
      res["NodeGroupName"] = boost::any(*nodeGroupName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeGroupName") != m.end() && !m["NodeGroupName"].empty()) {
      nodeGroupName = make_shared<string>(boost::any_cast<string>(m["NodeGroupName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNodeGroupResponseBody() = default;
};
class CreateNodeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNodeGroupResponseBody> body{};

  CreateNodeGroupResponse() {}

  explicit CreateNodeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNodeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNodeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNodeGroupResponse() = default;
};
class CreateSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> sessionType{};
  shared_ptr<string> startTime{};

  CreateSessionRequest() {}

  explicit CreateSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (sessionType) {
      res["SessionType"] = boost::any(*sessionType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("SessionType") != m.end() && !m["SessionType"].empty()) {
      sessionType = make_shared<string>(boost::any_cast<string>(m["SessionType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~CreateSessionRequest() = default;
};
class CreateSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serverSn{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sessionToken{};
  shared_ptr<string> wssEndpoint{};

  CreateSessionResponseBody() {}

  explicit CreateSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverSn) {
      res["ServerSn"] = boost::any(*serverSn);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sessionToken) {
      res["SessionToken"] = boost::any(*sessionToken);
    }
    if (wssEndpoint) {
      res["WssEndpoint"] = boost::any(*wssEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerSn") != m.end() && !m["ServerSn"].empty()) {
      serverSn = make_shared<string>(boost::any_cast<string>(m["ServerSn"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SessionToken") != m.end() && !m["SessionToken"].empty()) {
      sessionToken = make_shared<string>(boost::any_cast<string>(m["SessionToken"]));
    }
    if (m.find("WssEndpoint") != m.end() && !m["WssEndpoint"].empty()) {
      wssEndpoint = make_shared<string>(boost::any_cast<string>(m["WssEndpoint"]));
    }
  }


  virtual ~CreateSessionResponseBody() = default;
};
class CreateSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSessionResponseBody> body{};

  CreateSessionResponse() {}

  explicit CreateSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSessionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSessionResponse() = default;
};
class CreateVscRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateVscRequestTag() {}

  explicit CreateVscRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateVscRequestTag() = default;
};
class CreateVscRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateVscRequestTag>> tag{};
  shared_ptr<string> vscName{};
  shared_ptr<string> vscType{};

  CreateVscRequest() {}

  explicit CreateVscRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
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
    if (vscName) {
      res["VscName"] = boost::any(*vscName);
    }
    if (vscType) {
      res["VscType"] = boost::any(*vscType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateVscRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVscRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateVscRequestTag>>(expect1);
      }
    }
    if (m.find("VscName") != m.end() && !m["VscName"].empty()) {
      vscName = make_shared<string>(boost::any_cast<string>(m["VscName"]));
    }
    if (m.find("VscType") != m.end() && !m["VscType"].empty()) {
      vscType = make_shared<string>(boost::any_cast<string>(m["VscType"]));
    }
  }


  virtual ~CreateVscRequest() = default;
};
class CreateVscResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> vscId{};

  CreateVscResponseBody() {}

  explicit CreateVscResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vscId) {
      res["VscId"] = boost::any(*vscId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VscId") != m.end() && !m["VscId"].empty()) {
      vscId = make_shared<string>(boost::any_cast<string>(m["VscId"]));
    }
  }


  virtual ~CreateVscResponseBody() = default;
};
class CreateVscResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVscResponseBody> body{};

  CreateVscResponse() {}

  explicit CreateVscResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVscResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVscResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVscResponse() = default;
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class DeleteNodeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> nodeGroupId{};

  DeleteNodeGroupRequest() {}

  explicit DeleteNodeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
  }


  virtual ~DeleteNodeGroupRequest() = default;
};
class DeleteNodeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNodeGroupResponseBody() {}

  explicit DeleteNodeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNodeGroupResponseBody() = default;
};
class DeleteNodeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNodeGroupResponseBody> body{};

  DeleteNodeGroupResponse() {}

  explicit DeleteNodeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNodeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNodeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNodeGroupResponse() = default;
};
class DeleteVscRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> vscId{};

  DeleteVscRequest() {}

  explicit DeleteVscRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (vscId) {
      res["VscId"] = boost::any(*vscId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("VscId") != m.end() && !m["VscId"].empty()) {
      vscId = make_shared<string>(boost::any_cast<string>(m["VscId"]));
    }
  }


  virtual ~DeleteVscRequest() = default;
};
class DeleteVscResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVscResponseBody() {}

  explicit DeleteVscResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVscResponseBody() = default;
};
class DeleteVscResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVscResponseBody> body{};

  DeleteVscResponse() {}

  explicit DeleteVscResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVscResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVscResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVscResponse() = default;
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
  shared_ptr<string> computingIpVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> hpnZone{};
  shared_ptr<DescribeClusterResponseBodyNetworks> networks{};
  shared_ptr<long> nodeCount{};
  shared_ptr<long> nodeGroupCount{};
  shared_ptr<string> openEniJumboFrame{};
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
    if (computingIpVersion) {
      res["ComputingIpVersion"] = boost::any(*computingIpVersion);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (networks) {
      res["Networks"] = networks ? boost::any(networks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (nodeGroupCount) {
      res["NodeGroupCount"] = boost::any(*nodeGroupCount);
    }
    if (openEniJumboFrame) {
      res["OpenEniJumboFrame"] = boost::any(*openEniJumboFrame);
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
    if (m.find("ComputingIpVersion") != m.end() && !m["ComputingIpVersion"].empty()) {
      computingIpVersion = make_shared<string>(boost::any_cast<string>(m["ComputingIpVersion"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("Networks") != m.end() && !m["Networks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Networks"].type()) {
        DescribeClusterResponseBodyNetworks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Networks"]));
        networks = make_shared<DescribeClusterResponseBodyNetworks>(model1);
      }
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("NodeGroupCount") != m.end() && !m["NodeGroupCount"].empty()) {
      nodeGroupCount = make_shared<long>(boost::any_cast<long>(m["NodeGroupCount"]));
    }
    if (m.find("OpenEniJumboFrame") != m.end() && !m["OpenEniJumboFrame"].empty()) {
      openEniJumboFrame = make_shared<string>(boost::any_cast<string>(m["OpenEniJumboFrame"]));
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class DescribeDiagnosticResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> diagnosticId{};

  DescribeDiagnosticResultRequest() {}

  explicit DescribeDiagnosticResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diagnosticId) {
      res["DiagnosticId"] = boost::any(*diagnosticId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiagnosticId") != m.end() && !m["DiagnosticId"].empty()) {
      diagnosticId = make_shared<string>(boost::any_cast<string>(m["DiagnosticId"]));
    }
  }


  virtual ~DescribeDiagnosticResultRequest() = default;
};
class DescribeDiagnosticResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> diagnosticId{};
  shared_ptr<vector<boost::any>> diagnosticResults{};
  shared_ptr<string> diagnosticState{};
  shared_ptr<string> diagnosticType{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<string> requestId{};

  DescribeDiagnosticResultResponseBody() {}

  explicit DescribeDiagnosticResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (diagnosticId) {
      res["DiagnosticId"] = boost::any(*diagnosticId);
    }
    if (diagnosticResults) {
      res["DiagnosticResults"] = boost::any(*diagnosticResults);
    }
    if (diagnosticState) {
      res["DiagnosticState"] = boost::any(*diagnosticState);
    }
    if (diagnosticType) {
      res["DiagnosticType"] = boost::any(*diagnosticType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
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
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DiagnosticId") != m.end() && !m["DiagnosticId"].empty()) {
      diagnosticId = make_shared<string>(boost::any_cast<string>(m["DiagnosticId"]));
    }
    if (m.find("DiagnosticResults") != m.end() && !m["DiagnosticResults"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["DiagnosticResults"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiagnosticResults"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      diagnosticResults = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("DiagnosticState") != m.end() && !m["DiagnosticState"].empty()) {
      diagnosticState = make_shared<string>(boost::any_cast<string>(m["DiagnosticState"]));
    }
    if (m.find("DiagnosticType") != m.end() && !m["DiagnosticType"].empty()) {
      diagnosticType = make_shared<string>(boost::any_cast<string>(m["DiagnosticType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
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
  }


  virtual ~DescribeDiagnosticResultResponseBody() = default;
};
class DescribeDiagnosticResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDiagnosticResultResponseBody> body{};

  DescribeDiagnosticResultResponse() {}

  explicit DescribeDiagnosticResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDiagnosticResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDiagnosticResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDiagnosticResultResponse() = default;
};
class DescribeInvocationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> contentEncoding{};
  shared_ptr<bool> includeOutput{};
  shared_ptr<string> invokeId{};
  shared_ptr<string> nodeId{};

  DescribeInvocationsRequest() {}

  explicit DescribeInvocationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentEncoding) {
      res["ContentEncoding"] = boost::any(*contentEncoding);
    }
    if (includeOutput) {
      res["IncludeOutput"] = boost::any(*includeOutput);
    }
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentEncoding") != m.end() && !m["ContentEncoding"].empty()) {
      contentEncoding = make_shared<string>(boost::any_cast<string>(m["ContentEncoding"]));
    }
    if (m.find("IncludeOutput") != m.end() && !m["IncludeOutput"].empty()) {
      includeOutput = make_shared<bool>(boost::any_cast<bool>(m["IncludeOutput"]));
    }
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DescribeInvocationsRequest() = default;
};
class DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<long> dropped{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorInfo{};
  shared_ptr<long> exitCode{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> invocationStatus{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeInvokeStatus{};
  shared_ptr<string> output{};
  shared_ptr<long> repeats{};
  shared_ptr<string> startTime{};
  shared_ptr<string> stopTime{};
  shared_ptr<string> timed{};
  shared_ptr<string> updateTime{};

  DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode() {}

  explicit DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (dropped) {
      res["Dropped"] = boost::any(*dropped);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorInfo) {
      res["ErrorInfo"] = boost::any(*errorInfo);
    }
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (invocationStatus) {
      res["InvocationStatus"] = boost::any(*invocationStatus);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeInvokeStatus) {
      res["NodeInvokeStatus"] = boost::any(*nodeInvokeStatus);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    if (repeats) {
      res["Repeats"] = boost::any(*repeats);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (timed) {
      res["Timed"] = boost::any(*timed);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Dropped") != m.end() && !m["Dropped"].empty()) {
      dropped = make_shared<long>(boost::any_cast<long>(m["Dropped"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorInfo") != m.end() && !m["ErrorInfo"].empty()) {
      errorInfo = make_shared<string>(boost::any_cast<string>(m["ErrorInfo"]));
    }
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("InvocationStatus") != m.end() && !m["InvocationStatus"].empty()) {
      invocationStatus = make_shared<string>(boost::any_cast<string>(m["InvocationStatus"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeInvokeStatus") != m.end() && !m["NodeInvokeStatus"].empty()) {
      nodeInvokeStatus = make_shared<string>(boost::any_cast<string>(m["NodeInvokeStatus"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
    if (m.find("Repeats") != m.end() && !m["Repeats"].empty()) {
      repeats = make_shared<long>(boost::any_cast<long>(m["Repeats"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("Timed") != m.end() && !m["Timed"].empty()) {
      timed = make_shared<string>(boost::any_cast<string>(m["Timed"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode() = default;
};
class DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>> invokeNode{};

  DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes() {}

  explicit DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeNode) {
      vector<boost::any> temp1;
      for(auto item1:*invokeNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvokeNode"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeNode") != m.end() && !m["InvokeNode"].empty()) {
      if (typeid(vector<boost::any>) == m["InvokeNode"].type()) {
        vector<DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InvokeNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invokeNode = make_shared<vector<DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>>(expect1);
      }
    }
  }


  virtual ~DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes() = default;
};
class DescribeInvocationsResponseBodyInvocationsInvocation : public Darabonba::Model {
public:
  shared_ptr<string> commandContent{};
  shared_ptr<string> commandDescription{};
  shared_ptr<string> commandName{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> frequency{};
  shared_ptr<string> invocationStatus{};
  shared_ptr<string> invokeId{};
  shared_ptr<DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes> invokeNodes{};
  shared_ptr<string> invokeStatus{};
  shared_ptr<string> parameters{};
  shared_ptr<string> repeatMode{};
  shared_ptr<long> timeout{};
  shared_ptr<string> username{};
  shared_ptr<string> workingDir{};

  DescribeInvocationsResponseBodyInvocationsInvocation() {}

  explicit DescribeInvocationsResponseBodyInvocationsInvocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (commandDescription) {
      res["CommandDescription"] = boost::any(*commandDescription);
    }
    if (commandName) {
      res["CommandName"] = boost::any(*commandName);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    if (invocationStatus) {
      res["InvocationStatus"] = boost::any(*invocationStatus);
    }
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (invokeNodes) {
      res["InvokeNodes"] = invokeNodes ? boost::any(invokeNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invokeStatus) {
      res["InvokeStatus"] = boost::any(*invokeStatus);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (repeatMode) {
      res["RepeatMode"] = boost::any(*repeatMode);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("CommandDescription") != m.end() && !m["CommandDescription"].empty()) {
      commandDescription = make_shared<string>(boost::any_cast<string>(m["CommandDescription"]));
    }
    if (m.find("CommandName") != m.end() && !m["CommandName"].empty()) {
      commandName = make_shared<string>(boost::any_cast<string>(m["CommandName"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<string>(boost::any_cast<string>(m["Frequency"]));
    }
    if (m.find("InvocationStatus") != m.end() && !m["InvocationStatus"].empty()) {
      invocationStatus = make_shared<string>(boost::any_cast<string>(m["InvocationStatus"]));
    }
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("InvokeNodes") != m.end() && !m["InvokeNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvokeNodes"].type()) {
        DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvokeNodes"]));
        invokeNodes = make_shared<DescribeInvocationsResponseBodyInvocationsInvocationInvokeNodes>(model1);
      }
    }
    if (m.find("InvokeStatus") != m.end() && !m["InvokeStatus"].empty()) {
      invokeStatus = make_shared<string>(boost::any_cast<string>(m["InvokeStatus"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RepeatMode") != m.end() && !m["RepeatMode"].empty()) {
      repeatMode = make_shared<string>(boost::any_cast<string>(m["RepeatMode"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~DescribeInvocationsResponseBodyInvocationsInvocation() = default;
};
class DescribeInvocationsResponseBodyInvocations : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInvocationsResponseBodyInvocationsInvocation>> invocation{};

  DescribeInvocationsResponseBodyInvocations() {}

  explicit DescribeInvocationsResponseBodyInvocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invocation) {
      vector<boost::any> temp1;
      for(auto item1:*invocation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Invocation"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Invocation") != m.end() && !m["Invocation"].empty()) {
      if (typeid(vector<boost::any>) == m["Invocation"].type()) {
        vector<DescribeInvocationsResponseBodyInvocationsInvocation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Invocation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInvocationsResponseBodyInvocationsInvocation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invocation = make_shared<vector<DescribeInvocationsResponseBodyInvocationsInvocation>>(expect1);
      }
    }
  }


  virtual ~DescribeInvocationsResponseBodyInvocations() = default;
};
class DescribeInvocationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeInvocationsResponseBodyInvocations> invocations{};
  shared_ptr<string> requestId{};

  DescribeInvocationsResponseBody() {}

  explicit DescribeInvocationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invocations) {
      res["Invocations"] = invocations ? boost::any(invocations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Invocations") != m.end() && !m["Invocations"].empty()) {
      if (typeid(map<string, boost::any>) == m["Invocations"].type()) {
        DescribeInvocationsResponseBodyInvocations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Invocations"]));
        invocations = make_shared<DescribeInvocationsResponseBodyInvocations>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInvocationsResponseBody() = default;
};
class DescribeInvocationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInvocationsResponseBody> body{};

  DescribeInvocationsResponse() {}

  explicit DescribeInvocationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInvocationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInvocationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInvocationsResponse() = default;
};
class DescribeNetTestResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> testId{};

  DescribeNetTestResultRequest() {}

  explicit DescribeNetTestResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (testId) {
      res["TestId"] = boost::any(*testId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TestId") != m.end() && !m["TestId"].empty()) {
      testId = make_shared<string>(boost::any_cast<string>(m["TestId"]));
    }
  }


  virtual ~DescribeNetTestResultRequest() = default;
};
class DescribeNetTestResultResponseBodyCommTestHosts : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  DescribeNetTestResultResponseBodyCommTestHosts() {}

  explicit DescribeNetTestResultResponseBodyCommTestHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~DescribeNetTestResultResponseBodyCommTestHosts() = default;
};
class DescribeNetTestResultResponseBodyCommTest : public Darabonba::Model {
public:
  shared_ptr<string> GPUNum{};
  shared_ptr<vector<DescribeNetTestResultResponseBodyCommTestHosts>> hosts{};
  shared_ptr<string> model{};
  shared_ptr<string> type{};

  DescribeNetTestResultResponseBodyCommTest() {}

  explicit DescribeNetTestResultResponseBodyCommTest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GPUNum) {
      res["GPUNum"] = boost::any(*GPUNum);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GPUNum") != m.end() && !m["GPUNum"].empty()) {
      GPUNum = make_shared<string>(boost::any_cast<string>(m["GPUNum"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<DescribeNetTestResultResponseBodyCommTestHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNetTestResultResponseBodyCommTestHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<DescribeNetTestResultResponseBodyCommTestHosts>>(expect1);
      }
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeNetTestResultResponseBodyCommTest() = default;
};
class DescribeNetTestResultResponseBodyDelayTestHosts : public Darabonba::Model {
public:
  shared_ptr<string> bond{};
  shared_ptr<string> IP{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  DescribeNetTestResultResponseBodyDelayTestHosts() {}

  explicit DescribeNetTestResultResponseBodyDelayTestHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bond) {
      res["Bond"] = boost::any(*bond);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bond") != m.end() && !m["Bond"].empty()) {
      bond = make_shared<string>(boost::any_cast<string>(m["Bond"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~DescribeNetTestResultResponseBodyDelayTestHosts() = default;
};
class DescribeNetTestResultResponseBodyDelayTest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNetTestResultResponseBodyDelayTestHosts>> hosts{};

  DescribeNetTestResultResponseBodyDelayTest() {}

  explicit DescribeNetTestResultResponseBodyDelayTest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<DescribeNetTestResultResponseBodyDelayTestHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNetTestResultResponseBodyDelayTestHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<DescribeNetTestResultResponseBodyDelayTestHosts>>(expect1);
      }
    }
  }


  virtual ~DescribeNetTestResultResponseBodyDelayTest() = default;
};
class DescribeNetTestResultResponseBodyTrafficTestClients : public Darabonba::Model {
public:
  shared_ptr<string> bond{};
  shared_ptr<string> IP{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  DescribeNetTestResultResponseBodyTrafficTestClients() {}

  explicit DescribeNetTestResultResponseBodyTrafficTestClients(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bond) {
      res["Bond"] = boost::any(*bond);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bond") != m.end() && !m["Bond"].empty()) {
      bond = make_shared<string>(boost::any_cast<string>(m["Bond"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~DescribeNetTestResultResponseBodyTrafficTestClients() = default;
};
class DescribeNetTestResultResponseBodyTrafficTestServers : public Darabonba::Model {
public:
  shared_ptr<string> bond{};
  shared_ptr<string> IP{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  DescribeNetTestResultResponseBodyTrafficTestServers() {}

  explicit DescribeNetTestResultResponseBodyTrafficTestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bond) {
      res["Bond"] = boost::any(*bond);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bond") != m.end() && !m["Bond"].empty()) {
      bond = make_shared<string>(boost::any_cast<string>(m["Bond"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~DescribeNetTestResultResponseBodyTrafficTestServers() = default;
};
class DescribeNetTestResultResponseBodyTrafficTest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNetTestResultResponseBodyTrafficTestClients>> clients{};
  shared_ptr<long> duration{};
  shared_ptr<string> GDR{};
  shared_ptr<string> protocol{};
  shared_ptr<long> QP{};
  shared_ptr<vector<DescribeNetTestResultResponseBodyTrafficTestServers>> servers{};
  shared_ptr<string> trafficModel{};

  DescribeNetTestResultResponseBodyTrafficTest() {}

  explicit DescribeNetTestResultResponseBodyTrafficTest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clients) {
      vector<boost::any> temp1;
      for(auto item1:*clients){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clients"] = boost::any(temp1);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (GDR) {
      res["GDR"] = boost::any(*GDR);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (QP) {
      res["QP"] = boost::any(*QP);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    if (trafficModel) {
      res["TrafficModel"] = boost::any(*trafficModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      if (typeid(vector<boost::any>) == m["Clients"].type()) {
        vector<DescribeNetTestResultResponseBodyTrafficTestClients> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clients"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNetTestResultResponseBodyTrafficTestClients model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clients = make_shared<vector<DescribeNetTestResultResponseBodyTrafficTestClients>>(expect1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("GDR") != m.end() && !m["GDR"].empty()) {
      GDR = make_shared<string>(boost::any_cast<string>(m["GDR"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("QP") != m.end() && !m["QP"].empty()) {
      QP = make_shared<long>(boost::any_cast<long>(m["QP"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<DescribeNetTestResultResponseBodyTrafficTestServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNetTestResultResponseBodyTrafficTestServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<DescribeNetTestResultResponseBodyTrafficTestServers>>(expect1);
      }
    }
    if (m.find("TrafficModel") != m.end() && !m["TrafficModel"].empty()) {
      trafficModel = make_shared<string>(boost::any_cast<string>(m["TrafficModel"]));
    }
  }


  virtual ~DescribeNetTestResultResponseBodyTrafficTest() = default;
};
class DescribeNetTestResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<DescribeNetTestResultResponseBodyCommTest> commTest{};
  shared_ptr<string> creationTime{};
  shared_ptr<DescribeNetTestResultResponseBodyDelayTest> delayTest{};
  shared_ptr<string> finishedTime{};
  shared_ptr<string> netTestType{};
  shared_ptr<string> port{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resultDetial{};
  shared_ptr<string> status{};
  shared_ptr<string> testId{};
  shared_ptr<DescribeNetTestResultResponseBodyTrafficTest> trafficTest{};

  DescribeNetTestResultResponseBody() {}

  explicit DescribeNetTestResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (commTest) {
      res["CommTest"] = commTest ? boost::any(commTest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (delayTest) {
      res["DelayTest"] = delayTest ? boost::any(delayTest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (finishedTime) {
      res["FinishedTime"] = boost::any(*finishedTime);
    }
    if (netTestType) {
      res["NetTestType"] = boost::any(*netTestType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultDetial) {
      res["ResultDetial"] = boost::any(*resultDetial);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (testId) {
      res["TestId"] = boost::any(*testId);
    }
    if (trafficTest) {
      res["TrafficTest"] = trafficTest ? boost::any(trafficTest->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CommTest") != m.end() && !m["CommTest"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommTest"].type()) {
        DescribeNetTestResultResponseBodyCommTest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommTest"]));
        commTest = make_shared<DescribeNetTestResultResponseBodyCommTest>(model1);
      }
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DelayTest") != m.end() && !m["DelayTest"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelayTest"].type()) {
        DescribeNetTestResultResponseBodyDelayTest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelayTest"]));
        delayTest = make_shared<DescribeNetTestResultResponseBodyDelayTest>(model1);
      }
    }
    if (m.find("FinishedTime") != m.end() && !m["FinishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["FinishedTime"]));
    }
    if (m.find("NetTestType") != m.end() && !m["NetTestType"].empty()) {
      netTestType = make_shared<string>(boost::any_cast<string>(m["NetTestType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultDetial") != m.end() && !m["ResultDetial"].empty()) {
      resultDetial = make_shared<string>(boost::any_cast<string>(m["ResultDetial"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TestId") != m.end() && !m["TestId"].empty()) {
      testId = make_shared<string>(boost::any_cast<string>(m["TestId"]));
    }
    if (m.find("TrafficTest") != m.end() && !m["TrafficTest"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficTest"].type()) {
        DescribeNetTestResultResponseBodyTrafficTest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficTest"]));
        trafficTest = make_shared<DescribeNetTestResultResponseBodyTrafficTest>(model1);
      }
    }
  }


  virtual ~DescribeNetTestResultResponseBody() = default;
};
class DescribeNetTestResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNetTestResultResponseBody> body{};

  DescribeNetTestResultResponse() {}

  explicit DescribeNetTestResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeNetTestResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNetTestResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNetTestResultResponse() = default;
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
class DescribeNodeResponseBodyDisks : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> diskId{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};
  shared_ptr<string> type{};

  DescribeNodeResponseBodyDisks() {}

  explicit DescribeNodeResponseBodyDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeNodeResponseBodyDisks() = default;
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
  shared_ptr<vector<DescribeNodeResponseBodyDisks>> disks{};
  shared_ptr<string> expiredTime{};
  shared_ptr<bool> fileSystemMountEnabled{};
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
  shared_ptr<string> userData{};
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
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (fileSystemMountEnabled) {
      res["FileSystemMountEnabled"] = boost::any(*fileSystemMountEnabled);
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
    if (userData) {
      res["UserData"] = boost::any(*userData);
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
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(vector<boost::any>) == m["Disks"].type()) {
        vector<DescribeNodeResponseBodyDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNodeResponseBodyDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disks = make_shared<vector<DescribeNodeResponseBodyDisks>>(expect1);
      }
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("FileSystemMountEnabled") != m.end() && !m["FileSystemMountEnabled"].empty()) {
      fileSystemMountEnabled = make_shared<bool>(boost::any_cast<bool>(m["FileSystemMountEnabled"]));
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
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class DescribeSendFileResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> invokeId{};
  shared_ptr<string> nodeId{};

  DescribeSendFileResultsRequest() {}

  explicit DescribeSendFileResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DescribeSendFileResultsRequest() = default;
};
class DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorInfo{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> invocationStatus{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> updateTime{};

  DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode() {}

  explicit DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorInfo) {
      res["ErrorInfo"] = boost::any(*errorInfo);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (invocationStatus) {
      res["InvocationStatus"] = boost::any(*invocationStatus);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorInfo") != m.end() && !m["ErrorInfo"].empty()) {
      errorInfo = make_shared<string>(boost::any_cast<string>(m["ErrorInfo"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("InvocationStatus") != m.end() && !m["InvocationStatus"].empty()) {
      invocationStatus = make_shared<string>(boost::any_cast<string>(m["InvocationStatus"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode() = default;
};
class DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>> invokeNode{};

  DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes() {}

  explicit DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeNode) {
      vector<boost::any> temp1;
      for(auto item1:*invokeNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvokeNode"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeNode") != m.end() && !m["InvokeNode"].empty()) {
      if (typeid(vector<boost::any>) == m["InvokeNode"].type()) {
        vector<DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InvokeNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invokeNode = make_shared<vector<DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodesInvokeNode>>(expect1);
      }
    }
  }


  virtual ~DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes() = default;
};
class DescribeSendFileResultsResponseBodyInvocationsInvocation : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> fileGroup{};
  shared_ptr<string> fileMode{};
  shared_ptr<string> fileOwner{};
  shared_ptr<string> invocationStatus{};
  shared_ptr<DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes> invokeNodes{};
  shared_ptr<string> name{};
  shared_ptr<long> nodeCount{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> targetDir{};

  DescribeSendFileResultsResponseBodyInvocationsInvocation() {}

  explicit DescribeSendFileResultsResponseBodyInvocationsInvocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileGroup) {
      res["FileGroup"] = boost::any(*fileGroup);
    }
    if (fileMode) {
      res["FileMode"] = boost::any(*fileMode);
    }
    if (fileOwner) {
      res["FileOwner"] = boost::any(*fileOwner);
    }
    if (invocationStatus) {
      res["InvocationStatus"] = boost::any(*invocationStatus);
    }
    if (invokeNodes) {
      res["InvokeNodes"] = invokeNodes ? boost::any(invokeNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (targetDir) {
      res["TargetDir"] = boost::any(*targetDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileGroup") != m.end() && !m["FileGroup"].empty()) {
      fileGroup = make_shared<string>(boost::any_cast<string>(m["FileGroup"]));
    }
    if (m.find("FileMode") != m.end() && !m["FileMode"].empty()) {
      fileMode = make_shared<string>(boost::any_cast<string>(m["FileMode"]));
    }
    if (m.find("FileOwner") != m.end() && !m["FileOwner"].empty()) {
      fileOwner = make_shared<string>(boost::any_cast<string>(m["FileOwner"]));
    }
    if (m.find("InvocationStatus") != m.end() && !m["InvocationStatus"].empty()) {
      invocationStatus = make_shared<string>(boost::any_cast<string>(m["InvocationStatus"]));
    }
    if (m.find("InvokeNodes") != m.end() && !m["InvokeNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvokeNodes"].type()) {
        DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvokeNodes"]));
        invokeNodes = make_shared<DescribeSendFileResultsResponseBodyInvocationsInvocationInvokeNodes>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("TargetDir") != m.end() && !m["TargetDir"].empty()) {
      targetDir = make_shared<string>(boost::any_cast<string>(m["TargetDir"]));
    }
  }


  virtual ~DescribeSendFileResultsResponseBodyInvocationsInvocation() = default;
};
class DescribeSendFileResultsResponseBodyInvocations : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSendFileResultsResponseBodyInvocationsInvocation>> invocation{};

  DescribeSendFileResultsResponseBodyInvocations() {}

  explicit DescribeSendFileResultsResponseBodyInvocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invocation) {
      vector<boost::any> temp1;
      for(auto item1:*invocation){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Invocation"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Invocation") != m.end() && !m["Invocation"].empty()) {
      if (typeid(vector<boost::any>) == m["Invocation"].type()) {
        vector<DescribeSendFileResultsResponseBodyInvocationsInvocation> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Invocation"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSendFileResultsResponseBodyInvocationsInvocation model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invocation = make_shared<vector<DescribeSendFileResultsResponseBodyInvocationsInvocation>>(expect1);
      }
    }
  }


  virtual ~DescribeSendFileResultsResponseBodyInvocations() = default;
};
class DescribeSendFileResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSendFileResultsResponseBodyInvocations> invocations{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeSendFileResultsResponseBody() {}

  explicit DescribeSendFileResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invocations) {
      res["Invocations"] = invocations ? boost::any(invocations->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Invocations") != m.end() && !m["Invocations"].empty()) {
      if (typeid(map<string, boost::any>) == m["Invocations"].type()) {
        DescribeSendFileResultsResponseBodyInvocations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Invocations"]));
        invocations = make_shared<DescribeSendFileResultsResponseBodyInvocations>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSendFileResultsResponseBody() = default;
};
class DescribeSendFileResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSendFileResultsResponseBody> body{};

  DescribeSendFileResultsResponse() {}

  explicit DescribeSendFileResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSendFileResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSendFileResultsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSendFileResultsResponse() = default;
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class DescribeVscRequest : public Darabonba::Model {
public:
  shared_ptr<string> vscId{};

  DescribeVscRequest() {}

  explicit DescribeVscRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vscId) {
      res["VscId"] = boost::any(*vscId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VscId") != m.end() && !m["VscId"].empty()) {
      vscId = make_shared<string>(boost::any_cast<string>(m["VscId"]));
    }
  }


  virtual ~DescribeVscRequest() = default;
};
class DescribeVscResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> vscId{};
  shared_ptr<string> vscName{};
  shared_ptr<string> vscType{};

  DescribeVscResponseBody() {}

  explicit DescribeVscResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vscId) {
      res["VscId"] = boost::any(*vscId);
    }
    if (vscName) {
      res["VscName"] = boost::any(*vscName);
    }
    if (vscType) {
      res["VscType"] = boost::any(*vscType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VscId") != m.end() && !m["VscId"].empty()) {
      vscId = make_shared<string>(boost::any_cast<string>(m["VscId"]));
    }
    if (m.find("VscName") != m.end() && !m["VscName"].empty()) {
      vscName = make_shared<string>(boost::any_cast<string>(m["VscName"]));
    }
    if (m.find("VscType") != m.end() && !m["VscType"].empty()) {
      vscType = make_shared<string>(boost::any_cast<string>(m["VscType"]));
    }
  }


  virtual ~DescribeVscResponseBody() = default;
};
class DescribeVscResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVscResponseBody> body{};

  DescribeVscResponse() {}

  explicit DescribeVscResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVscResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVscResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVscResponse() = default;
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
  shared_ptr<string> hostname{};
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
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
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
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
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
class ExtendClusterRequestNodeGroupsNodeTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ExtendClusterRequestNodeGroupsNodeTag() {}

  explicit ExtendClusterRequestNodeGroupsNodeTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExtendClusterRequestNodeGroupsNodeTag() = default;
};
class ExtendClusterRequestNodeGroupsNodesDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> deleteWithNode{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  ExtendClusterRequestNodeGroupsNodesDataDisk() {}

  explicit ExtendClusterRequestNodeGroupsNodesDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (deleteWithNode) {
      res["DeleteWithNode"] = boost::any(*deleteWithNode);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DeleteWithNode") != m.end() && !m["DeleteWithNode"].empty()) {
      deleteWithNode = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithNode"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ExtendClusterRequestNodeGroupsNodesDataDisk() = default;
};
class ExtendClusterRequestNodeGroupsNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ExtendClusterRequestNodeGroupsNodesDataDisk>> dataDisk{};
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
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
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
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<ExtendClusterRequestNodeGroupsNodesDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestNodeGroupsNodesDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<ExtendClusterRequestNodeGroupsNodesDataDisk>>(expect1);
      }
    }
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
  shared_ptr<long> amount{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<vector<string>> hostnames{};
  shared_ptr<string> loginPassword{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<vector<ExtendClusterRequestNodeGroupsNodeTag>> nodeTag{};
  shared_ptr<vector<ExtendClusterRequestNodeGroupsNodes>> nodes{};
  shared_ptr<long> period{};
  shared_ptr<string> userData{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ExtendClusterRequestNodeGroups() {}

  explicit ExtendClusterRequestNodeGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (hostnames) {
      res["Hostnames"] = boost::any(*hostnames);
    }
    if (loginPassword) {
      res["LoginPassword"] = boost::any(*loginPassword);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (nodeTag) {
      vector<boost::any> temp1;
      for(auto item1:*nodeTag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeTag"] = boost::any(temp1);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
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
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
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
    if (m.find("LoginPassword") != m.end() && !m["LoginPassword"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["LoginPassword"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("NodeTag") != m.end() && !m["NodeTag"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeTag"].type()) {
        vector<ExtendClusterRequestNodeGroupsNodeTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeTag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExtendClusterRequestNodeGroupsNodeTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeTag = make_shared<vector<ExtendClusterRequestNodeGroupsNodeTag>>(expect1);
      }
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
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class ListClusterNodesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListClusterNodesRequestTags() {}

  explicit ListClusterNodesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClusterNodesRequestTags() = default;
};
class ListClusterNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListClusterNodesRequestTags>> tags{};

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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListClusterNodesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterNodesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListClusterNodesRequestTags>>(expect1);
      }
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
class ListClusterNodesResponseBodyNodesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListClusterNodesResponseBodyNodesTags() {}

  explicit ListClusterNodesResponseBodyNodesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClusterNodesResponseBodyNodesTags() = default;
};
class ListClusterNodesResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expiredTime{};
  shared_ptr<bool> fileSystemMountEnabled{};
  shared_ptr<string> hostname{};
  shared_ptr<string> hpnZone{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> machineType{};
  shared_ptr<vector<ListClusterNodesResponseBodyNodesNetworks>> networks{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> nodeGroupName{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> operatingState{};
  shared_ptr<string> sn{};
  shared_ptr<vector<ListClusterNodesResponseBodyNodesTags>> tags{};
  shared_ptr<string> taskId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListClusterNodesResponseBodyNodes() {}

  explicit ListClusterNodesResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (fileSystemMountEnabled) {
      res["FileSystemMountEnabled"] = boost::any(*fileSystemMountEnabled);
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
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("FileSystemMountEnabled") != m.end() && !m["FileSystemMountEnabled"].empty()) {
      fileSystemMountEnabled = make_shared<bool>(boost::any_cast<bool>(m["FileSystemMountEnabled"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListClusterNodesResponseBodyNodesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterNodesResponseBodyNodesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListClusterNodesResponseBodyNodesTags>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class ListClustersRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListClustersRequestTags() {}

  explicit ListClustersRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClustersRequestTags() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListClustersRequestTags>> tags{};

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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListClustersRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListClustersRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBodyClustersTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListClustersResponseBodyClustersTags() {}

  explicit ListClustersResponseBodyClustersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClustersResponseBodyClustersTags() = default;
};
class ListClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterType{};
  shared_ptr<boost::any> components{};
  shared_ptr<string> computingIpVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> hpnZone{};
  shared_ptr<long> nodeCount{};
  shared_ptr<long> nodeGroupCount{};
  shared_ptr<string> operatingState{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListClustersResponseBodyClustersTags>> tags{};
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
    if (computingIpVersion) {
      res["ComputingIpVersion"] = boost::any(*computingIpVersion);
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
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ComputingIpVersion") != m.end() && !m["ComputingIpVersion"].empty()) {
      computingIpVersion = make_shared<string>(boost::any_cast<string>(m["ComputingIpVersion"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListClustersResponseBodyClustersTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClustersTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListClustersResponseBodyClustersTags>>(expect1);
      }
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class ListDiagnosticResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> diagType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};

  ListDiagnosticResultsRequest() {}

  explicit ListDiagnosticResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diagType) {
      res["DiagType"] = boost::any(*diagType);
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
    if (m.find("DiagType") != m.end() && !m["DiagType"].empty()) {
      diagType = make_shared<string>(boost::any_cast<string>(m["DiagType"]));
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


  virtual ~ListDiagnosticResultsRequest() = default;
};
class ListDiagnosticResultsResponseBodyDiagnosticResults : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> diagContent{};
  shared_ptr<string> diagId{};
  shared_ptr<string> diagResult{};
  shared_ptr<string> finishedTime{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};
  shared_ptr<string> status{};

  ListDiagnosticResultsResponseBodyDiagnosticResults() {}

  explicit ListDiagnosticResultsResponseBodyDiagnosticResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (diagContent) {
      res["DiagContent"] = boost::any(*diagContent);
    }
    if (diagId) {
      res["DiagId"] = boost::any(*diagId);
    }
    if (diagResult) {
      res["DiagResult"] = boost::any(*diagResult);
    }
    if (finishedTime) {
      res["FinishedTime"] = boost::any(*finishedTime);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DiagContent") != m.end() && !m["DiagContent"].empty()) {
      diagContent = make_shared<string>(boost::any_cast<string>(m["DiagContent"]));
    }
    if (m.find("DiagId") != m.end() && !m["DiagId"].empty()) {
      diagId = make_shared<string>(boost::any_cast<string>(m["DiagId"]));
    }
    if (m.find("DiagResult") != m.end() && !m["DiagResult"].empty()) {
      diagResult = make_shared<string>(boost::any_cast<string>(m["DiagResult"]));
    }
    if (m.find("FinishedTime") != m.end() && !m["FinishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["FinishedTime"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDiagnosticResultsResponseBodyDiagnosticResults() = default;
};
class ListDiagnosticResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDiagnosticResultsResponseBodyDiagnosticResults>> diagnosticResults{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListDiagnosticResultsResponseBody() {}

  explicit ListDiagnosticResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diagnosticResults) {
      vector<boost::any> temp1;
      for(auto item1:*diagnosticResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiagnosticResults"] = boost::any(temp1);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiagnosticResults") != m.end() && !m["DiagnosticResults"].empty()) {
      if (typeid(vector<boost::any>) == m["DiagnosticResults"].type()) {
        vector<ListDiagnosticResultsResponseBodyDiagnosticResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiagnosticResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDiagnosticResultsResponseBodyDiagnosticResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        diagnosticResults = make_shared<vector<ListDiagnosticResultsResponseBodyDiagnosticResults>>(expect1);
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
  }


  virtual ~ListDiagnosticResultsResponseBody() = default;
};
class ListDiagnosticResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDiagnosticResultsResponseBody> body{};

  ListDiagnosticResultsResponse() {}

  explicit ListDiagnosticResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDiagnosticResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDiagnosticResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDiagnosticResultsResponse() = default;
};
class ListFreeNodesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListFreeNodesRequestTags() {}

  explicit ListFreeNodesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListFreeNodesRequestTags() = default;
};
class ListFreeNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> hpnZone{};
  shared_ptr<string> machineType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> operatingStates{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListFreeNodesRequestTags>> tags{};

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
    if (operatingStates) {
      res["OperatingStates"] = boost::any(*operatingStates);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("OperatingStates") != m.end() && !m["OperatingStates"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperatingStates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperatingStates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operatingStates = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListFreeNodesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFreeNodesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListFreeNodesRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListFreeNodesRequest() = default;
};
class ListFreeNodesResponseBodyNodesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListFreeNodesResponseBodyNodesTags() {}

  explicit ListFreeNodesResponseBodyNodesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListFreeNodesResponseBodyNodesTags() = default;
};
class ListFreeNodesResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> hpnZone{};
  shared_ptr<string> machineType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> operatingState{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sn{};
  shared_ptr<vector<ListFreeNodesResponseBodyNodesTags>> tags{};
  shared_ptr<string> zoneId{};

  ListFreeNodesResponseBodyNodes() {}

  explicit ListFreeNodesResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
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
    if (operatingState) {
      res["OperatingState"] = boost::any(*operatingState);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
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
    if (m.find("OperatingState") != m.end() && !m["OperatingState"].empty()) {
      operatingState = make_shared<string>(boost::any_cast<string>(m["OperatingState"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListFreeNodesResponseBodyNodesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFreeNodesResponseBodyNodesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListFreeNodesResponseBodyNodesTags>>(expect1);
      }
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class ListImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> imageVersion{};
  shared_ptr<string> platform{};

  ListImagesRequest() {}

  explicit ListImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~ListImagesRequest() = default;
};
class ListImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> description{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageVersion{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> platform{};
  shared_ptr<string> releaseFileMd5{};
  shared_ptr<string> releaseFileSize{};
  shared_ptr<string> type{};

  ListImagesResponseBodyImages() {}

  explicit ListImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
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
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (releaseFileMd5) {
      res["ReleaseFileMd5"] = boost::any(*releaseFileMd5);
    }
    if (releaseFileSize) {
      res["ReleaseFileSize"] = boost::any(*releaseFileSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
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
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("ReleaseFileMd5") != m.end() && !m["ReleaseFileMd5"].empty()) {
      releaseFileMd5 = make_shared<string>(boost::any_cast<string>(m["ReleaseFileMd5"]));
    }
    if (m.find("ReleaseFileSize") != m.end() && !m["ReleaseFileSize"].empty()) {
      releaseFileSize = make_shared<string>(boost::any_cast<string>(m["ReleaseFileSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListImagesResponseBodyImages() = default;
};
class ListImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListImagesResponseBodyImages>> images{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListImagesResponseBody() {}

  explicit ListImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
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
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<ListImagesResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ListImagesResponseBodyImages>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class ListMachineNetworkInfoRequestMachineHpnInfo : public Darabonba::Model {
public:
  shared_ptr<string> hpnZone{};
  shared_ptr<string> machineType{};
  shared_ptr<string> regionId{};

  ListMachineNetworkInfoRequestMachineHpnInfo() {}

  explicit ListMachineNetworkInfoRequestMachineHpnInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListMachineNetworkInfoRequestMachineHpnInfo() = default;
};
class ListMachineNetworkInfoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListMachineNetworkInfoRequestMachineHpnInfo>> machineHpnInfo{};

  ListMachineNetworkInfoRequest() {}

  explicit ListMachineNetworkInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (machineHpnInfo) {
      vector<boost::any> temp1;
      for(auto item1:*machineHpnInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MachineHpnInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MachineHpnInfo") != m.end() && !m["MachineHpnInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["MachineHpnInfo"].type()) {
        vector<ListMachineNetworkInfoRequestMachineHpnInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MachineHpnInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMachineNetworkInfoRequestMachineHpnInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        machineHpnInfo = make_shared<vector<ListMachineNetworkInfoRequestMachineHpnInfo>>(expect1);
      }
    }
  }


  virtual ~ListMachineNetworkInfoRequest() = default;
};
class ListMachineNetworkInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> machineHpnInfoShrink{};

  ListMachineNetworkInfoShrinkRequest() {}

  explicit ListMachineNetworkInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (machineHpnInfoShrink) {
      res["MachineHpnInfo"] = boost::any(*machineHpnInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MachineHpnInfo") != m.end() && !m["MachineHpnInfo"].empty()) {
      machineHpnInfoShrink = make_shared<string>(boost::any_cast<string>(m["MachineHpnInfo"]));
    }
  }


  virtual ~ListMachineNetworkInfoShrinkRequest() = default;
};
class ListMachineNetworkInfoResponseBodyMachineNetworkInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterNet{};
  shared_ptr<bool> enableJumboFrame{};
  shared_ptr<string> hpnZone{};
  shared_ptr<bool> isDpuMode{};
  shared_ptr<string> machineType{};
  shared_ptr<string> netArch{};
  shared_ptr<string> regionId{};

  ListMachineNetworkInfoResponseBodyMachineNetworkInfo() {}

  explicit ListMachineNetworkInfoResponseBodyMachineNetworkInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterNet) {
      res["ClusterNet"] = boost::any(*clusterNet);
    }
    if (enableJumboFrame) {
      res["EnableJumboFrame"] = boost::any(*enableJumboFrame);
    }
    if (hpnZone) {
      res["HpnZone"] = boost::any(*hpnZone);
    }
    if (isDpuMode) {
      res["IsDpuMode"] = boost::any(*isDpuMode);
    }
    if (machineType) {
      res["MachineType"] = boost::any(*machineType);
    }
    if (netArch) {
      res["NetArch"] = boost::any(*netArch);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterNet") != m.end() && !m["ClusterNet"].empty()) {
      clusterNet = make_shared<string>(boost::any_cast<string>(m["ClusterNet"]));
    }
    if (m.find("EnableJumboFrame") != m.end() && !m["EnableJumboFrame"].empty()) {
      enableJumboFrame = make_shared<bool>(boost::any_cast<bool>(m["EnableJumboFrame"]));
    }
    if (m.find("HpnZone") != m.end() && !m["HpnZone"].empty()) {
      hpnZone = make_shared<string>(boost::any_cast<string>(m["HpnZone"]));
    }
    if (m.find("IsDpuMode") != m.end() && !m["IsDpuMode"].empty()) {
      isDpuMode = make_shared<bool>(boost::any_cast<bool>(m["IsDpuMode"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      machineType = make_shared<string>(boost::any_cast<string>(m["MachineType"]));
    }
    if (m.find("NetArch") != m.end() && !m["NetArch"].empty()) {
      netArch = make_shared<string>(boost::any_cast<string>(m["NetArch"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListMachineNetworkInfoResponseBodyMachineNetworkInfo() = default;
};
class ListMachineNetworkInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo>> machineNetworkInfo{};
  shared_ptr<string> requestId{};

  ListMachineNetworkInfoResponseBody() {}

  explicit ListMachineNetworkInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (machineNetworkInfo) {
      vector<boost::any> temp1;
      for(auto item1:*machineNetworkInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MachineNetworkInfo"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MachineNetworkInfo") != m.end() && !m["MachineNetworkInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["MachineNetworkInfo"].type()) {
        vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MachineNetworkInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMachineNetworkInfoResponseBodyMachineNetworkInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        machineNetworkInfo = make_shared<vector<ListMachineNetworkInfoResponseBodyMachineNetworkInfo>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListMachineNetworkInfoResponseBody() = default;
};
class ListMachineNetworkInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMachineNetworkInfoResponseBody> body{};

  ListMachineNetworkInfoResponse() {}

  explicit ListMachineNetworkInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMachineNetworkInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMachineNetworkInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListMachineNetworkInfoResponse() = default;
};
class ListMachineTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListMachineTypesRequest() {}

  explicit ListMachineTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListMachineTypesRequest() = default;
};
class ListMachineTypesResponseBodyMachineTypes : public Darabonba::Model {
public:
  shared_ptr<long> bondNum{};
  shared_ptr<string> cpuInfo{};
  shared_ptr<string> diskInfo{};
  shared_ptr<string> gpuInfo{};
  shared_ptr<string> memoryInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> networkInfo{};
  shared_ptr<string> nodeCount{};
  shared_ptr<long> totalCpuCore{};
  shared_ptr<string> type{};

  ListMachineTypesResponseBodyMachineTypes() {}

  explicit ListMachineTypesResponseBodyMachineTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bondNum) {
      res["BondNum"] = boost::any(*bondNum);
    }
    if (cpuInfo) {
      res["CpuInfo"] = boost::any(*cpuInfo);
    }
    if (diskInfo) {
      res["DiskInfo"] = boost::any(*diskInfo);
    }
    if (gpuInfo) {
      res["GpuInfo"] = boost::any(*gpuInfo);
    }
    if (memoryInfo) {
      res["MemoryInfo"] = boost::any(*memoryInfo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (networkInfo) {
      res["NetworkInfo"] = boost::any(*networkInfo);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (totalCpuCore) {
      res["TotalCpuCore"] = boost::any(*totalCpuCore);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BondNum") != m.end() && !m["BondNum"].empty()) {
      bondNum = make_shared<long>(boost::any_cast<long>(m["BondNum"]));
    }
    if (m.find("CpuInfo") != m.end() && !m["CpuInfo"].empty()) {
      cpuInfo = make_shared<string>(boost::any_cast<string>(m["CpuInfo"]));
    }
    if (m.find("DiskInfo") != m.end() && !m["DiskInfo"].empty()) {
      diskInfo = make_shared<string>(boost::any_cast<string>(m["DiskInfo"]));
    }
    if (m.find("GpuInfo") != m.end() && !m["GpuInfo"].empty()) {
      gpuInfo = make_shared<string>(boost::any_cast<string>(m["GpuInfo"]));
    }
    if (m.find("MemoryInfo") != m.end() && !m["MemoryInfo"].empty()) {
      memoryInfo = make_shared<string>(boost::any_cast<string>(m["MemoryInfo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetworkInfo") != m.end() && !m["NetworkInfo"].empty()) {
      networkInfo = make_shared<string>(boost::any_cast<string>(m["NetworkInfo"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<string>(boost::any_cast<string>(m["NodeCount"]));
    }
    if (m.find("TotalCpuCore") != m.end() && !m["TotalCpuCore"].empty()) {
      totalCpuCore = make_shared<long>(boost::any_cast<long>(m["TotalCpuCore"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListMachineTypesResponseBodyMachineTypes() = default;
};
class ListMachineTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMachineTypesResponseBodyMachineTypes>> machineTypes{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListMachineTypesResponseBody() {}

  explicit ListMachineTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (machineTypes) {
      vector<boost::any> temp1;
      for(auto item1:*machineTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MachineTypes"] = boost::any(temp1);
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
    if (m.find("MachineTypes") != m.end() && !m["MachineTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["MachineTypes"].type()) {
        vector<ListMachineTypesResponseBodyMachineTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MachineTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMachineTypesResponseBodyMachineTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        machineTypes = make_shared<vector<ListMachineTypesResponseBodyMachineTypes>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListMachineTypesResponseBody() = default;
};
class ListMachineTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMachineTypesResponseBody> body{};

  ListMachineTypesResponse() {}

  explicit ListMachineTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMachineTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMachineTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMachineTypesResponse() = default;
};
class ListNetTestResultsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> netTestType{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};

  ListNetTestResultsRequest() {}

  explicit ListNetTestResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (netTestType) {
      res["NetTestType"] = boost::any(*netTestType);
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
    if (m.find("NetTestType") != m.end() && !m["NetTestType"].empty()) {
      netTestType = make_shared<string>(boost::any_cast<string>(m["NetTestType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListNetTestResultsRequest() = default;
};
class ListNetTestResultsResponseBodyNetTestResultsCommTestHosts : public Darabonba::Model {
public:
  shared_ptr<string> IP{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  ListNetTestResultsResponseBodyNetTestResultsCommTestHosts() {}

  explicit ListNetTestResultsResponseBodyNetTestResultsCommTestHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~ListNetTestResultsResponseBodyNetTestResultsCommTestHosts() = default;
};
class ListNetTestResultsResponseBodyNetTestResultsCommTest : public Darabonba::Model {
public:
  shared_ptr<string> GPUNum{};
  shared_ptr<vector<ListNetTestResultsResponseBodyNetTestResultsCommTestHosts>> hosts{};
  shared_ptr<string> model{};
  shared_ptr<string> type{};

  ListNetTestResultsResponseBodyNetTestResultsCommTest() {}

  explicit ListNetTestResultsResponseBodyNetTestResultsCommTest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (GPUNum) {
      res["GPUNum"] = boost::any(*GPUNum);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GPUNum") != m.end() && !m["GPUNum"].empty()) {
      GPUNum = make_shared<string>(boost::any_cast<string>(m["GPUNum"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<ListNetTestResultsResponseBodyNetTestResultsCommTestHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetTestResultsResponseBodyNetTestResultsCommTestHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<ListNetTestResultsResponseBodyNetTestResultsCommTestHosts>>(expect1);
      }
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNetTestResultsResponseBodyNetTestResultsCommTest() = default;
};
class ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts : public Darabonba::Model {
public:
  shared_ptr<string> bond{};
  shared_ptr<string> IP{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts() {}

  explicit ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bond) {
      res["Bond"] = boost::any(*bond);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bond") != m.end() && !m["Bond"].empty()) {
      bond = make_shared<string>(boost::any_cast<string>(m["Bond"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts() = default;
};
class ListNetTestResultsResponseBodyNetTestResultsDelayTest : public Darabonba::Model {
public:
  shared_ptr<vector<ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts>> hosts{};

  ListNetTestResultsResponseBodyNetTestResultsDelayTest() {}

  explicit ListNetTestResultsResponseBodyNetTestResultsDelayTest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<ListNetTestResultsResponseBodyNetTestResultsDelayTestHosts>>(expect1);
      }
    }
  }


  virtual ~ListNetTestResultsResponseBodyNetTestResultsDelayTest() = default;
};
class ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients : public Darabonba::Model {
public:
  shared_ptr<string> bond{};
  shared_ptr<string> IP{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients() {}

  explicit ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bond) {
      res["Bond"] = boost::any(*bond);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bond") != m.end() && !m["Bond"].empty()) {
      bond = make_shared<string>(boost::any_cast<string>(m["Bond"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients() = default;
};
class ListNetTestResultsResponseBodyNetTestResultsTrafficTestServers : public Darabonba::Model {
public:
  shared_ptr<string> bond{};
  shared_ptr<string> IP{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> serverName{};

  ListNetTestResultsResponseBodyNetTestResultsTrafficTestServers() {}

  explicit ListNetTestResultsResponseBodyNetTestResultsTrafficTestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bond) {
      res["Bond"] = boost::any(*bond);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (serverName) {
      res["ServerName"] = boost::any(*serverName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bond") != m.end() && !m["Bond"].empty()) {
      bond = make_shared<string>(boost::any_cast<string>(m["Bond"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ServerName") != m.end() && !m["ServerName"].empty()) {
      serverName = make_shared<string>(boost::any_cast<string>(m["ServerName"]));
    }
  }


  virtual ~ListNetTestResultsResponseBodyNetTestResultsTrafficTestServers() = default;
};
class ListNetTestResultsResponseBodyNetTestResultsTrafficTest : public Darabonba::Model {
public:
  shared_ptr<vector<ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients>> clients{};
  shared_ptr<long> duration{};
  shared_ptr<string> GDR{};
  shared_ptr<string> protocol{};
  shared_ptr<long> QP{};
  shared_ptr<vector<ListNetTestResultsResponseBodyNetTestResultsTrafficTestServers>> servers{};
  shared_ptr<string> trafficModel{};

  ListNetTestResultsResponseBodyNetTestResultsTrafficTest() {}

  explicit ListNetTestResultsResponseBodyNetTestResultsTrafficTest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clients) {
      vector<boost::any> temp1;
      for(auto item1:*clients){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clients"] = boost::any(temp1);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (GDR) {
      res["GDR"] = boost::any(*GDR);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (QP) {
      res["QP"] = boost::any(*QP);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    if (trafficModel) {
      res["TrafficModel"] = boost::any(*trafficModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      if (typeid(vector<boost::any>) == m["Clients"].type()) {
        vector<ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clients"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clients = make_shared<vector<ListNetTestResultsResponseBodyNetTestResultsTrafficTestClients>>(expect1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("GDR") != m.end() && !m["GDR"].empty()) {
      GDR = make_shared<string>(boost::any_cast<string>(m["GDR"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("QP") != m.end() && !m["QP"].empty()) {
      QP = make_shared<long>(boost::any_cast<long>(m["QP"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<ListNetTestResultsResponseBodyNetTestResultsTrafficTestServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetTestResultsResponseBodyNetTestResultsTrafficTestServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<ListNetTestResultsResponseBodyNetTestResultsTrafficTestServers>>(expect1);
      }
    }
    if (m.find("TrafficModel") != m.end() && !m["TrafficModel"].empty()) {
      trafficModel = make_shared<string>(boost::any_cast<string>(m["TrafficModel"]));
    }
  }


  virtual ~ListNetTestResultsResponseBodyNetTestResultsTrafficTest() = default;
};
class ListNetTestResultsResponseBodyNetTestResults : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<ListNetTestResultsResponseBodyNetTestResultsCommTest> commTest{};
  shared_ptr<string> creationTime{};
  shared_ptr<ListNetTestResultsResponseBodyNetTestResultsDelayTest> delayTest{};
  shared_ptr<string> finishedTime{};
  shared_ptr<string> netTestType{};
  shared_ptr<string> networkMode{};
  shared_ptr<string> port{};
  shared_ptr<string> status{};
  shared_ptr<string> testId{};
  shared_ptr<ListNetTestResultsResponseBodyNetTestResultsTrafficTest> trafficTest{};

  ListNetTestResultsResponseBodyNetTestResults() {}

  explicit ListNetTestResultsResponseBodyNetTestResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (commTest) {
      res["CommTest"] = commTest ? boost::any(commTest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (delayTest) {
      res["DelayTest"] = delayTest ? boost::any(delayTest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (finishedTime) {
      res["FinishedTime"] = boost::any(*finishedTime);
    }
    if (netTestType) {
      res["NetTestType"] = boost::any(*netTestType);
    }
    if (networkMode) {
      res["NetworkMode"] = boost::any(*networkMode);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (testId) {
      res["TestId"] = boost::any(*testId);
    }
    if (trafficTest) {
      res["TrafficTest"] = trafficTest ? boost::any(trafficTest->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CommTest") != m.end() && !m["CommTest"].empty()) {
      if (typeid(map<string, boost::any>) == m["CommTest"].type()) {
        ListNetTestResultsResponseBodyNetTestResultsCommTest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CommTest"]));
        commTest = make_shared<ListNetTestResultsResponseBodyNetTestResultsCommTest>(model1);
      }
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DelayTest") != m.end() && !m["DelayTest"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelayTest"].type()) {
        ListNetTestResultsResponseBodyNetTestResultsDelayTest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelayTest"]));
        delayTest = make_shared<ListNetTestResultsResponseBodyNetTestResultsDelayTest>(model1);
      }
    }
    if (m.find("FinishedTime") != m.end() && !m["FinishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["FinishedTime"]));
    }
    if (m.find("NetTestType") != m.end() && !m["NetTestType"].empty()) {
      netTestType = make_shared<string>(boost::any_cast<string>(m["NetTestType"]));
    }
    if (m.find("NetworkMode") != m.end() && !m["NetworkMode"].empty()) {
      networkMode = make_shared<string>(boost::any_cast<string>(m["NetworkMode"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TestId") != m.end() && !m["TestId"].empty()) {
      testId = make_shared<string>(boost::any_cast<string>(m["TestId"]));
    }
    if (m.find("TrafficTest") != m.end() && !m["TrafficTest"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficTest"].type()) {
        ListNetTestResultsResponseBodyNetTestResultsTrafficTest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficTest"]));
        trafficTest = make_shared<ListNetTestResultsResponseBodyNetTestResultsTrafficTest>(model1);
      }
    }
  }


  virtual ~ListNetTestResultsResponseBodyNetTestResults() = default;
};
class ListNetTestResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListNetTestResultsResponseBodyNetTestResults>> netTestResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListNetTestResultsResponseBody() {}

  explicit ListNetTestResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (netTestResults) {
      vector<boost::any> temp1;
      for(auto item1:*netTestResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetTestResults"] = boost::any(temp1);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NetTestResults") != m.end() && !m["NetTestResults"].empty()) {
      if (typeid(vector<boost::any>) == m["NetTestResults"].type()) {
        vector<ListNetTestResultsResponseBodyNetTestResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetTestResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNetTestResultsResponseBodyNetTestResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        netTestResults = make_shared<vector<ListNetTestResultsResponseBodyNetTestResults>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNetTestResultsResponseBody() = default;
};
class ListNetTestResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNetTestResultsResponseBody> body{};

  ListNetTestResultsResponse() {}

  explicit ListNetTestResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNetTestResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNetTestResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNetTestResultsResponse() = default;
};
class ListNodeGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> nodeGroupId{};

  ListNodeGroupsRequest() {}

  explicit ListNodeGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNodeGroupsRequest() = default;
};
class ListNodeGroupsResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<bool> fileSystemMountEnabled{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> machineType{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> updateTime{};
  shared_ptr<bool> virtualGpuEnabled{};
  shared_ptr<string> zoneId{};

  ListNodeGroupsResponseBodyGroups() {}

  explicit ListNodeGroupsResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileSystemMountEnabled) {
      res["FileSystemMountEnabled"] = boost::any(*fileSystemMountEnabled);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
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
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (virtualGpuEnabled) {
      res["VirtualGpuEnabled"] = boost::any(*virtualGpuEnabled);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileSystemMountEnabled") != m.end() && !m["FileSystemMountEnabled"].empty()) {
      fileSystemMountEnabled = make_shared<bool>(boost::any_cast<bool>(m["FileSystemMountEnabled"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
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
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VirtualGpuEnabled") != m.end() && !m["VirtualGpuEnabled"].empty()) {
      virtualGpuEnabled = make_shared<bool>(boost::any_cast<bool>(m["VirtualGpuEnabled"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListNodeGroupsResponseBodyGroups() = default;
};
class ListNodeGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeGroupsResponseBodyGroups>> groups{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListNodeGroupsResponseBody() {}

  explicit ListNodeGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
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
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<ListNodeGroupsResponseBodyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeGroupsResponseBodyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<ListNodeGroupsResponseBodyGroups>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNodeGroupsResponseBody() = default;
};
class ListNodeGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodeGroupsResponseBody> body{};

  ListNodeGroupsResponse() {}

  explicit ListNodeGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNodeGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodeGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodeGroupsResponse() = default;
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
class ListUserClusterTypesResponseBodyClusterTypes : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> typeName_{};

  ListUserClusterTypesResponseBodyClusterTypes() {}

  explicit ListUserClusterTypesResponseBodyClusterTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~ListUserClusterTypesResponseBodyClusterTypes() = default;
};
class ListUserClusterTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserClusterTypesResponseBodyClusterTypes>> clusterTypes{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListUserClusterTypesResponseBody() {}

  explicit ListUserClusterTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterTypes) {
      vector<boost::any> temp1;
      for(auto item1:*clusterTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterTypes"] = boost::any(temp1);
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
    if (m.find("ClusterTypes") != m.end() && !m["ClusterTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterTypes"].type()) {
        vector<ListUserClusterTypesResponseBodyClusterTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserClusterTypesResponseBodyClusterTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterTypes = make_shared<vector<ListUserClusterTypesResponseBodyClusterTypes>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserClusterTypesResponseBody() = default;
};
class ListUserClusterTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserClusterTypesResponseBody> body{};

  ListUserClusterTypesResponse() {}

  explicit ListUserClusterTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserClusterTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserClusterTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserClusterTypesResponse() = default;
};
class ListVscsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListVscsRequestTag() {}

  explicit ListVscsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVscsRequestTag() = default;
};
class ListVscsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> nodeIds{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListVscsRequestTag>> tag{};
  shared_ptr<string> vscName{};

  ListVscsRequest() {}

  explicit ListVscsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nodeIds) {
      res["NodeIds"] = boost::any(*nodeIds);
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
    if (vscName) {
      res["VscName"] = boost::any(*vscName);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListVscsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVscsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListVscsRequestTag>>(expect1);
      }
    }
    if (m.find("VscName") != m.end() && !m["VscName"].empty()) {
      vscName = make_shared<string>(boost::any_cast<string>(m["VscName"]));
    }
  }


  virtual ~ListVscsRequest() = default;
};
class ListVscsShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListVscsShrinkRequestTag() {}

  explicit ListVscsShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVscsShrinkRequestTag() = default;
};
class ListVscsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> nodeIdsShrink{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListVscsShrinkRequestTag>> tag{};
  shared_ptr<string> vscName{};

  ListVscsShrinkRequest() {}

  explicit ListVscsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (nodeIdsShrink) {
      res["NodeIds"] = boost::any(*nodeIdsShrink);
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
    if (vscName) {
      res["VscName"] = boost::any(*vscName);
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
    if (m.find("NodeIds") != m.end() && !m["NodeIds"].empty()) {
      nodeIdsShrink = make_shared<string>(boost::any_cast<string>(m["NodeIds"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListVscsShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVscsShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListVscsShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("VscName") != m.end() && !m["VscName"].empty()) {
      vscName = make_shared<string>(boost::any_cast<string>(m["VscName"]));
    }
  }


  virtual ~ListVscsShrinkRequest() = default;
};
class ListVscsResponseBodyVscsTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListVscsResponseBodyVscsTags() {}

  explicit ListVscsResponseBodyVscsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVscsResponseBodyVscsTags() = default;
};
class ListVscsResponseBodyVscs : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListVscsResponseBodyVscsTags>> tags{};
  shared_ptr<string> vscId{};
  shared_ptr<string> vscName{};
  shared_ptr<string> vscType{};

  ListVscsResponseBodyVscs() {}

  explicit ListVscsResponseBodyVscs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
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
    if (vscId) {
      res["VscId"] = boost::any(*vscId);
    }
    if (vscName) {
      res["VscName"] = boost::any(*vscName);
    }
    if (vscType) {
      res["VscType"] = boost::any(*vscType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListVscsResponseBodyVscsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVscsResponseBodyVscsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListVscsResponseBodyVscsTags>>(expect1);
      }
    }
    if (m.find("VscId") != m.end() && !m["VscId"].empty()) {
      vscId = make_shared<string>(boost::any_cast<string>(m["VscId"]));
    }
    if (m.find("VscName") != m.end() && !m["VscName"].empty()) {
      vscName = make_shared<string>(boost::any_cast<string>(m["VscName"]));
    }
    if (m.find("VscType") != m.end() && !m["VscType"].empty()) {
      vscType = make_shared<string>(boost::any_cast<string>(m["VscType"]));
    }
  }


  virtual ~ListVscsResponseBodyVscs() = default;
};
class ListVscsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListVscsResponseBodyVscs>> vscs{};

  ListVscsResponseBody() {}

  explicit ListVscsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vscs) {
      vector<boost::any> temp1;
      for(auto item1:*vscs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vscs"] = boost::any(temp1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Vscs") != m.end() && !m["Vscs"].empty()) {
      if (typeid(vector<boost::any>) == m["Vscs"].type()) {
        vector<ListVscsResponseBodyVscs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vscs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVscsResponseBodyVscs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vscs = make_shared<vector<ListVscsResponseBodyVscs>>(expect1);
      }
    }
  }


  virtual ~ListVscsResponseBody() = default;
};
class ListVscsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVscsResponseBody> body{};

  ListVscsResponse() {}

  explicit ListVscsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVscsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVscsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVscsResponse() = default;
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class RunCommandRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> commandContent{};
  shared_ptr<string> commandId{};
  shared_ptr<string> contentEncoding{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableParameter{};
  shared_ptr<string> frequency{};
  shared_ptr<string> launcher{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> nodeIdList{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> repeatMode{};
  shared_ptr<string> terminationMode{};
  shared_ptr<long> timeout{};
  shared_ptr<string> username{};
  shared_ptr<string> workingDir{};

  RunCommandRequest() {}

  explicit RunCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
    }
    if (contentEncoding) {
      res["ContentEncoding"] = boost::any(*contentEncoding);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enableParameter) {
      res["EnableParameter"] = boost::any(*enableParameter);
    }
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    if (launcher) {
      res["Launcher"] = boost::any(*launcher);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeIdList) {
      res["NodeIdList"] = boost::any(*nodeIdList);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (repeatMode) {
      res["RepeatMode"] = boost::any(*repeatMode);
    }
    if (terminationMode) {
      res["TerminationMode"] = boost::any(*terminationMode);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
    if (m.find("ContentEncoding") != m.end() && !m["ContentEncoding"].empty()) {
      contentEncoding = make_shared<string>(boost::any_cast<string>(m["ContentEncoding"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnableParameter") != m.end() && !m["EnableParameter"].empty()) {
      enableParameter = make_shared<bool>(boost::any_cast<bool>(m["EnableParameter"]));
    }
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<string>(boost::any_cast<string>(m["Frequency"]));
    }
    if (m.find("Launcher") != m.end() && !m["Launcher"].empty()) {
      launcher = make_shared<string>(boost::any_cast<string>(m["Launcher"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RepeatMode") != m.end() && !m["RepeatMode"].empty()) {
      repeatMode = make_shared<string>(boost::any_cast<string>(m["RepeatMode"]));
    }
    if (m.find("TerminationMode") != m.end() && !m["TerminationMode"].empty()) {
      terminationMode = make_shared<string>(boost::any_cast<string>(m["TerminationMode"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~RunCommandRequest() = default;
};
class RunCommandShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> commandContent{};
  shared_ptr<string> commandId{};
  shared_ptr<string> contentEncoding{};
  shared_ptr<string> description{};
  shared_ptr<bool> enableParameter{};
  shared_ptr<string> frequency{};
  shared_ptr<string> launcher{};
  shared_ptr<string> name{};
  shared_ptr<string> nodeIdListShrink{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> repeatMode{};
  shared_ptr<string> terminationMode{};
  shared_ptr<long> timeout{};
  shared_ptr<string> username{};
  shared_ptr<string> workingDir{};

  RunCommandShrinkRequest() {}

  explicit RunCommandShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
    }
    if (contentEncoding) {
      res["ContentEncoding"] = boost::any(*contentEncoding);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enableParameter) {
      res["EnableParameter"] = boost::any(*enableParameter);
    }
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    if (launcher) {
      res["Launcher"] = boost::any(*launcher);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeIdListShrink) {
      res["NodeIdList"] = boost::any(*nodeIdListShrink);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (repeatMode) {
      res["RepeatMode"] = boost::any(*repeatMode);
    }
    if (terminationMode) {
      res["TerminationMode"] = boost::any(*terminationMode);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
    if (m.find("ContentEncoding") != m.end() && !m["ContentEncoding"].empty()) {
      contentEncoding = make_shared<string>(boost::any_cast<string>(m["ContentEncoding"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnableParameter") != m.end() && !m["EnableParameter"].empty()) {
      enableParameter = make_shared<bool>(boost::any_cast<bool>(m["EnableParameter"]));
    }
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<string>(boost::any_cast<string>(m["Frequency"]));
    }
    if (m.find("Launcher") != m.end() && !m["Launcher"].empty()) {
      launcher = make_shared<string>(boost::any_cast<string>(m["Launcher"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      nodeIdListShrink = make_shared<string>(boost::any_cast<string>(m["NodeIdList"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RepeatMode") != m.end() && !m["RepeatMode"].empty()) {
      repeatMode = make_shared<string>(boost::any_cast<string>(m["RepeatMode"]));
    }
    if (m.find("TerminationMode") != m.end() && !m["TerminationMode"].empty()) {
      terminationMode = make_shared<string>(boost::any_cast<string>(m["TerminationMode"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~RunCommandShrinkRequest() = default;
};
class RunCommandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> invokeId{};
  shared_ptr<string> requestId{};

  RunCommandResponseBody() {}

  explicit RunCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunCommandResponseBody() = default;
};
class RunCommandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunCommandResponseBody> body{};

  RunCommandResponse() {}

  explicit RunCommandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunCommandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunCommandResponseBody>(model1);
      }
    }
  }


  virtual ~RunCommandResponse() = default;
};
class SendFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> description{};
  shared_ptr<string> fileGroup{};
  shared_ptr<string> fileMode{};
  shared_ptr<string> fileOwner{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> nodeIdList{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> targetDir{};
  shared_ptr<long> timeout{};

  SendFileRequest() {}

  explicit SendFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileGroup) {
      res["FileGroup"] = boost::any(*fileGroup);
    }
    if (fileMode) {
      res["FileMode"] = boost::any(*fileMode);
    }
    if (fileOwner) {
      res["FileOwner"] = boost::any(*fileOwner);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeIdList) {
      res["NodeIdList"] = boost::any(*nodeIdList);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (targetDir) {
      res["TargetDir"] = boost::any(*targetDir);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileGroup") != m.end() && !m["FileGroup"].empty()) {
      fileGroup = make_shared<string>(boost::any_cast<string>(m["FileGroup"]));
    }
    if (m.find("FileMode") != m.end() && !m["FileMode"].empty()) {
      fileMode = make_shared<string>(boost::any_cast<string>(m["FileMode"]));
    }
    if (m.find("FileOwner") != m.end() && !m["FileOwner"].empty()) {
      fileOwner = make_shared<string>(boost::any_cast<string>(m["FileOwner"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("TargetDir") != m.end() && !m["TargetDir"].empty()) {
      targetDir = make_shared<string>(boost::any_cast<string>(m["TargetDir"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~SendFileRequest() = default;
};
class SendFileShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> description{};
  shared_ptr<string> fileGroup{};
  shared_ptr<string> fileMode{};
  shared_ptr<string> fileOwner{};
  shared_ptr<string> name{};
  shared_ptr<string> nodeIdListShrink{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> targetDir{};
  shared_ptr<long> timeout{};

  SendFileShrinkRequest() {}

  explicit SendFileShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileGroup) {
      res["FileGroup"] = boost::any(*fileGroup);
    }
    if (fileMode) {
      res["FileMode"] = boost::any(*fileMode);
    }
    if (fileOwner) {
      res["FileOwner"] = boost::any(*fileOwner);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeIdListShrink) {
      res["NodeIdList"] = boost::any(*nodeIdListShrink);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (targetDir) {
      res["TargetDir"] = boost::any(*targetDir);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileGroup") != m.end() && !m["FileGroup"].empty()) {
      fileGroup = make_shared<string>(boost::any_cast<string>(m["FileGroup"]));
    }
    if (m.find("FileMode") != m.end() && !m["FileMode"].empty()) {
      fileMode = make_shared<string>(boost::any_cast<string>(m["FileMode"]));
    }
    if (m.find("FileOwner") != m.end() && !m["FileOwner"].empty()) {
      fileOwner = make_shared<string>(boost::any_cast<string>(m["FileOwner"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      nodeIdListShrink = make_shared<string>(boost::any_cast<string>(m["NodeIdList"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("TargetDir") != m.end() && !m["TargetDir"].empty()) {
      targetDir = make_shared<string>(boost::any_cast<string>(m["TargetDir"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~SendFileShrinkRequest() = default;
};
class SendFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> invokeId{};
  shared_ptr<string> requestId{};

  SendFileResponseBody() {}

  explicit SendFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendFileResponseBody() = default;
};
class SendFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendFileResponseBody> body{};

  SendFileResponse() {}

  explicit SendFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SendFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendFileResponseBody>(model1);
      }
    }
  }


  virtual ~SendFileResponse() = default;
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class StopInvocationRequest : public Darabonba::Model {
public:
  shared_ptr<string> invokeId{};
  shared_ptr<vector<string>> nodeIdList{};

  StopInvocationRequest() {}

  explicit StopInvocationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (nodeIdList) {
      res["NodeIdList"] = boost::any(*nodeIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StopInvocationRequest() = default;
};
class StopInvocationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> invokeId{};
  shared_ptr<string> nodeIdListShrink{};

  StopInvocationShrinkRequest() {}

  explicit StopInvocationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (nodeIdListShrink) {
      res["NodeIdList"] = boost::any(*nodeIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      nodeIdListShrink = make_shared<string>(boost::any_cast<string>(m["NodeIdList"]));
    }
  }


  virtual ~StopInvocationShrinkRequest() = default;
};
class StopInvocationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopInvocationResponseBody() {}

  explicit StopInvocationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopInvocationResponseBody() = default;
};
class StopInvocationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopInvocationResponseBody> body{};

  StopInvocationResponse() {}

  explicit StopInvocationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopInvocationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopInvocationResponseBody>(model1);
      }
    }
  }


  virtual ~StopInvocationResponse() = default;
};
class StopNodesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<vector<string>> nodes{};

  StopNodesRequest() {}

  explicit StopNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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


  virtual ~StopNodesRequest() = default;
};
class StopNodesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> ignoreFailedNodeTasks{};
  shared_ptr<string> nodesShrink{};

  StopNodesShrinkRequest() {}

  explicit StopNodesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ignoreFailedNodeTasks) {
      res["IgnoreFailedNodeTasks"] = boost::any(*ignoreFailedNodeTasks);
    }
    if (nodesShrink) {
      res["Nodes"] = boost::any(*nodesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IgnoreFailedNodeTasks") != m.end() && !m["IgnoreFailedNodeTasks"].empty()) {
      ignoreFailedNodeTasks = make_shared<bool>(boost::any_cast<bool>(m["IgnoreFailedNodeTasks"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodesShrink = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
  }


  virtual ~StopNodesShrinkRequest() = default;
};
class StopNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  StopNodesResponseBody() {}

  explicit StopNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopNodesResponseBody() = default;
};
class StopNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopNodesResponseBody> body{};

  StopNodesResponse() {}

  explicit StopNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopNodesResponseBody>(model1);
      }
    }
  }


  virtual ~StopNodesResponse() = default;
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
class UpdateNodeGroupRequest : public Darabonba::Model {
public:
  shared_ptr<bool> fileSystemMountEnabled{};
  shared_ptr<string> imageId{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> loginPassword{};
  shared_ptr<string> newNodeGroupName{};
  shared_ptr<string> nodeGroupId{};
  shared_ptr<string> userData{};

  UpdateNodeGroupRequest() {}

  explicit UpdateNodeGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemMountEnabled) {
      res["FileSystemMountEnabled"] = boost::any(*fileSystemMountEnabled);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (loginPassword) {
      res["LoginPassword"] = boost::any(*loginPassword);
    }
    if (newNodeGroupName) {
      res["NewNodeGroupName"] = boost::any(*newNodeGroupName);
    }
    if (nodeGroupId) {
      res["NodeGroupId"] = boost::any(*nodeGroupId);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemMountEnabled") != m.end() && !m["FileSystemMountEnabled"].empty()) {
      fileSystemMountEnabled = make_shared<bool>(boost::any_cast<bool>(m["FileSystemMountEnabled"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("LoginPassword") != m.end() && !m["LoginPassword"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["LoginPassword"]));
    }
    if (m.find("NewNodeGroupName") != m.end() && !m["NewNodeGroupName"].empty()) {
      newNodeGroupName = make_shared<string>(boost::any_cast<string>(m["NewNodeGroupName"]));
    }
    if (m.find("NodeGroupId") != m.end() && !m["NodeGroupId"].empty()) {
      nodeGroupId = make_shared<string>(boost::any_cast<string>(m["NodeGroupId"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~UpdateNodeGroupRequest() = default;
};
class UpdateNodeGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UpdateNodeGroupResponseBody() {}

  explicit UpdateNodeGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateNodeGroupResponseBody() = default;
};
class UpdateNodeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNodeGroupResponseBody> body{};

  UpdateNodeGroupResponse() {}

  explicit UpdateNodeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateNodeGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNodeGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNodeGroupResponse() = default;
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
  CloseSessionResponse closeSessionWithOptions(shared_ptr<CloseSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseSessionResponse closeSession(shared_ptr<CloseSessionRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateDiagnosticTaskResponse createDiagnosticTaskWithOptions(shared_ptr<CreateDiagnosticTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDiagnosticTaskResponse createDiagnosticTask(shared_ptr<CreateDiagnosticTaskRequest> request);
  CreateNetTestTaskResponse createNetTestTaskWithOptions(shared_ptr<CreateNetTestTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNetTestTaskResponse createNetTestTask(shared_ptr<CreateNetTestTaskRequest> request);
  CreateNodeGroupResponse createNodeGroupWithOptions(shared_ptr<CreateNodeGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNodeGroupResponse createNodeGroup(shared_ptr<CreateNodeGroupRequest> request);
  CreateSessionResponse createSessionWithOptions(shared_ptr<CreateSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSessionResponse createSession(shared_ptr<CreateSessionRequest> request);
  CreateVscResponse createVscWithOptions(shared_ptr<CreateVscRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVscResponse createVsc(shared_ptr<CreateVscRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DeleteNodeGroupResponse deleteNodeGroupWithOptions(shared_ptr<DeleteNodeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNodeGroupResponse deleteNodeGroup(shared_ptr<DeleteNodeGroupRequest> request);
  DeleteVscResponse deleteVscWithOptions(shared_ptr<DeleteVscRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVscResponse deleteVsc(shared_ptr<DeleteVscRequest> request);
  DescribeClusterResponse describeClusterWithOptions(shared_ptr<DescribeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterResponse describeCluster(shared_ptr<DescribeClusterRequest> request);
  DescribeDiagnosticResultResponse describeDiagnosticResultWithOptions(shared_ptr<DescribeDiagnosticResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDiagnosticResultResponse describeDiagnosticResult(shared_ptr<DescribeDiagnosticResultRequest> request);
  DescribeInvocationsResponse describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInvocationsResponse describeInvocations(shared_ptr<DescribeInvocationsRequest> request);
  DescribeNetTestResultResponse describeNetTestResultWithOptions(shared_ptr<DescribeNetTestResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNetTestResultResponse describeNetTestResult(shared_ptr<DescribeNetTestResultRequest> request);
  DescribeNodeResponse describeNodeWithOptions(shared_ptr<DescribeNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNodeResponse describeNode(shared_ptr<DescribeNodeRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSendFileResultsResponse describeSendFileResultsWithOptions(shared_ptr<DescribeSendFileResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSendFileResultsResponse describeSendFileResults(shared_ptr<DescribeSendFileResultsRequest> request);
  DescribeTaskResponse describeTaskWithOptions(shared_ptr<DescribeTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTaskResponse describeTask(shared_ptr<DescribeTaskRequest> request);
  DescribeVscResponse describeVscWithOptions(shared_ptr<DescribeVscRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVscResponse describeVsc(shared_ptr<DescribeVscRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  ExtendClusterResponse extendClusterWithOptions(shared_ptr<ExtendClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtendClusterResponse extendCluster(shared_ptr<ExtendClusterRequest> request);
  ListClusterNodesResponse listClusterNodesWithOptions(shared_ptr<ListClusterNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterNodesResponse listClusterNodes(shared_ptr<ListClusterNodesRequest> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListDiagnosticResultsResponse listDiagnosticResultsWithOptions(shared_ptr<ListDiagnosticResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDiagnosticResultsResponse listDiagnosticResults(shared_ptr<ListDiagnosticResultsRequest> request);
  ListFreeNodesResponse listFreeNodesWithOptions(shared_ptr<ListFreeNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFreeNodesResponse listFreeNodes(shared_ptr<ListFreeNodesRequest> request);
  ListImagesResponse listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesResponse listImages(shared_ptr<ListImagesRequest> request);
  ListMachineNetworkInfoResponse listMachineNetworkInfoWithOptions(shared_ptr<ListMachineNetworkInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMachineNetworkInfoResponse listMachineNetworkInfo(shared_ptr<ListMachineNetworkInfoRequest> request);
  ListMachineTypesResponse listMachineTypesWithOptions(shared_ptr<ListMachineTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMachineTypesResponse listMachineTypes(shared_ptr<ListMachineTypesRequest> request);
  ListNetTestResultsResponse listNetTestResultsWithOptions(shared_ptr<ListNetTestResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNetTestResultsResponse listNetTestResults(shared_ptr<ListNetTestResultsRequest> request);
  ListNodeGroupsResponse listNodeGroupsWithOptions(shared_ptr<ListNodeGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodeGroupsResponse listNodeGroups(shared_ptr<ListNodeGroupsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListUserClusterTypesResponse listUserClusterTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserClusterTypesResponse listUserClusterTypes();
  ListVscsResponse listVscsWithOptions(shared_ptr<ListVscsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVscsResponse listVscs(shared_ptr<ListVscsRequest> request);
  RebootNodesResponse rebootNodesWithOptions(shared_ptr<RebootNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebootNodesResponse rebootNodes(shared_ptr<RebootNodesRequest> request);
  ReimageNodesResponse reimageNodesWithOptions(shared_ptr<ReimageNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReimageNodesResponse reimageNodes(shared_ptr<ReimageNodesRequest> request);
  RunCommandResponse runCommandWithOptions(shared_ptr<RunCommandRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCommandResponse runCommand(shared_ptr<RunCommandRequest> request);
  SendFileResponse sendFileWithOptions(shared_ptr<SendFileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendFileResponse sendFile(shared_ptr<SendFileRequest> request);
  ShrinkClusterResponse shrinkClusterWithOptions(shared_ptr<ShrinkClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ShrinkClusterResponse shrinkCluster(shared_ptr<ShrinkClusterRequest> request);
  StopInvocationResponse stopInvocationWithOptions(shared_ptr<StopInvocationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopInvocationResponse stopInvocation(shared_ptr<StopInvocationRequest> request);
  StopNodesResponse stopNodesWithOptions(shared_ptr<StopNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopNodesResponse stopNodes(shared_ptr<StopNodesRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateNodeGroupResponse updateNodeGroupWithOptions(shared_ptr<UpdateNodeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNodeGroupResponse updateNodeGroup(shared_ptr<UpdateNodeGroupRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eflo-controller20221215

#endif
