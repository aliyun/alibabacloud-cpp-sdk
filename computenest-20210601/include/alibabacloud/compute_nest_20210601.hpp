// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_COMPUTENEST20210601_H_
#define ALIBABACLOUD_COMPUTENEST20210601_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ComputeNest20210601 {
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
class ContinueDeployServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<vector<string>> option{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  ContinueDeployServiceInstanceRequest() {}

  explicit ContinueDeployServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Option"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Option"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      option = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~ContinueDeployServiceInstanceRequest() = default;
};
class ContinueDeployServiceInstanceResponseBodyDryRunResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> parametersAllowedToBeModified{};
  shared_ptr<vector<string>> parametersConditionallyAllowedToBeModified{};
  shared_ptr<vector<string>> parametersNotAllowedToBeModified{};

  ContinueDeployServiceInstanceResponseBodyDryRunResult() {}

  explicit ContinueDeployServiceInstanceResponseBodyDryRunResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parametersAllowedToBeModified) {
      res["ParametersAllowedToBeModified"] = boost::any(*parametersAllowedToBeModified);
    }
    if (parametersConditionallyAllowedToBeModified) {
      res["ParametersConditionallyAllowedToBeModified"] = boost::any(*parametersConditionallyAllowedToBeModified);
    }
    if (parametersNotAllowedToBeModified) {
      res["ParametersNotAllowedToBeModified"] = boost::any(*parametersNotAllowedToBeModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParametersAllowedToBeModified") != m.end() && !m["ParametersAllowedToBeModified"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParametersAllowedToBeModified"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParametersAllowedToBeModified"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parametersAllowedToBeModified = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ParametersConditionallyAllowedToBeModified") != m.end() && !m["ParametersConditionallyAllowedToBeModified"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParametersConditionallyAllowedToBeModified"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParametersConditionallyAllowedToBeModified"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parametersConditionallyAllowedToBeModified = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ParametersNotAllowedToBeModified") != m.end() && !m["ParametersNotAllowedToBeModified"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ParametersNotAllowedToBeModified"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ParametersNotAllowedToBeModified"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parametersNotAllowedToBeModified = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ContinueDeployServiceInstanceResponseBodyDryRunResult() = default;
};
class ContinueDeployServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<ContinueDeployServiceInstanceResponseBodyDryRunResult> dryRunResult{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceInstanceId{};

  ContinueDeployServiceInstanceResponseBody() {}

  explicit ContinueDeployServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRunResult) {
      res["DryRunResult"] = dryRunResult ? boost::any(dryRunResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRunResult") != m.end() && !m["DryRunResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["DryRunResult"].type()) {
        ContinueDeployServiceInstanceResponseBodyDryRunResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DryRunResult"]));
        dryRunResult = make_shared<ContinueDeployServiceInstanceResponseBodyDryRunResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~ContinueDeployServiceInstanceResponseBody() = default;
};
class ContinueDeployServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContinueDeployServiceInstanceResponseBody> body{};

  ContinueDeployServiceInstanceResponse() {}

  explicit ContinueDeployServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContinueDeployServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContinueDeployServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ContinueDeployServiceInstanceResponse() = default;
};
class CreateServiceInstanceRequestCommodity : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> payPeriod{};
  shared_ptr<string> payPeriodUnit{};

  CreateServiceInstanceRequestCommodity() {}

  explicit CreateServiceInstanceRequestCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (payPeriod) {
      res["PayPeriod"] = boost::any(*payPeriod);
    }
    if (payPeriodUnit) {
      res["PayPeriodUnit"] = boost::any(*payPeriodUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("PayPeriod") != m.end() && !m["PayPeriod"].empty()) {
      payPeriod = make_shared<long>(boost::any_cast<long>(m["PayPeriod"]));
    }
    if (m.find("PayPeriodUnit") != m.end() && !m["PayPeriodUnit"].empty()) {
      payPeriodUnit = make_shared<string>(boost::any_cast<string>(m["PayPeriodUnit"]));
    }
  }


  virtual ~CreateServiceInstanceRequestCommodity() = default;
};
class CreateServiceInstanceRequestOperationMetadata : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> resources{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> startTime{};

  CreateServiceInstanceRequestOperationMetadata() {}

  explicit CreateServiceInstanceRequestOperationMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~CreateServiceInstanceRequestOperationMetadata() = default;
};
class CreateServiceInstanceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateServiceInstanceRequestTag() {}

  explicit CreateServiceInstanceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceInstanceRequestTag() = default;
};
class CreateServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<CreateServiceInstanceRequestCommodity> commodity{};
  shared_ptr<string> contactGroup{};
  shared_ptr<bool> dryRun{};
  shared_ptr<bool> enableInstanceOps{};
  shared_ptr<bool> enableUserPrometheus{};
  shared_ptr<string> name{};
  shared_ptr<CreateServiceInstanceRequestOperationMetadata> operationMetadata{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> resourceAutoPay{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> specificationCode{};
  shared_ptr<string> specificationName{};
  shared_ptr<vector<CreateServiceInstanceRequestTag>> tag{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  CreateServiceInstanceRequest() {}

  explicit CreateServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contactGroup) {
      res["ContactGroup"] = boost::any(*contactGroup);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    if (enableUserPrometheus) {
      res["EnableUserPrometheus"] = boost::any(*enableUserPrometheus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = operationMetadata ? boost::any(operationMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceAutoPay) {
      res["ResourceAutoPay"] = boost::any(*resourceAutoPay);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (specificationCode) {
      res["SpecificationCode"] = boost::any(*specificationCode);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        CreateServiceInstanceRequestCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<CreateServiceInstanceRequestCommodity>(model1);
      }
    }
    if (m.find("ContactGroup") != m.end() && !m["ContactGroup"].empty()) {
      contactGroup = make_shared<string>(boost::any_cast<string>(m["ContactGroup"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
    if (m.find("EnableUserPrometheus") != m.end() && !m["EnableUserPrometheus"].empty()) {
      enableUserPrometheus = make_shared<bool>(boost::any_cast<bool>(m["EnableUserPrometheus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperationMetadata"].type()) {
        CreateServiceInstanceRequestOperationMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperationMetadata"]));
        operationMetadata = make_shared<CreateServiceInstanceRequestOperationMetadata>(model1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceAutoPay") != m.end() && !m["ResourceAutoPay"].empty()) {
      resourceAutoPay = make_shared<bool>(boost::any_cast<bool>(m["ResourceAutoPay"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("SpecificationCode") != m.end() && !m["SpecificationCode"].empty()) {
      specificationCode = make_shared<string>(boost::any_cast<string>(m["SpecificationCode"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateServiceInstanceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceInstanceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateServiceInstanceRequestTag>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
  }


  virtual ~CreateServiceInstanceRequest() = default;
};
class CreateServiceInstanceShrinkRequestCommodity : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> payPeriod{};
  shared_ptr<string> payPeriodUnit{};

  CreateServiceInstanceShrinkRequestCommodity() {}

  explicit CreateServiceInstanceShrinkRequestCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (payPeriod) {
      res["PayPeriod"] = boost::any(*payPeriod);
    }
    if (payPeriodUnit) {
      res["PayPeriodUnit"] = boost::any(*payPeriodUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("PayPeriod") != m.end() && !m["PayPeriod"].empty()) {
      payPeriod = make_shared<long>(boost::any_cast<long>(m["PayPeriod"]));
    }
    if (m.find("PayPeriodUnit") != m.end() && !m["PayPeriodUnit"].empty()) {
      payPeriodUnit = make_shared<string>(boost::any_cast<string>(m["PayPeriodUnit"]));
    }
  }


  virtual ~CreateServiceInstanceShrinkRequestCommodity() = default;
};
class CreateServiceInstanceShrinkRequestOperationMetadata : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> resources{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> startTime{};

  CreateServiceInstanceShrinkRequestOperationMetadata() {}

  explicit CreateServiceInstanceShrinkRequestOperationMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
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
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~CreateServiceInstanceShrinkRequestOperationMetadata() = default;
};
class CreateServiceInstanceShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateServiceInstanceShrinkRequestTag() {}

  explicit CreateServiceInstanceShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceInstanceShrinkRequestTag() = default;
};
class CreateServiceInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<CreateServiceInstanceShrinkRequestCommodity> commodity{};
  shared_ptr<string> contactGroup{};
  shared_ptr<bool> dryRun{};
  shared_ptr<bool> enableInstanceOps{};
  shared_ptr<bool> enableUserPrometheus{};
  shared_ptr<string> name{};
  shared_ptr<CreateServiceInstanceShrinkRequestOperationMetadata> operationMetadata{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> resourceAutoPay{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> specificationCode{};
  shared_ptr<string> specificationName{};
  shared_ptr<vector<CreateServiceInstanceShrinkRequestTag>> tag{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  CreateServiceInstanceShrinkRequest() {}

  explicit CreateServiceInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contactGroup) {
      res["ContactGroup"] = boost::any(*contactGroup);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    if (enableUserPrometheus) {
      res["EnableUserPrometheus"] = boost::any(*enableUserPrometheus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationMetadata) {
      res["OperationMetadata"] = operationMetadata ? boost::any(operationMetadata->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceAutoPay) {
      res["ResourceAutoPay"] = boost::any(*resourceAutoPay);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (specificationCode) {
      res["SpecificationCode"] = boost::any(*specificationCode);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        CreateServiceInstanceShrinkRequestCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<CreateServiceInstanceShrinkRequestCommodity>(model1);
      }
    }
    if (m.find("ContactGroup") != m.end() && !m["ContactGroup"].empty()) {
      contactGroup = make_shared<string>(boost::any_cast<string>(m["ContactGroup"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
    if (m.find("EnableUserPrometheus") != m.end() && !m["EnableUserPrometheus"].empty()) {
      enableUserPrometheus = make_shared<bool>(boost::any_cast<bool>(m["EnableUserPrometheus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationMetadata") != m.end() && !m["OperationMetadata"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperationMetadata"].type()) {
        CreateServiceInstanceShrinkRequestOperationMetadata model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperationMetadata"]));
        operationMetadata = make_shared<CreateServiceInstanceShrinkRequestOperationMetadata>(model1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceAutoPay") != m.end() && !m["ResourceAutoPay"].empty()) {
      resourceAutoPay = make_shared<bool>(boost::any_cast<bool>(m["ResourceAutoPay"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("SpecificationCode") != m.end() && !m["SpecificationCode"].empty()) {
      specificationCode = make_shared<string>(boost::any_cast<string>(m["SpecificationCode"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateServiceInstanceShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceInstanceShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateServiceInstanceShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
  }


  virtual ~CreateServiceInstanceShrinkRequest() = default;
};
class CreateServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> marketInstanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> status{};

  CreateServiceInstanceResponseBody() {}

  explicit CreateServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marketInstanceId) {
      res["MarketInstanceId"] = boost::any(*marketInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MarketInstanceId") != m.end() && !m["MarketInstanceId"].empty()) {
      marketInstanceId = make_shared<string>(boost::any_cast<string>(m["MarketInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateServiceInstanceResponseBody() = default;
};
class CreateServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceInstanceResponseBody> body{};

  CreateServiceInstanceResponse() {}

  explicit CreateServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceInstanceResponse() = default;
};
class DeleteServiceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> serviceInstanceId{};

  DeleteServiceInstancesRequest() {}

  explicit DeleteServiceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteServiceInstancesRequest() = default;
};
class DeleteServiceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceInstancesResponseBody() {}

  explicit DeleteServiceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceInstancesResponseBody() = default;
};
class DeleteServiceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceInstancesResponseBody> body{};

  DeleteServiceInstancesResponse() {}

  explicit DeleteServiceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServiceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceInstancesResponse() = default;
};
class GetServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> marketInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  GetServiceInstanceRequest() {}

  explicit GetServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marketInstanceId) {
      res["MarketInstanceId"] = boost::any(*marketInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MarketInstanceId") != m.end() && !m["MarketInstanceId"].empty()) {
      marketInstanceId = make_shared<string>(boost::any_cast<string>(m["MarketInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~GetServiceInstanceRequest() = default;
};
class GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs : public Darabonba::Model {
public:
  shared_ptr<long> connectBandwidth{};
  shared_ptr<string> domainName{};
  shared_ptr<vector<string>> endpointIps{};
  shared_ptr<string> ingressEndpointStatus{};
  shared_ptr<string> networkServiceStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> securityGroups{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};

  GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs() {}

  explicit GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectBandwidth) {
      res["ConnectBandwidth"] = boost::any(*connectBandwidth);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (endpointIps) {
      res["EndpointIps"] = boost::any(*endpointIps);
    }
    if (ingressEndpointStatus) {
      res["IngressEndpointStatus"] = boost::any(*ingressEndpointStatus);
    }
    if (networkServiceStatus) {
      res["NetworkServiceStatus"] = boost::any(*networkServiceStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroups) {
      res["SecurityGroups"] = boost::any(*securityGroups);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectBandwidth") != m.end() && !m["ConnectBandwidth"].empty()) {
      connectBandwidth = make_shared<long>(boost::any_cast<long>(m["ConnectBandwidth"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EndpointIps") != m.end() && !m["EndpointIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndpointIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndpointIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endpointIps = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IngressEndpointStatus") != m.end() && !m["IngressEndpointStatus"].empty()) {
      ingressEndpointStatus = make_shared<string>(boost::any_cast<string>(m["IngressEndpointStatus"]));
    }
    if (m.find("NetworkServiceStatus") != m.end() && !m["NetworkServiceStatus"].empty()) {
      networkServiceStatus = make_shared<string>(boost::any_cast<string>(m["NetworkServiceStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroups") != m.end() && !m["SecurityGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs() = default;
};
class GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs>> connectionConfigs{};
  shared_ptr<string> endpointId{};
  shared_ptr<string> privateZoneId{};
  shared_ptr<string> privateZoneName{};
  shared_ptr<string> regionId{};

  GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections() {}

  explicit GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*connectionConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectionConfigs"] = boost::any(temp1);
    }
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (privateZoneId) {
      res["PrivateZoneId"] = boost::any(*privateZoneId);
    }
    if (privateZoneName) {
      res["PrivateZoneName"] = boost::any(*privateZoneName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionConfigs") != m.end() && !m["ConnectionConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectionConfigs"].type()) {
        vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectionConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectionConfigs = make_shared<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs>>(expect1);
      }
    }
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("PrivateZoneId") != m.end() && !m["PrivateZoneId"].empty()) {
      privateZoneId = make_shared<string>(boost::any_cast<string>(m["PrivateZoneId"]));
    }
    if (m.find("PrivateZoneName") != m.end() && !m["PrivateZoneName"].empty()) {
      privateZoneName = make_shared<string>(boost::any_cast<string>(m["PrivateZoneName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections() = default;
};
class GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};

  GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections() {}

  explicit GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections() = default;
};
class GetServiceInstanceResponseBodyNetworkConfig : public Darabonba::Model {
public:
  shared_ptr<string> endpointId{};
  shared_ptr<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections>> privateVpcConnections{};
  shared_ptr<string> privateZoneId{};
  shared_ptr<vector<GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections>> reversePrivateVpcConnections{};

  GetServiceInstanceResponseBodyNetworkConfig() {}

  explicit GetServiceInstanceResponseBodyNetworkConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointId) {
      res["EndpointId"] = boost::any(*endpointId);
    }
    if (privateVpcConnections) {
      vector<boost::any> temp1;
      for(auto item1:*privateVpcConnections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PrivateVpcConnections"] = boost::any(temp1);
    }
    if (privateZoneId) {
      res["PrivateZoneId"] = boost::any(*privateZoneId);
    }
    if (reversePrivateVpcConnections) {
      vector<boost::any> temp1;
      for(auto item1:*reversePrivateVpcConnections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReversePrivateVpcConnections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointId") != m.end() && !m["EndpointId"].empty()) {
      endpointId = make_shared<string>(boost::any_cast<string>(m["EndpointId"]));
    }
    if (m.find("PrivateVpcConnections") != m.end() && !m["PrivateVpcConnections"].empty()) {
      if (typeid(vector<boost::any>) == m["PrivateVpcConnections"].type()) {
        vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PrivateVpcConnections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        privateVpcConnections = make_shared<vector<GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections>>(expect1);
      }
    }
    if (m.find("PrivateZoneId") != m.end() && !m["PrivateZoneId"].empty()) {
      privateZoneId = make_shared<string>(boost::any_cast<string>(m["PrivateZoneId"]));
    }
    if (m.find("ReversePrivateVpcConnections") != m.end() && !m["ReversePrivateVpcConnections"].empty()) {
      if (typeid(vector<boost::any>) == m["ReversePrivateVpcConnections"].type()) {
        vector<GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReversePrivateVpcConnections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reversePrivateVpcConnections = make_shared<vector<GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections>>(expect1);
      }
    }
  }


  virtual ~GetServiceInstanceResponseBodyNetworkConfig() = default;
};
class GetServiceInstanceResponseBodyServiceServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  GetServiceInstanceResponseBodyServiceServiceInfos() {}

  explicit GetServiceInstanceResponseBodyServiceServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyServiceServiceInfos() = default;
};
class GetServiceInstanceResponseBodyService : public Darabonba::Model {
public:
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> serviceDocUrl{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<GetServiceInstanceResponseBodyServiceServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceProductUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<vector<string>> upgradableServiceVersions{};
  shared_ptr<string> upgradeMetadata{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  GetServiceInstanceResponseBodyService() {}

  explicit GetServiceInstanceResponseBodyService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (serviceDocUrl) {
      res["ServiceDocUrl"] = boost::any(*serviceDocUrl);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceProductUrl) {
      res["ServiceProductUrl"] = boost::any(*serviceProductUrl);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (upgradableServiceVersions) {
      res["UpgradableServiceVersions"] = boost::any(*upgradableServiceVersions);
    }
    if (upgradeMetadata) {
      res["UpgradeMetadata"] = boost::any(*upgradeMetadata);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("ServiceDocUrl") != m.end() && !m["ServiceDocUrl"].empty()) {
      serviceDocUrl = make_shared<string>(boost::any_cast<string>(m["ServiceDocUrl"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<GetServiceInstanceResponseBodyServiceServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyServiceServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<GetServiceInstanceResponseBodyServiceServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceProductUrl") != m.end() && !m["ServiceProductUrl"].empty()) {
      serviceProductUrl = make_shared<string>(boost::any_cast<string>(m["ServiceProductUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("UpgradableServiceVersions") != m.end() && !m["UpgradableServiceVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UpgradableServiceVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UpgradableServiceVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      upgradableServiceVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UpgradeMetadata") != m.end() && !m["UpgradeMetadata"].empty()) {
      upgradeMetadata = make_shared<string>(boost::any_cast<string>(m["UpgradeMetadata"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetServiceInstanceResponseBodyService() = default;
};
class GetServiceInstanceResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetServiceInstanceResponseBodyTags() {}

  explicit GetServiceInstanceResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetServiceInstanceResponseBodyTags() = default;
};
class GetServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bizStatus{};
  shared_ptr<string> components{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> enableInstanceOps{};
  shared_ptr<bool> enableUserPrometheus{};
  shared_ptr<string> endTime{};
  shared_ptr<string> grafanaDashBoardUrl{};
  shared_ptr<bool> isOperated{};
  shared_ptr<string> licenseEndTime{};
  shared_ptr<string> marketInstanceId{};
  shared_ptr<string> name{};
  shared_ptr<GetServiceInstanceResponseBodyNetworkConfig> networkConfig{};
  shared_ptr<string> operatedServiceInstanceId{};
  shared_ptr<string> operationEndTime{};
  shared_ptr<string> operationStartTime{};
  shared_ptr<string> outputs{};
  shared_ptr<string> parameters{};
  shared_ptr<string> payType{};
  shared_ptr<string> predefinedParameterName{};
  shared_ptr<long> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resources{};
  shared_ptr<GetServiceInstanceResponseBodyService> service{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<long> supplierUid{};
  shared_ptr<vector<GetServiceInstanceResponseBodyTags>> tags{};
  shared_ptr<string> templateName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> userId{};

  GetServiceInstanceResponseBody() {}

  explicit GetServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizStatus) {
      res["BizStatus"] = boost::any(*bizStatus);
    }
    if (components) {
      res["Components"] = boost::any(*components);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    if (enableUserPrometheus) {
      res["EnableUserPrometheus"] = boost::any(*enableUserPrometheus);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (grafanaDashBoardUrl) {
      res["GrafanaDashBoardUrl"] = boost::any(*grafanaDashBoardUrl);
    }
    if (isOperated) {
      res["IsOperated"] = boost::any(*isOperated);
    }
    if (licenseEndTime) {
      res["LicenseEndTime"] = boost::any(*licenseEndTime);
    }
    if (marketInstanceId) {
      res["MarketInstanceId"] = boost::any(*marketInstanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (networkConfig) {
      res["NetworkConfig"] = networkConfig ? boost::any(networkConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operatedServiceInstanceId) {
      res["OperatedServiceInstanceId"] = boost::any(*operatedServiceInstanceId);
    }
    if (operationEndTime) {
      res["OperationEndTime"] = boost::any(*operationEndTime);
    }
    if (operationStartTime) {
      res["OperationStartTime"] = boost::any(*operationStartTime);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (predefinedParameterName) {
      res["PredefinedParameterName"] = boost::any(*predefinedParameterName);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (service) {
      res["Service"] = service ? boost::any(service->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (supplierUid) {
      res["SupplierUid"] = boost::any(*supplierUid);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizStatus") != m.end() && !m["BizStatus"].empty()) {
      bizStatus = make_shared<string>(boost::any_cast<string>(m["BizStatus"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      components = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
    if (m.find("EnableUserPrometheus") != m.end() && !m["EnableUserPrometheus"].empty()) {
      enableUserPrometheus = make_shared<bool>(boost::any_cast<bool>(m["EnableUserPrometheus"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GrafanaDashBoardUrl") != m.end() && !m["GrafanaDashBoardUrl"].empty()) {
      grafanaDashBoardUrl = make_shared<string>(boost::any_cast<string>(m["GrafanaDashBoardUrl"]));
    }
    if (m.find("IsOperated") != m.end() && !m["IsOperated"].empty()) {
      isOperated = make_shared<bool>(boost::any_cast<bool>(m["IsOperated"]));
    }
    if (m.find("LicenseEndTime") != m.end() && !m["LicenseEndTime"].empty()) {
      licenseEndTime = make_shared<string>(boost::any_cast<string>(m["LicenseEndTime"]));
    }
    if (m.find("MarketInstanceId") != m.end() && !m["MarketInstanceId"].empty()) {
      marketInstanceId = make_shared<string>(boost::any_cast<string>(m["MarketInstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NetworkConfig") != m.end() && !m["NetworkConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkConfig"].type()) {
        GetServiceInstanceResponseBodyNetworkConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkConfig"]));
        networkConfig = make_shared<GetServiceInstanceResponseBodyNetworkConfig>(model1);
      }
    }
    if (m.find("OperatedServiceInstanceId") != m.end() && !m["OperatedServiceInstanceId"].empty()) {
      operatedServiceInstanceId = make_shared<string>(boost::any_cast<string>(m["OperatedServiceInstanceId"]));
    }
    if (m.find("OperationEndTime") != m.end() && !m["OperationEndTime"].empty()) {
      operationEndTime = make_shared<string>(boost::any_cast<string>(m["OperationEndTime"]));
    }
    if (m.find("OperationStartTime") != m.end() && !m["OperationStartTime"].empty()) {
      operationStartTime = make_shared<string>(boost::any_cast<string>(m["OperationStartTime"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PredefinedParameterName") != m.end() && !m["PredefinedParameterName"].empty()) {
      predefinedParameterName = make_shared<string>(boost::any_cast<string>(m["PredefinedParameterName"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      if (typeid(map<string, boost::any>) == m["Service"].type()) {
        GetServiceInstanceResponseBodyService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Service"]));
        service = make_shared<GetServiceInstanceResponseBodyService>(model1);
      }
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("SupplierUid") != m.end() && !m["SupplierUid"].empty()) {
      supplierUid = make_shared<long>(boost::any_cast<long>(m["SupplierUid"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetServiceInstanceResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceInstanceResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetServiceInstanceResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~GetServiceInstanceResponseBody() = default;
};
class GetServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceInstanceResponseBody> body{};

  GetServiceInstanceResponse() {}

  explicit GetServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceInstanceResponse() = default;
};
class GetServiceTemplateParameterConstraintsRequestParameters : public Darabonba::Model {
public:
  shared_ptr<string> parameterKey{};
  shared_ptr<string> parameterValue{};

  GetServiceTemplateParameterConstraintsRequestParameters() {}

  explicit GetServiceTemplateParameterConstraintsRequestParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsRequestParameters() = default;
};
class GetServiceTemplateParameterConstraintsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> deployRegionId{};
  shared_ptr<bool> enablePrivateVpcConnection{};
  shared_ptr<vector<GetServiceTemplateParameterConstraintsRequestParameters>> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> specificationName{};
  shared_ptr<string> templateName{};
  shared_ptr<string> trialType{};

  GetServiceTemplateParameterConstraintsRequest() {}

  explicit GetServiceTemplateParameterConstraintsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deployRegionId) {
      res["DeployRegionId"] = boost::any(*deployRegionId);
    }
    if (enablePrivateVpcConnection) {
      res["EnablePrivateVpcConnection"] = boost::any(*enablePrivateVpcConnection);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (specificationName) {
      res["SpecificationName"] = boost::any(*specificationName);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (trialType) {
      res["TrialType"] = boost::any(*trialType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeployRegionId") != m.end() && !m["DeployRegionId"].empty()) {
      deployRegionId = make_shared<string>(boost::any_cast<string>(m["DeployRegionId"]));
    }
    if (m.find("EnablePrivateVpcConnection") != m.end() && !m["EnablePrivateVpcConnection"].empty()) {
      enablePrivateVpcConnection = make_shared<bool>(boost::any_cast<bool>(m["EnablePrivateVpcConnection"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<GetServiceTemplateParameterConstraintsRequestParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceTemplateParameterConstraintsRequestParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetServiceTemplateParameterConstraintsRequestParameters>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("SpecificationName") != m.end() && !m["SpecificationName"].empty()) {
      specificationName = make_shared<string>(boost::any_cast<string>(m["SpecificationName"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TrialType") != m.end() && !m["TrialType"].empty()) {
      trialType = make_shared<string>(boost::any_cast<string>(m["TrialType"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsRequest() = default;
};
class GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedValues{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints() {}

  explicit GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedValues) {
      res["AllowedValues"] = boost::any(*allowedValues);
    }
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
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
    if (m.find("AllowedValues") != m.end() && !m["AllowedValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints() = default;
};
class GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors() {}

  explicit GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors() = default;
};
class GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedValues{};
  shared_ptr<vector<string>> associationParameterNames{};
  shared_ptr<string> behavior{};
  shared_ptr<string> behaviorReason{};
  shared_ptr<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>> originalConstraints{};
  shared_ptr<string> parameterKey{};
  shared_ptr<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors>> queryErrors{};
  shared_ptr<string> type{};

  GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints() {}

  explicit GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedValues) {
      res["AllowedValues"] = boost::any(*allowedValues);
    }
    if (associationParameterNames) {
      res["AssociationParameterNames"] = boost::any(*associationParameterNames);
    }
    if (behavior) {
      res["Behavior"] = boost::any(*behavior);
    }
    if (behaviorReason) {
      res["BehaviorReason"] = boost::any(*behaviorReason);
    }
    if (originalConstraints) {
      vector<boost::any> temp1;
      for(auto item1:*originalConstraints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OriginalConstraints"] = boost::any(temp1);
    }
    if (parameterKey) {
      res["ParameterKey"] = boost::any(*parameterKey);
    }
    if (queryErrors) {
      vector<boost::any> temp1;
      for(auto item1:*queryErrors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueryErrors"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedValues") != m.end() && !m["AllowedValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AssociationParameterNames") != m.end() && !m["AssociationParameterNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AssociationParameterNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AssociationParameterNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      associationParameterNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Behavior") != m.end() && !m["Behavior"].empty()) {
      behavior = make_shared<string>(boost::any_cast<string>(m["Behavior"]));
    }
    if (m.find("BehaviorReason") != m.end() && !m["BehaviorReason"].empty()) {
      behaviorReason = make_shared<string>(boost::any_cast<string>(m["BehaviorReason"]));
    }
    if (m.find("OriginalConstraints") != m.end() && !m["OriginalConstraints"].empty()) {
      if (typeid(vector<boost::any>) == m["OriginalConstraints"].type()) {
        vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OriginalConstraints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        originalConstraints = make_shared<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsOriginalConstraints>>(expect1);
      }
    }
    if (m.find("ParameterKey") != m.end() && !m["ParameterKey"].empty()) {
      parameterKey = make_shared<string>(boost::any_cast<string>(m["ParameterKey"]));
    }
    if (m.find("QueryErrors") != m.end() && !m["QueryErrors"].empty()) {
      if (typeid(vector<boost::any>) == m["QueryErrors"].type()) {
        vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueryErrors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryErrors = make_shared<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraintsQueryErrors>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints() = default;
};
class GetServiceTemplateParameterConstraintsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> familyConstraints{};
  shared_ptr<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints>> parameterConstraints{};
  shared_ptr<string> requestId{};

  GetServiceTemplateParameterConstraintsResponseBody() {}

  explicit GetServiceTemplateParameterConstraintsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (familyConstraints) {
      res["FamilyConstraints"] = boost::any(*familyConstraints);
    }
    if (parameterConstraints) {
      vector<boost::any> temp1;
      for(auto item1:*parameterConstraints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParameterConstraints"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FamilyConstraints") != m.end() && !m["FamilyConstraints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FamilyConstraints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FamilyConstraints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      familyConstraints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ParameterConstraints") != m.end() && !m["ParameterConstraints"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterConstraints"].type()) {
        vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterConstraints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameterConstraints = make_shared<vector<GetServiceTemplateParameterConstraintsResponseBodyParameterConstraints>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsResponseBody() = default;
};
class GetServiceTemplateParameterConstraintsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceTemplateParameterConstraintsResponseBody> body{};

  GetServiceTemplateParameterConstraintsResponse() {}

  explicit GetServiceTemplateParameterConstraintsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceTemplateParameterConstraintsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceTemplateParameterConstraintsResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceTemplateParameterConstraintsResponse() = default;
};
class ListServiceInstanceLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logSource{};
  shared_ptr<string> logstore{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  ListServiceInstanceLogsRequest() {}

  explicit ListServiceInstanceLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logSource) {
      res["LogSource"] = boost::any(*logSource);
    }
    if (logstore) {
      res["Logstore"] = boost::any(*logstore);
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
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogSource") != m.end() && !m["LogSource"].empty()) {
      logSource = make_shared<string>(boost::any_cast<string>(m["LogSource"]));
    }
    if (m.find("Logstore") != m.end() && !m["Logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["Logstore"]));
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
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~ListServiceInstanceLogsRequest() = default;
};
class ListServiceInstanceLogsResponseBodyServiceInstancesLogs : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> logType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> timestamp{};

  ListServiceInstanceLogsResponseBodyServiceInstancesLogs() {}

  explicit ListServiceInstanceLogsResponseBodyServiceInstancesLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~ListServiceInstanceLogsResponseBodyServiceInstancesLogs() = default;
};
class ListServiceInstanceLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs>> serviceInstancesLogs{};

  ListServiceInstanceLogsResponseBody() {}

  explicit ListServiceInstanceLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstancesLogs) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInstancesLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInstancesLogs"] = boost::any(temp1);
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
    if (m.find("ServiceInstancesLogs") != m.end() && !m["ServiceInstancesLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInstancesLogs"].type()) {
        vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInstancesLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstanceLogsResponseBodyServiceInstancesLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInstancesLogs = make_shared<vector<ListServiceInstanceLogsResponseBodyServiceInstancesLogs>>(expect1);
      }
    }
  }


  virtual ~ListServiceInstanceLogsResponseBody() = default;
};
class ListServiceInstanceLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceInstanceLogsResponseBody> body{};

  ListServiceInstanceLogsResponse() {}

  explicit ListServiceInstanceLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceInstanceLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceInstanceLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceInstanceLogsResponse() = default;
};
class ListServiceInstanceResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServiceInstanceResourcesRequestTag() {}

  explicit ListServiceInstanceResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceInstanceResourcesRequestTag() = default;
};
class ListServiceInstanceResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> expireTimeEnd{};
  shared_ptr<string> expireTimeStart{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> payType{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceARN{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceInstanceResourceType{};
  shared_ptr<vector<ListServiceInstanceResourcesRequestTag>> tag{};

  ListServiceInstanceResourcesRequest() {}

  explicit ListServiceInstanceResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTimeEnd) {
      res["ExpireTimeEnd"] = boost::any(*expireTimeEnd);
    }
    if (expireTimeStart) {
      res["ExpireTimeStart"] = boost::any(*expireTimeStart);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceARN) {
      res["ResourceARN"] = boost::any(*resourceARN);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceInstanceResourceType) {
      res["ServiceInstanceResourceType"] = boost::any(*serviceInstanceResourceType);
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
    if (m.find("ExpireTimeEnd") != m.end() && !m["ExpireTimeEnd"].empty()) {
      expireTimeEnd = make_shared<string>(boost::any_cast<string>(m["ExpireTimeEnd"]));
    }
    if (m.find("ExpireTimeStart") != m.end() && !m["ExpireTimeStart"].empty()) {
      expireTimeStart = make_shared<string>(boost::any_cast<string>(m["ExpireTimeStart"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceARN") != m.end() && !m["ResourceARN"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceARN"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceARN"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceARN = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceInstanceResourceType") != m.end() && !m["ServiceInstanceResourceType"].empty()) {
      serviceInstanceResourceType = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServiceInstanceResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstanceResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServiceInstanceResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListServiceInstanceResourcesRequest() = default;
};
class ListServiceInstanceResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> renewStatus{};
  shared_ptr<long> renewalPeriod{};
  shared_ptr<string> renewalPeriodUnit{};
  shared_ptr<string> resourceARN{};
  shared_ptr<string> status{};

  ListServiceInstanceResourcesResponseBodyResources() {}

  explicit ListServiceInstanceResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (renewStatus) {
      res["RenewStatus"] = boost::any(*renewStatus);
    }
    if (renewalPeriod) {
      res["RenewalPeriod"] = boost::any(*renewalPeriod);
    }
    if (renewalPeriodUnit) {
      res["RenewalPeriodUnit"] = boost::any(*renewalPeriodUnit);
    }
    if (resourceARN) {
      res["ResourceARN"] = boost::any(*resourceARN);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RenewStatus") != m.end() && !m["RenewStatus"].empty()) {
      renewStatus = make_shared<string>(boost::any_cast<string>(m["RenewStatus"]));
    }
    if (m.find("RenewalPeriod") != m.end() && !m["RenewalPeriod"].empty()) {
      renewalPeriod = make_shared<long>(boost::any_cast<long>(m["RenewalPeriod"]));
    }
    if (m.find("RenewalPeriodUnit") != m.end() && !m["RenewalPeriodUnit"].empty()) {
      renewalPeriodUnit = make_shared<string>(boost::any_cast<string>(m["RenewalPeriodUnit"]));
    }
    if (m.find("ResourceARN") != m.end() && !m["ResourceARN"].empty()) {
      resourceARN = make_shared<string>(boost::any_cast<string>(m["ResourceARN"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListServiceInstanceResourcesResponseBodyResources() = default;
};
class ListServiceInstanceResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceInstanceResourcesResponseBodyResources>> resources{};

  ListServiceInstanceResourcesResponseBody() {}

  explicit ListServiceInstanceResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
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
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListServiceInstanceResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstanceResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListServiceInstanceResourcesResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~ListServiceInstanceResourcesResponseBody() = default;
};
class ListServiceInstanceResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceInstanceResourcesResponseBody> body{};

  ListServiceInstanceResourcesResponse() {}

  explicit ListServiceInstanceResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceInstanceResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceInstanceResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceInstanceResourcesResponse() = default;
};
class ListServiceInstancesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> value{};

  ListServiceInstancesRequestFilter() {}

  explicit ListServiceInstancesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListServiceInstancesRequestFilter() = default;
};
class ListServiceInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServiceInstancesRequestTag() {}

  explicit ListServiceInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceInstancesRequestTag() = default;
};
class ListServiceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListServiceInstancesRequestFilter>> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListServiceInstancesRequestTag>> tag{};

  ListServiceInstancesRequest() {}

  explicit ListServiceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceInstancesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceInstancesRequestFilter>>(expect1);
      }
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServiceInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServiceInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListServiceInstancesRequest() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesServiceCommodity : public Darabonba::Model {
public:
  shared_ptr<string> saasBoostMetadata{};
  shared_ptr<string> type{};

  ListServiceInstancesResponseBodyServiceInstancesServiceCommodity() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesServiceCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (saasBoostMetadata) {
      res["SaasBoostMetadata"] = boost::any(*saasBoostMetadata);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SaasBoostMetadata") != m.end() && !m["SaasBoostMetadata"].empty()) {
      saasBoostMetadata = make_shared<string>(boost::any_cast<string>(m["SaasBoostMetadata"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstancesServiceCommodity() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> locale{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesService : public Darabonba::Model {
public:
  shared_ptr<ListServiceInstancesResponseBodyServiceInstancesServiceCommodity> commodity{};
  shared_ptr<string> deployType{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> serviceId{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>> serviceInfos{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> version{};
  shared_ptr<string> versionName{};

  ListServiceInstancesResponseBodyServiceInstancesService() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        ListServiceInstancesResponseBodyServiceInstancesServiceCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<ListServiceInstancesResponseBodyServiceInstancesServiceCommodity>(model1);
      }
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>>(expect1);
      }
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstancesService() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServiceInstancesResponseBodyServiceInstancesTags() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceInstancesResponseBodyServiceInstancesTags() = default;
};
class ListServiceInstancesResponseBodyServiceInstances : public Darabonba::Model {
public:
  shared_ptr<string> bizStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> enableInstanceOps{};
  shared_ptr<string> endTime{};
  shared_ptr<string> marketInstanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> operatedServiceInstanceId{};
  shared_ptr<string> operationEndTime{};
  shared_ptr<string> operationStartTime{};
  shared_ptr<string> orderId{};
  shared_ptr<string> outputs{};
  shared_ptr<string> parameters{};
  shared_ptr<string> payType{};
  shared_ptr<long> progress{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resources{};
  shared_ptr<ListServiceInstancesResponseBodyServiceInstancesService> service{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<string> statusDetail{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstancesTags>> tags{};
  shared_ptr<string> templateName{};
  shared_ptr<string> updateTime{};

  ListServiceInstancesResponseBodyServiceInstances() {}

  explicit ListServiceInstancesResponseBodyServiceInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizStatus) {
      res["BizStatus"] = boost::any(*bizStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (marketInstanceId) {
      res["MarketInstanceId"] = boost::any(*marketInstanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operatedServiceInstanceId) {
      res["OperatedServiceInstanceId"] = boost::any(*operatedServiceInstanceId);
    }
    if (operationEndTime) {
      res["OperationEndTime"] = boost::any(*operationEndTime);
    }
    if (operationStartTime) {
      res["OperationStartTime"] = boost::any(*operationStartTime);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (service) {
      res["Service"] = service ? boost::any(service->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("BizStatus") != m.end() && !m["BizStatus"].empty()) {
      bizStatus = make_shared<string>(boost::any_cast<string>(m["BizStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("MarketInstanceId") != m.end() && !m["MarketInstanceId"].empty()) {
      marketInstanceId = make_shared<string>(boost::any_cast<string>(m["MarketInstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperatedServiceInstanceId") != m.end() && !m["OperatedServiceInstanceId"].empty()) {
      operatedServiceInstanceId = make_shared<string>(boost::any_cast<string>(m["OperatedServiceInstanceId"]));
    }
    if (m.find("OperationEndTime") != m.end() && !m["OperationEndTime"].empty()) {
      operationEndTime = make_shared<string>(boost::any_cast<string>(m["OperationEndTime"]));
    }
    if (m.find("OperationStartTime") != m.end() && !m["OperationStartTime"].empty()) {
      operationStartTime = make_shared<string>(boost::any_cast<string>(m["OperationStartTime"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      if (typeid(map<string, boost::any>) == m["Service"].type()) {
        ListServiceInstancesResponseBodyServiceInstancesService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Service"]));
        service = make_shared<ListServiceInstancesResponseBodyServiceInstancesService>(model1);
      }
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListServiceInstancesResponseBodyServiceInstancesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesResponseBodyServiceInstancesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListServiceInstancesResponseBodyServiceInstancesTags>>(expect1);
      }
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstances() = default;
};
class ListServiceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstances>> serviceInstances{};
  shared_ptr<long> totalCount{};

  ListServiceInstancesResponseBody() {}

  explicit ListServiceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceInstances) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInstances"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("ServiceInstances") != m.end() && !m["ServiceInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInstances"].type()) {
        vector<ListServiceInstancesResponseBodyServiceInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceInstancesResponseBodyServiceInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInstances = make_shared<vector<ListServiceInstancesResponseBodyServiceInstances>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServiceInstancesResponseBody() = default;
};
class ListServiceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceInstancesResponseBody> body{};

  ListServiceInstancesResponse() {}

  explicit ListServiceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceInstancesResponse() = default;
};
class RestartServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  RestartServiceInstanceRequest() {}

  explicit RestartServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~RestartServiceInstanceRequest() = default;
};
class RestartServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartServiceInstanceResponseBody() {}

  explicit RestartServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartServiceInstanceResponseBody() = default;
};
class RestartServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartServiceInstanceResponseBody> body{};

  RestartServiceInstanceResponse() {}

  explicit RestartServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartServiceInstanceResponse() = default;
};
class StartServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  StartServiceInstanceRequest() {}

  explicit StartServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~StartServiceInstanceRequest() = default;
};
class StartServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartServiceInstanceResponseBody() {}

  explicit StartServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartServiceInstanceResponseBody() = default;
};
class StartServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartServiceInstanceResponseBody> body{};

  StartServiceInstanceResponse() {}

  explicit StartServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartServiceInstanceResponse() = default;
};
class StopServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceInstanceId{};

  StopServiceInstanceRequest() {}

  explicit StopServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~StopServiceInstanceRequest() = default;
};
class StopServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopServiceInstanceResponseBody() {}

  explicit StopServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopServiceInstanceResponseBody() = default;
};
class StopServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopServiceInstanceResponseBody> body{};

  StopServiceInstanceResponse() {}

  explicit StopServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopServiceInstanceResponse() = default;
};
class UpdateServiceInstanceSpecRequestCommodity : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};

  UpdateServiceInstanceSpecRequestCommodity() {}

  explicit UpdateServiceInstanceSpecRequestCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
  }


  virtual ~UpdateServiceInstanceSpecRequestCommodity() = default;
};
class UpdateServiceInstanceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<UpdateServiceInstanceSpecRequestCommodity> commodity{};
  shared_ptr<bool> dryRun{};
  shared_ptr<bool> enableUserPrometheus{};
  shared_ptr<string> operationName{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> predefinedParametersName{};
  shared_ptr<string> serviceInstanceId{};

  UpdateServiceInstanceSpecRequest() {}

  explicit UpdateServiceInstanceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (enableUserPrometheus) {
      res["EnableUserPrometheus"] = boost::any(*enableUserPrometheus);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (predefinedParametersName) {
      res["PredefinedParametersName"] = boost::any(*predefinedParametersName);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        UpdateServiceInstanceSpecRequestCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<UpdateServiceInstanceSpecRequestCommodity>(model1);
      }
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EnableUserPrometheus") != m.end() && !m["EnableUserPrometheus"].empty()) {
      enableUserPrometheus = make_shared<bool>(boost::any_cast<bool>(m["EnableUserPrometheus"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PredefinedParametersName") != m.end() && !m["PredefinedParametersName"].empty()) {
      predefinedParametersName = make_shared<string>(boost::any_cast<string>(m["PredefinedParametersName"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~UpdateServiceInstanceSpecRequest() = default;
};
class UpdateServiceInstanceSpecShrinkRequestCommodity : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};

  UpdateServiceInstanceSpecShrinkRequestCommodity() {}

  explicit UpdateServiceInstanceSpecShrinkRequestCommodity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
  }


  virtual ~UpdateServiceInstanceSpecShrinkRequestCommodity() = default;
};
class UpdateServiceInstanceSpecShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<UpdateServiceInstanceSpecShrinkRequestCommodity> commodity{};
  shared_ptr<bool> dryRun{};
  shared_ptr<bool> enableUserPrometheus{};
  shared_ptr<string> operationName{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> predefinedParametersName{};
  shared_ptr<string> serviceInstanceId{};

  UpdateServiceInstanceSpecShrinkRequest() {}

  explicit UpdateServiceInstanceSpecShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodity) {
      res["Commodity"] = commodity ? boost::any(commodity->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (enableUserPrometheus) {
      res["EnableUserPrometheus"] = boost::any(*enableUserPrometheus);
    }
    if (operationName) {
      res["OperationName"] = boost::any(*operationName);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (predefinedParametersName) {
      res["PredefinedParametersName"] = boost::any(*predefinedParametersName);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commodity"].type()) {
        UpdateServiceInstanceSpecShrinkRequestCommodity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commodity"]));
        commodity = make_shared<UpdateServiceInstanceSpecShrinkRequestCommodity>(model1);
      }
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EnableUserPrometheus") != m.end() && !m["EnableUserPrometheus"].empty()) {
      enableUserPrometheus = make_shared<bool>(boost::any_cast<bool>(m["EnableUserPrometheus"]));
    }
    if (m.find("OperationName") != m.end() && !m["OperationName"].empty()) {
      operationName = make_shared<string>(boost::any_cast<string>(m["OperationName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("PredefinedParametersName") != m.end() && !m["PredefinedParametersName"].empty()) {
      predefinedParametersName = make_shared<string>(boost::any_cast<string>(m["PredefinedParametersName"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
  }


  virtual ~UpdateServiceInstanceSpecShrinkRequest() = default;
};
class UpdateServiceInstanceSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  UpdateServiceInstanceSpecResponseBody() {}

  explicit UpdateServiceInstanceSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceInstanceSpecResponseBody() = default;
};
class UpdateServiceInstanceSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceInstanceSpecResponseBody> body{};

  UpdateServiceInstanceSpecResponse() {}

  explicit UpdateServiceInstanceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServiceInstanceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceInstanceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceInstanceSpecResponse() = default;
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
  ContinueDeployServiceInstanceResponse continueDeployServiceInstanceWithOptions(shared_ptr<ContinueDeployServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContinueDeployServiceInstanceResponse continueDeployServiceInstance(shared_ptr<ContinueDeployServiceInstanceRequest> request);
  CreateServiceInstanceResponse createServiceInstanceWithOptions(shared_ptr<CreateServiceInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceInstanceResponse createServiceInstance(shared_ptr<CreateServiceInstanceRequest> request);
  DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(shared_ptr<DeleteServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceInstancesResponse deleteServiceInstances(shared_ptr<DeleteServiceInstancesRequest> request);
  GetServiceInstanceResponse getServiceInstanceWithOptions(shared_ptr<GetServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceInstanceResponse getServiceInstance(shared_ptr<GetServiceInstanceRequest> request);
  GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraintsWithOptions(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceTemplateParameterConstraintsResponse getServiceTemplateParameterConstraints(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request);
  ListServiceInstanceLogsResponse listServiceInstanceLogsWithOptions(shared_ptr<ListServiceInstanceLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstanceLogsResponse listServiceInstanceLogs(shared_ptr<ListServiceInstanceLogsRequest> request);
  ListServiceInstanceResourcesResponse listServiceInstanceResourcesWithOptions(shared_ptr<ListServiceInstanceResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstanceResourcesResponse listServiceInstanceResources(shared_ptr<ListServiceInstanceResourcesRequest> request);
  ListServiceInstancesResponse listServiceInstancesWithOptions(shared_ptr<ListServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstancesResponse listServiceInstances(shared_ptr<ListServiceInstancesRequest> request);
  RestartServiceInstanceResponse restartServiceInstanceWithOptions(shared_ptr<RestartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartServiceInstanceResponse restartServiceInstance(shared_ptr<RestartServiceInstanceRequest> request);
  StartServiceInstanceResponse startServiceInstanceWithOptions(shared_ptr<StartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartServiceInstanceResponse startServiceInstance(shared_ptr<StartServiceInstanceRequest> request);
  StopServiceInstanceResponse stopServiceInstanceWithOptions(shared_ptr<StopServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopServiceInstanceResponse stopServiceInstance(shared_ptr<StopServiceInstanceRequest> request);
  UpdateServiceInstanceSpecResponse updateServiceInstanceSpecWithOptions(shared_ptr<UpdateServiceInstanceSpecRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceInstanceSpecResponse updateServiceInstanceSpec(shared_ptr<UpdateServiceInstanceSpecRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ComputeNest20210601

#endif
