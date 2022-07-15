// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAI-DSW20220101_H_
#define ALIBABACLOUD_PAI-DSW20220101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Pai-dsw20220101 {
class DemoCategory : public Darabonba::Model {
public:
  shared_ptr<string> categoryCode{};
  shared_ptr<string> categoryName{};
  shared_ptr<long> order{};
  shared_ptr<vector<DemoCategory>> subCategories{};

  DemoCategory() {}

  explicit DemoCategory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryCode) {
      res["CategoryCode"] = boost::any(*categoryCode);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (subCategories) {
      vector<boost::any> temp1;
      for(auto item1:*subCategories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubCategories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryCode") != m.end() && !m["CategoryCode"].empty()) {
      categoryCode = make_shared<string>(boost::any_cast<string>(m["CategoryCode"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("SubCategories") != m.end() && !m["SubCategories"].empty()) {
      if (typeid(vector<boost::any>) == m["SubCategories"].type()) {
        vector<DemoCategory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubCategories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DemoCategory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subCategories = make_shared<vector<DemoCategory>>(expect1);
      }
    }
  }


  virtual ~DemoCategory() = default;
};
class CreateInstanceRequestDatasets : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> mountPath{};

  CreateInstanceRequestDatasets() {}

  explicit CreateInstanceRequestDatasets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~CreateInstanceRequestDatasets() = default;
};
class CreateInstanceRequestRequestedResource : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  CreateInstanceRequestRequestedResource() {}

  explicit CreateInstanceRequestRequestedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~CreateInstanceRequestRequestedResource() = default;
};
class CreateInstanceRequestUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateInstanceRequestUserVpc() {}

  explicit CreateInstanceRequestUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateInstanceRequestUserVpc() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessibility{};
  shared_ptr<vector<CreateInstanceRequestDatasets>> datasets{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> priority{};
  shared_ptr<CreateInstanceRequestRequestedResource> requestedResource{};
  shared_ptr<string> resourceId{};
  shared_ptr<CreateInstanceRequestUserVpc> userVpc{};
  shared_ptr<string> workspaceId{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (environmentVariables) {
      res["EnvironmentVariables"] = boost::any(*environmentVariables);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (requestedResource) {
      res["RequestedResource"] = requestedResource ? boost::any(requestedResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<CreateInstanceRequestDatasets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestDatasets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<CreateInstanceRequestDatasets>>(expect1);
      }
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("EnvironmentVariables") != m.end() && !m["EnvironmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EnvironmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RequestedResource") != m.end() && !m["RequestedResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestedResource"].type()) {
        CreateInstanceRequestRequestedResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestedResource"]));
        requestedResource = make_shared<CreateInstanceRequestRequestedResource>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        CreateInstanceRequestUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<CreateInstanceRequestUserVpc>(model1);
      }
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateInstanceShutdownTimerRequest : public Darabonba::Model {
public:
  shared_ptr<string> dueTime{};
  shared_ptr<long> remainingTimeInMs{};

  CreateInstanceShutdownTimerRequest() {}

  explicit CreateInstanceShutdownTimerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (remainingTimeInMs) {
      res["RemainingTimeInMs"] = boost::any(*remainingTimeInMs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("RemainingTimeInMs") != m.end() && !m["RemainingTimeInMs"].empty()) {
      remainingTimeInMs = make_shared<long>(boost::any_cast<long>(m["RemainingTimeInMs"]));
    }
  }


  virtual ~CreateInstanceShutdownTimerRequest() = default;
};
class CreateInstanceShutdownTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceShutdownTimerResponseBody() {}

  explicit CreateInstanceShutdownTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~CreateInstanceShutdownTimerResponseBody() = default;
};
class CreateInstanceShutdownTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceShutdownTimerResponseBody> body{};

  CreateInstanceShutdownTimerResponse() {}

  explicit CreateInstanceShutdownTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceShutdownTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceShutdownTimerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceShutdownTimerResponse() = default;
};
class CreateInstanceSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> snapshotDescription{};
  shared_ptr<string> snapshotName{};

  CreateInstanceSnapshotRequest() {}

  explicit CreateInstanceSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (snapshotDescription) {
      res["SnapshotDescription"] = boost::any(*snapshotDescription);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("SnapshotDescription") != m.end() && !m["SnapshotDescription"].empty()) {
      snapshotDescription = make_shared<string>(boost::any_cast<string>(m["SnapshotDescription"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
  }


  virtual ~CreateInstanceSnapshotRequest() = default;
};
class CreateInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<bool> success{};

  CreateInstanceSnapshotResponseBody() {}

  explicit CreateInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateInstanceSnapshotResponseBody() = default;
};
class CreateInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceSnapshotResponseBody> body{};

  CreateInstanceSnapshotResponse() {}

  explicit CreateInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceSnapshotResponse() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteInstanceShutdownTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceShutdownTimerResponseBody() {}

  explicit DeleteInstanceShutdownTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~DeleteInstanceShutdownTimerResponseBody() = default;
};
class DeleteInstanceShutdownTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceShutdownTimerResponseBody> body{};

  DeleteInstanceShutdownTimerResponse() {}

  explicit DeleteInstanceShutdownTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceShutdownTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceShutdownTimerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceShutdownTimerResponse() = default;
};
class DeleteInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<bool> success{};

  DeleteInstanceSnapshotResponseBody() {}

  explicit DeleteInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteInstanceSnapshotResponseBody() = default;
};
class DeleteInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceSnapshotResponseBody> body{};

  DeleteInstanceSnapshotResponse() {}

  explicit DeleteInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceSnapshotResponse() = default;
};
class GetInstanceResponseBodyDatasets : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> mountPath{};

  GetInstanceResponseBodyDatasets() {}

  explicit GetInstanceResponseBodyDatasets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~GetInstanceResponseBodyDatasets() = default;
};
class GetInstanceResponseBodyInstanceShutdownTimer : public Darabonba::Model {
public:
  shared_ptr<string> dueTime{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> remainingTimeInMs{};

  GetInstanceResponseBodyInstanceShutdownTimer() {}

  explicit GetInstanceResponseBodyInstanceShutdownTimer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (remainingTimeInMs) {
      res["RemainingTimeInMs"] = boost::any(*remainingTimeInMs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RemainingTimeInMs") != m.end() && !m["RemainingTimeInMs"].empty()) {
      remainingTimeInMs = make_shared<long>(boost::any_cast<long>(m["RemainingTimeInMs"]));
    }
  }


  virtual ~GetInstanceResponseBodyInstanceShutdownTimer() = default;
};
class GetInstanceResponseBodyLatestSnapshot : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> repositoryUrl{};

