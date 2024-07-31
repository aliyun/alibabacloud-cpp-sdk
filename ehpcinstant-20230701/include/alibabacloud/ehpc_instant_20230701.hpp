// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EHPCINSTANT20230701_H_
#define ALIBABACLOUD_EHPCINSTANT20230701_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EhpcInstant20230701 {
class AddImageRequestContainerImageSpecRegistryCredential : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> server{};
  shared_ptr<string> userName{};

  AddImageRequestContainerImageSpecRegistryCredential() {}

  explicit AddImageRequestContainerImageSpecRegistryCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddImageRequestContainerImageSpecRegistryCredential() = default;
};
class AddImageRequestContainerImageSpec : public Darabonba::Model {
public:
  shared_ptr<bool> isACREnterprise{};
  shared_ptr<bool> isACRRegistry{};
  shared_ptr<AddImageRequestContainerImageSpecRegistryCredential> registryCredential{};
  shared_ptr<string> registryCriId{};
  shared_ptr<string> registryUrl{};

  AddImageRequestContainerImageSpec() {}

  explicit AddImageRequestContainerImageSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isACREnterprise) {
      res["IsACREnterprise"] = boost::any(*isACREnterprise);
    }
    if (isACRRegistry) {
      res["IsACRRegistry"] = boost::any(*isACRRegistry);
    }
    if (registryCredential) {
      res["RegistryCredential"] = registryCredential ? boost::any(registryCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (registryCriId) {
      res["RegistryCriId"] = boost::any(*registryCriId);
    }
    if (registryUrl) {
      res["RegistryUrl"] = boost::any(*registryUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsACREnterprise") != m.end() && !m["IsACREnterprise"].empty()) {
      isACREnterprise = make_shared<bool>(boost::any_cast<bool>(m["IsACREnterprise"]));
    }
    if (m.find("IsACRRegistry") != m.end() && !m["IsACRRegistry"].empty()) {
      isACRRegistry = make_shared<bool>(boost::any_cast<bool>(m["IsACRRegistry"]));
    }
    if (m.find("RegistryCredential") != m.end() && !m["RegistryCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegistryCredential"].type()) {
        AddImageRequestContainerImageSpecRegistryCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegistryCredential"]));
        registryCredential = make_shared<AddImageRequestContainerImageSpecRegistryCredential>(model1);
      }
    }
    if (m.find("RegistryCriId") != m.end() && !m["RegistryCriId"].empty()) {
      registryCriId = make_shared<string>(boost::any_cast<string>(m["RegistryCriId"]));
    }
    if (m.find("RegistryUrl") != m.end() && !m["RegistryUrl"].empty()) {
      registryUrl = make_shared<string>(boost::any_cast<string>(m["RegistryUrl"]));
    }
  }


  virtual ~AddImageRequestContainerImageSpec() = default;
};
class AddImageRequestVMImageSpec : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};

  AddImageRequestVMImageSpec() {}

  explicit AddImageRequestVMImageSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
  }


  virtual ~AddImageRequestVMImageSpec() = default;
};
class AddImageRequest : public Darabonba::Model {
public:
  shared_ptr<AddImageRequestContainerImageSpec> containerImageSpec{};
  shared_ptr<string> description{};
  shared_ptr<string> imageVersion{};
  shared_ptr<string> name{};
  shared_ptr<AddImageRequestVMImageSpec> VMImageSpec{};

  AddImageRequest() {}

