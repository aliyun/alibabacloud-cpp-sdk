// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER20210521_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER20210521_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ComputeNestSupplier20210521 {
class InvokeServiceInstanceOperationAPIRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> operationProduct{};
  shared_ptr<string> operationAction{};
  shared_ptr<string> operationVersion{};
  shared_ptr<string> operationParameters{};

  InvokeServiceInstanceOperationAPIRequest() {}

  explicit InvokeServiceInstanceOperationAPIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (operationProduct) {
      res["OperationProduct"] = boost::any(*operationProduct);
    }
    if (operationAction) {
      res["OperationAction"] = boost::any(*operationAction);
    }
    if (operationVersion) {
      res["OperationVersion"] = boost::any(*operationVersion);
    }
    if (operationParameters) {
      res["OperationParameters"] = boost::any(*operationParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OperationProduct") != m.end() && !m["OperationProduct"].empty()) {
      operationProduct = make_shared<string>(boost::any_cast<string>(m["OperationProduct"]));
    }
    if (m.find("OperationAction") != m.end() && !m["OperationAction"].empty()) {
      operationAction = make_shared<string>(boost::any_cast<string>(m["OperationAction"]));
    }
    if (m.find("OperationVersion") != m.end() && !m["OperationVersion"].empty()) {
      operationVersion = make_shared<string>(boost::any_cast<string>(m["OperationVersion"]));
    }
    if (m.find("OperationParameters") != m.end() && !m["OperationParameters"].empty()) {
      operationParameters = make_shared<string>(boost::any_cast<string>(m["OperationParameters"]));
    }
  }


  virtual ~InvokeServiceInstanceOperationAPIRequest() = default;
};
class InvokeServiceInstanceOperationAPIResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> operationResults{};

  InvokeServiceInstanceOperationAPIResponseBody() {}

  explicit InvokeServiceInstanceOperationAPIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (operationResults) {
      res["OperationResults"] = boost::any(*operationResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OperationResults") != m.end() && !m["OperationResults"].empty()) {
      operationResults = make_shared<string>(boost::any_cast<string>(m["OperationResults"]));
    }
  }


  virtual ~InvokeServiceInstanceOperationAPIResponseBody() = default;
};
class InvokeServiceInstanceOperationAPIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InvokeServiceInstanceOperationAPIResponseBody> body{};

  InvokeServiceInstanceOperationAPIResponse() {}

  explicit InvokeServiceInstanceOperationAPIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InvokeServiceInstanceOperationAPIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvokeServiceInstanceOperationAPIResponseBody>(model1);
      }
    }
  }


  virtual ~InvokeServiceInstanceOperationAPIResponse() = default;
};
class GetServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> regionId{};

  GetServiceInstanceRequest() {}

  explicit GetServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetServiceInstanceRequest() = default;
};
class GetServiceInstanceResponseBodyServiceServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> locale{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  GetServiceInstanceResponseBodyServiceServiceInfos() {}

