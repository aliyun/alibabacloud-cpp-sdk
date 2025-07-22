// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BSSOPENAPI20230930_H_
#define ALIBABACLOUD_BSSOPENAPI20230930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_BssOpenApi20230930 {
class DataModuleMapListSpnTypeMapListValueFilterModules : public Darabonba::Model {
public:
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleCode{};
  shared_ptr<string> moduleName{};

  DataModuleMapListSpnTypeMapListValueFilterModules() {}

  explicit DataModuleMapListSpnTypeMapListValueFilterModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~DataModuleMapListSpnTypeMapListValueFilterModules() = default;
};
class DataModuleMapListSpnTypeMapListValueShowModules : public Darabonba::Model {
public:
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleCode{};
  shared_ptr<string> moduleName{};

  DataModuleMapListSpnTypeMapListValueShowModules() {}

  explicit DataModuleMapListSpnTypeMapListValueShowModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~DataModuleMapListSpnTypeMapListValueShowModules() = default;
};
class DataModuleMapListSpnTypeMapListValue : public Darabonba::Model {
public:
  shared_ptr<vector<DataModuleMapListSpnTypeMapListValueFilterModules>> filterModules{};
  shared_ptr<vector<DataModuleMapListSpnTypeMapListValueShowModules>> showModules{};

  DataModuleMapListSpnTypeMapListValue() {}

  explicit DataModuleMapListSpnTypeMapListValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterModules) {
      vector<boost::any> temp1;
      for(auto item1:*filterModules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FilterModules"] = boost::any(temp1);
    }
    if (showModules) {
      vector<boost::any> temp1;
      for(auto item1:*showModules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShowModules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterModules") != m.end() && !m["FilterModules"].empty()) {
      if (typeid(vector<boost::any>) == m["FilterModules"].type()) {
        vector<DataModuleMapListSpnTypeMapListValueFilterModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FilterModules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataModuleMapListSpnTypeMapListValueFilterModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filterModules = make_shared<vector<DataModuleMapListSpnTypeMapListValueFilterModules>>(expect1);
      }
    }
    if (m.find("ShowModules") != m.end() && !m["ShowModules"].empty()) {
      if (typeid(vector<boost::any>) == m["ShowModules"].type()) {
        vector<DataModuleMapListSpnTypeMapListValueShowModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShowModules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataModuleMapListSpnTypeMapListValueShowModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        showModules = make_shared<vector<DataModuleMapListSpnTypeMapListValueShowModules>>(expect1);
      }
    }
  }


  virtual ~DataModuleMapListSpnTypeMapListValue() = default;
};
class DataStepPriceMapValue : public Darabonba::Model {
public:
  shared_ptr<bool> rightClose{};
  shared_ptr<string> min{};
  shared_ptr<string> max{};
  shared_ptr<string> currency{};
  shared_ptr<bool> leftClose{};
  shared_ptr<string> stepPriceValue{};
  shared_ptr<string> priceValueType{};
  shared_ptr<string> priceValue{};
  shared_ptr<string> deductCycleType{};

  DataStepPriceMapValue() {}