  explicit AddImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerImageSpec) {
      res["ContainerImageSpec"] = containerImageSpec ? boost::any(containerImageSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (VMImageSpec) {
      res["VMImageSpec"] = VMImageSpec ? boost::any(VMImageSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerImageSpec") != m.end() && !m["ContainerImageSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ContainerImageSpec"].type()) {
        AddImageRequestContainerImageSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ContainerImageSpec"]));
        containerImageSpec = make_shared<AddImageRequestContainerImageSpec>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VMImageSpec") != m.end() && !m["VMImageSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["VMImageSpec"].type()) {
        AddImageRequestVMImageSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VMImageSpec"]));
        VMImageSpec = make_shared<AddImageRequestVMImageSpec>(model1);
      }
    }
  }


  virtual ~AddImageRequest() = default;
};
class AddImageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerImageSpecShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> imageVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> VMImageSpecShrink{};

  AddImageShrinkRequest() {}

  explicit AddImageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerImageSpecShrink) {
      res["ContainerImageSpec"] = boost::any(*containerImageSpecShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageVersion) {
      res["ImageVersion"] = boost::any(*imageVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (VMImageSpecShrink) {
      res["VMImageSpec"] = boost::any(*VMImageSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerImageSpec") != m.end() && !m["ContainerImageSpec"].empty()) {
      containerImageSpecShrink = make_shared<string>(boost::any_cast<string>(m["ContainerImageSpec"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageVersion") != m.end() && !m["ImageVersion"].empty()) {
      imageVersion = make_shared<string>(boost::any_cast<string>(m["ImageVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VMImageSpec") != m.end() && !m["VMImageSpec"].empty()) {
      VMImageSpecShrink = make_shared<string>(boost::any_cast<string>(m["VMImageSpec"]));
    }
  }


  virtual ~AddImageShrinkRequest() = default;
};
class AddImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddImageResponseBody() {}

  explicit AddImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
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
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddImageResponseBody() = default;
};
class AddImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImageResponseBody> body{};

  AddImageResponse() {}

  explicit AddImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImageResponseBody>(model1);
      }
    }
  }


  virtual ~AddImageResponse() = default;
};
class CreateJobRequestDeploymentPolicyNetwork : public Darabonba::Model {
public:
  shared_ptr<vector<string>> vswitch{};

  CreateJobRequestDeploymentPolicyNetwork() {}

  explicit CreateJobRequestDeploymentPolicyNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vswitch) {
      res["Vswitch"] = boost::any(*vswitch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vswitch") != m.end() && !m["Vswitch"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Vswitch"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Vswitch"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswitch = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateJobRequestDeploymentPolicyNetwork() = default;
};
class CreateJobRequestDeploymentPolicy : public Darabonba::Model {
public:
  shared_ptr<string> allocationSpec{};
  shared_ptr<CreateJobRequestDeploymentPolicyNetwork> network{};

  CreateJobRequestDeploymentPolicy() {}

  explicit CreateJobRequestDeploymentPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationSpec) {
      res["AllocationSpec"] = boost::any(*allocationSpec);
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationSpec") != m.end() && !m["AllocationSpec"].empty()) {
      allocationSpec = make_shared<string>(boost::any_cast<string>(m["AllocationSpec"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        CreateJobRequestDeploymentPolicyNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<CreateJobRequestDeploymentPolicyNetwork>(model1);
      }
    }
  }


  virtual ~CreateJobRequestDeploymentPolicy() = default;
};
class CreateJobRequestTasksExecutorPolicyArraySpec : public Darabonba::Model {
public:
  shared_ptr<long> indexEnd{};
  shared_ptr<long> indexStart{};
  shared_ptr<long> indexStep{};

  CreateJobRequestTasksExecutorPolicyArraySpec() {}

  explicit CreateJobRequestTasksExecutorPolicyArraySpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexEnd) {
      res["IndexEnd"] = boost::any(*indexEnd);
    }
    if (indexStart) {
      res["IndexStart"] = boost::any(*indexStart);
    }
    if (indexStep) {
      res["IndexStep"] = boost::any(*indexStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexEnd") != m.end() && !m["IndexEnd"].empty()) {
      indexEnd = make_shared<long>(boost::any_cast<long>(m["IndexEnd"]));
    }
    if (m.find("IndexStart") != m.end() && !m["IndexStart"].empty()) {
      indexStart = make_shared<long>(boost::any_cast<long>(m["IndexStart"]));
    }
    if (m.find("IndexStep") != m.end() && !m["IndexStep"].empty()) {
      indexStep = make_shared<long>(boost::any_cast<long>(m["IndexStep"]));
    }
  }


  virtual ~CreateJobRequestTasksExecutorPolicyArraySpec() = default;
};
class CreateJobRequestTasksExecutorPolicy : public Darabonba::Model {
public:
  shared_ptr<CreateJobRequestTasksExecutorPolicyArraySpec> arraySpec{};
  shared_ptr<long> maxCount{};

  CreateJobRequestTasksExecutorPolicy() {}

  explicit CreateJobRequestTasksExecutorPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arraySpec) {
      res["ArraySpec"] = arraySpec ? boost::any(arraySpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArraySpec") != m.end() && !m["ArraySpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArraySpec"].type()) {
        CreateJobRequestTasksExecutorPolicyArraySpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArraySpec"]));
        arraySpec = make_shared<CreateJobRequestTasksExecutorPolicyArraySpec>(model1);
      }
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
  }


  virtual ~CreateJobRequestTasksExecutorPolicy() = default;
};
class CreateJobRequestTasksTaskSpecResourceDisks : public Darabonba::Model {
public:
  shared_ptr<long> size{};
  shared_ptr<string> type{};

  CreateJobRequestTasksTaskSpecResourceDisks() {}

  explicit CreateJobRequestTasksTaskSpecResourceDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateJobRequestTasksTaskSpecResourceDisks() = default;
};
class CreateJobRequestTasksTaskSpecResource : public Darabonba::Model {
public:
  shared_ptr<double> cores{};
  shared_ptr<vector<CreateJobRequestTasksTaskSpecResourceDisks>> disks{};
  shared_ptr<double> memory{};

  CreateJobRequestTasksTaskSpecResource() {}

  explicit CreateJobRequestTasksTaskSpecResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<double>(boost::any_cast<double>(m["Cores"]));
    }
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(vector<boost::any>) == m["Disks"].type()) {
        vector<CreateJobRequestTasksTaskSpecResourceDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateJobRequestTasksTaskSpecResourceDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disks = make_shared<vector<CreateJobRequestTasksTaskSpecResourceDisks>>(expect1);
      }
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
  }


  virtual ~CreateJobRequestTasksTaskSpecResource() = default;
};
class CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars() {}

  explicit CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars() = default;
};
class CreateJobRequestTasksTaskSpecTaskExecutorContainer : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> command{};
  shared_ptr<vector<CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars>> environmentVars{};
  shared_ptr<string> image{};
  shared_ptr<string> workingDir{};

  CreateJobRequestTasksTaskSpecTaskExecutorContainer() {}

  explicit CreateJobRequestTasksTaskSpecTaskExecutorContainer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (environmentVars) {
      vector<boost::any> temp1;
      for(auto item1:*environmentVars){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnvironmentVars"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
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
    if (m.find("EnvironmentVars") != m.end() && !m["EnvironmentVars"].empty()) {
      if (typeid(vector<boost::any>) == m["EnvironmentVars"].type()) {
        vector<CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnvironmentVars"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        environmentVars = make_shared<vector<CreateJobRequestTasksTaskSpecTaskExecutorContainerEnvironmentVars>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~CreateJobRequestTasksTaskSpecTaskExecutorContainer() = default;
};
class CreateJobRequestTasksTaskSpecTaskExecutorVM : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> image{};
  shared_ptr<string> prologScript{};
  shared_ptr<string> script{};

  CreateJobRequestTasksTaskSpecTaskExecutorVM() {}

  explicit CreateJobRequestTasksTaskSpecTaskExecutorVM(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (prologScript) {
      res["PrologScript"] = boost::any(*prologScript);
    }
    if (script) {
      res["Script"] = boost::any(*script);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("PrologScript") != m.end() && !m["PrologScript"].empty()) {
      prologScript = make_shared<string>(boost::any_cast<string>(m["PrologScript"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["Script"]));
    }
  }


  virtual ~CreateJobRequestTasksTaskSpecTaskExecutorVM() = default;
};
class CreateJobRequestTasksTaskSpecTaskExecutor : public Darabonba::Model {
public:
  shared_ptr<CreateJobRequestTasksTaskSpecTaskExecutorContainer> container{};
  shared_ptr<CreateJobRequestTasksTaskSpecTaskExecutorVM> VM{};

  CreateJobRequestTasksTaskSpecTaskExecutor() {}

  explicit CreateJobRequestTasksTaskSpecTaskExecutor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (container) {
      res["Container"] = container ? boost::any(container->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (VM) {
      res["VM"] = VM ? boost::any(VM->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Container") != m.end() && !m["Container"].empty()) {
      if (typeid(map<string, boost::any>) == m["Container"].type()) {
        CreateJobRequestTasksTaskSpecTaskExecutorContainer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Container"]));
        container = make_shared<CreateJobRequestTasksTaskSpecTaskExecutorContainer>(model1);
      }
    }
    if (m.find("VM") != m.end() && !m["VM"].empty()) {
      if (typeid(map<string, boost::any>) == m["VM"].type()) {
        CreateJobRequestTasksTaskSpecTaskExecutorVM model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VM"]));
        VM = make_shared<CreateJobRequestTasksTaskSpecTaskExecutorVM>(model1);
      }
    }
  }


  virtual ~CreateJobRequestTasksTaskSpecTaskExecutor() = default;
};
class CreateJobRequestTasksTaskSpecVolumeMount : public Darabonba::Model {
public:
  shared_ptr<string> mountOptions{};
  shared_ptr<string> mountPath{};
  shared_ptr<string> volumeDriver{};

  CreateJobRequestTasksTaskSpecVolumeMount() {}

  explicit CreateJobRequestTasksTaskSpecVolumeMount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountOptions) {
      res["MountOptions"] = boost::any(*mountOptions);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    if (volumeDriver) {
      res["VolumeDriver"] = boost::any(*volumeDriver);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountOptions") != m.end() && !m["MountOptions"].empty()) {
      mountOptions = make_shared<string>(boost::any_cast<string>(m["MountOptions"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
    if (m.find("VolumeDriver") != m.end() && !m["VolumeDriver"].empty()) {
      volumeDriver = make_shared<string>(boost::any_cast<string>(m["VolumeDriver"]));
    }
  }


  virtual ~CreateJobRequestTasksTaskSpecVolumeMount() = default;
};
class CreateJobRequestTasksTaskSpec : public Darabonba::Model {
public:
  shared_ptr<CreateJobRequestTasksTaskSpecResource> resource{};
  shared_ptr<vector<CreateJobRequestTasksTaskSpecTaskExecutor>> taskExecutor{};
  shared_ptr<vector<CreateJobRequestTasksTaskSpecVolumeMount>> volumeMount{};

  CreateJobRequestTasksTaskSpec() {}

  explicit CreateJobRequestTasksTaskSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      res["Resource"] = resource ? boost::any(resource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskExecutor) {
      vector<boost::any> temp1;
      for(auto item1:*taskExecutor){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskExecutor"] = boost::any(temp1);
    }
    if (volumeMount) {
      vector<boost::any> temp1;
      for(auto item1:*volumeMount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeMount"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resource"].type()) {
        CreateJobRequestTasksTaskSpecResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resource"]));
        resource = make_shared<CreateJobRequestTasksTaskSpecResource>(model1);
      }
    }
    if (m.find("TaskExecutor") != m.end() && !m["TaskExecutor"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskExecutor"].type()) {
        vector<CreateJobRequestTasksTaskSpecTaskExecutor> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskExecutor"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateJobRequestTasksTaskSpecTaskExecutor model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskExecutor = make_shared<vector<CreateJobRequestTasksTaskSpecTaskExecutor>>(expect1);
      }
    }
    if (m.find("VolumeMount") != m.end() && !m["VolumeMount"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeMount"].type()) {
        vector<CreateJobRequestTasksTaskSpecVolumeMount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeMount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateJobRequestTasksTaskSpecVolumeMount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeMount = make_shared<vector<CreateJobRequestTasksTaskSpecVolumeMount>>(expect1);
      }
    }
  }


  virtual ~CreateJobRequestTasksTaskSpec() = default;
};
class CreateJobRequestTasks : public Darabonba::Model {
public:
  shared_ptr<CreateJobRequestTasksExecutorPolicy> executorPolicy{};
  shared_ptr<string> taskName{};
  shared_ptr<CreateJobRequestTasksTaskSpec> taskSpec{};
  shared_ptr<bool> taskSustainable{};

  CreateJobRequestTasks() {}

  explicit CreateJobRequestTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executorPolicy) {
      res["ExecutorPolicy"] = executorPolicy ? boost::any(executorPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskSpec) {
      res["TaskSpec"] = taskSpec ? boost::any(taskSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskSustainable) {
      res["TaskSustainable"] = boost::any(*taskSustainable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutorPolicy") != m.end() && !m["ExecutorPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecutorPolicy"].type()) {
        CreateJobRequestTasksExecutorPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecutorPolicy"]));
        executorPolicy = make_shared<CreateJobRequestTasksExecutorPolicy>(model1);
      }
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskSpec") != m.end() && !m["TaskSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskSpec"].type()) {
        CreateJobRequestTasksTaskSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskSpec"]));
        taskSpec = make_shared<CreateJobRequestTasksTaskSpec>(model1);
      }
    }
    if (m.find("TaskSustainable") != m.end() && !m["TaskSustainable"].empty()) {
      taskSustainable = make_shared<bool>(boost::any_cast<bool>(m["TaskSustainable"]));
    }
  }


  virtual ~CreateJobRequestTasks() = default;
};
class CreateJobRequest : public Darabonba::Model {
public:
  shared_ptr<CreateJobRequestDeploymentPolicy> deploymentPolicy{};
  shared_ptr<string> jobDescription{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobScheduler{};
  shared_ptr<vector<CreateJobRequestTasks>> tasks{};

  CreateJobRequest() {}

  explicit CreateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentPolicy) {
      res["DeploymentPolicy"] = deploymentPolicy ? boost::any(deploymentPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobDescription) {
      res["JobDescription"] = boost::any(*jobDescription);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobScheduler) {
      res["JobScheduler"] = boost::any(*jobScheduler);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeploymentPolicy") != m.end() && !m["DeploymentPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeploymentPolicy"].type()) {
        CreateJobRequestDeploymentPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeploymentPolicy"]));
        deploymentPolicy = make_shared<CreateJobRequestDeploymentPolicy>(model1);
      }
    }
    if (m.find("JobDescription") != m.end() && !m["JobDescription"].empty()) {
      jobDescription = make_shared<string>(boost::any_cast<string>(m["JobDescription"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobScheduler") != m.end() && !m["JobScheduler"].empty()) {
      jobScheduler = make_shared<string>(boost::any_cast<string>(m["JobScheduler"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<CreateJobRequestTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateJobRequestTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<CreateJobRequestTasks>>(expect1);
      }
    }
  }


  virtual ~CreateJobRequest() = default;
};
class CreateJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deploymentPolicyShrink{};
  shared_ptr<string> jobDescription{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobScheduler{};
  shared_ptr<string> tasksShrink{};

  CreateJobShrinkRequest() {}

  explicit CreateJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentPolicyShrink) {
      res["DeploymentPolicy"] = boost::any(*deploymentPolicyShrink);
    }
    if (jobDescription) {
      res["JobDescription"] = boost::any(*jobDescription);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobScheduler) {
      res["JobScheduler"] = boost::any(*jobScheduler);
    }
    if (tasksShrink) {
      res["Tasks"] = boost::any(*tasksShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeploymentPolicy") != m.end() && !m["DeploymentPolicy"].empty()) {
      deploymentPolicyShrink = make_shared<string>(boost::any_cast<string>(m["DeploymentPolicy"]));
    }
    if (m.find("JobDescription") != m.end() && !m["JobDescription"].empty()) {
      jobDescription = make_shared<string>(boost::any_cast<string>(m["JobDescription"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobScheduler") != m.end() && !m["JobScheduler"].empty()) {
      jobScheduler = make_shared<string>(boost::any_cast<string>(m["JobScheduler"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      tasksShrink = make_shared<string>(boost::any_cast<string>(m["Tasks"]));
    }
  }


  virtual ~CreateJobShrinkRequest() = default;
};
class CreateJobResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<vector<string>> executorIds{};
  shared_ptr<string> taskName{};

  CreateJobResponseBodyTasks() {}

  explicit CreateJobResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executorIds) {
      res["ExecutorIds"] = boost::any(*executorIds);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutorIds") != m.end() && !m["ExecutorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExecutorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExecutorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      executorIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~CreateJobResponseBodyTasks() = default;
};
class CreateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<CreateJobResponseBodyTasks>> tasks{};

  CreateJobResponseBody() {}

  explicit CreateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
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
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<CreateJobResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateJobResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<CreateJobResponseBodyTasks>>(expect1);
      }
    }
  }


  virtual ~CreateJobResponseBody() = default;
};
class CreateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateJobResponseBody> body{};

  CreateJobResponse() {}

  explicit CreateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateJobResponse() = default;
};
class DeleteJobsRequestJobSpecTaskSpec : public Darabonba::Model {
public:
  shared_ptr<vector<long>> arrayIndex{};
  shared_ptr<string> taskName{};

  DeleteJobsRequestJobSpecTaskSpec() {}

  explicit DeleteJobsRequestJobSpecTaskSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayIndex) {
      res["ArrayIndex"] = boost::any(*arrayIndex);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayIndex") != m.end() && !m["ArrayIndex"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ArrayIndex"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ArrayIndex"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      arrayIndex = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~DeleteJobsRequestJobSpecTaskSpec() = default;
};
class DeleteJobsRequestJobSpec : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<vector<DeleteJobsRequestJobSpecTaskSpec>> taskSpec{};

  DeleteJobsRequestJobSpec() {}

  explicit DeleteJobsRequestJobSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (taskSpec) {
      vector<boost::any> temp1;
      for(auto item1:*taskSpec){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskSpec"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("TaskSpec") != m.end() && !m["TaskSpec"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskSpec"].type()) {
        vector<DeleteJobsRequestJobSpecTaskSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskSpec"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteJobsRequestJobSpecTaskSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskSpec = make_shared<vector<DeleteJobsRequestJobSpecTaskSpec>>(expect1);
      }
    }
  }


  virtual ~DeleteJobsRequestJobSpec() = default;
};
class DeleteJobsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> executorIds{};
  shared_ptr<vector<DeleteJobsRequestJobSpec>> jobSpec{};

  DeleteJobsRequest() {}

  explicit DeleteJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executorIds) {
      res["ExecutorIds"] = boost::any(*executorIds);
    }
    if (jobSpec) {
      vector<boost::any> temp1;
      for(auto item1:*jobSpec){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobSpec"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutorIds") != m.end() && !m["ExecutorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExecutorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExecutorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      executorIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobSpec") != m.end() && !m["JobSpec"].empty()) {
      if (typeid(vector<boost::any>) == m["JobSpec"].type()) {
        vector<DeleteJobsRequestJobSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobSpec"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteJobsRequestJobSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobSpec = make_shared<vector<DeleteJobsRequestJobSpec>>(expect1);
      }
    }
  }


  virtual ~DeleteJobsRequest() = default;
};
class DeleteJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> executorIdsShrink{};
  shared_ptr<string> jobSpecShrink{};

  DeleteJobsShrinkRequest() {}

  explicit DeleteJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executorIdsShrink) {
      res["ExecutorIds"] = boost::any(*executorIdsShrink);
    }
    if (jobSpecShrink) {
      res["JobSpec"] = boost::any(*jobSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutorIds") != m.end() && !m["ExecutorIds"].empty()) {
      executorIdsShrink = make_shared<string>(boost::any_cast<string>(m["ExecutorIds"]));
    }
    if (m.find("JobSpec") != m.end() && !m["JobSpec"].empty()) {
      jobSpecShrink = make_shared<string>(boost::any_cast<string>(m["JobSpec"]));
    }
  }


  virtual ~DeleteJobsShrinkRequest() = default;
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class DescribeJobMetricDataRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> arrayIndex{};
  shared_ptr<string> jobId{};
  shared_ptr<string> metricName{};
  shared_ptr<string> taskName{};

  DescribeJobMetricDataRequest() {}

  explicit DescribeJobMetricDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayIndex) {
      res["ArrayIndex"] = boost::any(*arrayIndex);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayIndex") != m.end() && !m["ArrayIndex"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ArrayIndex"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ArrayIndex"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      arrayIndex = make_shared<vector<long>>(toVec1);
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~DescribeJobMetricDataRequest() = default;
};
class DescribeJobMetricDataShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> arrayIndexShrink{};
  shared_ptr<string> jobId{};
  shared_ptr<string> metricName{};
  shared_ptr<string> taskName{};

  DescribeJobMetricDataShrinkRequest() {}

  explicit DescribeJobMetricDataShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayIndexShrink) {
      res["ArrayIndex"] = boost::any(*arrayIndexShrink);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayIndex") != m.end() && !m["ArrayIndex"].empty()) {
      arrayIndexShrink = make_shared<string>(boost::any_cast<string>(m["ArrayIndex"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~DescribeJobMetricDataShrinkRequest() = default;
};
class DescribeJobMetricDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dataPoints{};
  shared_ptr<long> period{};
  shared_ptr<string> requestId{};

  DescribeJobMetricDataResponseBody() {}

  explicit DescribeJobMetricDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPoints) {
      res["DataPoints"] = boost::any(*dataPoints);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPoints") != m.end() && !m["DataPoints"].empty()) {
      dataPoints = make_shared<string>(boost::any_cast<string>(m["DataPoints"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeJobMetricDataResponseBody() = default;
};
class DescribeJobMetricDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeJobMetricDataResponseBody> body{};

  DescribeJobMetricDataResponse() {}

  explicit DescribeJobMetricDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeJobMetricDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeJobMetricDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeJobMetricDataResponse() = default;
};
class DescribeJobMetricLastRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> arrayIndex{};
  shared_ptr<string> jobId{};
  shared_ptr<string> taskName{};

  DescribeJobMetricLastRequest() {}

  explicit DescribeJobMetricLastRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayIndex) {
      res["ArrayIndex"] = boost::any(*arrayIndex);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayIndex") != m.end() && !m["ArrayIndex"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ArrayIndex"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ArrayIndex"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      arrayIndex = make_shared<vector<long>>(toVec1);
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~DescribeJobMetricLastRequest() = default;
};
class DescribeJobMetricLastShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> arrayIndexShrink{};
  shared_ptr<string> jobId{};
  shared_ptr<string> taskName{};

  DescribeJobMetricLastShrinkRequest() {}

  explicit DescribeJobMetricLastShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayIndexShrink) {
      res["ArrayIndex"] = boost::any(*arrayIndexShrink);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayIndex") != m.end() && !m["ArrayIndex"].empty()) {
      arrayIndexShrink = make_shared<string>(boost::any_cast<string>(m["ArrayIndex"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~DescribeJobMetricLastShrinkRequest() = default;
};
class DescribeJobMetricLastResponseBodyMetrics : public Darabonba::Model {
public:
  shared_ptr<long> arrayIndex{};
  shared_ptr<string> metric{};

  DescribeJobMetricLastResponseBodyMetrics() {}

  explicit DescribeJobMetricLastResponseBodyMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayIndex) {
      res["ArrayIndex"] = boost::any(*arrayIndex);
    }
    if (metric) {
      res["Metric"] = boost::any(*metric);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayIndex") != m.end() && !m["ArrayIndex"].empty()) {
      arrayIndex = make_shared<long>(boost::any_cast<long>(m["ArrayIndex"]));
    }
    if (m.find("Metric") != m.end() && !m["Metric"].empty()) {
      metric = make_shared<string>(boost::any_cast<string>(m["Metric"]));
    }
  }


  virtual ~DescribeJobMetricLastResponseBodyMetrics() = default;
};
class DescribeJobMetricLastResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeJobMetricLastResponseBodyMetrics>> metrics{};
  shared_ptr<string> requestId{};

  DescribeJobMetricLastResponseBody() {}

  explicit DescribeJobMetricLastResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<DescribeJobMetricLastResponseBodyMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeJobMetricLastResponseBodyMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<DescribeJobMetricLastResponseBodyMetrics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeJobMetricLastResponseBody() = default;
};
class DescribeJobMetricLastResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeJobMetricLastResponseBody> body{};

  DescribeJobMetricLastResponse() {}

  explicit DescribeJobMetricLastResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeJobMetricLastResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeJobMetricLastResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeJobMetricLastResponse() = default;
};
class GetImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageCategory{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageType{};

  GetImageRequest() {}

  explicit GetImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
  }


  virtual ~GetImageRequest() = default;
};
class GetImageResponseBodyImageContainerImageSpecRegistryCredential : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> server{};
  shared_ptr<string> userName{};

  GetImageResponseBodyImageContainerImageSpecRegistryCredential() {}

  explicit GetImageResponseBodyImageContainerImageSpecRegistryCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetImageResponseBodyImageContainerImageSpecRegistryCredential() = default;
};
class GetImageResponseBodyImageContainerImageSpec : public Darabonba::Model {
public:
  shared_ptr<bool> isACREnterprise{};
  shared_ptr<bool> isACRRegistry{};
  shared_ptr<GetImageResponseBodyImageContainerImageSpecRegistryCredential> registryCredential{};
  shared_ptr<string> registryCriId{};
  shared_ptr<string> registryUrl{};

