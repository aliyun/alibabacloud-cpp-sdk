// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EFLO-CNP20230828_H_
#define ALIBABACLOUD_EFLO-CNP20230828_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eflo-cnp20230828 {
class DataResultsTaskIndividualResultMapValue : public Darabonba::Model {
public:
  shared_ptr<long> experimentId{};
  shared_ptr<string> hostname{};
  shared_ptr<string> podName{};
  shared_ptr<long> gpuNum{};
  shared_ptr<string> gpuName{};
  shared_ptr<bool> warningFlag{};
  shared_ptr<string> warningMsg{};
  shared_ptr<bool> errorFlag{};
  shared_ptr<string> errorMsg{};
  shared_ptr<double> tflops{};
  shared_ptr<double> samplesPerSecond{};

  DataResultsTaskIndividualResultMapValue() {}

  explicit DataResultsTaskIndividualResultMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (gpuNum) {
      res["GpuNum"] = boost::any(*gpuNum);
    }
    if (gpuName) {
      res["GpuName"] = boost::any(*gpuName);
    }
    if (warningFlag) {
      res["WarningFlag"] = boost::any(*warningFlag);
    }
    if (warningMsg) {
      res["WarningMsg"] = boost::any(*warningMsg);
    }
    if (errorFlag) {
      res["ErrorFlag"] = boost::any(*errorFlag);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (tflops) {
      res["Tflops"] = boost::any(*tflops);
    }
    if (samplesPerSecond) {
      res["SamplesPerSecond"] = boost::any(*samplesPerSecond);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("GpuNum") != m.end() && !m["GpuNum"].empty()) {
      gpuNum = make_shared<long>(boost::any_cast<long>(m["GpuNum"]));
    }
    if (m.find("GpuName") != m.end() && !m["GpuName"].empty()) {
      gpuName = make_shared<string>(boost::any_cast<string>(m["GpuName"]));
    }
    if (m.find("WarningFlag") != m.end() && !m["WarningFlag"].empty()) {
      warningFlag = make_shared<bool>(boost::any_cast<bool>(m["WarningFlag"]));
    }
    if (m.find("WarningMsg") != m.end() && !m["WarningMsg"].empty()) {
      warningMsg = make_shared<string>(boost::any_cast<string>(m["WarningMsg"]));
    }
    if (m.find("ErrorFlag") != m.end() && !m["ErrorFlag"].empty()) {
      errorFlag = make_shared<bool>(boost::any_cast<bool>(m["ErrorFlag"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Tflops") != m.end() && !m["Tflops"].empty()) {
      tflops = make_shared<double>(boost::any_cast<double>(m["Tflops"]));
    }
    if (m.find("SamplesPerSecond") != m.end() && !m["SamplesPerSecond"].empty()) {
      samplesPerSecond = make_shared<double>(boost::any_cast<double>(m["SamplesPerSecond"]));
    }
  }


  virtual ~DataResultsTaskIndividualResultMapValue() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
class CreateExperimentPlanRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateExperimentPlanRequestTag() {}

  explicit CreateExperimentPlanRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateExperimentPlanRequestTag() = default;
};
class CreateExperimentPlanRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> externalParams{};
  shared_ptr<string> planTemplateName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceId{};
  shared_ptr<vector<CreateExperimentPlanRequestTag>> tag{};
  shared_ptr<long> templateId{};

  CreateExperimentPlanRequest() {}

  explicit CreateExperimentPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalParams) {
      res["ExternalParams"] = boost::any(*externalParams);
    }
    if (planTemplateName) {
      res["PlanTemplateName"] = boost::any(*planTemplateName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalParams") != m.end() && !m["ExternalParams"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExternalParams"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      externalParams = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PlanTemplateName") != m.end() && !m["PlanTemplateName"].empty()) {
      planTemplateName = make_shared<string>(boost::any_cast<string>(m["PlanTemplateName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateExperimentPlanRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateExperimentPlanRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateExperimentPlanRequestTag>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~CreateExperimentPlanRequest() = default;
};
class CreateExperimentPlanShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateExperimentPlanShrinkRequestTag() {}

  explicit CreateExperimentPlanShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateExperimentPlanShrinkRequestTag() = default;
};
class CreateExperimentPlanShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalParamsShrink{};
  shared_ptr<string> planTemplateName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceId{};
  shared_ptr<vector<CreateExperimentPlanShrinkRequestTag>> tag{};
  shared_ptr<long> templateId{};

  CreateExperimentPlanShrinkRequest() {}

  explicit CreateExperimentPlanShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalParamsShrink) {
      res["ExternalParams"] = boost::any(*externalParamsShrink);
    }
    if (planTemplateName) {
      res["PlanTemplateName"] = boost::any(*planTemplateName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalParams") != m.end() && !m["ExternalParams"].empty()) {
      externalParamsShrink = make_shared<string>(boost::any_cast<string>(m["ExternalParams"]));
    }
    if (m.find("PlanTemplateName") != m.end() && !m["PlanTemplateName"].empty()) {
      planTemplateName = make_shared<string>(boost::any_cast<string>(m["PlanTemplateName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateExperimentPlanShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateExperimentPlanShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateExperimentPlanShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~CreateExperimentPlanShrinkRequest() = default;
};
class CreateExperimentPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  CreateExperimentPlanResponseBody() {}

  explicit CreateExperimentPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CreateExperimentPlanResponseBody() = default;
};
class CreateExperimentPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExperimentPlanResponseBody> body{};

  CreateExperimentPlanResponse() {}

  explicit CreateExperimentPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateExperimentPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExperimentPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExperimentPlanResponse() = default;
};
class CreateExperimentPlanTemplateRequestTemplatePipelineEnvParams : public Darabonba::Model {
public:
  shared_ptr<long> cpuPerWorker{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<long> gpuPerWorker{};
  shared_ptr<long> memoryPerWorker{};
  shared_ptr<string> NCCLVersion{};
  shared_ptr<string> pyTorchVersion{};
  shared_ptr<long> shareMemory{};
  shared_ptr<long> workerNum{};

  CreateExperimentPlanTemplateRequestTemplatePipelineEnvParams() {}

  explicit CreateExperimentPlanTemplateRequestTemplatePipelineEnvParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPerWorker) {
      res["CpuPerWorker"] = boost::any(*cpuPerWorker);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (gpuPerWorker) {
      res["GpuPerWorker"] = boost::any(*gpuPerWorker);
    }
    if (memoryPerWorker) {
      res["MemoryPerWorker"] = boost::any(*memoryPerWorker);
    }
    if (NCCLVersion) {
      res["NCCLVersion"] = boost::any(*NCCLVersion);
    }
    if (pyTorchVersion) {
      res["PyTorchVersion"] = boost::any(*pyTorchVersion);
    }
    if (shareMemory) {
      res["ShareMemory"] = boost::any(*shareMemory);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPerWorker") != m.end() && !m["CpuPerWorker"].empty()) {
      cpuPerWorker = make_shared<long>(boost::any_cast<long>(m["CpuPerWorker"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("GpuPerWorker") != m.end() && !m["GpuPerWorker"].empty()) {
      gpuPerWorker = make_shared<long>(boost::any_cast<long>(m["GpuPerWorker"]));
    }
    if (m.find("MemoryPerWorker") != m.end() && !m["MemoryPerWorker"].empty()) {
      memoryPerWorker = make_shared<long>(boost::any_cast<long>(m["MemoryPerWorker"]));
    }
    if (m.find("NCCLVersion") != m.end() && !m["NCCLVersion"].empty()) {
      NCCLVersion = make_shared<string>(boost::any_cast<string>(m["NCCLVersion"]));
    }
    if (m.find("PyTorchVersion") != m.end() && !m["PyTorchVersion"].empty()) {
      pyTorchVersion = make_shared<string>(boost::any_cast<string>(m["PyTorchVersion"]));
    }
    if (m.find("ShareMemory") != m.end() && !m["ShareMemory"].empty()) {
      shareMemory = make_shared<long>(boost::any_cast<long>(m["ShareMemory"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
  }


  virtual ~CreateExperimentPlanTemplateRequestTemplatePipelineEnvParams() = default;
};
class CreateExperimentPlanTemplateRequestTemplatePipeline : public Darabonba::Model {
public:
  shared_ptr<CreateExperimentPlanTemplateRequestTemplatePipelineEnvParams> envParams{};
  shared_ptr<long> pipelineOrder{};
  shared_ptr<string> scene{};
  shared_ptr<map<string, string>> settingParams{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};

  CreateExperimentPlanTemplateRequestTemplatePipeline() {}

  explicit CreateExperimentPlanTemplateRequestTemplatePipeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envParams) {
      res["EnvParams"] = envParams ? boost::any(envParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pipelineOrder) {
      res["PipelineOrder"] = boost::any(*pipelineOrder);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (settingParams) {
      res["SettingParams"] = boost::any(*settingParams);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvParams") != m.end() && !m["EnvParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvParams"].type()) {
        CreateExperimentPlanTemplateRequestTemplatePipelineEnvParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvParams"]));
        envParams = make_shared<CreateExperimentPlanTemplateRequestTemplatePipelineEnvParams>(model1);
      }
    }
    if (m.find("PipelineOrder") != m.end() && !m["PipelineOrder"].empty()) {
      pipelineOrder = make_shared<long>(boost::any_cast<long>(m["PipelineOrder"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SettingParams") != m.end() && !m["SettingParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SettingParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settingParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
  }


  virtual ~CreateExperimentPlanTemplateRequestTemplatePipeline() = default;
};
class CreateExperimentPlanTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> privacyLevel{};
  shared_ptr<string> templateDescription{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<vector<CreateExperimentPlanTemplateRequestTemplatePipeline>> templatePipeline{};

  CreateExperimentPlanTemplateRequest() {}

  explicit CreateExperimentPlanTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privacyLevel) {
      res["PrivacyLevel"] = boost::any(*privacyLevel);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templatePipeline) {
      vector<boost::any> temp1;
      for(auto item1:*templatePipeline){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplatePipeline"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivacyLevel") != m.end() && !m["PrivacyLevel"].empty()) {
      privacyLevel = make_shared<string>(boost::any_cast<string>(m["PrivacyLevel"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplatePipeline") != m.end() && !m["TemplatePipeline"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplatePipeline"].type()) {
        vector<CreateExperimentPlanTemplateRequestTemplatePipeline> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplatePipeline"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateExperimentPlanTemplateRequestTemplatePipeline model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templatePipeline = make_shared<vector<CreateExperimentPlanTemplateRequestTemplatePipeline>>(expect1);
      }
    }
  }


  virtual ~CreateExperimentPlanTemplateRequest() = default;
};
class CreateExperimentPlanTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> privacyLevel{};
  shared_ptr<string> templateDescription{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templatePipelineShrink{};

  CreateExperimentPlanTemplateShrinkRequest() {}

  explicit CreateExperimentPlanTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privacyLevel) {
      res["PrivacyLevel"] = boost::any(*privacyLevel);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templatePipelineShrink) {
      res["TemplatePipeline"] = boost::any(*templatePipelineShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivacyLevel") != m.end() && !m["PrivacyLevel"].empty()) {
      privacyLevel = make_shared<string>(boost::any_cast<string>(m["PrivacyLevel"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplatePipeline") != m.end() && !m["TemplatePipeline"].empty()) {
      templatePipelineShrink = make_shared<string>(boost::any_cast<string>(m["TemplatePipeline"]));
    }
  }


  virtual ~CreateExperimentPlanTemplateShrinkRequest() = default;
};
class CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams : public Darabonba::Model {
public:
  shared_ptr<long> cpuPerWorker{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<long> gpuPerWorker{};
  shared_ptr<long> memoryPerWorker{};
  shared_ptr<string> NCCLVersion{};
  shared_ptr<string> pyTorchVersion{};
  shared_ptr<long> shareMemory{};
  shared_ptr<long> workerNum{};

  CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams() {}

  explicit CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPerWorker) {
      res["CpuPerWorker"] = boost::any(*cpuPerWorker);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (gpuPerWorker) {
      res["GpuPerWorker"] = boost::any(*gpuPerWorker);
    }
    if (memoryPerWorker) {
      res["MemoryPerWorker"] = boost::any(*memoryPerWorker);
    }
    if (NCCLVersion) {
      res["NCCLVersion"] = boost::any(*NCCLVersion);
    }
    if (pyTorchVersion) {
      res["PyTorchVersion"] = boost::any(*pyTorchVersion);
    }
    if (shareMemory) {
      res["ShareMemory"] = boost::any(*shareMemory);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPerWorker") != m.end() && !m["CpuPerWorker"].empty()) {
      cpuPerWorker = make_shared<long>(boost::any_cast<long>(m["CpuPerWorker"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("GpuPerWorker") != m.end() && !m["GpuPerWorker"].empty()) {
      gpuPerWorker = make_shared<long>(boost::any_cast<long>(m["GpuPerWorker"]));
    }
    if (m.find("MemoryPerWorker") != m.end() && !m["MemoryPerWorker"].empty()) {
      memoryPerWorker = make_shared<long>(boost::any_cast<long>(m["MemoryPerWorker"]));
    }
    if (m.find("NCCLVersion") != m.end() && !m["NCCLVersion"].empty()) {
      NCCLVersion = make_shared<string>(boost::any_cast<string>(m["NCCLVersion"]));
    }
    if (m.find("PyTorchVersion") != m.end() && !m["PyTorchVersion"].empty()) {
      pyTorchVersion = make_shared<string>(boost::any_cast<string>(m["PyTorchVersion"]));
    }
    if (m.find("ShareMemory") != m.end() && !m["ShareMemory"].empty()) {
      shareMemory = make_shared<long>(boost::any_cast<long>(m["ShareMemory"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
  }


  virtual ~CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams() = default;
};
class CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam : public Darabonba::Model {
public:
  shared_ptr<CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams> envParams{};
  shared_ptr<long> pipelineOrder{};
  shared_ptr<string> scene{};
  shared_ptr<map<string, string>> settingParams{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};

  CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam() {}

  explicit CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envParams) {
      res["EnvParams"] = envParams ? boost::any(envParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pipelineOrder) {
      res["PipelineOrder"] = boost::any(*pipelineOrder);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (settingParams) {
      res["SettingParams"] = boost::any(*settingParams);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvParams") != m.end() && !m["EnvParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvParams"].type()) {
        CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvParams"]));
        envParams = make_shared<CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams>(model1);
      }
    }
    if (m.find("PipelineOrder") != m.end() && !m["PipelineOrder"].empty()) {
      pipelineOrder = make_shared<long>(boost::any_cast<long>(m["PipelineOrder"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SettingParams") != m.end() && !m["SettingParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SettingParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settingParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
  }


  virtual ~CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam() = default;
};
class CreateExperimentPlanTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> creatorUid{};
  shared_ptr<long> isDelete{};
  shared_ptr<string> privacyLevel{};
  shared_ptr<long> templateCode{};
  shared_ptr<string> templateDescription{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<vector<CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam>> templatePipelineParam{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> versionId{};

  CreateExperimentPlanTemplateResponseBodyData() {}

  explicit CreateExperimentPlanTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creatorUid) {
      res["CreatorUid"] = boost::any(*creatorUid);
    }
    if (isDelete) {
      res["IsDelete"] = boost::any(*isDelete);
    }
    if (privacyLevel) {
      res["PrivacyLevel"] = boost::any(*privacyLevel);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templatePipelineParam) {
      vector<boost::any> temp1;
      for(auto item1:*templatePipelineParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplatePipelineParam"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreatorUid") != m.end() && !m["CreatorUid"].empty()) {
      creatorUid = make_shared<long>(boost::any_cast<long>(m["CreatorUid"]));
    }
    if (m.find("IsDelete") != m.end() && !m["IsDelete"].empty()) {
      isDelete = make_shared<long>(boost::any_cast<long>(m["IsDelete"]));
    }
    if (m.find("PrivacyLevel") != m.end() && !m["PrivacyLevel"].empty()) {
      privacyLevel = make_shared<string>(boost::any_cast<string>(m["PrivacyLevel"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<long>(boost::any_cast<long>(m["TemplateCode"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplatePipelineParam") != m.end() && !m["TemplatePipelineParam"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplatePipelineParam"].type()) {
        vector<CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplatePipelineParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templatePipelineParam = make_shared<vector<CreateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
  }


  virtual ~CreateExperimentPlanTemplateResponseBodyData() = default;
};
class CreateExperimentPlanTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<CreateExperimentPlanTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  CreateExperimentPlanTemplateResponseBody() {}

  explicit CreateExperimentPlanTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateExperimentPlanTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateExperimentPlanTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CreateExperimentPlanTemplateResponseBody() = default;
};
class CreateExperimentPlanTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExperimentPlanTemplateResponseBody> body{};

  CreateExperimentPlanTemplateResponse() {}

  explicit CreateExperimentPlanTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateExperimentPlanTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExperimentPlanTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExperimentPlanTemplateResponse() = default;
};
class CreateResourceRequestMachineTypes : public Darabonba::Model {
public:
  shared_ptr<long> bondNum{};
  shared_ptr<string> cpuInfo{};
  shared_ptr<string> diskInfo{};
  shared_ptr<string> gpuInfo{};
  shared_ptr<string> memoryInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> networkInfo{};
  shared_ptr<string> networkMode{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> type{};

  CreateResourceRequestMachineTypes() {}

  explicit CreateResourceRequestMachineTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (networkMode) {
      res["NetworkMode"] = boost::any(*networkMode);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
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
    if (m.find("NetworkMode") != m.end() && !m["NetworkMode"].empty()) {
      networkMode = make_shared<string>(boost::any_cast<string>(m["NetworkMode"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateResourceRequestMachineTypes() = default;
};
class CreateResourceRequestUserAccessParam : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accessKey{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> workspaceId{};

  CreateResourceRequestUserAccessParam() {}

  explicit CreateResourceRequestUserAccessParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateResourceRequestUserAccessParam() = default;
};
class CreateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterDesc{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<CreateResourceRequestMachineTypes> machineTypes{};
  shared_ptr<CreateResourceRequestUserAccessParam> userAccessParam{};

  CreateResourceRequest() {}

  explicit CreateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterDesc) {
      res["ClusterDesc"] = boost::any(*clusterDesc);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (machineTypes) {
      res["MachineTypes"] = machineTypes ? boost::any(machineTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userAccessParam) {
      res["UserAccessParam"] = userAccessParam ? boost::any(userAccessParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterDesc") != m.end() && !m["ClusterDesc"].empty()) {
      clusterDesc = make_shared<string>(boost::any_cast<string>(m["ClusterDesc"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("MachineTypes") != m.end() && !m["MachineTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["MachineTypes"].type()) {
        CreateResourceRequestMachineTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MachineTypes"]));
        machineTypes = make_shared<CreateResourceRequestMachineTypes>(model1);
      }
    }
    if (m.find("UserAccessParam") != m.end() && !m["UserAccessParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserAccessParam"].type()) {
        CreateResourceRequestUserAccessParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserAccessParam"]));
        userAccessParam = make_shared<CreateResourceRequestUserAccessParam>(model1);
      }
    }
  }


  virtual ~CreateResourceRequest() = default;
};
class CreateResourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterDesc{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> machineTypesShrink{};
  shared_ptr<string> userAccessParamShrink{};

  CreateResourceShrinkRequest() {}

  explicit CreateResourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterDesc) {
      res["ClusterDesc"] = boost::any(*clusterDesc);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (machineTypesShrink) {
      res["MachineTypes"] = boost::any(*machineTypesShrink);
    }
    if (userAccessParamShrink) {
      res["UserAccessParam"] = boost::any(*userAccessParamShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterDesc") != m.end() && !m["ClusterDesc"].empty()) {
      clusterDesc = make_shared<string>(boost::any_cast<string>(m["ClusterDesc"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("MachineTypes") != m.end() && !m["MachineTypes"].empty()) {
      machineTypesShrink = make_shared<string>(boost::any_cast<string>(m["MachineTypes"]));
    }
    if (m.find("UserAccessParam") != m.end() && !m["UserAccessParam"].empty()) {
      userAccessParamShrink = make_shared<string>(boost::any_cast<string>(m["UserAccessParam"]));
    }
  }


  virtual ~CreateResourceShrinkRequest() = default;
};
class CreateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  CreateResourceResponseBody() {}

  explicit CreateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CreateResourceResponseBody() = default;
};
class CreateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceResponseBody> body{};

  CreateResourceResponse() {}

  explicit CreateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceResponse() = default;
};
class DeleteExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<long> experimentId{};
  shared_ptr<string> resourceGroupId{};

  DeleteExperimentRequest() {}

  explicit DeleteExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DeleteExperimentRequest() = default;
};
class DeleteExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DeleteExperimentResponseBody() {}

  explicit DeleteExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DeleteExperimentResponseBody() = default;
};
class DeleteExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentResponseBody> body{};

  DeleteExperimentResponse() {}

  explicit DeleteExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentResponse() = default;
};
class DeleteExperimentPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> planId{};

  DeleteExperimentPlanRequest() {}

  explicit DeleteExperimentPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["PlanId"]));
    }
  }


  virtual ~DeleteExperimentPlanRequest() = default;
};
class DeleteExperimentPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DeleteExperimentPlanResponseBody() {}

  explicit DeleteExperimentPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DeleteExperimentPlanResponseBody() = default;
};
class DeleteExperimentPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentPlanResponseBody> body{};

  DeleteExperimentPlanResponse() {}

  explicit DeleteExperimentPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteExperimentPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentPlanResponse() = default;
};
class DeleteExperimentPlanTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> templateId{};

  DeleteExperimentPlanTemplateRequest() {}

  explicit DeleteExperimentPlanTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~DeleteExperimentPlanTemplateRequest() = default;
};
class DeleteExperimentPlanTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DeleteExperimentPlanTemplateResponseBody() {}

  explicit DeleteExperimentPlanTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DeleteExperimentPlanTemplateResponseBody() = default;
};
class DeleteExperimentPlanTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExperimentPlanTemplateResponseBody> body{};

  DeleteExperimentPlanTemplateResponse() {}

  explicit DeleteExperimentPlanTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteExperimentPlanTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExperimentPlanTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExperimentPlanTemplateResponse() = default;
};
class GetExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<long> experimentId{};
  shared_ptr<string> resourceGroupId{};

  GetExperimentRequest() {}

  explicit GetExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~GetExperimentRequest() = default;
};
class GetExperimentResponseBodyDataEnvParamsResourceNodes : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};

  GetExperimentResponseBodyDataEnvParamsResourceNodes() {}

  explicit GetExperimentResponseBodyDataEnvParamsResourceNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataEnvParamsResourceNodes() = default;
};
class GetExperimentResponseBodyDataEnvParams : public Darabonba::Model {
public:
  shared_ptr<long> cpuPerWorker{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<map<string, string>> extendParam{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<long> gpuPerWorker{};
  shared_ptr<long> memoryPerWorker{};
  shared_ptr<string> NCCLVersion{};
  shared_ptr<string> pyTorchVersion{};
  shared_ptr<vector<GetExperimentResponseBodyDataEnvParamsResourceNodes>> resourceNodes{};
  shared_ptr<long> shareMemory{};
  shared_ptr<long> workerNum{};

  GetExperimentResponseBodyDataEnvParams() {}

  explicit GetExperimentResponseBodyDataEnvParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPerWorker) {
      res["CpuPerWorker"] = boost::any(*cpuPerWorker);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (extendParam) {
      res["ExtendParam"] = boost::any(*extendParam);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (gpuPerWorker) {
      res["GpuPerWorker"] = boost::any(*gpuPerWorker);
    }
    if (memoryPerWorker) {
      res["MemoryPerWorker"] = boost::any(*memoryPerWorker);
    }
    if (NCCLVersion) {
      res["NCCLVersion"] = boost::any(*NCCLVersion);
    }
    if (pyTorchVersion) {
      res["PyTorchVersion"] = boost::any(*pyTorchVersion);
    }
    if (resourceNodes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceNodes"] = boost::any(temp1);
    }
    if (shareMemory) {
      res["ShareMemory"] = boost::any(*shareMemory);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPerWorker") != m.end() && !m["CpuPerWorker"].empty()) {
      cpuPerWorker = make_shared<long>(boost::any_cast<long>(m["CpuPerWorker"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("ExtendParam") != m.end() && !m["ExtendParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("GpuPerWorker") != m.end() && !m["GpuPerWorker"].empty()) {
      gpuPerWorker = make_shared<long>(boost::any_cast<long>(m["GpuPerWorker"]));
    }
    if (m.find("MemoryPerWorker") != m.end() && !m["MemoryPerWorker"].empty()) {
      memoryPerWorker = make_shared<long>(boost::any_cast<long>(m["MemoryPerWorker"]));
    }
    if (m.find("NCCLVersion") != m.end() && !m["NCCLVersion"].empty()) {
      NCCLVersion = make_shared<string>(boost::any_cast<string>(m["NCCLVersion"]));
    }
    if (m.find("PyTorchVersion") != m.end() && !m["PyTorchVersion"].empty()) {
      pyTorchVersion = make_shared<string>(boost::any_cast<string>(m["PyTorchVersion"]));
    }
    if (m.find("ResourceNodes") != m.end() && !m["ResourceNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceNodes"].type()) {
        vector<GetExperimentResponseBodyDataEnvParamsResourceNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentResponseBodyDataEnvParamsResourceNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceNodes = make_shared<vector<GetExperimentResponseBodyDataEnvParamsResourceNodes>>(expect1);
      }
    }
    if (m.find("ShareMemory") != m.end() && !m["ShareMemory"].empty()) {
      shareMemory = make_shared<long>(boost::any_cast<long>(m["ShareMemory"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataEnvParams() = default;
};
class GetExperimentResponseBodyDataResourceMachineType : public Darabonba::Model {
public:
  shared_ptr<long> bondNum{};
  shared_ptr<string> cpuInfo{};
  shared_ptr<string> diskInfo{};
  shared_ptr<string> gpuInfo{};
  shared_ptr<string> memoryInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> networkInfo{};
  shared_ptr<string> networkMode{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> type{};

  GetExperimentResponseBodyDataResourceMachineType() {}

  explicit GetExperimentResponseBodyDataResourceMachineType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (networkMode) {
      res["NetworkMode"] = boost::any(*networkMode);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
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
    if (m.find("NetworkMode") != m.end() && !m["NetworkMode"].empty()) {
      networkMode = make_shared<string>(boost::any_cast<string>(m["NetworkMode"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataResourceMachineType() = default;
};
class GetExperimentResponseBodyDataResourceResourceNodes : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};

  GetExperimentResponseBodyDataResourceResourceNodes() {}

  explicit GetExperimentResponseBodyDataResourceResourceNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataResourceResourceNodes() = default;
};
class GetExperimentResponseBodyDataResourceUserAccessParam : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accessKey{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> workspaceId{};

  GetExperimentResponseBodyDataResourceUserAccessParam() {}

  explicit GetExperimentResponseBodyDataResourceUserAccessParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataResourceUserAccessParam() = default;
};
class GetExperimentResponseBodyDataResource : public Darabonba::Model {
public:
  shared_ptr<long> cpuCoreLimit{};
  shared_ptr<long> gpuLimit{};
  shared_ptr<GetExperimentResponseBodyDataResourceMachineType> machineType{};
  shared_ptr<long> maxCpuCore{};
  shared_ptr<long> maxGpu{};
  shared_ptr<long> maxMemory{};
  shared_ptr<long> memoryLimit{};
  shared_ptr<long> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<vector<GetExperimentResponseBodyDataResourceResourceNodes>> resourceNodes{};
  shared_ptr<GetExperimentResponseBodyDataResourceUserAccessParam> userAccessParam{};

  GetExperimentResponseBodyDataResource() {}

  explicit GetExperimentResponseBodyDataResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCoreLimit) {
      res["CpuCoreLimit"] = boost::any(*cpuCoreLimit);
    }
    if (gpuLimit) {
      res["GpuLimit"] = boost::any(*gpuLimit);
    }
    if (machineType) {
      res["MachineType"] = machineType ? boost::any(machineType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxCpuCore) {
      res["MaxCpuCore"] = boost::any(*maxCpuCore);
    }
    if (maxGpu) {
      res["MaxGpu"] = boost::any(*maxGpu);
    }
    if (maxMemory) {
      res["MaxMemory"] = boost::any(*maxMemory);
    }
    if (memoryLimit) {
      res["MemoryLimit"] = boost::any(*memoryLimit);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceNodes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceNodes"] = boost::any(temp1);
    }
    if (userAccessParam) {
      res["UserAccessParam"] = userAccessParam ? boost::any(userAccessParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuCoreLimit") != m.end() && !m["CpuCoreLimit"].empty()) {
      cpuCoreLimit = make_shared<long>(boost::any_cast<long>(m["CpuCoreLimit"]));
    }
    if (m.find("GpuLimit") != m.end() && !m["GpuLimit"].empty()) {
      gpuLimit = make_shared<long>(boost::any_cast<long>(m["GpuLimit"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      if (typeid(map<string, boost::any>) == m["MachineType"].type()) {
        GetExperimentResponseBodyDataResourceMachineType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MachineType"]));
        machineType = make_shared<GetExperimentResponseBodyDataResourceMachineType>(model1);
      }
    }
    if (m.find("MaxCpuCore") != m.end() && !m["MaxCpuCore"].empty()) {
      maxCpuCore = make_shared<long>(boost::any_cast<long>(m["MaxCpuCore"]));
    }
    if (m.find("MaxGpu") != m.end() && !m["MaxGpu"].empty()) {
      maxGpu = make_shared<long>(boost::any_cast<long>(m["MaxGpu"]));
    }
    if (m.find("MaxMemory") != m.end() && !m["MaxMemory"].empty()) {
      maxMemory = make_shared<long>(boost::any_cast<long>(m["MaxMemory"]));
    }
    if (m.find("MemoryLimit") != m.end() && !m["MemoryLimit"].empty()) {
      memoryLimit = make_shared<long>(boost::any_cast<long>(m["MemoryLimit"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceNodes") != m.end() && !m["ResourceNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceNodes"].type()) {
        vector<GetExperimentResponseBodyDataResourceResourceNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentResponseBodyDataResourceResourceNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceNodes = make_shared<vector<GetExperimentResponseBodyDataResourceResourceNodes>>(expect1);
      }
    }
    if (m.find("UserAccessParam") != m.end() && !m["UserAccessParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserAccessParam"].type()) {
        GetExperimentResponseBodyDataResourceUserAccessParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserAccessParam"]));
        userAccessParam = make_shared<GetExperimentResponseBodyDataResourceUserAccessParam>(model1);
      }
    }
  }


  virtual ~GetExperimentResponseBodyDataResource() = default;
};
class GetExperimentResponseBodyDataResultsErrorWorker : public Darabonba::Model {
public:
  shared_ptr<bool> errorFlag{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> experimentId{};
  shared_ptr<string> gpuName{};
  shared_ptr<long> gpuNum{};
  shared_ptr<string> hostname{};
  shared_ptr<string> podName{};
  shared_ptr<double> samplesPerSecond{};
  shared_ptr<double> tflops{};
  shared_ptr<bool> warningFlag{};
  shared_ptr<string> warningMsg{};

  GetExperimentResponseBodyDataResultsErrorWorker() {}

  explicit GetExperimentResponseBodyDataResultsErrorWorker(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorFlag) {
      res["ErrorFlag"] = boost::any(*errorFlag);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gpuName) {
      res["GpuName"] = boost::any(*gpuName);
    }
    if (gpuNum) {
      res["GpuNum"] = boost::any(*gpuNum);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (samplesPerSecond) {
      res["SamplesPerSecond"] = boost::any(*samplesPerSecond);
    }
    if (tflops) {
      res["Tflops"] = boost::any(*tflops);
    }
    if (warningFlag) {
      res["WarningFlag"] = boost::any(*warningFlag);
    }
    if (warningMsg) {
      res["WarningMsg"] = boost::any(*warningMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorFlag") != m.end() && !m["ErrorFlag"].empty()) {
      errorFlag = make_shared<bool>(boost::any_cast<bool>(m["ErrorFlag"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("GpuName") != m.end() && !m["GpuName"].empty()) {
      gpuName = make_shared<string>(boost::any_cast<string>(m["GpuName"]));
    }
    if (m.find("GpuNum") != m.end() && !m["GpuNum"].empty()) {
      gpuNum = make_shared<long>(boost::any_cast<long>(m["GpuNum"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("SamplesPerSecond") != m.end() && !m["SamplesPerSecond"].empty()) {
      samplesPerSecond = make_shared<double>(boost::any_cast<double>(m["SamplesPerSecond"]));
    }
    if (m.find("Tflops") != m.end() && !m["Tflops"].empty()) {
      tflops = make_shared<double>(boost::any_cast<double>(m["Tflops"]));
    }
    if (m.find("WarningFlag") != m.end() && !m["WarningFlag"].empty()) {
      warningFlag = make_shared<bool>(boost::any_cast<bool>(m["WarningFlag"]));
    }
    if (m.find("WarningMsg") != m.end() && !m["WarningMsg"].empty()) {
      warningMsg = make_shared<string>(boost::any_cast<string>(m["WarningMsg"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataResultsErrorWorker() = default;
};
class GetExperimentResponseBodyDataResultsTaskIndividualResultList : public Darabonba::Model {
public:
  shared_ptr<bool> errorFlag{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> experimentId{};
  shared_ptr<string> gpuName{};
  shared_ptr<long> gpuNum{};
  shared_ptr<string> hostname{};
  shared_ptr<string> podName{};
  shared_ptr<double> samplesPerSecond{};
  shared_ptr<double> tflops{};
  shared_ptr<bool> warningFlag{};
  shared_ptr<string> warningMsg{};

  GetExperimentResponseBodyDataResultsTaskIndividualResultList() {}

  explicit GetExperimentResponseBodyDataResultsTaskIndividualResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorFlag) {
      res["ErrorFlag"] = boost::any(*errorFlag);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gpuName) {
      res["GpuName"] = boost::any(*gpuName);
    }
    if (gpuNum) {
      res["GpuNum"] = boost::any(*gpuNum);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (samplesPerSecond) {
      res["SamplesPerSecond"] = boost::any(*samplesPerSecond);
    }
    if (tflops) {
      res["Tflops"] = boost::any(*tflops);
    }
    if (warningFlag) {
      res["WarningFlag"] = boost::any(*warningFlag);
    }
    if (warningMsg) {
      res["WarningMsg"] = boost::any(*warningMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorFlag") != m.end() && !m["ErrorFlag"].empty()) {
      errorFlag = make_shared<bool>(boost::any_cast<bool>(m["ErrorFlag"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("GpuName") != m.end() && !m["GpuName"].empty()) {
      gpuName = make_shared<string>(boost::any_cast<string>(m["GpuName"]));
    }
    if (m.find("GpuNum") != m.end() && !m["GpuNum"].empty()) {
      gpuNum = make_shared<long>(boost::any_cast<long>(m["GpuNum"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("SamplesPerSecond") != m.end() && !m["SamplesPerSecond"].empty()) {
      samplesPerSecond = make_shared<double>(boost::any_cast<double>(m["SamplesPerSecond"]));
    }
    if (m.find("Tflops") != m.end() && !m["Tflops"].empty()) {
      tflops = make_shared<double>(boost::any_cast<double>(m["Tflops"]));
    }
    if (m.find("WarningFlag") != m.end() && !m["WarningFlag"].empty()) {
      warningFlag = make_shared<bool>(boost::any_cast<bool>(m["WarningFlag"]));
    }
    if (m.find("WarningMsg") != m.end() && !m["WarningMsg"].empty()) {
      warningMsg = make_shared<string>(boost::any_cast<string>(m["WarningMsg"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataResultsTaskIndividualResultList() = default;
};
class GetExperimentResponseBodyDataResultsWarningBoundList : public Darabonba::Model {
public:
  shared_ptr<long> iteration{};
  shared_ptr<double> lower{};
  shared_ptr<double> upper{};

  GetExperimentResponseBodyDataResultsWarningBoundList() {}

  explicit GetExperimentResponseBodyDataResultsWarningBoundList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iteration) {
      res["Iteration"] = boost::any(*iteration);
    }
    if (lower) {
      res["Lower"] = boost::any(*lower);
    }
    if (upper) {
      res["Upper"] = boost::any(*upper);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iteration") != m.end() && !m["Iteration"].empty()) {
      iteration = make_shared<long>(boost::any_cast<long>(m["Iteration"]));
    }
    if (m.find("Lower") != m.end() && !m["Lower"].empty()) {
      lower = make_shared<double>(boost::any_cast<double>(m["Lower"]));
    }
    if (m.find("Upper") != m.end() && !m["Upper"].empty()) {
      upper = make_shared<double>(boost::any_cast<double>(m["Upper"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataResultsWarningBoundList() = default;
};
class GetExperimentResponseBodyDataResultsWarningWorker : public Darabonba::Model {
public:
  shared_ptr<bool> errorFlag{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> experimentId{};
  shared_ptr<string> gpuName{};
  shared_ptr<long> gpuNum{};
  shared_ptr<string> hostname{};
  shared_ptr<string> podName{};
  shared_ptr<double> samplesPerSecond{};
  shared_ptr<double> tflops{};
  shared_ptr<bool> warningFlag{};
  shared_ptr<string> warningMsg{};

  GetExperimentResponseBodyDataResultsWarningWorker() {}

  explicit GetExperimentResponseBodyDataResultsWarningWorker(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorFlag) {
      res["ErrorFlag"] = boost::any(*errorFlag);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gpuName) {
      res["GpuName"] = boost::any(*gpuName);
    }
    if (gpuNum) {
      res["GpuNum"] = boost::any(*gpuNum);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (samplesPerSecond) {
      res["SamplesPerSecond"] = boost::any(*samplesPerSecond);
    }
    if (tflops) {
      res["Tflops"] = boost::any(*tflops);
    }
    if (warningFlag) {
      res["WarningFlag"] = boost::any(*warningFlag);
    }
    if (warningMsg) {
      res["WarningMsg"] = boost::any(*warningMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorFlag") != m.end() && !m["ErrorFlag"].empty()) {
      errorFlag = make_shared<bool>(boost::any_cast<bool>(m["ErrorFlag"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("GpuName") != m.end() && !m["GpuName"].empty()) {
      gpuName = make_shared<string>(boost::any_cast<string>(m["GpuName"]));
    }
    if (m.find("GpuNum") != m.end() && !m["GpuNum"].empty()) {
      gpuNum = make_shared<long>(boost::any_cast<long>(m["GpuNum"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("SamplesPerSecond") != m.end() && !m["SamplesPerSecond"].empty()) {
      samplesPerSecond = make_shared<double>(boost::any_cast<double>(m["SamplesPerSecond"]));
    }
    if (m.find("Tflops") != m.end() && !m["Tflops"].empty()) {
      tflops = make_shared<double>(boost::any_cast<double>(m["Tflops"]));
    }
    if (m.find("WarningFlag") != m.end() && !m["WarningFlag"].empty()) {
      warningFlag = make_shared<bool>(boost::any_cast<bool>(m["WarningFlag"]));
    }
    if (m.find("WarningMsg") != m.end() && !m["WarningMsg"].empty()) {
      warningMsg = make_shared<string>(boost::any_cast<string>(m["WarningMsg"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataResultsWarningWorker() = default;
};
class GetExperimentResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<vector<GetExperimentResponseBodyDataResultsErrorWorker>> errorWorker{};
  shared_ptr<long> experimentId{};
  shared_ptr<double> mfu{};
  shared_ptr<double> samplesPerSecond{};
  shared_ptr<double> secondsPerIteration{};
  shared_ptr<vector<GetExperimentResponseBodyDataResultsTaskIndividualResultList>> taskIndividualResultList{};
  shared_ptr<map<string, vector<DataResultsTaskIndividualResultMapValue>>> taskIndividualResultMap{};
  shared_ptr<vector<GetExperimentResponseBodyDataResultsWarningBoundList>> warningBoundList{};
  shared_ptr<vector<GetExperimentResponseBodyDataResultsWarningWorker>> warningWorker{};

  GetExperimentResponseBodyDataResults() {}

  explicit GetExperimentResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (errorWorker) {
      vector<boost::any> temp1;
      for(auto item1:*errorWorker){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorWorker"] = boost::any(temp1);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (mfu) {
      res["Mfu"] = boost::any(*mfu);
    }
    if (samplesPerSecond) {
      res["SamplesPerSecond"] = boost::any(*samplesPerSecond);
    }
    if (secondsPerIteration) {
      res["SecondsPerIteration"] = boost::any(*secondsPerIteration);
    }
    if (taskIndividualResultList) {
      vector<boost::any> temp1;
      for(auto item1:*taskIndividualResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskIndividualResultList"] = boost::any(temp1);
    }
    if (taskIndividualResultMap) {
      map<string, boost::any> temp1;
      for(auto item1:*taskIndividualResultMap){
        vector<boost::any> temp2;
        for(auto item2:item1.second){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1[item1.first] = boost::any(temp2);
      }
      res["TaskIndividualResultMap"] = boost::any(temp1);
    }
    if (warningBoundList) {
      vector<boost::any> temp1;
      for(auto item1:*warningBoundList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WarningBoundList"] = boost::any(temp1);
    }
    if (warningWorker) {
      vector<boost::any> temp1;
      for(auto item1:*warningWorker){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WarningWorker"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("ErrorWorker") != m.end() && !m["ErrorWorker"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorWorker"].type()) {
        vector<GetExperimentResponseBodyDataResultsErrorWorker> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrorWorker"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentResponseBodyDataResultsErrorWorker model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorWorker = make_shared<vector<GetExperimentResponseBodyDataResultsErrorWorker>>(expect1);
      }
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("Mfu") != m.end() && !m["Mfu"].empty()) {
      mfu = make_shared<double>(boost::any_cast<double>(m["Mfu"]));
    }
    if (m.find("SamplesPerSecond") != m.end() && !m["SamplesPerSecond"].empty()) {
      samplesPerSecond = make_shared<double>(boost::any_cast<double>(m["SamplesPerSecond"]));
    }
    if (m.find("SecondsPerIteration") != m.end() && !m["SecondsPerIteration"].empty()) {
      secondsPerIteration = make_shared<double>(boost::any_cast<double>(m["SecondsPerIteration"]));
    }
    if (m.find("TaskIndividualResultList") != m.end() && !m["TaskIndividualResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskIndividualResultList"].type()) {
        vector<GetExperimentResponseBodyDataResultsTaskIndividualResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskIndividualResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentResponseBodyDataResultsTaskIndividualResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskIndividualResultList = make_shared<vector<GetExperimentResponseBodyDataResultsTaskIndividualResultList>>(expect1);
      }
    }
    if (m.find("TaskIndividualResultMap") != m.end() && !m["TaskIndividualResultMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskIndividualResultMap"].type()) {
        map<string, vector<DataResultsTaskIndividualResultMapValue>> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["TaskIndividualResultMap"])){
          if (typeid(vector<boost::any>) == item1.second.type()) {
            vector<DataResultsTaskIndividualResultMapValue> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1.second)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                DataResultsTaskIndividualResultMapValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1[item1.first] = expect2;
          }
        }
        taskIndividualResultMap = make_shared<map<string, vector<DataResultsTaskIndividualResultMapValue>>>(expect1);
      }
    }
    if (m.find("WarningBoundList") != m.end() && !m["WarningBoundList"].empty()) {
      if (typeid(vector<boost::any>) == m["WarningBoundList"].type()) {
        vector<GetExperimentResponseBodyDataResultsWarningBoundList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WarningBoundList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentResponseBodyDataResultsWarningBoundList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        warningBoundList = make_shared<vector<GetExperimentResponseBodyDataResultsWarningBoundList>>(expect1);
      }
    }
    if (m.find("WarningWorker") != m.end() && !m["WarningWorker"].empty()) {
      if (typeid(vector<boost::any>) == m["WarningWorker"].type()) {
        vector<GetExperimentResponseBodyDataResultsWarningWorker> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WarningWorker"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentResponseBodyDataResultsWarningWorker model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        warningWorker = make_shared<vector<GetExperimentResponseBodyDataResultsWarningWorker>>(expect1);
      }
    }
  }


  virtual ~GetExperimentResponseBodyDataResults() = default;
};
class GetExperimentResponseBodyDataTask : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> endTime{};
  shared_ptr<map<string, string>> params{};
  shared_ptr<string> scene{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> taskId{};
  shared_ptr<long> updateTime{};

  GetExperimentResponseBodyDataTask() {}

  explicit GetExperimentResponseBodyDataTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Params"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataTask() = default;
};
class GetExperimentResponseBodyDataWorkloadParamSettings : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> paramDesc{};
  shared_ptr<string> paramName{};
  shared_ptr<string> paramRegex{};
  shared_ptr<string> paramType{};
  shared_ptr<string> paramValue{};

  GetExperimentResponseBodyDataWorkloadParamSettings() {}

  explicit GetExperimentResponseBodyDataWorkloadParamSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (paramDesc) {
      res["ParamDesc"] = boost::any(*paramDesc);
    }
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (paramRegex) {
      res["ParamRegex"] = boost::any(*paramRegex);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (paramValue) {
      res["ParamValue"] = boost::any(*paramValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("ParamDesc") != m.end() && !m["ParamDesc"].empty()) {
      paramDesc = make_shared<string>(boost::any_cast<string>(m["ParamDesc"]));
    }
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ParamRegex") != m.end() && !m["ParamRegex"].empty()) {
      paramRegex = make_shared<string>(boost::any_cast<string>(m["ParamRegex"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      paramValue = make_shared<string>(boost::any_cast<string>(m["ParamValue"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataWorkloadParamSettings() = default;
};
class GetExperimentResponseBodyDataWorkloadStaticConfig : public Darabonba::Model {
public:
  shared_ptr<string> frameWork{};
  shared_ptr<string> os{};
  shared_ptr<string> parameters{};
  shared_ptr<string> softwareStack{};

  GetExperimentResponseBodyDataWorkloadStaticConfig() {}

  explicit GetExperimentResponseBodyDataWorkloadStaticConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frameWork) {
      res["FrameWork"] = boost::any(*frameWork);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (softwareStack) {
      res["SoftwareStack"] = boost::any(*softwareStack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrameWork") != m.end() && !m["FrameWork"].empty()) {
      frameWork = make_shared<string>(boost::any_cast<string>(m["FrameWork"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("SoftwareStack") != m.end() && !m["SoftwareStack"].empty()) {
      softwareStack = make_shared<string>(boost::any_cast<string>(m["SoftwareStack"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataWorkloadStaticConfig() = default;
};
class GetExperimentResponseBodyDataWorkload : public Darabonba::Model {
public:
  shared_ptr<long> defaultCpuPerWorker{};
  shared_ptr<long> defaultGpuPerWorker{};
  shared_ptr<long> defaultMemoryPerWorker{};
  shared_ptr<long> defaultShareMemory{};
  shared_ptr<string> family{};
  shared_ptr<string> jobKind{};
  shared_ptr<vector<GetExperimentResponseBodyDataWorkloadParamSettings>> paramSettings{};
  shared_ptr<string> scene{};
  shared_ptr<string> scope{};
  shared_ptr<GetExperimentResponseBodyDataWorkloadStaticConfig> staticConfig{};
  shared_ptr<long> versionId{};
  shared_ptr<string> workloadDescription{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};
  shared_ptr<string> workloadType{};

  GetExperimentResponseBodyDataWorkload() {}

  explicit GetExperimentResponseBodyDataWorkload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultCpuPerWorker) {
      res["DefaultCpuPerWorker"] = boost::any(*defaultCpuPerWorker);
    }
    if (defaultGpuPerWorker) {
      res["DefaultGpuPerWorker"] = boost::any(*defaultGpuPerWorker);
    }
    if (defaultMemoryPerWorker) {
      res["DefaultMemoryPerWorker"] = boost::any(*defaultMemoryPerWorker);
    }
    if (defaultShareMemory) {
      res["DefaultShareMemory"] = boost::any(*defaultShareMemory);
    }
    if (family) {
      res["Family"] = boost::any(*family);
    }
    if (jobKind) {
      res["JobKind"] = boost::any(*jobKind);
    }
    if (paramSettings) {
      vector<boost::any> temp1;
      for(auto item1:*paramSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamSettings"] = boost::any(temp1);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (staticConfig) {
      res["StaticConfig"] = staticConfig ? boost::any(staticConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (workloadDescription) {
      res["WorkloadDescription"] = boost::any(*workloadDescription);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    if (workloadType) {
      res["WorkloadType"] = boost::any(*workloadType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultCpuPerWorker") != m.end() && !m["DefaultCpuPerWorker"].empty()) {
      defaultCpuPerWorker = make_shared<long>(boost::any_cast<long>(m["DefaultCpuPerWorker"]));
    }
    if (m.find("DefaultGpuPerWorker") != m.end() && !m["DefaultGpuPerWorker"].empty()) {
      defaultGpuPerWorker = make_shared<long>(boost::any_cast<long>(m["DefaultGpuPerWorker"]));
    }
    if (m.find("DefaultMemoryPerWorker") != m.end() && !m["DefaultMemoryPerWorker"].empty()) {
      defaultMemoryPerWorker = make_shared<long>(boost::any_cast<long>(m["DefaultMemoryPerWorker"]));
    }
    if (m.find("DefaultShareMemory") != m.end() && !m["DefaultShareMemory"].empty()) {
      defaultShareMemory = make_shared<long>(boost::any_cast<long>(m["DefaultShareMemory"]));
    }
    if (m.find("Family") != m.end() && !m["Family"].empty()) {
      family = make_shared<string>(boost::any_cast<string>(m["Family"]));
    }
    if (m.find("JobKind") != m.end() && !m["JobKind"].empty()) {
      jobKind = make_shared<string>(boost::any_cast<string>(m["JobKind"]));
    }
    if (m.find("ParamSettings") != m.end() && !m["ParamSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamSettings"].type()) {
        vector<GetExperimentResponseBodyDataWorkloadParamSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentResponseBodyDataWorkloadParamSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramSettings = make_shared<vector<GetExperimentResponseBodyDataWorkloadParamSettings>>(expect1);
      }
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("StaticConfig") != m.end() && !m["StaticConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["StaticConfig"].type()) {
        GetExperimentResponseBodyDataWorkloadStaticConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StaticConfig"]));
        staticConfig = make_shared<GetExperimentResponseBodyDataWorkloadStaticConfig>(model1);
      }
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
    if (m.find("WorkloadDescription") != m.end() && !m["WorkloadDescription"].empty()) {
      workloadDescription = make_shared<string>(boost::any_cast<string>(m["WorkloadDescription"]));
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
    if (m.find("WorkloadType") != m.end() && !m["WorkloadType"].empty()) {
      workloadType = make_shared<string>(boost::any_cast<string>(m["WorkloadType"]));
    }
  }


  virtual ~GetExperimentResponseBodyDataWorkload() = default;
};
class GetExperimentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<GetExperimentResponseBodyDataEnvParams> envParams{};
  shared_ptr<long> experimentId{};
  shared_ptr<string> experimentName{};
  shared_ptr<string> experimentType{};
  shared_ptr<map<string, string>> getParams{};
  shared_ptr<GetExperimentResponseBodyDataResource> resource{};
  shared_ptr<string> resourceName{};
  shared_ptr<GetExperimentResponseBodyDataResults> results{};
  shared_ptr<map<string, string>> setParams{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<GetExperimentResponseBodyDataTask> task{};
  shared_ptr<long> updateTime{};
  shared_ptr<GetExperimentResponseBodyDataWorkload> workload{};
  shared_ptr<string> workloadName{};

  GetExperimentResponseBodyData() {}

  explicit GetExperimentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (envParams) {
      res["EnvParams"] = envParams ? boost::any(envParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (experimentName) {
      res["ExperimentName"] = boost::any(*experimentName);
    }
    if (experimentType) {
      res["ExperimentType"] = boost::any(*experimentType);
    }
    if (getParams) {
      res["GetParams"] = boost::any(*getParams);
    }
    if (resource) {
      res["Resource"] = resource ? boost::any(resource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (results) {
      res["Results"] = results ? boost::any(results->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (setParams) {
      res["SetParams"] = boost::any(*setParams);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (task) {
      res["Task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (workload) {
      res["Workload"] = workload ? boost::any(workload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EnvParams") != m.end() && !m["EnvParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvParams"].type()) {
        GetExperimentResponseBodyDataEnvParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvParams"]));
        envParams = make_shared<GetExperimentResponseBodyDataEnvParams>(model1);
      }
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("ExperimentName") != m.end() && !m["ExperimentName"].empty()) {
      experimentName = make_shared<string>(boost::any_cast<string>(m["ExperimentName"]));
    }
    if (m.find("ExperimentType") != m.end() && !m["ExperimentType"].empty()) {
      experimentType = make_shared<string>(boost::any_cast<string>(m["ExperimentType"]));
    }
    if (m.find("GetParams") != m.end() && !m["GetParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["GetParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      getParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resource"].type()) {
        GetExperimentResponseBodyDataResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resource"]));
        resource = make_shared<GetExperimentResponseBodyDataResource>(model1);
      }
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(map<string, boost::any>) == m["Results"].type()) {
        GetExperimentResponseBodyDataResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Results"]));
        results = make_shared<GetExperimentResponseBodyDataResults>(model1);
      }
    }
    if (m.find("SetParams") != m.end() && !m["SetParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SetParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      setParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(map<string, boost::any>) == m["Task"].type()) {
        GetExperimentResponseBodyDataTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Task"]));
        task = make_shared<GetExperimentResponseBodyDataTask>(model1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("Workload") != m.end() && !m["Workload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Workload"].type()) {
        GetExperimentResponseBodyDataWorkload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Workload"]));
        workload = make_shared<GetExperimentResponseBodyDataWorkload>(model1);
      }
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
  }


  virtual ~GetExperimentResponseBodyData() = default;
};
class GetExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<GetExperimentResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetExperimentResponseBody() {}

  explicit GetExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetExperimentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetExperimentResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetExperimentResponseBody() = default;
};
class GetExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExperimentResponseBody> body{};

  GetExperimentResponse() {}

  explicit GetExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~GetExperimentResponse() = default;
};
class GetExperimentPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> planId{};

  GetExperimentPlanRequest() {}

  explicit GetExperimentPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["PlanId"]));
    }
  }


  virtual ~GetExperimentPlanRequest() = default;
};
class GetExperimentPlanResponseBodyDataPlanPipelineEnvParamsResourceNodes : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};

  GetExperimentPlanResponseBodyDataPlanPipelineEnvParamsResourceNodes() {}

  explicit GetExperimentPlanResponseBodyDataPlanPipelineEnvParamsResourceNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
  }


  virtual ~GetExperimentPlanResponseBodyDataPlanPipelineEnvParamsResourceNodes() = default;
};
class GetExperimentPlanResponseBodyDataPlanPipelineEnvParams : public Darabonba::Model {
public:
  shared_ptr<long> cpuPerWorker{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<map<string, string>> extendParam{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<long> gpuPerWorker{};
  shared_ptr<long> memoryPerWorker{};
  shared_ptr<string> NCCLVersion{};
  shared_ptr<string> pyTorchVersion{};
  shared_ptr<vector<GetExperimentPlanResponseBodyDataPlanPipelineEnvParamsResourceNodes>> resourceNodes{};
  shared_ptr<long> shareMemory{};
  shared_ptr<long> workerNum{};

  GetExperimentPlanResponseBodyDataPlanPipelineEnvParams() {}

  explicit GetExperimentPlanResponseBodyDataPlanPipelineEnvParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPerWorker) {
      res["CpuPerWorker"] = boost::any(*cpuPerWorker);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (extendParam) {
      res["ExtendParam"] = boost::any(*extendParam);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (gpuPerWorker) {
      res["GpuPerWorker"] = boost::any(*gpuPerWorker);
    }
    if (memoryPerWorker) {
      res["MemoryPerWorker"] = boost::any(*memoryPerWorker);
    }
    if (NCCLVersion) {
      res["NCCLVersion"] = boost::any(*NCCLVersion);
    }
    if (pyTorchVersion) {
      res["PyTorchVersion"] = boost::any(*pyTorchVersion);
    }
    if (resourceNodes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceNodes"] = boost::any(temp1);
    }
    if (shareMemory) {
      res["ShareMemory"] = boost::any(*shareMemory);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPerWorker") != m.end() && !m["CpuPerWorker"].empty()) {
      cpuPerWorker = make_shared<long>(boost::any_cast<long>(m["CpuPerWorker"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("ExtendParam") != m.end() && !m["ExtendParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("GpuPerWorker") != m.end() && !m["GpuPerWorker"].empty()) {
      gpuPerWorker = make_shared<long>(boost::any_cast<long>(m["GpuPerWorker"]));
    }
    if (m.find("MemoryPerWorker") != m.end() && !m["MemoryPerWorker"].empty()) {
      memoryPerWorker = make_shared<long>(boost::any_cast<long>(m["MemoryPerWorker"]));
    }
    if (m.find("NCCLVersion") != m.end() && !m["NCCLVersion"].empty()) {
      NCCLVersion = make_shared<string>(boost::any_cast<string>(m["NCCLVersion"]));
    }
    if (m.find("PyTorchVersion") != m.end() && !m["PyTorchVersion"].empty()) {
      pyTorchVersion = make_shared<string>(boost::any_cast<string>(m["PyTorchVersion"]));
    }
    if (m.find("ResourceNodes") != m.end() && !m["ResourceNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceNodes"].type()) {
        vector<GetExperimentPlanResponseBodyDataPlanPipelineEnvParamsResourceNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentPlanResponseBodyDataPlanPipelineEnvParamsResourceNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceNodes = make_shared<vector<GetExperimentPlanResponseBodyDataPlanPipelineEnvParamsResourceNodes>>(expect1);
      }
    }
    if (m.find("ShareMemory") != m.end() && !m["ShareMemory"].empty()) {
      shareMemory = make_shared<long>(boost::any_cast<long>(m["ShareMemory"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
  }


  virtual ~GetExperimentPlanResponseBodyDataPlanPipelineEnvParams() = default;
};
class GetExperimentPlanResponseBodyDataPlanPipeline : public Darabonba::Model {
public:
  shared_ptr<GetExperimentPlanResponseBodyDataPlanPipelineEnvParams> envParams{};
  shared_ptr<long> pipelineOrder{};
  shared_ptr<long> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> scene{};
  shared_ptr<map<string, string>> settingParams{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};

  GetExperimentPlanResponseBodyDataPlanPipeline() {}

  explicit GetExperimentPlanResponseBodyDataPlanPipeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envParams) {
      res["EnvParams"] = envParams ? boost::any(envParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pipelineOrder) {
      res["PipelineOrder"] = boost::any(*pipelineOrder);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (settingParams) {
      res["SettingParams"] = boost::any(*settingParams);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvParams") != m.end() && !m["EnvParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvParams"].type()) {
        GetExperimentPlanResponseBodyDataPlanPipelineEnvParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvParams"]));
        envParams = make_shared<GetExperimentPlanResponseBodyDataPlanPipelineEnvParams>(model1);
      }
    }
    if (m.find("PipelineOrder") != m.end() && !m["PipelineOrder"].empty()) {
      pipelineOrder = make_shared<long>(boost::any_cast<long>(m["PipelineOrder"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SettingParams") != m.end() && !m["SettingParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SettingParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settingParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
  }


  virtual ~GetExperimentPlanResponseBodyDataPlanPipeline() = default;
};
class GetExperimentPlanResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetExperimentPlanResponseBodyDataTags() {}

  explicit GetExperimentPlanResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetExperimentPlanResponseBodyDataTags() = default;
};
class GetExperimentPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> planId{};
  shared_ptr<vector<GetExperimentPlanResponseBodyDataPlanPipeline>> planPipeline{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceId{};
  shared_ptr<vector<GetExperimentPlanResponseBodyDataTags>> tags{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> updateTime{};

  GetExperimentPlanResponseBodyData() {}

  explicit GetExperimentPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planPipeline) {
      vector<boost::any> temp1;
      for(auto item1:*planPipeline){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlanPipeline"] = boost::any(temp1);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
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
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["PlanId"]));
    }
    if (m.find("PlanPipeline") != m.end() && !m["PlanPipeline"].empty()) {
      if (typeid(vector<boost::any>) == m["PlanPipeline"].type()) {
        vector<GetExperimentPlanResponseBodyDataPlanPipeline> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlanPipeline"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentPlanResponseBodyDataPlanPipeline model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        planPipeline = make_shared<vector<GetExperimentPlanResponseBodyDataPlanPipeline>>(expect1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetExperimentPlanResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentPlanResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetExperimentPlanResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetExperimentPlanResponseBodyData() = default;
};
class GetExperimentPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<GetExperimentPlanResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetExperimentPlanResponseBody() {}

  explicit GetExperimentPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetExperimentPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetExperimentPlanResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetExperimentPlanResponseBody() = default;
};
class GetExperimentPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExperimentPlanResponseBody> body{};

  GetExperimentPlanResponse() {}

  explicit GetExperimentPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetExperimentPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExperimentPlanResponseBody>(model1);
      }
    }
  }


  virtual ~GetExperimentPlanResponse() = default;
};
class GetExperimentPlanTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> templateId{};

  GetExperimentPlanTemplateRequest() {}

  explicit GetExperimentPlanTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~GetExperimentPlanTemplateRequest() = default;
};
class GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};

  GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes() {}

  explicit GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
  }


  virtual ~GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes() = default;
};
class GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams : public Darabonba::Model {
public:
  shared_ptr<long> cpuPerWorker{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<map<string, string>> extendParam{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<long> gpuPerWorker{};
  shared_ptr<long> memoryPerWorker{};
  shared_ptr<string> NCCLVersion{};
  shared_ptr<string> pyTorchVersion{};
  shared_ptr<vector<GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes>> resourceNodes{};
  shared_ptr<long> shareMemory{};
  shared_ptr<long> workerNum{};

  GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams() {}

  explicit GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPerWorker) {
      res["CpuPerWorker"] = boost::any(*cpuPerWorker);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (extendParam) {
      res["ExtendParam"] = boost::any(*extendParam);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (gpuPerWorker) {
      res["GpuPerWorker"] = boost::any(*gpuPerWorker);
    }
    if (memoryPerWorker) {
      res["MemoryPerWorker"] = boost::any(*memoryPerWorker);
    }
    if (NCCLVersion) {
      res["NCCLVersion"] = boost::any(*NCCLVersion);
    }
    if (pyTorchVersion) {
      res["PyTorchVersion"] = boost::any(*pyTorchVersion);
    }
    if (resourceNodes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceNodes"] = boost::any(temp1);
    }
    if (shareMemory) {
      res["ShareMemory"] = boost::any(*shareMemory);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPerWorker") != m.end() && !m["CpuPerWorker"].empty()) {
      cpuPerWorker = make_shared<long>(boost::any_cast<long>(m["CpuPerWorker"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("ExtendParam") != m.end() && !m["ExtendParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("GpuPerWorker") != m.end() && !m["GpuPerWorker"].empty()) {
      gpuPerWorker = make_shared<long>(boost::any_cast<long>(m["GpuPerWorker"]));
    }
    if (m.find("MemoryPerWorker") != m.end() && !m["MemoryPerWorker"].empty()) {
      memoryPerWorker = make_shared<long>(boost::any_cast<long>(m["MemoryPerWorker"]));
    }
    if (m.find("NCCLVersion") != m.end() && !m["NCCLVersion"].empty()) {
      NCCLVersion = make_shared<string>(boost::any_cast<string>(m["NCCLVersion"]));
    }
    if (m.find("PyTorchVersion") != m.end() && !m["PyTorchVersion"].empty()) {
      pyTorchVersion = make_shared<string>(boost::any_cast<string>(m["PyTorchVersion"]));
    }
    if (m.find("ResourceNodes") != m.end() && !m["ResourceNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceNodes"].type()) {
        vector<GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceNodes = make_shared<vector<GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes>>(expect1);
      }
    }
    if (m.find("ShareMemory") != m.end() && !m["ShareMemory"].empty()) {
      shareMemory = make_shared<long>(boost::any_cast<long>(m["ShareMemory"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
  }


  virtual ~GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams() = default;
};
class GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParam : public Darabonba::Model {
public:
  shared_ptr<GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams> envParams{};
  shared_ptr<long> pipelineOrder{};
  shared_ptr<string> scene{};
  shared_ptr<map<string, string>> settingParams{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};

  GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParam() {}

  explicit GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envParams) {
      res["EnvParams"] = envParams ? boost::any(envParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pipelineOrder) {
      res["PipelineOrder"] = boost::any(*pipelineOrder);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (settingParams) {
      res["SettingParams"] = boost::any(*settingParams);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvParams") != m.end() && !m["EnvParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvParams"].type()) {
        GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvParams"]));
        envParams = make_shared<GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams>(model1);
      }
    }
    if (m.find("PipelineOrder") != m.end() && !m["PipelineOrder"].empty()) {
      pipelineOrder = make_shared<long>(boost::any_cast<long>(m["PipelineOrder"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SettingParams") != m.end() && !m["SettingParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SettingParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settingParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
  }


  virtual ~GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParam() = default;
};
class GetExperimentPlanTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> creatorUid{};
  shared_ptr<long> isDelete{};
  shared_ptr<string> privacyLevel{};
  shared_ptr<long> templateCode{};
  shared_ptr<string> templateDescription{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<vector<GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParam>> templatePipelineParam{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> versionId{};

  GetExperimentPlanTemplateResponseBodyData() {}

  explicit GetExperimentPlanTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creatorUid) {
      res["CreatorUid"] = boost::any(*creatorUid);
    }
    if (isDelete) {
      res["IsDelete"] = boost::any(*isDelete);
    }
    if (privacyLevel) {
      res["PrivacyLevel"] = boost::any(*privacyLevel);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templatePipelineParam) {
      vector<boost::any> temp1;
      for(auto item1:*templatePipelineParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplatePipelineParam"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreatorUid") != m.end() && !m["CreatorUid"].empty()) {
      creatorUid = make_shared<long>(boost::any_cast<long>(m["CreatorUid"]));
    }
    if (m.find("IsDelete") != m.end() && !m["IsDelete"].empty()) {
      isDelete = make_shared<long>(boost::any_cast<long>(m["IsDelete"]));
    }
    if (m.find("PrivacyLevel") != m.end() && !m["PrivacyLevel"].empty()) {
      privacyLevel = make_shared<string>(boost::any_cast<string>(m["PrivacyLevel"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<long>(boost::any_cast<long>(m["TemplateCode"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplatePipelineParam") != m.end() && !m["TemplatePipelineParam"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplatePipelineParam"].type()) {
        vector<GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplatePipelineParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templatePipelineParam = make_shared<vector<GetExperimentPlanTemplateResponseBodyDataTemplatePipelineParam>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
  }


  virtual ~GetExperimentPlanTemplateResponseBodyData() = default;
};
class GetExperimentPlanTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<GetExperimentPlanTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetExperimentPlanTemplateResponseBody() {}

  explicit GetExperimentPlanTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetExperimentPlanTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetExperimentPlanTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetExperimentPlanTemplateResponseBody() = default;
};
class GetExperimentPlanTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExperimentPlanTemplateResponseBody> body{};

  GetExperimentPlanTemplateResponse() {}

  explicit GetExperimentPlanTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetExperimentPlanTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExperimentPlanTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetExperimentPlanTemplateResponse() = default;
};
class GetExperimentResultDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> experimentId{};
  shared_ptr<string> hostname{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> workloadType{};

  GetExperimentResultDataRequest() {}

  explicit GetExperimentResultDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (workloadType) {
      res["WorkloadType"] = boost::any(*workloadType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("WorkloadType") != m.end() && !m["WorkloadType"].empty()) {
      workloadType = make_shared<string>(boost::any_cast<string>(m["WorkloadType"]));
    }
  }


  virtual ~GetExperimentResultDataRequest() = default;
};
class GetExperimentResultDataResponseBodyDataMetricsInfos : public Darabonba::Model {
public:
  shared_ptr<string> gpuNum{};
  shared_ptr<long> iteration{};
  shared_ptr<double> tflops{};
  shared_ptr<long> timestamp{};
  shared_ptr<double> value{};

  GetExperimentResultDataResponseBodyDataMetricsInfos() {}

  explicit GetExperimentResultDataResponseBodyDataMetricsInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuNum) {
      res["Gpu_num"] = boost::any(*gpuNum);
    }
    if (iteration) {
      res["Iteration"] = boost::any(*iteration);
    }
    if (tflops) {
      res["Tflops"] = boost::any(*tflops);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gpu_num") != m.end() && !m["Gpu_num"].empty()) {
      gpuNum = make_shared<string>(boost::any_cast<string>(m["Gpu_num"]));
    }
    if (m.find("Iteration") != m.end() && !m["Iteration"].empty()) {
      iteration = make_shared<long>(boost::any_cast<long>(m["Iteration"]));
    }
    if (m.find("Tflops") != m.end() && !m["Tflops"].empty()) {
      tflops = make_shared<double>(boost::any_cast<double>(m["Tflops"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~GetExperimentResultDataResponseBodyDataMetricsInfos() = default;
};
class GetExperimentResultDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gpuNum{};
  shared_ptr<string> hostname{};
  shared_ptr<vector<GetExperimentResultDataResponseBodyDataMetricsInfos>> metricsInfos{};
  shared_ptr<string> podName{};

  GetExperimentResultDataResponseBodyData() {}

  explicit GetExperimentResultDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gpuNum) {
      res["GpuNum"] = boost::any(*gpuNum);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (metricsInfos) {
      vector<boost::any> temp1;
      for(auto item1:*metricsInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricsInfos"] = boost::any(temp1);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GpuNum") != m.end() && !m["GpuNum"].empty()) {
      gpuNum = make_shared<string>(boost::any_cast<string>(m["GpuNum"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("MetricsInfos") != m.end() && !m["MetricsInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricsInfos"].type()) {
        vector<GetExperimentResultDataResponseBodyDataMetricsInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricsInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentResultDataResponseBodyDataMetricsInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricsInfos = make_shared<vector<GetExperimentResultDataResponseBodyDataMetricsInfos>>(expect1);
      }
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
  }


  virtual ~GetExperimentResultDataResponseBodyData() = default;
};
class GetExperimentResultDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<GetExperimentResultDataResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetExperimentResultDataResponseBody() {}

  explicit GetExperimentResultDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetExperimentResultDataResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetExperimentResultDataResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetExperimentResultDataResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetExperimentResultDataResponseBody() = default;
};
class GetExperimentResultDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExperimentResultDataResponseBody> body{};

  GetExperimentResultDataResponse() {}

  explicit GetExperimentResultDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetExperimentResultDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExperimentResultDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetExperimentResultDataResponse() = default;
};
class GetResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  GetResourceRequest() {}

  explicit GetResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetResourceRequest() = default;
};
class GetResourceResponseBodyDataMachineType : public Darabonba::Model {
public:
  shared_ptr<long> bondNum{};
  shared_ptr<string> cpuInfo{};
  shared_ptr<string> diskInfo{};
  shared_ptr<string> gpuInfo{};
  shared_ptr<string> memoryInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> networkInfo{};
  shared_ptr<string> networkMode{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> type{};

  GetResourceResponseBodyDataMachineType() {}

  explicit GetResourceResponseBodyDataMachineType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (networkMode) {
      res["NetworkMode"] = boost::any(*networkMode);
    }
    if (nodeCount) {
      res["NodeCount"] = boost::any(*nodeCount);
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
    if (m.find("NetworkMode") != m.end() && !m["NetworkMode"].empty()) {
      networkMode = make_shared<string>(boost::any_cast<string>(m["NetworkMode"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["NodeCount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetResourceResponseBodyDataMachineType() = default;
};
class GetResourceResponseBodyDataResourceNodes : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};

  GetResourceResponseBodyDataResourceNodes() {}

  explicit GetResourceResponseBodyDataResourceNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
  }


  virtual ~GetResourceResponseBodyDataResourceNodes() = default;
};
class GetResourceResponseBodyDataUserAccessParam : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accessKey{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> workspaceId{};

  GetResourceResponseBodyDataUserAccessParam() {}

  explicit GetResourceResponseBodyDataUserAccessParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetResourceResponseBodyDataUserAccessParam() = default;
};
class GetResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterDesc{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> cpuCoreLimit{};
  shared_ptr<long> gpuLimit{};
  shared_ptr<GetResourceResponseBodyDataMachineType> machineType{};
  shared_ptr<long> maxCpuCore{};
  shared_ptr<long> maxGpu{};
  shared_ptr<long> maxMemory{};
  shared_ptr<long> memoryLimit{};
  shared_ptr<long> resourceId{};
  shared_ptr<vector<GetResourceResponseBodyDataResourceNodes>> resourceNodes{};
  shared_ptr<GetResourceResponseBodyDataUserAccessParam> userAccessParam{};

  GetResourceResponseBodyData() {}

  explicit GetResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterDesc) {
      res["ClusterDesc"] = boost::any(*clusterDesc);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (cpuCoreLimit) {
      res["CpuCoreLimit"] = boost::any(*cpuCoreLimit);
    }
    if (gpuLimit) {
      res["GpuLimit"] = boost::any(*gpuLimit);
    }
    if (machineType) {
      res["MachineType"] = machineType ? boost::any(machineType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxCpuCore) {
      res["MaxCpuCore"] = boost::any(*maxCpuCore);
    }
    if (maxGpu) {
      res["MaxGpu"] = boost::any(*maxGpu);
    }
    if (maxMemory) {
      res["MaxMemory"] = boost::any(*maxMemory);
    }
    if (memoryLimit) {
      res["MemoryLimit"] = boost::any(*memoryLimit);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceNodes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceNodes"] = boost::any(temp1);
    }
    if (userAccessParam) {
      res["UserAccessParam"] = userAccessParam ? boost::any(userAccessParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterDesc") != m.end() && !m["ClusterDesc"].empty()) {
      clusterDesc = make_shared<string>(boost::any_cast<string>(m["ClusterDesc"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("CpuCoreLimit") != m.end() && !m["CpuCoreLimit"].empty()) {
      cpuCoreLimit = make_shared<long>(boost::any_cast<long>(m["CpuCoreLimit"]));
    }
    if (m.find("GpuLimit") != m.end() && !m["GpuLimit"].empty()) {
      gpuLimit = make_shared<long>(boost::any_cast<long>(m["GpuLimit"]));
    }
    if (m.find("MachineType") != m.end() && !m["MachineType"].empty()) {
      if (typeid(map<string, boost::any>) == m["MachineType"].type()) {
        GetResourceResponseBodyDataMachineType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MachineType"]));
        machineType = make_shared<GetResourceResponseBodyDataMachineType>(model1);
      }
    }
    if (m.find("MaxCpuCore") != m.end() && !m["MaxCpuCore"].empty()) {
      maxCpuCore = make_shared<long>(boost::any_cast<long>(m["MaxCpuCore"]));
    }
    if (m.find("MaxGpu") != m.end() && !m["MaxGpu"].empty()) {
      maxGpu = make_shared<long>(boost::any_cast<long>(m["MaxGpu"]));
    }
    if (m.find("MaxMemory") != m.end() && !m["MaxMemory"].empty()) {
      maxMemory = make_shared<long>(boost::any_cast<long>(m["MaxMemory"]));
    }
    if (m.find("MemoryLimit") != m.end() && !m["MemoryLimit"].empty()) {
      memoryLimit = make_shared<long>(boost::any_cast<long>(m["MemoryLimit"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("ResourceNodes") != m.end() && !m["ResourceNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceNodes"].type()) {
        vector<GetResourceResponseBodyDataResourceNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceResponseBodyDataResourceNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceNodes = make_shared<vector<GetResourceResponseBodyDataResourceNodes>>(expect1);
      }
    }
    if (m.find("UserAccessParam") != m.end() && !m["UserAccessParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserAccessParam"].type()) {
        GetResourceResponseBodyDataUserAccessParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserAccessParam"]));
        userAccessParam = make_shared<GetResourceResponseBodyDataUserAccessParam>(model1);
      }
    }
  }


  virtual ~GetResourceResponseBodyData() = default;
};
class GetResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<GetResourceResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetResourceResponseBody() {}

  explicit GetResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetResourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetResourceResponseBody() = default;
};
class GetResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceResponseBody> body{};

  GetResourceResponse() {}

  explicit GetResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceResponse() = default;
};
class GetResourcePredictResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceId{};
  shared_ptr<long> templateId{};

  GetResourcePredictResultRequest() {}

  explicit GetResourcePredictResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~GetResourcePredictResultRequest() = default;
};
class GetResourcePredictResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetResourcePredictResultResponseBody() {}

  explicit GetResourcePredictResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetResourcePredictResultResponseBody() = default;
};
class GetResourcePredictResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourcePredictResultResponseBody> body{};

  GetResourcePredictResultResponse() {}

  explicit GetResourcePredictResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetResourcePredictResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourcePredictResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourcePredictResultResponse() = default;
};
class GetWorkloadRequest : public Darabonba::Model {
public:
  shared_ptr<long> workloadId{};

  GetWorkloadRequest() {}

  explicit GetWorkloadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
  }


  virtual ~GetWorkloadRequest() = default;
};
class GetWorkloadResponseBodyDataParamSettings : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> paramDesc{};
  shared_ptr<string> paramName{};
  shared_ptr<string> paramRegex{};
  shared_ptr<string> paramType{};
  shared_ptr<string> paramValue{};

  GetWorkloadResponseBodyDataParamSettings() {}

  explicit GetWorkloadResponseBodyDataParamSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (paramDesc) {
      res["ParamDesc"] = boost::any(*paramDesc);
    }
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (paramRegex) {
      res["ParamRegex"] = boost::any(*paramRegex);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (paramValue) {
      res["ParamValue"] = boost::any(*paramValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("ParamDesc") != m.end() && !m["ParamDesc"].empty()) {
      paramDesc = make_shared<string>(boost::any_cast<string>(m["ParamDesc"]));
    }
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ParamRegex") != m.end() && !m["ParamRegex"].empty()) {
      paramRegex = make_shared<string>(boost::any_cast<string>(m["ParamRegex"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      paramValue = make_shared<string>(boost::any_cast<string>(m["ParamValue"]));
    }
  }


  virtual ~GetWorkloadResponseBodyDataParamSettings() = default;
};
class GetWorkloadResponseBodyDataStaticConfig : public Darabonba::Model {
public:
  shared_ptr<string> frameWork{};
  shared_ptr<string> os{};
  shared_ptr<string> parameters{};
  shared_ptr<string> softwareStack{};

  GetWorkloadResponseBodyDataStaticConfig() {}

  explicit GetWorkloadResponseBodyDataStaticConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frameWork) {
      res["FrameWork"] = boost::any(*frameWork);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (softwareStack) {
      res["SoftwareStack"] = boost::any(*softwareStack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrameWork") != m.end() && !m["FrameWork"].empty()) {
      frameWork = make_shared<string>(boost::any_cast<string>(m["FrameWork"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("SoftwareStack") != m.end() && !m["SoftwareStack"].empty()) {
      softwareStack = make_shared<string>(boost::any_cast<string>(m["SoftwareStack"]));
    }
  }


  virtual ~GetWorkloadResponseBodyDataStaticConfig() = default;
};
class GetWorkloadResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> defaultCpuPerWorker{};
  shared_ptr<long> defaultGpuPerWorker{};
  shared_ptr<long> defaultMemoryPerWorker{};
  shared_ptr<long> defaultShareMemory{};
  shared_ptr<string> family{};
  shared_ptr<string> jobKind{};
  shared_ptr<vector<GetWorkloadResponseBodyDataParamSettings>> paramSettings{};
  shared_ptr<string> scene{};
  shared_ptr<string> scope{};
  shared_ptr<GetWorkloadResponseBodyDataStaticConfig> staticConfig{};
  shared_ptr<long> versionId{};
  shared_ptr<string> workloadDescription{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};
  shared_ptr<string> workloadType{};

  GetWorkloadResponseBodyData() {}

  explicit GetWorkloadResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultCpuPerWorker) {
      res["DefaultCpuPerWorker"] = boost::any(*defaultCpuPerWorker);
    }
    if (defaultGpuPerWorker) {
      res["DefaultGpuPerWorker"] = boost::any(*defaultGpuPerWorker);
    }
    if (defaultMemoryPerWorker) {
      res["DefaultMemoryPerWorker"] = boost::any(*defaultMemoryPerWorker);
    }
    if (defaultShareMemory) {
      res["DefaultShareMemory"] = boost::any(*defaultShareMemory);
    }
    if (family) {
      res["Family"] = boost::any(*family);
    }
    if (jobKind) {
      res["JobKind"] = boost::any(*jobKind);
    }
    if (paramSettings) {
      vector<boost::any> temp1;
      for(auto item1:*paramSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamSettings"] = boost::any(temp1);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (staticConfig) {
      res["StaticConfig"] = staticConfig ? boost::any(staticConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (workloadDescription) {
      res["WorkloadDescription"] = boost::any(*workloadDescription);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    if (workloadType) {
      res["WorkloadType"] = boost::any(*workloadType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultCpuPerWorker") != m.end() && !m["DefaultCpuPerWorker"].empty()) {
      defaultCpuPerWorker = make_shared<long>(boost::any_cast<long>(m["DefaultCpuPerWorker"]));
    }
    if (m.find("DefaultGpuPerWorker") != m.end() && !m["DefaultGpuPerWorker"].empty()) {
      defaultGpuPerWorker = make_shared<long>(boost::any_cast<long>(m["DefaultGpuPerWorker"]));
    }
    if (m.find("DefaultMemoryPerWorker") != m.end() && !m["DefaultMemoryPerWorker"].empty()) {
      defaultMemoryPerWorker = make_shared<long>(boost::any_cast<long>(m["DefaultMemoryPerWorker"]));
    }
    if (m.find("DefaultShareMemory") != m.end() && !m["DefaultShareMemory"].empty()) {
      defaultShareMemory = make_shared<long>(boost::any_cast<long>(m["DefaultShareMemory"]));
    }
    if (m.find("Family") != m.end() && !m["Family"].empty()) {
      family = make_shared<string>(boost::any_cast<string>(m["Family"]));
    }
    if (m.find("JobKind") != m.end() && !m["JobKind"].empty()) {
      jobKind = make_shared<string>(boost::any_cast<string>(m["JobKind"]));
    }
    if (m.find("ParamSettings") != m.end() && !m["ParamSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamSettings"].type()) {
        vector<GetWorkloadResponseBodyDataParamSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorkloadResponseBodyDataParamSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramSettings = make_shared<vector<GetWorkloadResponseBodyDataParamSettings>>(expect1);
      }
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("StaticConfig") != m.end() && !m["StaticConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["StaticConfig"].type()) {
        GetWorkloadResponseBodyDataStaticConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StaticConfig"]));
        staticConfig = make_shared<GetWorkloadResponseBodyDataStaticConfig>(model1);
      }
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
    if (m.find("WorkloadDescription") != m.end() && !m["WorkloadDescription"].empty()) {
      workloadDescription = make_shared<string>(boost::any_cast<string>(m["WorkloadDescription"]));
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
    if (m.find("WorkloadType") != m.end() && !m["WorkloadType"].empty()) {
      workloadType = make_shared<string>(boost::any_cast<string>(m["WorkloadType"]));
    }
  }


  virtual ~GetWorkloadResponseBodyData() = default;
};
class GetWorkloadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<GetWorkloadResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetWorkloadResponseBody() {}

  explicit GetWorkloadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetWorkloadResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWorkloadResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetWorkloadResponseBody() = default;
};
class GetWorkloadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkloadResponseBody> body{};

  GetWorkloadResponse() {}

  explicit GetWorkloadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWorkloadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkloadResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkloadResponse() = default;
};
class ListExperimentPlanTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> privacyLevel{};

  ListExperimentPlanTemplatesRequest() {}

  explicit ListExperimentPlanTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privacyLevel) {
      res["PrivacyLevel"] = boost::any(*privacyLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivacyLevel") != m.end() && !m["PrivacyLevel"].empty()) {
      privacyLevel = make_shared<string>(boost::any_cast<string>(m["PrivacyLevel"]));
    }
  }


  virtual ~ListExperimentPlanTemplatesRequest() = default;
};
class ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParamEnvParams : public Darabonba::Model {
public:
  shared_ptr<long> cpuPerWorker{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<long> gpuPerWorker{};
  shared_ptr<long> memoryPerWorker{};
  shared_ptr<string> NCCLVersion{};
  shared_ptr<string> pyTorchVersion{};
  shared_ptr<long> shareMemory{};
  shared_ptr<long> workerNum{};

  ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParamEnvParams() {}

  explicit ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParamEnvParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPerWorker) {
      res["CpuPerWorker"] = boost::any(*cpuPerWorker);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (gpuPerWorker) {
      res["GpuPerWorker"] = boost::any(*gpuPerWorker);
    }
    if (memoryPerWorker) {
      res["MemoryPerWorker"] = boost::any(*memoryPerWorker);
    }
    if (NCCLVersion) {
      res["NCCLVersion"] = boost::any(*NCCLVersion);
    }
    if (pyTorchVersion) {
      res["PyTorchVersion"] = boost::any(*pyTorchVersion);
    }
    if (shareMemory) {
      res["ShareMemory"] = boost::any(*shareMemory);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPerWorker") != m.end() && !m["CpuPerWorker"].empty()) {
      cpuPerWorker = make_shared<long>(boost::any_cast<long>(m["CpuPerWorker"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("GpuPerWorker") != m.end() && !m["GpuPerWorker"].empty()) {
      gpuPerWorker = make_shared<long>(boost::any_cast<long>(m["GpuPerWorker"]));
    }
    if (m.find("MemoryPerWorker") != m.end() && !m["MemoryPerWorker"].empty()) {
      memoryPerWorker = make_shared<long>(boost::any_cast<long>(m["MemoryPerWorker"]));
    }
    if (m.find("NCCLVersion") != m.end() && !m["NCCLVersion"].empty()) {
      NCCLVersion = make_shared<string>(boost::any_cast<string>(m["NCCLVersion"]));
    }
    if (m.find("PyTorchVersion") != m.end() && !m["PyTorchVersion"].empty()) {
      pyTorchVersion = make_shared<string>(boost::any_cast<string>(m["PyTorchVersion"]));
    }
    if (m.find("ShareMemory") != m.end() && !m["ShareMemory"].empty()) {
      shareMemory = make_shared<long>(boost::any_cast<long>(m["ShareMemory"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
  }


  virtual ~ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParamEnvParams() = default;
};
class ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParam : public Darabonba::Model {
public:
  shared_ptr<ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParamEnvParams> envParams{};
  shared_ptr<long> pipelineOrder{};
  shared_ptr<string> scene{};
  shared_ptr<map<string, string>> settingParams{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};

  ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParam() {}

  explicit ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envParams) {
      res["EnvParams"] = envParams ? boost::any(envParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pipelineOrder) {
      res["PipelineOrder"] = boost::any(*pipelineOrder);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (settingParams) {
      res["SettingParams"] = boost::any(*settingParams);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvParams") != m.end() && !m["EnvParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvParams"].type()) {
        ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParamEnvParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvParams"]));
        envParams = make_shared<ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParamEnvParams>(model1);
      }
    }
    if (m.find("PipelineOrder") != m.end() && !m["PipelineOrder"].empty()) {
      pipelineOrder = make_shared<long>(boost::any_cast<long>(m["PipelineOrder"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SettingParams") != m.end() && !m["SettingParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SettingParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settingParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
  }


  virtual ~ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParam() = default;
};
class ListExperimentPlanTemplatesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> creatorUid{};
  shared_ptr<long> isDelete{};
  shared_ptr<string> privacyLevel{};
  shared_ptr<long> templateCode{};
  shared_ptr<string> templateDescription{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<vector<ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParam>> templatePipelineParam{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> versionId{};

  ListExperimentPlanTemplatesResponseBodyData() {}

  explicit ListExperimentPlanTemplatesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creatorUid) {
      res["CreatorUid"] = boost::any(*creatorUid);
    }
    if (isDelete) {
      res["IsDelete"] = boost::any(*isDelete);
    }
    if (privacyLevel) {
      res["PrivacyLevel"] = boost::any(*privacyLevel);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templatePipelineParam) {
      vector<boost::any> temp1;
      for(auto item1:*templatePipelineParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplatePipelineParam"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreatorUid") != m.end() && !m["CreatorUid"].empty()) {
      creatorUid = make_shared<long>(boost::any_cast<long>(m["CreatorUid"]));
    }
    if (m.find("IsDelete") != m.end() && !m["IsDelete"].empty()) {
      isDelete = make_shared<long>(boost::any_cast<long>(m["IsDelete"]));
    }
    if (m.find("PrivacyLevel") != m.end() && !m["PrivacyLevel"].empty()) {
      privacyLevel = make_shared<string>(boost::any_cast<string>(m["PrivacyLevel"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<long>(boost::any_cast<long>(m["TemplateCode"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplatePipelineParam") != m.end() && !m["TemplatePipelineParam"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplatePipelineParam"].type()) {
        vector<ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplatePipelineParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templatePipelineParam = make_shared<vector<ListExperimentPlanTemplatesResponseBodyDataTemplatePipelineParam>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
  }


  virtual ~ListExperimentPlanTemplatesResponseBodyData() = default;
};
class ListExperimentPlanTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExperimentPlanTemplatesResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListExperimentPlanTemplatesResponseBody() {}

  explicit ListExperimentPlanTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListExperimentPlanTemplatesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentPlanTemplatesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListExperimentPlanTemplatesResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListExperimentPlanTemplatesResponseBody() = default;
};
class ListExperimentPlanTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExperimentPlanTemplatesResponseBody> body{};

  ListExperimentPlanTemplatesResponse() {}

  explicit ListExperimentPlanTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListExperimentPlanTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentPlanTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentPlanTemplatesResponse() = default;
};
class ListExperimentPlansRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListExperimentPlansRequestTag() {}

  explicit ListExperimentPlansRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListExperimentPlansRequestTag() = default;
};
class ListExperimentPlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> creatTimeOrder{};
  shared_ptr<string> endTimeOrder{};
  shared_ptr<long> page{};
  shared_ptr<vector<string>> planTaskStatus{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceId{};
  shared_ptr<vector<string>> resourceName{};
  shared_ptr<long> size{};
  shared_ptr<string> startTimeOrder{};
  shared_ptr<vector<ListExperimentPlansRequestTag>> tag{};
  shared_ptr<long> templateId{};

  ListExperimentPlansRequest() {}

  explicit ListExperimentPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatTimeOrder) {
      res["CreatTimeOrder"] = boost::any(*creatTimeOrder);
    }
    if (endTimeOrder) {
      res["EndTimeOrder"] = boost::any(*endTimeOrder);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (planTaskStatus) {
      res["PlanTaskStatus"] = boost::any(*planTaskStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTimeOrder) {
      res["StartTimeOrder"] = boost::any(*startTimeOrder);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatTimeOrder") != m.end() && !m["CreatTimeOrder"].empty()) {
      creatTimeOrder = make_shared<string>(boost::any_cast<string>(m["CreatTimeOrder"]));
    }
    if (m.find("EndTimeOrder") != m.end() && !m["EndTimeOrder"].empty()) {
      endTimeOrder = make_shared<string>(boost::any_cast<string>(m["EndTimeOrder"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PlanTaskStatus") != m.end() && !m["PlanTaskStatus"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PlanTaskStatus"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PlanTaskStatus"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      planTaskStatus = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StartTimeOrder") != m.end() && !m["StartTimeOrder"].empty()) {
      startTimeOrder = make_shared<string>(boost::any_cast<string>(m["StartTimeOrder"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListExperimentPlansRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentPlansRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListExperimentPlansRequestTag>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ListExperimentPlansRequest() = default;
};
class ListExperimentPlansShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> creatTimeOrder{};
  shared_ptr<string> endTimeOrder{};
  shared_ptr<long> page{};
  shared_ptr<string> planTaskStatusShrink{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceId{};
  shared_ptr<string> resourceNameShrink{};
  shared_ptr<long> size{};
  shared_ptr<string> startTimeOrder{};
  shared_ptr<string> tagShrink{};
  shared_ptr<long> templateId{};

  ListExperimentPlansShrinkRequest() {}

  explicit ListExperimentPlansShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatTimeOrder) {
      res["CreatTimeOrder"] = boost::any(*creatTimeOrder);
    }
    if (endTimeOrder) {
      res["EndTimeOrder"] = boost::any(*endTimeOrder);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (planTaskStatusShrink) {
      res["PlanTaskStatus"] = boost::any(*planTaskStatusShrink);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceNameShrink) {
      res["ResourceName"] = boost::any(*resourceNameShrink);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTimeOrder) {
      res["StartTimeOrder"] = boost::any(*startTimeOrder);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatTimeOrder") != m.end() && !m["CreatTimeOrder"].empty()) {
      creatTimeOrder = make_shared<string>(boost::any_cast<string>(m["CreatTimeOrder"]));
    }
    if (m.find("EndTimeOrder") != m.end() && !m["EndTimeOrder"].empty()) {
      endTimeOrder = make_shared<string>(boost::any_cast<string>(m["EndTimeOrder"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PlanTaskStatus") != m.end() && !m["PlanTaskStatus"].empty()) {
      planTaskStatusShrink = make_shared<string>(boost::any_cast<string>(m["PlanTaskStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceNameShrink = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StartTimeOrder") != m.end() && !m["StartTimeOrder"].empty()) {
      startTimeOrder = make_shared<string>(boost::any_cast<string>(m["StartTimeOrder"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
  }


  virtual ~ListExperimentPlansShrinkRequest() = default;
};
class ListExperimentPlansResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListExperimentPlansResponseBodyDataTags() {}

  explicit ListExperimentPlansResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListExperimentPlansResponseBodyDataTags() = default;
};
class ListExperimentPlansResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> planId{};
  shared_ptr<map<string, long>> planTaskStatus{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<ListExperimentPlansResponseBodyDataTags>> tags{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> updateTime{};

  ListExperimentPlansResponseBodyData() {}

  explicit ListExperimentPlansResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planTaskStatus) {
      res["PlanTaskStatus"] = boost::any(*planTaskStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
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
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["PlanId"]));
    }
    if (m.find("PlanTaskStatus") != m.end() && !m["PlanTaskStatus"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["PlanTaskStatus"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      planTaskStatus = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListExperimentPlansResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentPlansResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListExperimentPlansResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListExperimentPlansResponseBodyData() = default;
};
class ListExperimentPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<ListExperimentPlansResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListExperimentPlansResponseBody() {}

  explicit ListExperimentPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListExperimentPlansResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentPlansResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListExperimentPlansResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListExperimentPlansResponseBody() = default;
};
class ListExperimentPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExperimentPlansResponseBody> body{};

  ListExperimentPlansResponse() {}

  explicit ListExperimentPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListExperimentPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentPlansResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentPlansResponse() = default;
};
class ListExperimentsRequest : public Darabonba::Model {
public:
  shared_ptr<long> order{};
  shared_ptr<long> planId{};
  shared_ptr<string> resourceGroupId{};

  ListExperimentsRequest() {}

  explicit ListExperimentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["Order"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["PlanId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListExperimentsRequest() = default;
};
class ListExperimentsResponseBodyDataEnvParamsResourceNodes : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};

  ListExperimentsResponseBodyDataEnvParamsResourceNodes() {}

  explicit ListExperimentsResponseBodyDataEnvParamsResourceNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
  }


  virtual ~ListExperimentsResponseBodyDataEnvParamsResourceNodes() = default;
};
class ListExperimentsResponseBodyDataEnvParams : public Darabonba::Model {
public:
  shared_ptr<long> cpuPerWorker{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<map<string, string>> extendParam{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<long> gpuPerWorker{};
  shared_ptr<long> memoryPerWorker{};
  shared_ptr<string> NCCLVersion{};
  shared_ptr<string> pyTorchVersion{};
  shared_ptr<vector<ListExperimentsResponseBodyDataEnvParamsResourceNodes>> resourceNodes{};
  shared_ptr<long> shareMemory{};
  shared_ptr<long> workerNum{};

  ListExperimentsResponseBodyDataEnvParams() {}

  explicit ListExperimentsResponseBodyDataEnvParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPerWorker) {
      res["CpuPerWorker"] = boost::any(*cpuPerWorker);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (extendParam) {
      res["ExtendParam"] = boost::any(*extendParam);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (gpuPerWorker) {
      res["GpuPerWorker"] = boost::any(*gpuPerWorker);
    }
    if (memoryPerWorker) {
      res["MemoryPerWorker"] = boost::any(*memoryPerWorker);
    }
    if (NCCLVersion) {
      res["NCCLVersion"] = boost::any(*NCCLVersion);
    }
    if (pyTorchVersion) {
      res["PyTorchVersion"] = boost::any(*pyTorchVersion);
    }
    if (resourceNodes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceNodes"] = boost::any(temp1);
    }
    if (shareMemory) {
      res["ShareMemory"] = boost::any(*shareMemory);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPerWorker") != m.end() && !m["CpuPerWorker"].empty()) {
      cpuPerWorker = make_shared<long>(boost::any_cast<long>(m["CpuPerWorker"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("ExtendParam") != m.end() && !m["ExtendParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("GpuPerWorker") != m.end() && !m["GpuPerWorker"].empty()) {
      gpuPerWorker = make_shared<long>(boost::any_cast<long>(m["GpuPerWorker"]));
    }
    if (m.find("MemoryPerWorker") != m.end() && !m["MemoryPerWorker"].empty()) {
      memoryPerWorker = make_shared<long>(boost::any_cast<long>(m["MemoryPerWorker"]));
    }
    if (m.find("NCCLVersion") != m.end() && !m["NCCLVersion"].empty()) {
      NCCLVersion = make_shared<string>(boost::any_cast<string>(m["NCCLVersion"]));
    }
    if (m.find("PyTorchVersion") != m.end() && !m["PyTorchVersion"].empty()) {
      pyTorchVersion = make_shared<string>(boost::any_cast<string>(m["PyTorchVersion"]));
    }
    if (m.find("ResourceNodes") != m.end() && !m["ResourceNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceNodes"].type()) {
        vector<ListExperimentsResponseBodyDataEnvParamsResourceNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentsResponseBodyDataEnvParamsResourceNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceNodes = make_shared<vector<ListExperimentsResponseBodyDataEnvParamsResourceNodes>>(expect1);
      }
    }
    if (m.find("ShareMemory") != m.end() && !m["ShareMemory"].empty()) {
      shareMemory = make_shared<long>(boost::any_cast<long>(m["ShareMemory"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
  }


  virtual ~ListExperimentsResponseBodyDataEnvParams() = default;
};
class ListExperimentsResponseBodyDataResultsErrorWorker : public Darabonba::Model {
public:
  shared_ptr<bool> errorFlag{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> experimentId{};
  shared_ptr<string> gpuName{};
  shared_ptr<long> gpuNum{};
  shared_ptr<string> hostname{};
  shared_ptr<string> podName{};
  shared_ptr<double> samplesPerSecond{};
  shared_ptr<double> tflops{};
  shared_ptr<bool> warningFlag{};
  shared_ptr<string> warningMsg{};

  ListExperimentsResponseBodyDataResultsErrorWorker() {}

  explicit ListExperimentsResponseBodyDataResultsErrorWorker(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorFlag) {
      res["ErrorFlag"] = boost::any(*errorFlag);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gpuName) {
      res["GpuName"] = boost::any(*gpuName);
    }
    if (gpuNum) {
      res["GpuNum"] = boost::any(*gpuNum);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (samplesPerSecond) {
      res["SamplesPerSecond"] = boost::any(*samplesPerSecond);
    }
    if (tflops) {
      res["Tflops"] = boost::any(*tflops);
    }
    if (warningFlag) {
      res["WarningFlag"] = boost::any(*warningFlag);
    }
    if (warningMsg) {
      res["WarningMsg"] = boost::any(*warningMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorFlag") != m.end() && !m["ErrorFlag"].empty()) {
      errorFlag = make_shared<bool>(boost::any_cast<bool>(m["ErrorFlag"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("GpuName") != m.end() && !m["GpuName"].empty()) {
      gpuName = make_shared<string>(boost::any_cast<string>(m["GpuName"]));
    }
    if (m.find("GpuNum") != m.end() && !m["GpuNum"].empty()) {
      gpuNum = make_shared<long>(boost::any_cast<long>(m["GpuNum"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("SamplesPerSecond") != m.end() && !m["SamplesPerSecond"].empty()) {
      samplesPerSecond = make_shared<double>(boost::any_cast<double>(m["SamplesPerSecond"]));
    }
    if (m.find("Tflops") != m.end() && !m["Tflops"].empty()) {
      tflops = make_shared<double>(boost::any_cast<double>(m["Tflops"]));
    }
    if (m.find("WarningFlag") != m.end() && !m["WarningFlag"].empty()) {
      warningFlag = make_shared<bool>(boost::any_cast<bool>(m["WarningFlag"]));
    }
    if (m.find("WarningMsg") != m.end() && !m["WarningMsg"].empty()) {
      warningMsg = make_shared<string>(boost::any_cast<string>(m["WarningMsg"]));
    }
  }


  virtual ~ListExperimentsResponseBodyDataResultsErrorWorker() = default;
};
class ListExperimentsResponseBodyDataResultsWarningWorker : public Darabonba::Model {
public:
  shared_ptr<bool> errorFlag{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> experimentId{};
  shared_ptr<string> gpuName{};
  shared_ptr<long> gpuNum{};
  shared_ptr<string> hostname{};
  shared_ptr<string> podName{};
  shared_ptr<double> samplesPerSecond{};
  shared_ptr<double> tflops{};
  shared_ptr<bool> warningFlag{};
  shared_ptr<string> warningMsg{};

  ListExperimentsResponseBodyDataResultsWarningWorker() {}

  explicit ListExperimentsResponseBodyDataResultsWarningWorker(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorFlag) {
      res["ErrorFlag"] = boost::any(*errorFlag);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (gpuName) {
      res["GpuName"] = boost::any(*gpuName);
    }
    if (gpuNum) {
      res["GpuNum"] = boost::any(*gpuNum);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (samplesPerSecond) {
      res["SamplesPerSecond"] = boost::any(*samplesPerSecond);
    }
    if (tflops) {
      res["Tflops"] = boost::any(*tflops);
    }
    if (warningFlag) {
      res["WarningFlag"] = boost::any(*warningFlag);
    }
    if (warningMsg) {
      res["WarningMsg"] = boost::any(*warningMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorFlag") != m.end() && !m["ErrorFlag"].empty()) {
      errorFlag = make_shared<bool>(boost::any_cast<bool>(m["ErrorFlag"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("GpuName") != m.end() && !m["GpuName"].empty()) {
      gpuName = make_shared<string>(boost::any_cast<string>(m["GpuName"]));
    }
    if (m.find("GpuNum") != m.end() && !m["GpuNum"].empty()) {
      gpuNum = make_shared<long>(boost::any_cast<long>(m["GpuNum"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("SamplesPerSecond") != m.end() && !m["SamplesPerSecond"].empty()) {
      samplesPerSecond = make_shared<double>(boost::any_cast<double>(m["SamplesPerSecond"]));
    }
    if (m.find("Tflops") != m.end() && !m["Tflops"].empty()) {
      tflops = make_shared<double>(boost::any_cast<double>(m["Tflops"]));
    }
    if (m.find("WarningFlag") != m.end() && !m["WarningFlag"].empty()) {
      warningFlag = make_shared<bool>(boost::any_cast<bool>(m["WarningFlag"]));
    }
    if (m.find("WarningMsg") != m.end() && !m["WarningMsg"].empty()) {
      warningMsg = make_shared<string>(boost::any_cast<string>(m["WarningMsg"]));
    }
  }


  virtual ~ListExperimentsResponseBodyDataResultsWarningWorker() = default;
};
class ListExperimentsResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<vector<ListExperimentsResponseBodyDataResultsErrorWorker>> errorWorker{};
  shared_ptr<long> experimentId{};
  shared_ptr<double> mfu{};
  shared_ptr<double> samplesPerSecond{};
  shared_ptr<double> secondsPerIteration{};
  shared_ptr<vector<ListExperimentsResponseBodyDataResultsWarningWorker>> warningWorker{};

  ListExperimentsResponseBodyDataResults() {}

  explicit ListExperimentsResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (errorWorker) {
      vector<boost::any> temp1;
      for(auto item1:*errorWorker){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorWorker"] = boost::any(temp1);
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (mfu) {
      res["Mfu"] = boost::any(*mfu);
    }
    if (samplesPerSecond) {
      res["SamplesPerSecond"] = boost::any(*samplesPerSecond);
    }
    if (secondsPerIteration) {
      res["SecondsPerIteration"] = boost::any(*secondsPerIteration);
    }
    if (warningWorker) {
      vector<boost::any> temp1;
      for(auto item1:*warningWorker){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WarningWorker"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("ErrorWorker") != m.end() && !m["ErrorWorker"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorWorker"].type()) {
        vector<ListExperimentsResponseBodyDataResultsErrorWorker> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrorWorker"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentsResponseBodyDataResultsErrorWorker model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorWorker = make_shared<vector<ListExperimentsResponseBodyDataResultsErrorWorker>>(expect1);
      }
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("Mfu") != m.end() && !m["Mfu"].empty()) {
      mfu = make_shared<double>(boost::any_cast<double>(m["Mfu"]));
    }
    if (m.find("SamplesPerSecond") != m.end() && !m["SamplesPerSecond"].empty()) {
      samplesPerSecond = make_shared<double>(boost::any_cast<double>(m["SamplesPerSecond"]));
    }
    if (m.find("SecondsPerIteration") != m.end() && !m["SecondsPerIteration"].empty()) {
      secondsPerIteration = make_shared<double>(boost::any_cast<double>(m["SecondsPerIteration"]));
    }
    if (m.find("WarningWorker") != m.end() && !m["WarningWorker"].empty()) {
      if (typeid(vector<boost::any>) == m["WarningWorker"].type()) {
        vector<ListExperimentsResponseBodyDataResultsWarningWorker> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WarningWorker"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentsResponseBodyDataResultsWarningWorker model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        warningWorker = make_shared<vector<ListExperimentsResponseBodyDataResultsWarningWorker>>(expect1);
      }
    }
  }


  virtual ~ListExperimentsResponseBodyDataResults() = default;
};
class ListExperimentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> endTime{};
  shared_ptr<ListExperimentsResponseBodyDataEnvParams> envParams{};
  shared_ptr<long> experimentId{};
  shared_ptr<string> experimentName{};
  shared_ptr<string> experimentType{};
  shared_ptr<map<string, string>> getParams{};
  shared_ptr<string> resourceName{};
  shared_ptr<ListExperimentsResponseBodyDataResults> results{};
  shared_ptr<map<string, string>> setParams{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> workloadName{};

  ListExperimentsResponseBodyData() {}

  explicit ListExperimentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (envParams) {
      res["EnvParams"] = envParams ? boost::any(envParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (experimentName) {
      res["ExperimentName"] = boost::any(*experimentName);
    }
    if (experimentType) {
      res["ExperimentType"] = boost::any(*experimentType);
    }
    if (getParams) {
      res["GetParams"] = boost::any(*getParams);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (results) {
      res["Results"] = results ? boost::any(results->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (setParams) {
      res["SetParams"] = boost::any(*setParams);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EnvParams") != m.end() && !m["EnvParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvParams"].type()) {
        ListExperimentsResponseBodyDataEnvParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvParams"]));
        envParams = make_shared<ListExperimentsResponseBodyDataEnvParams>(model1);
      }
    }
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("ExperimentName") != m.end() && !m["ExperimentName"].empty()) {
      experimentName = make_shared<string>(boost::any_cast<string>(m["ExperimentName"]));
    }
    if (m.find("ExperimentType") != m.end() && !m["ExperimentType"].empty()) {
      experimentType = make_shared<string>(boost::any_cast<string>(m["ExperimentType"]));
    }
    if (m.find("GetParams") != m.end() && !m["GetParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["GetParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      getParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(map<string, boost::any>) == m["Results"].type()) {
        ListExperimentsResponseBodyDataResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Results"]));
        results = make_shared<ListExperimentsResponseBodyDataResults>(model1);
      }
    }
    if (m.find("SetParams") != m.end() && !m["SetParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SetParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      setParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
  }


  virtual ~ListExperimentsResponseBodyData() = default;
};
class ListExperimentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<ListExperimentsResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListExperimentsResponseBody() {}

  explicit ListExperimentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListExperimentsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExperimentsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListExperimentsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListExperimentsResponseBody() = default;
};
class ListExperimentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExperimentsResponseBody> body{};

  ListExperimentsResponse() {}

  explicit ListExperimentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListExperimentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExperimentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExperimentsResponse() = default;
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
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};
  shared_ptr<long> totalCount{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
class ListWorkloadsRequest : public Darabonba::Model {
public:
  shared_ptr<string> scope{};

  ListWorkloadsRequest() {}

  explicit ListWorkloadsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~ListWorkloadsRequest() = default;
};
class ListWorkloadsResponseBodyDataParamSettings : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> paramDesc{};
  shared_ptr<string> paramName{};
  shared_ptr<string> paramRegex{};
  shared_ptr<string> paramType{};
  shared_ptr<string> paramValue{};

  ListWorkloadsResponseBodyDataParamSettings() {}

  explicit ListWorkloadsResponseBodyDataParamSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (paramDesc) {
      res["ParamDesc"] = boost::any(*paramDesc);
    }
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (paramRegex) {
      res["ParamRegex"] = boost::any(*paramRegex);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (paramValue) {
      res["ParamValue"] = boost::any(*paramValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("ParamDesc") != m.end() && !m["ParamDesc"].empty()) {
      paramDesc = make_shared<string>(boost::any_cast<string>(m["ParamDesc"]));
    }
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ParamRegex") != m.end() && !m["ParamRegex"].empty()) {
      paramRegex = make_shared<string>(boost::any_cast<string>(m["ParamRegex"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      paramValue = make_shared<string>(boost::any_cast<string>(m["ParamValue"]));
    }
  }


  virtual ~ListWorkloadsResponseBodyDataParamSettings() = default;
};
class ListWorkloadsResponseBodyDataStaticConfig : public Darabonba::Model {
public:
  shared_ptr<string> frameWork{};
  shared_ptr<string> os{};
  shared_ptr<string> parameters{};
  shared_ptr<string> softwareStack{};

  ListWorkloadsResponseBodyDataStaticConfig() {}

  explicit ListWorkloadsResponseBodyDataStaticConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frameWork) {
      res["FrameWork"] = boost::any(*frameWork);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (softwareStack) {
      res["SoftwareStack"] = boost::any(*softwareStack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrameWork") != m.end() && !m["FrameWork"].empty()) {
      frameWork = make_shared<string>(boost::any_cast<string>(m["FrameWork"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("SoftwareStack") != m.end() && !m["SoftwareStack"].empty()) {
      softwareStack = make_shared<string>(boost::any_cast<string>(m["SoftwareStack"]));
    }
  }


  virtual ~ListWorkloadsResponseBodyDataStaticConfig() = default;
};
class ListWorkloadsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> defaultCpuPerWorker{};
  shared_ptr<long> defaultGpuPerWorker{};
  shared_ptr<long> defaultMemoryPerWorker{};
  shared_ptr<long> defaultShareMemory{};
  shared_ptr<string> family{};
  shared_ptr<string> jobKind{};
  shared_ptr<vector<ListWorkloadsResponseBodyDataParamSettings>> paramSettings{};
  shared_ptr<string> scene{};
  shared_ptr<string> scope{};
  shared_ptr<ListWorkloadsResponseBodyDataStaticConfig> staticConfig{};
  shared_ptr<long> versionId{};
  shared_ptr<string> workloadDescription{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};
  shared_ptr<string> workloadType{};

  ListWorkloadsResponseBodyData() {}

  explicit ListWorkloadsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultCpuPerWorker) {
      res["DefaultCpuPerWorker"] = boost::any(*defaultCpuPerWorker);
    }
    if (defaultGpuPerWorker) {
      res["DefaultGpuPerWorker"] = boost::any(*defaultGpuPerWorker);
    }
    if (defaultMemoryPerWorker) {
      res["DefaultMemoryPerWorker"] = boost::any(*defaultMemoryPerWorker);
    }
    if (defaultShareMemory) {
      res["DefaultShareMemory"] = boost::any(*defaultShareMemory);
    }
    if (family) {
      res["Family"] = boost::any(*family);
    }
    if (jobKind) {
      res["JobKind"] = boost::any(*jobKind);
    }
    if (paramSettings) {
      vector<boost::any> temp1;
      for(auto item1:*paramSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamSettings"] = boost::any(temp1);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (staticConfig) {
      res["StaticConfig"] = staticConfig ? boost::any(staticConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (workloadDescription) {
      res["WorkloadDescription"] = boost::any(*workloadDescription);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    if (workloadType) {
      res["WorkloadType"] = boost::any(*workloadType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultCpuPerWorker") != m.end() && !m["DefaultCpuPerWorker"].empty()) {
      defaultCpuPerWorker = make_shared<long>(boost::any_cast<long>(m["DefaultCpuPerWorker"]));
    }
    if (m.find("DefaultGpuPerWorker") != m.end() && !m["DefaultGpuPerWorker"].empty()) {
      defaultGpuPerWorker = make_shared<long>(boost::any_cast<long>(m["DefaultGpuPerWorker"]));
    }
    if (m.find("DefaultMemoryPerWorker") != m.end() && !m["DefaultMemoryPerWorker"].empty()) {
      defaultMemoryPerWorker = make_shared<long>(boost::any_cast<long>(m["DefaultMemoryPerWorker"]));
    }
    if (m.find("DefaultShareMemory") != m.end() && !m["DefaultShareMemory"].empty()) {
      defaultShareMemory = make_shared<long>(boost::any_cast<long>(m["DefaultShareMemory"]));
    }
    if (m.find("Family") != m.end() && !m["Family"].empty()) {
      family = make_shared<string>(boost::any_cast<string>(m["Family"]));
    }
    if (m.find("JobKind") != m.end() && !m["JobKind"].empty()) {
      jobKind = make_shared<string>(boost::any_cast<string>(m["JobKind"]));
    }
    if (m.find("ParamSettings") != m.end() && !m["ParamSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamSettings"].type()) {
        vector<ListWorkloadsResponseBodyDataParamSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkloadsResponseBodyDataParamSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramSettings = make_shared<vector<ListWorkloadsResponseBodyDataParamSettings>>(expect1);
      }
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("StaticConfig") != m.end() && !m["StaticConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["StaticConfig"].type()) {
        ListWorkloadsResponseBodyDataStaticConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StaticConfig"]));
        staticConfig = make_shared<ListWorkloadsResponseBodyDataStaticConfig>(model1);
      }
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
    if (m.find("WorkloadDescription") != m.end() && !m["WorkloadDescription"].empty()) {
      workloadDescription = make_shared<string>(boost::any_cast<string>(m["WorkloadDescription"]));
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
    if (m.find("WorkloadType") != m.end() && !m["WorkloadType"].empty()) {
      workloadType = make_shared<string>(boost::any_cast<string>(m["WorkloadType"]));
    }
  }


  virtual ~ListWorkloadsResponseBodyData() = default;
};
class ListWorkloadsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<ListWorkloadsResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListWorkloadsResponseBody() {}

  explicit ListWorkloadsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListWorkloadsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkloadsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListWorkloadsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListWorkloadsResponseBody() = default;
};
class ListWorkloadsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkloadsResponseBody> body{};

  ListWorkloadsResponse() {}

  explicit ListWorkloadsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWorkloadsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkloadsResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkloadsResponse() = default;
};
class StopExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<long> experimentId{};
  shared_ptr<string> resourceGroupId{};

  StopExperimentRequest() {}

  explicit StopExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (experimentId) {
      res["ExperimentId"] = boost::any(*experimentId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExperimentId") != m.end() && !m["ExperimentId"].empty()) {
      experimentId = make_shared<long>(boost::any_cast<long>(m["ExperimentId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~StopExperimentRequest() = default;
};
class StopExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  StopExperimentResponseBody() {}

  explicit StopExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~StopExperimentResponseBody() = default;
};
class StopExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopExperimentResponseBody> body{};

  StopExperimentResponse() {}

  explicit StopExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~StopExperimentResponse() = default;
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
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
class UpdateExperimentPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> planId{};
  shared_ptr<string> planTemplateName{};

  UpdateExperimentPlanRequest() {}

  explicit UpdateExperimentPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (planTemplateName) {
      res["PlanTemplateName"] = boost::any(*planTemplateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<long>(boost::any_cast<long>(m["PlanId"]));
    }
    if (m.find("PlanTemplateName") != m.end() && !m["PlanTemplateName"].empty()) {
      planTemplateName = make_shared<string>(boost::any_cast<string>(m["PlanTemplateName"]));
    }
  }


  virtual ~UpdateExperimentPlanRequest() = default;
};
class UpdateExperimentPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  UpdateExperimentPlanResponseBody() {}

  explicit UpdateExperimentPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~UpdateExperimentPlanResponseBody() = default;
};
class UpdateExperimentPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentPlanResponseBody> body{};

  UpdateExperimentPlanResponse() {}

  explicit UpdateExperimentPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateExperimentPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentPlanResponse() = default;
};
class UpdateExperimentPlanTemplateRequestTemplatePipelineEnvParams : public Darabonba::Model {
public:
  shared_ptr<long> cpuPerWorker{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<long> gpuPerWorker{};
  shared_ptr<long> memoryPerWorker{};
  shared_ptr<string> NCCLVersion{};
  shared_ptr<string> pyTorchVersion{};
  shared_ptr<long> shareMemory{};
  shared_ptr<long> workerNum{};

  UpdateExperimentPlanTemplateRequestTemplatePipelineEnvParams() {}

  explicit UpdateExperimentPlanTemplateRequestTemplatePipelineEnvParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPerWorker) {
      res["CpuPerWorker"] = boost::any(*cpuPerWorker);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (gpuPerWorker) {
      res["GpuPerWorker"] = boost::any(*gpuPerWorker);
    }
    if (memoryPerWorker) {
      res["MemoryPerWorker"] = boost::any(*memoryPerWorker);
    }
    if (NCCLVersion) {
      res["NCCLVersion"] = boost::any(*NCCLVersion);
    }
    if (pyTorchVersion) {
      res["PyTorchVersion"] = boost::any(*pyTorchVersion);
    }
    if (shareMemory) {
      res["ShareMemory"] = boost::any(*shareMemory);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPerWorker") != m.end() && !m["CpuPerWorker"].empty()) {
      cpuPerWorker = make_shared<long>(boost::any_cast<long>(m["CpuPerWorker"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("GpuPerWorker") != m.end() && !m["GpuPerWorker"].empty()) {
      gpuPerWorker = make_shared<long>(boost::any_cast<long>(m["GpuPerWorker"]));
    }
    if (m.find("MemoryPerWorker") != m.end() && !m["MemoryPerWorker"].empty()) {
      memoryPerWorker = make_shared<long>(boost::any_cast<long>(m["MemoryPerWorker"]));
    }
    if (m.find("NCCLVersion") != m.end() && !m["NCCLVersion"].empty()) {
      NCCLVersion = make_shared<string>(boost::any_cast<string>(m["NCCLVersion"]));
    }
    if (m.find("PyTorchVersion") != m.end() && !m["PyTorchVersion"].empty()) {
      pyTorchVersion = make_shared<string>(boost::any_cast<string>(m["PyTorchVersion"]));
    }
    if (m.find("ShareMemory") != m.end() && !m["ShareMemory"].empty()) {
      shareMemory = make_shared<long>(boost::any_cast<long>(m["ShareMemory"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
  }


  virtual ~UpdateExperimentPlanTemplateRequestTemplatePipelineEnvParams() = default;
};
class UpdateExperimentPlanTemplateRequestTemplatePipeline : public Darabonba::Model {
public:
  shared_ptr<UpdateExperimentPlanTemplateRequestTemplatePipelineEnvParams> envParams{};
  shared_ptr<long> pipelineOrder{};
  shared_ptr<string> scene{};
  shared_ptr<map<string, string>> settingParams{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};

  UpdateExperimentPlanTemplateRequestTemplatePipeline() {}

  explicit UpdateExperimentPlanTemplateRequestTemplatePipeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envParams) {
      res["EnvParams"] = envParams ? boost::any(envParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pipelineOrder) {
      res["PipelineOrder"] = boost::any(*pipelineOrder);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (settingParams) {
      res["SettingParams"] = boost::any(*settingParams);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvParams") != m.end() && !m["EnvParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvParams"].type()) {
        UpdateExperimentPlanTemplateRequestTemplatePipelineEnvParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvParams"]));
        envParams = make_shared<UpdateExperimentPlanTemplateRequestTemplatePipelineEnvParams>(model1);
      }
    }
    if (m.find("PipelineOrder") != m.end() && !m["PipelineOrder"].empty()) {
      pipelineOrder = make_shared<long>(boost::any_cast<long>(m["PipelineOrder"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SettingParams") != m.end() && !m["SettingParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SettingParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settingParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
  }


  virtual ~UpdateExperimentPlanTemplateRequestTemplatePipeline() = default;
};
class UpdateExperimentPlanTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> templateId{};
  shared_ptr<vector<UpdateExperimentPlanTemplateRequestTemplatePipeline>> templatePipeline{};

  UpdateExperimentPlanTemplateRequest() {}

  explicit UpdateExperimentPlanTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templatePipeline) {
      vector<boost::any> temp1;
      for(auto item1:*templatePipeline){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplatePipeline"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplatePipeline") != m.end() && !m["TemplatePipeline"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplatePipeline"].type()) {
        vector<UpdateExperimentPlanTemplateRequestTemplatePipeline> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplatePipeline"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExperimentPlanTemplateRequestTemplatePipeline model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templatePipeline = make_shared<vector<UpdateExperimentPlanTemplateRequestTemplatePipeline>>(expect1);
      }
    }
  }


  virtual ~UpdateExperimentPlanTemplateRequest() = default;
};
class UpdateExperimentPlanTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> templateId{};
  shared_ptr<string> templatePipelineShrink{};

  UpdateExperimentPlanTemplateShrinkRequest() {}

  explicit UpdateExperimentPlanTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templatePipelineShrink) {
      res["TemplatePipeline"] = boost::any(*templatePipelineShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplatePipeline") != m.end() && !m["TemplatePipeline"].empty()) {
      templatePipelineShrink = make_shared<string>(boost::any_cast<string>(m["TemplatePipeline"]));
    }
  }


  virtual ~UpdateExperimentPlanTemplateShrinkRequest() = default;
};
class UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes : public Darabonba::Model {
public:
  shared_ptr<string> nodeName{};
  shared_ptr<long> requestCPU{};
  shared_ptr<long> requestGPU{};
  shared_ptr<long> requestMemory{};
  shared_ptr<long> totalCPU{};
  shared_ptr<long> totalGPU{};
  shared_ptr<long> totalMemory{};

  UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes() {}

  explicit UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestGPU) {
      res["RequestGPU"] = boost::any(*requestGPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (totalCPU) {
      res["TotalCPU"] = boost::any(*totalCPU);
    }
    if (totalGPU) {
      res["TotalGPU"] = boost::any(*totalGPU);
    }
    if (totalMemory) {
      res["TotalMemory"] = boost::any(*totalMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<long>(boost::any_cast<long>(m["RequestCPU"]));
    }
    if (m.find("RequestGPU") != m.end() && !m["RequestGPU"].empty()) {
      requestGPU = make_shared<long>(boost::any_cast<long>(m["RequestGPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<long>(boost::any_cast<long>(m["RequestMemory"]));
    }
    if (m.find("TotalCPU") != m.end() && !m["TotalCPU"].empty()) {
      totalCPU = make_shared<long>(boost::any_cast<long>(m["TotalCPU"]));
    }
    if (m.find("TotalGPU") != m.end() && !m["TotalGPU"].empty()) {
      totalGPU = make_shared<long>(boost::any_cast<long>(m["TotalGPU"]));
    }
    if (m.find("TotalMemory") != m.end() && !m["TotalMemory"].empty()) {
      totalMemory = make_shared<long>(boost::any_cast<long>(m["TotalMemory"]));
    }
  }


  virtual ~UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes() = default;
};
class UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams : public Darabonba::Model {
public:
  shared_ptr<long> cpuPerWorker{};
  shared_ptr<string> cudaVersion{};
  shared_ptr<map<string, string>> extendParam{};
  shared_ptr<string> gpuDriverVersion{};
  shared_ptr<long> gpuPerWorker{};
  shared_ptr<long> memoryPerWorker{};
  shared_ptr<string> NCCLVersion{};
  shared_ptr<string> pyTorchVersion{};
  shared_ptr<vector<UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes>> resourceNodes{};
  shared_ptr<long> shareMemory{};
  shared_ptr<long> workerNum{};

  UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams() {}

  explicit UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuPerWorker) {
      res["CpuPerWorker"] = boost::any(*cpuPerWorker);
    }
    if (cudaVersion) {
      res["CudaVersion"] = boost::any(*cudaVersion);
    }
    if (extendParam) {
      res["ExtendParam"] = boost::any(*extendParam);
    }
    if (gpuDriverVersion) {
      res["GpuDriverVersion"] = boost::any(*gpuDriverVersion);
    }
    if (gpuPerWorker) {
      res["GpuPerWorker"] = boost::any(*gpuPerWorker);
    }
    if (memoryPerWorker) {
      res["MemoryPerWorker"] = boost::any(*memoryPerWorker);
    }
    if (NCCLVersion) {
      res["NCCLVersion"] = boost::any(*NCCLVersion);
    }
    if (pyTorchVersion) {
      res["PyTorchVersion"] = boost::any(*pyTorchVersion);
    }
    if (resourceNodes) {
      vector<boost::any> temp1;
      for(auto item1:*resourceNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceNodes"] = boost::any(temp1);
    }
    if (shareMemory) {
      res["ShareMemory"] = boost::any(*shareMemory);
    }
    if (workerNum) {
      res["WorkerNum"] = boost::any(*workerNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuPerWorker") != m.end() && !m["CpuPerWorker"].empty()) {
      cpuPerWorker = make_shared<long>(boost::any_cast<long>(m["CpuPerWorker"]));
    }
    if (m.find("CudaVersion") != m.end() && !m["CudaVersion"].empty()) {
      cudaVersion = make_shared<string>(boost::any_cast<string>(m["CudaVersion"]));
    }
    if (m.find("ExtendParam") != m.end() && !m["ExtendParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("GpuDriverVersion") != m.end() && !m["GpuDriverVersion"].empty()) {
      gpuDriverVersion = make_shared<string>(boost::any_cast<string>(m["GpuDriverVersion"]));
    }
    if (m.find("GpuPerWorker") != m.end() && !m["GpuPerWorker"].empty()) {
      gpuPerWorker = make_shared<long>(boost::any_cast<long>(m["GpuPerWorker"]));
    }
    if (m.find("MemoryPerWorker") != m.end() && !m["MemoryPerWorker"].empty()) {
      memoryPerWorker = make_shared<long>(boost::any_cast<long>(m["MemoryPerWorker"]));
    }
    if (m.find("NCCLVersion") != m.end() && !m["NCCLVersion"].empty()) {
      NCCLVersion = make_shared<string>(boost::any_cast<string>(m["NCCLVersion"]));
    }
    if (m.find("PyTorchVersion") != m.end() && !m["PyTorchVersion"].empty()) {
      pyTorchVersion = make_shared<string>(boost::any_cast<string>(m["PyTorchVersion"]));
    }
    if (m.find("ResourceNodes") != m.end() && !m["ResourceNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceNodes"].type()) {
        vector<UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceNodes = make_shared<vector<UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParamsResourceNodes>>(expect1);
      }
    }
    if (m.find("ShareMemory") != m.end() && !m["ShareMemory"].empty()) {
      shareMemory = make_shared<long>(boost::any_cast<long>(m["ShareMemory"]));
    }
    if (m.find("WorkerNum") != m.end() && !m["WorkerNum"].empty()) {
      workerNum = make_shared<long>(boost::any_cast<long>(m["WorkerNum"]));
    }
  }


  virtual ~UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams() = default;
};
class UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam : public Darabonba::Model {
public:
  shared_ptr<UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams> envParams{};
  shared_ptr<long> pipelineOrder{};
  shared_ptr<string> scene{};
  shared_ptr<map<string, string>> settingParams{};
  shared_ptr<long> workloadId{};
  shared_ptr<string> workloadName{};

  UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam() {}

  explicit UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envParams) {
      res["EnvParams"] = envParams ? boost::any(envParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pipelineOrder) {
      res["PipelineOrder"] = boost::any(*pipelineOrder);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (settingParams) {
      res["SettingParams"] = boost::any(*settingParams);
    }
    if (workloadId) {
      res["WorkloadId"] = boost::any(*workloadId);
    }
    if (workloadName) {
      res["WorkloadName"] = boost::any(*workloadName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvParams") != m.end() && !m["EnvParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnvParams"].type()) {
        UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnvParams"]));
        envParams = make_shared<UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParamEnvParams>(model1);
      }
    }
    if (m.find("PipelineOrder") != m.end() && !m["PipelineOrder"].empty()) {
      pipelineOrder = make_shared<long>(boost::any_cast<long>(m["PipelineOrder"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SettingParams") != m.end() && !m["SettingParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SettingParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      settingParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkloadId") != m.end() && !m["WorkloadId"].empty()) {
      workloadId = make_shared<long>(boost::any_cast<long>(m["WorkloadId"]));
    }
    if (m.find("WorkloadName") != m.end() && !m["WorkloadName"].empty()) {
      workloadName = make_shared<string>(boost::any_cast<string>(m["WorkloadName"]));
    }
  }


  virtual ~UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam() = default;
};
class UpdateExperimentPlanTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> creatorUid{};
  shared_ptr<long> isDelete{};
  shared_ptr<string> privacyLevel{};
  shared_ptr<long> templateCode{};
  shared_ptr<string> templateDescription{};
  shared_ptr<long> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<vector<UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam>> templatePipelineParam{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> versionId{};

  UpdateExperimentPlanTemplateResponseBodyData() {}

  explicit UpdateExperimentPlanTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creatorUid) {
      res["CreatorUid"] = boost::any(*creatorUid);
    }
    if (isDelete) {
      res["IsDelete"] = boost::any(*isDelete);
    }
    if (privacyLevel) {
      res["PrivacyLevel"] = boost::any(*privacyLevel);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templatePipelineParam) {
      vector<boost::any> temp1;
      for(auto item1:*templatePipelineParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplatePipelineParam"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreatorUid") != m.end() && !m["CreatorUid"].empty()) {
      creatorUid = make_shared<long>(boost::any_cast<long>(m["CreatorUid"]));
    }
    if (m.find("IsDelete") != m.end() && !m["IsDelete"].empty()) {
      isDelete = make_shared<long>(boost::any_cast<long>(m["IsDelete"]));
    }
    if (m.find("PrivacyLevel") != m.end() && !m["PrivacyLevel"].empty()) {
      privacyLevel = make_shared<string>(boost::any_cast<string>(m["PrivacyLevel"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<long>(boost::any_cast<long>(m["TemplateCode"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplatePipelineParam") != m.end() && !m["TemplatePipelineParam"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplatePipelineParam"].type()) {
        vector<UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplatePipelineParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templatePipelineParam = make_shared<vector<UpdateExperimentPlanTemplateResponseBodyDataTemplatePipelineParam>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
  }


  virtual ~UpdateExperimentPlanTemplateResponseBodyData() = default;
};
class UpdateExperimentPlanTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<UpdateExperimentPlanTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  UpdateExperimentPlanTemplateResponseBody() {}

  explicit UpdateExperimentPlanTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateExperimentPlanTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateExperimentPlanTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~UpdateExperimentPlanTemplateResponseBody() = default;
};
class UpdateExperimentPlanTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExperimentPlanTemplateResponseBody> body{};

  UpdateExperimentPlanTemplateResponse() {}

  explicit UpdateExperimentPlanTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateExperimentPlanTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExperimentPlanTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExperimentPlanTemplateResponse() = default;
};
class ValidateResourceRequestUserAccessParam : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> accessKey{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> workspaceId{};

  ValidateResourceRequestUserAccessParam() {}

  explicit ValidateResourceRequestUserAccessParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ValidateResourceRequestUserAccessParam() = default;
};
class ValidateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<ValidateResourceRequestUserAccessParam> userAccessParam{};

  ValidateResourceRequest() {}

  explicit ValidateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (userAccessParam) {
      res["UserAccessParam"] = userAccessParam ? boost::any(userAccessParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("UserAccessParam") != m.end() && !m["UserAccessParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserAccessParam"].type()) {
        ValidateResourceRequestUserAccessParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserAccessParam"]));
        userAccessParam = make_shared<ValidateResourceRequestUserAccessParam>(model1);
      }
    }
  }


  virtual ~ValidateResourceRequest() = default;
};
class ValidateResourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> userAccessParamShrink{};

  ValidateResourceShrinkRequest() {}

  explicit ValidateResourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (userAccessParamShrink) {
      res["UserAccessParam"] = boost::any(*userAccessParamShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("UserAccessParam") != m.end() && !m["UserAccessParam"].empty()) {
      userAccessParamShrink = make_shared<string>(boost::any_cast<string>(m["UserAccessParam"]));
    }
  }


  virtual ~ValidateResourceShrinkRequest() = default;
};
class ValidateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ValidateResourceResponseBody() {}

  explicit ValidateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ValidateResourceResponseBody() = default;
};
class ValidateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateResourceResponseBody> body{};

  ValidateResourceResponse() {}

  explicit ValidateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ValidateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateResourceResponse() = default;
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
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateExperimentPlanResponse createExperimentPlanWithOptions(shared_ptr<CreateExperimentPlanRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExperimentPlanResponse createExperimentPlan(shared_ptr<CreateExperimentPlanRequest> request);
  CreateExperimentPlanTemplateResponse createExperimentPlanTemplateWithOptions(shared_ptr<CreateExperimentPlanTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExperimentPlanTemplateResponse createExperimentPlanTemplate(shared_ptr<CreateExperimentPlanTemplateRequest> request);
  CreateResourceResponse createResourceWithOptions(shared_ptr<CreateResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceResponse createResource(shared_ptr<CreateResourceRequest> request);
  DeleteExperimentResponse deleteExperimentWithOptions(shared_ptr<DeleteExperimentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentResponse deleteExperiment(shared_ptr<DeleteExperimentRequest> request);
  DeleteExperimentPlanResponse deleteExperimentPlanWithOptions(shared_ptr<DeleteExperimentPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentPlanResponse deleteExperimentPlan(shared_ptr<DeleteExperimentPlanRequest> request);
  DeleteExperimentPlanTemplateResponse deleteExperimentPlanTemplateWithOptions(shared_ptr<DeleteExperimentPlanTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExperimentPlanTemplateResponse deleteExperimentPlanTemplate(shared_ptr<DeleteExperimentPlanTemplateRequest> request);
  GetExperimentResponse getExperimentWithOptions(shared_ptr<GetExperimentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentResponse getExperiment(shared_ptr<GetExperimentRequest> request);
  GetExperimentPlanResponse getExperimentPlanWithOptions(shared_ptr<GetExperimentPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentPlanResponse getExperimentPlan(shared_ptr<GetExperimentPlanRequest> request);
  GetExperimentPlanTemplateResponse getExperimentPlanTemplateWithOptions(shared_ptr<GetExperimentPlanTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentPlanTemplateResponse getExperimentPlanTemplate(shared_ptr<GetExperimentPlanTemplateRequest> request);
  GetExperimentResultDataResponse getExperimentResultDataWithOptions(shared_ptr<GetExperimentResultDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExperimentResultDataResponse getExperimentResultData(shared_ptr<GetExperimentResultDataRequest> request);
  GetResourceResponse getResourceWithOptions(shared_ptr<GetResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceResponse getResource(shared_ptr<GetResourceRequest> request);
  GetResourcePredictResultResponse getResourcePredictResultWithOptions(shared_ptr<GetResourcePredictResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourcePredictResultResponse getResourcePredictResult(shared_ptr<GetResourcePredictResultRequest> request);
  GetWorkloadResponse getWorkloadWithOptions(shared_ptr<GetWorkloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkloadResponse getWorkload(shared_ptr<GetWorkloadRequest> request);
  ListExperimentPlanTemplatesResponse listExperimentPlanTemplatesWithOptions(shared_ptr<ListExperimentPlanTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentPlanTemplatesResponse listExperimentPlanTemplates(shared_ptr<ListExperimentPlanTemplatesRequest> request);
  ListExperimentPlansResponse listExperimentPlansWithOptions(shared_ptr<ListExperimentPlansRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentPlansResponse listExperimentPlans(shared_ptr<ListExperimentPlansRequest> request);
  ListExperimentsResponse listExperimentsWithOptions(shared_ptr<ListExperimentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExperimentsResponse listExperiments(shared_ptr<ListExperimentsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListWorkloadsResponse listWorkloadsWithOptions(shared_ptr<ListWorkloadsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkloadsResponse listWorkloads(shared_ptr<ListWorkloadsRequest> request);
  StopExperimentResponse stopExperimentWithOptions(shared_ptr<StopExperimentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopExperimentResponse stopExperiment(shared_ptr<StopExperimentRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateExperimentPlanResponse updateExperimentPlanWithOptions(shared_ptr<UpdateExperimentPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentPlanResponse updateExperimentPlan(shared_ptr<UpdateExperimentPlanRequest> request);
  UpdateExperimentPlanTemplateResponse updateExperimentPlanTemplateWithOptions(shared_ptr<UpdateExperimentPlanTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExperimentPlanTemplateResponse updateExperimentPlanTemplate(shared_ptr<UpdateExperimentPlanTemplateRequest> request);
  ValidateResourceResponse validateResourceWithOptions(shared_ptr<ValidateResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateResourceResponse validateResource(shared_ptr<ValidateResourceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eflo-cnp20230828

#endif