  explicit GetServiceInstanceResponseBodyServiceServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (image) {
      res["Image"] = boost::any(*image);
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
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
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
  shared_ptr<string> status{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> version{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> deployType{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> supplierName{};
  shared_ptr<vector<GetServiceInstanceResponseBodyServiceServiceInfos>> serviceInfos{};

  GetServiceInstanceResponseBodyService() {}

  explicit GetServiceInstanceResponseBodyService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
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
  }


  virtual ~GetServiceInstanceResponseBodyService() = default;
};
class GetServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> templateName{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> createTime{};
  shared_ptr<long> userId{};
  shared_ptr<GetServiceInstanceResponseBodyService> service{};
  shared_ptr<string> parameters{};
  shared_ptr<long> progress{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> operationStartTime{};
  shared_ptr<string> operationEndTime{};
  shared_ptr<string> operatedServiceInstanceId{};
  shared_ptr<bool> isOperated{};
  shared_ptr<bool> enableInstanceOps{};
  shared_ptr<string> resources{};

  GetServiceInstanceResponseBody() {}

  explicit GetServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (service) {
      res["Service"] = service ? boost::any(service->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (operationStartTime) {
      res["OperationStartTime"] = boost::any(*operationStartTime);
    }
    if (operationEndTime) {
      res["OperationEndTime"] = boost::any(*operationEndTime);
    }
    if (operatedServiceInstanceId) {
      res["OperatedServiceInstanceId"] = boost::any(*operatedServiceInstanceId);
    }
    if (isOperated) {
      res["IsOperated"] = boost::any(*isOperated);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      if (typeid(map<string, boost::any>) == m["Service"].type()) {
        GetServiceInstanceResponseBodyService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Service"]));
        service = make_shared<GetServiceInstanceResponseBodyService>(model1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("OperationStartTime") != m.end() && !m["OperationStartTime"].empty()) {
      operationStartTime = make_shared<string>(boost::any_cast<string>(m["OperationStartTime"]));
    }
    if (m.find("OperationEndTime") != m.end() && !m["OperationEndTime"].empty()) {
      operationEndTime = make_shared<string>(boost::any_cast<string>(m["OperationEndTime"]));
    }
    if (m.find("OperatedServiceInstanceId") != m.end() && !m["OperatedServiceInstanceId"].empty()) {
      operatedServiceInstanceId = make_shared<string>(boost::any_cast<string>(m["OperatedServiceInstanceId"]));
    }
    if (m.find("IsOperated") != m.end() && !m["IsOperated"].empty()) {
      isOperated = make_shared<bool>(boost::any_cast<bool>(m["IsOperated"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~GetServiceInstanceResponseBody() = default;
};
class GetServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceInstanceResponseBody> body{};

  GetServiceInstanceResponse() {}

  explicit GetServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class DeleteServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> clientToken{};

  DeleteServiceRequest() {}

  explicit DeleteServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~DeleteServiceRequest() = default;
};
class DeleteServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceResponseBody() {}

  explicit DeleteServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceResponseBody() = default;
};
class DeleteServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServiceResponseBody> body{};

  DeleteServiceResponse() {}

  explicit DeleteServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceResponse() = default;
};
class ListServicesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> value{};
  shared_ptr<string> name{};

  ListServicesRequestFilter() {}

  explicit ListServicesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListServicesRequestFilter() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<bool> allVersions{};
  shared_ptr<vector<ListServicesRequestFilter>> filter{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (allVersions) {
      res["AllVersions"] = boost::any(*allVersions);
    }
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("AllVersions") != m.end() && !m["AllVersions"].empty()) {
      allVersions = make_shared<bool>(boost::any_cast<bool>(m["AllVersions"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServicesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServicesRequestFilter>>(expect1);
      }
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyServicesServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> locale{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  ListServicesResponseBodyServicesServiceInfos() {}

  explicit ListServicesResponseBodyServicesServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (image) {
      res["Image"] = boost::any(*image);
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
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~ListServicesResponseBodyServicesServiceInfos() = default;
};
class ListServicesResponseBodyServices : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<bool> defaultVersion{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> version{};
  shared_ptr<string> deployType{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> supplierName{};
  shared_ptr<vector<ListServicesResponseBodyServicesServiceInfos>> serviceInfos{};
  shared_ptr<string> commodityCode{};

  ListServicesResponseBodyServices() {}

  explicit ListServicesResponseBodyServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<bool>(boost::any_cast<bool>(m["DefaultVersion"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<ListServicesResponseBodyServicesServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServicesServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<ListServicesResponseBodyServicesServiceInfos>>(expect1);
      }
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
  }


  virtual ~ListServicesResponseBodyServices() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListServicesResponseBodyServices>> services{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
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
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<ListServicesResponseBodyServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<ListServicesResponseBodyServices>>(expect1);
      }
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class CancelServiceRegistrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> registrationId{};
  shared_ptr<string> clientToken{};

  CancelServiceRegistrationRequest() {}

  explicit CancelServiceRegistrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CancelServiceRegistrationRequest() = default;
};
class CancelServiceRegistrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelServiceRegistrationResponseBody() {}

  explicit CancelServiceRegistrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelServiceRegistrationResponseBody() = default;
};
class CancelServiceRegistrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CancelServiceRegistrationResponseBody> body{};

  CancelServiceRegistrationResponse() {}

  explicit CancelServiceRegistrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelServiceRegistrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelServiceRegistrationResponseBody>(model1);
      }
    }
  }


  virtual ~CancelServiceRegistrationResponse() = default;
};
class ListServiceRegistrationsRequestFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> value{};
  shared_ptr<string> name{};

  ListServiceRegistrationsRequestFilter() {}

  explicit ListServiceRegistrationsRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListServiceRegistrationsRequestFilter() = default;
};
class ListServiceRegistrationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListServiceRegistrationsRequestFilter>> filter{};

  ListServiceRegistrationsRequest() {}

  explicit ListServiceRegistrationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListServiceRegistrationsRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceRegistrationsRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListServiceRegistrationsRequestFilter>>(expect1);
      }
    }
  }


  virtual ~ListServiceRegistrationsRequest() = default;
};
class ListServiceRegistrationsResponseBodyServiceRegistrations : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> registrationId{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> comment{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> submitTime{};

  ListServiceRegistrationsResponseBodyServiceRegistrations() {}

  explicit ListServiceRegistrationsResponseBodyServiceRegistrations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~ListServiceRegistrationsResponseBodyServiceRegistrations() = default;
};
class ListServiceRegistrationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListServiceRegistrationsResponseBodyServiceRegistrations>> serviceRegistrations{};

  ListServiceRegistrationsResponseBody() {}

  explicit ListServiceRegistrationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (serviceRegistrations) {
      vector<boost::any> temp1;
      for(auto item1:*serviceRegistrations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceRegistrations"] = boost::any(temp1);
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
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("ServiceRegistrations") != m.end() && !m["ServiceRegistrations"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceRegistrations"].type()) {
        vector<ListServiceRegistrationsResponseBodyServiceRegistrations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceRegistrations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceRegistrationsResponseBodyServiceRegistrations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceRegistrations = make_shared<vector<ListServiceRegistrationsResponseBodyServiceRegistrations>>(expect1);
      }
    }
  }


  virtual ~ListServiceRegistrationsResponseBody() = default;
};
class ListServiceRegistrationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServiceRegistrationsResponseBody> body{};

  ListServiceRegistrationsResponse() {}

  explicit ListServiceRegistrationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceRegistrationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceRegistrationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceRegistrationsResponse() = default;
};
class GetSupplierInformationRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetSupplierInformationRequest() {}

  explicit GetSupplierInformationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetSupplierInformationRequest() = default;
};
class GetSupplierInformationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> supplierDesc{};
  shared_ptr<string> operationIp{};
  shared_ptr<bool> operationMfaPresent{};

  GetSupplierInformationResponseBody() {}

  explicit GetSupplierInformationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (supplierDesc) {
      res["SupplierDesc"] = boost::any(*supplierDesc);
    }
    if (operationIp) {
      res["OperationIp"] = boost::any(*operationIp);
    }
    if (operationMfaPresent) {
      res["OperationMfaPresent"] = boost::any(*operationMfaPresent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("SupplierDesc") != m.end() && !m["SupplierDesc"].empty()) {
      supplierDesc = make_shared<string>(boost::any_cast<string>(m["SupplierDesc"]));
    }
    if (m.find("OperationIp") != m.end() && !m["OperationIp"].empty()) {
      operationIp = make_shared<string>(boost::any_cast<string>(m["OperationIp"]));
    }
    if (m.find("OperationMfaPresent") != m.end() && !m["OperationMfaPresent"].empty()) {
      operationMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["OperationMfaPresent"]));
    }
  }