  GetImageResponseBodyImageContainerImageSpec() {}

  explicit GetImageResponseBodyImageContainerImageSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isACREnterprise) {
      res["IsACREnterprise"] = boost::any(*isACREnterprise);
    }
    if (isACRRegistry) {
      res["IsACRRegistry"] = boost::any(*isACRRegistry);
    }
    if (registryCredential) {
      res["RegistryCredential"] = registryCredential ? boost::any(registryCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (registryCriId) {
      res["RegistryCriId"] = boost::any(*registryCriId);
    }
    if (registryUrl) {
      res["RegistryUrl"] = boost::any(*registryUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsACREnterprise") != m.end() && !m["IsACREnterprise"].empty()) {
      isACREnterprise = make_shared<bool>(boost::any_cast<bool>(m["IsACREnterprise"]));
    }
    if (m.find("IsACRRegistry") != m.end() && !m["IsACRRegistry"].empty()) {
      isACRRegistry = make_shared<bool>(boost::any_cast<bool>(m["IsACRRegistry"]));
    }
    if (m.find("RegistryCredential") != m.end() && !m["RegistryCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["RegistryCredential"].type()) {
        GetImageResponseBodyImageContainerImageSpecRegistryCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RegistryCredential"]));
        registryCredential = make_shared<GetImageResponseBodyImageContainerImageSpecRegistryCredential>(model1);
      }
    }
    if (m.find("RegistryCriId") != m.end() && !m["RegistryCriId"].empty()) {
      registryCriId = make_shared<string>(boost::any_cast<string>(m["RegistryCriId"]));
    }
    if (m.find("RegistryUrl") != m.end() && !m["RegistryUrl"].empty()) {
      registryUrl = make_shared<string>(boost::any_cast<string>(m["RegistryUrl"]));
    }
  }


  virtual ~GetImageResponseBodyImageContainerImageSpec() = default;
};
class GetImageResponseBodyImageVMImageSpec : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> imageId{};
  shared_ptr<string> osTag{};
  shared_ptr<string> platform{};

  GetImageResponseBodyImageVMImageSpec() {}

  explicit GetImageResponseBodyImageVMImageSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
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
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~GetImageResponseBodyImageVMImageSpec() = default;
};
class GetImageResponseBodyImage : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<GetImageResponseBodyImageContainerImageSpec> containerImageSpec{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> imageType{};
  shared_ptr<string> name{};
  shared_ptr<string> size{};
  shared_ptr<string> status{};
  shared_ptr<GetImageResponseBodyImageVMImageSpec> VMImageSpec{};
  shared_ptr<string> version{};