  explicit DataStepPriceMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rightClose) {
      res["RightClose"] = boost::any(*rightClose);
    }
    if (min) {
      res["Min"] = boost::any(*min);
    }
    if (max) {
      res["Max"] = boost::any(*max);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (leftClose) {
      res["LeftClose"] = boost::any(*leftClose);
    }
    if (stepPriceValue) {
      res["StepPriceValue"] = boost::any(*stepPriceValue);
    }
    if (priceValueType) {
      res["PriceValueType"] = boost::any(*priceValueType);
    }
    if (priceValue) {
      res["PriceValue"] = boost::any(*priceValue);
    }
    if (deductCycleType) {
      res["DeductCycleType"] = boost::any(*deductCycleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RightClose") != m.end() && !m["RightClose"].empty()) {
      rightClose = make_shared<bool>(boost::any_cast<bool>(m["RightClose"]));
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      min = make_shared<string>(boost::any_cast<string>(m["Min"]));
    }
    if (m.find("Max") != m.end() && !m["Max"].empty()) {
      max = make_shared<string>(boost::any_cast<string>(m["Max"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("LeftClose") != m.end() && !m["LeftClose"].empty()) {
      leftClose = make_shared<bool>(boost::any_cast<bool>(m["LeftClose"]));
    }
    if (m.find("StepPriceValue") != m.end() && !m["StepPriceValue"].empty()) {
      stepPriceValue = make_shared<string>(boost::any_cast<string>(m["StepPriceValue"]));
    }
    if (m.find("PriceValueType") != m.end() && !m["PriceValueType"].empty()) {
      priceValueType = make_shared<string>(boost::any_cast<string>(m["PriceValueType"]));
    }
    if (m.find("PriceValue") != m.end() && !m["PriceValue"].empty()) {
      priceValue = make_shared<string>(boost::any_cast<string>(m["PriceValue"]));
    }
    if (m.find("DeductCycleType") != m.end() && !m["DeductCycleType"].empty()) {
      deductCycleType = make_shared<string>(boost::any_cast<string>(m["DeductCycleType"]));
    }
  }


  virtual ~DataStepPriceMapValue() = default;
};
class AddCouponDeductTagRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  AddCouponDeductTagRequestEcIdAccountIds() {}

  explicit AddCouponDeductTagRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~AddCouponDeductTagRequestEcIdAccountIds() = default;
};
class AddCouponDeductTagRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AddCouponDeductTagRequestTags() {}

  explicit AddCouponDeductTagRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddCouponDeductTagRequestTags() = default;
};
class AddCouponDeductTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<vector<AddCouponDeductTagRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};
  shared_ptr<vector<AddCouponDeductTagRequestTags>> tags{};

  AddCouponDeductTagRequest() {}

  explicit AddCouponDeductTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
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
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<AddCouponDeductTagRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddCouponDeductTagRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<AddCouponDeductTagRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<AddCouponDeductTagRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddCouponDeductTagRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<AddCouponDeductTagRequestTags>>(expect1);
      }
    }
  }


  virtual ~AddCouponDeductTagRequest() = default;
};
class AddCouponDeductTagShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<string> tagsShrink{};

  AddCouponDeductTagShrinkRequest() {}

  explicit AddCouponDeductTagShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~AddCouponDeductTagShrinkRequest() = default;
};
class AddCouponDeductTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  AddCouponDeductTagResponseBody() {}

  explicit AddCouponDeductTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddCouponDeductTagResponseBody() = default;
};
class AddCouponDeductTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddCouponDeductTagResponseBody> body{};

  AddCouponDeductTagResponse() {}

  explicit AddCouponDeductTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddCouponDeductTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddCouponDeductTagResponseBody>(model1);
      }
    }
  }


  virtual ~AddCouponDeductTagResponse() = default;
};
class AllocateCostCenterResourceRequestResourceInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> apportionCode{};
  shared_ptr<string> apportionName{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pipCode{};
  shared_ptr<string> relatedResources{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceNick{};
  shared_ptr<string> resourceSource{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<string> resourceTag{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> resourceUserId{};
  shared_ptr<string> resourceUserName{};

  AllocateCostCenterResourceRequestResourceInstanceList() {}

  explicit AllocateCostCenterResourceRequestResourceInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apportionCode) {
      res["ApportionCode"] = boost::any(*apportionCode);
    }
    if (apportionName) {
      res["ApportionName"] = boost::any(*apportionName);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityName) {
      res["CommodityName"] = boost::any(*commodityName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pipCode) {
      res["PipCode"] = boost::any(*pipCode);
    }
    if (relatedResources) {
      res["RelatedResources"] = boost::any(*relatedResources);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceNick) {
      res["ResourceNick"] = boost::any(*resourceNick);
    }
    if (resourceSource) {
      res["ResourceSource"] = boost::any(*resourceSource);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (resourceTag) {
      res["ResourceTag"] = boost::any(*resourceTag);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceUserId) {
      res["ResourceUserId"] = boost::any(*resourceUserId);
    }
    if (resourceUserName) {
      res["ResourceUserName"] = boost::any(*resourceUserName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApportionCode") != m.end() && !m["ApportionCode"].empty()) {
      apportionCode = make_shared<string>(boost::any_cast<string>(m["ApportionCode"]));
    }
    if (m.find("ApportionName") != m.end() && !m["ApportionName"].empty()) {
      apportionName = make_shared<string>(boost::any_cast<string>(m["ApportionName"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityName") != m.end() && !m["CommodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["CommodityName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PipCode") != m.end() && !m["PipCode"].empty()) {
      pipCode = make_shared<string>(boost::any_cast<string>(m["PipCode"]));
    }
    if (m.find("RelatedResources") != m.end() && !m["RelatedResources"].empty()) {
      relatedResources = make_shared<string>(boost::any_cast<string>(m["RelatedResources"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceNick") != m.end() && !m["ResourceNick"].empty()) {
      resourceNick = make_shared<string>(boost::any_cast<string>(m["ResourceNick"]));
    }
    if (m.find("ResourceSource") != m.end() && !m["ResourceSource"].empty()) {
      resourceSource = make_shared<string>(boost::any_cast<string>(m["ResourceSource"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ResourceTag") != m.end() && !m["ResourceTag"].empty()) {
      resourceTag = make_shared<string>(boost::any_cast<string>(m["ResourceTag"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceUserId") != m.end() && !m["ResourceUserId"].empty()) {
      resourceUserId = make_shared<long>(boost::any_cast<long>(m["ResourceUserId"]));
    }
    if (m.find("ResourceUserName") != m.end() && !m["ResourceUserName"].empty()) {
      resourceUserName = make_shared<string>(boost::any_cast<string>(m["ResourceUserName"]));
    }
  }


  virtual ~AllocateCostCenterResourceRequestResourceInstanceList() = default;
};
class AllocateCostCenterResourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> fromCostCenterId{};
  shared_ptr<long> fromOwnerAccountId{};
  shared_ptr<string> nbid{};
  shared_ptr<vector<AllocateCostCenterResourceRequestResourceInstanceList>> resourceInstanceList{};
  shared_ptr<long> toCostCenterId{};

  AllocateCostCenterResourceRequest() {}

  explicit AllocateCostCenterResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromCostCenterId) {
      res["FromCostCenterId"] = boost::any(*fromCostCenterId);
    }
    if (fromOwnerAccountId) {
      res["FromOwnerAccountId"] = boost::any(*fromOwnerAccountId);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (resourceInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceInstanceList"] = boost::any(temp1);
    }
    if (toCostCenterId) {
      res["ToCostCenterId"] = boost::any(*toCostCenterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromCostCenterId") != m.end() && !m["FromCostCenterId"].empty()) {
      fromCostCenterId = make_shared<long>(boost::any_cast<long>(m["FromCostCenterId"]));
    }
    if (m.find("FromOwnerAccountId") != m.end() && !m["FromOwnerAccountId"].empty()) {
      fromOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["FromOwnerAccountId"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("ResourceInstanceList") != m.end() && !m["ResourceInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceInstanceList"].type()) {
        vector<AllocateCostCenterResourceRequestResourceInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AllocateCostCenterResourceRequestResourceInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceInstanceList = make_shared<vector<AllocateCostCenterResourceRequestResourceInstanceList>>(expect1);
      }
    }
    if (m.find("ToCostCenterId") != m.end() && !m["ToCostCenterId"].empty()) {
      toCostCenterId = make_shared<long>(boost::any_cast<long>(m["ToCostCenterId"]));
    }
  }


  virtual ~AllocateCostCenterResourceRequest() = default;
};
class AllocateCostCenterResourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> fromCostCenterId{};
  shared_ptr<long> fromOwnerAccountId{};
  shared_ptr<string> nbid{};
  shared_ptr<string> resourceInstanceListShrink{};
  shared_ptr<long> toCostCenterId{};

  AllocateCostCenterResourceShrinkRequest() {}

  explicit AllocateCostCenterResourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromCostCenterId) {
      res["FromCostCenterId"] = boost::any(*fromCostCenterId);
    }
    if (fromOwnerAccountId) {
      res["FromOwnerAccountId"] = boost::any(*fromOwnerAccountId);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (resourceInstanceListShrink) {
      res["ResourceInstanceList"] = boost::any(*resourceInstanceListShrink);
    }
    if (toCostCenterId) {
      res["ToCostCenterId"] = boost::any(*toCostCenterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromCostCenterId") != m.end() && !m["FromCostCenterId"].empty()) {
      fromCostCenterId = make_shared<long>(boost::any_cast<long>(m["FromCostCenterId"]));
    }
    if (m.find("FromOwnerAccountId") != m.end() && !m["FromOwnerAccountId"].empty()) {
      fromOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["FromOwnerAccountId"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("ResourceInstanceList") != m.end() && !m["ResourceInstanceList"].empty()) {
      resourceInstanceListShrink = make_shared<string>(boost::any_cast<string>(m["ResourceInstanceList"]));
    }
    if (m.find("ToCostCenterId") != m.end() && !m["ToCostCenterId"].empty()) {
      toCostCenterId = make_shared<long>(boost::any_cast<long>(m["ToCostCenterId"]));
    }
  }


  virtual ~AllocateCostCenterResourceShrinkRequest() = default;
};
class AllocateCostCenterResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<string> requestId{};

  AllocateCostCenterResourceResponseBody() {}

  explicit AllocateCostCenterResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AllocateCostCenterResourceResponseBody() = default;
};
class AllocateCostCenterResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocateCostCenterResourceResponseBody> body{};

  AllocateCostCenterResourceResponse() {}

  explicit AllocateCostCenterResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateCostCenterResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateCostCenterResourceResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateCostCenterResourceResponse() = default;
};
class CancelFundAccountLowAvailableAmountAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};

  CancelFundAccountLowAvailableAmountAlarmRequest() {}

  explicit CancelFundAccountLowAvailableAmountAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~CancelFundAccountLowAvailableAmountAlarmRequest() = default;
};
class CancelFundAccountLowAvailableAmountAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  CancelFundAccountLowAvailableAmountAlarmResponseBody() {}

  explicit CancelFundAccountLowAvailableAmountAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelFundAccountLowAvailableAmountAlarmResponseBody() = default;
};
class CancelFundAccountLowAvailableAmountAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelFundAccountLowAvailableAmountAlarmResponseBody> body{};

  CancelFundAccountLowAvailableAmountAlarmResponse() {}

  explicit CancelFundAccountLowAvailableAmountAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelFundAccountLowAvailableAmountAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelFundAccountLowAvailableAmountAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~CancelFundAccountLowAvailableAmountAlarmResponse() = default;
};
class CreateCostCenterRequestCostCenterEntityList : public Darabonba::Model {
public:
  shared_ptr<string> costCenterName{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<long> parentCostCenterId{};

  CreateCostCenterRequestCostCenterEntityList() {}

  explicit CreateCostCenterRequestCostCenterEntityList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterName) {
      res["CostCenterName"] = boost::any(*costCenterName);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    if (parentCostCenterId) {
      res["ParentCostCenterId"] = boost::any(*parentCostCenterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterName") != m.end() && !m["CostCenterName"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["CostCenterName"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
    if (m.find("ParentCostCenterId") != m.end() && !m["ParentCostCenterId"].empty()) {
      parentCostCenterId = make_shared<long>(boost::any_cast<long>(m["ParentCostCenterId"]));
    }
  }


  virtual ~CreateCostCenterRequestCostCenterEntityList() = default;
};
class CreateCostCenterRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateCostCenterRequestCostCenterEntityList>> costCenterEntityList{};
  shared_ptr<string> nbid{};

  CreateCostCenterRequest() {}

  explicit CreateCostCenterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterEntityList) {
      vector<boost::any> temp1;
      for(auto item1:*costCenterEntityList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CostCenterEntityList"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterEntityList") != m.end() && !m["CostCenterEntityList"].empty()) {
      if (typeid(vector<boost::any>) == m["CostCenterEntityList"].type()) {
        vector<CreateCostCenterRequestCostCenterEntityList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CostCenterEntityList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCostCenterRequestCostCenterEntityList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        costCenterEntityList = make_shared<vector<CreateCostCenterRequestCostCenterEntityList>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~CreateCostCenterRequest() = default;
};
class CreateCostCenterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> costCenterEntityListShrink{};
  shared_ptr<string> nbid{};

  CreateCostCenterShrinkRequest() {}

  explicit CreateCostCenterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterEntityListShrink) {
      res["CostCenterEntityList"] = boost::any(*costCenterEntityListShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterEntityList") != m.end() && !m["CostCenterEntityList"].empty()) {
      costCenterEntityListShrink = make_shared<string>(boost::any_cast<string>(m["CostCenterEntityList"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~CreateCostCenterShrinkRequest() = default;
};
class CreateCostCenterResponseBodyCostCenterDtoList : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<long> parentCostCenterId{};

  CreateCostCenterResponseBodyCostCenterDtoList() {}

  explicit CreateCostCenterResponseBodyCostCenterDtoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["CostCenterName"] = boost::any(*costCenterName);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    if (parentCostCenterId) {
      res["ParentCostCenterId"] = boost::any(*parentCostCenterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("CostCenterName") != m.end() && !m["CostCenterName"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["CostCenterName"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
    if (m.find("ParentCostCenterId") != m.end() && !m["ParentCostCenterId"].empty()) {
      parentCostCenterId = make_shared<long>(boost::any_cast<long>(m["ParentCostCenterId"]));
    }
  }


  virtual ~CreateCostCenterResponseBodyCostCenterDtoList() = default;
};
class CreateCostCenterResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CreateCostCenterResponseBodyCostCenterDtoList>> costCenterDtoList{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  CreateCostCenterResponseBody() {}

  explicit CreateCostCenterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterDtoList) {
      vector<boost::any> temp1;
      for(auto item1:*costCenterDtoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CostCenterDtoList"] = boost::any(temp1);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterDtoList") != m.end() && !m["CostCenterDtoList"].empty()) {
      if (typeid(vector<boost::any>) == m["CostCenterDtoList"].type()) {
        vector<CreateCostCenterResponseBodyCostCenterDtoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CostCenterDtoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCostCenterResponseBodyCostCenterDtoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        costCenterDtoList = make_shared<vector<CreateCostCenterResponseBodyCostCenterDtoList>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCostCenterResponseBody() = default;
};
class CreateCostCenterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCostCenterResponseBody> body{};

  CreateCostCenterResponse() {}

  explicit CreateCostCenterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCostCenterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCostCenterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCostCenterResponse() = default;
};
class CreateCostCenterRuleRequestFilterExpressionFilterValues : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> codeName{};
  shared_ptr<string> selectType{};
  shared_ptr<vector<string>> values{};

  CreateCostCenterRuleRequestFilterExpressionFilterValues() {}

  explicit CreateCostCenterRuleRequestFilterExpressionFilterValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (codeName) {
      res["CodeName"] = boost::any(*codeName);
    }
    if (selectType) {
      res["SelectType"] = boost::any(*selectType);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CodeName") != m.end() && !m["CodeName"].empty()) {
      codeName = make_shared<string>(boost::any_cast<string>(m["CodeName"]));
    }
    if (m.find("SelectType") != m.end() && !m["SelectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["SelectType"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateCostCenterRuleRequestFilterExpressionFilterValues() = default;
};
class CreateCostCenterRuleRequestFilterExpression : public Darabonba::Model {
public:
  shared_ptr<string> expressionType{};
  shared_ptr<CreateCostCenterRuleRequestFilterExpressionFilterValues> filterValues{};
  shared_ptr<boost::any> operand{};
  shared_ptr<vector<boost::any>> operands{};
  shared_ptr<string> operatorType{};

  CreateCostCenterRuleRequestFilterExpression() {}

  explicit CreateCostCenterRuleRequestFilterExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressionType) {
      res["ExpressionType"] = boost::any(*expressionType);
    }
    if (filterValues) {
      res["FilterValues"] = filterValues ? boost::any(filterValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operand) {
      res["Operand"] = boost::any(*operand);
    }
    if (operands) {
      res["Operands"] = boost::any(*operands);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressionType") != m.end() && !m["ExpressionType"].empty()) {
      expressionType = make_shared<string>(boost::any_cast<string>(m["ExpressionType"]));
    }
    if (m.find("FilterValues") != m.end() && !m["FilterValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterValues"].type()) {
        CreateCostCenterRuleRequestFilterExpressionFilterValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterValues"]));
        filterValues = make_shared<CreateCostCenterRuleRequestFilterExpressionFilterValues>(model1);
      }
    }
    if (m.find("Operand") != m.end() && !m["Operand"].empty()) {
      operand = make_shared<boost::any>(boost::any_cast<boost::any>(m["Operand"]));
    }
    if (m.find("Operands") != m.end() && !m["Operands"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Operands"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Operands"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      operands = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<string>(boost::any_cast<string>(m["OperatorType"]));
    }
  }


  virtual ~CreateCostCenterRuleRequestFilterExpression() = default;
};
class CreateCostCenterRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<CreateCostCenterRuleRequestFilterExpression> filterExpression{};
  shared_ptr<string> nbid{};

  CreateCostCenterRuleRequest() {}

  explicit CreateCostCenterRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (filterExpression) {
      res["FilterExpression"] = filterExpression ? boost::any(filterExpression->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("FilterExpression") != m.end() && !m["FilterExpression"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterExpression"].type()) {
        CreateCostCenterRuleRequestFilterExpression model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterExpression"]));
        filterExpression = make_shared<CreateCostCenterRuleRequestFilterExpression>(model1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~CreateCostCenterRuleRequest() = default;
};
class CreateCostCenterRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> filterExpressionShrink{};
  shared_ptr<string> nbid{};

  CreateCostCenterRuleShrinkRequest() {}

  explicit CreateCostCenterRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (filterExpressionShrink) {
      res["FilterExpression"] = boost::any(*filterExpressionShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("FilterExpression") != m.end() && !m["FilterExpression"].empty()) {
      filterExpressionShrink = make_shared<string>(boost::any_cast<string>(m["FilterExpression"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~CreateCostCenterRuleShrinkRequest() = default;
};
class CreateCostCenterRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  CreateCostCenterRuleResponseBody() {}

  explicit CreateCostCenterRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCostCenterRuleResponseBody() = default;
};
class CreateCostCenterRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCostCenterRuleResponseBody> body{};

  CreateCostCenterRuleResponse() {}

  explicit CreateCostCenterRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCostCenterRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCostCenterRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCostCenterRuleResponse() = default;
};
class CreateFundAccountPayRelationRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  CreateFundAccountPayRelationRequestEcIdAccountIds() {}

  explicit CreateFundAccountPayRelationRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~CreateFundAccountPayRelationRequestEcIdAccountIds() = default;
};
class CreateFundAccountPayRelationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateFundAccountPayRelationRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> nbid{};

  CreateFundAccountPayRelationRequest() {}

  explicit CreateFundAccountPayRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<CreateFundAccountPayRelationRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFundAccountPayRelationRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<CreateFundAccountPayRelationRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~CreateFundAccountPayRelationRequest() = default;
};
class CreateFundAccountPayRelationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> nbid{};

  CreateFundAccountPayRelationShrinkRequest() {}

  explicit CreateFundAccountPayRelationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~CreateFundAccountPayRelationShrinkRequest() = default;
};
class CreateFundAccountPayRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> resultMessage{};

  CreateFundAccountPayRelationResponseBodyData() {}

  explicit CreateFundAccountPayRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (resultMessage) {
      res["ResultMessage"] = boost::any(*resultMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("ResultMessage") != m.end() && !m["ResultMessage"].empty()) {
      resultMessage = make_shared<string>(boost::any_cast<string>(m["ResultMessage"]));
    }
  }


  virtual ~CreateFundAccountPayRelationResponseBodyData() = default;
};
class CreateFundAccountPayRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CreateFundAccountPayRelationResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  CreateFundAccountPayRelationResponseBody() {}

  explicit CreateFundAccountPayRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<CreateFundAccountPayRelationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFundAccountPayRelationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<CreateFundAccountPayRelationResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFundAccountPayRelationResponseBody() = default;
};
class CreateFundAccountPayRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFundAccountPayRelationResponseBody> body{};

  CreateFundAccountPayRelationResponse() {}

  explicit CreateFundAccountPayRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFundAccountPayRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFundAccountPayRelationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFundAccountPayRelationResponse() = default;
};
class CreateFundAccountTransferRequest : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> currency{};
  shared_ptr<string> financeType{};
  shared_ptr<long> fromFundAccountId{};
  shared_ptr<string> remark{};
  shared_ptr<long> toFundAccountId{};
  shared_ptr<string> transferType{};

  CreateFundAccountTransferRequest() {}

  explicit CreateFundAccountTransferRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (financeType) {
      res["FinanceType"] = boost::any(*financeType);
    }
    if (fromFundAccountId) {
      res["FromFundAccountId"] = boost::any(*fromFundAccountId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (toFundAccountId) {
      res["ToFundAccountId"] = boost::any(*toFundAccountId);
    }
    if (transferType) {
      res["TransferType"] = boost::any(*transferType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FinanceType") != m.end() && !m["FinanceType"].empty()) {
      financeType = make_shared<string>(boost::any_cast<string>(m["FinanceType"]));
    }
    if (m.find("FromFundAccountId") != m.end() && !m["FromFundAccountId"].empty()) {
      fromFundAccountId = make_shared<long>(boost::any_cast<long>(m["FromFundAccountId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ToFundAccountId") != m.end() && !m["ToFundAccountId"].empty()) {
      toFundAccountId = make_shared<long>(boost::any_cast<long>(m["ToFundAccountId"]));
    }
    if (m.find("TransferType") != m.end() && !m["TransferType"].empty()) {
      transferType = make_shared<string>(boost::any_cast<string>(m["TransferType"]));
    }
  }


  virtual ~CreateFundAccountTransferRequest() = default;
};
class CreateFundAccountTransferResponseBody : public Darabonba::Model {
public:
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  CreateFundAccountTransferResponseBody() {}

  explicit CreateFundAccountTransferResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFundAccountTransferResponseBody() = default;
};
class CreateFundAccountTransferResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFundAccountTransferResponseBody> body{};

  CreateFundAccountTransferResponse() {}

  explicit CreateFundAccountTransferResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFundAccountTransferResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFundAccountTransferResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFundAccountTransferResponse() = default;
};
class CreateInvoiceRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  CreateInvoiceRequestEcIdAccountIds() {}

  explicit CreateInvoiceRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~CreateInvoiceRequestEcIdAccountIds() = default;
};
class CreateInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<vector<CreateInvoiceRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<vector<string>> invoiceCandidateIds{};
  shared_ptr<long> invoiceMode{};
  shared_ptr<string> invoiceRemark{};
  shared_ptr<string> invoiceTitleId{};
  shared_ptr<long> invoiceType{};
  shared_ptr<string> nbid{};
  shared_ptr<vector<string>> recipientEmails{};

  CreateInvoiceRequest() {}

  explicit CreateInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (invoiceCandidateIds) {
      res["InvoiceCandidateIds"] = boost::any(*invoiceCandidateIds);
    }
    if (invoiceMode) {
      res["InvoiceMode"] = boost::any(*invoiceMode);
    }
    if (invoiceRemark) {
      res["InvoiceRemark"] = boost::any(*invoiceRemark);
    }
    if (invoiceTitleId) {
      res["InvoiceTitleId"] = boost::any(*invoiceTitleId);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (recipientEmails) {
      res["RecipientEmails"] = boost::any(*recipientEmails);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<CreateInvoiceRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInvoiceRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<CreateInvoiceRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("InvoiceCandidateIds") != m.end() && !m["InvoiceCandidateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceCandidateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceCandidateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invoiceCandidateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InvoiceMode") != m.end() && !m["InvoiceMode"].empty()) {
      invoiceMode = make_shared<long>(boost::any_cast<long>(m["InvoiceMode"]));
    }
    if (m.find("InvoiceRemark") != m.end() && !m["InvoiceRemark"].empty()) {
      invoiceRemark = make_shared<string>(boost::any_cast<string>(m["InvoiceRemark"]));
    }
    if (m.find("InvoiceTitleId") != m.end() && !m["InvoiceTitleId"].empty()) {
      invoiceTitleId = make_shared<string>(boost::any_cast<string>(m["InvoiceTitleId"]));
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<long>(boost::any_cast<long>(m["InvoiceType"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("RecipientEmails") != m.end() && !m["RecipientEmails"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RecipientEmails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecipientEmails"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      recipientEmails = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateInvoiceRequest() = default;
};
class CreateInvoiceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> invoiceCandidateIdsShrink{};
  shared_ptr<long> invoiceMode{};
  shared_ptr<string> invoiceRemark{};
  shared_ptr<string> invoiceTitleId{};
  shared_ptr<long> invoiceType{};
  shared_ptr<string> nbid{};
  shared_ptr<string> recipientEmailsShrink{};

  CreateInvoiceShrinkRequest() {}

  explicit CreateInvoiceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (invoiceCandidateIdsShrink) {
      res["InvoiceCandidateIds"] = boost::any(*invoiceCandidateIdsShrink);
    }
    if (invoiceMode) {
      res["InvoiceMode"] = boost::any(*invoiceMode);
    }
    if (invoiceRemark) {
      res["InvoiceRemark"] = boost::any(*invoiceRemark);
    }
    if (invoiceTitleId) {
      res["InvoiceTitleId"] = boost::any(*invoiceTitleId);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (recipientEmailsShrink) {
      res["RecipientEmails"] = boost::any(*recipientEmailsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("InvoiceCandidateIds") != m.end() && !m["InvoiceCandidateIds"].empty()) {
      invoiceCandidateIdsShrink = make_shared<string>(boost::any_cast<string>(m["InvoiceCandidateIds"]));
    }
    if (m.find("InvoiceMode") != m.end() && !m["InvoiceMode"].empty()) {
      invoiceMode = make_shared<long>(boost::any_cast<long>(m["InvoiceMode"]));
    }
    if (m.find("InvoiceRemark") != m.end() && !m["InvoiceRemark"].empty()) {
      invoiceRemark = make_shared<string>(boost::any_cast<string>(m["InvoiceRemark"]));
    }
    if (m.find("InvoiceTitleId") != m.end() && !m["InvoiceTitleId"].empty()) {
      invoiceTitleId = make_shared<string>(boost::any_cast<string>(m["InvoiceTitleId"]));
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<long>(boost::any_cast<long>(m["InvoiceType"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("RecipientEmails") != m.end() && !m["RecipientEmails"].empty()) {
      recipientEmailsShrink = make_shared<string>(boost::any_cast<string>(m["RecipientEmails"]));
    }
  }


  virtual ~CreateInvoiceShrinkRequest() = default;
};
class CreateInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> accountId{};
  shared_ptr<string> amount{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> invoiceIssuer{};
  shared_ptr<string> message{};

  CreateInvoiceResponseBodyData() {}

  explicit CreateInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (invoiceIssuer) {
      res["InvoiceIssuer"] = boost::any(*invoiceIssuer);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("InvoiceIssuer") != m.end() && !m["InvoiceIssuer"].empty()) {
      invoiceIssuer = make_shared<string>(boost::any_cast<string>(m["InvoiceIssuer"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~CreateInvoiceResponseBodyData() = default;
};
class CreateInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CreateInvoiceResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  CreateInvoiceResponseBody() {}

  explicit CreateInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<CreateInvoiceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInvoiceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<CreateInvoiceResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInvoiceResponseBody() = default;
};
class CreateInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInvoiceResponseBody> body{};

  CreateInvoiceResponse() {}

  explicit CreateInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInvoiceResponse() = default;
};
class CreateReportDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> beginBillingCycle{};
  shared_ptr<string> mcProject{};
  shared_ptr<string> mcTableName{};
  shared_ptr<string> nbid{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<long> ossBucketOwnerAccountId{};
  shared_ptr<string> ossBucketPath{};
  shared_ptr<string> reportSourceType{};
  shared_ptr<string> reportType{};

  CreateReportDefinitionRequest() {}

  explicit CreateReportDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginBillingCycle) {
      res["BeginBillingCycle"] = boost::any(*beginBillingCycle);
    }
    if (mcProject) {
      res["McProject"] = boost::any(*mcProject);
    }
    if (mcTableName) {
      res["McTableName"] = boost::any(*mcTableName);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossBucketOwnerAccountId) {
      res["OssBucketOwnerAccountId"] = boost::any(*ossBucketOwnerAccountId);
    }
    if (ossBucketPath) {
      res["OssBucketPath"] = boost::any(*ossBucketPath);
    }
    if (reportSourceType) {
      res["ReportSourceType"] = boost::any(*reportSourceType);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginBillingCycle") != m.end() && !m["BeginBillingCycle"].empty()) {
      beginBillingCycle = make_shared<string>(boost::any_cast<string>(m["BeginBillingCycle"]));
    }
    if (m.find("McProject") != m.end() && !m["McProject"].empty()) {
      mcProject = make_shared<string>(boost::any_cast<string>(m["McProject"]));
    }
    if (m.find("McTableName") != m.end() && !m["McTableName"].empty()) {
      mcTableName = make_shared<string>(boost::any_cast<string>(m["McTableName"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssBucketOwnerAccountId") != m.end() && !m["OssBucketOwnerAccountId"].empty()) {
      ossBucketOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["OssBucketOwnerAccountId"]));
    }
    if (m.find("OssBucketPath") != m.end() && !m["OssBucketPath"].empty()) {
      ossBucketPath = make_shared<string>(boost::any_cast<string>(m["OssBucketPath"]));
    }
    if (m.find("ReportSourceType") != m.end() && !m["ReportSourceType"].empty()) {
      reportSourceType = make_shared<string>(boost::any_cast<string>(m["ReportSourceType"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
  }


  virtual ~CreateReportDefinitionRequest() = default;
};
class CreateReportDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> beginBillingCycle{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<long> ossBucketOwnerAccountId{};
  shared_ptr<string> ossBucketPath{};
  shared_ptr<string> reportSourceName{};
  shared_ptr<string> reportSourceType{};
  shared_ptr<long> reportTaskId{};
  shared_ptr<string> reportType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subscribeCreateTime{};

  CreateReportDefinitionResponseBody() {}

  explicit CreateReportDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginBillingCycle) {
      res["BeginBillingCycle"] = boost::any(*beginBillingCycle);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossBucketOwnerAccountId) {
      res["OssBucketOwnerAccountId"] = boost::any(*ossBucketOwnerAccountId);
    }
    if (ossBucketPath) {
      res["OssBucketPath"] = boost::any(*ossBucketPath);
    }
    if (reportSourceName) {
      res["ReportSourceName"] = boost::any(*reportSourceName);
    }
    if (reportSourceType) {
      res["ReportSourceType"] = boost::any(*reportSourceType);
    }
    if (reportTaskId) {
      res["ReportTaskId"] = boost::any(*reportTaskId);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscribeCreateTime) {
      res["SubscribeCreateTime"] = boost::any(*subscribeCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginBillingCycle") != m.end() && !m["BeginBillingCycle"].empty()) {
      beginBillingCycle = make_shared<string>(boost::any_cast<string>(m["BeginBillingCycle"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssBucketOwnerAccountId") != m.end() && !m["OssBucketOwnerAccountId"].empty()) {
      ossBucketOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["OssBucketOwnerAccountId"]));
    }
    if (m.find("OssBucketPath") != m.end() && !m["OssBucketPath"].empty()) {
      ossBucketPath = make_shared<string>(boost::any_cast<string>(m["OssBucketPath"]));
    }
    if (m.find("ReportSourceName") != m.end() && !m["ReportSourceName"].empty()) {
      reportSourceName = make_shared<string>(boost::any_cast<string>(m["ReportSourceName"]));
    }
    if (m.find("ReportSourceType") != m.end() && !m["ReportSourceType"].empty()) {
      reportSourceType = make_shared<string>(boost::any_cast<string>(m["ReportSourceType"]));
    }
    if (m.find("ReportTaskId") != m.end() && !m["ReportTaskId"].empty()) {
      reportTaskId = make_shared<long>(boost::any_cast<long>(m["ReportTaskId"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscribeCreateTime") != m.end() && !m["SubscribeCreateTime"].empty()) {
      subscribeCreateTime = make_shared<string>(boost::any_cast<string>(m["SubscribeCreateTime"]));
    }
  }


  virtual ~CreateReportDefinitionResponseBody() = default;
};
class CreateReportDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateReportDefinitionResponseBody> body{};

  CreateReportDefinitionResponse() {}

  explicit CreateReportDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateReportDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateReportDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateReportDefinitionResponse() = default;
};
class DeleteCostCenterRequest : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> nbid{};
  shared_ptr<long> ownerAccountId{};

  DeleteCostCenterRequest() {}

  explicit DeleteCostCenterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
  }


  virtual ~DeleteCostCenterRequest() = default;
};
class DeleteCostCenterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<string> requestId{};

  DeleteCostCenterResponseBody() {}

  explicit DeleteCostCenterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCostCenterResponseBody() = default;
};
class DeleteCostCenterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCostCenterResponseBody> body{};

  DeleteCostCenterResponse() {}

  explicit DeleteCostCenterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCostCenterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCostCenterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCostCenterResponse() = default;
};
class DeleteCostCenterRuleRequestFilterExpressionFilterValues : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> codeName{};
  shared_ptr<string> selectType{};
  shared_ptr<vector<string>> values{};

  DeleteCostCenterRuleRequestFilterExpressionFilterValues() {}

  explicit DeleteCostCenterRuleRequestFilterExpressionFilterValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (codeName) {
      res["CodeName"] = boost::any(*codeName);
    }
    if (selectType) {
      res["SelectType"] = boost::any(*selectType);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CodeName") != m.end() && !m["CodeName"].empty()) {
      codeName = make_shared<string>(boost::any_cast<string>(m["CodeName"]));
    }
    if (m.find("SelectType") != m.end() && !m["SelectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["SelectType"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteCostCenterRuleRequestFilterExpressionFilterValues() = default;
};
class DeleteCostCenterRuleRequestFilterExpression : public Darabonba::Model {
public:
  shared_ptr<string> expressionType{};
  shared_ptr<DeleteCostCenterRuleRequestFilterExpressionFilterValues> filterValues{};
  shared_ptr<boost::any> operand{};
  shared_ptr<vector<boost::any>> operands{};
  shared_ptr<string> operatorType{};

  DeleteCostCenterRuleRequestFilterExpression() {}

  explicit DeleteCostCenterRuleRequestFilterExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressionType) {
      res["ExpressionType"] = boost::any(*expressionType);
    }
    if (filterValues) {
      res["FilterValues"] = filterValues ? boost::any(filterValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operand) {
      res["Operand"] = boost::any(*operand);
    }
    if (operands) {
      res["Operands"] = boost::any(*operands);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressionType") != m.end() && !m["ExpressionType"].empty()) {
      expressionType = make_shared<string>(boost::any_cast<string>(m["ExpressionType"]));
    }
    if (m.find("FilterValues") != m.end() && !m["FilterValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterValues"].type()) {
        DeleteCostCenterRuleRequestFilterExpressionFilterValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterValues"]));
        filterValues = make_shared<DeleteCostCenterRuleRequestFilterExpressionFilterValues>(model1);
      }
    }
    if (m.find("Operand") != m.end() && !m["Operand"].empty()) {
      operand = make_shared<boost::any>(boost::any_cast<boost::any>(m["Operand"]));
    }
    if (m.find("Operands") != m.end() && !m["Operands"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Operands"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Operands"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      operands = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<string>(boost::any_cast<string>(m["OperatorType"]));
    }
  }


  virtual ~DeleteCostCenterRuleRequestFilterExpression() = default;
};
class DeleteCostCenterRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<DeleteCostCenterRuleRequestFilterExpression> filterExpression{};
  shared_ptr<string> nbid{};

  DeleteCostCenterRuleRequest() {}

  explicit DeleteCostCenterRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (filterExpression) {
      res["FilterExpression"] = filterExpression ? boost::any(filterExpression->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("FilterExpression") != m.end() && !m["FilterExpression"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterExpression"].type()) {
        DeleteCostCenterRuleRequestFilterExpression model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterExpression"]));
        filterExpression = make_shared<DeleteCostCenterRuleRequestFilterExpression>(model1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~DeleteCostCenterRuleRequest() = default;
};
class DeleteCostCenterRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> filterExpressionShrink{};
  shared_ptr<string> nbid{};

  DeleteCostCenterRuleShrinkRequest() {}

  explicit DeleteCostCenterRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (filterExpressionShrink) {
      res["FilterExpression"] = boost::any(*filterExpressionShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("FilterExpression") != m.end() && !m["FilterExpression"].empty()) {
      filterExpressionShrink = make_shared<string>(boost::any_cast<string>(m["FilterExpression"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~DeleteCostCenterRuleShrinkRequest() = default;
};
class DeleteCostCenterRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  DeleteCostCenterRuleResponseBody() {}

  explicit DeleteCostCenterRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCostCenterRuleResponseBody() = default;
};
class DeleteCostCenterRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCostCenterRuleResponseBody> body{};

  DeleteCostCenterRuleResponse() {}

  explicit DeleteCostCenterRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCostCenterRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCostCenterRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCostCenterRuleResponse() = default;
};
class DeleteCouponDeductTagRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  DeleteCouponDeductTagRequestEcIdAccountIds() {}

  explicit DeleteCouponDeductTagRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~DeleteCouponDeductTagRequestEcIdAccountIds() = default;
};
class DeleteCouponDeductTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<vector<DeleteCouponDeductTagRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};
  shared_ptr<vector<string>> tagKeys{};

  DeleteCouponDeductTagRequest() {}

  explicit DeleteCouponDeductTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<DeleteCouponDeductTagRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteCouponDeductTagRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<DeleteCouponDeductTagRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteCouponDeductTagRequest() = default;
};
class DeleteCouponDeductTagShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<string> tagKeysShrink{};

  DeleteCouponDeductTagShrinkRequest() {}

  explicit DeleteCouponDeductTagShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (tagKeysShrink) {
      res["TagKeys"] = boost::any(*tagKeysShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      tagKeysShrink = make_shared<string>(boost::any_cast<string>(m["TagKeys"]));
    }
  }


  virtual ~DeleteCouponDeductTagShrinkRequest() = default;
};
class DeleteCouponDeductTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteCouponDeductTagResponseBody() {}

  explicit DeleteCouponDeductTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCouponDeductTagResponseBody() = default;
};
class DeleteCouponDeductTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCouponDeductTagResponseBody> body{};

  DeleteCouponDeductTagResponse() {}

  explicit DeleteCouponDeductTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCouponDeductTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCouponDeductTagResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCouponDeductTagResponse() = default;
};
class DeleteReportDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> nbid{};
  shared_ptr<long> reportTaskId{};

  DeleteReportDefinitionRequest() {}

  explicit DeleteReportDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (reportTaskId) {
      res["ReportTaskId"] = boost::any(*reportTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("ReportTaskId") != m.end() && !m["ReportTaskId"].empty()) {
      reportTaskId = make_shared<long>(boost::any_cast<long>(m["ReportTaskId"]));
    }
  }


  virtual ~DeleteReportDefinitionRequest() = default;
};
class DeleteReportDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  DeleteReportDefinitionResponseBody() {}

  explicit DeleteReportDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteReportDefinitionResponseBody() = default;
};
class DeleteReportDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteReportDefinitionResponseBody> body{};

  DeleteReportDefinitionResponse() {}

  explicit DeleteReportDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteReportDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteReportDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteReportDefinitionResponse() = default;
};
class DescribeCouponRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  DescribeCouponRequestEcIdAccountIds() {}

  explicit DescribeCouponRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~DescribeCouponRequestEcIdAccountIds() = default;
};
class DescribeCouponRequest : public Darabonba::Model {
public:
  shared_ptr<long> couponId{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> couponType{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCouponRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<long> effectiveEndTime{};
  shared_ptr<long> effectiveStartTime{};
  shared_ptr<long> expireEndDate{};
  shared_ptr<long> expireStartDate{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  DescribeCouponRequest() {}

  explicit DescribeCouponRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (couponType) {
      res["CouponType"] = boost::any(*couponType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (effectiveEndTime) {
      res["EffectiveEndTime"] = boost::any(*effectiveEndTime);
    }
    if (effectiveStartTime) {
      res["EffectiveStartTime"] = boost::any(*effectiveStartTime);
    }
    if (expireEndDate) {
      res["ExpireEndDate"] = boost::any(*expireEndDate);
    }
    if (expireStartDate) {
      res["ExpireStartDate"] = boost::any(*expireStartDate);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("CouponType") != m.end() && !m["CouponType"].empty()) {
      couponType = make_shared<string>(boost::any_cast<string>(m["CouponType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<DescribeCouponRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<DescribeCouponRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("EffectiveEndTime") != m.end() && !m["EffectiveEndTime"].empty()) {
      effectiveEndTime = make_shared<long>(boost::any_cast<long>(m["EffectiveEndTime"]));
    }
    if (m.find("EffectiveStartTime") != m.end() && !m["EffectiveStartTime"].empty()) {
      effectiveStartTime = make_shared<long>(boost::any_cast<long>(m["EffectiveStartTime"]));
    }
    if (m.find("ExpireEndDate") != m.end() && !m["ExpireEndDate"].empty()) {
      expireEndDate = make_shared<long>(boost::any_cast<long>(m["ExpireEndDate"]));
    }
    if (m.find("ExpireStartDate") != m.end() && !m["ExpireStartDate"].empty()) {
      expireStartDate = make_shared<long>(boost::any_cast<long>(m["ExpireStartDate"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCouponRequest() = default;
};
class DescribeCouponShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> couponId{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> couponType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<long> effectiveEndTime{};
  shared_ptr<long> effectiveStartTime{};
  shared_ptr<long> expireEndDate{};
  shared_ptr<long> expireStartDate{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  DescribeCouponShrinkRequest() {}

  explicit DescribeCouponShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (couponType) {
      res["CouponType"] = boost::any(*couponType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (effectiveEndTime) {
      res["EffectiveEndTime"] = boost::any(*effectiveEndTime);
    }
    if (effectiveStartTime) {
      res["EffectiveStartTime"] = boost::any(*effectiveStartTime);
    }
    if (expireEndDate) {
      res["ExpireEndDate"] = boost::any(*expireEndDate);
    }
    if (expireStartDate) {
      res["ExpireStartDate"] = boost::any(*expireStartDate);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("CouponType") != m.end() && !m["CouponType"].empty()) {
      couponType = make_shared<string>(boost::any_cast<string>(m["CouponType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("EffectiveEndTime") != m.end() && !m["EffectiveEndTime"].empty()) {
      effectiveEndTime = make_shared<long>(boost::any_cast<long>(m["EffectiveEndTime"]));
    }
    if (m.find("EffectiveStartTime") != m.end() && !m["EffectiveStartTime"].empty()) {
      effectiveStartTime = make_shared<long>(boost::any_cast<long>(m["EffectiveStartTime"]));
    }
    if (m.find("ExpireEndDate") != m.end() && !m["ExpireEndDate"].empty()) {
      expireEndDate = make_shared<long>(boost::any_cast<long>(m["ExpireEndDate"]));
    }
    if (m.find("ExpireStartDate") != m.end() && !m["ExpireStartDate"].empty()) {
      expireStartDate = make_shared<long>(boost::any_cast<long>(m["ExpireStartDate"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCouponShrinkRequest() = default;
};
class DescribeCouponResponseBodyDataShareUidList : public Darabonba::Model {
public:
  shared_ptr<string> uid{};
  shared_ptr<string> userNick{};

  DescribeCouponResponseBodyDataShareUidList() {}

  explicit DescribeCouponResponseBodyDataShareUidList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
  }


  virtual ~DescribeCouponResponseBodyDataShareUidList() = default;
};
class DescribeCouponResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> certainAmount{};
  shared_ptr<long> couponId{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> couponType{};
  shared_ptr<string> couponTypeName{};
  shared_ptr<string> currency{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<vector<string>> itemNames{};
  shared_ptr<string> moneyLimit{};
  shared_ptr<string> orderTimeRule{};
  shared_ptr<string> remainAmount{};
  shared_ptr<string> remark{};
  shared_ptr<vector<DescribeCouponResponseBodyDataShareUidList>> shareUidList{};
  shared_ptr<bool> showSetDeductTagButton{};
  shared_ptr<string> site{};
  shared_ptr<string> siteName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> suitAccount{};
  shared_ptr<string> suitItemType{};
  shared_ptr<string> universalType{};
  shared_ptr<vector<string>> yhOrderTypes{};

  DescribeCouponResponseBodyData() {}

  explicit DescribeCouponResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (certainAmount) {
      res["CertainAmount"] = boost::any(*certainAmount);
    }
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (couponType) {
      res["CouponType"] = boost::any(*couponType);
    }
    if (couponTypeName) {
      res["CouponTypeName"] = boost::any(*couponTypeName);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (itemNames) {
      res["ItemNames"] = boost::any(*itemNames);
    }
    if (moneyLimit) {
      res["MoneyLimit"] = boost::any(*moneyLimit);
    }
    if (orderTimeRule) {
      res["OrderTimeRule"] = boost::any(*orderTimeRule);
    }
    if (remainAmount) {
      res["RemainAmount"] = boost::any(*remainAmount);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (shareUidList) {
      vector<boost::any> temp1;
      for(auto item1:*shareUidList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShareUidList"] = boost::any(temp1);
    }
    if (showSetDeductTagButton) {
      res["ShowSetDeductTagButton"] = boost::any(*showSetDeductTagButton);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (siteName) {
      res["SiteName"] = boost::any(*siteName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (suitAccount) {
      res["SuitAccount"] = boost::any(*suitAccount);
    }
    if (suitItemType) {
      res["SuitItemType"] = boost::any(*suitItemType);
    }
    if (universalType) {
      res["UniversalType"] = boost::any(*universalType);
    }
    if (yhOrderTypes) {
      res["YhOrderTypes"] = boost::any(*yhOrderTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("CertainAmount") != m.end() && !m["CertainAmount"].empty()) {
      certainAmount = make_shared<string>(boost::any_cast<string>(m["CertainAmount"]));
    }
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("CouponType") != m.end() && !m["CouponType"].empty()) {
      couponType = make_shared<string>(boost::any_cast<string>(m["CouponType"]));
    }
    if (m.find("CouponTypeName") != m.end() && !m["CouponTypeName"].empty()) {
      couponTypeName = make_shared<string>(boost::any_cast<string>(m["CouponTypeName"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("ItemNames") != m.end() && !m["ItemNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ItemNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ItemNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      itemNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MoneyLimit") != m.end() && !m["MoneyLimit"].empty()) {
      moneyLimit = make_shared<string>(boost::any_cast<string>(m["MoneyLimit"]));
    }
    if (m.find("OrderTimeRule") != m.end() && !m["OrderTimeRule"].empty()) {
      orderTimeRule = make_shared<string>(boost::any_cast<string>(m["OrderTimeRule"]));
    }
    if (m.find("RemainAmount") != m.end() && !m["RemainAmount"].empty()) {
      remainAmount = make_shared<string>(boost::any_cast<string>(m["RemainAmount"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ShareUidList") != m.end() && !m["ShareUidList"].empty()) {
      if (typeid(vector<boost::any>) == m["ShareUidList"].type()) {
        vector<DescribeCouponResponseBodyDataShareUidList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShareUidList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponResponseBodyDataShareUidList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shareUidList = make_shared<vector<DescribeCouponResponseBodyDataShareUidList>>(expect1);
      }
    }
    if (m.find("ShowSetDeductTagButton") != m.end() && !m["ShowSetDeductTagButton"].empty()) {
      showSetDeductTagButton = make_shared<bool>(boost::any_cast<bool>(m["ShowSetDeductTagButton"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("SiteName") != m.end() && !m["SiteName"].empty()) {
      siteName = make_shared<string>(boost::any_cast<string>(m["SiteName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SuitAccount") != m.end() && !m["SuitAccount"].empty()) {
      suitAccount = make_shared<string>(boost::any_cast<string>(m["SuitAccount"]));
    }
    if (m.find("SuitItemType") != m.end() && !m["SuitItemType"].empty()) {
      suitItemType = make_shared<string>(boost::any_cast<string>(m["SuitItemType"]));
    }
    if (m.find("UniversalType") != m.end() && !m["UniversalType"].empty()) {
      universalType = make_shared<string>(boost::any_cast<string>(m["UniversalType"]));
    }
    if (m.find("YhOrderTypes") != m.end() && !m["YhOrderTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["YhOrderTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["YhOrderTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      yhOrderTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCouponResponseBodyData() = default;
};
class DescribeCouponResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCouponResponseBodyData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCouponResponseBody() {}

  explicit DescribeCouponResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeCouponResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeCouponResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeCouponResponseBody() = default;
};
class DescribeCouponResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCouponResponseBody> body{};

  DescribeCouponResponse() {}

  explicit DescribeCouponResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCouponResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCouponResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCouponResponse() = default;
};
class DescribeCouponItemListRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  DescribeCouponItemListRequestEcIdAccountIds() {}

  explicit DescribeCouponItemListRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~DescribeCouponItemListRequestEcIdAccountIds() = default;
};
class DescribeCouponItemListRequest : public Darabonba::Model {
public:
  shared_ptr<long> couponId{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCouponItemListRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> name{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};

  DescribeCouponItemListRequest() {}

  explicit DescribeCouponItemListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<DescribeCouponItemListRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponItemListRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<DescribeCouponItemListRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeCouponItemListRequest() = default;
};
class DescribeCouponItemListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> couponId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};

  DescribeCouponItemListShrinkRequest() {}

  explicit DescribeCouponItemListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeCouponItemListShrinkRequest() = default;
};
class DescribeCouponItemListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeCouponItemListResponseBodyData() {}

  explicit DescribeCouponItemListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeCouponItemListResponseBodyData() = default;
};
class DescribeCouponItemListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCouponItemListResponseBodyData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCouponItemListResponseBody() {}

  explicit DescribeCouponItemListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeCouponItemListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponItemListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeCouponItemListResponseBodyData>>(expect1);
      }
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


  virtual ~DescribeCouponItemListResponseBody() = default;
};
class DescribeCouponItemListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCouponItemListResponseBody> body{};

  DescribeCouponItemListResponse() {}

  explicit DescribeCouponItemListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCouponItemListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCouponItemListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCouponItemListResponse() = default;
};
class DescribeUserSpnSummaryInfoRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  DescribeUserSpnSummaryInfoRequestEcIdAccountIds() {}

  explicit DescribeUserSpnSummaryInfoRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~DescribeUserSpnSummaryInfoRequestEcIdAccountIds() = default;
};
class DescribeUserSpnSummaryInfoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserSpnSummaryInfoRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};

  DescribeUserSpnSummaryInfoRequest() {}

  explicit DescribeUserSpnSummaryInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<DescribeUserSpnSummaryInfoRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserSpnSummaryInfoRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<DescribeUserSpnSummaryInfoRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~DescribeUserSpnSummaryInfoRequest() = default;
};
class DescribeUserSpnSummaryInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};

  DescribeUserSpnSummaryInfoShrinkRequest() {}

  explicit DescribeUserSpnSummaryInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~DescribeUserSpnSummaryInfoShrinkRequest() = default;
};
class DescribeUserSpnSummaryInfoResponseBodyRegionList : public Darabonba::Model {
public:
  shared_ptr<string> regionCode{};
  shared_ptr<string> regionName{};

  DescribeUserSpnSummaryInfoResponseBodyRegionList() {}

  explicit DescribeUserSpnSummaryInfoResponseBodyRegionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionCode) {
      res["RegionCode"] = boost::any(*regionCode);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionCode") != m.end() && !m["RegionCode"].empty()) {
      regionCode = make_shared<string>(boost::any_cast<string>(m["RegionCode"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~DescribeUserSpnSummaryInfoResponseBodyRegionList() = default;
};
class DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<string> spnCommodityCode{};
  shared_ptr<string> spnType{};
  shared_ptr<string> spnTypeName{};

  DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList() {}

  explicit DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (spnCommodityCode) {
      res["SpnCommodityCode"] = boost::any(*spnCommodityCode);
    }
    if (spnType) {
      res["SpnType"] = boost::any(*spnType);
    }
    if (spnTypeName) {
      res["SpnTypeName"] = boost::any(*spnTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SpnCommodityCode") != m.end() && !m["SpnCommodityCode"].empty()) {
      spnCommodityCode = make_shared<string>(boost::any_cast<string>(m["SpnCommodityCode"]));
    }
    if (m.find("SpnType") != m.end() && !m["SpnType"].empty()) {
      spnType = make_shared<string>(boost::any_cast<string>(m["SpnType"]));
    }
    if (m.find("SpnTypeName") != m.end() && !m["SpnTypeName"].empty()) {
      spnTypeName = make_shared<string>(boost::any_cast<string>(m["SpnTypeName"]));
    }
  }


  virtual ~DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList() = default;
};
class DescribeUserSpnSummaryInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceFamilyList{};
  shared_ptr<vector<DescribeUserSpnSummaryInfoResponseBodyRegionList>> regionList{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList>> spnCodeAndTypeList{};

  DescribeUserSpnSummaryInfoResponseBody() {}

  explicit DescribeUserSpnSummaryInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceFamilyList) {
      res["InstanceFamilyList"] = boost::any(*instanceFamilyList);
    }
    if (regionList) {
      vector<boost::any> temp1;
      for(auto item1:*regionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spnCodeAndTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*spnCodeAndTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpnCodeAndTypeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceFamilyList") != m.end() && !m["InstanceFamilyList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceFamilyList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceFamilyList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceFamilyList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionList") != m.end() && !m["RegionList"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionList"].type()) {
        vector<DescribeUserSpnSummaryInfoResponseBodyRegionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserSpnSummaryInfoResponseBodyRegionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionList = make_shared<vector<DescribeUserSpnSummaryInfoResponseBodyRegionList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpnCodeAndTypeList") != m.end() && !m["SpnCodeAndTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["SpnCodeAndTypeList"].type()) {
        vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpnCodeAndTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spnCodeAndTypeList = make_shared<vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList>>(expect1);
      }
    }
  }


  virtual ~DescribeUserSpnSummaryInfoResponseBody() = default;
};
class DescribeUserSpnSummaryInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserSpnSummaryInfoResponseBody> body{};

  DescribeUserSpnSummaryInfoResponse() {}

  explicit DescribeUserSpnSummaryInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserSpnSummaryInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserSpnSummaryInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserSpnSummaryInfoResponse() = default;
};
class GetFundAccountAvailableAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> fundAccountId{};

  GetFundAccountAvailableAmountRequest() {}

  explicit GetFundAccountAvailableAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountAvailableAmountRequest() = default;
};
class GetFundAccountAvailableAmountResponseBodyExtendLedgerList : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> ledgerName{};
  shared_ptr<string> originalAmount{};

  GetFundAccountAvailableAmountResponseBodyExtendLedgerList() {}

  explicit GetFundAccountAvailableAmountResponseBodyExtendLedgerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (ledgerName) {
      res["LedgerName"] = boost::any(*ledgerName);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("LedgerName") != m.end() && !m["LedgerName"].empty()) {
      ledgerName = make_shared<string>(boost::any_cast<string>(m["LedgerName"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<string>(boost::any_cast<string>(m["OriginalAmount"]));
    }
  }


  virtual ~GetFundAccountAvailableAmountResponseBodyExtendLedgerList() = default;
};
class GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> currency{};

  GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList() {}

  explicit GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
  }


  virtual ~GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList() = default;
};
class GetFundAccountAvailableAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> availableAmount{};
  shared_ptr<string> availableCreditAmount{};
  shared_ptr<string> bankAcceptanceAmount{};
  shared_ptr<string> cashAmount{};
  shared_ptr<string> creditAmount{};
  shared_ptr<string> creditRefundAmount{};
  shared_ptr<bool> creditUser{};
  shared_ptr<string> currency{};
  shared_ptr<string> currentMonthUnclearedAmount{};
  shared_ptr<vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList>> extendLedgerList{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> fundAccountOwnerAccountId{};
  shared_ptr<string> fundAccountStatus{};
  shared_ptr<string> fundAccountType{};
  shared_ptr<string> historyMonthUnclearedAmount{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> negativeBillAmount{};
  shared_ptr<vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList>> originalCashAmountList{};
  shared_ptr<string> quotaAmount{};
  shared_ptr<string> quotaConsumedAmount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> unclearedAmount{};

  GetFundAccountAvailableAmountResponseBody() {}

  explicit GetFundAccountAvailableAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAmount) {
      res["AvailableAmount"] = boost::any(*availableAmount);
    }
    if (availableCreditAmount) {
      res["AvailableCreditAmount"] = boost::any(*availableCreditAmount);
    }
    if (bankAcceptanceAmount) {
      res["BankAcceptanceAmount"] = boost::any(*bankAcceptanceAmount);
    }
    if (cashAmount) {
      res["CashAmount"] = boost::any(*cashAmount);
    }
    if (creditAmount) {
      res["CreditAmount"] = boost::any(*creditAmount);
    }
    if (creditRefundAmount) {
      res["CreditRefundAmount"] = boost::any(*creditRefundAmount);
    }
    if (creditUser) {
      res["CreditUser"] = boost::any(*creditUser);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (currentMonthUnclearedAmount) {
      res["CurrentMonthUnclearedAmount"] = boost::any(*currentMonthUnclearedAmount);
    }
    if (extendLedgerList) {
      vector<boost::any> temp1;
      for(auto item1:*extendLedgerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtendLedgerList"] = boost::any(temp1);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (fundAccountStatus) {
      res["FundAccountStatus"] = boost::any(*fundAccountStatus);
    }
    if (fundAccountType) {
      res["FundAccountType"] = boost::any(*fundAccountType);
    }
    if (historyMonthUnclearedAmount) {
      res["HistoryMonthUnclearedAmount"] = boost::any(*historyMonthUnclearedAmount);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (negativeBillAmount) {
      res["NegativeBillAmount"] = boost::any(*negativeBillAmount);
    }
    if (originalCashAmountList) {
      vector<boost::any> temp1;
      for(auto item1:*originalCashAmountList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OriginalCashAmountList"] = boost::any(temp1);
    }
    if (quotaAmount) {
      res["QuotaAmount"] = boost::any(*quotaAmount);
    }
    if (quotaConsumedAmount) {
      res["QuotaConsumedAmount"] = boost::any(*quotaConsumedAmount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (unclearedAmount) {
      res["UnclearedAmount"] = boost::any(*unclearedAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableAmount") != m.end() && !m["AvailableAmount"].empty()) {
      availableAmount = make_shared<string>(boost::any_cast<string>(m["AvailableAmount"]));
    }
    if (m.find("AvailableCreditAmount") != m.end() && !m["AvailableCreditAmount"].empty()) {
      availableCreditAmount = make_shared<string>(boost::any_cast<string>(m["AvailableCreditAmount"]));
    }
    if (m.find("BankAcceptanceAmount") != m.end() && !m["BankAcceptanceAmount"].empty()) {
      bankAcceptanceAmount = make_shared<string>(boost::any_cast<string>(m["BankAcceptanceAmount"]));
    }
    if (m.find("CashAmount") != m.end() && !m["CashAmount"].empty()) {
      cashAmount = make_shared<string>(boost::any_cast<string>(m["CashAmount"]));
    }
    if (m.find("CreditAmount") != m.end() && !m["CreditAmount"].empty()) {
      creditAmount = make_shared<string>(boost::any_cast<string>(m["CreditAmount"]));
    }
    if (m.find("CreditRefundAmount") != m.end() && !m["CreditRefundAmount"].empty()) {
      creditRefundAmount = make_shared<string>(boost::any_cast<string>(m["CreditRefundAmount"]));
    }
    if (m.find("CreditUser") != m.end() && !m["CreditUser"].empty()) {
      creditUser = make_shared<bool>(boost::any_cast<bool>(m["CreditUser"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("CurrentMonthUnclearedAmount") != m.end() && !m["CurrentMonthUnclearedAmount"].empty()) {
      currentMonthUnclearedAmount = make_shared<string>(boost::any_cast<string>(m["CurrentMonthUnclearedAmount"]));
    }
    if (m.find("ExtendLedgerList") != m.end() && !m["ExtendLedgerList"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtendLedgerList"].type()) {
        vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtendLedgerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFundAccountAvailableAmountResponseBodyExtendLedgerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extendLedgerList = make_shared<vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList>>(expect1);
      }
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("FundAccountStatus") != m.end() && !m["FundAccountStatus"].empty()) {
      fundAccountStatus = make_shared<string>(boost::any_cast<string>(m["FundAccountStatus"]));
    }
    if (m.find("FundAccountType") != m.end() && !m["FundAccountType"].empty()) {
      fundAccountType = make_shared<string>(boost::any_cast<string>(m["FundAccountType"]));
    }
    if (m.find("HistoryMonthUnclearedAmount") != m.end() && !m["HistoryMonthUnclearedAmount"].empty()) {
      historyMonthUnclearedAmount = make_shared<string>(boost::any_cast<string>(m["HistoryMonthUnclearedAmount"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("NegativeBillAmount") != m.end() && !m["NegativeBillAmount"].empty()) {
      negativeBillAmount = make_shared<string>(boost::any_cast<string>(m["NegativeBillAmount"]));
    }
    if (m.find("OriginalCashAmountList") != m.end() && !m["OriginalCashAmountList"].empty()) {
      if (typeid(vector<boost::any>) == m["OriginalCashAmountList"].type()) {
        vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OriginalCashAmountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        originalCashAmountList = make_shared<vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList>>(expect1);
      }
    }
    if (m.find("QuotaAmount") != m.end() && !m["QuotaAmount"].empty()) {
      quotaAmount = make_shared<string>(boost::any_cast<string>(m["QuotaAmount"]));
    }
    if (m.find("QuotaConsumedAmount") != m.end() && !m["QuotaConsumedAmount"].empty()) {
      quotaConsumedAmount = make_shared<string>(boost::any_cast<string>(m["QuotaConsumedAmount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UnclearedAmount") != m.end() && !m["UnclearedAmount"].empty()) {
      unclearedAmount = make_shared<string>(boost::any_cast<string>(m["UnclearedAmount"]));
    }
  }


  virtual ~GetFundAccountAvailableAmountResponseBody() = default;
};
class GetFundAccountAvailableAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountAvailableAmountResponseBody> body{};

  GetFundAccountAvailableAmountResponse() {}

  explicit GetFundAccountAvailableAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFundAccountAvailableAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountAvailableAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountAvailableAmountResponse() = default;
};
class GetFundAccountCanAllocateCreditAmountRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};

  GetFundAccountCanAllocateCreditAmountRequest() {}

  explicit GetFundAccountCanAllocateCreditAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountCanAllocateCreditAmountRequest() = default;
};
class GetFundAccountCanAllocateCreditAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ecid{};
  shared_ptr<string> ecidAllocatedCreditAmount{};
  shared_ptr<string> ecidCreditAmount{};
  shared_ptr<string> fundAccountEcid{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<long> fundAccountOwnerAccountId{};
  shared_ptr<string> maxCanAllocateCreditAmount{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> minCanAllocateCreditAmount{};
  shared_ptr<string> nbid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> site{};

  GetFundAccountCanAllocateCreditAmountResponseBody() {}

  explicit GetFundAccountCanAllocateCreditAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecid) {
      res["Ecid"] = boost::any(*ecid);
    }
    if (ecidAllocatedCreditAmount) {
      res["EcidAllocatedCreditAmount"] = boost::any(*ecidAllocatedCreditAmount);
    }
    if (ecidCreditAmount) {
      res["EcidCreditAmount"] = boost::any(*ecidCreditAmount);
    }
    if (fundAccountEcid) {
      res["FundAccountEcid"] = boost::any(*fundAccountEcid);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (maxCanAllocateCreditAmount) {
      res["MaxCanAllocateCreditAmount"] = boost::any(*maxCanAllocateCreditAmount);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (minCanAllocateCreditAmount) {
      res["MinCanAllocateCreditAmount"] = boost::any(*minCanAllocateCreditAmount);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ecid") != m.end() && !m["Ecid"].empty()) {
      ecid = make_shared<string>(boost::any_cast<string>(m["Ecid"]));
    }
    if (m.find("EcidAllocatedCreditAmount") != m.end() && !m["EcidAllocatedCreditAmount"].empty()) {
      ecidAllocatedCreditAmount = make_shared<string>(boost::any_cast<string>(m["EcidAllocatedCreditAmount"]));
    }
    if (m.find("EcidCreditAmount") != m.end() && !m["EcidCreditAmount"].empty()) {
      ecidCreditAmount = make_shared<string>(boost::any_cast<string>(m["EcidCreditAmount"]));
    }
    if (m.find("FundAccountEcid") != m.end() && !m["FundAccountEcid"].empty()) {
      fundAccountEcid = make_shared<string>(boost::any_cast<string>(m["FundAccountEcid"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("MaxCanAllocateCreditAmount") != m.end() && !m["MaxCanAllocateCreditAmount"].empty()) {
      maxCanAllocateCreditAmount = make_shared<string>(boost::any_cast<string>(m["MaxCanAllocateCreditAmount"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("MinCanAllocateCreditAmount") != m.end() && !m["MinCanAllocateCreditAmount"].empty()) {
      minCanAllocateCreditAmount = make_shared<string>(boost::any_cast<string>(m["MinCanAllocateCreditAmount"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
  }


  virtual ~GetFundAccountCanAllocateCreditAmountResponseBody() = default;
};
class GetFundAccountCanAllocateCreditAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountCanAllocateCreditAmountResponseBody> body{};

  GetFundAccountCanAllocateCreditAmountResponse() {}

  explicit GetFundAccountCanAllocateCreditAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFundAccountCanAllocateCreditAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountCanAllocateCreditAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountCanAllocateCreditAmountResponse() = default;
};
class GetFundAccountCanRecycleAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> recycleFromFundAccountId{};

  GetFundAccountCanRecycleAmountRequest() {}

  explicit GetFundAccountCanRecycleAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (recycleFromFundAccountId) {
      res["RecycleFromFundAccountId"] = boost::any(*recycleFromFundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("RecycleFromFundAccountId") != m.end() && !m["RecycleFromFundAccountId"].empty()) {
      recycleFromFundAccountId = make_shared<string>(boost::any_cast<string>(m["RecycleFromFundAccountId"]));
    }
  }


  virtual ~GetFundAccountCanRecycleAmountRequest() = default;
};
class GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList : public Darabonba::Model {
public:
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<string> fundAccountOwnerAccountId{};
  shared_ptr<string> maxRecyclableAmount{};
  shared_ptr<string> originalTransferRemainAmount{};

  GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList() {}

  explicit GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (maxRecyclableAmount) {
      res["MaxRecyclableAmount"] = boost::any(*maxRecyclableAmount);
    }
    if (originalTransferRemainAmount) {
      res["OriginalTransferRemainAmount"] = boost::any(*originalTransferRemainAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("MaxRecyclableAmount") != m.end() && !m["MaxRecyclableAmount"].empty()) {
      maxRecyclableAmount = make_shared<string>(boost::any_cast<string>(m["MaxRecyclableAmount"]));
    }
    if (m.find("OriginalTransferRemainAmount") != m.end() && !m["OriginalTransferRemainAmount"].empty()) {
      originalTransferRemainAmount = make_shared<string>(boost::any_cast<string>(m["OriginalTransferRemainAmount"]));
    }
  }


  virtual ~GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList() = default;
};
class GetFundAccountCanRecycleAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> availableAmount{};
  shared_ptr<string> currency{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> recycleFromFundAccountId{};
  shared_ptr<vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList>> recycleToFundAccountList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> transferAmount{};

  GetFundAccountCanRecycleAmountResponseBody() {}

  explicit GetFundAccountCanRecycleAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAmount) {
      res["AvailableAmount"] = boost::any(*availableAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (recycleFromFundAccountId) {
      res["RecycleFromFundAccountId"] = boost::any(*recycleFromFundAccountId);
    }
    if (recycleToFundAccountList) {
      vector<boost::any> temp1;
      for(auto item1:*recycleToFundAccountList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecycleToFundAccountList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transferAmount) {
      res["TransferAmount"] = boost::any(*transferAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableAmount") != m.end() && !m["AvailableAmount"].empty()) {
      availableAmount = make_shared<string>(boost::any_cast<string>(m["AvailableAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RecycleFromFundAccountId") != m.end() && !m["RecycleFromFundAccountId"].empty()) {
      recycleFromFundAccountId = make_shared<string>(boost::any_cast<string>(m["RecycleFromFundAccountId"]));
    }
    if (m.find("RecycleToFundAccountList") != m.end() && !m["RecycleToFundAccountList"].empty()) {
      if (typeid(vector<boost::any>) == m["RecycleToFundAccountList"].type()) {
        vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecycleToFundAccountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recycleToFundAccountList = make_shared<vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransferAmount") != m.end() && !m["TransferAmount"].empty()) {
      transferAmount = make_shared<string>(boost::any_cast<string>(m["TransferAmount"]));
    }
  }


  virtual ~GetFundAccountCanRecycleAmountResponseBody() = default;
};
class GetFundAccountCanRecycleAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountCanRecycleAmountResponseBody> body{};

  GetFundAccountCanRecycleAmountResponse() {}

  explicit GetFundAccountCanRecycleAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFundAccountCanRecycleAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountCanRecycleAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountCanRecycleAmountResponse() = default;
};
class GetFundAccountCanTransferAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> fundAccountId{};

  GetFundAccountCanTransferAmountRequest() {}

  explicit GetFundAccountCanTransferAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountCanTransferAmountRequest() = default;
};
class GetFundAccountCanTransferAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> availableAmount{};
  shared_ptr<string> cashAmount{};
  shared_ptr<string> currency{};
  shared_ptr<string> fundAccountEcid{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<long> fundAccountOwnerAccountId{};
  shared_ptr<string> maxTransferableAmount{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> nbid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> site{};
  shared_ptr<string> transferAmount{};

  GetFundAccountCanTransferAmountResponseBody() {}

  explicit GetFundAccountCanTransferAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAmount) {
      res["AvailableAmount"] = boost::any(*availableAmount);
    }
    if (cashAmount) {
      res["CashAmount"] = boost::any(*cashAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (fundAccountEcid) {
      res["FundAccountEcid"] = boost::any(*fundAccountEcid);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (maxTransferableAmount) {
      res["MaxTransferableAmount"] = boost::any(*maxTransferableAmount);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (transferAmount) {
      res["TransferAmount"] = boost::any(*transferAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableAmount") != m.end() && !m["AvailableAmount"].empty()) {
      availableAmount = make_shared<string>(boost::any_cast<string>(m["AvailableAmount"]));
    }
    if (m.find("CashAmount") != m.end() && !m["CashAmount"].empty()) {
      cashAmount = make_shared<string>(boost::any_cast<string>(m["CashAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FundAccountEcid") != m.end() && !m["FundAccountEcid"].empty()) {
      fundAccountEcid = make_shared<string>(boost::any_cast<string>(m["FundAccountEcid"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("MaxTransferableAmount") != m.end() && !m["MaxTransferableAmount"].empty()) {
      maxTransferableAmount = make_shared<string>(boost::any_cast<string>(m["MaxTransferableAmount"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("TransferAmount") != m.end() && !m["TransferAmount"].empty()) {
      transferAmount = make_shared<string>(boost::any_cast<string>(m["TransferAmount"]));
    }
  }


  virtual ~GetFundAccountCanTransferAmountResponseBody() = default;
};
class GetFundAccountCanTransferAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountCanTransferAmountResponseBody> body{};

  GetFundAccountCanTransferAmountResponse() {}

  explicit GetFundAccountCanTransferAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFundAccountCanTransferAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountCanTransferAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountCanTransferAmountResponse() = default;
};
class GetFundAccountCanWithdrawAmountRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};

  GetFundAccountCanWithdrawAmountRequest() {}

  explicit GetFundAccountCanWithdrawAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountCanWithdrawAmountRequest() = default;
};
class GetFundAccountCanWithdrawAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> canOriginalWithdrawAmount{};
  shared_ptr<string> canWithdrawAmount{};
  shared_ptr<string> cannotOriginalWithdrawAmount{};
  shared_ptr<string> cashAmount{};
  shared_ptr<string> creditMemoAmount{};
  shared_ptr<string> currentMonthUnclearedAmount{};
  shared_ptr<string> historyMonthUnclearedAmount{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> payAsYouGoReversedAmount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> transferAmount{};

  GetFundAccountCanWithdrawAmountResponseBody() {}

  explicit GetFundAccountCanWithdrawAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canOriginalWithdrawAmount) {
      res["CanOriginalWithdrawAmount"] = boost::any(*canOriginalWithdrawAmount);
    }
    if (canWithdrawAmount) {
      res["CanWithdrawAmount"] = boost::any(*canWithdrawAmount);
    }
    if (cannotOriginalWithdrawAmount) {
      res["CannotOriginalWithdrawAmount"] = boost::any(*cannotOriginalWithdrawAmount);
    }
    if (cashAmount) {
      res["CashAmount"] = boost::any(*cashAmount);
    }
    if (creditMemoAmount) {
      res["CreditMemoAmount"] = boost::any(*creditMemoAmount);
    }
    if (currentMonthUnclearedAmount) {
      res["CurrentMonthUnclearedAmount"] = boost::any(*currentMonthUnclearedAmount);
    }
    if (historyMonthUnclearedAmount) {
      res["HistoryMonthUnclearedAmount"] = boost::any(*historyMonthUnclearedAmount);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (payAsYouGoReversedAmount) {
      res["PayAsYouGoReversedAmount"] = boost::any(*payAsYouGoReversedAmount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transferAmount) {
      res["TransferAmount"] = boost::any(*transferAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanOriginalWithdrawAmount") != m.end() && !m["CanOriginalWithdrawAmount"].empty()) {
      canOriginalWithdrawAmount = make_shared<string>(boost::any_cast<string>(m["CanOriginalWithdrawAmount"]));
    }
    if (m.find("CanWithdrawAmount") != m.end() && !m["CanWithdrawAmount"].empty()) {
      canWithdrawAmount = make_shared<string>(boost::any_cast<string>(m["CanWithdrawAmount"]));
    }
    if (m.find("CannotOriginalWithdrawAmount") != m.end() && !m["CannotOriginalWithdrawAmount"].empty()) {
      cannotOriginalWithdrawAmount = make_shared<string>(boost::any_cast<string>(m["CannotOriginalWithdrawAmount"]));
    }
    if (m.find("CashAmount") != m.end() && !m["CashAmount"].empty()) {
      cashAmount = make_shared<string>(boost::any_cast<string>(m["CashAmount"]));
    }
    if (m.find("CreditMemoAmount") != m.end() && !m["CreditMemoAmount"].empty()) {
      creditMemoAmount = make_shared<string>(boost::any_cast<string>(m["CreditMemoAmount"]));
    }
    if (m.find("CurrentMonthUnclearedAmount") != m.end() && !m["CurrentMonthUnclearedAmount"].empty()) {
      currentMonthUnclearedAmount = make_shared<string>(boost::any_cast<string>(m["CurrentMonthUnclearedAmount"]));
    }
    if (m.find("HistoryMonthUnclearedAmount") != m.end() && !m["HistoryMonthUnclearedAmount"].empty()) {
      historyMonthUnclearedAmount = make_shared<string>(boost::any_cast<string>(m["HistoryMonthUnclearedAmount"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("PayAsYouGoReversedAmount") != m.end() && !m["PayAsYouGoReversedAmount"].empty()) {
      payAsYouGoReversedAmount = make_shared<string>(boost::any_cast<string>(m["PayAsYouGoReversedAmount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransferAmount") != m.end() && !m["TransferAmount"].empty()) {
      transferAmount = make_shared<string>(boost::any_cast<string>(m["TransferAmount"]));
    }
  }


  virtual ~GetFundAccountCanWithdrawAmountResponseBody() = default;
};
class GetFundAccountCanWithdrawAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountCanWithdrawAmountResponseBody> body{};

  GetFundAccountCanWithdrawAmountResponse() {}

  explicit GetFundAccountCanWithdrawAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFundAccountCanWithdrawAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountCanWithdrawAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountCanWithdrawAmountResponse() = default;
};
class GetFundAccountLowAvailableAmountAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};

  GetFundAccountLowAvailableAmountAlarmRequest() {}

  explicit GetFundAccountLowAvailableAmountAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountLowAvailableAmountAlarmRequest() = default;
};
class GetFundAccountLowAvailableAmountAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> alarmEnabled{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};
  shared_ptr<string> thresholdAmount{};

  GetFundAccountLowAvailableAmountAlarmResponseBody() {}

  explicit GetFundAccountLowAvailableAmountAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmEnabled) {
      res["AlarmEnabled"] = boost::any(*alarmEnabled);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (thresholdAmount) {
      res["ThresholdAmount"] = boost::any(*thresholdAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmEnabled") != m.end() && !m["AlarmEnabled"].empty()) {
      alarmEnabled = make_shared<bool>(boost::any_cast<bool>(m["AlarmEnabled"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ThresholdAmount") != m.end() && !m["ThresholdAmount"].empty()) {
      thresholdAmount = make_shared<string>(boost::any_cast<string>(m["ThresholdAmount"]));
    }
  }


  virtual ~GetFundAccountLowAvailableAmountAlarmResponseBody() = default;
};
class GetFundAccountLowAvailableAmountAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountLowAvailableAmountAlarmResponseBody> body{};

  GetFundAccountLowAvailableAmountAlarmResponse() {}

  explicit GetFundAccountLowAvailableAmountAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFundAccountLowAvailableAmountAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountLowAvailableAmountAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountLowAvailableAmountAlarmResponse() = default;
};
class GetFundAccountTransactionDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> billNumber{};
  shared_ptr<string> channelTransactionNumber{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<vector<string>> transactionChannelList{};
  shared_ptr<string> transactionDirection{};
  shared_ptr<long> transactionNumber{};
  shared_ptr<string> transactionType{};
  shared_ptr<vector<string>> transactionTypeList{};

  GetFundAccountTransactionDetailsRequest() {}

  explicit GetFundAccountTransactionDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billNumber) {
      res["BillNumber"] = boost::any(*billNumber);
    }
    if (channelTransactionNumber) {
      res["ChannelTransactionNumber"] = boost::any(*channelTransactionNumber);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (transactionChannelList) {
      res["TransactionChannelList"] = boost::any(*transactionChannelList);
    }
    if (transactionDirection) {
      res["TransactionDirection"] = boost::any(*transactionDirection);
    }
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    if (transactionTypeList) {
      res["TransactionTypeList"] = boost::any(*transactionTypeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillNumber") != m.end() && !m["BillNumber"].empty()) {
      billNumber = make_shared<string>(boost::any_cast<string>(m["BillNumber"]));
    }
    if (m.find("ChannelTransactionNumber") != m.end() && !m["ChannelTransactionNumber"].empty()) {
      channelTransactionNumber = make_shared<string>(boost::any_cast<string>(m["ChannelTransactionNumber"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TransactionChannelList") != m.end() && !m["TransactionChannelList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TransactionChannelList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TransactionChannelList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      transactionChannelList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TransactionDirection") != m.end() && !m["TransactionDirection"].empty()) {
      transactionDirection = make_shared<string>(boost::any_cast<string>(m["TransactionDirection"]));
    }
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<long>(boost::any_cast<long>(m["TransactionNumber"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
    if (m.find("TransactionTypeList") != m.end() && !m["TransactionTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TransactionTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TransactionTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      transactionTypeList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetFundAccountTransactionDetailsRequest() = default;
};
class GetFundAccountTransactionDetailsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> billNumber{};
  shared_ptr<string> channelTransactionNumber{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<string> transactionChannelListShrink{};
  shared_ptr<string> transactionDirection{};
  shared_ptr<long> transactionNumber{};
  shared_ptr<string> transactionType{};
  shared_ptr<string> transactionTypeListShrink{};

  GetFundAccountTransactionDetailsShrinkRequest() {}

  explicit GetFundAccountTransactionDetailsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billNumber) {
      res["BillNumber"] = boost::any(*billNumber);
    }
    if (channelTransactionNumber) {
      res["ChannelTransactionNumber"] = boost::any(*channelTransactionNumber);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (transactionChannelListShrink) {
      res["TransactionChannelList"] = boost::any(*transactionChannelListShrink);
    }
    if (transactionDirection) {
      res["TransactionDirection"] = boost::any(*transactionDirection);
    }
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    if (transactionTypeListShrink) {
      res["TransactionTypeList"] = boost::any(*transactionTypeListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillNumber") != m.end() && !m["BillNumber"].empty()) {
      billNumber = make_shared<string>(boost::any_cast<string>(m["BillNumber"]));
    }
    if (m.find("ChannelTransactionNumber") != m.end() && !m["ChannelTransactionNumber"].empty()) {
      channelTransactionNumber = make_shared<string>(boost::any_cast<string>(m["ChannelTransactionNumber"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TransactionChannelList") != m.end() && !m["TransactionChannelList"].empty()) {
      transactionChannelListShrink = make_shared<string>(boost::any_cast<string>(m["TransactionChannelList"]));
    }
    if (m.find("TransactionDirection") != m.end() && !m["TransactionDirection"].empty()) {
      transactionDirection = make_shared<string>(boost::any_cast<string>(m["TransactionDirection"]));
    }
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<long>(boost::any_cast<long>(m["TransactionNumber"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
    if (m.find("TransactionTypeList") != m.end() && !m["TransactionTypeList"].empty()) {
      transactionTypeListShrink = make_shared<string>(boost::any_cast<string>(m["TransactionTypeList"]));
    }
  }


  virtual ~GetFundAccountTransactionDetailsShrinkRequest() = default;
};
class GetFundAccountTransactionDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> balance{};
  shared_ptr<string> billNumber{};
  shared_ptr<string> channelTransactionNumber{};
  shared_ptr<string> currency{};
  shared_ptr<string> fundAccountEcid{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<long> fundAccountOwnerAccountId{};
  shared_ptr<string> fundType{};
  shared_ptr<string> nbid{};
  shared_ptr<string> remark{};
  shared_ptr<string> site{};
  shared_ptr<string> transactionAccount{};
  shared_ptr<string> transactionAmount{};
  shared_ptr<string> transactionChannel{};
  shared_ptr<string> transactionDirection{};
  shared_ptr<long> transactionNumber{};
  shared_ptr<string> transactionTime{};
  shared_ptr<string> transactionType{};

  GetFundAccountTransactionDetailsResponseBodyData() {}

  explicit GetFundAccountTransactionDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (billNumber) {
      res["BillNumber"] = boost::any(*billNumber);
    }
    if (channelTransactionNumber) {
      res["ChannelTransactionNumber"] = boost::any(*channelTransactionNumber);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (fundAccountEcid) {
      res["FundAccountEcid"] = boost::any(*fundAccountEcid);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (fundType) {
      res["FundType"] = boost::any(*fundType);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (transactionAccount) {
      res["TransactionAccount"] = boost::any(*transactionAccount);
    }
    if (transactionAmount) {
      res["TransactionAmount"] = boost::any(*transactionAmount);
    }
    if (transactionChannel) {
      res["TransactionChannel"] = boost::any(*transactionChannel);
    }
    if (transactionDirection) {
      res["TransactionDirection"] = boost::any(*transactionDirection);
    }
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (transactionTime) {
      res["TransactionTime"] = boost::any(*transactionTime);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<string>(boost::any_cast<string>(m["Balance"]));
    }
    if (m.find("BillNumber") != m.end() && !m["BillNumber"].empty()) {
      billNumber = make_shared<string>(boost::any_cast<string>(m["BillNumber"]));
    }
    if (m.find("ChannelTransactionNumber") != m.end() && !m["ChannelTransactionNumber"].empty()) {
      channelTransactionNumber = make_shared<string>(boost::any_cast<string>(m["ChannelTransactionNumber"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FundAccountEcid") != m.end() && !m["FundAccountEcid"].empty()) {
      fundAccountEcid = make_shared<string>(boost::any_cast<string>(m["FundAccountEcid"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("FundType") != m.end() && !m["FundType"].empty()) {
      fundType = make_shared<string>(boost::any_cast<string>(m["FundType"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("TransactionAccount") != m.end() && !m["TransactionAccount"].empty()) {
      transactionAccount = make_shared<string>(boost::any_cast<string>(m["TransactionAccount"]));
    }
    if (m.find("TransactionAmount") != m.end() && !m["TransactionAmount"].empty()) {
      transactionAmount = make_shared<string>(boost::any_cast<string>(m["TransactionAmount"]));
    }
    if (m.find("TransactionChannel") != m.end() && !m["TransactionChannel"].empty()) {
      transactionChannel = make_shared<string>(boost::any_cast<string>(m["TransactionChannel"]));
    }
    if (m.find("TransactionDirection") != m.end() && !m["TransactionDirection"].empty()) {
      transactionDirection = make_shared<string>(boost::any_cast<string>(m["TransactionDirection"]));
    }
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<long>(boost::any_cast<long>(m["TransactionNumber"]));
    }
    if (m.find("TransactionTime") != m.end() && !m["TransactionTime"].empty()) {
      transactionTime = make_shared<string>(boost::any_cast<string>(m["TransactionTime"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
  }


  virtual ~GetFundAccountTransactionDetailsResponseBodyData() = default;
};
class GetFundAccountTransactionDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<GetFundAccountTransactionDetailsResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetFundAccountTransactionDetailsResponseBody() {}

  explicit GetFundAccountTransactionDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetFundAccountTransactionDetailsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFundAccountTransactionDetailsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetFundAccountTransactionDetailsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
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


  virtual ~GetFundAccountTransactionDetailsResponseBody() = default;
};
class GetFundAccountTransactionDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountTransactionDetailsResponseBody> body{};

  GetFundAccountTransactionDetailsResponse() {}

  explicit GetFundAccountTransactionDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFundAccountTransactionDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountTransactionDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountTransactionDetailsResponse() = default;
};
class GetOrderDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> memberUid{};
  shared_ptr<string> orderId{};
  shared_ptr<long> ownerId{};

  GetOrderDetailRequest() {}

  explicit GetOrderDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~GetOrderDetailRequest() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties : public Darabonba::Model {
public:
  shared_ptr<string> attrApiCode{};
  shared_ptr<string> moduleApiCode{};
  shared_ptr<string> value{};

  GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attrApiCode) {
      res["AttrApiCode"] = boost::any(*attrApiCode);
    }
    if (moduleApiCode) {
      res["ModuleApiCode"] = boost::any(*moduleApiCode);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttrApiCode") != m.end() && !m["AttrApiCode"].empty()) {
      attrApiCode = make_shared<string>(boost::any_cast<string>(m["AttrApiCode"]));
    }
    if (m.find("ModuleApiCode") != m.end() && !m["ModuleApiCode"].empty()) {
      moduleApiCode = make_shared<string>(boost::any_cast<string>(m["ModuleApiCode"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties : public Darabonba::Model {
public:
  shared_ptr<vector<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties>> billModuleProperties{};

  GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billModuleProperties) {
      vector<boost::any> temp1;
      for(auto item1:*billModuleProperties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["billModuleProperties"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billModuleProperties") != m.end() && !m["billModuleProperties"].empty()) {
      if (typeid(vector<boost::any>) == m["billModuleProperties"].type()) {
        vector<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["billModuleProperties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        billModuleProperties = make_shared<vector<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModulePropertiesBillModuleProperties>>(expect1);
      }
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig : public Darabonba::Model {
public:
  shared_ptr<string> apiCode{};
  shared_ptr<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties> billModuleProperties{};
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiCode) {
      res["ApiCode"] = boost::any(*apiCode);
    }
    if (billModuleProperties) {
      res["BillModuleProperties"] = billModuleProperties ? boost::any(billModuleProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiCode") != m.end() && !m["ApiCode"].empty()) {
      apiCode = make_shared<string>(boost::any_cast<string>(m["ApiCode"]));
    }
    if (m.find("BillModuleProperties") != m.end() && !m["BillModuleProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["BillModuleProperties"].type()) {
        GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BillModuleProperties"]));
        billModuleProperties = make_shared<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfigBillModuleProperties>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig : public Darabonba::Model {
public:
  shared_ptr<vector<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig>> billModuleConfig{};

  GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billModuleConfig) {
      vector<boost::any> temp1;
      for(auto item1:*billModuleConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["billModuleConfig"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billModuleConfig") != m.end() && !m["billModuleConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["billModuleConfig"].type()) {
        vector<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["billModuleConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        billModuleConfig = make_shared<vector<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfigBillModuleConfig>>(expect1);
      }
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModulePropertiesModuleProperties : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModulePropertiesModuleProperties() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModulePropertiesModuleProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModulePropertiesModuleProperties() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties : public Darabonba::Model {
public:
  shared_ptr<vector<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModulePropertiesModuleProperties>> moduleProperties{};

  GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleProperties) {
      vector<boost::any> temp1;
      for(auto item1:*moduleProperties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["moduleProperties"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("moduleProperties") != m.end() && !m["moduleProperties"].empty()) {
      if (typeid(vector<boost::any>) == m["moduleProperties"].type()) {
        vector<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModulePropertiesModuleProperties> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["moduleProperties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModulePropertiesModuleProperties model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleProperties = make_shared<vector<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModulePropertiesModuleProperties>>(expect1);
      }
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties> moduleProperties{};
  shared_ptr<string> name{};

  GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (moduleProperties) {
      res["ModuleProperties"] = moduleProperties ? boost::any(moduleProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ModuleProperties") != m.end() && !m["ModuleProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModuleProperties"].type()) {
        GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModuleProperties"]));
        moduleProperties = make_shared<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfigModuleProperties>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig : public Darabonba::Model {
public:
  shared_ptr<vector<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig>> originalModuleConfig{};

  GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalModuleConfig) {
      vector<boost::any> temp1;
      for(auto item1:*originalModuleConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["originalModuleConfig"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("originalModuleConfig") != m.end() && !m["originalModuleConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["originalModuleConfig"].type()) {
        vector<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["originalModuleConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        originalModuleConfig = make_shared<vector<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfigOriginalModuleConfig>>(expect1);
      }
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig() = default;
};
class GetOrderDetailResponseBodyDataOrderListOrder : public Darabonba::Model {
public:
  shared_ptr<string> afterTaxAmount{};
  shared_ptr<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig> billModuleConfig{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> config{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currency{};
  shared_ptr<map<string, string>> extendInfos{};
  shared_ptr<string> instanceIds{};
  shared_ptr<string> operator_{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderSubType{};
  shared_ptr<string> orderType{};
  shared_ptr<string> originalConfig{};
  shared_ptr<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig> originalModuleConfig{};
  shared_ptr<string> paymentCurrency{};
  shared_ptr<string> paymentStatus{};
  shared_ptr<string> paymentTime{};
  shared_ptr<string> pretaxAmount{};
  shared_ptr<string> pretaxAmountLocal{};
  shared_ptr<string> pretaxGrossAmount{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> quantity{};
  shared_ptr<string> region{};
  shared_ptr<string> relatedOrderId{};
  shared_ptr<string> subOrderId{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> tax{};
  shared_ptr<string> usageEndTime{};
  shared_ptr<string> usageStartTime{};

  GetOrderDetailResponseBodyDataOrderListOrder() {}

  explicit GetOrderDetailResponseBodyDataOrderListOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (billModuleConfig) {
      res["BillModuleConfig"] = billModuleConfig ? boost::any(billModuleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (extendInfos) {
      res["ExtendInfos"] = boost::any(*extendInfos);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderSubType) {
      res["OrderSubType"] = boost::any(*orderSubType);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (originalConfig) {
      res["OriginalConfig"] = boost::any(*originalConfig);
    }
    if (originalModuleConfig) {
      res["OriginalModuleConfig"] = originalModuleConfig ? boost::any(originalModuleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    if (paymentStatus) {
      res["PaymentStatus"] = boost::any(*paymentStatus);
    }
    if (paymentTime) {
      res["PaymentTime"] = boost::any(*paymentTime);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (relatedOrderId) {
      res["RelatedOrderId"] = boost::any(*relatedOrderId);
    }
    if (subOrderId) {
      res["SubOrderId"] = boost::any(*subOrderId);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    if (usageEndTime) {
      res["UsageEndTime"] = boost::any(*usageEndTime);
    }
    if (usageStartTime) {
      res["UsageStartTime"] = boost::any(*usageStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<string>(boost::any_cast<string>(m["AfterTaxAmount"]));
    }
    if (m.find("BillModuleConfig") != m.end() && !m["BillModuleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["BillModuleConfig"].type()) {
        GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BillModuleConfig"]));
        billModuleConfig = make_shared<GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig>(model1);
      }
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("ExtendInfos") != m.end() && !m["ExtendInfos"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendInfos"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfos = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderSubType") != m.end() && !m["OrderSubType"].empty()) {
      orderSubType = make_shared<string>(boost::any_cast<string>(m["OrderSubType"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OriginalConfig") != m.end() && !m["OriginalConfig"].empty()) {
      originalConfig = make_shared<string>(boost::any_cast<string>(m["OriginalConfig"]));
    }
    if (m.find("OriginalModuleConfig") != m.end() && !m["OriginalModuleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["OriginalModuleConfig"].type()) {
        GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OriginalModuleConfig"]));
        originalModuleConfig = make_shared<GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig>(model1);
      }
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
    if (m.find("PaymentStatus") != m.end() && !m["PaymentStatus"].empty()) {
      paymentStatus = make_shared<string>(boost::any_cast<string>(m["PaymentStatus"]));
    }
    if (m.find("PaymentTime") != m.end() && !m["PaymentTime"].empty()) {
      paymentTime = make_shared<string>(boost::any_cast<string>(m["PaymentTime"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<string>(boost::any_cast<string>(m["PretaxAmount"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<string>(boost::any_cast<string>(m["PretaxAmountLocal"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<string>(boost::any_cast<string>(m["PretaxGrossAmount"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RelatedOrderId") != m.end() && !m["RelatedOrderId"].empty()) {
      relatedOrderId = make_shared<string>(boost::any_cast<string>(m["RelatedOrderId"]));
    }
    if (m.find("SubOrderId") != m.end() && !m["SubOrderId"].empty()) {
      subOrderId = make_shared<string>(boost::any_cast<string>(m["SubOrderId"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<string>(boost::any_cast<string>(m["Tax"]));
    }
    if (m.find("UsageEndTime") != m.end() && !m["UsageEndTime"].empty()) {
      usageEndTime = make_shared<string>(boost::any_cast<string>(m["UsageEndTime"]));
    }
    if (m.find("UsageStartTime") != m.end() && !m["UsageStartTime"].empty()) {
      usageStartTime = make_shared<string>(boost::any_cast<string>(m["UsageStartTime"]));
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderListOrder() = default;
};
class GetOrderDetailResponseBodyDataOrderList : public Darabonba::Model {
public:
  shared_ptr<vector<GetOrderDetailResponseBodyDataOrderListOrder>> order{};

  GetOrderDetailResponseBodyDataOrderList() {}

  explicit GetOrderDetailResponseBodyDataOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      vector<boost::any> temp1;
      for(auto item1:*order){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Order"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(vector<boost::any>) == m["Order"].type()) {
        vector<GetOrderDetailResponseBodyDataOrderListOrder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Order"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrderDetailResponseBodyDataOrderListOrder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        order = make_shared<vector<GetOrderDetailResponseBodyDataOrderListOrder>>(expect1);
      }
    }
  }


  virtual ~GetOrderDetailResponseBodyDataOrderList() = default;
};
class GetOrderDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> hostName{};
  shared_ptr<GetOrderDetailResponseBodyDataOrderList> orderList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetOrderDetailResponseBodyData() {}

  explicit GetOrderDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (orderList) {
      res["OrderList"] = orderList ? boost::any(orderList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderList"].type()) {
        GetOrderDetailResponseBodyDataOrderList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderList"]));
        orderList = make_shared<GetOrderDetailResponseBodyDataOrderList>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetOrderDetailResponseBodyData() = default;
};
class GetOrderDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetOrderDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOrderDetailResponseBody() {}

  explicit GetOrderDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOrderDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOrderDetailResponseBodyData>(model1);
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
  }


  virtual ~GetOrderDetailResponseBody() = default;
};
class GetOrderDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrderDetailResponseBody> body{};

  GetOrderDetailResponse() {}

  explicit GetOrderDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrderDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrderDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrderDetailResponse() = default;
};
class GetOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<long> memberUid{};
  shared_ptr<string> orderType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> paymentStatus{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> subscriptionType{};

  GetOrdersRequest() {}

  explicit GetOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (memberUid) {
      res["MemberUid"] = boost::any(*memberUid);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paymentStatus) {
      res["PaymentStatus"] = boost::any(*paymentStatus);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("MemberUid") != m.end() && !m["MemberUid"].empty()) {
      memberUid = make_shared<long>(boost::any_cast<long>(m["MemberUid"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PaymentStatus") != m.end() && !m["PaymentStatus"].empty()) {
      paymentStatus = make_shared<string>(boost::any_cast<string>(m["PaymentStatus"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
  }


  virtual ~GetOrdersRequest() = default;
};
class GetOrdersResponseBodyDataOrderListOrder : public Darabonba::Model {
public:
  shared_ptr<string> afterTaxAmount{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currency{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderType{};
  shared_ptr<string> paymentCurrency{};
  shared_ptr<string> paymentStatus{};
  shared_ptr<string> paymentTime{};
  shared_ptr<string> pretaxAmount{};
  shared_ptr<string> pretaxAmountLocal{};
  shared_ptr<string> pretaxGrossAmount{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> relatedOrderId{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<string> tax{};

  GetOrdersResponseBodyDataOrderListOrder() {}

  explicit GetOrdersResponseBodyDataOrderListOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterTaxAmount) {
      res["AfterTaxAmount"] = boost::any(*afterTaxAmount);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (paymentCurrency) {
      res["PaymentCurrency"] = boost::any(*paymentCurrency);
    }
    if (paymentStatus) {
      res["PaymentStatus"] = boost::any(*paymentStatus);
    }
    if (paymentTime) {
      res["PaymentTime"] = boost::any(*paymentTime);
    }
    if (pretaxAmount) {
      res["PretaxAmount"] = boost::any(*pretaxAmount);
    }
    if (pretaxAmountLocal) {
      res["PretaxAmountLocal"] = boost::any(*pretaxAmountLocal);
    }
    if (pretaxGrossAmount) {
      res["PretaxGrossAmount"] = boost::any(*pretaxGrossAmount);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (relatedOrderId) {
      res["RelatedOrderId"] = boost::any(*relatedOrderId);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (tax) {
      res["Tax"] = boost::any(*tax);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterTaxAmount") != m.end() && !m["AfterTaxAmount"].empty()) {
      afterTaxAmount = make_shared<string>(boost::any_cast<string>(m["AfterTaxAmount"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PaymentCurrency") != m.end() && !m["PaymentCurrency"].empty()) {
      paymentCurrency = make_shared<string>(boost::any_cast<string>(m["PaymentCurrency"]));
    }
    if (m.find("PaymentStatus") != m.end() && !m["PaymentStatus"].empty()) {
      paymentStatus = make_shared<string>(boost::any_cast<string>(m["PaymentStatus"]));
    }
    if (m.find("PaymentTime") != m.end() && !m["PaymentTime"].empty()) {
      paymentTime = make_shared<string>(boost::any_cast<string>(m["PaymentTime"]));
    }
    if (m.find("PretaxAmount") != m.end() && !m["PretaxAmount"].empty()) {
      pretaxAmount = make_shared<string>(boost::any_cast<string>(m["PretaxAmount"]));
    }
    if (m.find("PretaxAmountLocal") != m.end() && !m["PretaxAmountLocal"].empty()) {
      pretaxAmountLocal = make_shared<string>(boost::any_cast<string>(m["PretaxAmountLocal"]));
    }
    if (m.find("PretaxGrossAmount") != m.end() && !m["PretaxGrossAmount"].empty()) {
      pretaxGrossAmount = make_shared<string>(boost::any_cast<string>(m["PretaxGrossAmount"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RelatedOrderId") != m.end() && !m["RelatedOrderId"].empty()) {
      relatedOrderId = make_shared<string>(boost::any_cast<string>(m["RelatedOrderId"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("Tax") != m.end() && !m["Tax"].empty()) {
      tax = make_shared<string>(boost::any_cast<string>(m["Tax"]));
    }
  }


  virtual ~GetOrdersResponseBodyDataOrderListOrder() = default;
};
class GetOrdersResponseBodyDataOrderList : public Darabonba::Model {
public:
  shared_ptr<vector<GetOrdersResponseBodyDataOrderListOrder>> order{};

  GetOrdersResponseBodyDataOrderList() {}

  explicit GetOrdersResponseBodyDataOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      vector<boost::any> temp1;
      for(auto item1:*order){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Order"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(vector<boost::any>) == m["Order"].type()) {
        vector<GetOrdersResponseBodyDataOrderListOrder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Order"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrdersResponseBodyDataOrderListOrder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        order = make_shared<vector<GetOrdersResponseBodyDataOrderListOrder>>(expect1);
      }
    }
  }


  virtual ~GetOrdersResponseBodyDataOrderList() = default;
};
class GetOrdersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> hostName{};
  shared_ptr<GetOrdersResponseBodyDataOrderList> orderList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  GetOrdersResponseBodyData() {}

  explicit GetOrdersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (orderList) {
      res["OrderList"] = orderList ? boost::any(orderList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderList"].type()) {
        GetOrdersResponseBodyDataOrderList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderList"]));
        orderList = make_shared<GetOrdersResponseBodyDataOrderList>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetOrdersResponseBodyData() = default;
};
class GetOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetOrdersResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOrdersResponseBody() {}

  explicit GetOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOrdersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOrdersResponseBodyData>(model1);
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
  }


  virtual ~GetOrdersResponseBody() = default;
};
class GetOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrdersResponseBody> body{};

  GetOrdersResponse() {}

  explicit GetOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrdersResponse() = default;
};
class GetSavingPlanDeductableCommodityRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  GetSavingPlanDeductableCommodityRequestEcIdAccountIds() {}

  explicit GetSavingPlanDeductableCommodityRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityRequestEcIdAccountIds() = default;
};
class GetSavingPlanDeductableCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};

  GetSavingPlanDeductableCommodityRequest() {}

  explicit GetSavingPlanDeductableCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityRequest() = default;
};
class GetSavingPlanDeductableCommodityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};

  GetSavingPlanDeductableCommodityShrinkRequest() {}

  explicit GetSavingPlanDeductableCommodityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityShrinkRequest() = default;
};
class GetSavingPlanDeductableCommodityResponseBodyDataCycleList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  GetSavingPlanDeductableCommodityResponseBodyDataCycleList() {}

  explicit GetSavingPlanDeductableCommodityResponseBodyDataCycleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBodyDataCycleList() = default;
};
class GetSavingPlanDeductableCommodityResponseBodyDataFilterModules : public Darabonba::Model {
public:
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleName{};

  GetSavingPlanDeductableCommodityResponseBodyDataFilterModules() {}

  explicit GetSavingPlanDeductableCommodityResponseBodyDataFilterModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBodyDataFilterModules() = default;
};
class GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules : public Darabonba::Model {
public:
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleName{};

  GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules() {}

  explicit GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules() = default;
};
class GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules : public Darabonba::Model {
public:
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleName{};

  GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules() {}

  explicit GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules() = default;
};
class GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList() {}

  explicit GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList() = default;
};
class GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList : public Darabonba::Model {
public:
  shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules>> filterModules{};
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules>> showModules{};
  shared_ptr<vector<string>> spnTypeList{};
  shared_ptr<vector<map<string, DataModuleMapListSpnTypeMapListValue>>> spnTypeMapList{};
  shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList>> spnTypeNameList{};

  GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList() {}

  explicit GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterModules) {
      vector<boost::any> temp1;
      for(auto item1:*filterModules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FilterModules"] = boost::any(temp1);
    }
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (showModules) {
      vector<boost::any> temp1;
      for(auto item1:*showModules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShowModules"] = boost::any(temp1);
    }
    if (spnTypeList) {
      res["SpnTypeList"] = boost::any(*spnTypeList);
    }
    if (spnTypeMapList) {
      vector<boost::any> temp1;
      for(auto item1:*spnTypeMapList){
        map<string, boost::any> temp2;
        for(auto item2:item1){
          temp2[item2.first] = boost::any(item2.second.toMap());
        }
        temp1 = boost::any(temp2);
      }
      res["SpnTypeMapList"] = boost::any(temp1);
    }
    if (spnTypeNameList) {
      vector<boost::any> temp1;
      for(auto item1:*spnTypeNameList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpnTypeNameList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterModules") != m.end() && !m["FilterModules"].empty()) {
      if (typeid(vector<boost::any>) == m["FilterModules"].type()) {
        vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FilterModules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filterModules = make_shared<vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListFilterModules>>(expect1);
      }
    }
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ShowModules") != m.end() && !m["ShowModules"].empty()) {
      if (typeid(vector<boost::any>) == m["ShowModules"].type()) {
        vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShowModules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        showModules = make_shared<vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListShowModules>>(expect1);
      }
    }
    if (m.find("SpnTypeList") != m.end() && !m["SpnTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SpnTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpnTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      spnTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SpnTypeMapList") != m.end() && !m["SpnTypeMapList"].empty()) {
      if (typeid(vector<boost::any>) == m["SpnTypeMapList"].type()) {
        vector<map<string, DataModuleMapListSpnTypeMapListValue>> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpnTypeMapList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            map<string, DataModuleMapListSpnTypeMapListValue> expect2;
            for(auto item2:boost::any_cast<map<string, boost::any>>(item1)){
              if (typeid(map<string, boost::any>) == item2.second.type()) {
                DataModuleMapListSpnTypeMapListValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2.second));
                expect2[item2.first] = model3;
              }
            }
            expect1.push_back(expect2);
          }
        }
        spnTypeMapList = make_shared<vector<map<string, DataModuleMapListSpnTypeMapListValue>>>(expect1);
      }
    }
    if (m.find("SpnTypeNameList") != m.end() && !m["SpnTypeNameList"].empty()) {
      if (typeid(vector<boost::any>) == m["SpnTypeNameList"].type()) {
        vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpnTypeNameList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spnTypeNameList = make_shared<vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapListSpnTypeNameList>>(expect1);
      }
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList() = default;
};
class GetSavingPlanDeductableCommodityResponseBodyDataPayModeList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  GetSavingPlanDeductableCommodityResponseBodyDataPayModeList() {}

  explicit GetSavingPlanDeductableCommodityResponseBodyDataPayModeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBodyDataPayModeList() = default;
};
class GetSavingPlanDeductableCommodityResponseBodyDataPricingModules : public Darabonba::Model {
public:
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleId{};
  shared_ptr<string> moduleName{};

  GetSavingPlanDeductableCommodityResponseBodyDataPricingModules() {}

  explicit GetSavingPlanDeductableCommodityResponseBodyDataPricingModules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<long>(boost::any_cast<long>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBodyDataPricingModules() = default;
};
class GetSavingPlanDeductableCommodityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> activityId{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> commodityId{};
  shared_ptr<string> commodityName{};
  shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBodyDataCycleList>> cycleList{};
  shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBodyDataFilterModules>> filterModules{};
  shared_ptr<string> itemCode{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemName{};
  shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList>> moduleMapList{};
  shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBodyDataPayModeList>> payModeList{};
  shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBodyDataPricingModules>> pricingModules{};
  shared_ptr<string> spnCommodityCode{};
  shared_ptr<string> spnCommodityName{};
  shared_ptr<string> spnDiscountConfigType{};
  shared_ptr<map<string, vector<DataStepPriceMapValue>>> stepPriceMap{};

  GetSavingPlanDeductableCommodityResponseBodyData() {}

  explicit GetSavingPlanDeductableCommodityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityId) {
      res["CommodityId"] = boost::any(*commodityId);
    }
    if (commodityName) {
      res["CommodityName"] = boost::any(*commodityName);
    }
    if (cycleList) {
      vector<boost::any> temp1;
      for(auto item1:*cycleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CycleList"] = boost::any(temp1);
    }
    if (filterModules) {
      vector<boost::any> temp1;
      for(auto item1:*filterModules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FilterModules"] = boost::any(temp1);
    }
    if (itemCode) {
      res["ItemCode"] = boost::any(*itemCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (moduleMapList) {
      vector<boost::any> temp1;
      for(auto item1:*moduleMapList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModuleMapList"] = boost::any(temp1);
    }
    if (payModeList) {
      vector<boost::any> temp1;
      for(auto item1:*payModeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PayModeList"] = boost::any(temp1);
    }
    if (pricingModules) {
      vector<boost::any> temp1;
      for(auto item1:*pricingModules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PricingModules"] = boost::any(temp1);
    }
    if (spnCommodityCode) {
      res["SpnCommodityCode"] = boost::any(*spnCommodityCode);
    }
    if (spnCommodityName) {
      res["SpnCommodityName"] = boost::any(*spnCommodityName);
    }
    if (spnDiscountConfigType) {
      res["SpnDiscountConfigType"] = boost::any(*spnDiscountConfigType);
    }
    if (stepPriceMap) {
      map<string, boost::any> temp1;
      for(auto item1:*stepPriceMap){
        vector<boost::any> temp2;
        for(auto item2:item1.second){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1[item1.first] = boost::any(temp2);
      }
      res["StepPriceMap"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<long>(boost::any_cast<long>(m["ActivityId"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityId") != m.end() && !m["CommodityId"].empty()) {
      commodityId = make_shared<long>(boost::any_cast<long>(m["CommodityId"]));
    }
    if (m.find("CommodityName") != m.end() && !m["CommodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["CommodityName"]));
    }
    if (m.find("CycleList") != m.end() && !m["CycleList"].empty()) {
      if (typeid(vector<boost::any>) == m["CycleList"].type()) {
        vector<GetSavingPlanDeductableCommodityResponseBodyDataCycleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CycleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityResponseBodyDataCycleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cycleList = make_shared<vector<GetSavingPlanDeductableCommodityResponseBodyDataCycleList>>(expect1);
      }
    }
    if (m.find("FilterModules") != m.end() && !m["FilterModules"].empty()) {
      if (typeid(vector<boost::any>) == m["FilterModules"].type()) {
        vector<GetSavingPlanDeductableCommodityResponseBodyDataFilterModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FilterModules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityResponseBodyDataFilterModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filterModules = make_shared<vector<GetSavingPlanDeductableCommodityResponseBodyDataFilterModules>>(expect1);
      }
    }
    if (m.find("ItemCode") != m.end() && !m["ItemCode"].empty()) {
      itemCode = make_shared<string>(boost::any_cast<string>(m["ItemCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("ModuleMapList") != m.end() && !m["ModuleMapList"].empty()) {
      if (typeid(vector<boost::any>) == m["ModuleMapList"].type()) {
        vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModuleMapList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleMapList = make_shared<vector<GetSavingPlanDeductableCommodityResponseBodyDataModuleMapList>>(expect1);
      }
    }
    if (m.find("PayModeList") != m.end() && !m["PayModeList"].empty()) {
      if (typeid(vector<boost::any>) == m["PayModeList"].type()) {
        vector<GetSavingPlanDeductableCommodityResponseBodyDataPayModeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PayModeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityResponseBodyDataPayModeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        payModeList = make_shared<vector<GetSavingPlanDeductableCommodityResponseBodyDataPayModeList>>(expect1);
      }
    }
    if (m.find("PricingModules") != m.end() && !m["PricingModules"].empty()) {
      if (typeid(vector<boost::any>) == m["PricingModules"].type()) {
        vector<GetSavingPlanDeductableCommodityResponseBodyDataPricingModules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PricingModules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityResponseBodyDataPricingModules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pricingModules = make_shared<vector<GetSavingPlanDeductableCommodityResponseBodyDataPricingModules>>(expect1);
      }
    }
    if (m.find("SpnCommodityCode") != m.end() && !m["SpnCommodityCode"].empty()) {
      spnCommodityCode = make_shared<string>(boost::any_cast<string>(m["SpnCommodityCode"]));
    }
    if (m.find("SpnCommodityName") != m.end() && !m["SpnCommodityName"].empty()) {
      spnCommodityName = make_shared<string>(boost::any_cast<string>(m["SpnCommodityName"]));
    }
    if (m.find("SpnDiscountConfigType") != m.end() && !m["SpnDiscountConfigType"].empty()) {
      spnDiscountConfigType = make_shared<string>(boost::any_cast<string>(m["SpnDiscountConfigType"]));
    }
    if (m.find("StepPriceMap") != m.end() && !m["StepPriceMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["StepPriceMap"].type()) {
        map<string, vector<DataStepPriceMapValue>> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["StepPriceMap"])){
          if (typeid(vector<boost::any>) == item1.second.type()) {
            vector<DataStepPriceMapValue> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1.second)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                DataStepPriceMapValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1[item1.first] = expect2;
          }
        }
        stepPriceMap = make_shared<map<string, vector<DataStepPriceMapValue>>>(expect1);
      }
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBodyData() = default;
};
class GetSavingPlanDeductableCommodityResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetSavingPlanDeductableCommodityResponseBody() {}

  explicit GetSavingPlanDeductableCommodityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetSavingPlanDeductableCommodityResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanDeductableCommodityResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetSavingPlanDeductableCommodityResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponseBody() = default;
};
class GetSavingPlanDeductableCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSavingPlanDeductableCommodityResponseBody> body{};

  GetSavingPlanDeductableCommodityResponse() {}

  explicit GetSavingPlanDeductableCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSavingPlanDeductableCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSavingPlanDeductableCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~GetSavingPlanDeductableCommodityResponse() = default;
};
class GetSavingPlanShareAccountsRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  GetSavingPlanShareAccountsRequestEcIdAccountIds() {}

  explicit GetSavingPlanShareAccountsRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~GetSavingPlanShareAccountsRequestEcIdAccountIds() = default;
};
class GetSavingPlanShareAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<GetSavingPlanShareAccountsRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spnInstanceCode{};

  GetSavingPlanShareAccountsRequest() {}

  explicit GetSavingPlanShareAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spnInstanceCode) {
      res["SpnInstanceCode"] = boost::any(*spnInstanceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<GetSavingPlanShareAccountsRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanShareAccountsRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<GetSavingPlanShareAccountsRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpnInstanceCode") != m.end() && !m["SpnInstanceCode"].empty()) {
      spnInstanceCode = make_shared<string>(boost::any_cast<string>(m["SpnInstanceCode"]));
    }
  }


  virtual ~GetSavingPlanShareAccountsRequest() = default;
};
class GetSavingPlanShareAccountsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spnInstanceCode{};

  GetSavingPlanShareAccountsShrinkRequest() {}

  explicit GetSavingPlanShareAccountsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spnInstanceCode) {
      res["SpnInstanceCode"] = boost::any(*spnInstanceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpnInstanceCode") != m.end() && !m["SpnInstanceCode"].empty()) {
      spnInstanceCode = make_shared<string>(boost::any_cast<string>(m["SpnInstanceCode"]));
    }
  }


  virtual ~GetSavingPlanShareAccountsShrinkRequest() = default;
};
class GetSavingPlanShareAccountsResponseBodyDataShareTimeList : public Darabonba::Model {
public:
  shared_ptr<string> shareEndTime{};
  shared_ptr<string> shareStartTime{};

  GetSavingPlanShareAccountsResponseBodyDataShareTimeList() {}

  explicit GetSavingPlanShareAccountsResponseBodyDataShareTimeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shareEndTime) {
      res["ShareEndTime"] = boost::any(*shareEndTime);
    }
    if (shareStartTime) {
      res["ShareStartTime"] = boost::any(*shareStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShareEndTime") != m.end() && !m["ShareEndTime"].empty()) {
      shareEndTime = make_shared<string>(boost::any_cast<string>(m["ShareEndTime"]));
    }
    if (m.find("ShareStartTime") != m.end() && !m["ShareStartTime"].empty()) {
      shareStartTime = make_shared<string>(boost::any_cast<string>(m["ShareStartTime"]));
    }
  }


  virtual ~GetSavingPlanShareAccountsResponseBodyDataShareTimeList() = default;
};
class GetSavingPlanShareAccountsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> aliUid{};
  shared_ptr<vector<GetSavingPlanShareAccountsResponseBodyDataShareTimeList>> shareTimeList{};

  GetSavingPlanShareAccountsResponseBodyData() {}

  explicit GetSavingPlanShareAccountsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (shareTimeList) {
      vector<boost::any> temp1;
      for(auto item1:*shareTimeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShareTimeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ShareTimeList") != m.end() && !m["ShareTimeList"].empty()) {
      if (typeid(vector<boost::any>) == m["ShareTimeList"].type()) {
        vector<GetSavingPlanShareAccountsResponseBodyDataShareTimeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShareTimeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanShareAccountsResponseBodyDataShareTimeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shareTimeList = make_shared<vector<GetSavingPlanShareAccountsResponseBodyDataShareTimeList>>(expect1);
      }
    }
  }


  virtual ~GetSavingPlanShareAccountsResponseBodyData() = default;
};
class GetSavingPlanShareAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetSavingPlanShareAccountsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetSavingPlanShareAccountsResponseBody() {}

  explicit GetSavingPlanShareAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetSavingPlanShareAccountsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanShareAccountsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetSavingPlanShareAccountsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSavingPlanShareAccountsResponseBody() = default;
};
class GetSavingPlanShareAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSavingPlanShareAccountsResponseBody> body{};

  GetSavingPlanShareAccountsResponse() {}

  explicit GetSavingPlanShareAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSavingPlanShareAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSavingPlanShareAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~GetSavingPlanShareAccountsResponse() = default;
};
class GetSavingPlanUserDeductRuleRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  GetSavingPlanUserDeductRuleRequestEcIdAccountIds() {}

  explicit GetSavingPlanUserDeductRuleRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~GetSavingPlanUserDeductRuleRequestEcIdAccountIds() = default;
};
class GetSavingPlanUserDeductRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<GetSavingPlanUserDeductRuleRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spnInstanceCode{};

  GetSavingPlanUserDeductRuleRequest() {}

  explicit GetSavingPlanUserDeductRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spnInstanceCode) {
      res["SpnInstanceCode"] = boost::any(*spnInstanceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<GetSavingPlanUserDeductRuleRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanUserDeductRuleRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<GetSavingPlanUserDeductRuleRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpnInstanceCode") != m.end() && !m["SpnInstanceCode"].empty()) {
      spnInstanceCode = make_shared<string>(boost::any_cast<string>(m["SpnInstanceCode"]));
    }
  }


  virtual ~GetSavingPlanUserDeductRuleRequest() = default;
};
class GetSavingPlanUserDeductRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spnInstanceCode{};

  GetSavingPlanUserDeductRuleShrinkRequest() {}

  explicit GetSavingPlanUserDeductRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spnInstanceCode) {
      res["SpnInstanceCode"] = boost::any(*spnInstanceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpnInstanceCode") != m.end() && !m["SpnInstanceCode"].empty()) {
      spnInstanceCode = make_shared<string>(boost::any_cast<string>(m["SpnInstanceCode"]));
    }
  }


  virtual ~GetSavingPlanUserDeductRuleShrinkRequest() = default;
};
class GetSavingPlanUserDeductRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityName{};
  shared_ptr<string> moduleCode{};
  shared_ptr<string> moduleName{};
  shared_ptr<bool> skipDeduct{};

  GetSavingPlanUserDeductRuleResponseBodyData() {}

  explicit GetSavingPlanUserDeductRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityName) {
      res["CommodityName"] = boost::any(*commodityName);
    }
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (skipDeduct) {
      res["SkipDeduct"] = boost::any(*skipDeduct);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityName") != m.end() && !m["CommodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["CommodityName"]));
    }
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("SkipDeduct") != m.end() && !m["SkipDeduct"].empty()) {
      skipDeduct = make_shared<bool>(boost::any_cast<bool>(m["SkipDeduct"]));
    }
  }


  virtual ~GetSavingPlanUserDeductRuleResponseBodyData() = default;
};
class GetSavingPlanUserDeductRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetSavingPlanUserDeductRuleResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetSavingPlanUserDeductRuleResponseBody() {}

  explicit GetSavingPlanUserDeductRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetSavingPlanUserDeductRuleResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSavingPlanUserDeductRuleResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetSavingPlanUserDeductRuleResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSavingPlanUserDeductRuleResponseBody() = default;
};
class GetSavingPlanUserDeductRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSavingPlanUserDeductRuleResponseBody> body{};

  GetSavingPlanUserDeductRuleResponse() {}

  explicit GetSavingPlanUserDeductRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSavingPlanUserDeductRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSavingPlanUserDeductRuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetSavingPlanUserDeductRuleResponse() = default;
};
class ListCouponDeductTagRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  ListCouponDeductTagRequestEcIdAccountIds() {}

  explicit ListCouponDeductTagRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~ListCouponDeductTagRequestEcIdAccountIds() = default;
};
class ListCouponDeductTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<vector<ListCouponDeductTagRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};

  ListCouponDeductTagRequest() {}

  explicit ListCouponDeductTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<ListCouponDeductTagRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCouponDeductTagRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<ListCouponDeductTagRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~ListCouponDeductTagRequest() = default;
};
class ListCouponDeductTagShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};

  ListCouponDeductTagShrinkRequest() {}

  explicit ListCouponDeductTagShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~ListCouponDeductTagShrinkRequest() = default;
};
class ListCouponDeductTagResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListCouponDeductTagResponseBodyData() {}

  explicit ListCouponDeductTagResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListCouponDeductTagResponseBodyData() = default;
};
class ListCouponDeductTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCouponDeductTagResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListCouponDeductTagResponseBody() {}

  explicit ListCouponDeductTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCouponDeductTagResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCouponDeductTagResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCouponDeductTagResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCouponDeductTagResponseBody() = default;
};
class ListCouponDeductTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCouponDeductTagResponseBody> body{};

  ListCouponDeductTagResponse() {}

  explicit ListCouponDeductTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCouponDeductTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCouponDeductTagResponseBody>(model1);
      }
    }
  }


  virtual ~ListCouponDeductTagResponse() = default;
};
class ListFundAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> nbid{};
  shared_ptr<bool> queryOnlyInUse{};
  shared_ptr<bool> queryOnlyManage{};

  ListFundAccountRequest() {}

  explicit ListFundAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (queryOnlyInUse) {
      res["QueryOnlyInUse"] = boost::any(*queryOnlyInUse);
    }
    if (queryOnlyManage) {
      res["QueryOnlyManage"] = boost::any(*queryOnlyManage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("QueryOnlyInUse") != m.end() && !m["QueryOnlyInUse"].empty()) {
      queryOnlyInUse = make_shared<bool>(boost::any_cast<bool>(m["QueryOnlyInUse"]));
    }
    if (m.find("QueryOnlyManage") != m.end() && !m["QueryOnlyManage"].empty()) {
      queryOnlyManage = make_shared<bool>(boost::any_cast<bool>(m["QueryOnlyManage"]));
    }
  }


  virtual ~ListFundAccountRequest() = default;
};
class ListFundAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> fundAccountAdminAccountId{};
  shared_ptr<string> fundAccountAdminAccountName{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<string> fundAccountOwnerAccountId{};
  shared_ptr<string> fundAccountStatus{};
  shared_ptr<string> fundAccountType{};
  shared_ptr<string> nbid{};
  shared_ptr<vector<string>> permissions{};
  shared_ptr<string> site{};

  ListFundAccountResponseBodyData() {}

  explicit ListFundAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (fundAccountAdminAccountId) {
      res["FundAccountAdminAccountId"] = boost::any(*fundAccountAdminAccountId);
    }
    if (fundAccountAdminAccountName) {
      res["FundAccountAdminAccountName"] = boost::any(*fundAccountAdminAccountName);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (fundAccountStatus) {
      res["FundAccountStatus"] = boost::any(*fundAccountStatus);
    }
    if (fundAccountType) {
      res["FundAccountType"] = boost::any(*fundAccountType);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (permissions) {
      res["Permissions"] = boost::any(*permissions);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("FundAccountAdminAccountId") != m.end() && !m["FundAccountAdminAccountId"].empty()) {
      fundAccountAdminAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountAdminAccountId"]));
    }
    if (m.find("FundAccountAdminAccountName") != m.end() && !m["FundAccountAdminAccountName"].empty()) {
      fundAccountAdminAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountAdminAccountName"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("FundAccountStatus") != m.end() && !m["FundAccountStatus"].empty()) {
      fundAccountStatus = make_shared<string>(boost::any_cast<string>(m["FundAccountStatus"]));
    }
    if (m.find("FundAccountType") != m.end() && !m["FundAccountType"].empty()) {
      fundAccountType = make_shared<string>(boost::any_cast<string>(m["FundAccountType"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
  }


  virtual ~ListFundAccountResponseBodyData() = default;
};
class ListFundAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFundAccountResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  ListFundAccountResponseBody() {}

  explicit ListFundAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListFundAccountResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFundAccountResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListFundAccountResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFundAccountResponseBody() = default;
};
class ListFundAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFundAccountResponseBody> body{};

  ListFundAccountResponse() {}

  explicit ListFundAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFundAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFundAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ListFundAccountResponse() = default;
};
class ListFundAccountPayRelationRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListFundAccountPayRelationRequest() {}

  explicit ListFundAccountPayRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFundAccountPayRelationRequest() = default;
};
class ListFundAccountPayRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> ecid{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> fundAccountOwnerAccountId{};
  shared_ptr<string> ineffectiveTime{};
  shared_ptr<string> nbid{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> operatorNo{};
  shared_ptr<string> operatorType{};
  shared_ptr<string> relationType{};
  shared_ptr<string> site{};
  shared_ptr<string> status{};

  ListFundAccountPayRelationResponseBodyData() {}

  explicit ListFundAccountPayRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (ecid) {
      res["Ecid"] = boost::any(*ecid);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (ineffectiveTime) {
      res["IneffectiveTime"] = boost::any(*ineffectiveTime);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (operatorNo) {
      res["OperatorNo"] = boost::any(*operatorNo);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    if (relationType) {
      res["RelationType"] = boost::any(*relationType);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Ecid") != m.end() && !m["Ecid"].empty()) {
      ecid = make_shared<string>(boost::any_cast<string>(m["Ecid"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("IneffectiveTime") != m.end() && !m["IneffectiveTime"].empty()) {
      ineffectiveTime = make_shared<string>(boost::any_cast<string>(m["IneffectiveTime"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("OperatorNo") != m.end() && !m["OperatorNo"].empty()) {
      operatorNo = make_shared<string>(boost::any_cast<string>(m["OperatorNo"]));
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<string>(boost::any_cast<string>(m["OperatorType"]));
    }
    if (m.find("RelationType") != m.end() && !m["RelationType"].empty()) {
      relationType = make_shared<string>(boost::any_cast<string>(m["RelationType"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFundAccountPayRelationResponseBodyData() = default;
};
class ListFundAccountPayRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListFundAccountPayRelationResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFundAccountPayRelationResponseBody() {}

  explicit ListFundAccountPayRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListFundAccountPayRelationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFundAccountPayRelationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListFundAccountPayRelationResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
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


  virtual ~ListFundAccountPayRelationResponseBody() = default;
};
class ListFundAccountPayRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFundAccountPayRelationResponseBody> body{};

  ListFundAccountPayRelationResponse() {}

  explicit ListFundAccountPayRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFundAccountPayRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFundAccountPayRelationResponseBody>(model1);
      }
    }
  }


  virtual ~ListFundAccountPayRelationResponse() = default;
};
class ListInvoiceCandidateRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  ListInvoiceCandidateRequestEcIdAccountIds() {}

  explicit ListInvoiceCandidateRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~ListInvoiceCandidateRequestEcIdAccountIds() = default;
};
class ListInvoiceCandidateRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> billingCycles{};
  shared_ptr<vector<string>> businessIds{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListInvoiceCandidateRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<string>> invoiceIssuers{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<long>> status{};
  shared_ptr<vector<long>> types{};

  ListInvoiceCandidateRequest() {}

  explicit ListInvoiceCandidateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCycles) {
      res["BillingCycles"] = boost::any(*billingCycles);
    }
    if (businessIds) {
      res["BusinessIds"] = boost::any(*businessIds);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (invoiceIssuers) {
      res["InvoiceIssuers"] = boost::any(*invoiceIssuers);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycles") != m.end() && !m["BillingCycles"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["BillingCycles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BillingCycles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      billingCycles = make_shared<vector<long>>(toVec1);
    }
    if (m.find("BusinessIds") != m.end() && !m["BusinessIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BusinessIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BusinessIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      businessIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<ListInvoiceCandidateRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInvoiceCandidateRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<ListInvoiceCandidateRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InvoiceIssuers") != m.end() && !m["InvoiceIssuers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceIssuers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceIssuers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invoiceIssuers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      status = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      types = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~ListInvoiceCandidateRequest() = default;
};
class ListInvoiceCandidateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> billingCyclesShrink{};
  shared_ptr<string> businessIdsShrink{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> endTime{};
  shared_ptr<string> invoiceIssuersShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> statusShrink{};
  shared_ptr<string> typesShrink{};

  ListInvoiceCandidateShrinkRequest() {}

  explicit ListInvoiceCandidateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCyclesShrink) {
      res["BillingCycles"] = boost::any(*billingCyclesShrink);
    }
    if (businessIdsShrink) {
      res["BusinessIds"] = boost::any(*businessIdsShrink);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (invoiceIssuersShrink) {
      res["InvoiceIssuers"] = boost::any(*invoiceIssuersShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (statusShrink) {
      res["Status"] = boost::any(*statusShrink);
    }
    if (typesShrink) {
      res["Types"] = boost::any(*typesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCycles") != m.end() && !m["BillingCycles"].empty()) {
      billingCyclesShrink = make_shared<string>(boost::any_cast<string>(m["BillingCycles"]));
    }
    if (m.find("BusinessIds") != m.end() && !m["BusinessIds"].empty()) {
      businessIdsShrink = make_shared<string>(boost::any_cast<string>(m["BusinessIds"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InvoiceIssuers") != m.end() && !m["InvoiceIssuers"].empty()) {
      invoiceIssuersShrink = make_shared<string>(boost::any_cast<string>(m["InvoiceIssuers"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      statusShrink = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      typesShrink = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~ListInvoiceCandidateShrinkRequest() = default;
};
class ListInvoiceCandidateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> acceptedOffsetAmount{};
  shared_ptr<long> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<long> billingCycle{};
  shared_ptr<string> businessId{};
  shared_ptr<string> businessTime{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> invoiceIssuer{};
  shared_ptr<string> invoiceableAmount{};
  shared_ptr<string> invoicedAmount{};
  shared_ptr<string> offsetAmount{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<long> resourceOwnerAccountId{};
  shared_ptr<string> resourceOwnerAccountName{};
  shared_ptr<long> status{};
  shared_ptr<string> totalAmount{};
  shared_ptr<long> type{};

  ListInvoiceCandidateResponseBodyData() {}

  explicit ListInvoiceCandidateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptedOffsetAmount) {
      res["AcceptedOffsetAmount"] = boost::any(*acceptedOffsetAmount);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (billingCycle) {
      res["BillingCycle"] = boost::any(*billingCycle);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (businessTime) {
      res["BusinessTime"] = boost::any(*businessTime);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityName) {
      res["CommodityName"] = boost::any(*commodityName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (invoiceIssuer) {
      res["InvoiceIssuer"] = boost::any(*invoiceIssuer);
    }
    if (invoiceableAmount) {
      res["InvoiceableAmount"] = boost::any(*invoiceableAmount);
    }
    if (invoicedAmount) {
      res["InvoicedAmount"] = boost::any(*invoicedAmount);
    }
    if (offsetAmount) {
      res["OffsetAmount"] = boost::any(*offsetAmount);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (resourceOwnerAccountName) {
      res["ResourceOwnerAccountName"] = boost::any(*resourceOwnerAccountName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalAmount) {
      res["TotalAmount"] = boost::any(*totalAmount);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptedOffsetAmount") != m.end() && !m["AcceptedOffsetAmount"].empty()) {
      acceptedOffsetAmount = make_shared<string>(boost::any_cast<string>(m["AcceptedOffsetAmount"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("BillingCycle") != m.end() && !m["BillingCycle"].empty()) {
      billingCycle = make_shared<long>(boost::any_cast<long>(m["BillingCycle"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("BusinessTime") != m.end() && !m["BusinessTime"].empty()) {
      businessTime = make_shared<string>(boost::any_cast<string>(m["BusinessTime"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityName") != m.end() && !m["CommodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["CommodityName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InvoiceIssuer") != m.end() && !m["InvoiceIssuer"].empty()) {
      invoiceIssuer = make_shared<string>(boost::any_cast<string>(m["InvoiceIssuer"]));
    }
    if (m.find("InvoiceableAmount") != m.end() && !m["InvoiceableAmount"].empty()) {
      invoiceableAmount = make_shared<string>(boost::any_cast<string>(m["InvoiceableAmount"]));
    }
    if (m.find("InvoicedAmount") != m.end() && !m["InvoicedAmount"].empty()) {
      invoicedAmount = make_shared<string>(boost::any_cast<string>(m["InvoicedAmount"]));
    }
    if (m.find("OffsetAmount") != m.end() && !m["OffsetAmount"].empty()) {
      offsetAmount = make_shared<string>(boost::any_cast<string>(m["OffsetAmount"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("ResourceOwnerAccountName") != m.end() && !m["ResourceOwnerAccountName"].empty()) {
      resourceOwnerAccountName = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TotalAmount") != m.end() && !m["TotalAmount"].empty()) {
      totalAmount = make_shared<string>(boost::any_cast<string>(m["TotalAmount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~ListInvoiceCandidateResponseBodyData() = default;
};
class ListInvoiceCandidateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListInvoiceCandidateResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInvoiceCandidateResponseBody() {}

  explicit ListInvoiceCandidateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
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
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListInvoiceCandidateResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInvoiceCandidateResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListInvoiceCandidateResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
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


  virtual ~ListInvoiceCandidateResponseBody() = default;
};
class ListInvoiceCandidateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInvoiceCandidateResponseBody> body{};

  ListInvoiceCandidateResponse() {}

  explicit ListInvoiceCandidateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInvoiceCandidateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInvoiceCandidateResponseBody>(model1);
      }
    }
  }


  virtual ~ListInvoiceCandidateResponse() = default;
};
class ListInvoiceTitleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountBankName{};
  shared_ptr<long> accountId{};
  shared_ptr<string> bankAccountNumber{};
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> invoiceTitle{};
  shared_ptr<string> registeredAddress{};
  shared_ptr<string> registeredLandline{};
  shared_ptr<string> unifiedSocialCreditCode{};

  ListInvoiceTitleResponseBodyData() {}

  explicit ListInvoiceTitleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountBankName) {
      res["AccountBankName"] = boost::any(*accountBankName);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (bankAccountNumber) {
      res["BankAccountNumber"] = boost::any(*bankAccountNumber);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (invoiceTitle) {
      res["InvoiceTitle"] = boost::any(*invoiceTitle);
    }
    if (registeredAddress) {
      res["RegisteredAddress"] = boost::any(*registeredAddress);
    }
    if (registeredLandline) {
      res["RegisteredLandline"] = boost::any(*registeredLandline);
    }
    if (unifiedSocialCreditCode) {
      res["UnifiedSocialCreditCode"] = boost::any(*unifiedSocialCreditCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountBankName") != m.end() && !m["AccountBankName"].empty()) {
      accountBankName = make_shared<string>(boost::any_cast<string>(m["AccountBankName"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<long>(boost::any_cast<long>(m["AccountId"]));
    }
    if (m.find("BankAccountNumber") != m.end() && !m["BankAccountNumber"].empty()) {
      bankAccountNumber = make_shared<string>(boost::any_cast<string>(m["BankAccountNumber"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InvoiceTitle") != m.end() && !m["InvoiceTitle"].empty()) {
      invoiceTitle = make_shared<string>(boost::any_cast<string>(m["InvoiceTitle"]));
    }
    if (m.find("RegisteredAddress") != m.end() && !m["RegisteredAddress"].empty()) {
      registeredAddress = make_shared<string>(boost::any_cast<string>(m["RegisteredAddress"]));
    }
    if (m.find("RegisteredLandline") != m.end() && !m["RegisteredLandline"].empty()) {
      registeredLandline = make_shared<string>(boost::any_cast<string>(m["RegisteredLandline"]));
    }
    if (m.find("UnifiedSocialCreditCode") != m.end() && !m["UnifiedSocialCreditCode"].empty()) {
      unifiedSocialCreditCode = make_shared<string>(boost::any_cast<string>(m["UnifiedSocialCreditCode"]));
    }
  }


  virtual ~ListInvoiceTitleResponseBodyData() = default;
};
class ListInvoiceTitleResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListInvoiceTitleResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  ListInvoiceTitleResponseBody() {}

  explicit ListInvoiceTitleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListInvoiceTitleResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInvoiceTitleResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListInvoiceTitleResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInvoiceTitleResponseBody() = default;
};
class ListInvoiceTitleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInvoiceTitleResponseBody> body{};

  ListInvoiceTitleResponse() {}

  explicit ListInvoiceTitleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInvoiceTitleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInvoiceTitleResponseBody>(model1);
      }
    }
  }


  virtual ~ListInvoiceTitleResponse() = default;
};
class ListReportDefinitionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> nbid{};

  ListReportDefinitionsRequest() {}

  explicit ListReportDefinitionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~ListReportDefinitionsRequest() = default;
};
class ListReportDefinitionsResponseBodyReportDefinitions : public Darabonba::Model {
public:
  shared_ptr<string> beginBillingCycle{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<long> ossBucketOwnerAccountId{};
  shared_ptr<string> ossBucketPath{};
  shared_ptr<string> reportSourceName{};
  shared_ptr<string> reportSourceType{};
  shared_ptr<long> reportTaskId{};
  shared_ptr<string> reportType{};
  shared_ptr<string> subscribeCreateTime{};

  ListReportDefinitionsResponseBodyReportDefinitions() {}

  explicit ListReportDefinitionsResponseBodyReportDefinitions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginBillingCycle) {
      res["BeginBillingCycle"] = boost::any(*beginBillingCycle);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossBucketOwnerAccountId) {
      res["OssBucketOwnerAccountId"] = boost::any(*ossBucketOwnerAccountId);
    }
    if (ossBucketPath) {
      res["OssBucketPath"] = boost::any(*ossBucketPath);
    }
    if (reportSourceName) {
      res["ReportSourceName"] = boost::any(*reportSourceName);
    }
    if (reportSourceType) {
      res["ReportSourceType"] = boost::any(*reportSourceType);
    }
    if (reportTaskId) {
      res["ReportTaskId"] = boost::any(*reportTaskId);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (subscribeCreateTime) {
      res["SubscribeCreateTime"] = boost::any(*subscribeCreateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginBillingCycle") != m.end() && !m["BeginBillingCycle"].empty()) {
      beginBillingCycle = make_shared<string>(boost::any_cast<string>(m["BeginBillingCycle"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssBucketOwnerAccountId") != m.end() && !m["OssBucketOwnerAccountId"].empty()) {
      ossBucketOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["OssBucketOwnerAccountId"]));
    }
    if (m.find("OssBucketPath") != m.end() && !m["OssBucketPath"].empty()) {
      ossBucketPath = make_shared<string>(boost::any_cast<string>(m["OssBucketPath"]));
    }
    if (m.find("ReportSourceName") != m.end() && !m["ReportSourceName"].empty()) {
      reportSourceName = make_shared<string>(boost::any_cast<string>(m["ReportSourceName"]));
    }
    if (m.find("ReportSourceType") != m.end() && !m["ReportSourceType"].empty()) {
      reportSourceType = make_shared<string>(boost::any_cast<string>(m["ReportSourceType"]));
    }
    if (m.find("ReportTaskId") != m.end() && !m["ReportTaskId"].empty()) {
      reportTaskId = make_shared<long>(boost::any_cast<long>(m["ReportTaskId"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
    if (m.find("SubscribeCreateTime") != m.end() && !m["SubscribeCreateTime"].empty()) {
      subscribeCreateTime = make_shared<string>(boost::any_cast<string>(m["SubscribeCreateTime"]));
    }
  }


  virtual ~ListReportDefinitionsResponseBodyReportDefinitions() = default;
};
class ListReportDefinitionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<boost::any> metadata{};
  shared_ptr<vector<ListReportDefinitionsResponseBodyReportDefinitions>> reportDefinitions{};
  shared_ptr<string> requestId{};

  ListReportDefinitionsResponseBody() {}

  explicit ListReportDefinitionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (reportDefinitions) {
      vector<boost::any> temp1;
      for(auto item1:*reportDefinitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReportDefinitions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("ReportDefinitions") != m.end() && !m["ReportDefinitions"].empty()) {
      if (typeid(vector<boost::any>) == m["ReportDefinitions"].type()) {
        vector<ListReportDefinitionsResponseBodyReportDefinitions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReportDefinitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListReportDefinitionsResponseBodyReportDefinitions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        reportDefinitions = make_shared<vector<ListReportDefinitionsResponseBodyReportDefinitions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListReportDefinitionsResponseBody() = default;
};
class ListReportDefinitionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListReportDefinitionsResponseBody> body{};

  ListReportDefinitionsResponse() {}

  explicit ListReportDefinitionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListReportDefinitionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListReportDefinitionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListReportDefinitionsResponse() = default;
};
class ModifyCostCenterRequestCostCenterEntityList : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<long> ownerAccountId{};

  ModifyCostCenterRequestCostCenterEntityList() {}

  explicit ModifyCostCenterRequestCostCenterEntityList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["CostCenterName"] = boost::any(*costCenterName);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("CostCenterName") != m.end() && !m["CostCenterName"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["CostCenterName"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
  }


  virtual ~ModifyCostCenterRequestCostCenterEntityList() = default;
};
class ModifyCostCenterRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyCostCenterRequestCostCenterEntityList>> costCenterEntityList{};
  shared_ptr<string> nbid{};

  ModifyCostCenterRequest() {}

  explicit ModifyCostCenterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterEntityList) {
      vector<boost::any> temp1;
      for(auto item1:*costCenterEntityList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CostCenterEntityList"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterEntityList") != m.end() && !m["CostCenterEntityList"].empty()) {
      if (typeid(vector<boost::any>) == m["CostCenterEntityList"].type()) {
        vector<ModifyCostCenterRequestCostCenterEntityList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CostCenterEntityList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyCostCenterRequestCostCenterEntityList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        costCenterEntityList = make_shared<vector<ModifyCostCenterRequestCostCenterEntityList>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~ModifyCostCenterRequest() = default;
};
class ModifyCostCenterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> costCenterEntityListShrink{};
  shared_ptr<string> nbid{};

  ModifyCostCenterShrinkRequest() {}

  explicit ModifyCostCenterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterEntityListShrink) {
      res["CostCenterEntityList"] = boost::any(*costCenterEntityListShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterEntityList") != m.end() && !m["CostCenterEntityList"].empty()) {
      costCenterEntityListShrink = make_shared<string>(boost::any_cast<string>(m["CostCenterEntityList"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~ModifyCostCenterShrinkRequest() = default;
};
class ModifyCostCenterResponseBodyCostCenterOperateDto : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<long> ownerAccountId{};

  ModifyCostCenterResponseBodyCostCenterOperateDto() {}

  explicit ModifyCostCenterResponseBodyCostCenterOperateDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
  }


  virtual ~ModifyCostCenterResponseBodyCostCenterOperateDto() = default;
};
class ModifyCostCenterResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyCostCenterResponseBodyCostCenterOperateDto>> costCenterOperateDto{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  ModifyCostCenterResponseBody() {}

  explicit ModifyCostCenterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterOperateDto) {
      vector<boost::any> temp1;
      for(auto item1:*costCenterOperateDto){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CostCenterOperateDto"] = boost::any(temp1);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterOperateDto") != m.end() && !m["CostCenterOperateDto"].empty()) {
      if (typeid(vector<boost::any>) == m["CostCenterOperateDto"].type()) {
        vector<ModifyCostCenterResponseBodyCostCenterOperateDto> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CostCenterOperateDto"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyCostCenterResponseBodyCostCenterOperateDto model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        costCenterOperateDto = make_shared<vector<ModifyCostCenterResponseBodyCostCenterOperateDto>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyCostCenterResponseBody() = default;
};
class ModifyCostCenterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyCostCenterResponseBody> body{};

  ModifyCostCenterResponse() {}

  explicit ModifyCostCenterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCostCenterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCostCenterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCostCenterResponse() = default;
};
class ModifyCostCenterRuleRequestFilterExpressionFilterValues : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> codeName{};
  shared_ptr<string> selectType{};
  shared_ptr<vector<string>> values{};

  ModifyCostCenterRuleRequestFilterExpressionFilterValues() {}

  explicit ModifyCostCenterRuleRequestFilterExpressionFilterValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (codeName) {
      res["CodeName"] = boost::any(*codeName);
    }
    if (selectType) {
      res["SelectType"] = boost::any(*selectType);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CodeName") != m.end() && !m["CodeName"].empty()) {
      codeName = make_shared<string>(boost::any_cast<string>(m["CodeName"]));
    }
    if (m.find("SelectType") != m.end() && !m["SelectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["SelectType"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyCostCenterRuleRequestFilterExpressionFilterValues() = default;
};
class ModifyCostCenterRuleRequestFilterExpression : public Darabonba::Model {
public:
  shared_ptr<string> expressionType{};
  shared_ptr<ModifyCostCenterRuleRequestFilterExpressionFilterValues> filterValues{};
  shared_ptr<boost::any> operand{};
  shared_ptr<vector<boost::any>> operands{};
  shared_ptr<string> operatorType{};

  ModifyCostCenterRuleRequestFilterExpression() {}

  explicit ModifyCostCenterRuleRequestFilterExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressionType) {
      res["ExpressionType"] = boost::any(*expressionType);
    }
    if (filterValues) {
      res["FilterValues"] = filterValues ? boost::any(filterValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operand) {
      res["Operand"] = boost::any(*operand);
    }
    if (operands) {
      res["Operands"] = boost::any(*operands);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressionType") != m.end() && !m["ExpressionType"].empty()) {
      expressionType = make_shared<string>(boost::any_cast<string>(m["ExpressionType"]));
    }
    if (m.find("FilterValues") != m.end() && !m["FilterValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterValues"].type()) {
        ModifyCostCenterRuleRequestFilterExpressionFilterValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterValues"]));
        filterValues = make_shared<ModifyCostCenterRuleRequestFilterExpressionFilterValues>(model1);
      }
    }
    if (m.find("Operand") != m.end() && !m["Operand"].empty()) {
      operand = make_shared<boost::any>(boost::any_cast<boost::any>(m["Operand"]));
    }
    if (m.find("Operands") != m.end() && !m["Operands"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Operands"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Operands"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      operands = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<string>(boost::any_cast<string>(m["OperatorType"]));
    }
  }


  virtual ~ModifyCostCenterRuleRequestFilterExpression() = default;
};
class ModifyCostCenterRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<ModifyCostCenterRuleRequestFilterExpression> filterExpression{};
  shared_ptr<string> nbid{};
  shared_ptr<long> ownerAccountId{};

  ModifyCostCenterRuleRequest() {}

  explicit ModifyCostCenterRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (filterExpression) {
      res["FilterExpression"] = filterExpression ? boost::any(filterExpression->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("FilterExpression") != m.end() && !m["FilterExpression"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterExpression"].type()) {
        ModifyCostCenterRuleRequestFilterExpression model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterExpression"]));
        filterExpression = make_shared<ModifyCostCenterRuleRequestFilterExpression>(model1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
  }


  virtual ~ModifyCostCenterRuleRequest() = default;
};
class ModifyCostCenterRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<string> filterExpressionShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<long> ownerAccountId{};

  ModifyCostCenterRuleShrinkRequest() {}

  explicit ModifyCostCenterRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (filterExpressionShrink) {
      res["FilterExpression"] = boost::any(*filterExpressionShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("FilterExpression") != m.end() && !m["FilterExpression"].empty()) {
      filterExpressionShrink = make_shared<string>(boost::any_cast<string>(m["FilterExpression"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
  }


  virtual ~ModifyCostCenterRuleShrinkRequest() = default;
};
class ModifyCostCenterRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  ModifyCostCenterRuleResponseBody() {}

  explicit ModifyCostCenterRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyCostCenterRuleResponseBody() = default;
};
class ModifyCostCenterRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyCostCenterRuleResponseBody> body{};

  ModifyCostCenterRuleResponse() {}

  explicit ModifyCostCenterRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCostCenterRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCostCenterRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCostCenterRuleResponse() = default;
};
class QueryCostCenterRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  QueryCostCenterRequestEcIdAccountIds() {}

  explicit QueryCostCenterRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~QueryCostCenterRequestEcIdAccountIds() = default;
};
class QueryCostCenterRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<QueryCostCenterRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> parentCostCenterId{};

  QueryCostCenterRequest() {}

  explicit QueryCostCenterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentCostCenterId) {
      res["ParentCostCenterId"] = boost::any(*parentCostCenterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<QueryCostCenterRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCostCenterRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<QueryCostCenterRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentCostCenterId") != m.end() && !m["ParentCostCenterId"].empty()) {
      parentCostCenterId = make_shared<long>(boost::any_cast<long>(m["ParentCostCenterId"]));
    }
  }


  virtual ~QueryCostCenterRequest() = default;
};
class QueryCostCenterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> parentCostCenterId{};

  QueryCostCenterShrinkRequest() {}

  explicit QueryCostCenterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentCostCenterId) {
      res["ParentCostCenterId"] = boost::any(*parentCostCenterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentCostCenterId") != m.end() && !m["ParentCostCenterId"].empty()) {
      parentCostCenterId = make_shared<long>(boost::any_cast<long>(m["ParentCostCenterId"]));
    }
  }


  virtual ~QueryCostCenterShrinkRequest() = default;
};
class QueryCostCenterResponseBodyCostCenterDtoList : public Darabonba::Model {
public:
  shared_ptr<string> costCenterCode{};
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<long> level{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<long> parentCostCenterId{};
  shared_ptr<long> prevCostCenterId{};

  QueryCostCenterResponseBodyCostCenterDtoList() {}

  explicit QueryCostCenterResponseBodyCostCenterDtoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterCode) {
      res["CostCenterCode"] = boost::any(*costCenterCode);
    }
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["CostCenterName"] = boost::any(*costCenterName);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    if (parentCostCenterId) {
      res["ParentCostCenterId"] = boost::any(*parentCostCenterId);
    }
    if (prevCostCenterId) {
      res["PrevCostCenterId"] = boost::any(*prevCostCenterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterCode") != m.end() && !m["CostCenterCode"].empty()) {
      costCenterCode = make_shared<string>(boost::any_cast<string>(m["CostCenterCode"]));
    }
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("CostCenterName") != m.end() && !m["CostCenterName"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["CostCenterName"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
    if (m.find("ParentCostCenterId") != m.end() && !m["ParentCostCenterId"].empty()) {
      parentCostCenterId = make_shared<long>(boost::any_cast<long>(m["ParentCostCenterId"]));
    }
    if (m.find("PrevCostCenterId") != m.end() && !m["PrevCostCenterId"].empty()) {
      prevCostCenterId = make_shared<long>(boost::any_cast<long>(m["PrevCostCenterId"]));
    }
  }


  virtual ~QueryCostCenterResponseBodyCostCenterDtoList() = default;
};
class QueryCostCenterResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCostCenterResponseBodyCostCenterDtoList>> costCenterDtoList{};
  shared_ptr<long> currentPage{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryCostCenterResponseBody() {}

  explicit QueryCostCenterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterDtoList) {
      vector<boost::any> temp1;
      for(auto item1:*costCenterDtoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CostCenterDtoList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
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
    if (m.find("CostCenterDtoList") != m.end() && !m["CostCenterDtoList"].empty()) {
      if (typeid(vector<boost::any>) == m["CostCenterDtoList"].type()) {
        vector<QueryCostCenterResponseBodyCostCenterDtoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CostCenterDtoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCostCenterResponseBodyCostCenterDtoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        costCenterDtoList = make_shared<vector<QueryCostCenterResponseBodyCostCenterDtoList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
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


  virtual ~QueryCostCenterResponseBody() = default;
};
class QueryCostCenterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCostCenterResponseBody> body{};

  QueryCostCenterResponse() {}

  explicit QueryCostCenterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCostCenterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCostCenterResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCostCenterResponse() = default;
};
class QueryCostCenterResourceRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  QueryCostCenterResourceRequestEcIdAccountIds() {}

  explicit QueryCostCenterResourceRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~QueryCostCenterResourceRequestEcIdAccountIds() = default;
};
class QueryCostCenterResourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<vector<QueryCostCenterResourceRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nbid{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> ownerAccountId{};

  QueryCostCenterResourceRequest() {}

  explicit QueryCostCenterResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<QueryCostCenterResourceRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCostCenterResourceRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<QueryCostCenterResourceRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
  }


  virtual ~QueryCostCenterResourceRequest() = default;
};
class QueryCostCenterResourceResponseBodyCostCenterResourceDtoList : public Darabonba::Model {
public:
  shared_ptr<string> apportionItemCode{};
  shared_ptr<string> apportionItemName{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityName{};
  shared_ptr<string> costCenterCode{};
  shared_ptr<string> costCenterCreateTime{};
  shared_ptr<long> costCenterId{};
  shared_ptr<string> costCenterName{};
  shared_ptr<string> costCenterUpdateTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<string> ownerAccountName{};
  shared_ptr<long> parentCostCenterId{};
  shared_ptr<string> pipCode{};
  shared_ptr<string> pipName{};
  shared_ptr<string> resourceGroup{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceNick{};
  shared_ptr<string> resourceSource{};
  shared_ptr<string> resourceTag{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> resourceUpdateTime{};
  shared_ptr<long> resourceUserId{};
  shared_ptr<string> resourceUserName{};
  shared_ptr<long> rootCostCenterId{};

  QueryCostCenterResourceResponseBodyCostCenterResourceDtoList() {}

  explicit QueryCostCenterResourceResponseBodyCostCenterResourceDtoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apportionItemCode) {
      res["ApportionItemCode"] = boost::any(*apportionItemCode);
    }
    if (apportionItemName) {
      res["ApportionItemName"] = boost::any(*apportionItemName);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityName) {
      res["CommodityName"] = boost::any(*commodityName);
    }
    if (costCenterCode) {
      res["CostCenterCode"] = boost::any(*costCenterCode);
    }
    if (costCenterCreateTime) {
      res["CostCenterCreateTime"] = boost::any(*costCenterCreateTime);
    }
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (costCenterName) {
      res["CostCenterName"] = boost::any(*costCenterName);
    }
    if (costCenterUpdateTime) {
      res["CostCenterUpdateTime"] = boost::any(*costCenterUpdateTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    if (ownerAccountName) {
      res["OwnerAccountName"] = boost::any(*ownerAccountName);
    }
    if (parentCostCenterId) {
      res["ParentCostCenterId"] = boost::any(*parentCostCenterId);
    }
    if (pipCode) {
      res["PipCode"] = boost::any(*pipCode);
    }
    if (pipName) {
      res["PipName"] = boost::any(*pipName);
    }
    if (resourceGroup) {
      res["ResourceGroup"] = boost::any(*resourceGroup);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceNick) {
      res["ResourceNick"] = boost::any(*resourceNick);
    }
    if (resourceSource) {
      res["ResourceSource"] = boost::any(*resourceSource);
    }
    if (resourceTag) {
      res["ResourceTag"] = boost::any(*resourceTag);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceUpdateTime) {
      res["ResourceUpdateTime"] = boost::any(*resourceUpdateTime);
    }
    if (resourceUserId) {
      res["ResourceUserId"] = boost::any(*resourceUserId);
    }
    if (resourceUserName) {
      res["ResourceUserName"] = boost::any(*resourceUserName);
    }
    if (rootCostCenterId) {
      res["RootCostCenterId"] = boost::any(*rootCostCenterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApportionItemCode") != m.end() && !m["ApportionItemCode"].empty()) {
      apportionItemCode = make_shared<string>(boost::any_cast<string>(m["ApportionItemCode"]));
    }
    if (m.find("ApportionItemName") != m.end() && !m["ApportionItemName"].empty()) {
      apportionItemName = make_shared<string>(boost::any_cast<string>(m["ApportionItemName"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityName") != m.end() && !m["CommodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["CommodityName"]));
    }
    if (m.find("CostCenterCode") != m.end() && !m["CostCenterCode"].empty()) {
      costCenterCode = make_shared<string>(boost::any_cast<string>(m["CostCenterCode"]));
    }
    if (m.find("CostCenterCreateTime") != m.end() && !m["CostCenterCreateTime"].empty()) {
      costCenterCreateTime = make_shared<string>(boost::any_cast<string>(m["CostCenterCreateTime"]));
    }
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("CostCenterName") != m.end() && !m["CostCenterName"].empty()) {
      costCenterName = make_shared<string>(boost::any_cast<string>(m["CostCenterName"]));
    }
    if (m.find("CostCenterUpdateTime") != m.end() && !m["CostCenterUpdateTime"].empty()) {
      costCenterUpdateTime = make_shared<string>(boost::any_cast<string>(m["CostCenterUpdateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
    if (m.find("OwnerAccountName") != m.end() && !m["OwnerAccountName"].empty()) {
      ownerAccountName = make_shared<string>(boost::any_cast<string>(m["OwnerAccountName"]));
    }
    if (m.find("ParentCostCenterId") != m.end() && !m["ParentCostCenterId"].empty()) {
      parentCostCenterId = make_shared<long>(boost::any_cast<long>(m["ParentCostCenterId"]));
    }
    if (m.find("PipCode") != m.end() && !m["PipCode"].empty()) {
      pipCode = make_shared<string>(boost::any_cast<string>(m["PipCode"]));
    }
    if (m.find("PipName") != m.end() && !m["PipName"].empty()) {
      pipName = make_shared<string>(boost::any_cast<string>(m["PipName"]));
    }
    if (m.find("ResourceGroup") != m.end() && !m["ResourceGroup"].empty()) {
      resourceGroup = make_shared<string>(boost::any_cast<string>(m["ResourceGroup"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceNick") != m.end() && !m["ResourceNick"].empty()) {
      resourceNick = make_shared<string>(boost::any_cast<string>(m["ResourceNick"]));
    }
    if (m.find("ResourceSource") != m.end() && !m["ResourceSource"].empty()) {
      resourceSource = make_shared<string>(boost::any_cast<string>(m["ResourceSource"]));
    }
    if (m.find("ResourceTag") != m.end() && !m["ResourceTag"].empty()) {
      resourceTag = make_shared<string>(boost::any_cast<string>(m["ResourceTag"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceUpdateTime") != m.end() && !m["ResourceUpdateTime"].empty()) {
      resourceUpdateTime = make_shared<string>(boost::any_cast<string>(m["ResourceUpdateTime"]));
    }
    if (m.find("ResourceUserId") != m.end() && !m["ResourceUserId"].empty()) {
      resourceUserId = make_shared<long>(boost::any_cast<long>(m["ResourceUserId"]));
    }
    if (m.find("ResourceUserName") != m.end() && !m["ResourceUserName"].empty()) {
      resourceUserName = make_shared<string>(boost::any_cast<string>(m["ResourceUserName"]));
    }
    if (m.find("RootCostCenterId") != m.end() && !m["RootCostCenterId"].empty()) {
      rootCostCenterId = make_shared<long>(boost::any_cast<long>(m["RootCostCenterId"]));
    }
  }


  virtual ~QueryCostCenterResourceResponseBodyCostCenterResourceDtoList() = default;
};
class QueryCostCenterResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList>> costCenterResourceDtoList{};
  shared_ptr<long> maxResults{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryCostCenterResourceResponseBody() {}

  explicit QueryCostCenterResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterResourceDtoList) {
      vector<boost::any> temp1;
      for(auto item1:*costCenterResourceDtoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CostCenterResourceDtoList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
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
    if (m.find("CostCenterResourceDtoList") != m.end() && !m["CostCenterResourceDtoList"].empty()) {
      if (typeid(vector<boost::any>) == m["CostCenterResourceDtoList"].type()) {
        vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CostCenterResourceDtoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCostCenterResourceResponseBodyCostCenterResourceDtoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        costCenterResourceDtoList = make_shared<vector<QueryCostCenterResourceResponseBodyCostCenterResourceDtoList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
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
  }


  virtual ~QueryCostCenterResourceResponseBody() = default;
};
class QueryCostCenterResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCostCenterResourceResponseBody> body{};

  QueryCostCenterResourceResponse() {}

  explicit QueryCostCenterResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCostCenterResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCostCenterResourceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCostCenterResourceResponse() = default;
};
class QueryCostCenterRuleRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  QueryCostCenterRuleRequestEcIdAccountIds() {}

  explicit QueryCostCenterRuleRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~QueryCostCenterRuleRequestEcIdAccountIds() = default;
};
class QueryCostCenterRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<vector<QueryCostCenterRuleRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};

  QueryCostCenterRuleRequest() {}

  explicit QueryCostCenterRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<QueryCostCenterRuleRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCostCenterRuleRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<QueryCostCenterRuleRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~QueryCostCenterRuleRequest() = default;
};
class QueryCostCenterRuleResponseBodyFilterExpressionFilterValues : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> codeName{};
  shared_ptr<string> selectType{};
  shared_ptr<vector<string>> values{};

  QueryCostCenterRuleResponseBodyFilterExpressionFilterValues() {}

  explicit QueryCostCenterRuleResponseBodyFilterExpressionFilterValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (codeName) {
      res["CodeName"] = boost::any(*codeName);
    }
    if (selectType) {
      res["SelectType"] = boost::any(*selectType);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CodeName") != m.end() && !m["CodeName"].empty()) {
      codeName = make_shared<string>(boost::any_cast<string>(m["CodeName"]));
    }
    if (m.find("SelectType") != m.end() && !m["SelectType"].empty()) {
      selectType = make_shared<string>(boost::any_cast<string>(m["SelectType"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryCostCenterRuleResponseBodyFilterExpressionFilterValues() = default;
};
class QueryCostCenterRuleResponseBodyFilterExpression : public Darabonba::Model {
public:
  shared_ptr<string> expressionType{};
  shared_ptr<QueryCostCenterRuleResponseBodyFilterExpressionFilterValues> filterValues{};
  shared_ptr<boost::any> operand{};
  shared_ptr<vector<boost::any>> operands{};
  shared_ptr<string> operatorType{};

  QueryCostCenterRuleResponseBodyFilterExpression() {}

  explicit QueryCostCenterRuleResponseBodyFilterExpression(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressionType) {
      res["ExpressionType"] = boost::any(*expressionType);
    }
    if (filterValues) {
      res["FilterValues"] = filterValues ? boost::any(filterValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operand) {
      res["Operand"] = boost::any(*operand);
    }
    if (operands) {
      res["Operands"] = boost::any(*operands);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressionType") != m.end() && !m["ExpressionType"].empty()) {
      expressionType = make_shared<string>(boost::any_cast<string>(m["ExpressionType"]));
    }
    if (m.find("FilterValues") != m.end() && !m["FilterValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterValues"].type()) {
        QueryCostCenterRuleResponseBodyFilterExpressionFilterValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterValues"]));
        filterValues = make_shared<QueryCostCenterRuleResponseBodyFilterExpressionFilterValues>(model1);
      }
    }
    if (m.find("Operand") != m.end() && !m["Operand"].empty()) {
      operand = make_shared<boost::any>(boost::any_cast<boost::any>(m["Operand"]));
    }
    if (m.find("Operands") != m.end() && !m["Operands"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Operands"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Operands"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      operands = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<string>(boost::any_cast<string>(m["OperatorType"]));
    }
  }


  virtual ~QueryCostCenterRuleResponseBodyFilterExpression() = default;
};
class QueryCostCenterRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> costCenterId{};
  shared_ptr<QueryCostCenterRuleResponseBodyFilterExpression> filterExpression{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<long> isDeleted{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rootCostCenterId{};
  shared_ptr<string> status{};

  QueryCostCenterRuleResponseBody() {}

  explicit QueryCostCenterRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costCenterId) {
      res["CostCenterId"] = boost::any(*costCenterId);
    }
    if (filterExpression) {
      res["FilterExpression"] = filterExpression ? boost::any(filterExpression->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (ownerAccountId) {
      res["OwnerAccountId"] = boost::any(*ownerAccountId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rootCostCenterId) {
      res["RootCostCenterId"] = boost::any(*rootCostCenterId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostCenterId") != m.end() && !m["CostCenterId"].empty()) {
      costCenterId = make_shared<long>(boost::any_cast<long>(m["CostCenterId"]));
    }
    if (m.find("FilterExpression") != m.end() && !m["FilterExpression"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterExpression"].type()) {
        QueryCostCenterRuleResponseBodyFilterExpression model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterExpression"]));
        filterExpression = make_shared<QueryCostCenterRuleResponseBodyFilterExpression>(model1);
      }
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<long>(boost::any_cast<long>(m["IsDeleted"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("OwnerAccountId") != m.end() && !m["OwnerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["OwnerAccountId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RootCostCenterId") != m.end() && !m["RootCostCenterId"].empty()) {
      rootCostCenterId = make_shared<long>(boost::any_cast<long>(m["RootCostCenterId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryCostCenterRuleResponseBody() = default;
};
class QueryCostCenterRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCostCenterRuleResponseBody> body{};

  QueryCostCenterRuleResponse() {}

  explicit QueryCostCenterRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCostCenterRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCostCenterRuleResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCostCenterRuleResponse() = default;
};
class SetFundAccountCreditAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> creditAmount{};
  shared_ptr<string> currency{};
  shared_ptr<long> fundAccountId{};

  SetFundAccountCreditAmountRequest() {}

  explicit SetFundAccountCreditAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creditAmount) {
      res["CreditAmount"] = boost::any(*creditAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreditAmount") != m.end() && !m["CreditAmount"].empty()) {
      creditAmount = make_shared<string>(boost::any_cast<string>(m["CreditAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~SetFundAccountCreditAmountRequest() = default;
};
class SetFundAccountCreditAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  SetFundAccountCreditAmountResponseBody() {}

  explicit SetFundAccountCreditAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetFundAccountCreditAmountResponseBody() = default;
};
class SetFundAccountCreditAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetFundAccountCreditAmountResponseBody> body{};

  SetFundAccountCreditAmountResponse() {}

  explicit SetFundAccountCreditAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetFundAccountCreditAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetFundAccountCreditAmountResponseBody>(model1);
      }
    }
  }


  virtual ~SetFundAccountCreditAmountResponse() = default;
};
class SetFundAccountLowAvailableAmountAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};
  shared_ptr<string> thresholdAmount{};

  SetFundAccountLowAvailableAmountAlarmRequest() {}

  explicit SetFundAccountLowAvailableAmountAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (thresholdAmount) {
      res["ThresholdAmount"] = boost::any(*thresholdAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("ThresholdAmount") != m.end() && !m["ThresholdAmount"].empty()) {
      thresholdAmount = make_shared<string>(boost::any_cast<string>(m["ThresholdAmount"]));
    }
  }


  virtual ~SetFundAccountLowAvailableAmountAlarmRequest() = default;
};
class SetFundAccountLowAvailableAmountAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  SetFundAccountLowAvailableAmountAlarmResponseBody() {}

  explicit SetFundAccountLowAvailableAmountAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetFundAccountLowAvailableAmountAlarmResponseBody() = default;
};
class SetFundAccountLowAvailableAmountAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetFundAccountLowAvailableAmountAlarmResponseBody> body{};

  SetFundAccountLowAvailableAmountAlarmResponse() {}

  explicit SetFundAccountLowAvailableAmountAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetFundAccountLowAvailableAmountAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetFundAccountLowAvailableAmountAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~SetFundAccountLowAvailableAmountAlarmResponse() = default;
};
class SetSavingPlanUserDeductRuleRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  SetSavingPlanUserDeductRuleRequestEcIdAccountIds() {}

  explicit SetSavingPlanUserDeductRuleRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~SetSavingPlanUserDeductRuleRequestEcIdAccountIds() = default;
};
class SetSavingPlanUserDeductRuleRequestUserDeductRules : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> moduleCode{};
  shared_ptr<bool> skipDeduct{};

  SetSavingPlanUserDeductRuleRequestUserDeductRules() {}

  explicit SetSavingPlanUserDeductRuleRequestUserDeductRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (skipDeduct) {
      res["SkipDeduct"] = boost::any(*skipDeduct);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("SkipDeduct") != m.end() && !m["SkipDeduct"].empty()) {
      skipDeduct = make_shared<bool>(boost::any_cast<bool>(m["SkipDeduct"]));
    }
  }


  virtual ~SetSavingPlanUserDeductRuleRequestUserDeductRules() = default;
};
class SetSavingPlanUserDeductRuleRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};
  shared_ptr<string> spnInstanceCode{};
  shared_ptr<vector<SetSavingPlanUserDeductRuleRequestUserDeductRules>> userDeductRules{};

  SetSavingPlanUserDeductRuleRequest() {}

  explicit SetSavingPlanUserDeductRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (spnInstanceCode) {
      res["SpnInstanceCode"] = boost::any(*spnInstanceCode);
    }
    if (userDeductRules) {
      vector<boost::any> temp1;
      for(auto item1:*userDeductRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserDeductRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetSavingPlanUserDeductRuleRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("SpnInstanceCode") != m.end() && !m["SpnInstanceCode"].empty()) {
      spnInstanceCode = make_shared<string>(boost::any_cast<string>(m["SpnInstanceCode"]));
    }
    if (m.find("UserDeductRules") != m.end() && !m["UserDeductRules"].empty()) {
      if (typeid(vector<boost::any>) == m["UserDeductRules"].type()) {
        vector<SetSavingPlanUserDeductRuleRequestUserDeductRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserDeductRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetSavingPlanUserDeductRuleRequestUserDeductRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userDeductRules = make_shared<vector<SetSavingPlanUserDeductRuleRequestUserDeductRules>>(expect1);
      }
    }
  }


  virtual ~SetSavingPlanUserDeductRuleRequest() = default;
};
class SetSavingPlanUserDeductRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<string> spnInstanceCode{};
  shared_ptr<string> userDeductRulesShrink{};

  SetSavingPlanUserDeductRuleShrinkRequest() {}

  explicit SetSavingPlanUserDeductRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (spnInstanceCode) {
      res["SpnInstanceCode"] = boost::any(*spnInstanceCode);
    }
    if (userDeductRulesShrink) {
      res["UserDeductRules"] = boost::any(*userDeductRulesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("SpnInstanceCode") != m.end() && !m["SpnInstanceCode"].empty()) {
      spnInstanceCode = make_shared<string>(boost::any_cast<string>(m["SpnInstanceCode"]));
    }
    if (m.find("UserDeductRules") != m.end() && !m["UserDeductRules"].empty()) {
      userDeductRulesShrink = make_shared<string>(boost::any_cast<string>(m["UserDeductRules"]));
    }
  }


  virtual ~SetSavingPlanUserDeductRuleShrinkRequest() = default;
};
class SetSavingPlanUserDeductRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  SetSavingPlanUserDeductRuleResponseBody() {}

  explicit SetSavingPlanUserDeductRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetSavingPlanUserDeductRuleResponseBody() = default;
};
class SetSavingPlanUserDeductRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetSavingPlanUserDeductRuleResponseBody> body{};

  SetSavingPlanUserDeductRuleResponse() {}

  explicit SetSavingPlanUserDeductRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetSavingPlanUserDeductRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSavingPlanUserDeductRuleResponseBody>(model1);
      }
    }
  }


  virtual ~SetSavingPlanUserDeductRuleResponse() = default;
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
  AddCouponDeductTagResponse addCouponDeductTagWithOptions(shared_ptr<AddCouponDeductTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddCouponDeductTagResponse addCouponDeductTag(shared_ptr<AddCouponDeductTagRequest> request);
  AllocateCostCenterResourceResponse allocateCostCenterResourceWithOptions(shared_ptr<AllocateCostCenterResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateCostCenterResourceResponse allocateCostCenterResource(shared_ptr<AllocateCostCenterResourceRequest> request);
  CancelFundAccountLowAvailableAmountAlarmResponse cancelFundAccountLowAvailableAmountAlarmWithOptions(shared_ptr<CancelFundAccountLowAvailableAmountAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelFundAccountLowAvailableAmountAlarmResponse cancelFundAccountLowAvailableAmountAlarm(shared_ptr<CancelFundAccountLowAvailableAmountAlarmRequest> request);
  CreateCostCenterResponse createCostCenterWithOptions(shared_ptr<CreateCostCenterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCostCenterResponse createCostCenter(shared_ptr<CreateCostCenterRequest> request);
  CreateCostCenterRuleResponse createCostCenterRuleWithOptions(shared_ptr<CreateCostCenterRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCostCenterRuleResponse createCostCenterRule(shared_ptr<CreateCostCenterRuleRequest> request);
  CreateFundAccountPayRelationResponse createFundAccountPayRelationWithOptions(shared_ptr<CreateFundAccountPayRelationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFundAccountPayRelationResponse createFundAccountPayRelation(shared_ptr<CreateFundAccountPayRelationRequest> request);
  CreateFundAccountTransferResponse createFundAccountTransferWithOptions(shared_ptr<CreateFundAccountTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFundAccountTransferResponse createFundAccountTransfer(shared_ptr<CreateFundAccountTransferRequest> request);
  CreateInvoiceResponse createInvoiceWithOptions(shared_ptr<CreateInvoiceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInvoiceResponse createInvoice(shared_ptr<CreateInvoiceRequest> request);
  CreateReportDefinitionResponse createReportDefinitionWithOptions(shared_ptr<CreateReportDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateReportDefinitionResponse createReportDefinition(shared_ptr<CreateReportDefinitionRequest> request);
  DeleteCostCenterResponse deleteCostCenterWithOptions(shared_ptr<DeleteCostCenterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCostCenterResponse deleteCostCenter(shared_ptr<DeleteCostCenterRequest> request);
  DeleteCostCenterRuleResponse deleteCostCenterRuleWithOptions(shared_ptr<DeleteCostCenterRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCostCenterRuleResponse deleteCostCenterRule(shared_ptr<DeleteCostCenterRuleRequest> request);
  DeleteCouponDeductTagResponse deleteCouponDeductTagWithOptions(shared_ptr<DeleteCouponDeductTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCouponDeductTagResponse deleteCouponDeductTag(shared_ptr<DeleteCouponDeductTagRequest> request);
  DeleteReportDefinitionResponse deleteReportDefinitionWithOptions(shared_ptr<DeleteReportDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteReportDefinitionResponse deleteReportDefinition(shared_ptr<DeleteReportDefinitionRequest> request);
  DescribeCouponResponse describeCouponWithOptions(shared_ptr<DescribeCouponRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCouponResponse describeCoupon(shared_ptr<DescribeCouponRequest> request);
  DescribeCouponItemListResponse describeCouponItemListWithOptions(shared_ptr<DescribeCouponItemListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCouponItemListResponse describeCouponItemList(shared_ptr<DescribeCouponItemListRequest> request);
  DescribeUserSpnSummaryInfoResponse describeUserSpnSummaryInfoWithOptions(shared_ptr<DescribeUserSpnSummaryInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserSpnSummaryInfoResponse describeUserSpnSummaryInfo(shared_ptr<DescribeUserSpnSummaryInfoRequest> request);
  GetFundAccountAvailableAmountResponse getFundAccountAvailableAmountWithOptions(shared_ptr<GetFundAccountAvailableAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountAvailableAmountResponse getFundAccountAvailableAmount(shared_ptr<GetFundAccountAvailableAmountRequest> request);
  GetFundAccountCanAllocateCreditAmountResponse getFundAccountCanAllocateCreditAmountWithOptions(shared_ptr<GetFundAccountCanAllocateCreditAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountCanAllocateCreditAmountResponse getFundAccountCanAllocateCreditAmount(shared_ptr<GetFundAccountCanAllocateCreditAmountRequest> request);
  GetFundAccountCanRecycleAmountResponse getFundAccountCanRecycleAmountWithOptions(shared_ptr<GetFundAccountCanRecycleAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountCanRecycleAmountResponse getFundAccountCanRecycleAmount(shared_ptr<GetFundAccountCanRecycleAmountRequest> request);
  GetFundAccountCanTransferAmountResponse getFundAccountCanTransferAmountWithOptions(shared_ptr<GetFundAccountCanTransferAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountCanTransferAmountResponse getFundAccountCanTransferAmount(shared_ptr<GetFundAccountCanTransferAmountRequest> request);
  GetFundAccountCanWithdrawAmountResponse getFundAccountCanWithdrawAmountWithOptions(shared_ptr<GetFundAccountCanWithdrawAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountCanWithdrawAmountResponse getFundAccountCanWithdrawAmount(shared_ptr<GetFundAccountCanWithdrawAmountRequest> request);
  GetFundAccountLowAvailableAmountAlarmResponse getFundAccountLowAvailableAmountAlarmWithOptions(shared_ptr<GetFundAccountLowAvailableAmountAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountLowAvailableAmountAlarmResponse getFundAccountLowAvailableAmountAlarm(shared_ptr<GetFundAccountLowAvailableAmountAlarmRequest> request);
  GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetailsWithOptions(shared_ptr<GetFundAccountTransactionDetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetails(shared_ptr<GetFundAccountTransactionDetailsRequest> request);
  GetOrderDetailResponse getOrderDetailWithOptions(shared_ptr<GetOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrderDetailResponse getOrderDetail(shared_ptr<GetOrderDetailRequest> request);
  GetOrdersResponse getOrdersWithOptions(shared_ptr<GetOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrdersResponse getOrders(shared_ptr<GetOrdersRequest> request);
  GetSavingPlanDeductableCommodityResponse getSavingPlanDeductableCommodityWithOptions(shared_ptr<GetSavingPlanDeductableCommodityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSavingPlanDeductableCommodityResponse getSavingPlanDeductableCommodity(shared_ptr<GetSavingPlanDeductableCommodityRequest> request);
  GetSavingPlanShareAccountsResponse getSavingPlanShareAccountsWithOptions(shared_ptr<GetSavingPlanShareAccountsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSavingPlanShareAccountsResponse getSavingPlanShareAccounts(shared_ptr<GetSavingPlanShareAccountsRequest> request);
  GetSavingPlanUserDeductRuleResponse getSavingPlanUserDeductRuleWithOptions(shared_ptr<GetSavingPlanUserDeductRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSavingPlanUserDeductRuleResponse getSavingPlanUserDeductRule(shared_ptr<GetSavingPlanUserDeductRuleRequest> request);
  ListCouponDeductTagResponse listCouponDeductTagWithOptions(shared_ptr<ListCouponDeductTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCouponDeductTagResponse listCouponDeductTag(shared_ptr<ListCouponDeductTagRequest> request);
  ListFundAccountResponse listFundAccountWithOptions(shared_ptr<ListFundAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFundAccountResponse listFundAccount(shared_ptr<ListFundAccountRequest> request);
  ListFundAccountPayRelationResponse listFundAccountPayRelationWithOptions(shared_ptr<ListFundAccountPayRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFundAccountPayRelationResponse listFundAccountPayRelation(shared_ptr<ListFundAccountPayRelationRequest> request);
  ListInvoiceCandidateResponse listInvoiceCandidateWithOptions(shared_ptr<ListInvoiceCandidateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInvoiceCandidateResponse listInvoiceCandidate(shared_ptr<ListInvoiceCandidateRequest> request);
  ListInvoiceTitleResponse listInvoiceTitleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInvoiceTitleResponse listInvoiceTitle();
  ListReportDefinitionsResponse listReportDefinitionsWithOptions(shared_ptr<ListReportDefinitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListReportDefinitionsResponse listReportDefinitions(shared_ptr<ListReportDefinitionsRequest> request);
  ModifyCostCenterResponse modifyCostCenterWithOptions(shared_ptr<ModifyCostCenterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCostCenterResponse modifyCostCenter(shared_ptr<ModifyCostCenterRequest> request);
  ModifyCostCenterRuleResponse modifyCostCenterRuleWithOptions(shared_ptr<ModifyCostCenterRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCostCenterRuleResponse modifyCostCenterRule(shared_ptr<ModifyCostCenterRuleRequest> request);
  QueryCostCenterResponse queryCostCenterWithOptions(shared_ptr<QueryCostCenterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCostCenterResponse queryCostCenter(shared_ptr<QueryCostCenterRequest> request);
  QueryCostCenterResourceResponse queryCostCenterResourceWithOptions(shared_ptr<QueryCostCenterResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCostCenterResourceResponse queryCostCenterResource(shared_ptr<QueryCostCenterResourceRequest> request);
  QueryCostCenterRuleResponse queryCostCenterRuleWithOptions(shared_ptr<QueryCostCenterRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCostCenterRuleResponse queryCostCenterRule(shared_ptr<QueryCostCenterRuleRequest> request);
  SetFundAccountCreditAmountResponse setFundAccountCreditAmountWithOptions(shared_ptr<SetFundAccountCreditAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetFundAccountCreditAmountResponse setFundAccountCreditAmount(shared_ptr<SetFundAccountCreditAmountRequest> request);
  SetFundAccountLowAvailableAmountAlarmResponse setFundAccountLowAvailableAmountAlarmWithOptions(shared_ptr<SetFundAccountLowAvailableAmountAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetFundAccountLowAvailableAmountAlarmResponse setFundAccountLowAvailableAmountAlarm(shared_ptr<SetFundAccountLowAvailableAmountAlarmRequest> request);
  SetSavingPlanUserDeductRuleResponse setSavingPlanUserDeductRuleWithOptions(shared_ptr<SetSavingPlanUserDeductRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSavingPlanUserDeductRuleResponse setSavingPlanUserDeductRule(shared_ptr<SetSavingPlanUserDeductRuleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BssOpenApi20230930

#endif