  virtual ~GetSupplierInformationResponseBody() = default;
};
class GetSupplierInformationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSupplierInformationResponseBody> body{};

  GetSupplierInformationResponse() {}

  explicit GetSupplierInformationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSupplierInformationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSupplierInformationResponseBody>(model1);
      }
    }
  }


  virtual ~GetSupplierInformationResponse() = default;
};
class ListServiceInstancesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<vector<string>> value{};
  shared_ptr<string> name{};

  ListServiceInstancesRequestFilter() {}

  explicit ListServiceInstancesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListServiceInstancesRequestFilter() = default;
};
class ListServiceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListServiceInstancesRequestFilter>> filter{};

  ListServiceInstancesRequest() {}

  explicit ListServiceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
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
  }


  virtual ~ListServiceInstancesRequest() = default;
};
class ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> locale{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (image) {
      res["Image"] = boost::any(*image);
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
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
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
  shared_ptr<string> status{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> version{};
  shared_ptr<string> deployType{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> supplierName{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstancesServiceServiceInfos>> serviceInfos{};

  ListServiceInstancesResponseBodyServiceInstancesService() {}

  explicit ListServiceInstancesResponseBodyServiceInstancesService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
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
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstancesService() = default;
};
class ListServiceInstancesResponseBodyServiceInstances : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> serviceInstanceId{};
  shared_ptr<string> createTime{};
  shared_ptr<long> userId{};
  shared_ptr<ListServiceInstancesResponseBodyServiceInstancesService> service{};
  shared_ptr<string> parameters{};
  shared_ptr<long> progress{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> templateName{};
  shared_ptr<string> operatedServiceInstanceId{};
  shared_ptr<string> operationStartTime{};
  shared_ptr<string> operationEndTime{};
  shared_ptr<bool> enableInstanceOps{};

  ListServiceInstancesResponseBodyServiceInstances() {}

  explicit ListServiceInstancesResponseBodyServiceInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (serviceInstanceId) {
      res["ServiceInstanceId"] = boost::any(*serviceInstanceId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (service) {
      res["Service"] = service ? boost::any(service->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (operatedServiceInstanceId) {
      res["OperatedServiceInstanceId"] = boost::any(*operatedServiceInstanceId);
    }
    if (operationStartTime) {
      res["OperationStartTime"] = boost::any(*operationStartTime);
    }
    if (operationEndTime) {
      res["OperationEndTime"] = boost::any(*operationEndTime);
    }
    if (enableInstanceOps) {
      res["EnableInstanceOps"] = boost::any(*enableInstanceOps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("ServiceInstanceId") != m.end() && !m["ServiceInstanceId"].empty()) {
      serviceInstanceId = make_shared<string>(boost::any_cast<string>(m["ServiceInstanceId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      if (typeid(map<string, boost::any>) == m["Service"].type()) {
        ListServiceInstancesResponseBodyServiceInstancesService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Service"]));
        service = make_shared<ListServiceInstancesResponseBodyServiceInstancesService>(model1);
      }
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("OperatedServiceInstanceId") != m.end() && !m["OperatedServiceInstanceId"].empty()) {
      operatedServiceInstanceId = make_shared<string>(boost::any_cast<string>(m["OperatedServiceInstanceId"]));
    }
    if (m.find("OperationStartTime") != m.end() && !m["OperationStartTime"].empty()) {
      operationStartTime = make_shared<string>(boost::any_cast<string>(m["OperationStartTime"]));
    }
    if (m.find("OperationEndTime") != m.end() && !m["OperationEndTime"].empty()) {
      operationEndTime = make_shared<string>(boost::any_cast<string>(m["OperationEndTime"]));
    }
    if (m.find("EnableInstanceOps") != m.end() && !m["EnableInstanceOps"].empty()) {
      enableInstanceOps = make_shared<bool>(boost::any_cast<bool>(m["EnableInstanceOps"]));
    }
  }


  virtual ~ListServiceInstancesResponseBodyServiceInstances() = default;
};
class ListServiceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> maxResults{};
  shared_ptr<vector<ListServiceInstancesResponseBodyServiceInstances>> serviceInstances{};

  ListServiceInstancesResponseBody() {}

  explicit ListServiceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (serviceInstances) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInstances"] = boost::any(temp1);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
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
  }


  virtual ~ListServiceInstancesResponseBody() = default;
};
class ListServiceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServiceInstancesResponseBody> body{};

  ListServiceInstancesResponse() {}

  explicit ListServiceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class RegisterServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> clientToken{};

  RegisterServiceRequest() {}

  explicit RegisterServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~RegisterServiceRequest() = default;
};
class RegisterServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> registrationId{};
  shared_ptr<string> requestId{};

  RegisterServiceResponseBody() {}

  explicit RegisterServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegisterServiceResponseBody() = default;
};
class RegisterServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RegisterServiceResponseBody> body{};

  RegisterServiceResponse() {}

  explicit RegisterServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RegisterServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterServiceResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterServiceResponse() = default;
};
class CreateServiceRequestServiceInfo : public Darabonba::Model {
public:
  shared_ptr<string> locale{};
  shared_ptr<string> shortDescription{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};

  CreateServiceRequestServiceInfo() {}

  explicit CreateServiceRequestServiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateServiceRequestServiceInfo() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> deployType{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> serviceType{};
  shared_ptr<vector<CreateServiceRequestServiceInfo>> serviceInfo{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> policyNames{};
  shared_ptr<long> duration{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (serviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfo"] = boost::any(temp1);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ServiceInfo") != m.end() && !m["ServiceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfo"].type()) {
        vector<CreateServiceRequestServiceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceRequestServiceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfo = make_shared<vector<CreateServiceRequestServiceInfo>>(expect1);
      }
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> requestId{};
  shared_ptr<string> version{};
  shared_ptr<string> serviceId{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
  }


  virtual ~CreateServiceResponseBody() = default;
};
class CreateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceResponseBody> body{};

  CreateServiceResponse() {}

  explicit CreateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceResponse() = default;
};
class ListPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListPoliciesRequest() {}

  explicit ListPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListPoliciesRequest() = default;
};
class ListPoliciesResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> policyDocument{};

  ListPoliciesResponseBodyPolicies() {}

  explicit ListPoliciesResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
  }


  virtual ~ListPoliciesResponseBodyPolicies() = default;
};
class ListPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPoliciesResponseBodyPolicies>> policies{};
  shared_ptr<string> maxResults{};

  ListPoliciesResponseBody() {}

  explicit ListPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(vector<boost::any>) == m["Policies"].type()) {
        vector<ListPoliciesResponseBodyPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesResponseBodyPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policies = make_shared<vector<ListPoliciesResponseBodyPolicies>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
  }