  GetImageResponseBodyImage() {}

  explicit GetImageResponseBodyImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (containerImageSpec) {
      res["ContainerImageSpec"] = containerImageSpec ? boost::any(containerImageSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (VMImageSpec) {
      res["VMImageSpec"] = VMImageSpec ? boost::any(VMImageSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ContainerImageSpec") != m.end() && !m["ContainerImageSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ContainerImageSpec"].type()) {
        GetImageResponseBodyImageContainerImageSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ContainerImageSpec"]));
        containerImageSpec = make_shared<GetImageResponseBodyImageContainerImageSpec>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VMImageSpec") != m.end() && !m["VMImageSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["VMImageSpec"].type()) {
        GetImageResponseBodyImageVMImageSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VMImageSpec"]));
        VMImageSpec = make_shared<GetImageResponseBodyImageVMImageSpec>(model1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetImageResponseBodyImage() = default;
};
class GetImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetImageResponseBodyImage> image{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  GetImageResponseBody() {}

  explicit GetImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = image ? boost::any(image->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      if (typeid(map<string, boost::any>) == m["Image"].type()) {
        GetImageResponseBodyImage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Image"]));
        image = make_shared<GetImageResponseBodyImage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetImageResponseBody() = default;
};
class GetImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImageResponseBody> body{};

  GetImageResponse() {}

  explicit GetImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageResponse() = default;
};
class GetJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetJobRequest() {}

  explicit GetJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetJobRequest() = default;
};
class GetJobResponseBodyJobInfoDeploymentPolicyNetwork : public Darabonba::Model {
public:
  shared_ptr<vector<string>> vswitch{};

  GetJobResponseBodyJobInfoDeploymentPolicyNetwork() {}

  explicit GetJobResponseBodyJobInfoDeploymentPolicyNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vswitch) {
      res["Vswitch"] = boost::any(*vswitch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vswitch") != m.end() && !m["Vswitch"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Vswitch"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Vswitch"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswitch = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetJobResponseBodyJobInfoDeploymentPolicyNetwork() = default;
};
class GetJobResponseBodyJobInfoDeploymentPolicy : public Darabonba::Model {
public:
  shared_ptr<string> allocationSpec{};
  shared_ptr<GetJobResponseBodyJobInfoDeploymentPolicyNetwork> network{};

  GetJobResponseBodyJobInfoDeploymentPolicy() {}

  explicit GetJobResponseBodyJobInfoDeploymentPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationSpec) {
      res["AllocationSpec"] = boost::any(*allocationSpec);
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationSpec") != m.end() && !m["AllocationSpec"].empty()) {
      allocationSpec = make_shared<string>(boost::any_cast<string>(m["AllocationSpec"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        GetJobResponseBodyJobInfoDeploymentPolicyNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<GetJobResponseBodyJobInfoDeploymentPolicyNetwork>(model1);
      }
    }
  }


  virtual ~GetJobResponseBodyJobInfoDeploymentPolicy() = default;
};
class GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec : public Darabonba::Model {
public:
  shared_ptr<long> indexEnd{};
  shared_ptr<long> indexStart{};
  shared_ptr<long> indexStep{};

  GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec() {}

  explicit GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexEnd) {
      res["IndexEnd"] = boost::any(*indexEnd);
    }
    if (indexStart) {
      res["IndexStart"] = boost::any(*indexStart);
    }
    if (indexStep) {
      res["IndexStep"] = boost::any(*indexStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexEnd") != m.end() && !m["IndexEnd"].empty()) {
      indexEnd = make_shared<long>(boost::any_cast<long>(m["IndexEnd"]));
    }
    if (m.find("IndexStart") != m.end() && !m["IndexStart"].empty()) {
      indexStart = make_shared<long>(boost::any_cast<long>(m["IndexStart"]));
    }
    if (m.find("IndexStep") != m.end() && !m["IndexStep"].empty()) {
      indexStep = make_shared<long>(boost::any_cast<long>(m["IndexStep"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec() = default;
};
class GetJobResponseBodyJobInfoTasksExecutorPolicy : public Darabonba::Model {
public:
  shared_ptr<GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec> arraySpec{};
  shared_ptr<long> maxCount{};

  GetJobResponseBodyJobInfoTasksExecutorPolicy() {}

  explicit GetJobResponseBodyJobInfoTasksExecutorPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arraySpec) {
      res["ArraySpec"] = arraySpec ? boost::any(arraySpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArraySpec") != m.end() && !m["ArraySpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArraySpec"].type()) {
        GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArraySpec"]));
        arraySpec = make_shared<GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec>(model1);
      }
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoTasksExecutorPolicy() = default;
};
class GetJobResponseBodyJobInfoTasksExecutorStatus : public Darabonba::Model {
public:
  shared_ptr<long> arrayId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};

  GetJobResponseBodyJobInfoTasksExecutorStatus() {}

  explicit GetJobResponseBodyJobInfoTasksExecutorStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayId) {
      res["ArrayId"] = boost::any(*arrayId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayId") != m.end() && !m["ArrayId"].empty()) {
      arrayId = make_shared<long>(boost::any_cast<long>(m["ArrayId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoTasksExecutorStatus() = default;
};
class GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks : public Darabonba::Model {
public:
  shared_ptr<long> size{};
  shared_ptr<string> type{};

  GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks() {}

  explicit GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks() = default;
};
class GetJobResponseBodyJobInfoTasksTaskSpecResource : public Darabonba::Model {
public:
  shared_ptr<double> cores{};
  shared_ptr<vector<GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks>> disks{};
  shared_ptr<long> memory{};

  GetJobResponseBodyJobInfoTasksTaskSpecResource() {}

  explicit GetJobResponseBodyJobInfoTasksTaskSpecResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<double>(boost::any_cast<double>(m["Cores"]));
    }
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(vector<boost::any>) == m["Disks"].type()) {
        vector<GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disks = make_shared<vector<GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks>>(expect1);
      }
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoTasksTaskSpecResource() = default;
};
class GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> prologScript{};
  shared_ptr<string> script{};

  GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM() {}

  explicit GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (prologScript) {
      res["PrologScript"] = boost::any(*prologScript);
    }
    if (script) {
      res["Script"] = boost::any(*script);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("PrologScript") != m.end() && !m["PrologScript"].empty()) {
      prologScript = make_shared<string>(boost::any_cast<string>(m["PrologScript"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["Script"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM() = default;
};
class GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor : public Darabonba::Model {
public:
  shared_ptr<GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM> VM{};

  GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor() {}

  explicit GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VM) {
      res["VM"] = VM ? boost::any(VM->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VM") != m.end() && !m["VM"].empty()) {
      if (typeid(map<string, boost::any>) == m["VM"].type()) {
        GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VM"]));
        VM = make_shared<GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutorVM>(model1);
      }
    }
  }


  virtual ~GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor() = default;
};
class GetJobResponseBodyJobInfoTasksTaskSpec : public Darabonba::Model {
public:
  shared_ptr<GetJobResponseBodyJobInfoTasksTaskSpecResource> resource{};
  shared_ptr<vector<GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor>> taskExecutor{};

  GetJobResponseBodyJobInfoTasksTaskSpec() {}

  explicit GetJobResponseBodyJobInfoTasksTaskSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resource) {
      res["Resource"] = resource ? boost::any(resource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskExecutor) {
      vector<boost::any> temp1;
      for(auto item1:*taskExecutor){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskExecutor"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resource"].type()) {
        GetJobResponseBodyJobInfoTasksTaskSpecResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resource"]));
        resource = make_shared<GetJobResponseBodyJobInfoTasksTaskSpecResource>(model1);
      }
    }
    if (m.find("TaskExecutor") != m.end() && !m["TaskExecutor"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskExecutor"].type()) {
        vector<GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskExecutor"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskExecutor = make_shared<vector<GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor>>(expect1);
      }
    }
  }


  virtual ~GetJobResponseBodyJobInfoTasksTaskSpec() = default;
};
class GetJobResponseBodyJobInfoTasks : public Darabonba::Model {
public:
  shared_ptr<GetJobResponseBodyJobInfoTasksExecutorPolicy> executorPolicy{};
  shared_ptr<vector<GetJobResponseBodyJobInfoTasksExecutorStatus>> executorStatus{};
  shared_ptr<string> taskName{};
  shared_ptr<GetJobResponseBodyJobInfoTasksTaskSpec> taskSpec{};
  shared_ptr<bool> taskSustainable{};

  GetJobResponseBodyJobInfoTasks() {}

  explicit GetJobResponseBodyJobInfoTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executorPolicy) {
      res["ExecutorPolicy"] = executorPolicy ? boost::any(executorPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (executorStatus) {
      vector<boost::any> temp1;
      for(auto item1:*executorStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExecutorStatus"] = boost::any(temp1);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskSpec) {
      res["TaskSpec"] = taskSpec ? boost::any(taskSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskSustainable) {
      res["TaskSustainable"] = boost::any(*taskSustainable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutorPolicy") != m.end() && !m["ExecutorPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecutorPolicy"].type()) {
        GetJobResponseBodyJobInfoTasksExecutorPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecutorPolicy"]));
        executorPolicy = make_shared<GetJobResponseBodyJobInfoTasksExecutorPolicy>(model1);
      }
    }
    if (m.find("ExecutorStatus") != m.end() && !m["ExecutorStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["ExecutorStatus"].type()) {
        vector<GetJobResponseBodyJobInfoTasksExecutorStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExecutorStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResponseBodyJobInfoTasksExecutorStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        executorStatus = make_shared<vector<GetJobResponseBodyJobInfoTasksExecutorStatus>>(expect1);
      }
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskSpec") != m.end() && !m["TaskSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskSpec"].type()) {
        GetJobResponseBodyJobInfoTasksTaskSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskSpec"]));
        taskSpec = make_shared<GetJobResponseBodyJobInfoTasksTaskSpec>(model1);
      }
    }
    if (m.find("TaskSustainable") != m.end() && !m["TaskSustainable"].empty()) {
      taskSustainable = make_shared<bool>(boost::any_cast<bool>(m["TaskSustainable"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoTasks() = default;
};
class GetJobResponseBodyJobInfo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<GetJobResponseBodyJobInfoDeploymentPolicy> deploymentPolicy{};
  shared_ptr<string> endTime{};
  shared_ptr<string> jobDescription{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobScheduler{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetJobResponseBodyJobInfoTasks>> tasks{};

  GetJobResponseBodyJobInfo() {}

  explicit GetJobResponseBodyJobInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deploymentPolicy) {
      res["DeploymentPolicy"] = deploymentPolicy ? boost::any(deploymentPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (jobDescription) {
      res["JobDescription"] = boost::any(*jobDescription);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobScheduler) {
      res["JobScheduler"] = boost::any(*jobScheduler);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeploymentPolicy") != m.end() && !m["DeploymentPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeploymentPolicy"].type()) {
        GetJobResponseBodyJobInfoDeploymentPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeploymentPolicy"]));
        deploymentPolicy = make_shared<GetJobResponseBodyJobInfoDeploymentPolicy>(model1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("JobDescription") != m.end() && !m["JobDescription"].empty()) {
      jobDescription = make_shared<string>(boost::any_cast<string>(m["JobDescription"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobScheduler") != m.end() && !m["JobScheduler"].empty()) {
      jobScheduler = make_shared<string>(boost::any_cast<string>(m["JobScheduler"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<GetJobResponseBodyJobInfoTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResponseBodyJobInfoTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<GetJobResponseBodyJobInfoTasks>>(expect1);
      }
    }
  }


  virtual ~GetJobResponseBodyJobInfo() = default;
};
class GetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetJobResponseBodyJobInfo> jobInfo{};
  shared_ptr<string> requestId{};

  GetJobResponseBody() {}

  explicit GetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInfo) {
      res["JobInfo"] = jobInfo ? boost::any(jobInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobInfo") != m.end() && !m["JobInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobInfo"].type()) {
        GetJobResponseBodyJobInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobInfo"]));
        jobInfo = make_shared<GetJobResponseBodyJobInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetJobResponseBody() = default;
};
class GetJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobResponseBody> body{};

  GetJobResponse() {}

  explicit GetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobResponse() = default;
};
class ListExecutorsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> executorIds{};
  shared_ptr<vector<string>> ipAddresses{};
  shared_ptr<string> jobName{};
  shared_ptr<long> timeCreatedAfter{};
  shared_ptr<long> timeCreatedBefore{};

  ListExecutorsRequestFilter() {}

  explicit ListExecutorsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executorIds) {
      res["ExecutorIds"] = boost::any(*executorIds);
    }
    if (ipAddresses) {
      res["IpAddresses"] = boost::any(*ipAddresses);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (timeCreatedAfter) {
      res["TimeCreatedAfter"] = boost::any(*timeCreatedAfter);
    }
    if (timeCreatedBefore) {
      res["TimeCreatedBefore"] = boost::any(*timeCreatedBefore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutorIds") != m.end() && !m["ExecutorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExecutorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExecutorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      executorIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpAddresses") != m.end() && !m["IpAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("TimeCreatedAfter") != m.end() && !m["TimeCreatedAfter"].empty()) {
      timeCreatedAfter = make_shared<long>(boost::any_cast<long>(m["TimeCreatedAfter"]));
    }
    if (m.find("TimeCreatedBefore") != m.end() && !m["TimeCreatedBefore"].empty()) {
      timeCreatedBefore = make_shared<long>(boost::any_cast<long>(m["TimeCreatedBefore"]));
    }
  }


  virtual ~ListExecutorsRequestFilter() = default;
};
class ListExecutorsRequest : public Darabonba::Model {
public:
  shared_ptr<ListExecutorsRequestFilter> filter{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListExecutorsRequest() {}

  explicit ListExecutorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        ListExecutorsRequestFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filter"]));
        filter = make_shared<ListExecutorsRequestFilter>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListExecutorsRequest() = default;
};
class ListExecutorsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterShrink{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListExecutorsShrinkRequest() {}

  explicit ListExecutorsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterShrink) {
      res["Filter"] = boost::any(*filterShrink);
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListExecutorsShrinkRequest() = default;
};
class ListExecutorsResponseBodyExecutors : public Darabonba::Model {
public:
  shared_ptr<long> arrayIndex{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executorId{};
  shared_ptr<vector<string>> hostName{};
  shared_ptr<vector<string>> ipAddress{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};
  shared_ptr<string> taskName{};

  ListExecutorsResponseBodyExecutors() {}

  explicit ListExecutorsResponseBodyExecutors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayIndex) {
      res["ArrayIndex"] = boost::any(*arrayIndex);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executorId) {
      res["ExecutorId"] = boost::any(*executorId);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayIndex") != m.end() && !m["ArrayIndex"].empty()) {
      arrayIndex = make_shared<long>(boost::any_cast<long>(m["ArrayIndex"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecutorId") != m.end() && !m["ExecutorId"].empty()) {
      executorId = make_shared<string>(boost::any_cast<string>(m["ExecutorId"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HostName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HostName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hostName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddress = make_shared<vector<string>>(toVec1);
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~ListExecutorsResponseBodyExecutors() = default;
};
class ListExecutorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExecutorsResponseBodyExecutors>> executors{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListExecutorsResponseBody() {}

  explicit ListExecutorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executors) {
      vector<boost::any> temp1;
      for(auto item1:*executors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Executors"] = boost::any(temp1);
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
    if (m.find("Executors") != m.end() && !m["Executors"].empty()) {
      if (typeid(vector<boost::any>) == m["Executors"].type()) {
        vector<ListExecutorsResponseBodyExecutors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Executors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExecutorsResponseBodyExecutors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        executors = make_shared<vector<ListExecutorsResponseBodyExecutors>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListExecutorsResponseBody() = default;
};
class ListExecutorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExecutorsResponseBody> body{};

  ListExecutorsResponse() {}

  explicit ListExecutorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListExecutorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExecutorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExecutorsResponse() = default;
};
class ListImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageCategory{};
  shared_ptr<vector<string>> imageIds{};
  shared_ptr<vector<string>> imageNames{};
  shared_ptr<string> imageType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListImagesRequest() {}

  explicit ListImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (imageIds) {
      res["ImageIds"] = boost::any(*imageIds);
    }
    if (imageNames) {
      res["ImageNames"] = boost::any(*imageNames);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
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
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("ImageIds") != m.end() && !m["ImageIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListImagesRequest() = default;
};
class ListImagesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageCategory{};
  shared_ptr<string> imageIdsShrink{};
  shared_ptr<string> imageNamesShrink{};
  shared_ptr<string> imageType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListImagesShrinkRequest() {}

  explicit ListImagesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (imageIdsShrink) {
      res["ImageIds"] = boost::any(*imageIdsShrink);
    }
    if (imageNamesShrink) {
      res["ImageNames"] = boost::any(*imageNamesShrink);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
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
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("ImageIds") != m.end() && !m["ImageIds"].empty()) {
      imageIdsShrink = make_shared<string>(boost::any_cast<string>(m["ImageIds"]));
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      imageNamesShrink = make_shared<string>(boost::any_cast<string>(m["ImageNames"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListImagesShrinkRequest() = default;
};
class ListImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageType{};
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  ListImagesResponseBodyImages() {}

  explicit ListImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListImagesResponseBodyImages() = default;
};
class ListImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListImagesResponseBodyImages>> images{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
class ListJobExecutorsRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> taskName{};

  ListJobExecutorsRequest() {}

  explicit ListJobExecutorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~ListJobExecutorsRequest() = default;
};
class ListJobExecutorsResponseBodyExecutors : public Darabonba::Model {
public:
  shared_ptr<long> arrayIndex{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<string>> hostName{};
  shared_ptr<vector<string>> ipAddress{};
  shared_ptr<string> status{};
  shared_ptr<string> statusReason{};

  ListJobExecutorsResponseBodyExecutors() {}

  explicit ListJobExecutorsResponseBodyExecutors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayIndex) {
      res["ArrayIndex"] = boost::any(*arrayIndex);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusReason) {
      res["StatusReason"] = boost::any(*statusReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayIndex") != m.end() && !m["ArrayIndex"].empty()) {
      arrayIndex = make_shared<long>(boost::any_cast<long>(m["ArrayIndex"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HostName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HostName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hostName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddress = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusReason") != m.end() && !m["StatusReason"].empty()) {
      statusReason = make_shared<string>(boost::any_cast<string>(m["StatusReason"]));
    }
  }


  virtual ~ListJobExecutorsResponseBodyExecutors() = default;
};
class ListJobExecutorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobExecutorsResponseBodyExecutors>> executors{};
  shared_ptr<string> jobId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> totalCount{};

  ListJobExecutorsResponseBody() {}

  explicit ListJobExecutorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executors) {
      vector<boost::any> temp1;
      for(auto item1:*executors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Executors"] = boost::any(temp1);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
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
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Executors") != m.end() && !m["Executors"].empty()) {
      if (typeid(vector<boost::any>) == m["Executors"].type()) {
        vector<ListJobExecutorsResponseBodyExecutors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Executors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobExecutorsResponseBodyExecutors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        executors = make_shared<vector<ListJobExecutorsResponseBodyExecutors>>(expect1);
      }
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListJobExecutorsResponseBody() = default;
};
class ListJobExecutorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobExecutorsResponseBody> body{};

  ListJobExecutorsResponse() {}

  explicit ListJobExecutorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListJobExecutorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobExecutorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobExecutorsResponse() = default;
};
class ListJobsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> status{};
  shared_ptr<long> timeCreatedAfter{};
  shared_ptr<long> timeCreatedBefore{};

  ListJobsRequestFilter() {}

  explicit ListJobsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeCreatedAfter) {
      res["TimeCreatedAfter"] = boost::any(*timeCreatedAfter);
    }
    if (timeCreatedBefore) {
      res["TimeCreatedBefore"] = boost::any(*timeCreatedBefore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TimeCreatedAfter") != m.end() && !m["TimeCreatedAfter"].empty()) {
      timeCreatedAfter = make_shared<long>(boost::any_cast<long>(m["TimeCreatedAfter"]));
    }
    if (m.find("TimeCreatedBefore") != m.end() && !m["TimeCreatedBefore"].empty()) {
      timeCreatedBefore = make_shared<long>(boost::any_cast<long>(m["TimeCreatedBefore"]));
    }
  }


  virtual ~ListJobsRequestFilter() = default;
};
class ListJobsRequestSortBy : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> order{};

  ListJobsRequestSortBy() {}

  explicit ListJobsRequestSortBy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
  }


  virtual ~ListJobsRequestSortBy() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<ListJobsRequestFilter> filter{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<ListJobsRequestSortBy> sortBy{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = sortBy ? boost::any(sortBy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        ListJobsRequestFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filter"]));
        filter = make_shared<ListJobsRequestFilter>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      if (typeid(map<string, boost::any>) == m["SortBy"].type()) {
        ListJobsRequestSortBy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SortBy"]));
        sortBy = make_shared<ListJobsRequestSortBy>(model1);
      }
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterShrink{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sortByShrink{};

  ListJobsShrinkRequest() {}

  explicit ListJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterShrink) {
      res["Filter"] = boost::any(*filterShrink);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortByShrink) {
      res["SortBy"] = boost::any(*sortByShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortByShrink = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListJobsShrinkRequest() = default;
};
class ListJobsResponseBodyJobList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> executorCount{};
  shared_ptr<string> jobDescription{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> ownerUid{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> taskCount{};
  shared_ptr<bool> taskSustainable{};

  ListJobsResponseBodyJobList() {}

  explicit ListJobsResponseBodyJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executorCount) {
      res["ExecutorCount"] = boost::any(*executorCount);
    }
    if (jobDescription) {
      res["JobDescription"] = boost::any(*jobDescription);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskCount) {
      res["TaskCount"] = boost::any(*taskCount);
    }
    if (taskSustainable) {
      res["TaskSustainable"] = boost::any(*taskSustainable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecutorCount") != m.end() && !m["ExecutorCount"].empty()) {
      executorCount = make_shared<long>(boost::any_cast<long>(m["ExecutorCount"]));
    }
    if (m.find("JobDescription") != m.end() && !m["JobDescription"].empty()) {
      jobDescription = make_shared<string>(boost::any_cast<string>(m["JobDescription"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<string>(boost::any_cast<string>(m["OwnerUid"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskCount") != m.end() && !m["TaskCount"].empty()) {
      taskCount = make_shared<long>(boost::any_cast<long>(m["TaskCount"]));
    }
    if (m.find("TaskSustainable") != m.end() && !m["TaskSustainable"].empty()) {
      taskSustainable = make_shared<bool>(boost::any_cast<bool>(m["TaskSustainable"]));
    }
  }


  virtual ~ListJobsResponseBodyJobList() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobsResponseBodyJobList>> jobList{};
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
    if (jobList) {
      vector<boost::any> temp1;
      for(auto item1:*jobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobList"] = boost::any(temp1);
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
    if (m.find("JobList") != m.end() && !m["JobList"].empty()) {
      if (typeid(vector<boost::any>) == m["JobList"].type()) {
        vector<ListJobsResponseBodyJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobsResponseBodyJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobList = make_shared<vector<ListJobsResponseBodyJobList>>(expect1);
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

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
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
class RemoveImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};

  RemoveImageRequest() {}

  explicit RemoveImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
  }


  virtual ~RemoveImageRequest() = default;
};
class RemoveImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveImageResponseBody() {}

  explicit RemoveImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveImageResponseBody() = default;
};
class RemoveImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveImageResponseBody> body{};

  RemoveImageResponse() {}

  explicit RemoveImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveImageResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveImageResponse() = default;
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
  AddImageResponse addImageWithOptions(shared_ptr<AddImageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageResponse addImage(shared_ptr<AddImageRequest> request);
  CreateJobResponse createJobWithOptions(shared_ptr<CreateJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobResponse createJob(shared_ptr<CreateJobRequest> request);
  DeleteJobsResponse deleteJobsWithOptions(shared_ptr<DeleteJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobsResponse deleteJobs(shared_ptr<DeleteJobsRequest> request);
  DescribeJobMetricDataResponse describeJobMetricDataWithOptions(shared_ptr<DescribeJobMetricDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeJobMetricDataResponse describeJobMetricData(shared_ptr<DescribeJobMetricDataRequest> request);
  DescribeJobMetricLastResponse describeJobMetricLastWithOptions(shared_ptr<DescribeJobMetricLastRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeJobMetricLastResponse describeJobMetricLast(shared_ptr<DescribeJobMetricLastRequest> request);
  GetImageResponse getImageWithOptions(shared_ptr<GetImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageResponse getImage(shared_ptr<GetImageRequest> request);
  GetJobResponse getJobWithOptions(shared_ptr<GetJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResponse getJob(shared_ptr<GetJobRequest> request);
  ListExecutorsResponse listExecutorsWithOptions(shared_ptr<ListExecutorsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExecutorsResponse listExecutors(shared_ptr<ListExecutorsRequest> request);
  ListImagesResponse listImagesWithOptions(shared_ptr<ListImagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesResponse listImages(shared_ptr<ListImagesRequest> request);
  ListJobExecutorsResponse listJobExecutorsWithOptions(shared_ptr<ListJobExecutorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobExecutorsResponse listJobExecutors(shared_ptr<ListJobExecutorsRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<ListJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<ListJobsRequest> request);
  RemoveImageResponse removeImageWithOptions(shared_ptr<RemoveImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveImageResponse removeImage(shared_ptr<RemoveImageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EhpcInstant20230701

#endif