  GetInstanceResponseBodyLatestSnapshot() {}

  explicit GetInstanceResponseBodyLatestSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (repositoryUrl) {
      res["RepositoryUrl"] = boost::any(*repositoryUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("RepositoryUrl") != m.end() && !m["RepositoryUrl"].empty()) {
      repositoryUrl = make_shared<string>(boost::any_cast<string>(m["RepositoryUrl"]));
    }
  }


  virtual ~GetInstanceResponseBodyLatestSnapshot() = default;
};
class GetInstanceResponseBodyRequestedResource : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  GetInstanceResponseBodyRequestedResource() {}

  explicit GetInstanceResponseBodyRequestedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~GetInstanceResponseBodyRequestedResource() = default;
};
class GetInstanceResponseBodyUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  GetInstanceResponseBodyUserVpc() {}

  explicit GetInstanceResponseBodyUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetInstanceResponseBodyUserVpc() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> accessibility{};
  shared_ptr<long> accumulatedRunningTimeInMs{};
  shared_ptr<string> code{};
  shared_ptr<vector<GetInstanceResponseBodyDatasets>> datasets{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<GetInstanceResponseBodyInstanceShutdownTimer> instanceShutdownTimer{};
  shared_ptr<string> instanceUrl{};
  shared_ptr<string> jupyterlabUrl{};
  shared_ptr<GetInstanceResponseBodyLatestSnapshot> latestSnapshot{};
  shared_ptr<string> message{};
  shared_ptr<string> paymentType{};
  shared_ptr<long> priority{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<GetInstanceResponseBodyRequestedResource> requestedResource{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};
  shared_ptr<string> terminalUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<GetInstanceResponseBodyUserVpc> userVpc{};
  shared_ptr<string> webIDEUrl{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (accumulatedRunningTimeInMs) {
      res["AccumulatedRunningTimeInMs"] = boost::any(*accumulatedRunningTimeInMs);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (environmentVariables) {
      res["EnvironmentVariables"] = boost::any(*environmentVariables);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceShutdownTimer) {
      res["InstanceShutdownTimer"] = instanceShutdownTimer ? boost::any(instanceShutdownTimer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceUrl) {
      res["InstanceUrl"] = boost::any(*instanceUrl);
    }
    if (jupyterlabUrl) {
      res["JupyterlabUrl"] = boost::any(*jupyterlabUrl);
    }
    if (latestSnapshot) {
      res["LatestSnapshot"] = latestSnapshot ? boost::any(latestSnapshot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestedResource) {
      res["RequestedResource"] = requestedResource ? boost::any(requestedResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (terminalUrl) {
      res["TerminalUrl"] = boost::any(*terminalUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (webIDEUrl) {
      res["WebIDEUrl"] = boost::any(*webIDEUrl);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("AccumulatedRunningTimeInMs") != m.end() && !m["AccumulatedRunningTimeInMs"].empty()) {
      accumulatedRunningTimeInMs = make_shared<long>(boost::any_cast<long>(m["AccumulatedRunningTimeInMs"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<GetInstanceResponseBodyDatasets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyDatasets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<GetInstanceResponseBodyDatasets>>(expect1);
      }
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("EnvironmentVariables") != m.end() && !m["EnvironmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EnvironmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceShutdownTimer") != m.end() && !m["InstanceShutdownTimer"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceShutdownTimer"].type()) {
        GetInstanceResponseBodyInstanceShutdownTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceShutdownTimer"]));
        instanceShutdownTimer = make_shared<GetInstanceResponseBodyInstanceShutdownTimer>(model1);
      }
    }
    if (m.find("InstanceUrl") != m.end() && !m["InstanceUrl"].empty()) {
      instanceUrl = make_shared<string>(boost::any_cast<string>(m["InstanceUrl"]));
    }
    if (m.find("JupyterlabUrl") != m.end() && !m["JupyterlabUrl"].empty()) {
      jupyterlabUrl = make_shared<string>(boost::any_cast<string>(m["JupyterlabUrl"]));
    }
    if (m.find("LatestSnapshot") != m.end() && !m["LatestSnapshot"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestSnapshot"].type()) {
        GetInstanceResponseBodyLatestSnapshot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestSnapshot"]));
        latestSnapshot = make_shared<GetInstanceResponseBodyLatestSnapshot>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestedResource") != m.end() && !m["RequestedResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestedResource"].type()) {
        GetInstanceResponseBodyRequestedResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestedResource"]));
        requestedResource = make_shared<GetInstanceResponseBodyRequestedResource>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TerminalUrl") != m.end() && !m["TerminalUrl"].empty()) {
      terminalUrl = make_shared<string>(boost::any_cast<string>(m["TerminalUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        GetInstanceResponseBodyUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<GetInstanceResponseBodyUserVpc>(model1);
      }
    }
    if (m.find("WebIDEUrl") != m.end() && !m["WebIDEUrl"].empty()) {
      webIDEUrl = make_shared<string>(boost::any_cast<string>(m["WebIDEUrl"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetInstanceShutdownTimerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dueTime{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<long> remainingTimeInMs{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceShutdownTimerResponseBody() {}

  explicit GetInstanceShutdownTimerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (remainingTimeInMs) {
      res["RemainingTimeInMs"] = boost::any(*remainingTimeInMs);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RemainingTimeInMs") != m.end() && !m["RemainingTimeInMs"].empty()) {
      remainingTimeInMs = make_shared<long>(boost::any_cast<long>(m["RemainingTimeInMs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInstanceShutdownTimerResponseBody() = default;
};
class GetInstanceShutdownTimerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceShutdownTimerResponseBody> body{};

  GetInstanceShutdownTimerResponse() {}

  explicit GetInstanceShutdownTimerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceShutdownTimerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceShutdownTimerResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceShutdownTimerResponse() = default;
};
class GetInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetInstanceSnapshotResponseBody() {}

  explicit GetInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInstanceSnapshotResponseBody() = default;
};
class GetInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceSnapshotResponseBody> body{};

  GetInstanceSnapshotResponse() {}

  explicit GetInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceSnapshotResponse() = default;
};
class GetUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> accountSufficient{};
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetUserConfigResponseBody() {}

  explicit GetUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountSufficient) {
      res["AccountSufficient"] = boost::any(*accountSufficient);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccountSufficient") != m.end() && !m["AccountSufficient"].empty()) {
      accountSufficient = make_shared<bool>(boost::any_cast<bool>(m["AccountSufficient"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetUserConfigResponseBody() = default;
};
class GetUserConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserConfigResponseBody> body{};

  GetUserConfigResponse() {}

  explicit GetUserConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserConfigResponse() = default;
};
class ListDemoCategoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DemoCategory>> categories{};
  shared_ptr<string> requestId{};

  ListDemoCategoriesResponseBody() {}

  explicit ListDemoCategoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<DemoCategory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DemoCategory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<DemoCategory>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDemoCategoriesResponseBody() = default;
};
class ListDemoCategoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDemoCategoriesResponseBody> body{};

  ListDemoCategoriesResponse() {}

  explicit ListDemoCategoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDemoCategoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDemoCategoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDemoCategoriesResponse() = default;
};
class ListDemosRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> demoName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDemosRequest() {}

  explicit ListDemosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (demoName) {
      res["DemoName"] = boost::any(*demoName);
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
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DemoName") != m.end() && !m["DemoName"].empty()) {
      demoName = make_shared<string>(boost::any_cast<string>(m["DemoName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDemosRequest() = default;
};
class ListDemosResponseBodyDemos : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};
  shared_ptr<string> demoDescription{};
  shared_ptr<string> demoName{};
  shared_ptr<string> demoUrl{};
  shared_ptr<long> order{};
  shared_ptr<long> size{};

  ListDemosResponseBodyDemos() {}

  explicit ListDemosResponseBodyDemos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    if (demoDescription) {
      res["DemoDescription"] = boost::any(*demoDescription);
    }
    if (demoName) {
      res["DemoName"] = boost::any(*demoName);
    }
    if (demoUrl) {
      res["DemoUrl"] = boost::any(*demoUrl);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DemoDescription") != m.end() && !m["DemoDescription"].empty()) {
      demoDescription = make_shared<string>(boost::any_cast<string>(m["DemoDescription"]));
    }
    if (m.find("DemoName") != m.end() && !m["DemoName"].empty()) {
      demoName = make_shared<string>(boost::any_cast<string>(m["DemoName"]));
    }
    if (m.find("DemoUrl") != m.end() && !m["DemoUrl"].empty()) {
      demoUrl = make_shared<string>(boost::any_cast<string>(m["DemoUrl"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListDemosResponseBodyDemos() = default;
};
class ListDemosResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDemosResponseBodyDemos>> demos{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDemosResponseBody() {}

  explicit ListDemosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demos) {
      vector<boost::any> temp1;
      for(auto item1:*demos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Demos"] = boost::any(temp1);
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
    if (m.find("Demos") != m.end() && !m["Demos"].empty()) {
      if (typeid(vector<boost::any>) == m["Demos"].type()) {
        vector<ListDemosResponseBodyDemos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Demos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDemosResponseBodyDemos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        demos = make_shared<vector<ListDemosResponseBodyDemos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDemosResponseBody() = default;
};
class ListDemosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDemosResponseBody> body{};

  ListDemosResponse() {}

  explicit ListDemosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDemosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDemosResponseBody>(model1);
      }
    }
  }


  virtual ~ListDemosResponse() = default;
};
class ListEcsSpecsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

  ListEcsSpecsRequest() {}

  explicit ListEcsSpecsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
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
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
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
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListEcsSpecsRequest() = default;
};
class ListEcsSpecsResponseBodyEcsSpecs : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<long> CPU{};
  shared_ptr<string> currency{};
  shared_ptr<long> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<long> instanceBandwidthRx{};
  shared_ptr<string> instanceType{};
  shared_ptr<double> memory{};
  shared_ptr<double> price{};
  shared_ptr<long> systemDiskCapacity{};

  ListEcsSpecsResponseBodyEcsSpecs() {}

  explicit ListEcsSpecsResponseBodyEcsSpecs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (instanceBandwidthRx) {
      res["InstanceBandwidthRx"] = boost::any(*instanceBandwidthRx);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (systemDiskCapacity) {
      res["SystemDiskCapacity"] = boost::any(*systemDiskCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<long>(boost::any_cast<long>(m["CPU"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<long>(boost::any_cast<long>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("InstanceBandwidthRx") != m.end() && !m["InstanceBandwidthRx"].empty()) {
      instanceBandwidthRx = make_shared<long>(boost::any_cast<long>(m["InstanceBandwidthRx"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("SystemDiskCapacity") != m.end() && !m["SystemDiskCapacity"].empty()) {
      systemDiskCapacity = make_shared<long>(boost::any_cast<long>(m["SystemDiskCapacity"]));
    }
  }


  virtual ~ListEcsSpecsResponseBodyEcsSpecs() = default;
};
class ListEcsSpecsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListEcsSpecsResponseBodyEcsSpecs>> ecsSpecs{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListEcsSpecsResponseBody() {}

  explicit ListEcsSpecsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (ecsSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*ecsSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsSpecs"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EcsSpecs") != m.end() && !m["EcsSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsSpecs"].type()) {
        vector<ListEcsSpecsResponseBodyEcsSpecs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEcsSpecsResponseBodyEcsSpecs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsSpecs = make_shared<vector<ListEcsSpecsResponseBodyEcsSpecs>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEcsSpecsResponseBody() = default;
};
class ListEcsSpecsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEcsSpecsResponseBody> body{};

  ListEcsSpecsResponse() {}

  explicit ListEcsSpecsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEcsSpecsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEcsSpecsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEcsSpecsResponse() = default;
};
class ListInstanceSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};

  ListInstanceSnapshotRequest() {}

  explicit ListInstanceSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListInstanceSnapshotRequest() = default;
};
class ListInstanceSnapshotResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> status{};

  ListInstanceSnapshotResponseBodySnapshots() {}

  explicit ListInstanceSnapshotResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstanceSnapshotResponseBodySnapshots() = default;
};
class ListInstanceSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInstanceSnapshotResponseBodySnapshots>> snapshots{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListInstanceSnapshotResponseBody() {}

  explicit ListInstanceSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshots) {
      vector<boost::any> temp1;
      for(auto item1:*snapshots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshots"] = boost::any(temp1);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshots"].type()) {
        vector<ListInstanceSnapshotResponseBodySnapshots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceSnapshotResponseBodySnapshots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshots = make_shared<vector<ListInstanceSnapshotResponseBodySnapshots>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstanceSnapshotResponseBody() = default;
};
class ListInstanceSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceSnapshotResponseBody> body{};

  ListInstanceSnapshotResponse() {}

  explicit ListInstanceSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceSnapshotResponse() = default;
};
class ListInstanceStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceIds{};

  ListInstanceStatisticsRequest() {}

  explicit ListInstanceStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceIds) {
      res["WorkspaceIds"] = boost::any(*workspaceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceIds") != m.end() && !m["WorkspaceIds"].empty()) {
      workspaceIds = make_shared<string>(boost::any_cast<string>(m["WorkspaceIds"]));
    }
  }


  virtual ~ListInstanceStatisticsRequest() = default;
};
class ListInstanceStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, map<string, boost::any>>> statistics{};
  shared_ptr<bool> success{};

  ListInstanceStatisticsResponseBody() {}

  explicit ListInstanceStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["Statistics"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      statistics = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListInstanceStatisticsResponseBody() = default;
};
class ListInstanceStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceStatisticsResponseBody> body{};

  ListInstanceStatisticsResponse() {}

  explicit ListInstanceStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceStatisticsResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> accessibility{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
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
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
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
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyInstancesDatasets : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};
  shared_ptr<string> mountPath{};

  ListInstancesResponseBodyInstancesDatasets() {}

  explicit ListInstancesResponseBodyInstancesDatasets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (mountPath) {
      res["MountPath"] = boost::any(*mountPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("MountPath") != m.end() && !m["MountPath"].empty()) {
      mountPath = make_shared<string>(boost::any_cast<string>(m["MountPath"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesDatasets() = default;
};
class ListInstancesResponseBodyInstancesInstanceShutdownTimer : public Darabonba::Model {
public:
  shared_ptr<string> dueTime{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> remainingTimeInMs{};

  ListInstancesResponseBodyInstancesInstanceShutdownTimer() {}

  explicit ListInstancesResponseBodyInstancesInstanceShutdownTimer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (remainingTimeInMs) {
      res["RemainingTimeInMs"] = boost::any(*remainingTimeInMs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RemainingTimeInMs") != m.end() && !m["RemainingTimeInMs"].empty()) {
      remainingTimeInMs = make_shared<long>(boost::any_cast<long>(m["RemainingTimeInMs"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesInstanceShutdownTimer() = default;
};
class ListInstancesResponseBodyInstancesLatestSnapshot : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> repositoryUrl{};

  ListInstancesResponseBodyInstancesLatestSnapshot() {}

  explicit ListInstancesResponseBodyInstancesLatestSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (repositoryUrl) {
      res["RepositoryUrl"] = boost::any(*repositoryUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("RepositoryUrl") != m.end() && !m["RepositoryUrl"].empty()) {
      repositoryUrl = make_shared<string>(boost::any_cast<string>(m["RepositoryUrl"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesLatestSnapshot() = default;
};
class ListInstancesResponseBodyInstancesRequestedResource : public Darabonba::Model {
public:
  shared_ptr<string> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<string> GPUType{};
  shared_ptr<string> memory{};
  shared_ptr<string> sharedMemory{};

  ListInstancesResponseBodyInstancesRequestedResource() {}

  explicit ListInstancesResponseBodyInstancesRequestedResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUType) {
      res["GPUType"] = boost::any(*GPUType);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (sharedMemory) {
      res["SharedMemory"] = boost::any(*sharedMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUType") != m.end() && !m["GPUType"].empty()) {
      GPUType = make_shared<string>(boost::any_cast<string>(m["GPUType"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("SharedMemory") != m.end() && !m["SharedMemory"].empty()) {
      sharedMemory = make_shared<string>(boost::any_cast<string>(m["SharedMemory"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesRequestedResource() = default;
};
class ListInstancesResponseBodyInstancesUserVpc : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ListInstancesResponseBodyInstancesUserVpc() {}

  explicit ListInstancesResponseBodyInstancesUserVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesUserVpc() = default;
};
class ListInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> acceleratorType{};
  shared_ptr<string> accessibility{};
  shared_ptr<long> accumulatedRunningTimeInMs{};
  shared_ptr<vector<ListInstancesResponseBodyInstancesDatasets>> datasets{};
  shared_ptr<string> ecsSpec{};
  shared_ptr<map<string, string>> environmentVariables{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<ListInstancesResponseBodyInstancesInstanceShutdownTimer> instanceShutdownTimer{};
  shared_ptr<string> instanceUrl{};
  shared_ptr<string> jupyterlabUrl{};
  shared_ptr<ListInstancesResponseBodyInstancesLatestSnapshot> latestSnapshot{};
  shared_ptr<string> paymentType{};
  shared_ptr<long> priority{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonMessage{};
  shared_ptr<ListInstancesResponseBodyInstancesRequestedResource> requestedResource{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> status{};
  shared_ptr<string> terminalUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<ListInstancesResponseBodyInstancesUserVpc> userVpc{};
  shared_ptr<string> webIDEUrl{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  ListInstancesResponseBodyInstances() {}

  explicit ListInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceleratorType) {
      res["AcceleratorType"] = boost::any(*acceleratorType);
    }
    if (accessibility) {
      res["Accessibility"] = boost::any(*accessibility);
    }
    if (accumulatedRunningTimeInMs) {
      res["AccumulatedRunningTimeInMs"] = boost::any(*accumulatedRunningTimeInMs);
    }
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    if (ecsSpec) {
      res["EcsSpec"] = boost::any(*ecsSpec);
    }
    if (environmentVariables) {
      res["EnvironmentVariables"] = boost::any(*environmentVariables);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceShutdownTimer) {
      res["InstanceShutdownTimer"] = instanceShutdownTimer ? boost::any(instanceShutdownTimer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceUrl) {
      res["InstanceUrl"] = boost::any(*instanceUrl);
    }
    if (jupyterlabUrl) {
      res["JupyterlabUrl"] = boost::any(*jupyterlabUrl);
    }
    if (latestSnapshot) {
      res["LatestSnapshot"] = latestSnapshot ? boost::any(latestSnapshot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonMessage) {
      res["ReasonMessage"] = boost::any(*reasonMessage);
    }
    if (requestedResource) {
      res["RequestedResource"] = requestedResource ? boost::any(requestedResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (terminalUrl) {
      res["TerminalUrl"] = boost::any(*terminalUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userVpc) {
      res["UserVpc"] = userVpc ? boost::any(userVpc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (webIDEUrl) {
      res["WebIDEUrl"] = boost::any(*webIDEUrl);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceleratorType") != m.end() && !m["AcceleratorType"].empty()) {
      acceleratorType = make_shared<string>(boost::any_cast<string>(m["AcceleratorType"]));
    }
    if (m.find("Accessibility") != m.end() && !m["Accessibility"].empty()) {
      accessibility = make_shared<string>(boost::any_cast<string>(m["Accessibility"]));
    }
    if (m.find("AccumulatedRunningTimeInMs") != m.end() && !m["AccumulatedRunningTimeInMs"].empty()) {
      accumulatedRunningTimeInMs = make_shared<long>(boost::any_cast<long>(m["AccumulatedRunningTimeInMs"]));
    }
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<ListInstancesResponseBodyInstancesDatasets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstancesDatasets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<ListInstancesResponseBodyInstancesDatasets>>(expect1);
      }
    }
    if (m.find("EcsSpec") != m.end() && !m["EcsSpec"].empty()) {
      ecsSpec = make_shared<string>(boost::any_cast<string>(m["EcsSpec"]));
    }
    if (m.find("EnvironmentVariables") != m.end() && !m["EnvironmentVariables"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["EnvironmentVariables"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      environmentVariables = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceShutdownTimer") != m.end() && !m["InstanceShutdownTimer"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceShutdownTimer"].type()) {
        ListInstancesResponseBodyInstancesInstanceShutdownTimer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceShutdownTimer"]));
        instanceShutdownTimer = make_shared<ListInstancesResponseBodyInstancesInstanceShutdownTimer>(model1);
      }
    }
    if (m.find("InstanceUrl") != m.end() && !m["InstanceUrl"].empty()) {
      instanceUrl = make_shared<string>(boost::any_cast<string>(m["InstanceUrl"]));
    }
    if (m.find("JupyterlabUrl") != m.end() && !m["JupyterlabUrl"].empty()) {
      jupyterlabUrl = make_shared<string>(boost::any_cast<string>(m["JupyterlabUrl"]));
    }
    if (m.find("LatestSnapshot") != m.end() && !m["LatestSnapshot"].empty()) {
      if (typeid(map<string, boost::any>) == m["LatestSnapshot"].type()) {
        ListInstancesResponseBodyInstancesLatestSnapshot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LatestSnapshot"]));
        latestSnapshot = make_shared<ListInstancesResponseBodyInstancesLatestSnapshot>(model1);
      }
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonMessage") != m.end() && !m["ReasonMessage"].empty()) {
      reasonMessage = make_shared<string>(boost::any_cast<string>(m["ReasonMessage"]));
    }
    if (m.find("RequestedResource") != m.end() && !m["RequestedResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestedResource"].type()) {
        ListInstancesResponseBodyInstancesRequestedResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestedResource"]));
        requestedResource = make_shared<ListInstancesResponseBodyInstancesRequestedResource>(model1);
      }
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TerminalUrl") != m.end() && !m["TerminalUrl"].empty()) {
      terminalUrl = make_shared<string>(boost::any_cast<string>(m["TerminalUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserVpc") != m.end() && !m["UserVpc"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserVpc"].type()) {
        ListInstancesResponseBodyInstancesUserVpc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserVpc"]));
        userVpc = make_shared<ListInstancesResponseBodyInstancesUserVpc>(model1);
      }
    }
    if (m.find("WebIDEUrl") != m.end() && !m["WebIDEUrl"].empty()) {
      webIDEUrl = make_shared<string>(boost::any_cast<string>(m["WebIDEUrl"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstances() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListInstancesResponseBodyInstances>> instances{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstancesResponseBodyInstances>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class StartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartInstanceResponseBody() {}

  explicit StartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~StartInstanceResponseBody() = default;
};
class StartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartInstanceResponseBody> body{};

  StartInstanceResponse() {}

  explicit StartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartInstanceResponse() = default;
};
class StopInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> saveImage{};

  StopInstanceRequest() {}

  explicit StopInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (saveImage) {
      res["SaveImage"] = boost::any(*saveImage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SaveImage") != m.end() && !m["SaveImage"].empty()) {
      saveImage = make_shared<bool>(boost::any_cast<bool>(m["SaveImage"]));
    }
  }


  virtual ~StopInstanceRequest() = default;
};
class StopInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopInstanceResponseBody() {}

  explicit StopInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~StopInstanceResponseBody() = default;
};
class StopInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopInstanceResponseBody> body{};

  StopInstanceResponse() {}

  explicit StopInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopInstanceResponse() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};

  UpdateInstanceRequest() {}

  explicit UpdateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~UpdateInstanceRequest() = default;
};
class UpdateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceResponseBody() {}

  explicit UpdateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
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


  virtual ~UpdateInstanceResponseBody() = default;
};
class UpdateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceResponseBody> body{};

  UpdateInstanceResponse() {}

  explicit UpdateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
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
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceShutdownTimerResponse createInstanceShutdownTimer(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceShutdownTimerRequest> request);
  CreateInstanceShutdownTimerResponse createInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId,
                                                                             shared_ptr<CreateInstanceShutdownTimerRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceSnapshotResponse createInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<CreateInstanceSnapshotRequest> request);
  CreateInstanceSnapshotResponse createInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<CreateInstanceSnapshotRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<string> InstanceId);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceShutdownTimerResponse deleteInstanceShutdownTimer(shared_ptr<string> InstanceId);
  DeleteInstanceShutdownTimerResponse deleteInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceSnapshotResponse deleteInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> SnapshotId);
  DeleteInstanceSnapshotResponse deleteInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                                   shared_ptr<string> SnapshotId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<string> InstanceId);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceShutdownTimerResponse getInstanceShutdownTimer(shared_ptr<string> InstanceId);
  GetInstanceShutdownTimerResponse getInstanceShutdownTimerWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceSnapshotResponse getInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<string> SnapshotId);
  GetInstanceSnapshotResponse getInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                             shared_ptr<string> SnapshotId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserConfigResponse getUserConfig();
  GetUserConfigResponse getUserConfigWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDemoCategoriesResponse listDemoCategories();
  ListDemoCategoriesResponse listDemoCategoriesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDemosResponse listDemos(shared_ptr<ListDemosRequest> request);
  ListDemosResponse listDemosWithOptions(shared_ptr<ListDemosRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEcsSpecsResponse listEcsSpecs(shared_ptr<ListEcsSpecsRequest> request);
  ListEcsSpecsResponse listEcsSpecsWithOptions(shared_ptr<ListEcsSpecsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceSnapshotResponse listInstanceSnapshot(shared_ptr<string> InstanceId, shared_ptr<ListInstanceSnapshotRequest> request);
  ListInstanceSnapshotResponse listInstanceSnapshotWithOptions(shared_ptr<string> InstanceId,
                                                               shared_ptr<ListInstanceSnapshotRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceStatisticsResponse listInstanceStatistics(shared_ptr<ListInstanceStatisticsRequest> request);
  ListInstanceStatisticsResponse listInstanceStatisticsWithOptions(shared_ptr<ListInstanceStatisticsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartInstanceResponse startInstance(shared_ptr<string> InstanceId);
  StartInstanceResponse startInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopInstanceResponse stopInstance(shared_ptr<string> InstanceId, shared_ptr<StopInstanceRequest> request);
  StopInstanceResponse stopInstanceWithOptions(shared_ptr<string> InstanceId,
                                               shared_ptr<StopInstanceRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<string> InstanceId, shared_ptr<UpdateInstanceRequest> request);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<string> InstanceId,
                                                   shared_ptr<UpdateInstanceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Pai-dsw20220101

#endif