  virtual ~ListPoliciesResponseBody() = default;
};
class ListPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPoliciesResponseBody> body{};

  ListPoliciesResponse() {}

  explicit ListPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesResponse() = default;
};
class UpdateServiceRequestServiceInfo : public Darabonba::Model {
public:
  shared_ptr<string> locale{};
  shared_ptr<string> shortDescription{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};

  UpdateServiceRequestServiceInfo() {}

  explicit UpdateServiceRequestServiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateServiceRequestServiceInfo() = default;
};
class UpdateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> deployType{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceType{};
  shared_ptr<vector<UpdateServiceRequestServiceInfo>> serviceInfo{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> policyNames{};
  shared_ptr<long> duration{};

  UpdateServiceRequest() {}

  explicit UpdateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (serviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfo"] = boost::any(temp1);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ServiceInfo") != m.end() && !m["ServiceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfo"].type()) {
        vector<UpdateServiceRequestServiceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceRequestServiceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfo = make_shared<vector<UpdateServiceRequestServiceInfo>>(expect1);
      }
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~UpdateServiceRequest() = default;
};
class UpdateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateServiceResponseBody() {}

  explicit UpdateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateServiceResponseBody() = default;
};
class UpdateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateServiceResponseBody> body{};

  UpdateServiceResponse() {}

  explicit UpdateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceResponse() = default;
};
class LaunchServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> clientToken{};

  LaunchServiceRequest() {}

  explicit LaunchServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~LaunchServiceRequest() = default;
};
class LaunchServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> version{};
  shared_ptr<string> status{};

  LaunchServiceResponseBody() {}

  explicit LaunchServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~LaunchServiceResponseBody() = default;
};
class LaunchServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LaunchServiceResponseBody> body{};

  LaunchServiceResponse() {}

  explicit LaunchServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LaunchServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LaunchServiceResponseBody>(model1);
      }
    }
  }


  virtual ~LaunchServiceResponse() = default;
};
class WithdrawServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> clientToken{};

  WithdrawServiceRequest() {}

  explicit WithdrawServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~WithdrawServiceRequest() = default;
};
class WithdrawServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  WithdrawServiceResponseBody() {}

  explicit WithdrawServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~WithdrawServiceResponseBody() = default;
};
class WithdrawServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<WithdrawServiceResponseBody> body{};

  WithdrawServiceResponse() {}

  explicit WithdrawServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        WithdrawServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WithdrawServiceResponseBody>(model1);
      }
    }
  }


  virtual ~WithdrawServiceResponse() = default;
};
class UpdateSupplierInformationRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> operationIp{};
  shared_ptr<bool> operationMfaPresent{};

  UpdateSupplierInformationRequest() {}

  explicit UpdateSupplierInformationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (operationIp) {
      res["OperationIp"] = boost::any(*operationIp);
    }
    if (operationMfaPresent) {
      res["OperationMfaPresent"] = boost::any(*operationMfaPresent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OperationIp") != m.end() && !m["OperationIp"].empty()) {
      operationIp = make_shared<string>(boost::any_cast<string>(m["OperationIp"]));
    }
    if (m.find("OperationMfaPresent") != m.end() && !m["OperationMfaPresent"].empty()) {
      operationMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["OperationMfaPresent"]));
    }
  }


  virtual ~UpdateSupplierInformationRequest() = default;
};
class UpdateSupplierInformationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> supplierDesc{};

  UpdateSupplierInformationResponseBody() {}

  explicit UpdateSupplierInformationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (supplierDesc) {
      res["SupplierDesc"] = boost::any(*supplierDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("SupplierDesc") != m.end() && !m["SupplierDesc"].empty()) {
      supplierDesc = make_shared<string>(boost::any_cast<string>(m["SupplierDesc"]));
    }
  }


  virtual ~UpdateSupplierInformationResponseBody() = default;
};
class UpdateSupplierInformationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSupplierInformationResponseBody> body{};

  UpdateSupplierInformationResponse() {}

  explicit UpdateSupplierInformationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSupplierInformationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSupplierInformationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSupplierInformationResponse() = default;
};
class GetServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceVersion{};

  GetServiceRequest() {}

  explicit GetServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~GetServiceRequest() = default;
};
class GetServiceResponseBodyServiceInfos : public Darabonba::Model {
public:
  shared_ptr<string> locale{};
  shared_ptr<string> image{};
  shared_ptr<string> name{};
  shared_ptr<string> shortDescription{};

