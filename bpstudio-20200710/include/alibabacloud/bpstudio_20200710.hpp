// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BPSTUDIO20200710_H_
#define ALIBABACLOUD_BPSTUDIO20200710_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_BPStudio20200710 {
class BillingApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<long> month{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> year{};

  BillingApplicationRequest() {}

  explicit BillingApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~BillingApplicationRequest() = default;
};
class BillingApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  BillingApplicationResponseBody() {}

  explicit BillingApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BillingApplicationResponseBody() = default;
};
class BillingApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BillingApplicationResponseBody> body{};

  BillingApplicationResponse() {}

  explicit BillingApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BillingApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BillingApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~BillingApplicationResponse() = default;
};
class GetDeployDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> nextToken{};
  shared_ptr<string> refId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};

  GetDeployDetailRequest() {}

  explicit GetDeployDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (refId) {
      res["RefId"] = boost::any(*refId);
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
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<long>(boost::any_cast<long>(m["NextToken"]));
    }
    if (m.find("RefId") != m.end() && !m["RefId"].empty()) {
      refId = make_shared<string>(boost::any_cast<string>(m["RefId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~GetDeployDetailRequest() = default;
};
class GetDeployDetailResponseBodyDataResourceListOperation : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<map<string, boost::any>> operations{};

  GetDeployDetailResponseBodyDataResourceListOperation() {}

  explicit GetDeployDetailResponseBodyDataResourceListOperation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operations) {
      res["Operations"] = boost::any(*operations);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Operations") != m.end() && !m["Operations"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Operations"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      operations = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetDeployDetailResponseBodyDataResourceListOperation() = default;
};
class GetDeployDetailResponseBodyDataResourceList : public Darabonba::Model {
public:
  shared_ptr<string> buyDuration{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> executionStrategy{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> monitorURL{};
  shared_ptr<string> nodeName{};
  shared_ptr<GetDeployDetailResponseBodyDataResourceListOperation> operation{};
  shared_ptr<long> refId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceCode{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};

  GetDeployDetailResponseBodyDataResourceList() {}

  explicit GetDeployDetailResponseBodyDataResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyDuration) {
      res["BuyDuration"] = boost::any(*buyDuration);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (executionStrategy) {
      res["ExecutionStrategy"] = boost::any(*executionStrategy);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (monitorURL) {
      res["MonitorURL"] = boost::any(*monitorURL);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (operation) {
      res["Operation"] = operation ? boost::any(operation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refId) {
      res["RefId"] = boost::any(*refId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceCode) {
      res["ResourceCode"] = boost::any(*resourceCode);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyDuration") != m.end() && !m["BuyDuration"].empty()) {
      buyDuration = make_shared<string>(boost::any_cast<string>(m["BuyDuration"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ExecutionStrategy") != m.end() && !m["ExecutionStrategy"].empty()) {
      executionStrategy = make_shared<string>(boost::any_cast<string>(m["ExecutionStrategy"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("MonitorURL") != m.end() && !m["MonitorURL"].empty()) {
      monitorURL = make_shared<string>(boost::any_cast<string>(m["MonitorURL"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      if (typeid(map<string, boost::any>) == m["Operation"].type()) {
        GetDeployDetailResponseBodyDataResourceListOperation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Operation"]));
        operation = make_shared<GetDeployDetailResponseBodyDataResourceListOperation>(model1);
      }
    }
    if (m.find("RefId") != m.end() && !m["RefId"].empty()) {
      refId = make_shared<long>(boost::any_cast<long>(m["RefId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceCode") != m.end() && !m["ResourceCode"].empty()) {
      resourceCode = make_shared<string>(boost::any_cast<string>(m["ResourceCode"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDeployDetailResponseBodyDataResourceList() = default;
};
class GetDeployDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> currentProcess{};
  shared_ptr<vector<map<string, boost::any>>> deletingNodeList{};
  shared_ptr<double> deployPercent{};
  shared_ptr<vector<map<string, boost::any>>> deployedNodeList{};
  shared_ptr<vector<map<string, boost::any>>> deployingNodeList{};
  shared_ptr<string> error{};
  shared_ptr<long> executionTime{};
  shared_ptr<long> failStatus{};
  shared_ptr<vector<string>> orderIdList{};
  shared_ptr<string> pdfUrl{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<GetDeployDetailResponseBodyDataResourceList>> resourceList{};
  shared_ptr<string> status{};
  shared_ptr<string> terraformScriptUrl{};

  GetDeployDetailResponseBodyData() {}

  explicit GetDeployDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (currentProcess) {
      res["CurrentProcess"] = boost::any(*currentProcess);
    }
    if (deletingNodeList) {
      res["DeletingNodeList"] = boost::any(*deletingNodeList);
    }
    if (deployPercent) {
      res["DeployPercent"] = boost::any(*deployPercent);
    }
    if (deployedNodeList) {
      res["DeployedNodeList"] = boost::any(*deployedNodeList);
    }
    if (deployingNodeList) {
      res["DeployingNodeList"] = boost::any(*deployingNodeList);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (executionTime) {
      res["ExecutionTime"] = boost::any(*executionTime);
    }
    if (failStatus) {
      res["FailStatus"] = boost::any(*failStatus);
    }
    if (orderIdList) {
      res["OrderIdList"] = boost::any(*orderIdList);
    }
    if (pdfUrl) {
      res["PdfUrl"] = boost::any(*pdfUrl);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (terraformScriptUrl) {
      res["TerraformScriptUrl"] = boost::any(*terraformScriptUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CurrentProcess") != m.end() && !m["CurrentProcess"].empty()) {
      currentProcess = make_shared<string>(boost::any_cast<string>(m["CurrentProcess"]));
    }
    if (m.find("DeletingNodeList") != m.end() && !m["DeletingNodeList"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["DeletingNodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeletingNodeList"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      deletingNodeList = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("DeployPercent") != m.end() && !m["DeployPercent"].empty()) {
      deployPercent = make_shared<double>(boost::any_cast<double>(m["DeployPercent"]));
    }
    if (m.find("DeployedNodeList") != m.end() && !m["DeployedNodeList"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["DeployedNodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeployedNodeList"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      deployedNodeList = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("DeployingNodeList") != m.end() && !m["DeployingNodeList"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["DeployingNodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeployingNodeList"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      deployingNodeList = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("ExecutionTime") != m.end() && !m["ExecutionTime"].empty()) {
      executionTime = make_shared<long>(boost::any_cast<long>(m["ExecutionTime"]));
    }
    if (m.find("FailStatus") != m.end() && !m["FailStatus"].empty()) {
      failStatus = make_shared<long>(boost::any_cast<long>(m["FailStatus"]));
    }
    if (m.find("OrderIdList") != m.end() && !m["OrderIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OrderIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      orderIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PdfUrl") != m.end() && !m["PdfUrl"].empty()) {
      pdfUrl = make_shared<string>(boost::any_cast<string>(m["PdfUrl"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceList") != m.end() && !m["ResourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceList"].type()) {
        vector<GetDeployDetailResponseBodyDataResourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeployDetailResponseBodyDataResourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceList = make_shared<vector<GetDeployDetailResponseBodyDataResourceList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TerraformScriptUrl") != m.end() && !m["TerraformScriptUrl"].empty()) {
      terraformScriptUrl = make_shared<string>(boost::any_cast<string>(m["TerraformScriptUrl"]));
    }
  }


  virtual ~GetDeployDetailResponseBodyData() = default;
};
class GetDeployDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<GetDeployDetailResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetDeployDetailResponseBody() {}

  explicit GetDeployDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetDeployDetailResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeployDetailResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetDeployDetailResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<long>(boost::any_cast<long>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetDeployDetailResponseBody() = default;
};
class GetDeployDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeployDetailResponseBody> body{};

  GetDeployDetailResponse() {}

  explicit GetDeployDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeployDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeployDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeployDetailResponse() = default;
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
  BillingApplicationResponse billingApplicationWithOptions(shared_ptr<BillingApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BillingApplicationResponse billingApplication(shared_ptr<BillingApplicationRequest> request);
  GetDeployDetailResponse getDeployDetailWithOptions(shared_ptr<GetDeployDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeployDetailResponse getDeployDetail(shared_ptr<GetDeployDetailRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BPStudio20200710

#endif