  GetServiceResponseBodyServiceInfos() {}

  explicit GetServiceResponseBodyServiceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (image) {
      res["Image"] = boost::any(*image);
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
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
  }


  virtual ~GetServiceResponseBodyServiceInfos() = default;
};
class GetServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> deployMetadata{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> version{};
  shared_ptr<string> deployType{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> supplierUrl{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> supplierName{};
  shared_ptr<vector<GetServiceResponseBodyServiceInfos>> serviceInfos{};
  shared_ptr<string> commodityCode{};
  shared_ptr<bool> isSupportOperated{};
  shared_ptr<string> policyNames{};
  shared_ptr<long> duration{};

  GetServiceResponseBody() {}

  explicit GetServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (deployMetadata) {
      res["DeployMetadata"] = boost::any(*deployMetadata);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (supplierUrl) {
      res["SupplierUrl"] = boost::any(*supplierUrl);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (serviceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serviceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceInfos"] = boost::any(temp1);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (isSupportOperated) {
      res["IsSupportOperated"] = boost::any(*isSupportOperated);
    }
    if (policyNames) {
      res["PolicyNames"] = boost::any(*policyNames);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DeployMetadata") != m.end() && !m["DeployMetadata"].empty()) {
      deployMetadata = make_shared<string>(boost::any_cast<string>(m["DeployMetadata"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("SupplierUrl") != m.end() && !m["SupplierUrl"].empty()) {
      supplierUrl = make_shared<string>(boost::any_cast<string>(m["SupplierUrl"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("ServiceInfos") != m.end() && !m["ServiceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceInfos"].type()) {
        vector<GetServiceResponseBodyServiceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceResponseBodyServiceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceInfos = make_shared<vector<GetServiceResponseBodyServiceInfos>>(expect1);
      }
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("IsSupportOperated") != m.end() && !m["IsSupportOperated"].empty()) {
      isSupportOperated = make_shared<bool>(boost::any_cast<bool>(m["IsSupportOperated"]));
    }
    if (m.find("PolicyNames") != m.end() && !m["PolicyNames"].empty()) {
      policyNames = make_shared<string>(boost::any_cast<string>(m["PolicyNames"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~GetServiceResponseBody() = default;
};
class GetServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceResponseBody> body{};

  GetServiceResponse() {}

  explicit GetServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceResponse() = default;
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
  InvokeServiceInstanceOperationAPIResponse invokeServiceInstanceOperationAPIWithOptions(shared_ptr<InvokeServiceInstanceOperationAPIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvokeServiceInstanceOperationAPIResponse invokeServiceInstanceOperationAPI(shared_ptr<InvokeServiceInstanceOperationAPIRequest> request);
  GetServiceInstanceResponse getServiceInstanceWithOptions(shared_ptr<GetServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceInstanceResponse getServiceInstance(shared_ptr<GetServiceInstanceRequest> request);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<DeleteServiceRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  CancelServiceRegistrationResponse cancelServiceRegistrationWithOptions(shared_ptr<CancelServiceRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelServiceRegistrationResponse cancelServiceRegistration(shared_ptr<CancelServiceRegistrationRequest> request);
  ListServiceRegistrationsResponse listServiceRegistrationsWithOptions(shared_ptr<ListServiceRegistrationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceRegistrationsResponse listServiceRegistrations(shared_ptr<ListServiceRegistrationsRequest> request);
  GetSupplierInformationResponse getSupplierInformationWithOptions(shared_ptr<GetSupplierInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSupplierInformationResponse getSupplierInformation(shared_ptr<GetSupplierInformationRequest> request);
  ListServiceInstancesResponse listServiceInstancesWithOptions(shared_ptr<ListServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstancesResponse listServiceInstances(shared_ptr<ListServiceInstancesRequest> request);
  RegisterServiceResponse registerServiceWithOptions(shared_ptr<RegisterServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterServiceResponse registerService(shared_ptr<RegisterServiceRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  ListPoliciesResponse listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesResponse listPolicies(shared_ptr<ListPoliciesRequest> request);
  UpdateServiceResponse updateServiceWithOptions(shared_ptr<UpdateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceResponse updateService(shared_ptr<UpdateServiceRequest> request);
  LaunchServiceResponse launchServiceWithOptions(shared_ptr<LaunchServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LaunchServiceResponse launchService(shared_ptr<LaunchServiceRequest> request);
  WithdrawServiceResponse withdrawServiceWithOptions(shared_ptr<WithdrawServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WithdrawServiceResponse withdrawService(shared_ptr<WithdrawServiceRequest> request);
  UpdateSupplierInformationResponse updateSupplierInformationWithOptions(shared_ptr<UpdateSupplierInformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSupplierInformationResponse updateSupplierInformation(shared_ptr<UpdateSupplierInformationRequest> request);
  GetServiceResponse getServiceWithOptions(shared_ptr<GetServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceResponse getService(shared_ptr<GetServiceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ComputeNestSupplier20210521

#endif
